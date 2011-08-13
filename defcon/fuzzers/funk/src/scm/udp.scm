(define (install-udp-protocol)

  ;; Fields ( list of vectors with values: name, bitlength, validator, serializer ) 
  (define fields (list
                  (make-fieldvec 'src-port  16 )
                  (make-fieldvec 'dest-port 16 )
                  (make-fieldvec 'len 16 )
                  (make-fieldvec 'checksum 16)
                  ))

  (define (udp-generator packet fields vecs #!key data)
    (let* ([genbuf   (default-generator packet fields vecs #:data data)] ; udp layer
           [udpsize  (if data (+ (u8vector-length genbuf) (u8vector-length data))
                         (u8vector-length genbuf))]
           [ipbuf    (cdr (car vecs))] ; ip layer
           [crcbuf   (make-u8vector (+ 96 udpsize) 0)])
      (begin
        ; copy out ip fields for tcp pseudo-header
        (u8vector-copy! ipbuf 12 crcbuf 0 4) ; source ip
        (u8vector-copy! ipbuf 16 crcbuf 4 4) ; dest ip
        (u8vector-copy! ipbuf  9 crcbuf 9 1) ; protocol
        (u8vector-set! crcbuf 11 udpsize) ; udp length TODO:(will only work up to 255 atm)
        (u8vector-copy! genbuf 0 crcbuf 12 (u8vector-length genbuf)) ; copy the rest
        (if data (u8vector-copy! data 0 crcbuf (+ 12 udpsize) (u8vector-length data)))
        (u8vector-copy! (crc-16 crcbuf (u8vector-length crcbuf)) 0 genbuf 6 2)
        (if data (u8vector-cat genbuf data)
            genbuf)
        )
      ))


  (define (generate packet vecs #!key data)
    (udp-generator packet fields vecs #:data data))
  (define (validate packet vecs #!key data)
    (default-validator packet fields vecs #:data data))

  ;; Default values for fields
  (define (make-layer #!key
                      [src-port  "1337"]
                      [dest-port "200"]
                      [len
                       (lambda (packet fields vecs #!key data)
                         (let ([buf (make-u8vector 2 0)]
                               [udpsize
                                (if data
                                    (+ 8 (u8vector-length data))
                                    8)])
                           (u8vector-set! buf 0 (quotient udpsize 256))
                           (u8vector-set! buf 1 (modulo udpsize 256))
                           buf))]
                      [checksum "0"]
                      )
    (attach-tag '(udp)
                (list src-port dest-port len checksum)))
  ;; Public Interface
  (put-op 'generate   '(udp) generate)
  (put-op 'validate   '(udp) validate)
  (put-op 'make-layer '(udp) make-layer)

  "udp done")


;; Testing Below Here----------------------------------------------------------------
;(install-udp-protocol)