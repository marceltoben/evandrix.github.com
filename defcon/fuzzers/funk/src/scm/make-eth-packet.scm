(load "table.scm")
(load "default-fcns.scm")
;(load "ethernet.scm")
(load "loopback.scm")
(load "ip4.scm")
(load "tcp.scm")
    
(install-loopback-protocol)
;(install-ethernet-protocol)
(install-ip4-protocol)
(install-tcp-protocol)

;(define make-ethernet-layer (get-op 'make-layer '(ethernet)))
(define make-ip-layer (get-op 'make-layer '(ip4)))
(define make-tcp-layer (get-op 'make-layer '(tcp)))

; this one is for BSD-style loopback headers
(define make-loopback-layer (get-op 'make-layer '(loopback)))

(define my-packet
  (list
   ; Pick one L2 layer
   ;(make-ethernet-layer)
   (make-loopback-layer)
   (make-ip-layer #:source-ip "127.0.0.1" #:dest-ip "127.0.0.1")
   (make-tcp-layer)))
  

(define (generate-my-packet len) 
  (let ([data (make-u8vector len 255)])
      (generate my-packet #:data data)))

; send packet out 
(require 'raw-sockets-experimental)
(define sock (open-raw-socket "lo0"))
(raw-socket-send sock (generate-my-packet 8))
(raw-socket-send sock (generate-my-packet 16))
(raw-socket-send sock (generate-my-packet 32))
(raw-socket-send sock (generate-my-packet 16))
(raw-socket-send sock (generate-my-packet 16))
(raw-socket-send-flush sock)
(close-raw-socket sock)

;(let ([sock   (open-raw-socket "lo0")]
;      (pkt1   (generate-my-packet 8))
;      (pkt2   (generate-my-packet 16)))
;  (let ([pkt (generate-my-packet 8)]) 
;    (raw-socket-send sock pkt))
;  (let ([pkt (generate-my-packet 16)]) 
;    (raw-socket-send sock pkt))
;  (close-raw-socket sock))

; test validation
;(define (validate-my-packet len) 
;  (let ([data (make-u8vector len 255)])
;      (validate my-packet #:data data)))
;(display (validate-my-packet 16))
