/******************************************************************************
 *
 * Regular Platform Project
 *
 * Copyright (c) 2007, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := rp_win.h
 * Desc := Window class
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

#ifndef RP_WIN_H
#define RP_WIN_H

#include "../rp_types.h"

#include <windows.h>

/*! @brief Window class. */
class rp_win
{
    public:

        rp_win(const wchar_t *class_name = L"rp_win");
        virtual ~rp_win();

        /*! create window */
        virtual bool create();

        /*! destroy window */
        virtual bool destroy();

        /*! message pump - should be called periodically for responsiveness */
        bool pump();

        /*! show window */
        void show() { ShowWindow(this->hWnd, SW_NORMAL); }

        /*! hide window */
        void hide() { ShowWindow(this->hWnd, SW_HIDE); }

        /*! access native window handle */
        HWND get_hwnd() { return this->hWnd; }

        /*! access window X position */
        int get_x() { return this->win_x; }

        /*! access window y position */
        int get_y() { return this->win_y; }

        /*! access window width */
        int get_w() { return this->win_w; }

        /*! access window height */
        int get_h() { return this->win_h; }

        /*! access client X position */
        int get_client_x() { return this->cli_x; }

        /*! access client y position */
        int get_client_y() { return this->cli_y; }

        /*! access client width */
        int get_client_w() { return this->cli_w; }

        /*! access client height */
        int get_client_h() { return this->cli_h; }

        /*! check created state */
        bool is_created() { return this->created_flag; }

    protected:

        /*! native window message procedure */
        static LRESULT CALLBACK wnd_proc_fwd(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

        /*! forwarded from wnd_proc_fwd for 'this' pointer */
        virtual LRESULT wnd_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

        /*! \name state_mutex protected resources */
        /*! \{ */

        /*! internal cache of native window handle */
        HWND hWnd;

        /*! internal cache of parent native window handle */
        HWND hParentWnd;

        /*! internal cache of window class name */
        wchar_t *class_name;

        /*! internal cache of window name */
        wchar_t *window_name;

        /*! internal cache of window position */
        int win_x, win_y, win_w, win_h;

        /*! internal cache of window client position */
        int cli_x, cli_y, cli_w, cli_h;

        /*! internal cache of class style flags */
        UINT class_style;

        /*! internal cache of window style flags */
        DWORD window_style, window_style_ex;

        /*! internal cache of window icon handle */
        HICON hIcon;

        /*! internal cache of window background brush */
        HBRUSH hBgBrush;

        /*! internal cache of menu state */
        bool menu_flag;

        /*! internal cache of created state */
        bool created_flag;

        /*! \} */

    private:

        /*! internal state protection */
        rp_mutex_rw state_mutex;

        /*! \name state_mutex protected resources */
        /*! \{ */

        /*! internal cache of window class atom */
        ATOM wClass;

        /*! \} */
};

#endif

