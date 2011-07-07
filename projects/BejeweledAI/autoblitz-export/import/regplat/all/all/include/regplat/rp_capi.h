/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2009, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_capi.h
 * Desc := C API helper.
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

#ifndef RP_CAPI_H
#define RP_CAPI_H

#ifdef __cplusplus
extern "C" {
#endif

/*! @todo support other platforms */

/*! Function declaration attribute for export/import dynamic linkage */
/*! \{ */
#define RP_DLL_EXPORT /*__declspec(dllexport)*/
#define RP_DLL_IMPORT /*__declspec(dllimport)*/
/*! \} */

/*! \name Regplat calling conventions */
/*! \{ */
/*! Function declaration for inline functions */
#define RP_INLINE __inline
/*! Function declaration for stdcall functions */
#define RP_STDCALL __stdcall
/*! Function declaration for callback functions */
#define RP_CALLBACK RP_STDCALL
/*! \} */

/*! Define handle with the specified type name. This provides type safety for
    handles whose internals are not exposed through the C API. */
#define RP_DECL_HANDLE(name) typedef struct _##name { int unused; } *name;

#ifdef __cplusplus
}
#endif

#endif
