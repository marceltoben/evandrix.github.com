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
#include <cstdio>
#include <stdlib.h>

// Eigene
///////////
#include "game.h"

// standard constructor
Game::Game(void)
{
    // create new game
    m_field.create();
    
    // set start player
    m_currentPlayer = 0;
}

// destructor
Game::~Game(void)
{
}

// start game
const unsigned int Game::start(const unsigned int startPlayer)
{
    unsigned int loser = 0;
    
    if ( ( 0 != startPlayer ) && ( 1 != startPlayer ) )
    {
        std::cout << "Game::start() error: start player is not 0 or 1"
                  << std::endl;
    }
    else
    {
        m_currentPlayer = startPlayer;
        
        loser = doStart(false);
    }
    
    return loser;
}

// start game
const unsigned int Game::startContest(const std::string& filename, const unsigned int startPlayer)
{
    unsigned int loser = 0;

    // reset both players
    m_player[0].reset();
    m_player[1].reset();
    
    if ( ( 0 != startPlayer ) && ( 1 != startPlayer ) )
    {
        std::cout << "Game::start() error: start player is not 0 or 1"
                  << std::endl;
    }
    else
    {
        m_currentPlayer = startPlayer;
        
        // load field
        if ( m_field.readContest(filename) )
        {
            loser = doStart(true);
        }
    }
    
    return loser;
}


// do-loop for gaming till one player has lost (starting at 1)
const unsigned int Game::doStart(const bool contest)
{
    do
    {
#ifdef DEBUG
        std::cout << "Player's " << m_currentPlayer+1 << " turn!" << std::endl;
#endif        

        if ( !writeData() )
        {
            break;
        }

#ifdef DEBUG
        // print game field
        m_field.print();
#endif

        if ( !contest )
        {
            std::cout << "Manually save result.dat and hit enter!" << std::endl;
            getchar();
        }
        else
        {
            // call routine for AI
            if ( 0 == m_currentPlayer )
            {
                if ( system ("./fm-ai1.bin") )
                {
                    std::cout << "Game::doStart() error: calling fm-ai1 failed" << std::endl;
                    // this player will loose the contest
                    m_player[m_currentPlayer].looseAllLife();
                    
                    break;
                }
            }
            else
            {
                if ( system ("./fm-ai2.bin") )
                {
                    std::cout << "Game::doStart() error: calling fm-ai2 failed" << std::endl;

                    // this player will loose the contest
                    m_player[m_currentPlayer].looseAllLife();

                    break;
                }
            }
        }
        
        // now we must read the result that has stored to positions
        FieldPos pos1, pos2;
        if ( !readResult(pos1, pos2) )
        {
            // file could not be read
            break;   
        }
        
#ifdef DEBUG
        std::cout << "Game::doStart() info: swap "
                  << pos1.x() << " " << pos1.y() << " with "
                  << pos2.x() << " " << pos2.y() << std::endl;
#endif
        
        // delete files
        deleteFiles();
        
        // switch positions on game field
        if ( m_field.swapTiles(pos1, pos2) )
        {
            // remove all matching tiles
            if ( !cascade(contest) )
            {
                break;
            }

        }
        else
        {
#ifdef DEBUG
            std::cout << "Game::doStart() Illegal move: loose 5 life"
                      << std::endl;
#endif
            m_player[m_currentPlayer].looseLife(5);
            // getchar();
        }

        // set next player (if necessary)
        nextPlayer();

        // check if gamefield is playable and remove lower lines
        // until the game is playable again
        if ( !checkIfPlayable(contest) )
        {
            break;                
        }
        
#ifdef DEBUG
        // print player info
        printPlayers();
#endif
        
        // getchar();
        
    } while ( !isOnePlayerDead() );
    
    return checkWhosDead();
}

// check which player has lost
// if no player is dead we check which one has more life left
const unsigned int Game::checkWhosDead(void) const
{
#ifdef DEBUG
        // print player info
        printPlayers();
#endif

    unsigned int loser = 0;
    
    if ( m_player[0].isDead() )
    {
        std::cout << "Player 1 is dead!" << std::endl
                  << std::endl;
        loser = 1;
    }
    else if ( m_player[1].isDead() )
    {
        std::cout << "Player 2 is dead!" << std::endl
                  << std::endl;
        loser = 2;
    }
    else
    {
        std::cout << "Nonone is dead!" << std::endl;

        // compare players who is better
        loser = comparePlayers();

        if ( 0 != loser )
        {
            std::cout << "But player " << loser << " has lost!"
                      << std::endl;
        }
        std::cout << std::endl;
    }
    
    return loser;
}

