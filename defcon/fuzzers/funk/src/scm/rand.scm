(load "table.scm")
(load "default-fcns.scm")
(load "ethernet.scm")
(load "loopback.scm")
(load "ip4.scm")
(load "tcp.scm")
    
(install-loopback-protocol)
(install-ethernet-protocol)
(install-ip4-protocol)
(install-tcp-protocol)

(define make-ethernet-layer (get-op 'make-layer '(ethernet)))
(define make-ip-layer (get-op 'make-layer '(ip4)))
(define make-tcp-layer (get-op 'make-layer '(tcp)))
; this one is for BSD-style loopback headers
(define make-loopback-layer (get-op 'make-layer '(loopback)))


(define (make-random-u8vector2 len)
    (list->u8vector (unfold zero?
                            (lambda (x) (random 256))
                            (lambda (x) (- x 1))
                            (+ 1 len))))

(define (make-random-u8vector len)
  (define make-random-iter (lambda (buf start blen)
                             (if (< start blen)
                                 (begin ; then
                                   (u8vector-set! buf start (random 256))
                                   (make-random-iter buf (+ start 1) blen))
                                 buf))) ; else
  (make-random-iter (make-u8vector len 0) 0 len))


(define make-random-field (lambda (flds buffer vecs #!key data)
                            (make-random-u8vector (bytes-for-bits (field-bitlength (car flds))))))

(define my-packet
  (list
   ; Pick one L2 layer
   ;(make-ethernet-layer)
   (make-loopback-layer)
   (make-ip-layer #:source-ip "127.0.0.2" #:dest-ip "127.0.0.2")
   ;(make-ip-layer #:source-ip "127.0.0.2" #:dest-ip make-random-field)
   (make-tcp-layer)))
  

(define (generate-my-packet len) 
  (let ([data (make-random-u8vector len)])
      (generate my-packet #:data data)))

(define (generate-n-random-packets n)
  (if (= n 0) "done"
      (begin
        (let ([pkt (generate-my-packet (* (random 25) 2))]) (raw-send pkt (u8vector-length pkt)))
        (generate-n-random-packets (- n 1))
      )))

; send packet out 
(require 'raw-sockets)
(raw-open "lo0")
(generate-n-random-packets 50)
(raw-close)
