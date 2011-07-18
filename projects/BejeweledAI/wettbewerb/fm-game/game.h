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

#ifndef GAME_H
#define GAME_H

// System
///////////
#include <string>

// Eigene
///////////
#include "player.h"
#include "gamefield.h"

class Game
{
public:    // methods

    // standard constructor
    Game(void);
    
    // destructor
    ~Game(void);
    
    // start game
    // return player who has lost (starting at 1)
    const unsigned int start(const unsigned int startPlayer = 0);

    // start game
    // return player who has lost (starting at 1)
    const unsigned int startContest(const std::string& filename, const unsigned int startPlayer);

    // generate and saves field to disc
    // return true if file was saved
    const bool writeFieldContest(const std::string& filename) const;
   
private:    // methods

    // do-loop for gaming till one player has lost (starting at 1)
    const unsigned int doStart(const bool contest);
    
    // set next player
    void nextPlayer(void);

    // check if one of the players is dead
    const bool isOnePlayerDead(void) const;

    // delete files
    void deleteFiles(void) const;

    // read result (tiles to swap) from external file_set
    // return true if file could be read
    const bool readResult(FieldPos& pos1, FieldPos& pos2) const;

    // write field and player data to disk
    // return true if everything went fine
    const bool writeData(void) const;
    
    // remove same tiles on field and give points to player
    // return false if no new stones can be dropped from above
    const bool cascade(const bool contest);
    
    // check which player has lost
    // return player who has lost (starting at 1)
    // if no player is dead we check which one has more life left
    const unsigned int checkWhosDead(void) const;

    // print both players info
    void printPlayers(void) const;

    // check if gamefield is playable and remove lower lines
    // until the game is playable again
    // return false if no new stones can be dropped from above
    const bool checkIfPlayable(const bool contest);

    // compare players who is better
    // return player number or 0 if players are identical
    const unsigned int comparePlayers(void) const;

private:    // members

    // two players
    Player m_player[2];
    
    // one game field
    GameField m_field;
    
    // current player (0 or 1)
    unsigned int m_currentPlayer;
};

#endif // GAME_H
