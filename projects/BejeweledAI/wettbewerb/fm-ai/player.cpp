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
#include <fstream>

// Eigene
/////////////
#include "player.h"

// standard constructor
Player::Player(void)
    : m_life(30), m_shield(15),
      m_redPoints(0), m_greenPoints(0), m_yellowPoints(0),
      m_lilacPoints(0)
{
}

// destructor
Player::~Player(void)
{
}

// read player data from file
// return true if everything went fine
const bool Player::read(const std::string& filename)
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ifstream infile( filename.c_str() );
        
        if ( infile.good() )
        {
            // read player data
            infile >> m_life;
            infile >> m_shield ;
            infile >> m_redPoints;
            infile >> m_yellowPoints;
            infile >> m_greenPoints;
            infile >> m_lilacPoints;
            
            // close file
            infile.close();
            
            ok = true;
        }
        else
        {
            std::cout << "Player::read() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "Player::read() error: string is empty" << std::endl;
    }
    
    if (ok)
    {
        // print();
    }
    
    return ok;
}

// print player data on screen
void Player::print(void) const
{
    // write player data
    std::cout << "Life:   " << m_life << std::endl;
    std::cout << "Shield: " <<m_shield << std::endl;
    std::cout << "Red:    " <<m_redPoints << std::endl;
    std::cout << "Yellow: " <<m_yellowPoints << std::endl;
    std::cout << "Green:  " <<m_greenPoints << std::endl;
    std::cout << "Lilac:  " <<m_lilacPoints << std::endl;    
}
