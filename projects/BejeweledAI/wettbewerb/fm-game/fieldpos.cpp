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

// Own
//////////////
#include "fieldpos.h"

// standard constructor
FieldPos::FieldPos(void)
    : m_x(0), m_y(0)
{
}

// constructor
FieldPos::FieldPos(const unsigned int x, const unsigned int y)
    : m_x(x), m_y(y)
{
}
    
// Copy constructor
FieldPos::FieldPos(const FieldPos& pos)
    : m_x(pos.m_x), m_y(pos.m_y)
{
    // std::cout << "FieldPos::FieldPos() " << m_x << " " << m_y << " "
    //           << pos.m_x << " " << pos.m_y << std::endl;
}
  
// destructor
FieldPos::~FieldPos(void)
{
}

// set position
void FieldPos::set(const unsigned int x, const unsigned int y)
{
    m_x = x;
    m_y = y;
}

// return position x
const unsigned int FieldPos::x(void) const
{
    return m_x;
}

// return position y
const unsigned int FieldPos::y(void) const
{
    return m_y;
}
    
