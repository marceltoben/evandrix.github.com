(use eggdoc)

(define license
"Copyright (c) 2007, Benjamin L. Kurtz.  All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the Software),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED ASIS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.")

(define email "mailto:bk2@alum.wpi.edu")

(define doc
  `((eggdoc:begin
     (name "crc16")
     (description (p "CRC16 Algorithm"))
     
     (author (url ,email "Ben Kurtz"))

     (requires
      (url "srfi-66.html" "srfi-66"))
     
     (history
      (version "1.0" "Initial release"))

     (usage)
     (download "crc16.egg")

     (documentation
      (p "This egg provides the commonly used CRC-16 algorithm for u8vectors.")
      
      (group
       (procedure "(crc-16 BUFFER LEN)"
                  (p "Calculates the CRC16 checksum for the given data. " (tt "BUFFER")
                     " is the u8vector containing the data to be sent, " (tt "LEN")
                     " is the length of " (tt "BUFFER")
                     " in octets. Returns a u8vector of length 2, containing the checksum."))))
      
     (section "License" (pre ,license)))))

(eggdoc->html doc)
