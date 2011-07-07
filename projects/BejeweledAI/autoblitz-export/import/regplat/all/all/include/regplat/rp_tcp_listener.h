/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_tcp_listener.h
 * Desc := Class to simplify tcp listening
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

#ifndef RP_TCP_LISTENER_H
#define RP_TCP_LISTENER_H

#include "rp_types.h"
#include "rp_net.h"

/*! @brief Tcp Listener class. */
class rp_tcp_listener
{
    public:

        rp_tcp_listener();
       ~rp_tcp_listener();

        /*! listen on a random port */
        int listen() { return listen(0); }

        /*! listen on the specified port */
        int listen(uint16 port);

        /*! accept an incoming connection */
        /*! @return RP_NET_OK for success, RP_NET_DISCONNECTED if async is not yet connected, otherwise RP_NET_ error code */
        int accept(void *PLACEHOLDER, bool async = false, bool keep_alive = false);

        /*! retrieve port number */
        int get_port() { return port; }

    private:

        /*! close listening socket */
        void close();

        /*! mutex protection */
        rp_mutex mutex;

        /*! listening socket */
        int socket;

        /*! port number */
        uint16 port;

        /*! cached FIONBIO state */
        uint32 cached_FIONBIO;
};

#endif
