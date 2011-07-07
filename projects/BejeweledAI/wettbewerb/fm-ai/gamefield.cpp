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
#include <fstream>
#include <vector>

// Own
//////////////
#include "gamefield.h"
#include "fieldpos.h"

// standard constructor
// initialize game field
GameField::GameField(void)
{
    // nothing to do
}

// Copy constructor
GameField::GameField(const GameField& field)
{
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
        {
            m_field[i][j] = field.m_field[i][j];
        }
    }
}
      
// destructor
GameField::~GameField(void)
{
    // nothing to do
}

// copy game field
void GameField::set(const GameField& field)
{
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
        {
            m_field[i][j] = field.m_field[i][j];
        }
    }  
}

// opens file and reads the first 100 relevant characters
// newline, cr, spaces and tabs will be ignored
// return true if everything is ok
const bool GameField::read(const std::string& filename)
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ifstream infile( filename.c_str() );
        
        if ( NULL != infile )
        {
            unsigned int i = 0;
            unsigned int j = 0;
            
            while ( infile.good() && j < FIELD_HEIGHT )
            {
                if ( i >= FIELD_WIDTH )
                {
                    i = 0;
                    j++;
                }
                
                // read character
                char c = 0;
                infile.get(c);
                // std::cout << c;
                
                switch ( (Tile::TileType)c )
                {
                    case Tile::TILE_RED:
                    case Tile::TILE_GREEN:
                    case Tile::TILE_YELLOW:
                    case Tile::TILE_SHIELD:
                    case Tile::TILE_LILAC:
                    case Tile::TILE_BOMB_1:
                    case Tile::TILE_BOMB_2:
                    case Tile::TILE_BOMB_3:
                    case Tile::TILE_BOMB_4:
                    case Tile::TILE_BOMB_5:
                        // store tile
                        m_field[i][FIELD_HEIGHT-j-1].set( (Tile::TileType)c );
                        i++;
                        break;
                    default:
                      // ignore everything else
                      break;
                }
            }
            
            // check if whole field was loaded
            if ( ( 0 != i ) || ( FIELD_HEIGHT != j ) )
            {
                std::cout << "GameField::read() error: game field was not loaded completely" << std::endl;
            }
            else
            {
                ok = true;
            }

            // close file
            infile.close();
        }
        else
        {
            std::cout << "GameField::read() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::read() error: string is empty" << std::endl;
    }
    
    if (ok)
    {
        // print();
    }

    return ok;
}

// prints the game field on screen
void GameField::print(void) const
{
    for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
    {
        for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
        {
            // initialize with zeros
            std::cout << (char)m_field[i][FIELD_HEIGHT-j-1].getType() << " ";
        }
        std::cout << std::endl;
    }        
    std::cout << std::endl;
}

// calculate next move for this player
// and write result to file
const bool GameField::calculate(const Player& player, const Player& opponent, const std::string& filename) const
{
    bool ok = false;
    
    // search "good" tile on game field
    // This KI is really dumb! It just searches the first possible
    // positions to swap. It does not take the player or opponent
    // settings into account.
    // THIS IS YOUR TASK! ;)
    
    // tile positions on game field to swap
    FieldPos pos1, pos2;

    if ( findSwapPositions(pos1, pos2) )
    {
        // std::cout << "GameField::calculate() swap "
        //           << pos1.x() << " " << pos1.y() << " with "
        //           << pos2.x() << " " << pos2.y() << std::endl;

        // store positions
        if ( writePositions(pos1, pos2, filename) )
        {
            ok = true;
        }
    }
    
    return ok;
}

// search "good" tile on game field that should be swapped
// return true if position could be found
const bool GameField::findSwapPositions(FieldPos& pos1, FieldPos& pos2) const
{
    bool found = false;
    
    // we go through each column and row and swap single elements
    for ( unsigned int i = 0; i < FIELD_WIDTH-1; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_HEIGHT-1; j++ )
        {
            // set positions for swapping
            FieldPos tempPos1(i,j);
            FieldPos tempPos2(i,j+1);
            
            // swap tiles at positions and check if there
            // are same tiles connected
            if ( checkSwapPosition(tempPos1,tempPos2) )
            {
                found = true;
                
                // copy swap position
                pos1 = tempPos1;
                pos2 = tempPos2;

                // leave for-loop
                break;    
            }
            
            // set positions for swapping
            tempPos1.set(i,j);
            tempPos2.set(i+1,j);
            
            // swap tiles at positions and check if there
            // are same tiles connected now
            if ( checkSwapPosition(tempPos1,tempPos2) )
            {
                found = true;
                
                // copy swap position
                pos1 = tempPos1;
                pos2 = tempPos2;
                
                // leave for-loop
                break;     
            }            
        }
        
        if (found)
        {
            // leave for-loop
            break;
        }
    } 
    
    return found;
}

