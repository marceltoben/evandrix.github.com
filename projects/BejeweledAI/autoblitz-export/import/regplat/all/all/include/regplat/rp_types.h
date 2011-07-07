/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_types.h
 * Desc := Regular Platform Standard types
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

#ifndef RP_TYPES_H
#define RP_TYPES_H

/*! \name Regular Platform standard types */
/*! \{ */
typedef signed int      sint;   /*!< signed integer */
typedef unsigned int    uint;   /*!< unsigned integer */
typedef char            int08;  /*!< 8 bit integer */
typedef short           int16;  /*!< 16 bit integer */
typedef int             int32;  /*!< 32 bit integer */
typedef unsigned char   uint08; /*!< unsigned 8 bit integer */
typedef unsigned short  uint16; /*!< unsigned 16 bit integer */
typedef unsigned int    uint32; /*!< unsigned 32 bit integer */
typedef signed char     sint08; /*!< signed 8 bit integer */
typedef signed short    sint16; /*!< signed 16 bit integer */
typedef signed int      sint32; /*!< signed 32 bit integer */
/*! \} */

/*! \name Regular Platform type min, max values */
/*! \{ */
#define RP_UINT08_MIN 0
#define RP_UINT08_MAX 255
#define RP_UINT16_MIN 0
#define RP_UINT16_MAX 65535
#define RP_UINT32_MIN 0
#define RP_UINT32_MAX 0xFFFFFFFF
#define RP_SINT08_MIN (-RP_SINT08_MAX - 1)
#define RP_SINT08_MAX ( 127)
#define RP_SINT16_MIN (-RP_SINT16_MAX - 1)
#define RP_SINT16_MAX ( 32767)
#define RP_SINT32_MIN (-RP_SINT32_MAX - 1)
#define RP_SINT32_MAX 0x7FFFFFFF
/*! \} */

#endif

