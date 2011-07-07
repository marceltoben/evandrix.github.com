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
    bool same=false;

    if ( m_tile == tile )
    {
        same = true;
    }
    
    return same;
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

// Check if tile is not set yet.
const bool Tile::isEmpty(void) const
{
    bool empty = false;

    if ( TILE_EMPTY == m_tile )
    {
        empty = true;
    }
    
    return empty;
}

// set empty tile
void Tile::setEmpty(void)
{
    m_tile = TILE_EMPTY;
}

// returns random tile
void Tile::setRandom(void)
{
    // we use the following probability
    // 0.18 for each color
    // 0.02 for each bomb
    // so we will check in which segment of 100 the generated random number lies
    
    //  generates number between 0 and 99
    int randomNumber = rand()%100;
    
    if ( randomNumber >= 0 && randomNumber < 18 )         // TILE_RED
    {
        m_tile = TILE_RED;
    }
    else if ( randomNumber >= 18 && randomNumber < 36 )   // TILE_GREEN
    {
        m_tile = TILE_GREEN;
    }
    else if ( randomNumber >= 36 && randomNumber < 54 )   // TILE_YELLOW
    {
        m_tile = TILE_YELLOW;
    }
    else if ( randomNumber >= 54 && randomNumber< 72 )   // TILE_SHIELD
    {
        m_tile = TILE_SHIELD;
    }
    else if ( randomNumber >= 72 && randomNumber < 90 )   // TILE_LILAC
    {
        m_tile = TILE_LILAC;
    }
    else if ( randomNumber >= 90 && randomNumber < 92 )   // TILE_BOMB_1
    {
        m_tile = TILE_BOMB_1;
    }
    else if ( randomNumber >= 92 && randomNumber < 94 )   // TILE_BOMB_2
    {
        m_tile = TILE_BOMB_2;
    }
    else if ( randomNumber >= 94 && randomNumber < 97 )   // TILE_BOMB_3
    {
        m_tile = TILE_BOMB_3;
    }
    else if ( randomNumber >= 96 && randomNumber < 98 )   // TILE_BOMB_4
    {
        m_tile = TILE_BOMB_4;
    }
    else if ( randomNumber >= 98 && randomNumber < 100 )  // TILE_BOMB_5
    {
        m_tile = TILE_BOMB_5;
    }
}

// swap two tiles
void Tile::swap(Tile& tile)
{
    TileType tempTile = m_tile;
    m_tile = tile.m_tile;
    tile.m_tile = tempTile;
}

// return type
const Tile::TileType Tile::getType(void) const
{
    return m_tile;
}

// return bomb value (if a bomb, else 0)
const unsigned int Tile::getBombValue(void) const
{
    unsigned int value = 0;

    switch ( m_tile )
    {
    case TILE_BOMB_1:
        value = 1;
        break;
    case TILE_BOMB_2:
        value = 2;
        break;
    case TILE_BOMB_3:
        value = 3;
        break;
    case TILE_BOMB_4:
        value = 4;
        break;
    case TILE_BOMB_5:
        value = 5;
        break;
    default:
        break;
    }

    return value;
}

