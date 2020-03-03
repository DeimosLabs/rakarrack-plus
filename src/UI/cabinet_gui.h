// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef cabinet_gui_h
#define cabinet_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class CabinetGui : public Fl_Group {
public:
  CabinetGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *Cabinet_activar;
private:
  inline void cb_Cabinet_activar_i(Fl_Light_Button*, void*);
  static void cb_Cabinet_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *Cabinet_preset;
private:
  inline void cb_Cabinet_preset_i(Fl_Choice*, void*);
  static void cb_Cabinet_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Cabinet_preset[];
public:
  SliderW *Cabinet_output;
private:
  inline void cb_Cabinet_output_i(SliderW*, void*);
  static void cb_Cabinet_output(SliderW*, void*);
};
#endif
