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

#ifndef GAMEFIELD_H
#define GAMEFIELD_H

// System
//////////////
#include <string>

// Own
//////////////
#include "tile.h"
#include "fieldpos.h"
#include "scoredtilearray.h"

class GameField 
{
private:    // enumerators

    // game specifications (may change later)
    enum GameSpec
    {
        FIELD_WIDTH = 10,
        FIELD_HEIGHT = 10,
        FIELD_EXTRA_HEIGHT = 10000
    };

public:     // methods
 
    // standard constructor
    // initialize game field
    GameField(void);

    // Copy constructor
    GameField(const GameField& field);
    
    // destructor
    ~GameField(void);

    // creates a new game field with random tiles
    // until the game field is playable
    void create(void);
        
    // prints the game field on screen
    void print(void) const;

    // opens file and reads the first 100 relevant characters
    // newline, cr, spaces and tabs will be ignored
    // return true if everything is ok
    const bool write(const std::string& filename) const;
    
    // Checks if the game field is playable
    // if the tiles on the two given positions are swapped
    const bool isPlayable(const FieldPos& pos1, const FieldPos& pos2) const;

    // tries to swap two tiles
    // return true if playable afterwards
    const bool swapTiles(const FieldPos& pos1, const FieldPos& pos2);

    // fill all empty tiles with random tiles
    void fillEmptyTiles(void);
    
    // let all existing tiles fall to the ground
    // return false if there are no new tiles (random tiles needed)
    const bool fallTilesToGround(const bool contest);    
    
    // removes tiles on field
    void removeTiles(const ScoredTileArray& tArray);

    // search for equal tiles
    // return true if something has been found
    const bool findSameTiles(ScoredTileArray& array) const;    

    // opens file and writes field in it
    // return true if everything is ok
    const bool writeContest(const std::string& filename) const;

    // opens file and reads the first 100 relevant characters
    // newline, cr, spaces and tabs will be ignored
    // return true if everything is ok
    const bool readContest(const std::string& filename);
    
    // return true if there is at least one pair of tiles
    // that can be swapped so that a tripel tile can be
    // eliminated 
    const bool isPlayable(void) const;

    // remove lower line in game field    
    // return true if there are still tiles that can be dropped down
    // in contest
    const bool removeLowerLine(const bool contest);
            
private:    // methods

    // remove tiles and fill the game fields until only maximum
    // two same tiles are next to each other
    void cascade(void);

    // copy game field
    void set(const GameField& field);

    // creates a new game field with random tiles
    void createRandom(void);
    
    // remove all stored tiles
    void removeTiles(const ScoredTile& tile);
    
    // search for equal tiles in rows
    // return true if something has been found
    const bool findSameTilesInRows(ScoredTileArray& array) const;    

    // search for equal tiles in columns
    // return true if something has been found
    const bool findSameTilesInColumns(ScoredTileArray& array) const;    
    
    // return const reference for tile    
    const Tile& getTile(const FieldPos& pos) const;

    // return reference for tile    
    Tile& getTile(const FieldPos& pos);
    
private:    // members

    // we only need a 10x10 game field
    Tile m_field[FIELD_WIDTH][FIELD_EXTRA_HEIGHT];
    
    // dummy tile if access is out of boundary
    Tile m_dummyTile;
};

#endif // GAMEFIELD_H
