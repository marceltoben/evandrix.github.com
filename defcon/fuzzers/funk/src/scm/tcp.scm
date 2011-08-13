(require 'crc16)

(define (install-tcp-protocol)
  
  ;; Fields ( list of vectors with values: name, bitlength, validator, serializer ) 
  (define fields (list
                  (make-fieldvec 'src-port  16 #:valid decimal-validator #:serial uint16-serializer)
                  (make-fieldvec 'dest-port 16 #:valid decimal-validator #:serial uint16-serializer)
                  (make-fieldvec 'seq       32 )
                  (make-fieldvec 'ack       32 )
                  (make-fieldvec 'offset     4 )
                  (make-fieldvec 'reserved   4 )
                  (make-fieldvec 'CWR        1 )
                  (make-fieldvec 'ECE        1 )                                     
                  (make-fieldvec 'URG        1 )                   
                  (make-fieldvec 'ACK        1 )                                     
                  (make-fieldvec 'PSH        1 )                   
                  (make-fieldvec 'RST        1 )                                     
                  (make-fieldvec 'SYN        1 )                   
                  (make-fieldvec 'FIN        1 ) 
                  (make-fieldvec 'win-size  16 )                  
                  (make-fieldvec 'checksum  16 )
                  (make-fieldvec 'urg-data  16 )
                  (make-fieldvec 'options    0 #:valid (hex-validator 32) #:serial (hex-serializer 32))                                                       
                  ))   
  
  (define (tcp-generator packet fields vecs #!key data)
    (let* ([genbuf   (default-generator packet fields vecs)] ; tcp layer
           [tcpsize  (if data (+ (u8vector-length genbuf) (u8vector-length data))
                             (u8vector-length genbuf))]
           [ipbuf    (cdr (car vecs))] ; ip layer
           [crcbuf   (make-u8vector (+ 96 tcpsize) 0)])
       (begin
         ; copy out ip fields for tcp pseudo-header
         (u8vector-copy! ipbuf 12 crcbuf 0 4) ; source ip
         (u8vector-copy! ipbuf 16 crcbuf 4 4) ; dest ip
         (u8vector-copy! ipbuf  9 crcbuf 9 1) ; protocol
         ;(u8vector-set! crcbuf 11 tcpsize) ; tcp length TODO:(will only work up to 255 atm)
         (u8vector-set! crcbuf 10 (fxand 255 (fxshr tcpsize 8)))
         (u8vector-set! crcbuf 11 (fxand 255 tcpsize))
         (u8vector-copy! genbuf 0 crcbuf 12 (u8vector-length genbuf)) ; copy the rest
         ;(if data (u8vector-copy! data 0 crcbuf (+ 12 tcpsize) (u8vector-length data)))
         (if data (u8vector-copy! data 0 crcbuf (+ 12 (u8vector-length genbuf)) (u8vector-length data)))
         (u8vector-copy! (crc-16 crcbuf (u8vector-length crcbuf)) 0 genbuf 16 2)
         (if data (u8vector-cat genbuf data)
         genbuf)
        )
     ))
  
  (define (generate packet vecs #!key data) (tcp-generator packet fields vecs #:data data))
  (define (validate packet vecs #!key data) (default-validator packet fields vecs #:data data))
  
  ;; Default values for fields
  (define (make-layer #!key
                      [src-port  "1337"]
                      [dest-port "80"]
                      [seq "7"]
                      [ack "0"] 
                      [offset   "5"]
                      [reserved "0"]
                      [CWR "0"]
                      [ECE "0"]
                      [URG "0"]
                      [ACK "0"]
                      [PSH "0"]
                      [RST "0"]
                      [SYN "0"]
                      [FIN "0"]
                      [win-size "5"]
                      [checksum "0"]
                      [urg-data "0"]                      
                      [options ""]
                      )
    (attach-tag '(tcp)
                (list src-port dest-port seq ack offset reserved CWR ECE URG ACK
                      PSH RST SYN FIN win-size checksum urg-data options)))
  ;; Public Interface
  (put-op 'generate   '(tcp) generate)
  (put-op 'validate   '(tcp) validate)
  (put-op 'make-layer '(tcp) make-layer)  
  
  "tcp done")


;; Testing Below Here----------------------------------------------------------------
;(install-tcp-protocol)
