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

#ifndef SCOREDTILE_H
#define SCOREDTILE_H

// Own
//////////////
#include "tile.h"
#include "fieldpos.h"

class ScoredTile 
{
public:     // enumerators
 
    // direction for placed fields
    enum FieldDirection
    {
        FIELDDIRECTION_UP    = 0,
        FIELDDIRECTION_RIGHT = 1,
        FIELDIRECTION_NONE   = 2
    };

public:     // methods

    // standard constructor
    ScoredTile(void);

    // constructor
    ScoredTile(const FieldPos& pos, const unsigned int len,
               const FieldDirection dir, const Tile& tile,
               const unsigned int bombValue);

    // Copy constructor
    ScoredTile(const ScoredTile& tile);
    
    // destructor
    ~ScoredTile(void);
    
    // return position
    const FieldPos& getPos(void) const;
    
    // return direction
    const FieldDirection getDirection(void) const;
    
    // return length
    const unsigned int getLength(void) const;
    
    // return tile type
    const Tile& getTile(void) const;
    
    // return bomb value
    const unsigned int getBombValue(void) const;
    
    // set all values
    void set(const FieldPos& pos, const unsigned int len,
             const FieldDirection dir, const Tile& tile,
             const unsigned int bombValue);

    // return true if dir is FIELDDIRECTION_UP
    const bool isUp(void) const;

    // return true if dir is FIELDDIRECTION_RIGHT
    const bool isRight(void) const;

private:    // members

    // Position of start
    FieldPos m_pos;
    
    // number of same tiles (min. 3, max. 10)
    unsigned int m_length;
    
    // direction in which the same tiles are located
    // (only up or right possible)
    FieldDirection m_direction;
    
    // Tile type (for bombs just a placeholder)
    Tile m_tile;
    
    // bomb value (for bombs only)
    unsigned int m_bombValue;
};

#endif // SCOREDTILE_H
