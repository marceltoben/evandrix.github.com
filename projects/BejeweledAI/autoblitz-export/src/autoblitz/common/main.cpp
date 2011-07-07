/******************************************************************************
 *
 * autoblitz Project
 *
 * Copyright (c) 2009, Aaron "Caustik" Robinson
 * All rights reserved.
 * 
 * File := main.cpp
 * Desc := Program entry point.
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

#include <regplat.h>

#include <windows.h>
#include <ddraw.h>

/*! enumeration for possible block colors */
static enum blockColor
{
    BC_NONE   = 0,
    BC_WHITE  = 1,
    BC_RED    = 2,
    BC_ORANGE = 3,
    BC_YELLOW = 4,
    BC_GREEN  = 5,
    BC_BLUE   = 6,
    BC_PURPLE = 7
};

/*! utility to click the specified x,y coordinate in the specified window */
static void click_window(HWND hWnd, int x, int y);

/*! utility to detect block color based on average color */
static blockColor getBlockColor(double r, double g, double b);

/*! utility to capture board */
static void capture_board(blockColor gameBoard[8][8]);

/*! utility to display board */
static void display_board(blockColor gameBoard[8][8]);

/*! utility to analyze board and choose the best move */
static void analyze_board(blockColor gameBoard[8][8], int &aX, int &aY, int &bX, int &bY);

/*! utility to analyze a move and choose if chain size is greater than current max chain size */
static void analyze_move(blockColor gameBoard[8][8], int x1, int y1, int x2, int y2, int &aX, int &aY, int &bX, int &bY, int &maxChain, int &totalCount);

/*! constants */
static const int baseX = 171;
static const int baseY = 31;
static const int baseW = 317;
static const int baseH = 308;
static const int eachW = baseW / 8;
static const int eachH = baseH / 8;
static const int halfW = eachW / 2;
static const int halfH = eachH / 2;
static const int quarW = eachW / 4;
static const int quarH = eachH / 4;

/*! blitz window rectangle */
static RECT windowRect = { 0 };

/*! blitz window width/height */
static int windowWidth = 0, windowHeight = 0;

/*! directdraw surfaces */
static IDirectDrawSurface7 *pDDSurface7 = 0;
static IDirectDrawSurface7 *pDDSysSurface7 = 0;

/*! RGB capture buffer */
static uint32 *rgb32 = 0;

