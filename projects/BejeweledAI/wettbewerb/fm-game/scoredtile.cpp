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
#include "scoredtile.h"

// standard constructor
ScoredTile::ScoredTile(void)
    : m_length(0), m_direction(FIELDIRECTION_NONE), m_bombValue(0)
{
}

// Copy constructor
ScoredTile::ScoredTile(const ScoredTile& tile)
    : m_pos(tile.m_pos), m_length(tile.m_length), m_direction(tile.m_direction),
      m_tile(tile.m_tile), m_bombValue(tile.m_bombValue)
{
}

// constructor
ScoredTile::ScoredTile(const FieldPos& pos, const unsigned int len,
                       const FieldDirection dir, const Tile& tile,
                       const unsigned int bombValue)
    : m_pos(pos), m_length(len), m_direction(dir), m_tile(tile), m_bombValue(bombValue)
{
}
  
// destructor
ScoredTile::~ScoredTile(void)
{
}

// return position
const FieldPos& ScoredTile::getPos(void) const
{
    return m_pos;
}

// return direction
const ScoredTile::FieldDirection ScoredTile::getDirection(void) const
{
    return m_direction;
}

// return length
const unsigned int ScoredTile::getLength(void) const
{
    return m_length;
}

// return tile type
const Tile& ScoredTile::getTile(void) const
{
    return m_tile;
}

// return bomb value
const unsigned int ScoredTile::getBombValue(void) const
{
    return m_bombValue;
}

// set all values
void ScoredTile::set(const FieldPos& pos, const unsigned int len,
                     const FieldDirection dir, const Tile& tile,
                     const unsigned int bombValue)
{
    m_pos = pos;
    m_length = len;
    m_direction = dir;
    m_tile = tile;
    m_bombValue = bombValue;
    
    // std::cout << "ScoredTile::set() " << pos.x() << " " << pos.y() << " => "
    //           << m_pos.x() << " " << m_pos.y() << std::endl;
}
                     
// return true if dir is FIELDDIRECTION_UP
const bool ScoredTile::isUp(void) const
{
    return ( FIELDDIRECTION_UP == m_direction );
}

// return true if dir is FIELDDIRECTION_RIGHT
const bool ScoredTile::isRight(void) const
{
    return ( FIELDDIRECTION_RIGHT == m_direction );
}
