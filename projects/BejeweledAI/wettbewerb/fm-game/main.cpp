// *************************************************************************
// freiesMagazin-Programmierwettbewerb (game)
// Copyright 2009 Dominik Wagenfuehr <dominik.wagenfuehr@deesaster.org>
// Licence: GPLv3
// *************************************************************************

/**
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// System
///////////
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

// Eigene
///////////
#include "game.h"

int main (int argc, char *argv[])
{
    // check if system calls are allowed
    if ( !system(NULL) )
    {
        std::cout << "error: system call does not work" << std::endl;
        exit(1);
    }

    // init random timer
    int timer = time(NULL);
    srand(timer);  
#ifdef DEBUG
    std::cout << "Random init with: " << timer << std::endl;
#endif
    
    // flag if contest
    bool contest = true;
    bool createGameField = false;
    std::string filename("gamefield-contest1.dat");

    // check command line options
    if ( 1 == argc )
    {
        // normal game with user input
        contest = false;
        createGameField = false;
    }
    else if ( 2 == argc )
    {
        // only filename for game field given
        filename = argv[1];
    }
    else if ( 3 == argc )
    {
        // filename for game field given
        filename = argv[1];
 
        // contest or create game
        if ( std::string("create") == std::string(argv[2]) )
        {
            contest = true;
            createGameField = true;
        }
        else
        {
            // everything else is wrong!
            std::cout << "error: wrong third command line option" << std::endl;
            exit(1);        
        }
    }
    else
    {
        // everything else is wrong!
        std::cout << "error: wrong number of command line options" << std::endl;
        exit(1);        
    }
    
    // create game with two players
    Game game;

    // start game
    if (!contest)
    {
        game.start();
    }
    else
    {
        // save game content
        if (createGameField)
        {
            if ( game.writeFieldContest(filename) )
            {
                std::cout << "Field " << filename << " created" << std::endl;
            }
        }
        else
        {
            // start contest
            if ( !game.startContest(filename, 0) )
            {
                std::cout << "Error in first game contest" << std::endl;
                exit(1);
            }
            else
            {
                // getchar();
                if ( !game.startContest(filename, 1) )
                {
                    std::cout << "Error in second game contest" << std::endl;
                    exit(1);
                }
            }
        }
    }
    
    return 0;
}
