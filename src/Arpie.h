/*
  Arpie.h - Echo Effect w/ arpeggiated delay
  Copyright (C) 2002-2005 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  Modified for rakarrack by Josep Andreu

  Arpeggiated Echo by Ryan Billing (a.k.a. Transmogrifox)

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

#ifndef ARPIE_H
#define ARPIE_H

#include "Effect.h"
#include "global.h"

#define ARPIELV2_URI "https://github.com/Stazed/rakarrack-plus#Arpie"

const int C_ARPIE_PARAMETERS = 11;

enum Arpie_Index
{
    Arpie_DryWet = 0,
    Arpie_Pan,
    Arpie_Tempo,
    Arpie_LR_Delay,
    Arpie_LR_Cross,
    Arpie_Feedback,
    Arpie_Damp,
    Arpie_ArpeWD,
    Arpie_Harm,
    Arpie_Pattern,
    Arpie_Subdivision
};

class Arpie : public Effect
{
public:
    Arpie (double sample_rate, uint32_t intermediate_bufsize);
    ~Arpie ();
    void out (float * efxoutl, float * efxoutr);
    void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    int get_number_efx_parameters () {return C_ARPIE_PARAMETERS;};
    
#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    virtual void LV2_parameters(std::string &s_buf);
    virtual std::string get_URI() { return ARPIELV2_URI; };
    
private:
    
    float fSAMPLE_RATE;
    uint32_t PERIOD;
    
    //Parametrii
    int Pvolume;	//Volumul or E/R
    int Ppanning;	//Panning
    int Pdelay;
    int Plrdelay;	// L/R delay difference
    int Plrcross;	// L/R Mixing
    int Pfb;		//Feed-back-ul
    int Phidamp;
    int Preverse;
    int Ppattern;
    int Pharms;
    int Psubdiv;


    void setvolume (int _Pvolume);
    void setpanning (int _Ppanning);
    void setdelay (int _Pdelay);
    void setlrdelay (int _Plrdelay);
    void setlrcross (int _Plrcross);
    void setfb (int _Pfb);
    void sethidamp (int _Phidamp);
    void setreverse (int _Preverse);
    void setpattern (int _Ppattern);


    //Parametrii reali
    void initdelays ();

    int dl, dr, delay, lrdelay;
    int kl, kr, rvkl, rvkr, rvfl, rvfr, maxx_delay, fade, harmonic, envcnt, invattack;
    int subdiv;
    int *pattern;

    float panning, lrcross, fb, hidamp, reverse;
    float *ldelay, *rdelay;
    float oldl, oldr;		//pt. lpf
    float  Srate_Attack_Coeff, envattack, envswell;

};


#endif
