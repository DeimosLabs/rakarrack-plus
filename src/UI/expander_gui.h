// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef expander_gui_h
#define expander_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class ExpanderGui : public Fl_Group {
public:
  ExpanderGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *expander_activar;
private:
  inline void cb_expander_activar_i(Fl_Light_Button*, void*);
  static void cb_expander_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *expander_preset;
private:
  inline void cb_expander_preset_i(Fl_Choice*, void*);
  static void cb_expander_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_expander_preset[];
public:
  SliderW *expander_ATime;
private:
  inline void cb_expander_ATime_i(SliderW*, void*);
  static void cb_expander_ATime(SliderW*, void*);
public:
  SliderW *expander_RTime;
private:
  inline void cb_expander_RTime_i(SliderW*, void*);
  static void cb_expander_RTime(SliderW*, void*);
public:
  SliderW *expander_shape;
private:
  inline void cb_expander_shape_i(SliderW*, void*);
  static void cb_expander_shape(SliderW*, void*);
public:
  SliderW *expander_threshold;
private:
  inline void cb_expander_threshold_i(SliderW*, void*);
  static void cb_expander_threshold(SliderW*, void*);
public:
  SliderW *expander_level;
private:
  inline void cb_expander_level_i(SliderW*, void*);
  static void cb_expander_level(SliderW*, void*);
public:
  SliderW *expander_LPF;
private:
  inline void cb_expander_LPF_i(SliderW*, void*);
  static void cb_expander_LPF(SliderW*, void*);
public:
  SliderW *expander_HPF;
private:
  inline void cb_expander_HPF_i(SliderW*, void*);
  static void cb_expander_HPF(SliderW*, void*);
};
#endif
