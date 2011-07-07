// *************************************************************************
// freiesMagazin-Programmierwettbewerb (ai)
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
#include "gamefield.h"
#include "player.h"

int main (void)
{
    
    // load game field
    GameField field;
    if ( !field.read("gamefield.dat") )
    {
        exit(1);
    }

    // load player
    Player player;
    if ( !player.read("player.dat") )
    {
        exit(1);
    }

    // load opponent
    Player opponent;
    if ( !opponent.read("opponent.dat") )
    {
        exit(1);
    }
    
    // calculate next move for this player
    // and write result to file
    if ( !field.calculate(player, opponent, "result.dat") )
    {
        exit(1);
    }
    
    return 0;
}