int main(int argc, char *argv[])
{
    /*! blitz window handle */
    HWND hWnd = 0;

    /*! blitz window client rectangle */
    RECT clientRect = { 0 };

    /*! directdraw interfaces */
    IDirectDraw         *pDD = NULL;
    IDirectDraw7        *pDD7 = NULL;

    /*! return code */
    HRESULT hRet;

    /*! advertise */
    {
        printf("autoblitz\n");
        printf("\n");
    }

    /*! ask user for blitz hwnd (found using spyxx, for example) */
    {
        printf("hwnd : ");
        scanf("%X", &hWnd);
    }

    /*! retrieve blitz window rectangle */
    GetWindowRect(hWnd, &windowRect);

    /*! retrieve blitz window client rectangle */
    GetClientRect(hWnd, &clientRect);

    /*! calculate blitz window width/height */
    windowWidth = windowRect.right - windowRect.left;
    windowHeight = windowRect.bottom - windowRect.top;

    /*! allocate rgb data */
    rgb32 = (uint32*)calloc(windowWidth*windowHeight*4, 1);

    /*! initialize capture */
    {
        rp_debug_trace("DirectDrawCreate\n");

        hRet = DirectDrawCreate(NULL, &pDD, NULL);

        if(FAILED(hRet)) { goto cleanup; }

        rp_debug_trace("pDD->QueryInterface\n");

        hRet = pDD->QueryInterface(IID_IDirectDraw7, (void**)&pDD7);

        if(FAILED(hRet)) { goto cleanup; }

        rp_debug_trace("pDD7->SetCooperativeLevel\n");

        hRet = pDD7->SetCooperativeLevel(NULL, DDSCL_NORMAL);

        if(FAILED(hRet)) { goto cleanup; }

        rp_debug_trace("pDD7->CreateSurface\n");

        /*! initialize surfaces */
        {
            DDSURFACEDESC2 ddsd;

            ZeroMemory(&ddsd, sizeof(ddsd));

            ddsd.dwSize = sizeof(ddsd);
            ddsd.dwFlags = DDSD_CAPS;
            ddsd.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;

            hRet = pDD7->CreateSurface(&ddsd, &pDDSurface7, NULL);

            if(FAILED(hRet)) { goto cleanup; }

            rp_debug_trace("pDD7->CreateSurface (Sys)\n");

            ZeroMemory(&ddsd, sizeof(DDSURFACEDESC2));
            ZeroMemory(&ddsd.ddpfPixelFormat, sizeof(DDPIXELFORMAT));

            ddsd.dwSize = sizeof(ddsd);
            ddsd.dwFlags = DDSD_WIDTH | DDSD_HEIGHT | DDSD_LPSURFACE | DDSD_PITCH | DDSD_PIXELFORMAT | DDSD_CAPS;
            ddsd.ddsCaps.dwCaps = DDSCAPS_OFFSCREENPLAIN | DDSCAPS_SYSTEMMEMORY;
            ddsd.dwWidth = windowWidth;
            ddsd.dwHeight = windowHeight;
            ddsd.lPitch = windowWidth*4;
            ddsd.lpSurface = rgb32;
            ddsd.ddpfPixelFormat.dwSize = sizeof(DDPIXELFORMAT);
            ddsd.ddpfPixelFormat.dwFlags= DDPF_RGB;
            ddsd.ddpfPixelFormat.dwRGBBitCount = (DWORD)4*8;
            ddsd.ddpfPixelFormat.dwRBitMask = 0x00FF0000;
            ddsd.ddpfPixelFormat.dwGBitMask = 0x0000FF00;
            ddsd.ddpfPixelFormat.dwBBitMask = 0x000000FF;

            hRet = pDD7->CreateSurface(&ddsd, &pDDSysSurface7, NULL);

            if(FAILED(hRet)) { goto cleanup; }
        }

        rp_debug_trace("Init success!\n");

        /*! press button to start the game */
        click_window(hWnd, 229, 196);

        while(true)
        {
            /*! wait for user to tell us when to continue on to the next move */
            //int ret = MessageBox(0, L"Press OK to take the next move (wait for animation to stop)", L"autoblitz [blog.caustik.com]", MB_OKCANCEL);

            /*! if cancel was pressed, we're done */
            //if(ret == IDCANCEL) { break; }

            /*! if mouse cursor is within the flash window, wait */
            {
                POINT pt;

                GetCursorPos(&pt);

                if( (pt.x > windowRect.left) && (pt.x < windowRect.right)
                 && (pt.y > windowRect.top)  && (pt.y < windowRect.bottom) )
                {
                    printf("(cursor is inside window..waiting)\n");
                    rp_thread::sleep(100);
                    continue;
                }
            }

            /*! current grid */
            blockColor gameBoard[8][8];

            /*! capture the board */
            capture_board(gameBoard);

            /*! display gameboard */
            {
                printf("\n");
                printf("- current game board -\n");
                printf("\n");

                display_board(gameBoard);
            }

            /*! check for end of game */
            {
                int x;

                for(x=0;x<8;x++)
                {
                    if(gameBoard[7][x] != BC_BLUE) { break; }

                    /*! if last row was entirely blue, click the "play again?" button */
                    if(x == 7)
                    {
                        int clickX = baseX + eachW*1 + halfW;
                        int clickY = baseY + eachH*6 + halfH;

                        click_window(hWnd, clickX, clickY);
                    }
                }
            }

            /*! analyze gameBoard and make the best move */
            {
                int aX=0, aY=0, bX=0, bY=0;

                /*! analyze gameBoard */
                analyze_board(gameBoard, aX, aY, bX, bY);

                /*! click first piece */
                {
                    int clickX = baseX + eachW*aX + halfW;
                    int clickY = baseY + eachH*aY + halfH;

                    click_window(hWnd, clickX, clickY);
                }

                rp_thread::sleep(150);

                /*! click second piece */
                {
                    int clickX = baseX + eachW*bX + halfW;
                    int clickY = baseY + eachH*bY + halfH;

                    click_window(hWnd, clickX, clickY);
                }
            }
#if 0
            /*! wait for animation to start */
            rp_thread::sleep(250);

            /*! wait for board to stabilize */
            while(true)
            {
                /*! current grid */
                blockColor tmpBoard[8][8];

                /*! wait a little */
                rp_thread::sleep(150);

                /*! capture current game board */
                capture_board(tmpBoard);

                /*! if board has not changed, stop waiting */
                if(memcmp(tmpBoard, gameBoard, sizeof(tmpBoard)) == 0) { break; }

                /*! remember this board for next loop */
                memcpy(gameBoard, tmpBoard, sizeof(tmpBoard));
            }
#endif
        }
    }

cleanup:

    /*! cleanup rgb pixels */
    if(rgb32 != 0) { free(rgb32); }

    /*! cleanup system service */
    if(pDDSysSurface7 != 0) { pDDSysSurface7->Release(); }

    /*! cleanup primary surface */
    if(pDDSurface7 != 0) { pDDSurface7->Release(); }

    /*! cleanup directdraw7 */
    if(pDD7 != 0) { pDD7->Release(); }

    /*! cleanup directdraw */
    if(pDD != 0) { pDD->Release(); }

    return 0;
}

