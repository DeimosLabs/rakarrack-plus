// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef pan_gui_h
#define pan_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>

class PanGui : public Fl_Group {
public:
  PanGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *pan_activar;
private:
  inline void cb_pan_activar_i(Fl_Light_Button*, void*);
  static void cb_pan_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *pan_preset;
private:
  inline void cb_pan_preset_i(Fl_Choice*, void*);
  static void cb_pan_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_pan_preset[];
public:
  SliderW *pan_WD;
private:
  inline void cb_pan_WD_i(SliderW*, void*);
  static void cb_pan_WD(SliderW*, void*);
public:
  SliderW *pan_pan;
private:
  inline void cb_pan_pan_i(SliderW*, void*);
  static void cb_pan_pan(SliderW*, void*);
public:
  Fl_Check_Button *pan_autopan;
private:
  inline void cb_pan_autopan_i(Fl_Check_Button*, void*);
  static void cb_pan_autopan(Fl_Check_Button*, void*);
public:
  SliderW *pan_freq;
private:
  inline void cb_pan_freq_i(SliderW*, void*);
  static void cb_pan_freq(SliderW*, void*);
public:
  SliderW *pan_rnd;
private:
  inline void cb_pan_rnd_i(SliderW*, void*);
  static void cb_pan_rnd(SliderW*, void*);
public:
  Fl_Choice *pan_lfotype;
private:
  inline void cb_pan_lfotype_i(Fl_Choice*, void*);
  static void cb_pan_lfotype(Fl_Choice*, void*);
public:
  SliderW *pan_stdf;
private:
  inline void cb_pan_stdf_i(SliderW*, void*);
  static void cb_pan_stdf(SliderW*, void*);
public:
  Fl_Check_Button *pan_extraon;
private:
  inline void cb_pan_extraon_i(Fl_Check_Button*, void*);
  static void cb_pan_extraon(Fl_Check_Button*, void*);
public:
  SliderW *pan_extra;
private:
  inline void cb_pan_extra_i(SliderW*, void*);
  static void cb_pan_extra(SliderW*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
