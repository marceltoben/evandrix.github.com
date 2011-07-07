/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_net.h
 * Desc := Class to simplify network access
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

#ifndef RP_NET_H
#define RP_NET_H

#include "rp_types.h"

/*! @brief Net class. */
class rp_net
{
    public:

        /*! initialize network classes */
        static bool init();

        /*! cleanup network classes */
        static bool cleanup();

        /*! enable blocking on the specified socket. cachedFIONBIO is used to prevent
         *  redundant ioctlsocket calls, and should normally be 0 for the first call
         *  to enable_blocking or disable_blocking for a socket */
        static bool set_blocking(int &sock, bool blocking_flag, uint32 &cached_FIONBIO);

    private:

        /*! private constructor since you don't ever need an instance of this class */
        rp_net();
};

/*! \name rp_net return codes */
/*! \{ */
#define RP_NET_OK               0x00
#define RP_NET_FAIL             0x01
#define RP_NET_NOTIMPL          0x02
#define RP_NET_SOCKET_ERROR     0x03
#define RP_NET_DISCONNECTED     0x04
#define RP_NET_INVALID_CALL     0x05
#define RP_NET_CLOSING          0x06
/*! \} */

#endif