static void click_window(HWND hWnd, int x, int y)
{
    SendMessage(hWnd, WM_MOUSEMOVE,            0, MAKELPARAM(x, y));
    SendMessage(hWnd, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(x, y));
    SendMessage(hWnd, WM_LBUTTONUP,   MK_LBUTTON, MAKELPARAM(x, y));
}

static blockColor getBlockColor(double r, double g, double b)
{
    /*! HSV components */
    double h = 0.0, s = 0.0, v = 0.0;

    double min = 1.0;
    double max = 0.0;
    double delta;

    /*! detect min component value */
    if(r < min) { min = r; }
    if(g < min) { min = g; }
    if(b < min) { min = b; }

    /*! detect max component value */
    if(r > max) { max = r; }
    if(g > max) { max = g; }
    if(b > max) { max = b; }

    /*! calculate delta of min/max component values */
    delta = max - min;

    /*! update V component */
    v = max;

    /*! special case for 0 delta */
    if( (max == 0) || (delta == 0) ) { h = s = 0; }
    /*! otherwise, calculate H, S */
    else
    {
        s = delta / max;

        if(r == max) { h = (g - b) / delta; }
        else if(g == max) { h = 2 + (b - r) / delta; }
        else { h = 4 + (r - g) / delta; }
    }

    /*! scale h to be between 0 and 360 */
    h *= 60.0;

    /*! clamp to > 0 */
    if(h < 0) { h += 360.0; }

    if(s < /*0.25*/0.10) { printf("%g [%d]\n", s, h); return BC_WHITE; }
    else if(h < 22) { return BC_RED; }
    else if(h < 50) { return BC_ORANGE; }
    else if(h < 88) { return BC_YELLOW; }
    else if(h < 145) { return BC_GREEN; }
    else if(h < 257) { return BC_BLUE; }
    else if(h < 350) { return BC_PURPLE; } /*! red range wraps around 360 */
    else { return BC_RED; }

}

static void capture_board(blockColor gameBoard[8][8])
{
    int x = 0, y = 0;

    /*! attempt to take a snapshot of the window */
    HRESULT hRet = pDDSysSurface7->BltFast(0, 0, pDDSurface7, &windowRect, DDBLTFAST_WAIT);

    /*! quit if failure */
    if(FAILED(hRet)) { return; }

    /*! iterate through each row */
    for(y=0;y<8;y++)
    {
        /*! calculate current block Y offset */
        int curY = baseY + eachH*y + quarH;

        /*! iterate through each column */
        for(x=0;x<8;x++)
        {
            /*! calculate current block X offset */
            int curX = baseX + eachW*x + quarW;

            /*! calculate current block average RGB */
            {
                int x2 = 0, y2 = 0;

                uint32 accumR = 0;
                uint32 accumG = 0;
                uint32 accumB = 0;

                for(y2=0;y2<halfH;y2++)
                {
                    /*! calculate current pixel Y offset */
                    int pixelY = curY + y2;

                    for(x2=0;x2<halfW;x2++)
                    {
                        /*! calculate current pixel X offset */
                        int pixelX = curX + x2;

                        /*! fetch current pixel value */
                        uint32 curPixel = rgb32[pixelY*windowWidth+pixelX];

                        /*! added to each RGB component's accumulator */
                        accumR += (curPixel & 0x00FF0000) >> 16;
                        accumG += (curPixel & 0x0000FF00) >>  8;
                        accumB += (curPixel & 0x000000FF) >>  0;
                    }
                }

                /*! calculate each RGB component's average */
                uint32 avgR = accumR / (halfW*halfH);
                uint32 avgG = accumG / (halfW*halfH);
                uint32 avgB = accumB / (halfW*halfH);

                /*! calculate average RGB */
                uint32 avgRGB = (avgR << 16) | (avgG << 8) | avgB;

                /*! retrieve current block color */
                blockColor curBlock = getBlockColor((double)avgR / 255.0, (double)avgG / 255.0, (double)avgB / 255.0);

                /*! update gameboard */
                gameBoard[y][x] = curBlock;
            }
        }
    }

    return;
}

