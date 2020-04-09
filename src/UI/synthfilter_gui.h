// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef synthfilter_gui_h
#define synthfilter_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Value_Input.h"
#include "RKR_Check_Button.h"
#include "RKR_Counter.h"
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Choice.H>

class SynthfilterGui : public Fl_Group {
public:
  SynthfilterGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *synthfilter_activar;
private:
  inline void cb_synthfilter_activar_i(RKR_Light_Button*, void*);
  static void cb_synthfilter_activar(RKR_Light_Button*, void*);
public:
  Fl_Choice *synthfilter_preset;
private:
  inline void cb_synthfilter_preset_i(Fl_Choice*, void*);
  static void cb_synthfilter_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_synthfilter_preset[];
public:
  SliderW *synthfilter_WD;
private:
  inline void cb_synthfilter_WD_i(SliderW*, void*);
  static void cb_synthfilter_WD(SliderW*, void*);
public:
  SliderW *synthfilter_Distort;
private:
  inline void cb_synthfilter_Distort_i(SliderW*, void*);
  static void cb_synthfilter_Distort(SliderW*, void*);
public:
  SliderW *synthfilter_freq;
private:
  inline void cb_synthfilter_freq_i(SliderW*, void*);
  static void cb_synthfilter_freq(SliderW*, void*);
public:
  RKR_Value_Input *synthfilter_rand;
private:
  inline void cb_synthfilter_rand_i(RKR_Value_Input*, void*);
  static void cb_synthfilter_rand(RKR_Value_Input*, void*);
public:
  Fl_Choice *synthfilter_lfotype;
private:
  inline void cb_synthfilter_lfotype_i(Fl_Choice*, void*);
  static void cb_synthfilter_lfotype(Fl_Choice*, void*);
public:
  RKR_Check_Button *synthfilter_subs;
private:
  inline void cb_synthfilter_subs_i(RKR_Check_Button*, void*);
  static void cb_synthfilter_subs(RKR_Check_Button*, void*);
public:
  SliderW *synthfilter_stdf;
private:
  inline void cb_synthfilter_stdf_i(SliderW*, void*);
  static void cb_synthfilter_stdf(SliderW*, void*);
public:
  SliderW *synthfilter_width;
private:
  inline void cb_synthfilter_width_i(SliderW*, void*);
  static void cb_synthfilter_width(SliderW*, void*);
public:
  SliderW *synthfilter_fb;
private:
  inline void cb_synthfilter_fb_i(SliderW*, void*);
  static void cb_synthfilter_fb(SliderW*, void*);
public:
  RKR_Counter *synthfilter_Lstages;
private:
  inline void cb_synthfilter_Lstages_i(RKR_Counter*, void*);
  static void cb_synthfilter_Lstages(RKR_Counter*, void*);
public:
  RKR_Counter *synthfilter_Hstages;
private:
  inline void cb_synthfilter_Hstages_i(RKR_Counter*, void*);
  static void cb_synthfilter_Hstages(RKR_Counter*, void*);
public:
  SliderW *synthfilter_dpth;
private:
  inline void cb_synthfilter_dpth_i(SliderW*, void*);
  static void cb_synthfilter_dpth(SliderW*, void*);
public:
  SliderW *synthfilter_EnvSens;
private:
  inline void cb_synthfilter_EnvSens_i(SliderW*, void*);
  static void cb_synthfilter_EnvSens(SliderW*, void*);
public:
  SliderW *synthfilter_ATime;
private:
  inline void cb_synthfilter_ATime_i(SliderW*, void*);
  static void cb_synthfilter_ATime(SliderW*, void*);
public:
  SliderW *synthfilter_RTime;
private:
  inline void cb_synthfilter_RTime_i(SliderW*, void*);
  static void cb_synthfilter_RTime(SliderW*, void*);
public:
  SliderW *synthfilter_Offset;
private:
  inline void cb_synthfilter_Offset_i(SliderW*, void*);
  static void cb_synthfilter_Offset(SliderW*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
