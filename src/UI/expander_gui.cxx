// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "expander_gui.h"

void ExpanderGui::cb_expander_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Expander_Bypass);
 return;
}
rkr->Expander_Bypass=(int)o->value();
rgui->findpos(25,(int)o->value(),o);
}
void ExpanderGui::cb_expander_activar(RKR_Light_Button* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_activar_i(o,v);
}

void ExpanderGui::cb_expander_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12025))rkr->efx_Expander->setpreset((int) o->value());
expander_ATime->value(rkr->efx_Expander->getpar(Expander_Attack));
expander_RTime->value(rkr->efx_Expander->getpar(Expander_Release));
expander_shape->value(rkr->efx_Expander->getpar(Expander_Shape));
expander_threshold->value(rkr->efx_Expander->getpar(Expander_Threshold));
expander_HPF->value(rkr->efx_Expander->getpar(Expander_HPF));
expander_LPF->value(rkr->efx_Expander->getpar(Expander_LPF));
expander_level->value(rkr->efx_Expander->getpar(Expander_Gain));
}
void ExpanderGui::cb_expander_preset(RKR_Choice* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_preset_i(o,v);
}

Fl_Menu_Item ExpanderGui::menu_expander_preset[] = {
 {"Noise Gate", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Boost Gate", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Treble swell", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Another", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ExpanderGui::cb_expander_ATime_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_Attack);
 return;
} 
rkr->efx_Expander->changepar(Expander_Attack,(int)o->value());
}
void ExpanderGui::cb_expander_ATime(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_ATime_i(o,v);
}

void ExpanderGui::cb_expander_RTime_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_Release);
 return;
} 
rkr->efx_Expander->changepar(Expander_Release,(int) o->value());
}
void ExpanderGui::cb_expander_RTime(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_RTime_i(o,v);
}

void ExpanderGui::cb_expander_shape_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_Shape);
 return;
} 
rkr->efx_Expander->changepar(Expander_Shape, (int) o->value());
}
void ExpanderGui::cb_expander_shape(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_shape_i(o,v);
}

void ExpanderGui::cb_expander_threshold_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_Threshold);
 return;
} 
rkr->efx_Expander->changepar(Expander_Threshold, (int)o->value());
}
void ExpanderGui::cb_expander_threshold(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_threshold_i(o,v);
}

void ExpanderGui::cb_expander_level_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_Gain);
 return;
} 
rkr->efx_Expander->changepar(Expander_Gain, (int) o->value());
}
void ExpanderGui::cb_expander_level(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_level_i(o,v);
}

void ExpanderGui::cb_expander_LPF_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_LPF);
 return;
} 
rkr->efx_Expander->changepar(Expander_LPF, (int)o->value());
}
void ExpanderGui::cb_expander_LPF(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_LPF_i(o,v);
}

