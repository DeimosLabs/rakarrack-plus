/*
  RKR_Entry_Input.h

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

/* 
 * File:   RKR_Entry_Input.h
 * Author: sspresto
 *
 * Created on April 9, 2020, 12:33 PM
 */

#ifndef RKR_ENTRY_INPUT_H
#define RKR_ENTRY_INPUT_H

#include <FL/Fl_Input.H>


class RKR_Entry_Input  : public Fl_Input
{
public:
    RKR_Entry_Input(int X, int Y, int W, int H, const char *label=0);
    void draw();
    void resize(int,int,int,int);
    void set_font_adjustment(){m_need_font_update = true;}
    int m_start_height;
    int m_start_font_offset;
private:
    
    bool m_need_font_update;
    void font_resize(int,int,int,int);
};

#endif /* RKR_ENTRY_INPUT_H */

