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

#ifndef PLAYER_H
#define PLAYER_H

// System
//////////////
#include <string>

// Eigene
///////////
#include "tile.h"
#include "scoredtile.h"
#include "scoredtilearray.h"

class Player 
{
public:    // enumerator
    enum PlayerSpec
    {
        PLAYER_MAX_LIFE = 30,
        PLAYER_MAX_SHIELD = 15,
        PLAYER_MAX_POINTS = 15,
        PLAYER_EXTRA_TURN = 15
    };
    
public:    
    // standard constructor
    Player(void);
    
    // destructor
    ~Player(void);
    
    // check if player is dead ( life = 0 )
    const bool isDead(void) const;
    
    // write player data to file
    // return true if everything went fine
    const bool write(const std::string& filename) const;
    
    // player looses some life points/shield
    void looseLife(unsigned int points);

    // add some points to shield
    void addShield(const unsigned int points);
    
    // print player data on screen
    void print(void) const;
    
    // add points from removed tiles
    void addPoints(const ScoredTileArray& tArray);
    
    // check if player has extra turn (enough lilac points)
    // if some reset lilac points
    const bool hasExtraTurn(void);
    
    // calculate damage for opponent
    // if some damage can be done, the concerning points
    // will be resetted
    const unsigned int getOpponentDamage(void);
    
    // return life points
    const unsigned int getLife(void) const;

    // return shield points
    const unsigned int getShield(void) const;

    // return red points
    const unsigned int getRed(void) const;

    // return green points
    const unsigned int getGreen(void) const;

    // return yellow points
    const unsigned int getYellow(void) const;

    // return lilac points
    const unsigned int getLilac(void) const;
    
    // reset all values to default
    void reset(void);
    
    // player looses all his life points and shield
    // => he's dead
    void looseAllLife(void);

private:    
    // add points from removed tile
    void addPoints(const ScoredTile& tile);

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
    
    // additional bomb damage for opponent
    unsigned int m_bombDamage;
};

#endif // PLAYER_H
