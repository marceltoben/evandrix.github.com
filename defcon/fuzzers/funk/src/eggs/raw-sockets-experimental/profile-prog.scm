(use raw-sockets-experimental)

(define bthr #f)
(define sock #f)
(define nleft #f)
(define wthr #f)
(define wnum 0)

(define (make-sock)
    (set! sock (open-raw-socket "lo"))
    (set! nleft 1000)
    (raw-socket-add-recver sock 'foo
        (lambda (p l)
            (set! nleft (- nleft 1))
            (display (conc "nleft : " nleft "\n"))
            (display (conc l " :  " p "\n"))
            (and (< nleft 0)
                 (thread-specific-set! wthr #f)
                 (thread-resume! bthr)))))


(define (end-test)
;    (thread-terminate! wthr)
    (thread-join! wthr)
    (close-raw-socket sock)
    (thread-resume! bthr)
    wnum)

(define (write-loop)
    (let loop ((p   (u8vector   0   0   0   0   0   0   0   0
                                0   0   0   0   8   0  69   0
                                0  84   0   0  64   0  64   1
                               60 167 127   0   0   1 127   0
                                0   1   8   0  42 199 205  11
                                1   0  70 100  33  71 105  63
                                4   0   0   1   2   3   4   5
                                6   7   8   9  10  11  12  13
                               14  15  16  17  18  19  20  21
                               22  23  24  25  26  27  28  29
                               30  31  32  33  34  35  36  37
                               38  39  40  41  42  43  44  45
                               46  47))
               (c   (current-thread)))
        (raw-socket-send sock p)
        (set! wnum (+ 1 wnum))
        (and (thread-specific c) (loop p c))))

(define (start-test args)
    (set! bthr (current-thread))
    (make-sock)
    (set! wthr (make-thread write-loop))
    (thread-quantum-set! wthr 1000)
    (thread-start! wthr)
    (thread-suspend! (current-thread))
    (end-test))

(start-test (command-line-arguments))
        
