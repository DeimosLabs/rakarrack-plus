/*
  RKR_Counter.h

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
 * File:   RKR_Counter.h
 * Author: sspresto
 *
 * Created on April 9, 2020, 4:17 PM
 */

#ifndef RKR_COUNTER_H
#define RKR_COUNTER_H

#include <FL/Fl.H>
#include <FL/Fl_Counter.H>
#include <FL/fl_draw.H>

class RKR_Counter : public Fl_Counter
{
public:
    RKR_Counter(int X, int Y, int W, int H, const char *label=0);
    void draw();
    void resize(int,int,int,int);
    int m_start_label_offset;
    int m_start_text_offset;
private:

    int m_start_height;
    int m_start_width;
    int m_previous_font_size;
    void font_resize(int,int);
};

#endif /* RKR_COUNTER_H */

