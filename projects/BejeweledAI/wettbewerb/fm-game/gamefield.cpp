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
#include <vector>

// Own
//////////////
#include "gamefield.h"
#include "scoredtile.h"

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
        for ( unsigned int j = 0; j < FIELD_EXTRA_HEIGHT; j++ )
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
        for ( unsigned int j = 0; j < FIELD_EXTRA_HEIGHT; j++ )
        {
            m_field[i][j] = field.m_field[i][j];
        }
    }  
}
    
// prints the game field on screen
void GameField::print(void) const
{
    std::cout << "  | 0 1 2 3 4 5 6 7 8 9" << std::endl;
    std::cout << "--+--------------------" << std::endl;

    for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
    {
        std::cout << FIELD_HEIGHT-j-1 << " | ";

        for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
        {
            // initialize with zeros
            std::cout << (char)m_field[i][FIELD_HEIGHT-j-1].getType() << " ";
        }
        std::cout << std::endl;
    }        
    std::cout << std::endl;
}

// creates a new game field with random tiles
void GameField::createRandom(void)
{
    // we use the following probability
    // 0.18 for each color
    // 0.02 for each bomb
    // so we will check in which 
    
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_EXTRA_HEIGHT; j++ )
        {
            // initialize with zeros
            m_field[i][j].setRandom();
        }
    }            
}

// creates a new game field with random tiles
// until the game field is playable
void GameField::create(void)
{
    do
    {
        // create field with random tiles
        createRandom();
    
        // cascade tiles until not more than two eqal tiles are next to each other
        cascade();
        
    } while ( !isPlayable() );
}

// fill all empty tiles with random tiles
void GameField::fillEmptyTiles(void)
{
    // standard game
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
        {
            if ( m_field[i][j].isEmpty() )
            {
                m_field[i][j].setRandom();
            }
        }
    }
}

// let all existing tiles fall to the ground
const bool GameField::fallTilesToGround(const bool contest)
{
    bool ok = true;

    // user special height in contest    
    const unsigned int height = (contest) ? FIELD_EXTRA_HEIGHT : FIELD_HEIGHT;

    // let all existing tiles fall to the ground
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        // position in each column of tile to fill
        unsigned int fill = 0;
        
        for ( unsigned int j = 0; j < height; j++ )
        {
            if ( !m_field[i][j].isEmpty() )
            {
                if ( fill != j )
                {
                    m_field[i][fill] = m_field[i][j];
                }
                fill++;
            }
        }

        // no more tiles available for contest
        if ( contest && ( fill < 10 ) )
        {
            std::cout << "GameField::fallTilesToGround() error: no more tiles for contest"
                      << " in column " << i << std::endl;
                      
            ok = false;
            // getchar();
        }
        
        // fill rest of column with zeros
        for ( unsigned int j = fill; j < height; j++ )
        {
            m_field[i][j].setEmpty();
        }
    }
    
    return ok;
}

// remove tiles and fill the game fields until only maximum
// two same tiles are next to each other
void GameField::cascade(void)
{
    // print();
    ScoredTileArray tArray;
    
    while ( findSameTiles(tArray) )
    {
        // remove tiles
        removeTiles(tArray);

        // first let all existing tiles fall to the ground
        fallTilesToGround(false);

        // and fill with new ones
        fillEmptyTiles();
        
        // clear array again
        tArray.clear();
    }
}

// search for equal entries and removes them on the set
// return true if something has been removed
void GameField::removeTiles(const ScoredTileArray& tArray)
{
    // delete the positions stored in the array
    for ( std::vector<ScoredTile>::const_iterator it = tArray.begin(); it < tArray.end(); it++ )
    {
        // std::cout << "GameField::removeTiles() "
        //           << (*it).getPos().x() << " " << (*it).getPos().y() << std::endl;
        removeTiles(*it);
    }
}

