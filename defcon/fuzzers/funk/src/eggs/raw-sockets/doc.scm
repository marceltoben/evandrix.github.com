;;;; egg:      raw-sockets
;;;; file:     doc.scm
;;;; author:   Lenny Frank <elf@ephemeral.net>
;;;; author:   Benjamin L. Kurtz <bk2@alum.wpi.edu>
;;;; date:     06 Nov 2007
;;;; licence:  BSD (see LICENCE)
;;;; version:  2.0
;;;; purpose:  eggdoc-formatted documentation for the raw-sockets egg
;;;;
;;;; history:  2.0  Updated for v2.0 raw-sockets (elf)
;;;;           1.1  Updated for v1.1 rawsock (elf)
;;;;           1.0  Initial release (bk2)



(use utils)
(use eggdoc)



(define doc
    `((eggdoc:begin
        (name        "raw-sockets")
        (description (p "UNIX raw socket interface"))
        (author      (p (url "mailto:elf@ephemeral.net" "Elf") ","
                        (url "mailto:bk2@alum.wpi.edu"  "Benjamin L. Kurtz")))

        (history
            (version "1.0" "Initial release (Ben Kurtz)")
            (version "1.1" "Refactored and cleaned (Elf)")
            (version "1.2" "Added non-blocking reads (Elf)")
            (version "1.3" "Changed read/write semantics, "
                           "added buffering of packets, "
                           "switched to SIGIO instead of polling (Elf)")
            (version "2.0" "Switched to a threading model (SIGIO broken), "
                           "lots of cleanup, profiling (Elf)"))

        (usage)
        (download "raw-sockets.egg")


        (documentation
            (p "This egg provides an interface to packet sockets.")
            (p "Packet sockets are even less cooked than \"raw\" sockets, "
               "allowing manual setting of Layer 2 fields.")
            (p "Currently, there is support for Linux and OS X.  If you want "
               "something else, send us the code for getting packet sockets.")
            (p "raw-sockets currently uses a threaded model for reading and "
               "writing.  See the documentation for the individual functions "
               "for information on when and how they are activated.")
            
            (section "Opening and querying a packet socket"
                (group
                    (procedure
                        "(open-raw-socket INTERFACE)"
                        (p "Creates a new raw-socket object.  "
                           (tt "INTERFACE") " is the name of the network "
                           "interface, given as a string."))
                    (procedure
                        "(raw-socket? OBJ)"
                        (p "Returns #t if OBJ is a raw-socket."))
                    (procedure
                        "(raw-socket-open? OBJ)"
                        (p "Returns #t if OBJ is an open raw-socket, i.e. "
                           "data can be read from or written to it."))))

            (section "Information on a packet socket"
                (group
                    (procedure
                        "(raw-socket-fd OBJ)"
                        (p "Returns the file descriptor associated with this "
                           "raw-socket."))
                    (procedure
                        "(raw-socket-iface OBJ)"
                        (p "Returns the interface associated with this "
                           "raw-socket."))
                    (procedure
                        "(raw-socket-mtu OBJ)"
                        (p "Returns the MTU for this raw-socket.  On MacOS, "
                           "this is 1 less than the actual MTU size because of "
                           "its broken network stack."))
                    (procedure
                        "(raw-socket-wqueue OBJ)"
                        (p "Returns the writing queue associated with this "
                           "raw-socket."))))

            (section "Writing to a packet socket"
                (group
                    (procedure
                        "(raw-socket-send RAW-SOCKET PACKET)"
                        (p "Writes to the given raw socket.  "
                           (tt "PACKET") " may be a u8vector or string.")
                        (p "Note: if the socket is not ready for writing, "
                           "the packet will be queued until writing is allowed "
                           "or until the socket closes."))
                    (procedure
                        "(raw-socket-send-flush RAW-SOCKET)"
                        (p "Blocks the main thread until the writing queue is "
                           "empty."))))

            (section "Reading from a packet socket"
                (p "Reading from raw sockets is not done directly; instead, "
                   "receiver procedures are installed.  These procedure(s) "
                   "get called whenever data is available for reading on the "
                   "socket.  Receiver procedures take the form: ")
                (p "(RECEIVER-PROC DATA LENGTH)")
                (p (tt "RECEIVER-PROC") " is the the procedure's name, " (br)
                   (tt "DATA") " is the received data as a u8vector, and " (br)
                   (tt "LENGTH") " is the length of DATA.")
                (p "Multiple receiver procedures can be installed, and will "
                   "be called in most-recently-added-first order.")
                (p "The reading thread is not activated until the first reader "
                   "procedure is installed.")
                (group
                    (procedure
                        "(raw-socket-add-recver RAW-SOCKET LABEL HANDLER)"
                        (p "Adds a receiver procedure to RAW-SOCKET.  "
                           (tt "HANDLER") " is a receiver procedure, as "
                           "detailed above.  "
                           (tt "LABEL") " is a string for referencing the "
                           "handler.  If LABEL already has an associated "
                           "procedure, it is replaced without changing "
                           "the ordering."))
                    (procedure
                        "(raw-socket-del-recver RAW-SOCKET LABEL)"
                        (p "Removes a receiver procedure from RAW-SOCKET.  "
                           "This does nothing if the label does not have an "
                           "associated handler."))
                    (procedure
                        "(raw-socket-recvers RAW-SOCKET)"
                        (p "Returns an ordered list of (LABEL . HANDLER) pairs "
                           "corresponding to all receiver procedures for "
                           "RAW-SOCKET."))))

            (section "Thread procedures"
                (group
                    (procedure "(raw-socket-rmutex OBJ)")
                    (procedure "(raw-socket-rthread OBJ)")
                    (procedure "(raw-socket-wmutex OBJ)")
                    (procedure
                        "(raw-socket-wthread OBJ)"
                        (p "Returns the read/write mutex or thread associated "
                           "with the given raw socket.  It should rarely, if "
                           "ever, be necessary to use these."))
                    (macro
                        "(raw-protect-region WRITER? RAW-SOCKET BODY ...)"
                        (p "Handles creating and ending a mutex-protected "
                           "region defined by BODY ... for the given "
                           "RAW-SOCKET.  WRITER? should be #t if it is a "
                           "writing call, #f otherwise."))))

            (section "Closing a packet socket"
                (group
                    (procedure
                        "(close-raw-socket RAW-SOCKET)"
                        (p "Closes the given raw socket.")
                        (p "This also resets the promiscuous mode to its "
                           "original value for that interface, and clears the "
                           "signal handler if there are no other interfaces "
                           "assigned to that signal."))))
                            
            (section "Bugs"
                (p "None known."))

            (section "Licence"
                (pre ,(read-all "LICENCE")))

            ))))

(eggdoc->html doc)

