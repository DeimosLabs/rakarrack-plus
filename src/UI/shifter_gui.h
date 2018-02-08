// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef shifter_gui_h
#define shifter_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>

class ShifterGui : public Fl_Group {
public:
  ShifterGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *shifter_activar;
private:
  inline void cb_shifter_activar_i(Fl_Light_Button*, void*);
  static void cb_shifter_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *shifter_preset;
private:
  inline void cb_shifter_preset_i(Fl_Choice*, void*);
  static void cb_shifter_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_shifter_preset[];
public:
  SliderW *shifter_WD;
private:
  inline void cb_shifter_WD_i(SliderW*, void*);
  static void cb_shifter_WD(SliderW*, void*);
public:
  SliderW *shifter_int;
private:
  inline void cb_shifter_int_i(SliderW*, void*);
  static void cb_shifter_int(SliderW*, void*);
public:
  SliderW *shifter_gain;
private:
  inline void cb_shifter_gain_i(SliderW*, void*);
  static void cb_shifter_gain(SliderW*, void*);
public:
  SliderW *shifter_pan;
private:
  inline void cb_shifter_pan_i(SliderW*, void*);
  static void cb_shifter_pan(SliderW*, void*);
public:
  SliderW *shifter_attack;
private:
  inline void cb_shifter_attack_i(SliderW*, void*);
  static void cb_shifter_attack(SliderW*, void*);
public:
  SliderW *shifter_decay;
private:
  inline void cb_shifter_decay_i(SliderW*, void*);
  static void cb_shifter_decay(SliderW*, void*);
public:
  SliderW *shifter_thre;
private:
  inline void cb_shifter_thre_i(SliderW*, void*);
  static void cb_shifter_thre(SliderW*, void*);
public:
  Fl_Check_Button *shifter_ud;
private:
  inline void cb_shifter_ud_i(Fl_Check_Button*, void*);
  static void cb_shifter_ud(Fl_Check_Button*, void*);
public:
  SliderW *shifter_whammy;
private:
  inline void cb_shifter_whammy_i(SliderW*, void*);
  static void cb_shifter_whammy(SliderW*, void*);
public:
  Fl_Choice *shifter_mode;
private:
  inline void cb_shifter_mode_i(Fl_Choice*, void*);
  static void cb_shifter_mode(Fl_Choice*, void*);
  static Fl_Menu_Item menu_shifter_mode[];
};
#endif