// remove all stored tiles
void GameField::removeTiles(const ScoredTile& tile)
{
    // delete in column
    if ( tile.isUp() )
    {
        // std::cout << "GameField::removeTiles() delete col: "
        //           << tile.getPos().x() << " "
        //           << tile.getPos().y() << " till "
        //           << tile.getPos().x() << " "
        //           << tile.getPos().y()+tile.getLength()-1
        //           << std::endl;
        
        for ( unsigned int j = 0; j < tile.getLength(); j++ )
        {
            m_field[tile.getPos().x()][tile.getPos().y()+j].setEmpty();
        }
    }
    else if ( tile.isRight() )
    {
        // std::cout << "GameField::removeTiles() delete row: "
        //           << tile.getPos().x() << " "
        //           << tile.getPos().y() << " till "
        //           << tile.getPos().x()+tile.getLength()-1 << " "
        //           << tile.getPos().y()
        //           << std::endl;

        for ( unsigned int i = 0; i < tile.getLength(); i++ )
        {
            m_field[tile.getPos().x()+i][tile.getPos().y()].setEmpty();
        }
    }
    else
    {
        std::cout << "GameField::removeSameTiles() error: unknown direction" << std::endl;
    }
}

// search for equal tiles
// return true if something has been found
const bool GameField::findSameTiles(ScoredTileArray& tArray) const
{
    bool found = false;

    if ( findSameTilesInColumns(tArray) )
    {
        found = true;
    }
    
    if ( findSameTilesInRows(tArray) )
    {
        found = true;
    }

    return found;
}   

// search for equal tiles in rows
// return true if something has been found
const bool GameField::findSameTilesInRows(ScoredTileArray& tArray) const
{
    bool found = false;
      
    // now go through each row
    for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
    {
        // reset length
        unsigned int length = 0;
        unsigned int bombValue = 0;

        for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
        {
            if ( 0 == i || m_field[i][j] == m_field[i-1][j] )
            {
                // same tile as before or new start tile
                length++;
                
                // check if bomb and add bomb value
                if ( m_field[i][j].isBomb() )
                {
                    bombValue += m_field[i][j].getBombValue();
                }
                
                // if the last tile in this column
                // we must check the length
                if ( FIELD_WIDTH-1 == i && length >= 3 )
                {
                    // only store tiles if length is >= 3
                    ScoredTile sTile( FieldPos(i-length+1, j), length,
                                      ScoredTile::FIELDDIRECTION_RIGHT,
                                      m_field[i][j], bombValue );
                    tArray.push_back(sTile);
                                        
                    found = true;

                    //std::cout << "GameField::findSameTilesInRows1()    "
                              //<< i-length+1 << " " 
                              //<< j << " "
                              //<< length << " "
                              //<< (char)m_field[i][j].getType() << " "
                              //<< bombValue
                              //<< std::endl;
                }               
            }
            else
            {
                // new tile here
                if ( length >= 3 )
                {
                    // only store tiles if length is >= 3
                    ScoredTile sTile( FieldPos(i-length, j), length,
                                      ScoredTile::FIELDDIRECTION_RIGHT,
                                      m_field[i-1][j], bombValue );
                    tArray.push_back(sTile);

                    found = true;

                    //std::cout << "GameField::findSameTilesInRows2()    "
                              //<< i-length << " "  
                              //<< j << " " 
                              //<< length << " " 
                              //<< (char)m_field[i-1][j].getType() << " "
                              //<< bombValue
                              //<< std::endl;
                }
                
                // set new length
                length = 1;
                bombValue = 0;

                // check if bomb and add bomb value
                if ( m_field[i][j].isBomb() )
                {
                    bombValue += m_field[i][j].getBombValue();
                }

            }
        } 
    } // for FIELD_HEIGHT     
    
    return found;
}   

