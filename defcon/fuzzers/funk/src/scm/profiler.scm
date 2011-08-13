(use raw-sockets-experimental)
(use srfi-1)

(load "test.scm")

(define all-packets
    (map
        (lambda (x)
            (generate-my-packet (random 1447)))
        (iota 1500)))

(define sock #f)
(define nleft #f)
(define wthr #f)
(define bthr #f)

(define (make-sock)
    (set! sock (open-raw-socket "lo"))
    (set! nleft 15000)
    (raw-socket-add-recver sock 'foo
        (lambda (p l)
            (set! nleft (- nleft 1)))))

(define (write-loop)
    (for-each
        (lambda (x)
            (for-each
                (lambda (y)
                    (raw-socket-send sock y))
                all-packets))
        (iota 10)))

(define (start-test args)
    (set! bthr (current-thread))
    (make-sock)
    (set! wthr (make-thread write-loop))
    (thread-quantum-set! wthr 1000)
    (thread-start! wthr)
    (thread-join! wthr)
    (close-raw-socket sock)
    nleft)

(start-test (command-line-arguments))
