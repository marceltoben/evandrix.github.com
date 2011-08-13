(define (install-ethernet-protocol)

  ;; Fields ( list of lists with values: name, bitlength, validator, serializer ) 
  (define fields (list
                  (make-fieldvec 'destmac  48 #:valid mac-validator  #:serial mac-serializer )
                  (make-fieldvec 'srcmac   48 #:valid mac-validator  #:serial mac-serializer )
                  (make-fieldvec 'pkt-type 16 )
                  ))

  (define (generate packet vecs #!key data) (default-generator packet fields vecs))
  (define (validate packet vecs #!key data) (default-validator packet fields vecs))

  ;; Default values for fields
  (define (make-layer #!key
                      [destmac  "12:34:56:78:90:12"]
                      [srcmac   "AA:BB:CC:DD:EE:FF"]
                      [pkt-type "0800"])
    (attach-tag '(ethernet)
                (list destmac srcmac pkt-type)))


  ;; Public Interface
  (put-op 'generate   '(ethernet) generate)
  (put-op 'validate   '(ethernet) validate)
  (put-op 'make-layer '(ethernet) make-layer)

  "ethernet done")


;; Testing Below Here----------------------------------------------------------------
;(install-ethernet-protocol)