void ExpanderGui::cb_expander_HPF_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Expander_HPF);
 return;
} 
rkr->efx_Expander->changepar(Expander_HPF, (int)o->value());
}
void ExpanderGui::cb_expander_HPF(RKR_Slider* o, void* v) {
  ((ExpanderGui*)(o->parent()))->cb_expander_HPF_i(o,v);
}
ExpanderGui::ExpanderGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ expander_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  expander_activar->box(FL_UP_BOX);
  expander_activar->shortcut(0x32);
  expander_activar->color((Fl_Color)62);
  expander_activar->selection_color((Fl_Color)1);
  expander_activar->labeltype(FL_NORMAL_LABEL);
  expander_activar->labelfont(0);
  expander_activar->labelsize(10);
  expander_activar->labelcolor(FL_FOREGROUND_COLOR);
  expander_activar->callback((Fl_Callback*)cb_expander_activar, (void*)(2));
  expander_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  expander_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* expander_activar
{ expander_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  expander_preset->box(FL_FLAT_BOX);
  expander_preset->down_box(FL_BORDER_BOX);
  expander_preset->color(FL_BACKGROUND_COLOR);
  expander_preset->selection_color(FL_FOREGROUND_COLOR);
  expander_preset->labeltype(FL_NORMAL_LABEL);
  expander_preset->labelfont(0);
  expander_preset->labelsize(10);
  expander_preset->labelcolor(FL_BACKGROUND2_COLOR);
  expander_preset->textsize(10);
  expander_preset->textcolor(FL_BACKGROUND2_COLOR);
  expander_preset->callback((Fl_Callback*)cb_expander_preset, (void*)(12025));
  expander_preset->align(Fl_Align(FL_ALIGN_LEFT));
  expander_preset->when(FL_WHEN_RELEASE_ALWAYS);
  expander_preset->menu(menu_expander_preset);
} // RKR_Choice* expander_preset
{ expander_ATime = new RKR_Slider(56, 39, 100, 10, "A. Time");
  expander_ATime->type(5);
  expander_ATime->box(FL_FLAT_BOX);
  expander_ATime->color((Fl_Color)178);
  expander_ATime->selection_color((Fl_Color)62);
  expander_ATime->labeltype(FL_NORMAL_LABEL);
  expander_ATime->labelfont(0);
  expander_ATime->labelsize(10);
  expander_ATime->labelcolor(FL_BACKGROUND2_COLOR);
  expander_ATime->minimum(1);
  expander_ATime->maximum(5000);
  expander_ATime->step(1);
  expander_ATime->value(10);
  expander_ATime->textcolor(FL_BACKGROUND2_COLOR);
  expander_ATime->callback((Fl_Callback*)cb_expander_ATime);
  expander_ATime->align(Fl_Align(FL_ALIGN_LEFT));
  expander_ATime->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_ATime
{ expander_RTime = new RKR_Slider(56, 61, 100, 10, "R. Time");
  expander_RTime->type(5);
  expander_RTime->box(FL_FLAT_BOX);
  expander_RTime->color((Fl_Color)178);
  expander_RTime->selection_color((Fl_Color)62);
  expander_RTime->labeltype(FL_NORMAL_LABEL);
  expander_RTime->labelfont(0);
  expander_RTime->labelsize(10);
  expander_RTime->labelcolor(FL_BACKGROUND2_COLOR);
  expander_RTime->minimum(10);
  expander_RTime->maximum(1000);
  expander_RTime->step(1);
  expander_RTime->value(500);
  expander_RTime->textcolor(FL_BACKGROUND2_COLOR);
  expander_RTime->callback((Fl_Callback*)cb_expander_RTime);
  expander_RTime->align(Fl_Align(FL_ALIGN_LEFT));
  expander_RTime->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_RTime
{ expander_shape = new RKR_Slider(56, 83, 100, 10, "Shape");
  expander_shape->type(5);
  expander_shape->box(FL_FLAT_BOX);
  expander_shape->color((Fl_Color)178);
  expander_shape->selection_color((Fl_Color)62);
  expander_shape->labeltype(FL_NORMAL_LABEL);
  expander_shape->labelfont(0);
  expander_shape->labelsize(10);
  expander_shape->labelcolor(FL_BACKGROUND2_COLOR);
  expander_shape->minimum(1);
  expander_shape->maximum(50);
  expander_shape->step(1);
  expander_shape->value(1);
  expander_shape->textcolor(FL_BACKGROUND2_COLOR);
  expander_shape->callback((Fl_Callback*)cb_expander_shape);
  expander_shape->align(Fl_Align(FL_ALIGN_LEFT));
  expander_shape->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_shape
{ expander_threshold = new RKR_Slider(56, 105, 100, 10, "Threshold");
  expander_threshold->type(5);
  expander_threshold->box(FL_FLAT_BOX);
  expander_threshold->color((Fl_Color)178);
  expander_threshold->selection_color((Fl_Color)62);
  expander_threshold->labeltype(FL_NORMAL_LABEL);
  expander_threshold->labelfont(0);
  expander_threshold->labelsize(10);
  expander_threshold->labelcolor(FL_BACKGROUND2_COLOR);
  expander_threshold->minimum(-80);
  expander_threshold->maximum(0);
  expander_threshold->step(1);
  expander_threshold->textcolor(FL_BACKGROUND2_COLOR);
  expander_threshold->callback((Fl_Callback*)cb_expander_threshold);
  expander_threshold->align(Fl_Align(FL_ALIGN_LEFT));
  expander_threshold->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_threshold
{ expander_level = new RKR_Slider(56, 125, 100, 10, "Out Gain");
  expander_level->type(5);
  expander_level->box(FL_FLAT_BOX);
  expander_level->color((Fl_Color)178);
  expander_level->selection_color((Fl_Color)62);
  expander_level->labeltype(FL_NORMAL_LABEL);
  expander_level->labelfont(0);
  expander_level->labelsize(10);
  expander_level->labelcolor(FL_BACKGROUND2_COLOR);
  expander_level->minimum(1);
  expander_level->maximum(127);
  expander_level->step(1);
  expander_level->value(1);
  expander_level->textcolor(FL_BACKGROUND2_COLOR);
  expander_level->callback((Fl_Callback*)cb_expander_level);
  expander_level->align(Fl_Align(FL_ALIGN_LEFT));
  expander_level->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_level
{ expander_LPF = new RKR_Slider(56, 146, 100, 10, "LPF");
  expander_LPF->type(5);
  expander_LPF->box(FL_FLAT_BOX);
  expander_LPF->color((Fl_Color)178);
  expander_LPF->selection_color((Fl_Color)62);
  expander_LPF->labeltype(FL_NORMAL_LABEL);
  expander_LPF->labelfont(0);
  expander_LPF->labelsize(10);
  expander_LPF->labelcolor(FL_BACKGROUND2_COLOR);
  expander_LPF->minimum(20);
  expander_LPF->maximum(26000);
  expander_LPF->step(1);
  expander_LPF->value(20000);
  expander_LPF->textcolor(FL_BACKGROUND2_COLOR);
  expander_LPF->callback((Fl_Callback*)cb_expander_LPF);
  expander_LPF->align(Fl_Align(FL_ALIGN_LEFT));
  expander_LPF->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_LPF
{ expander_HPF = new RKR_Slider(56, 162, 100, 10, "HPF");
  expander_HPF->type(5);
  expander_HPF->box(FL_FLAT_BOX);
  expander_HPF->color((Fl_Color)178);
  expander_HPF->selection_color((Fl_Color)62);
  expander_HPF->labeltype(FL_NORMAL_LABEL);
  expander_HPF->labelfont(0);
  expander_HPF->labelsize(10);
  expander_HPF->labelcolor(FL_BACKGROUND2_COLOR);
  expander_HPF->minimum(20);
  expander_HPF->maximum(20000);
  expander_HPF->step(1);
  expander_HPF->value(20);
  expander_HPF->textcolor(FL_BACKGROUND2_COLOR);
  expander_HPF->callback((Fl_Callback*)cb_expander_HPF);
  expander_HPF->align(Fl_Align(FL_ALIGN_LEFT));
  expander_HPF->when(FL_WHEN_CHANGED);
} // RKR_Slider* expander_HPF
position(X, Y);
end();
}