static void display_board(blockColor gameBoard[8][8])
{
    int x = 0, y = 0;

    for(y=0;y<8;y++)
    {
        for(x=0;x<8;x++)
        {
            switch(gameBoard[y][x])
            {
                case BC_NONE:
                    printf(" ");
                    break;
                case BC_WHITE:
                    printf("W");
                    break;
                case BC_RED:
                    printf("R");
                    break;
                case BC_ORANGE:
                    printf("O");
                    break;
                case BC_YELLOW:
                    printf("Y");
                    break;
                case BC_GREEN:
                    printf("G");
                    break;
                case BC_BLUE:
                    printf("B");
                    break;
                case BC_PURPLE:
                    printf("P");
                    break;
            }
        }

        printf("\n");
    }

    return;
}

static void analyze_board(blockColor gameBoard[8][8], int &aX, int &aY, int &bX, int &bY)
{
    int x, y, maxChain = 0, totalCount = 0;

    /*! @note this is structured such that lower 'y' are given preference! */

    /*! iterate through each row */
    for(y=0;y<8;y++)
    {
        /*! iterate through each column */
        for(x=0;x<8;x++)
        {
            /*! handle horizontal swaps */
            if(x < 7) { analyze_move(gameBoard, x, y, x+1, y, aX, aY, bX, bY, maxChain, totalCount); }

            /*! handle vertical swaps */
            if(y < 7) { analyze_move(gameBoard, x, y, x, y+1, aX, aY, bX, bY, maxChain, totalCount); }
        }
    }

    return;
}

static void analyze_move(blockColor gameBoard[8][8], int x1, int y1, int x2, int y2, int &aX, int &aY, int &bX, int &bY, int &maxChain, int &totalCount)
{
    /*! temp gameboard, to try move */
    blockColor tempBoard[8][8];

    /*! initialize temp board with current gameboard */
    memcpy(tempBoard, gameBoard, sizeof(tempBoard));

    /*! perform move on temporary gameboard */
    {
        blockColor tmp = tempBoard[y1][x1];
        
        tempBoard[y1][x1] = tempBoard[y2][x2];
        tempBoard[y2][x2] = tmp;
    }

    /*! current max chain count */
    int curMaxChain = 0;

    /*! accumulated chain count */
    int accumCount = 0;

    /*! analyze temp board for chains */
    {
        /*! current x,y piece */
        int x, y;

        /*! analyze rows */
        for(y=0;y<8;y++)
        {
            /*! current chain count */
            int curCount = 0;

            /*! last piece color */
            blockColor lastColor = BC_NONE;

            /*! search this row for chains */
            for(x=0;x<8;x++)
            {
                if(tempBoard[y][x] == lastColor) { curCount++; }
                else 
                { 
                    /*! append current chain count */
                    if(curCount >= 3) 
                    { 
                        if(curCount > curMaxChain) { curMaxChain = curCount; }
                        accumCount += curCount; 
                    }

                    /*! update last color */
                    lastColor = tempBoard[y][x];

                    /*! reset current chain count */
                    curCount = 1; 
                }
            }

            /*! append current chain count */
            if(curCount >= 3) 
            { 
                if(curCount > curMaxChain) { curMaxChain = curCount; }
                accumCount += curCount; 
            }
        }

        /*! analyze columns */
        for(x=0;x<8;x++)
        {
            /*! current chain count */
            int curCount = 0;

            /*! last piece color */
            blockColor lastColor = BC_NONE;

            /*! search this column for chains */
            for(y=0;y<8;y++)
            {
                if(tempBoard[y][x] == lastColor) { curCount++; }
                else
                {
                    /*! append current chain count */
                    if(curCount >= 3) 
                    { 
                        if(curCount > curMaxChain) { curMaxChain = curCount; }
                        accumCount += curCount; 
                    }

                    /*! update last color */
                    lastColor = tempBoard[y][x];

                    /*! reset current chain count */
                    curCount = 1; 
                }
            }

            /*! append current chain count */
            if(curCount >= 3) 
            { 
                if(curCount > curMaxChain) { curMaxChain = curCount; }
                accumCount += curCount; 
            }
        }
    }

    /*! detect if this was an improvement */
    if( (curMaxChain > maxChain) || ( (curMaxChain == maxChain) && (accumCount >= totalCount) ) )
    {
        maxChain = curMaxChain;
        totalCount = accumCount;

        aX = x1;
        aY = y1;
        bX = x2;
        bY = y2;
    }

    return;
}
