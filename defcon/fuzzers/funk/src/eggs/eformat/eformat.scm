;;;
;;; eformat.scm - extended format
;;; written by elf@ephemeral.net
;;; dialect:  r6rs
;;; srfis:    1, 6, 13, 23
;;;

;;; extended format procedure
;;;
;;; usage: (eformat <port> <fmtstr> <args>...)
;;;
;;; arguments are:
;;;     <port>:    output port | #t for (current-output-port) | #f for string
;;;     <fmtstr>:  defines format replacements (below)
;;;     <args>:    substitutes into replacement variables
;;;
;;; fmtstr is any number of literal characters and format substitutions.
;;; format substitutions are of the form ~[R][P][M],[X].[C][T] :
;;;     [R]:  right-justified specifier (- char) (optional)
;;;     [P]:  pad with 0s instead of space (0 char) (optional)
;;;     [M]:  minimum number of chars to output (int or *) (optional)
;;;     [X]:  maximum number of chars to output (int or *) (optional)
;;;     [C]:  number of repetitions of A/S; number of args for F
;;;     [T]:  type:
;;;               S/s : calls (write)
;;;               A/a : calls (display)
;;;               P/p : pad (no linked argument, requires an M specifier)
;;;               X/x : integer - display in hex
;;;               O/o : integer - display in octal
;;;               B/b : integer - display in binary
;;;               L/l : list with display (see below)
;;;               W/w : list with write (see below)
;;;               T/t : list with special (see below)
;;;               F/f : subformat (see below)
;;;               R/r : line wrapping (see below)
;;;               ~   : a literal ~ 
;;;
;;;     * in place of an integer for [M] or [X] takes the next argument, which
;;;     must be an integer, for the length.
;;;
;;;     type F takes in a fmtstr as its argument, which is substituted at 
;;;     that location in the currently-processed fmtstr.  this allows nested
;;;     eformat calls.  [C] is required for F type.
;;;
;;;     types X, O and B take in an integer as an argument, performing the 
;;;     specified output conversion.  X will display in caps.
;;;
;;;     types L and W take in two arguments, a list and a separator.  
;;;     L calls display and W calls write to show each element of the list 
;;;     spaced with the separator.
;;;     type T takes in a third arg, a subfmt string, which runs:
;;;         (apply eformat #f subfmt element)
;;;     for each element of the list.  if element is not a list, it runs
;;;     without the apply.  this allows for special formatting of lists.
;;;     
;;;     type R does not take in an argument, and must be specified first in 
;;;     the fmtstr.  this indicates to eformat to break lines at a given
;;;     column to avoid wrapped words.  it takes the special form:
;;;         ~[wrap col].[indent spaces]R
;;;     where [wrap col] is the max column before breaking and [indent spaces]
;;;     is the number of spaces to indent all following lines.  this will
;;;     automatically add a newline at the end of input, so be careful.  this
;;;     will also take any embedded \n's as resets (ie, don't indent the
;;;     following line, resume indentation on the next).
;;;     
;;;
;;; examples:
;;;     (eformat #f "~A" 14)                          => "14"
;;;     (eformat #f "~8A" 14)                         => "14      "
;;;     (eformat #f "~-8A 14)                         => "      14"
;;;     (eformat #f "~04A" 14   )                     => "0014"
;;;     (eformat #f "~3A ~.2F ~2A" 14 "~A ~A" 1 2 3)  => " 14 1 2   3" 
;;;     (eformat #f "~L" '(1 2 3) "")                 => "123"
;;;
;;; note: this can be done trivially with regular expressions, but as they are
;;;       not yet standardised, this should be a portable equivalent.



(require-extension syntax-case)  ; chicken define-syntax
(require-extension srfi-1)       ; list library
(require-extension srfi-6)       ; string ports
(require-extension srfi-13)      ; string library
(require-extension srfi-14)      ; character set library
(require-extension srfi-23)      ; error reporting


(eval-when (compile)
    (declare
        ;(unit eformat)
        (uses library extras eval srfi-1 srfi-13 srfi-14)
        (bound-to-procedure
            efmt:call-with-output-string
            efmt:call-with-input-string
            efmt:char->num
            char->num
            efmt:o
            efmt:rj
            efmt:zp
            efmt:mn
            efmt:mx
            efmt:cnt
            efmt:f
            efmt:wcol
            efmt:ispc
            efmt:rj!
            efmt:zp!
            efmt:mn!
            efmt:mx!
            efmt:cnt!
            efmt:f!
            efmt:wcol!
            efmt:ispc!
            efmt:new-v
            efmt:reset-v
            efmt:err-arg
            efmt:err-spec
            efmt:err-type
            efmt:err-subfmt
            efmt:err-star
            efmt:err-num
            efmt:err-list
            efmt:err-listfmt
            efmt:err-wrap
            efmt:parse
            efmt:parse-subst
            efmt:parse-right
            efmt:parse-zero
            efmt:parse-comma
            efmt:parse-dot
            efmt:parse-mns
            efmt:parse-mxs
            efmt:parse-cnts
            efmt:parse-min
            efmt:parse-max
            efmt:parse-cnt
            efmt:parse-type
            efmt:handle-subfmt
            efmt:handle-num
            efmt:handle-pos
            efmt:handle-twos
            efmt:handle-list
            efmt:handle-lists-aux
            efmt:handle-lists
            efmt:write
            efmt:display
            efmt:process-min
            efmt:process-max
            efmt:process-cnt
            efmt:wrap-aux
            efmt:wrap-white
            efmt:wrap
            eformat
            errformat
            wrap-text
            )
        (export
            char->num
            eformat
            errformat
            wrap-text
            )
        (emit-exports "eformat.exports")
        ;(inline)
        ;(inline-limit 100)
        (disable-interrupts)
        (no-bound-checks)
        (no-procedure-checks)
        (standard-bindings)
        (extended-bindings)
        (usual-integrations)))



;; string port extensions for eformat

(define (efmt:call-with-output-string proc)
    (let ((o   (open-output-string)))
        (proc o)
        (let ((r   (get-output-string o)))
            (close-output-port o)
            r)))


(define (efmt:call-with-input-string s proc)
    (let* ((i   (open-input-string s))
           (r   (proc i)))
        (close-input-port i)
        r))



;; conversion functions

(define (efmt:char->num num v n)
    (+ (* 10 (or (vector-ref v n) 0))
       (- (char->integer num) 48)))

(define (char->num num #!optional (orig 0) (op +))
    (op (* 10 orig) (- (char->integer num) 48)))



;; eformat helper functions

;; argument names:
;;     fmtl:    format list (format string turned into char list)
;;     pos:     current position in the string
;;     parg:    number of arguments processed
;;     argl:    list of remaining arguments
;;     o:       string output port for result
;;     r:       string for substitution result in progress
;;     spos:    starting position (during specifier handling)
;;     rj:      right justified (boolean)
;;     zp:      zero padded (boolean)
;;     mn:      minimum string length (integer or #f for no minimum)
;;     mx:      maximum string length (integer)
;;     cnt:     count or number of args (integer)
;;     expc:    number of args expected
;;     gotc:    number of args received
;;     ival:    invalid value for star/subfmt subtitution
;;     f:       first char/arg?
;;     w:       wrap parameters


;; argument vector

(define (efmt:o v)          (vector-ref v 0))
(define (efmt:rj v)         (vector-ref v 1))
(define (efmt:zp v)         (vector-ref v 2))
(define (efmt:mn v)         (vector-ref v 3))
(define (efmt:mx v)         (vector-ref v 4))
(define (efmt:cnt v)        (vector-ref v 5))
(define (efmt:f v)          (vector-ref v 6))
(define (efmt:wcol v)       (vector-ref v 7))
(define (efmt:ispc v)       (vector-ref v 8))

(define (efmt:rj! v)        (vector-set! v 1 #t))
(define (efmt:zp! v)        (vector-set! v 2 #t))
(define (efmt:mn! v n)      (vector-set! v 3 (efmt:char->num n v 3)))
(define (efmt:mx! v n)      (vector-set! v 4 (efmt:char->num n v 4)))
(define (efmt:cnt! v n)     (vector-set! v 5 (efmt:char->num n v 5)))
(define (efmt:f! v)         (vector-set! v 6 #f))
(define (efmt:wcol! v n)    (vector-set! v 7 n))
(define (efmt:ispc! v n)    (vector-set! v 8 n))

(define (efmt:new-v)
    (vector (open-output-string) #f #f #f #f #f #t #f #f)) 

(define (efmt:reset-v v)
    (vector (efmt:o v) #f #f #f #f #f #f (efmt:wcol v) (efmt:ispc v)))


;; error procedures

;; error for invalid number of arguments
(define (efmt:err-arg v pos expc gotc)
    (close-output-port (efmt:o v))
    (error 'eformat (string-append "Invalid number of arguments - expected "
                                   (number->string expc)
                                   ", got "
                                   (number->string gotc)
                                   " at position "
                                   (number->string pos))))


;; error for invalid specifier
(define (efmt:err-spec v spos)
    (close-output-port (efmt:o v))
    (error 'eformat (string-append "Invalid format specifier - "
                                   "starting at position "
                                   (number->string spos))))


;; generic type errors
(define (efmt:err-type v pos which ival type)
    (close-output-port (efmt:o v))
    (error 'eformat (string-append "Invalid variable for "
                                   which
                                   " substitution at position "
                                   (number->string pos)
                                   " - '"
                                   (efmt:call-with-output-string
                                       (lambda (o) (write ival o)))
                                   "' is not a "
                                   type)))

;; error for invalid subformat variable
(define (efmt:err-subfmt v pos ival)
    (efmt:err-type v pos "subfmt" ival "string"))


;; error for invalid number variable
(define (efmt:err-num v pos ival)
    (efmt:err-type v pos "number" ival "integer"))


;; error for invalid star variable
(define (efmt:err-star v pos ival)
    (efmt:err-type v pos "star" ival "positive integer"))


;; error for invalid list variable
(define (efmt:err-list v pos ival)
    (efmt:err-type v pos "list" ival "list"))


;; error for invalid list format
(define (efmt:err-listfmt v pos ival)
    (efmt:err-type v pos "list subfmt" ival "string"))


;; error for invalid wrap args
(define (efmt:err-wrap v spos)
    (close-output-port (efmt:o v))
    (error 'eformat (string-append "indent cannot be greater than wrapcol: "
                                   (number->string (efmt:mn v))
                                   " < "
                                   (number->string (efmt:cnt v))
                                   "  at starting position "
                                   (number->string spos))))


;; parse the format specifier
(define (efmt:parse fmtl pos parg argl v)
    (cond ((null? fmtl)
              (if (null? argl)
                  (let ((r   (get-output-string (efmt:o v))))
                      (close-output-port (efmt:o v))
                      (if (efmt:wcol v)
                          (efmt:wrap r (efmt:wcol v) (efmt:ispc v))
                          r))
                  (efmt:err-arg v pos parg (+ parg (length argl)))))
          ((eq? #\~ (car fmtl))
              (efmt:parse-subst (cdr fmtl) (+ 1 pos) (+ 1 parg) pos argl v))
          (else
              (display (car fmtl) (efmt:o v))
              (efmt:f! v)
              (efmt:parse (cdr fmtl) (+ 1 pos) parg argl v))))


;; parse after substitution char (#\~)
(define (efmt:parse-subst fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\~)
            (display #\~ (efmt:o v))
            (efmt:parse (cdr fmtl) (+ 1 pos) (- parg 1) argl (efmt:reset-v v)))
        ((#\-)
            (efmt:parse-right (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\,)
            (efmt:parse-comma (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\.)
            (efmt:parse-dot (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\*)
            (efmt:parse-mns (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\0)
            (efmt:parse-zero (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mn! v (car fmtl))
            (efmt:parse-min (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:parse-type fmtl pos parg spos argl v))))


;; parse after right-justification specifer
(define (efmt:parse-right fmtl pos parg spos argl v)
    (efmt:f! v)
    (efmt:rj! v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\0)
            (efmt:parse-zero (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\*)
            (efmt:parse-mns (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mn! v (car fmtl))
            (efmt:parse-min (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:err-spec v spos))))


;; parse after zero-padding specifier (initial #\0)
(define (efmt:parse-zero fmtl pos parg spos argl v)
    (efmt:f! v)
    (efmt:zp! v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\*)
            (efmt:parse-mns (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mn! v (car fmtl))
            (efmt:parse-min (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:err-spec v spos))))


;; parse after a comma (beginning of maximum specifier)
(define (efmt:parse-comma fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\*)
            (efmt:parse-mxs (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mx! v (car fmtl))
            (efmt:parse-max (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:err-spec v spos))))


;; parse after a dot (count/argcount specifier)
(define (efmt:parse-dot fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\*)
            (efmt:parse-cnts (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:cnt! v (car fmtl))
            (efmt:parse-cnt (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:err-spec v spos))))


;; parse after a minimum length star specifier
(define (efmt:parse-mns fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (and (null? argl)
         (efmt:err-arg v pos parg (- parg 1)))
    (efmt:mn! v (car argl))
    (or (and (integer? (efmt:mn v)) (> (efmt:mn v) 0))
        (efmt:err-star v pos (efmt:mn v)))
    (case (car fmtl)
        ((#\,)
            (efmt:parse-comma (cdr fmtl) (+ 1 pos) (+ 1 parg) spos
                              (cdr argl) v))
        ((#\.)
            (efmt:parse-dot (cdr fmtl) (+ 1 pos) (+ 1 parg) spos (cdr argl) v))
        (else
            (efmt:parse-type fmtl pos (+ 1 parg) spos (cdr argl) v))))


;; parse after a maximum length star specifier
(define (efmt:parse-mxs fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (and (null? argl)
         (efmt:err-arg v pos (+ 1 parg) (- parg 1)))
    (efmt:mx! v (car argl))
    (or (and (integer? (efmt:mx v)) (> (efmt:mx v) 0))
        (efmt:err-star v pos (efmt:mx v)))
    (if (eq? #\. (car fmtl))
        (efmt:parse-dot (cdr fmtl) (+ 1 pos) (+ 1 parg) spos (cdr argl) v)
        (efmt:parse-type fmtl pos (+ 1 parg) spos (cdr argl) v)))


;; parse after a count star specifier
(define (efmt:parse-cnts fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (and (null? argl)
         (efmt:err-arg v pos (+ 1 parg) (- parg 1)))
    (efmt:cnt! v (car argl))
    (or (and (integer? (efmt:cnt v))
             (if (or (eq? #\f (char-downcase (car fmtl)))
                     (eq? #\r (char-downcase (car fmtl))))
                 (> (efmt:cnt v) -1)
                 (> (efmt:cnt v) 0)))
        (efmt:err-star v pos (efmt:cnt v)))
    (efmt:parse-type fmtl pos (+ 1 parg) spos (cdr argl) v))


;; parse a minimum length specifier
(define (efmt:parse-min fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\,)
            (efmt:parse-comma (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\.)
            (efmt:parse-dot (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mn! v (car fmtl))
            (efmt:parse-min (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:parse-type fmtl pos parg spos argl v))))


;; parse a maximum length specifer
(define (efmt:parse-max fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (case (car fmtl)
        ((#\.)
            (efmt:parse-dot (cdr fmtl) (+ 1 pos) parg spos argl v))
        ((#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9)
            (efmt:mx! v (car fmtl))
            (efmt:parse-max (cdr fmtl) (+ 1 pos) parg spos argl v))
        (else
            (efmt:parse-type fmtl pos parg spos argl v))))


;; parse a count specifier
(define (efmt:parse-cnt fmtl pos parg spos argl v)
    (and (null? fmtl)
         (efmt:err-spec v spos))
    (if (char-numeric? (car fmtl))
        (begin
            (efmt:cnt! v (car fmtl))
            (efmt:parse-cnt (cdr fmtl) (+ 1 pos) parg spos argl v))
        (if (or (> (efmt:cnt v) 0)
                (and (> (efmt:cnt v) -1)
                     (or (eq? #\f (char-downcase (car fmtl)))
                         (eq? #\r (char-downcase (car fmtl))))))
            (efmt:parse-type fmtl pos parg spos argl v)
            (efmt:err-spec v spos))))


;; parse type flag
(define (efmt:parse-type fmtl pos parg spos argl v)
    (case (car fmtl)
        ((#\a #\A)
            (efmt:display fmtl pos parg argl v))
        ((#\s #\S)
            (efmt:write fmtl pos parg argl v))
        ((#\b #\B)
            (efmt:handle-num fmtl pos parg argl 2 v))
        ((#\o #\O)
            (efmt:handle-num fmtl pos parg argl 8 v))
        ((#\x)
            (efmt:handle-num fmtl pos parg argl 16 v))
        ((#\X)
            (efmt:handle-num fmtl pos parg argl 17 v))
        ((#\l #\L)
            (efmt:handle-list fmtl pos parg argl #t v))
        ((#\w #\W)
            (efmt:handle-list fmtl pos parg argl #f v))
        ((#\t #\T)
            (efmt:handle-lists fmtl pos parg argl v))
        ((#\p #\P)
            (if (and (efmt:mn v) (not (efmt:mx v)) (not (efmt:cnt v)))
                (efmt:display fmtl pos (- parg 1) (cons "" argl) v)
                (efmt:err-spec v spos)))
        ((#\f #\F)
            (if (efmt:cnt v)
                (efmt:handle-subfmt fmtl pos parg argl v)
                (efmt:err-spec v spos)))
        ((#\r #\R)
            (if (and (efmt:f v) (efmt:mn v) (not (efmt:mx v)) (efmt:cnt v))
                (if (< (efmt:cnt v) (efmt:mn v))
                    (begin
                        (efmt:wcol! v (efmt:mn v))
                        (efmt:ispc! v (efmt:cnt v))
                        (efmt:parse (cdr fmtl) (+ 1 pos) (- parg 1) argl
                                    (efmt:reset-v v)))
                    (efmt:err-wrap v spos))
                (efmt:err-spec v spos)))
        (else
            (efmt:err-spec v spos))))




;; handle subformat display
(define (efmt:handle-subfmt fmtl pos parg argl v)
    (and (null? argl)
         (efmt:err-arg v pos (+ parg (efmt:cnt v)) (- parg 1)))
    (let ((fmts   (car argl))
          (argl   (cdr argl))
          (cnt    (efmt:cnt v)))
        (or (string? fmts)
            (efmt:err-subfmt v pos fmts))
        (and (< (length argl) cnt)
             (efmt:err-arg v pos (+ parg cnt) (+ parg (length argl))))
        (efmt:display fmtl pos (+ parg cnt)
                      (cons (efmt:parse (string->list fmts) 0 0 (take argl cnt)
                                        (efmt:new-v))
                            (drop argl cnt))
                      v)))


;; handle list display
(define (efmt:handle-list fmtl pos parg argl fn v)
    (and (< (length argl) 2)
         (efmt:err-arg v pos (+ parg 1) (- parg 1)))
    (let ((l      (car argl))
          (sep    (cadr argl))
          (f      (if fn display write))
          (argl   (cddr argl)))
        (or (list? l)
            (efmt:err-list v pos l))
        (efmt:display fmtl pos (+ 1 parg)
                      (cons (efmt:call-with-output-string
                                (lambda (o)
                                    (f (car l) o)
                                    (for-each
                                        (lambda (x)
                                            (display sep o)
                                            (f x o))
                                        (cdr l))))
                            argl)
                      v)))


;; handle list display with fmtstr - auxiliary function
;; handles the application of each eformat to list elements
(define (efmt:handle-lists-aux o fmts data sep)
    (display sep o)
    (display (efmt:parse (string->list fmts)
                         0
                         0
                         (cond ((list? data)
                                   data)
                               ((pair? data)
                                   (unfold not-pair? car cdr data list))
                               (else
                                   (list data)))
                         (efmt:new-v))
             o))


;; handle list display 
(define (efmt:handle-lists fmtl pos parg argl v)
    (and (< (length argl) 3)
         (efmt:err-arg v pos (+ parg 2) (- parg 1)))
    (let ((l      (car argl))
          (sep    (cadr argl))
          (fmt    (caddr argl))
          (argl   (cdddr argl)))
        (or (list? l)
            (efmt:err-list v pos l))
        (or (string? fmt)
            (efmt:err-listfmt v pos fmt))
        (efmt:display fmtl pos (+ 2 parg)
                      (cons (efmt:call-with-output-string
                                (lambda (o)
                                    (efmt:handle-lists-aux o fmt (car l) "")
                                    (for-each
                                        (lambda (x)
                                            (efmt:handle-lists-aux o fmt x sep))
                                        (cdr l))))
                            argl)
                      v)))


;; handle number formats
(define (efmt:handle-num fmtl pos parg argl b v)
    (and (null? argl)
         (efmt:err-arg v pos parg (- parg 1)))
    (let ((n      (car argl))
          (argl   (cdr argl)))
        (or (integer? n)
            (efmt:err-num v pos n))
        (efmt:display fmtl pos parg
                      (cons (if (negative? n)
                                (efmt:handle-twos n b)
                                (efmt:handle-pos n b))
                            argl)
                      v)))


;; handle positive numbers
(define (efmt:handle-pos n b)
    (case b
        ((2)
            (let* ((t   (number->string n 2))
                   (l   (modulo (string-length t) 8)))
                (if (= 0 l)
                    t
                    (string-append (make-string (- 8 l) #\0) t))))
        ((8)
            (number->string n 8))
        ((16 17)
            (let ((t   (number->string n 16)))
                (if (even? (string-length t))
                    (if (= b 17)
                        (string-upcase t)
                        t)
                    (if (= b 17)
                        (string-upcase (string-append "0" t))
                        (string-append "0" t)))))))


;; handle negative twos-complement display
(define (efmt:handle-twos n b)
    (let ((t   (let* ((t    (number->string (abs n) 2))
                      (l    (string-length t)))
                   (string-append (make-string (- 8 (modulo l 8)) #\0) t))))
        (let loop ((l   (map
                            (lambda (d)
                                (if (eq? d #\0)
                                    1
                                    0))
                            (reverse (string->list t))))
                   (s   #t)
                   (i   0)
                   (r   0))
            (cond ((null? l)
                      (efmt:handle-pos r b))
                  (s
                      (if (= 0 (car l))
                          (loop (cdr l) #f (+ 1 i) (+ (arithmetic-shift 1 i) r))
                          (loop (cdr l) #t (+ 1 i) r)))
                  ((arithmetic-shift (car l) i) =>
                      (lambda (d)
                          (loop (cdr l) s (+ 1 i) (+ d r))))))))



;; call write to show an argument
(define (efmt:write fmtl pos parg argl v)
    (and (null? argl)
         (efmt:err-arg v pos parg (- parg 1)))
    (efmt:process-min (cdr fmtl) (+ 1 pos) parg (cdr argl) v
                      (or (and (efmt:mn v) (efmt:mx v)
                               (min (efmt:mn v) (efmt:mx v)))
                          (efmt:mn v))
                      (efmt:call-with-output-string
                          (lambda (o)
                              (write (car argl) o)))))


;; call display to show an argument
(define (efmt:display fmtl pos parg argl v)
    (and (null? argl)
         (efmt:err-arg v pos parg (- parg 1)))
    (efmt:process-min (cdr fmtl) (+ 1 pos) parg (cdr argl) v
                      (or (and (efmt:mn v) (efmt:mx v)
                               (min (efmt:mn v) (efmt:mx v)))
                          (efmt:mn v))
                      (efmt:call-with-output-string
                          (lambda (o)
                              (display (car argl) o)))))


;; process minimum length padding on the output
(define (efmt:process-min fmtl pos parg argl v mn r)
    (efmt:process-max fmtl pos parg argl v
                      (if (and mn (< (string-length r) mn))
                          (if (efmt:zp v)
                              (string-pad r mn #\0)
                              (if (efmt:rj v)
                                  (string-pad r mn)
                                  (string-pad-right r mn)))
                          r)))


;; process maximum length truncation 
(define (efmt:process-max fmtl pos parg argl v r)
    (efmt:process-cnt fmtl pos parg argl v
                      (if (and (efmt:mx v) (> (string-length r) (efmt:mx v)))
                          (substring r 0 (efmt:mx v))
                          r)))


;; process repetitions
(define (efmt:process-cnt fmtl pos parg argl v r)
    (display (let loop ((c   (or (efmt:cnt v) 1)))
                 (cond ((= 1 c)
                           r)
                       ((odd? c)
                           (string-append r (loop (- c 1))))
                       (else
                           ((lambda (t) (string-append t t)) (loop (/ c 2))))))
             (efmt:o v))
    (efmt:parse fmtl pos parg argl (efmt:reset-v v)))


;; auxilliary parsing procedure for wrapping
(define (efmt:wrap-aux str)
    (let loop ((s   (string->list str))
               (a   '())
               (w   (char-whitespace? (string-ref str 0)))
               (r   '()))
        (cond ((null? s)
                  (if w
                      (reverse (append (efmt:wrap-white a) r))
                      (reverse (cons (cons (length a) (reverse-list->string a))
                                     r))))
              ((char-whitespace? (car s))
                  (if w
                      (loop (cdr s) (cons (car s) a) w r)
                      (loop (cdr s) (list (car s)) #t
                            (cons (cons (length a) (reverse-list->string a))
                                  r))))
              (w
                  (loop (cdr s) (list (car s)) #f
                        (append (efmt:wrap-white a) r)))
              (else
                  (loop (cdr s) (cons (car s) a) w r)))))


;; auxilliary whitespace cleaner for wrapping
(define (efmt:wrap-white l)
    (let* ((l   (map
                    (lambda (x)
                        (case (char->integer x)
                            ((9)        0)
                            ((10)       2)
                            ((11 12)    3)
                            ((13)       5)
                            ((32)       1)))
                    l))
           (m   (lambda (l)
                    (map
                        (lambda (x)
                            (case x
                                ((#t #f)    x)
                                ((0)        9)
                                ((1)        32)
                                ((2)        10)
                                ((3)        11)))
                        l)))
           (f   (fold
                    (lambda (x r)
                        (cond ((< x 2)
                                  (if (< (caar r) 2)
                                      (cons (cons x (car r)) (cdr r))
                                      (cons (list x)
                                            (if (= 5 (caar r))
                                                (cons (cons 2 (cdar r)) (cdr r))
                                                (if (= 4 (caar r))
                                                    (cons (cdar r) (cdr r))
                                                    r)))))
                              ((< (caar r) 2)
                                  (cons (list x) r))
                              ((= 2 (caar r))
                                  (if (= 5 x)
                                      (cons (cons 4 (car r)) (cdr r))
                                      (cons (cons x (car r)) (cdr r))))
                              ((= 3 (caar r))
                                  (cons (cons x (car r)) (cdr r)))
                              ((= 4 (caar r))
                                  (cons (cons x (cdar r)) (cdr r)))
                              (else
                                  (cons (cons x (cons 2 (cdar r))) (cdr r)))))
                    (list (list (car l)))
                    (cdr l))))
        (let loop ((l   (reverse f))
                   (w   #f)
                   (r   '()))
            (cond ((null? l)
                      (if w
                          (reverse (cons (list 10 w) r))
                          (reverse r)))
                  ((< (caar l) 2)
                      (if w
                          (loop (cdr l) w r)
                          (loop (cdr l) w (cons (m (car l)) r))))
                  (w
                      (loop (cdr l) (+ (length (car l)) w) r))
                  ((memq 2 (car l))
                      (loop (cdr l) (length (car l)) r))
                  (else
                      (loop (cdr l) #f (cons (list 11 (length (car l))) r)))))))


;; handle text wrapping
(define (efmt:wrap str ncols ispc)
    (if (string-null? str)
        "\n"
        (let loop ((s   (efmt:wrap-aux str))
                   (w   #t)
                   (p   (make-string ispc #\space))
                   (e   (- ncols ispc))
                   (c   0))
            (cond ((null? s)
                      (or (and w "") "\n"))
                  ((list? (car s))
                      (if (or (= 9 (caar s)) (= 32 (caar s)))
                          (let spc ((l   (car s))
                                    (d   c)
                                    (r   0))
                              (if (null? l)
                                  (cond ((< d ncols)
                                            (string-append
                                                (make-string r #\space)
                                                (loop (cdr s) #f p e d)))
                                        ((null? (cdr s))
                                            "\n")
                                        ((list? (cadr s))
                                            (string-append
                                                (make-string (cadadr s) #\newline)
                                                (loop (cddr s) #t p e 0)))
                                        (else
                                            (string-append "\n" p
                                                (loop (cdr s) #f p e ispc))))
                                  (if (= 9 (car l))
                                      (let ((m   (- 8 (modulo d 8))))
                                          (spc (cdr l) (+ m d) (+ m r)))
                                      (spc (cdr l) (+ 1 d) (+ 1 r)))))
                          (if (= 10 (caar s))
                              (string-append
                                  (make-string (cadar s) #\newline)
                                  (loop (cdr s) #t p e 0))
                              (string-append
                                  (make-string (cadar s) #\newline)
                                  (make-string c #\space)
                                  (loop (cdr s) #f p e c)))))
                  ((< (+ (caar s) c) ncols)
                      (string-append
                          (cdar s)
                          (loop (cdr s) #f p e (+ (caar s) c))))
                  ((> (caar s) e)
                      (let ((d   (if (= c ispc) "" (string-append "\n" p))))
                          (cond ((null? (cdr s))
                                    (string-append d (cdar s) "\n"))
                                ((or (= 10 (caadr s)) (= 11 (caadr s)))
                                    (string-append
                                        d (cdar s) (if (= 10 (caddr s)) "" "\n")
                                        (loop (cdr s) #f p e ispc)))
                                ((null? (cddr s))
                                    (string-append d (cdar s) "\n"))
                                ((list? (caddr s))
                                    (string-append
                                        d (cdar s)
                                        (if (= 10 (caaddr s)) "" "\n")
                                        (loop (cddr s) #f p e ispc)))
                                (else
                                    (string-append
                                        d (cdar s) "\n" p
                                        (loop (cddr s) #f p e ispc))))))
                  ((null? (cdr s))
                      (string-append "\n" p (cdar s) "\n"))
                  (else
                      (string-append
                          "\n" p (cdar s)
                          (loop (cdr s) #f p e (+ ispc (caar s)))))))))



;; top-level eformat
(define (eformat port fmtstr . args)
    (if (string? fmtstr)
        (let ((r   (efmt:parse (string->list fmtstr) 0 0 args (efmt:new-v))))
            (cond ((not port)         r)
                  ((boolean? port)    (display r))
                  (else               (display r port))))
        (error 'eformat (string-append "Invalid format specifier - "
                                       (efmt:call-with-output-string
                                           (lambda (o)
                                               (display "'" o)
                                               (write fmtstr o)
                                               (display "'" o)))
                                       " is not a string"))))


;; errformat - extension for error reporting
;; (errformat func fmtstr vars ...)
;; calls (error func (eformat #f fmtstr vars ...))
(define (errformat func fmtstr . args)
    (error func (efmt:parse (string->list fmtstr) 0 0 args (efmt:new-v))))


;; wrap-text - simple procedure for breaking text cleanly
;; (wrap-text str max-columns indent-spaces)
(define (wrap-text str ncols ispc)
    (or (and (string? str) (not (string-null? str)))
        (error 'wrap-text "str is not a non-null string:" str))
    (or (and (integer? ncols) (> ncols 0))
        (error 'wrap-text "ncols is not a positive integer:" ncols))
    (or (and (integer? ispc) (> ispc -1))
        (error 'wrap-text "ispc is not a non-negative integer:" ispc))
    (or (< ispc ncols)
        (error 'wrap-text "ispc must be less than ncols:" ispc ncols))
    (display (efmt:wrap str ncols ispc)))

