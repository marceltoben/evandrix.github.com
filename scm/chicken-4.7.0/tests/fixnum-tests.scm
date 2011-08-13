(define (fxo+ x y) (##core#inline "C_i_o_fixnum_plus" x y))
(define (fxo- x y) (##core#inline "C_i_o_fixnum_difference" x y))

(assert (= 4 (fxo+ 2 2)))
(assert (= -26 (fxo+ 74 -100)))
(assert (= 1073741823 (fxo+ #x3ffffffe 1)))
(assert
 (if (##sys#fudge 3)                   ; 64-bit?
     (not (fxo+ #x3fffffffffffffff 1))
     (not (fxo+ #x3fffffff 1))))
(assert (= 4 (fxo- 6 2)))
(assert (= -4 (fxo- 1000 1004)))
(assert (= 2004 (fxo- 1000 -1004)))
(assert
 (if (##sys#fudge 3)                   ; 64-bit?
     (= -4611686018427387904 (fxo- (- #x3fffffffffffffff) 1))
     (= -1073741824 (fxo- (- #x3fffffff) 1))))
(assert
 (if (##sys#fudge 3)                   ; 64-bit?
     (not (fxo- (- #x3fffffffffffffff) 2))
     (not (fxo- (- #x3fffffff) 2))))