// search for equal tiles in columns
// return true if something has been found
const bool GameField::findSameTilesInColumns(ScoredTileArray& tArray) const
{
    bool found = false;
            
    // we will go through each column
    for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
    {
        // reset length
        unsigned int length = 0;
        unsigned int bombValue = 0;
        
        for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
        {
            if ( 0 == j || m_field[i][j] == m_field[i][j-1] )
            {
                // same tile as before or new start tile
                length++;
                
                // check if bomb and add bomb value
                if ( m_field[i][j].isBomb() )
                {
                    bombValue += m_field[i][j].getBombValue();
                }
                
                // if the last tile in this column
                // we must check the length
                if ( FIELD_HEIGHT-1 == j && length >= 3 )
                {
                    // only store tiles if length is >= 3
                    ScoredTile sTile( FieldPos(i, j-length+1), length,
                                      ScoredTile::FIELDDIRECTION_UP,
                                      m_field[i][j], bombValue );
                    tArray.push_back(sTile);
                   
                    found = true;
                    
                    //std::cout << "GameField::findSameTilesInColumns1() " 
                              //<< i << " "  
                              //<< j-length+1 << " " 
                              //<< length << " " 
                              //<< (char)m_field[i][j].getType() << " "
                              //<< bombValue
                              //<< std::endl;
                }                
            }
            else
            {
                // new tile here
                if ( length >= 3 )
                {
                    // only store tiles if length is >= 3
                    ScoredTile sTile( FieldPos(i, j-length), length,
                                      ScoredTile::FIELDDIRECTION_UP,
                                      m_field[i][j-1], bombValue );
                    tArray.push_back(sTile);
                    
                    found = true;

                    //std::cout << "GameField::findSameTilesInColumns2() " 
                              //<< i << " "  
                              //<< j-length << " " 
                              //<< length << " " 
                              //<< (char)m_field[i][j-1].getType() << " "
                              //<< bombValue
                              //<< std::endl;
                }

                // set new length
                length = 1;
                bombValue = 0;

                // check if bomb and add bomb value
                if ( m_field[i][j].isBomb() )
                {
                    bombValue += m_field[i][j].getBombValue();
                }
            }
        }
    }    
    
    return found;
}   

// opens file and writes field in it
// return true if everything is ok
const bool GameField::write(const std::string& filename) const
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ofstream outfile( filename.c_str() );
        
        if ( outfile.good() )
        {
            // write game field data
            for ( unsigned int j = 0; j < FIELD_HEIGHT; j++ )
            {
                for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
                {
                    outfile << (char)m_field[i][FIELD_HEIGHT-j-1].getType() << " ";
                }
                outfile << std::endl;
            }        
            
            // close file
            outfile.close();
            
            ok = true;
        }
        else
        {
            std::cout << "GameField::write() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::write() error: string is empty" << std::endl;
    }
    
    return ok;
}

// return true if there is at least one pair of tiles
// that can be swapped so that a tripel tile can be
// eliminated 
const bool GameField::isPlayable(void) const
{
    bool playable = false;
    
    // we go through each column and row and swap single elements
    for ( unsigned int i = 0; i < FIELD_WIDTH-1; i++ )
    {
        for ( unsigned int j = 0; j < FIELD_HEIGHT-1; j++ )
        {
            // set positions for swapping
            FieldPos pos1(i,j);
            FieldPos pos2(i,j+1);
            
            if (isPlayable(pos1,pos2))
            {
                playable = true;
                // leave for-loop
                break;    
            }
            
            // set positions for swapping
            pos1.set(i,j);
            pos2.set(i+1,j);
            
            if ( isPlayable(pos1,pos2) )
            {
                playable = true;
                // leave for-loop
                break;    
            }            
        }
        
        if ( playable )
        {
            // leave for-loop
            break;
        }
    } 
    
    return playable;    
}