// swap tiles at positions and check if there are same tiles connected
// return true if position could be found
const bool GameField::checkSwapPosition(FieldPos& pos1, FieldPos& pos2) const
{
    bool found = false;

    // copy game field
    GameField tempField(*this); 

    // swap tiles
    if ( tempField.swapTiles(pos1,pos2) )
    {
        // check if there are some same tiles
        if ( tempField.findSameTiles() )
        {
            found = true;
        }
    }

    return found;
}

// return const reference for tile    
const Tile& GameField::getTile(const FieldPos& pos) const
{
    if ( ( pos.x() >= FIELD_WIDTH ) || ( pos.y() >= FIELD_HEIGHT ) )
    {
        std::cout << "GameField::getTile() access out of boundaries" << std::endl;
        return m_dummyTile;
    }
    else
    {
        return m_field[pos.x()][pos.y()];
    }
}

// return reference for tile    
Tile& GameField::getTile(const FieldPos& pos)
{
    if ( ( pos.x() >= FIELD_WIDTH ) || ( pos.y() >= FIELD_HEIGHT ) )
    {
        std::cout << "GameField::getTile() access out of boundaries" << std::endl;
        return m_dummyTile;
    }
    else
    {
        return m_field[pos.x()][pos.y()];
    }
}

// tries to swap two tiles
// return true if possible
const bool GameField::swapTiles(const FieldPos& pos1, const FieldPos& pos2)
{
    bool possible = false;
    
    // check if two fields are inside array boundaries
    if ( pos1.x() < FIELD_WIDTH && pos1.y() < FIELD_HEIGHT &&
         pos2.x() < FIELD_WIDTH && pos2.y() < FIELD_HEIGHT )
    {
        // check if next to each other
        if ( ( (pos1.x() == pos2.x()) && ((pos1.y() == pos2.y()+1 || pos1.y()+1 == pos2.y())) ) ||
             ( (pos1.y() == pos2.y()) && ((pos1.x() == pos2.x()+1 || pos1.x()+1 == pos2.x())) ) )
        {
            // swap tiles
            getTile(pos1).swap( getTile(pos2) );
            possible = true;
        }
        else
        {
            std::cout << "GameField::swapTiles() error: tiles not next to each other"
                      << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::swapTiles() error: pos out of boundaries"
                  << std::endl;
    }

    return possible;
}

// search for equal tiles
// return true if something has been found
const bool GameField::findSameTiles(void) const
{
    bool found = false;

    if ( findSameTilesInColumns() )
    {
        found = true;
    }
    
    if ( findSameTilesInRows() )
    {
        found = true;
    }

    return found;
}   

// search for equal tiles in rows
// return true if something has been found
const bool GameField::findSameTilesInRows(void) const
{
    bool found = false;
      
    // now go through each row
    for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
    {
        // reset length
        unsigned int length = 0;

        for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
        {
            if ( 0 == i || m_field[i][j] == m_field[i-1][j] )
            {
                // same tile as before or new start tile
                length++;
                                
                // if the last tile in this column
                // we must check the length
                if ( ( FIELD_WIDTH-1 == i ) && ( length >= 3 ) )
                {
                    found = true;
                }                
            }
            else
            {
                // new tile here
                if ( length >= 3 )
                {
                    found = true;
                }
                
                // set new length
                length = 1;
            }
        }
    }        
    
    return found;
}   

// search for equal tiles in columns
// return true if something has been found
const bool GameField::findSameTilesInColumns(void) const
{
    bool found = false;
            
    // we will go through each column
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        // reset length
        unsigned int length = 0;
        
        for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
        {
            if ( 0 == j || m_field[i][j] == m_field[i][j-1] )
            {
                // same tile as before or new start tile
                length++;
                
                // if the last tile in this column
                // we must check the length
                if ( ( FIELD_HEIGHT-1 == j ) && ( length >= 3 ) )
                {
                    found = true;
                }                
            }
            else
            {
                // new tile here
                if ( length >= 3 )
                {
                    found = true;
                }

                // set new length
                length = 1;
            }
        }
    }    
    
    return found;
}   

// store positions in file
// return true if everything is ok
const bool GameField::writePositions(const FieldPos& pos1, const FieldPos&pos2, const std::string filename) const
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ofstream outfile( filename.c_str() );
        
        if ( outfile.good() )
        {
            // write positions into file
            outfile << pos1.x() << " "
                    << pos1.y() << " "
                    << pos2.x() << " "
                    << pos2.y() << std::endl;
            
            // close file
            outfile.close();
            
            ok = true;
        }
        else
        {
            std::cout << "GameField::writePositions() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::writePositions() error: string is empty" << std::endl;
    }
    
    return ok;
}
