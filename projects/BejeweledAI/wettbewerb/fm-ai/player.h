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

#ifndef PLAYER_H
#define PLAYER_H

// System
//////////////
#include <string>

class Player 
{
public:    
    // standard constructor
    Player(void);
    
    // destructor
    ~Player(void);

    // read player data from file
    // return true if everything went fine
    const bool read(const std::string& filename);
    
private:
    // print player data on screen
    void print(void) const;
    
    // life points
    // if 0, the player is dead
    unsigned int m_life;
    
    // shield that must be first removed
    unsigned int m_shield;
    
    // different points to collect
    unsigned int m_redPoints;
    unsigned int m_greenPoints;
    unsigned int m_yellowPoints;
    unsigned int m_lilacPoints;
};

#endif // PLAYER_H
