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

// Own
//////////////
#include "tile.h"

// standard constructor
Tile::Tile(void)
    : m_tile(TILE_EMPTY)
{
}

// Copy constructor
Tile::Tile(const Tile& tile)
    : m_tile(tile.m_tile)
{
}
  
// destructor
Tile::~Tile(void)
{
}

// set tile type
void Tile::set(const TileType tile)
{
    m_tile =  tile;
}

// return type
const Tile::TileType Tile::getType(void) const
{
    return m_tile;
}

// Compare operator
const bool Tile::operator==(const Tile& tile) const
{
    bool same = false;
    
    if ( ( *this == tile.m_tile ) || ( isBomb() && tile.isBomb() ) )
    {
        same = true;
    }
    
    return same;
}

// Compare operator
const bool Tile::operator==(const TileType tile) const
{
    bool same = false;

    if ( tile == m_tile )
    {
        same = true;
    }
    
    return same;
}

// swap two tiles
void Tile::swap(Tile& tile)
{
    TileType tempTile = m_tile;
    m_tile = tile.m_tile;
    tile.m_tile = tempTile;
}

// return true if tile is a bomb
const bool Tile::isBomb(void) const
{
    bool bomb = false;

    if ( TILE_BOMB_1 == m_tile
      || TILE_BOMB_2 == m_tile
      || TILE_BOMB_3 == m_tile
      || TILE_BOMB_4 == m_tile
      || TILE_BOMB_5 == m_tile )
    {
        bomb = true;
    }
    
    return bomb;
    
}
