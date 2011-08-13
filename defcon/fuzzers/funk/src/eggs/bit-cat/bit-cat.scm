;;;; bit-cat.scm
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
      bit-cat
	  ))


#>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<#

#>!

// Tells you how many bytes you need to hold a certain number of bits
inline int
bytesForBits( int bits )
{
	int retval = bits / 8;
	if( (bits % 8) == 0 )
		return retval;
	return ++retval;
}
 
// Right-justified version of bit-cat
// _bl's are lengths measured in bits, not octets                                                                                      
// Concatenate lhs_bl bits into rhs in a right-justified manner.
// result is in rhs, total result bitlength is returned                                     
                                               
static int 
bit_cat_right( unsigned char * lhs, int lhs_len, int lhs_bl, 
   	   		   unsigned char * rhs, int rhs_len, int rhs_bl )
  {
  
    // Size check 
   	int totalBits  = lhs_bl + rhs_bl;
    int totalBytes = bytesForBits(totalBits);  // number of bytes used total
    
    // TODO: should check to see if we have enough room here.
          
    if( lhs_bl == 0 )  // nothing to do
    {
      return rhs_bl;
    }
               
 	// point to first byte of rhs data
 	unsigned char * beginRhs = (rhs + rhs_len) - bytesForBits(rhs_bl);
 	unsigned char * beginLhs = beginRhs - bytesForBits(lhs_bl);
 
	// possibilities...
	
	size_t rhs_left = rhs_bl % 8;
	
	// Trivial case
	if( rhs_left == 0 )
	{  
		memcpy( beginLhs, lhs, lhs_len );
	}
	
	// Can we fit the entire LHS in the empty bits?

    else if( lhs_bl <= rhs_left )
	{
		// has to be one byte, and rhs/8 has remainder
		  *beginRhs |= ((*lhs) << rhs_left);
	}
	
	// worst case scenario - all of lhs must be shifted to align with odd rhs
	else
	{
		unsigned char * ptr = (lhs + lhs_len) -1;  // last byte of lhs
		for(; ptr >= lhs; ptr-- )
		{
			*beginRhs |= *ptr << rhs_left;
			beginRhs--;
			if( beginRhs >= rhs )
				*beginRhs |= *ptr >> (8 - rhs_left);	
		}
		
	}
  	
  	return totalBits;
  }  
<#
 
(define (bit-cat lhs lhs_bl rhs rhs_bl)
  (let* ([x (u8vector-length lhs)]
         [y (u8vector-length rhs)]
         [n (bit_cat_right lhs x lhs_bl rhs y rhs_bl)])
    (if (negative? n)
        ; error
        -1
    n)))
 