// Checks if the game field is playable
// if the tiles on the two given positions are swapped
const bool GameField::isPlayable(const FieldPos& pos1, const FieldPos& pos2) const
{
    bool playable = false;

    // check if two fields are inside array boundaries
    if ( pos1.x() < FIELD_WIDTH && pos1.y() < FIELD_HEIGHT &&
         pos2.x() < FIELD_WIDTH && pos2.y() < FIELD_HEIGHT )
    {
        // check if next to each other
        if ( ( (pos1.x() == pos2.x()) && ((pos1.y() == pos2.y()+1 || pos1.y()+1 == pos2.y())) ) ||
             ( (pos1.y() == pos2.y()) && ((pos1.x() == pos2.x()+1 || pos1.x()+1 == pos2.x())) ) )
        {
            // copy game field
            GameField tempField(*this); 

            // swap tiles
            tempField.getTile(pos1).swap( tempField.getTile(pos2) );

            // std::cout << "GameField::isPlayable() swap "
            //           << pos1.x() << " "
            //           << pos1.y() << " with "
            //           << pos2.x() << " "
            //           << pos2.y() << std::endl;
            
            // TODO: it would be a little bit faster if we only check
            // the swapped columns/rows
            
            // check if there are same tiles to remove
            ScoredTileArray tArray;
            if ( tempField.findSameTiles(tArray) )
            {
                playable = true;
            }
        }
        else
        {
            std::cout << "GameField::isPlayable() error: tiles not next to each other"
                      << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::isPlayable() error: pos out of boundaries"
                  << std::endl;
    }
    
    return playable;
}

// return const reference for tile    
const Tile& GameField::getTile(const FieldPos& pos) const
{
    if ( pos.x() >= FIELD_WIDTH || pos.y() >= FIELD_HEIGHT )
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
    if ( pos.x() >= FIELD_WIDTH || pos.y() >= FIELD_HEIGHT )
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
// return true if playable afterwards
const bool GameField::swapTiles(const FieldPos& pos1, const FieldPos& pos2)
{
    // check if playable afterwards
    bool playable = isPlayable(pos1, pos2);
    
    if (playable)
    {
        // swap tiles
        getTile(pos1).swap( getTile(pos2) );
    }

    return playable;
}

// opens file and writes field in it
// return true if everything is ok
const bool GameField::writeContest(const std::string& filename) const
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ofstream outfile( filename.c_str() );
        
        if ( outfile.good() )
        {
            // write game field data
            for ( unsigned int j = 0; j < FIELD_EXTRA_HEIGHT; j++ )
            {
                for ( unsigned int i = 0; i < FIELD_WIDTH; i++ )
                {
                    outfile << (char)m_field[i][FIELD_EXTRA_HEIGHT-j-1].getType() << " ";
                }
                outfile << std::endl;
            }        
            
            // close file
            outfile.close();
            
            ok = true;
        }
        else
        {
            std::cout << "GameField::writeContest() error: file could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::writeContest() error: string is empty" << std::endl;
    }
    
    return ok;
}


// opens file and reads the first 100 relevant characters
// newline, cr, spaces and tabs will be ignored
// return true if everything is ok
const bool GameField::readContest(const std::string& filename)
{
    bool ok = false;

    if ( !filename.empty() )
    {
        // open file for writing
        std::ifstream infile( filename.c_str() );
        char c = 0;
        unsigned int i = 0;
        unsigned int j = 0;
        
        if ( infile.good() )
        {
            while ( infile.good() && ( j < FIELD_EXTRA_HEIGHT ) )
            {
                if ( i >= FIELD_WIDTH )
                {
                    i = 0;
                    j++;
                }
                
                // read character
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
                        m_field[i][FIELD_EXTRA_HEIGHT-j-1].set((Tile::TileType)c);
                        i++;
                        break;
                    default:
                      // ignore everything else
                      break;
                }
            }
            
            // check if whole field was loaded
            if ( ( 0 != i ) || ( FIELD_EXTRA_HEIGHT != j ) )
            {
                std::cout << "GameField::readContest() error: game field from file "
                          << filename << " was not loaded completely "
                          << i << " " << j << std::endl;
            }
            else
            {
                ok = true;
                std::cout << "GameField::readContest() info: game field "
                          << filename << " loaded completely "
                          << std::endl;
            }

            // close file
            infile.close();
        }
        else
        {
            std::cout << "GameField::readContest() error: file "
                      << filename << " could not be opened" << std::endl;
        }
    }
    else
    {
        std::cout << "GameField::readContest() error: string is empty" << std::endl;
    }

    return ok;
}

// remove lower line in game field    
// return true if there are still tiles that can be dropped down
// in contest
const bool GameField::removeLowerLine(const bool contest)
{
#ifdef DEBUG
    std::cout << "GameField::removeLowerLine("
              << contest
              << ")" << std::endl;
#endif

    bool ok = false;
              
    // create array with lower line
    ScoredTileArray tArray;
    ScoredTile sTile( FieldPos(0, 0), 10,
                      ScoredTile::FIELDDIRECTION_RIGHT,
                      m_field[0][0], 0 );
    tArray.push_back(sTile);
    
    // remove tiles
    removeTiles(tArray);
    
    // let all existing tiles fall to the ground
    ok = fallTilesToGround(contest);

    // and fill with new ones
    fillEmptyTiles();
        
    // clear array again
    tArray.clear();
            
    return ok;
}
