/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_wchar.h
 * Desc := Utility header file for platform consistency with wchar_t functions
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, 
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice, 
 *   this list of conditions and the following disclaimer in the documentation 
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Aaron "Caustik" Robinson nor the names of its 
 *   contributors may be used to endorse or promote products derived from this 
 *   software without specific prior written permission.
 * 
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 *****************************************************************************/

#ifndef RP_WCHAR_H
#define RP_WCHAR_H

#include <wchar.h>
#include <string>
#include <sstream>

/*! initialize wchar_t command line arguments (rp_argc rp_argv) 
 *  note that those variables will be set to zero until here */
extern void rp_init_args(int argc, char *argv[]);

/*! wchar_t version of argc */
extern int rp_argc;

/*! wchar_t version of argv */
extern wchar_t **rp_argv;

/*! for some apparently complex reason, wstring is not typedef'd in cygwin-linux.
 *  it appears to be generally safe to typedef it here */
namespace std {
typedef std::basic_string<wchar_t> wstring;
typedef std::basic_ostream<wchar_t, char_traits<wchar_t> > wostream;
typedef std::basic_ofstream<wchar_t> wofstream;
typedef std::basic_ostringstream<wchar_t> wostringstream;
/*! we're forced to dummy up our own wcout for cygwin */
#if defined(__CYGWIN__)
extern wostringstream wcout;
#endif
};

#ifdef _MSC_VER
#if (_MSC_VER >= 600)

#define swprintf _snwprintf
#define wcsdup _wcsdup

#endif /*! _MSC_VER >= 600 */
#endif /*! _MSC_VER */

#endif