// set next player
void Game::nextPlayer(void)
{
    // set next player (if necessary)
    if ( !m_player[m_currentPlayer].hasExtraTurn() )
    {
        m_currentPlayer = (m_currentPlayer+1) % 2;
    }
}

// check if one of the players is dead
const bool Game::isOnePlayerDead(void) const
{
    return ( m_player[0].isDead() || m_player[1].isDead() );
}

// delete files
void Game::deleteFiles(void) const
{
    // delete all created files if necessary
    if ( std::remove("gamefield.dat") )
    {
#ifdef DEBUG
        std::cout << "Game::deleteFiles() warning: gamefield.dat could not be deleted." << std::endl;
#endif
    } 
    
    if ( std::remove("player.dat") )
    {
#ifdef DEBUG
        std::cout << "Game::deleteFiles() warning: player.dat could not be deleted." << std::endl;
#endif
    } 
    
    if ( std::remove("opponent.dat") )
    {
#ifdef DEBUG
        std::cout << "Game::deleteFiles() warning: opponent.dat could not be deleted." << std::endl;
#endif
    } 

    if ( std::remove("result.dat") )
    {
#ifdef DEBUG
        std::cout << "Game::deleteFiles() warning: result.dat could not be deleted." << std::endl;
#endif
    }
}

// read result (tiles to swap) from external file_set
// return true if file could be read
const bool Game::readResult(FieldPos& pos1, FieldPos& pos2) const
{
    bool ok = false;

    // open file for reading
    std::ifstream infile("result.dat");
    
    if ( infile.good() )
    {
        ok = true;

        // counter what value we have read
        unsigned int t = 0;
        unsigned int x = 0;
        unsigned int y = 0;

        while ( infile.good() )
        {
            // get character
            char c = 0;
            infile.get(c);
            // std::cout << c;
            
            // only read numbers
            if ( ( c >= '0' ) && ( c <= '9' ) )
            {
                switch ( t )
                {
                    case 0:
                    case 2:
                        x = (unsigned int)c-48;
                        break;
                    case 1:
                    case 3:
                        y = (unsigned int)c-48;
                        if (1 == t)
                        {
                            pos1.set(x,y);
                        }
                        else
                        {
                            pos2.set(x,y);
                        }
                        break;
                    default:
                        break;
                }
                t++;
                
                if ( t >= 5 )
                {
                    ok = false;
                    break;
                }
            }
        }
        infile.close();
    }
    else
    {
        std::cout << "Game::readResult() error: file could not be opened" << std::endl;
    }
    
    return ok;    
}

// write field and player data to disk
// return true if everything went fine
const bool Game::writeData(void) const
{
    bool ok = false;

    if ( m_field.write("gamefield.dat") )
    {
        // store player data
        if ( m_player[m_currentPlayer].write("player.dat") )
        {
            // store opponent data
            if ( m_player[(m_currentPlayer+1)%2].write("opponent.dat") )
            {
                ok = true;
            }
        }
    }
    
    return ok;
}

// remove same tiles on field and give points to player
const bool Game::cascade(const bool contest)
{
    ScoredTileArray tArray;
    
    bool ok = true;
    
    // flag if first loop
    bool first = true;
    
    while ( m_field.findSameTiles(tArray) )
    {

#ifdef DEBUG
        // print game field
        if (!first)
        {
            std::cout << "Game::cascade() info: Intermediate game field" << std::endl;
            m_field.print();
        }
#endif

        // remove tiles
        m_field.removeTiles(tArray);

        // add points for player
        m_player[m_currentPlayer].addPoints(tArray);
        
        // calculate damage for opponent
        unsigned int damage = m_player[m_currentPlayer].getOpponentDamage();
        
#ifdef DEBUG
        if ( damage > 0 )
        {
            std::cout << "Game::cascade() info: opponent looses "
                      << damage << " life." << std::endl;
        }
#endif
        
        m_player[(m_currentPlayer+1)%2].looseLife( damage );
        
        // first let all existing tiles fall to the ground
        if ( !m_field.fallTilesToGround(contest) )
        {
            if ( !contest )
            {
                // we need some random tiles
                m_field.fillEmptyTiles();
            }
            else
            {
                // we do not have any more tiles for contest
                ok = false;
                break;
            }
        }
                
        // clear array again
        tArray.clear();
        
        first = false;
    }
    
    return ok;
}

