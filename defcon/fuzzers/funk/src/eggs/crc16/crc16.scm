;;;; crc16.scm
;
; Copyright (c) 2007, Benjamin L. Kurtz
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following
; conditions are met:
;
;   Redistributions of source code must retain the above copyright notice, this list of conditions and the following
;     disclaimer. 
;   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
;     disclaimer in the documentation and/or other materials provided with the distribution. 
;   Neither the name of the author nor the names of its contributors may be used to endorse or promote
;     products derived from this software without specific prior written permission. 
;
; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
; OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
; AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
; CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
; SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
; POSSIBILITY OF SUCH DAMAGE.
;
; Send bugs, suggestions and ideas to: 
;
; bk2@alum.wpi.edu
;
; Benjamin L. Kurtz

(require-extension srfi-66)

(declare
  (export
      crc-16
	  ))


#>
#include <stdlib.h>
<#

#>!
static unsigned short
crc_16(unsigned char * buf, int len, unsigned char *retval)
{
    unsigned short * addr = (unsigned short *) buf;
    unsigned short result;
    unsigned int sum = 0;
    
    while( len > 1 ) {
      sum += *addr++;
      len -= 2;
    }
    
    if( len == 1 )
      sum += *(unsigned char *) addr;
      
    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    result = ~sum;

    unsigned char *ptr = (unsigned char *)&result;
    retval[0] = ptr[0];
    retval[1] = ptr[1];
        
    return result;
}
<#

(define (crc-16 buffer len)
  (let ([retval (make-u8vector 2 0)])
    (begin 
      (crc_16 buffer len retval)
      retval)))
      
