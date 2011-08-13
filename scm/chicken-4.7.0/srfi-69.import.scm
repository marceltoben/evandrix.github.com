;;;; srfi-69.import.scm - import library for "srfi-69" module
;
; Copyright (c) 2008-2011, The Chicken Team
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


(##sys#register-primitive-module
 'srfi-69
 '(alist->hash-table
   eq?-hash
   equal?-hash
   eqv?-hash
   hash
   hash-by-identity
   hash-table->alist
   hash-table-clear!
   hash-table-copy
   hash-table-delete!
   hash-table-equivalence-function
   hash-table-exists?
   hash-table-fold
   hash-table-for-each
   hash-table-has-initial?
   hash-table-hash-function
   hash-table-initial
   hash-table-keys
   hash-table-map
   hash-table-max-load
   hash-table-merge
   hash-table-merge!
   hash-table-min-load
   hash-table-ref
   hash-table-ref/default
   hash-table-remove!
   hash-table-set!
   hash-table-size
   hash-table-update!
   hash-table-update!/default
   hash-table-values
   hash-table-walk
   hash-table-weak-keys
   hash-table-weak-values
   hash-table?
   keyword-hash
   make-hash-table
   number-hash
   object-uid-hash
   string-hash-ci
   string-ci-hash
   string-hash
   symbol-hash))
