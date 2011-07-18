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

#ifndef GAMEFIELD_H
#define GAMEFIELD_H

// System
//////////////
#include <string>

// Own
//////////////
#include "tile.h"
#include "player.h"
#include "fieldpos.h"

class GameField 
{
private:    // enumerators

    // game specifications (may change later)
    enum GameSpec
    {
        FIELD_WIDTH = 10,
        FIELD_HEIGHT = 10
    };

public:     // methods
 
    // standard constructor
    // init game field
    GameField(void);

    // Copy constructor
    GameField(const GameField& field);
    
    // destructor
    ~GameField(void);

    // opens file and reads the first 100 relevant characters
    // newline, cr, spaces and tabs will be ignored
    // return true if everything is ok
    const bool read(const std::string& filename);

    // calculate next move for this player
    // and write result to file
    const bool calculate(const Player& player, const Player& opponent, const std::string& filename) const;


private:    // methods

    // prints the game field on screen
    void print(void) const;

    // copy game field
    void set(const GameField& field);

    // search "good" tile on game field that should be swapped
    // return true if position could be found
    const bool findSwapPositions(FieldPos& pos1, FieldPos& pos2) const;
    
    // swap tiles at positions and check if there are same tiles connected
    // return true if position could be found
    const bool checkSwapPosition(FieldPos& pos1, FieldPos& pos2) const;

    // tries to swap two tiles
    // return true if possible
    const bool swapTiles(const FieldPos& pos1, const FieldPos& pos2);

    // return const reference for tile    
    const Tile& getTile(const FieldPos& pos) const;

    // return reference for tile    
    Tile& getTile(const FieldPos& pos);

    // search for equal tiles
    // return true if something has been found
    const bool findSameTiles(void) const;    

    // search for equal tiles in rows
    // return true if something has been found
    const bool findSameTilesInRows(void) const;    

    // search for equal tiles in columns
    // return true if something has been found
    const bool findSameTilesInColumns(void) const;    

    // store positions in file
    // return true if everything is ok
    const bool writePositions(const FieldPos& pos1, const FieldPos&pos2, const std::string filename) const;
    
private:    // members

    // we only need a 10x10 game field
    Tile m_field[FIELD_WIDTH][FIELD_HEIGHT];
    
    // dummy tile if access is out of boundary
    Tile m_dummyTile;





/*




    // Checks if the game field is playable
    // if the tiles on the two given positions are swapped
    const bool isPlayable(const FieldPos& pos1, const FieldPos& pos2) const;


    // fill all empty tiles with random tiles
    void fillEmptyTiles(void);
    
    // let all existing tiles fall to the ground
    void fallTilesToGround(const bool contest);    
    
    // removes tiles on field
    void removeTiles(const ScoredTileArray& tArray);


    // opens file and writes field in it
    // return true if everything is ok
    const bool writeContest(const std::string& filename) const;

    









    // remove tiles and fill the game fields until only maximum
    // two same tiles are next to each other
    void cascade(void);

    // creates a new game field with random tiles
    void createRandom(void);
    
    // remove all stored tiles
    void removeTiles(const ScoredTile& tile);
    
    
    // return true if there is at least one pair of tiles
    // that can be swapped so that a tripel tile can be
    // eliminated 
    const bool isPlayable(void) const;

    */
    
    
};

#endif // GAMEFIELD_H
