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
     (name "bit-cat")
     (description (p "Bitstring Concatenator for u8vectors"))
     
     (author (url ,email "Ben Kurtz"))

     (requires
      (url "srfi-66.html" "srfi-66"))
     
     (history
      (version "1.0" "Initial release"))

     (usage)
     (download "bit-cat.egg")

     (documentation
      
      (p "This egg provides a way to concatenate two u8vectors on a bitwise basis.")
      (p "Pass in a left-hand-side (LHS) value and a right-hand-side (RHS) value and bitlengths for both.")
      (p "The bits of the LHS will be concatenated into the RHS in a right-justified manner.")
      (p "This is mainly useful for aggregating bitfields.")
      (p "Future Work: Also supply left-justified concatenation.")
      
      (group
       (procedure "(bit-cat LHS LHS-BL RHS RHS-BL)"
                  (p "Concatenate " (tt "LHS-BL") " bits from " (tt "LHS") " into u8vector " 
                     (tt "RHS") " in a right-justified manner. Resulting concatenated vector will be in " (tt "RHS") 
                     ", result is the total resulting bitlength. " 
                     (tt "RHS-BL") " is the bitlength of data already used in " (tt "RHS") "."))))
      
     (section "License" (pre ,license)))))

(eggdoc->html doc)