// generate and saves field to disc
const bool Game::writeFieldContest(const std::string& filename) const
{
    // save whole field
    return m_field.writeContest(filename);
}

// check if gamefield is playable and remove lower lines
// until the game is playable again
// return false if no new stones can be dropped from above
const bool Game::checkIfPlayable(const bool contest)
{
    bool ok = true;
    
    // remove lines till field is playable again
    while ( !m_field.isPlayable() )
    {
        // return true if there are still tiles that can be dropped down
        // in contest
        ok = m_field.removeLowerLine(contest);
    }
    
    return ok;
}
    
// print both players info
void Game::printPlayers(void) const
{
    std::cout << "        Player 1 | Player 2" << std::endl;
    std::cout << "Life:   " << m_player[0].getLife()   << "\t | " 
                            << m_player[1].getLife()   << std::endl;
    std::cout << "Shield: " << m_player[0].getShield() << "\t | " 
                            << m_player[1].getShield() << std::endl;
    std::cout << "Red:    " << m_player[0].getRed()    << "\t | " 
                            << m_player[1].getRed()    << std::endl;
    std::cout << "Yellow: " << m_player[0].getYellow() << "\t | " 
                            << m_player[1].getYellow() << std::endl;
    std::cout << "Green:  " << m_player[0].getGreen()  << "\t | " 
                            << m_player[1].getGreen()   << std::endl;
    std::cout << "Lilac:  " << m_player[0].getLilac()  << "\t | "
                            << m_player[1].getLilac()  << std::endl;
    std::cout << std::endl;
}

// compare players who is better
// return player number or 0 if players are identical
const unsigned int Game::comparePlayers(void) const
{

    // check life and shield
    if ( m_player[0].getLife() + m_player[0].getShield() >
         m_player[1].getLife() + m_player[1].getShield() )
    {
        return 2;
    }
    else if ( m_player[0].getLife() + m_player[0].getShield() <
              m_player[1].getLife() + m_player[1].getShield() )
    {
        return 1;
    }
    
    // check life only
    if ( m_player[0].getLife() > m_player[1].getLife() )
    {
        return 2;
    }
    else if ( m_player[0].getLife() < m_player[1].getLife() )
    {
        return 1;
    }       
    
    // check chield only
    if ( m_player[0].getShield() > m_player[1].getShield() )
    {
        return 2;
    }
    else if ( m_player[0].getShield() < m_player[1].getShield() )
    {
        return 1;
    }
    
    // check points
    const unsigned int sumPoints[2] =
    { m_player[0].getRed() + m_player[0].getGreen() + m_player[0].getYellow(),
      m_player[1].getRed() + m_player[1].getGreen() + m_player[1].getYellow() };
    
    if ( sumPoints[0] > sumPoints[1] )
    {
        return 2;
    }
    else if ( sumPoints[0] < sumPoints[1] )
    {
        return 1;
    }
    
    // check red points only
    if ( m_player[0].getRed() > m_player[1].getRed() )
    {
        return 2;
    }
    else if ( m_player[0].getRed() < m_player[1].getRed() )
    {
        return 1;
    }    
    
    // check yellow points only
    if ( m_player[0].getYellow() > m_player[1].getYellow() )
    {
        return 2;
    }
    else if ( m_player[0].getYellow() < m_player[1].getYellow() )
    {
        return 1;
    }   

    // check green points only
    if ( m_player[0].getGreen() > m_player[1].getGreen() )
    {
        return 2;
    }
    else if ( m_player[0].getGreen() < m_player[1].getGreen() )
    {
        return 1;
    }           
    
    // check lilac
    if ( m_player[0].getLilac() > m_player[1].getLilac() )
    {
        return 2;
    }
    else if ( m_player[0].getLilac() < m_player[1].getLilac() )
    {
        return 1;
    }    
    
    // no onw has won
    return 0;
}
