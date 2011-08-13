;;;; egg:      raw-sockets
;;;; file:     doc.scm
;;;; author:   Lenny Frank <elf@ephemeral.net>
;;;; author:   Benjamin L. Kurtz <bk2@alum.wpi.edu>
;;;; date:     18 Sep 2007
;;;; licence:  BSD (see LICENCE)
;;;; version:  3.0
;;;; purpose:  eggdoc-formatted documentation for the raw-sockets egg
;;;;
;;;; history:  3.0  Updated for v3.0 raw-sockets (elf)
;;;;           2.1  Updated for v2.1 rawsock (elf)
;;;;           1.0  Initial release (bk2)



(use utils)
(use eggdoc)



(define doc
    `((eggdoc:begin
        (name        "raw-sockets")
        (description (p "UNIX raw socket interface"))
        (author      (p (url "mailto:elf@ephemeral.net" "Elf") ","
                        (url "mailto:bk2@alum.wpi.edu"  "Benjamin L. Kurtz")))
        (requires    (url "srfi-66.html" "srfi-66"))

        (history
            (version "1.0" "Initial release (Ben Kurtz)")
            (version "2.0" "Refactored and cleaned (Elf)")
            (version "2.1" "Added non-blocking reads (Elf)")
            (version "3.0" "Changed read/write semantics, "
                           "added buffering of packets, "
                           "switched to SIGIO instead of polling (Elf)"))

        (usage)
        (download "raw-sockets.egg")


        (documentation
            (p "This egg provides an interface to packet sockets.")
            (p "Packet sockets are even less cooked than \"raw\" sockets, "
               "allowing manual setting of Layer 2 fields.")
            (p "Currently, there is support for Linux and OS X.  If you want "
               "something else, send us the code for getting packet sockets.")
            
            (section "Opening and querying a packet socket"
                (group
                    (procedure
                        "(open-raw-socket INTERFACE)"
                        (p "Creates a new raw-socket object.  "
                           (tt "INTERFACE") " is the name of the network "
                           "interface, given as a string.")
                        (p "Note: Upon creation of the first raw socket, a "
                           "SIGIO handler will be installed.  If a handler "
                           "already exists, it will still be called after "
                           "the new handler, if the new handler is not "
                           "applicable."))
                    (procedure
                        "(raw-socket? OBJ)"
                        (p "Returns #t if OBJ is a raw-socket."))
                    (procedure
                        "(raw-socket-open? OBJ)"
                        (p "Returns #t if OBJ is an open raw-socket, i.e. "
                           "data can be read from or written to it."))))

            (section "Information on a packet socket"
                (group
                    (procedure "(raw-socket-domain OBJ)")
                    (procedure "(raw-socket-type OBJ)")
                    (procedure 
                        "(raw-socket-protocol OBJ)"
                        (p "Returns the socket domain/type/protocol associated "
                           "with this raw-socket."))
                    (procedure
                        "(raw-socket-fd OBJ)"
                        (p "Returns the file descriptor associated with this "
                           "raw-socket."))
                    (procedure
                        "(raw-socket-saddr OBJ)"
                        (p "Returns a pair (saddr . size) for the sockaddr "
                           "structure and length of this raw-socket."))
                    (procedure
                        "(raw-socket-iface OBJ)"
                        (p "Returns the interface associated with this "
                           "raw-socket."))
                    (procedure
                        "(raw-socket-mtu OBJ)"
                        (p "Returns the MTU for this raw-socket.  On MacOS, "
                           "this is 1 less than the actual MTU size because of "
                           "its broken network stack."))))

            (section "Writing to a packet socket"
                (group
                    (procedure
                        "(raw-socket-send RAW-SOCKET PACKET)"
                        (p "Writes to the given raw socket.  "
                           (tt "PACKET") " may be a u8vector or string.")
                        (p "Note: if the socket is not ready for writing, "
                           "the packet will be queued until writing is allowed "
                           "or until the socket closes."))))

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

