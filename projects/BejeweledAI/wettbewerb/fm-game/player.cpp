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
#include <fstream>

// Eigene
/////////////
#include "player.h"

// standard constructor
Player::Player(void)
    : m_life(PLAYER_MAX_LIFE), m_shield(PLAYER_MAX_SHIELD),
      m_redPoints(0), m_greenPoints(0), m_yellowPoints(0),
      m_lilacPoints(0), m_bombDamage(0)
{
}

// destructor
Player::~Player(void)
{
}

// reset all values to default
void Player::reset(void)
{
    m_life = PLAYER_MAX_LIFE;
    m_shield = PLAYER_MAX_SHIELD;
    m_redPoints = 0;
    m_yellowPoints = 0;
    m_greenPoints = 0;
    m_lilacPoints = 0;
    m_bombDamage = 0;  
}

// check if player is dead ( life = 0 )
const bool Player::isDead(void) const
{
    return ( 0 >= m_life );
}

// write player data to file
// return true if everything went fine
const bool Player::write(const std::string& filename) const
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ofstream outfile( filename.c_str() );
        
        if ( outfile.good() )
        {
            // write player data
            outfile << m_life << std::endl;
            outfile << m_shield << std::endl;
            outfile << m_redPoints << std::endl;
            outfile << m_yellowPoints << std::endl;
            outfile << m_greenPoints << std::endl;
            outfile << m_lilacPoints << std::endl;
            
            // close file
            outfile.close();
            
            ok = true;
        }
        else
        {
            std::cout << "Player::write() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "Player::write() error: string is empty" << std::endl;
    }
    
    return ok;
}

// print player data on screen
void Player::print(void) const
{
    // write player data
    std::cout << "Life:   " << m_life << std::endl;
    std::cout << "Shield: " << m_shield << std::endl;
    std::cout << "Red:    " << m_redPoints << std::endl;
    std::cout << "Yellow: " << m_yellowPoints << std::endl;
    std::cout << "Green:  " << m_greenPoints << std::endl;
    std::cout << "Lilac:  " << m_lilacPoints << std::endl;    
}


// player looses some life points/shield
void Player::looseLife(unsigned int points)
{
    if ( points > m_shield )
    {
        // subtract shield
        points -= m_shield;
        m_shield = 0;
        
        // set life points
        m_life = ( points > m_life ) ? 0 : m_life - points;
    }
    else
    {
        // shiled has absorbed everything
        m_shield -= points;
    }
}

// add some points to shield
void Player::addShield(const unsigned int points)
{
    m_shield = ( m_shield + points > PLAYER_MAX_SHIELD) ? PLAYER_MAX_SHIELD : m_shield + points;
}
    
// add points from removed tiles
void Player::addPoints(const ScoredTileArray& tArray)
{
    // delete the positions stored in the array
    for ( std::vector<ScoredTile>::const_iterator it = tArray.begin(); it < tArray.end(); it++ )
    {
        addPoints(*it);
    }
}
    
// add points from removed tile
void Player::addPoints(const ScoredTile& tile)
{
    if ( tile.getTile().isBomb() )
    {
        // direct damage from bomb for opponent
        m_bombDamage += tile.getBombValue();
#ifdef DEBUG        
        std::cout << "Player::addPoints() info: "
                  << "add " << tile.getBombValue()
                  << " bomb damage" << std::endl;
#endif 
    }
    else
    {
        switch ( tile.getTile().getType() )
        {
            case Tile::TILE_RED:
                m_redPoints += tile.getLength();
#ifdef DEBUG        
                std::cout << "Player::addPoints() info: "
                          << "add " << tile.getLength()
                          << " red points" << std::endl;
#endif 
                break;
            case Tile::TILE_GREEN:
                m_greenPoints += tile.getLength();
#ifdef DEBUG        
                std::cout << "Player::addPoints() info: "
                          << "add " << tile.getLength()
                          << " green points" << std::endl;
#endif 
                break;
            case Tile::TILE_YELLOW:
                m_yellowPoints += tile.getLength();
#ifdef DEBUG        
                std::cout << "Player::addPoints() info: "
                          << "add " << tile.getLength()
                          << " yellow points" << std::endl;
#endif 
                break;
            case Tile::TILE_LILAC:
                m_lilacPoints += tile.getLength();
#ifdef DEBUG        
                std::cout << "Player::addPoints() info: "
                          << "add " << tile.getLength()
                          << " lilac points" << std::endl;
#endif 
                break;
            case Tile::TILE_SHIELD:
                addShield(tile.getLength());
#ifdef DEBUG
                std::cout << "Player::addPoints() info: "
                          << "add " << tile.getLength()
                          << " shield" << std::endl;
#endif 
                break;
            default:
                break;
        }
    }
}

// calculate damage for opponent
// if some damage can be done, the concerning points
// will be resetted
const unsigned int Player::getOpponentDamage(void)
{
    unsigned int damage = 0;
    
    if ( m_greenPoints >= PLAYER_MAX_POINTS )
    {
        damage += 3;
        m_greenPoints -= PLAYER_MAX_POINTS;
    }
    
    if ( m_yellowPoints >= PLAYER_MAX_POINTS )
    {
        damage += 6;
        m_yellowPoints -= PLAYER_MAX_POINTS;
    }

    if ( m_redPoints >= PLAYER_MAX_POINTS )
    {
        damage += 10;
        m_redPoints -= PLAYER_MAX_POINTS;
    }
    
    // add bomb damage
    damage += m_bombDamage;
    m_bombDamage = 0;
    
    return damage;
}

// check if player has extra turn (enough lilac points)
// if some reset lilac points
const bool Player::hasExtraTurn(void)
{
    bool extraTurn = false;
    
    if ( m_lilacPoints >= PLAYER_EXTRA_TURN )
    {
        extraTurn = true;
        m_lilacPoints -= PLAYER_EXTRA_TURN;
        
#ifdef DEBUG
        std::cout << "Player::hasExtraTurn" << std::endl;
        // getchar();
#endif
    }
    
    return extraTurn;
}

// return life points
const unsigned int Player::getLife(void) const
{
    return m_life;
}

// return shield points
const unsigned int Player::getShield(void) const
{
    return m_shield;
}

// return red points
const unsigned int Player::getRed(void) const
{
    return m_redPoints;
}

// return green points
const unsigned int Player::getGreen(void) const
{
    return m_greenPoints;
}

// return yellow points
const unsigned int Player::getYellow(void) const
{
    return m_yellowPoints;
}

// return lilac points
const unsigned int Player::getLilac(void) const
{
    return m_lilacPoints;
}

// player looses all his life points and shield
// => he's dead
void Player::looseAllLife(void)
{
    m_shield = 0;
    m_life = 0;
}
