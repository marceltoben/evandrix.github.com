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

#ifndef FIELDPOS_H
#define FIELDPOS_H

class FieldPos 
{
public:     // methods
 
    // standard constructor
    FieldPos(void);

    // constructor
    FieldPos(const unsigned int x, const unsigned int y);

    // Copy constructor
    FieldPos(const FieldPos& pos);
    
    // destructor
    ~FieldPos(void);
    
    // set position
    void set(const unsigned int x, const unsigned int y);
    
    // return position x
    const unsigned int x(void) const;

    // return position y
    const unsigned int y(void) const;
    
private:    // members

    // positions
    unsigned int m_x;
    unsigned int m_y;
};

#endif // FIELDPOS_H
