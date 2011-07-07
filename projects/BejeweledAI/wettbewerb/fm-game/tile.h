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

#ifndef TILE_H
#define TILE_H

class Tile 
{
public:    // enumerators
    
    enum TileType
    {
        TILE_RED     = 'R',    
        TILE_GREEN   = 'G',    
        TILE_YELLOW  = 'Y',    
        TILE_SHIELD  = 'B',    
        TILE_LILAC   = 'L',
        TILE_EMPTY   = '0',
        TILE_BOMB_1  = '1',
        TILE_BOMB_2  = '2',
        TILE_BOMB_3  = '3',
        TILE_BOMB_4  = '4',
        TILE_BOMB_5  = '5'
    };

public:     // methods
 
    // standard constructor
    Tile(void);

    // Copy constructor
    Tile(const Tile& tile);
    
    // destructor
    ~Tile(void);

    // set tile type
    void set(const TileType tile);
    
    // Compare operator
    const bool operator==(const Tile& tile) const;

    // Compare operator
    const bool operator==(const TileType tile) const;

    // return true if tile is a bomb
    const bool isBomb(void) const;

    // Check if tile is not set yet.
    const bool isEmpty(void) const;

    // set empty tile
    void setEmpty(void);

    // swap two tiles
    void swap(Tile& tile);
    
    // set random tile
    void setRandom(void);
    
    // return type
    const TileType getType(void) const;
    
    // return bomb value (if a bomb, else 0)
    const unsigned int getBombValue(void) const;
    
private:    // members

    TileType m_tile;
};

#endif // TILE_H
