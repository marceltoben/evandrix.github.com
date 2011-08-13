 (use tcp)

 (define (remote-repl #!optional (port 5156))
   (let*-values (((x) (tcp-listen port))
		 ((i o) (tcp-accept x)))
     (current-input-port i)
     (current-output-port o)
     (current-error-port o) 
     ;(when (provided? 'debug) (set! ##dbg#command-output-port o))   ; in case you use the debug egg
     (repl)))

 (remote-repl)

