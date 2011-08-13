(define (install-loopback-protocol)

  ;; Fields ( list of lists with values: name, bitlength, validator, serializer ) 
  (define fields (list
                  (make-fieldvec 'loopback  32)
                  ))

  (define (generate packet vecs #!key data) (default-generator packet fields vecs))
  (define (validate packet) (default-validator packet fields))

  ;; Default values for fields
  (define (make-layer #!key
                      [loopback  "02000000"])
    (attach-tag '(loopback)
                (list loopback)))

  ;; Public Interface
  (put-op 'generate   '(loopback) generate)
  (put-op 'validate   '(loopback) validate)
  (put-op 'make-layer '(loopback) make-layer)

  "loopback done")


;; Testing Below Here----------------------------------------------------------------
;(install-loop-protocol)