// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "valve_gui.h"

void ValveGui::cb_valve_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Valve_Bypass);
 return;
}
rkr->Valve_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Valve->cleanup();
rgui->findpos(19,(int)o->value(),o);
}
void ValveGui::cb_valve_activar(Fl_Light_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_activar_i(o,v);
}

void ValveGui::cb_valve_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12019))rkr->efx_Valve->setpreset((int)o->value());
valve_WD->value(Dry_Wet(rkr->efx_Valve->getpar(0)));
valve_LRc->value(rkr->efx_Valve->getpar(2)-64);
valve_drive->value(rkr->efx_Valve->getpar(3));
valve_level->value(rkr->efx_Valve->getpar(4));
valve_neg->value(rkr->efx_Valve->getpar(5));
valve_st->value(rkr->efx_Valve->getpar(8));
valve_pan->value(rkr->efx_Valve->getpar(1)-64);
valve_pf->value(rkr->efx_Valve->getpar(9));
valve_lpf->value(rkr->efx_Valve->getpar(6));
valve_hpf->value(rkr->efx_Valve->getpar(7));
valve_Q->value(rkr->efx_Valve->getpar(10));
valve_ed->value(rkr->efx_Valve->getpar(11));
valve_Pre->value(rkr->efx_Valve->getpar(12));
}
void ValveGui::cb_valve_preset(Fl_Choice* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_preset_i(o,v);
}

Fl_Menu_Item ValveGui::menu_valve_preset[] = {
 {"Valve 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Valve 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Valve 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ValveGui::cb_valve_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(169);
 return;
} 
rkr->efx_Valve->changepar(0,Dry_Wet((int)(o->value())));
}
void ValveGui::cb_valve_WD(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_WD_i(o,v);
}

void ValveGui::cb_valve_LRc_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(170);
 return;
} 
rkr->efx_Valve->changepar(2,(int)(o->value()+64));
}
void ValveGui::cb_valve_LRc(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_LRc_i(o,v);
}

void ValveGui::cb_valve_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(171);
 return;
} 
rkr->efx_Valve->changepar(1,(int)(o->value()+64));
}
void ValveGui::cb_valve_pan(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_pan_i(o,v);
}

void ValveGui::cb_valve_level_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(172);
 return;
} 
rkr->efx_Valve->changepar(4,(int)o->value());
}
void ValveGui::cb_valve_level(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_level_i(o,v);
}

void ValveGui::cb_valve_drive_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(173);
 return;
} 
rkr->efx_Valve->changepar(3,(int)o->value());
}
void ValveGui::cb_valve_drive(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_drive_i(o,v);
}

void ValveGui::cb_valve_ed_i(Fl_Check_Button* o, void*) {
  rkr->efx_Valve->changepar(11,(int)o->value());
}
void ValveGui::cb_valve_ed(Fl_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_ed_i(o,v);
}

void ValveGui::cb_valve_Q_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(174);
 return;
} 
rkr->efx_Valve->changepar(10,(int)o->value());
}
void ValveGui::cb_valve_Q(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_Q_i(o,v);
}

void ValveGui::cb_valve_Pre_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(175);
 return;
} 
rkr->efx_Valve->changepar(12,(int)o->value());
}
void ValveGui::cb_valve_Pre(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_Pre_i(o,v);
}

void ValveGui::cb_valve_pf_i(Fl_Check_Button* o, void*) {
  rkr->efx_Valve->changepar(9,(int)o->value());
}
void ValveGui::cb_valve_pf(Fl_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_pf_i(o,v);
}

void ValveGui::cb_valve_st_i(Fl_Check_Button* o, void*) {
  rkr->efx_Valve->changepar(8,(int)o->value());
}
void ValveGui::cb_valve_st(Fl_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_st_i(o,v);
}

void ValveGui::cb_valve_neg_i(Fl_Check_Button* o, void*) {
  rkr->efx_Valve->changepar(5,(int)o->value());
}
void ValveGui::cb_valve_neg(Fl_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_neg_i(o,v);
}

void ValveGui::cb_valve_lpf_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(176);
 return;
} 
rkr->efx_Valve->changepar(6,(int)o->value());
}
void ValveGui::cb_valve_lpf(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_lpf_i(o,v);
}

void ValveGui::cb_valve_hpf_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(177);
 return;
} 
rkr->efx_Valve->changepar(7,(int)o->value());
}
void ValveGui::cb_valve_hpf(SliderW* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_hpf_i(o,v);
}
ValveGui::ValveGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ valve_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  valve_activar->shortcut(0x33);
  valve_activar->color((Fl_Color)62);
  valve_activar->selection_color((Fl_Color)1);
  valve_activar->labelsize(10);
  valve_activar->callback((Fl_Callback*)cb_valve_activar, (void*)(2));
  valve_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  valve_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* valve_activar
{ valve_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  valve_preset->down_box(FL_BORDER_BOX);
  valve_preset->selection_color(FL_FOREGROUND_COLOR);
  valve_preset->labelsize(10);
  valve_preset->labelcolor(FL_BACKGROUND2_COLOR);
  valve_preset->textsize(10);
  valve_preset->textcolor(FL_BACKGROUND2_COLOR);
  valve_preset->callback((Fl_Callback*)cb_valve_preset, (void*)(12019));
  valve_preset->when(FL_WHEN_RELEASE_ALWAYS);
  valve_preset->menu(menu_valve_preset);
} // Fl_Choice* valve_preset
{ valve_WD = new SliderW(53, 31, 100, 10, "Dry/Wet");
  valve_WD->type(5);
  valve_WD->box(FL_FLAT_BOX);
  valve_WD->color((Fl_Color)178);
  valve_WD->selection_color((Fl_Color)62);
  valve_WD->labeltype(FL_NORMAL_LABEL);
  valve_WD->labelfont(0);
  valve_WD->labelsize(10);
  valve_WD->labelcolor(FL_BACKGROUND2_COLOR);
  valve_WD->maximum(127);
  valve_WD->step(1);
  valve_WD->textcolor(FL_BACKGROUND2_COLOR);
  valve_WD->callback((Fl_Callback*)cb_valve_WD);
  valve_WD->align(Fl_Align(FL_ALIGN_LEFT));
  valve_WD->when(FL_WHEN_CHANGED);
} // SliderW* valve_WD
{ valve_LRc = new SliderW(53, 44, 100, 10, "L/R.Cr");
  valve_LRc->type(5);
  valve_LRc->box(FL_FLAT_BOX);
  valve_LRc->color((Fl_Color)178);
  valve_LRc->selection_color((Fl_Color)62);
  valve_LRc->labeltype(FL_NORMAL_LABEL);
  valve_LRc->labelfont(0);
  valve_LRc->labelsize(10);
  valve_LRc->labelcolor(FL_BACKGROUND2_COLOR);
  valve_LRc->minimum(-64);
  valve_LRc->maximum(63);
  valve_LRc->step(1);
  valve_LRc->textcolor(FL_BACKGROUND2_COLOR);
  valve_LRc->callback((Fl_Callback*)cb_valve_LRc);
  valve_LRc->align(Fl_Align(FL_ALIGN_LEFT));
  valve_LRc->when(FL_WHEN_CHANGED);
} // SliderW* valve_LRc
{ valve_pan = new SliderW(53, 57, 100, 10, "Pan");
  valve_pan->type(5);
  valve_pan->box(FL_FLAT_BOX);
  valve_pan->color((Fl_Color)178);
  valve_pan->selection_color((Fl_Color)62);
  valve_pan->labeltype(FL_NORMAL_LABEL);
  valve_pan->labelfont(0);
  valve_pan->labelsize(10);
  valve_pan->labelcolor(FL_BACKGROUND2_COLOR);
  valve_pan->minimum(-64);
  valve_pan->maximum(63);
  valve_pan->step(1);
  valve_pan->textcolor(FL_BACKGROUND2_COLOR);
  valve_pan->callback((Fl_Callback*)cb_valve_pan);
  valve_pan->align(Fl_Align(FL_ALIGN_LEFT));
  valve_pan->when(FL_WHEN_CHANGED);
} // SliderW* valve_pan
{ valve_level = new SliderW(53, 71, 100, 10, "Level");
  valve_level->type(5);
  valve_level->box(FL_FLAT_BOX);
  valve_level->color((Fl_Color)178);
  valve_level->selection_color((Fl_Color)62);
  valve_level->labeltype(FL_NORMAL_LABEL);
  valve_level->labelfont(0);
  valve_level->labelsize(10);
  valve_level->labelcolor(FL_BACKGROUND2_COLOR);
  valve_level->maximum(127);
  valve_level->step(1);
  valve_level->textcolor(FL_BACKGROUND2_COLOR);
  valve_level->callback((Fl_Callback*)cb_valve_level);
  valve_level->align(Fl_Align(FL_ALIGN_LEFT));
  valve_level->when(FL_WHEN_CHANGED);
} // SliderW* valve_level
{ valve_drive = new SliderW(53, 84, 100, 10, "Drive");
  valve_drive->type(5);
  valve_drive->box(FL_FLAT_BOX);
  valve_drive->color((Fl_Color)178);
  valve_drive->selection_color((Fl_Color)62);
  valve_drive->labeltype(FL_NORMAL_LABEL);
  valve_drive->labelfont(0);
  valve_drive->labelsize(10);
  valve_drive->labelcolor(FL_BACKGROUND2_COLOR);
  valve_drive->maximum(127);
  valve_drive->step(1);
  valve_drive->textcolor(FL_BACKGROUND2_COLOR);
  valve_drive->callback((Fl_Callback*)cb_valve_drive);
  valve_drive->align(Fl_Align(FL_ALIGN_LEFT));
  valve_drive->when(FL_WHEN_CHANGED);
} // SliderW* valve_drive
{ valve_ed = new Fl_Check_Button(15, 96, 72, 15, "Extra Dist.");
  valve_ed->down_box(FL_BORDER_BOX);
  valve_ed->labelsize(10);
  valve_ed->labelcolor(FL_BACKGROUND2_COLOR);
  valve_ed->callback((Fl_Callback*)cb_valve_ed, (void*)(2));
} // Fl_Check_Button* valve_ed
{ valve_Q = new SliderW(53, 112, 100, 10, "Dist.");
  valve_Q->type(5);
  valve_Q->box(FL_FLAT_BOX);
  valve_Q->color((Fl_Color)178);
  valve_Q->selection_color((Fl_Color)62);
  valve_Q->labeltype(FL_NORMAL_LABEL);
  valve_Q->labelfont(0);
  valve_Q->labelsize(10);
  valve_Q->labelcolor(FL_BACKGROUND2_COLOR);
  valve_Q->maximum(127);
  valve_Q->step(1);
  valve_Q->textcolor(FL_BACKGROUND2_COLOR);
  valve_Q->callback((Fl_Callback*)cb_valve_Q);
  valve_Q->align(Fl_Align(FL_ALIGN_LEFT));
  valve_Q->when(FL_WHEN_CHANGED);
} // SliderW* valve_Q
{ valve_Pre = new SliderW(53, 127, 100, 10, "Presence");
  valve_Pre->type(5);
  valve_Pre->box(FL_FLAT_BOX);
  valve_Pre->color((Fl_Color)178);
  valve_Pre->selection_color((Fl_Color)62);
  valve_Pre->labeltype(FL_NORMAL_LABEL);
  valve_Pre->labelfont(0);
  valve_Pre->labelsize(10);
  valve_Pre->labelcolor(FL_BACKGROUND2_COLOR);
  valve_Pre->maximum(100);
  valve_Pre->step(1);
  valve_Pre->textcolor(FL_BACKGROUND2_COLOR);
  valve_Pre->callback((Fl_Callback*)cb_valve_Pre);
  valve_Pre->align(Fl_Align(FL_ALIGN_LEFT));
  valve_Pre->when(FL_WHEN_CHANGED);
} // SliderW* valve_Pre
{ valve_pf = new Fl_Check_Button(5, 139, 62, 15, "Pre Filter");
  valve_pf->down_box(FL_BORDER_BOX);
  valve_pf->labelsize(10);
  valve_pf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_pf->callback((Fl_Callback*)cb_valve_pf, (void*)(2));
} // Fl_Check_Button* valve_pf
{ valve_st = new Fl_Check_Button(65, 139, 50, 15, "Stereo");
  valve_st->down_box(FL_BORDER_BOX);
  valve_st->labelsize(10);
  valve_st->labelcolor(FL_BACKGROUND2_COLOR);
  valve_st->callback((Fl_Callback*)cb_valve_st, (void*)(2));
} // Fl_Check_Button* valve_st
{ valve_neg = new Fl_Check_Button(114, 139, 40, 15, "Neg.");
  valve_neg->down_box(FL_BORDER_BOX);
  valve_neg->labelsize(10);
  valve_neg->labelcolor(FL_BACKGROUND2_COLOR);
  valve_neg->callback((Fl_Callback*)cb_valve_neg, (void*)(2));
} // Fl_Check_Button* valve_neg
{ valve_lpf = new SliderW(53, 156, 100, 10, "LPF");
  valve_lpf->type(5);
  valve_lpf->box(FL_FLAT_BOX);
  valve_lpf->color((Fl_Color)178);
  valve_lpf->selection_color((Fl_Color)62);
  valve_lpf->labeltype(FL_NORMAL_LABEL);
  valve_lpf->labelfont(0);
  valve_lpf->labelsize(10);
  valve_lpf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_lpf->minimum(20);
  valve_lpf->maximum(26000);
  valve_lpf->step(1);
  valve_lpf->value(20000);
  valve_lpf->textcolor(FL_BACKGROUND2_COLOR);
  valve_lpf->callback((Fl_Callback*)cb_valve_lpf);
  valve_lpf->align(Fl_Align(FL_ALIGN_LEFT));
  valve_lpf->when(FL_WHEN_CHANGED);
} // SliderW* valve_lpf
{ valve_hpf = new SliderW(53, 169, 100, 10, "HPF");
  valve_hpf->type(5);
  valve_hpf->box(FL_FLAT_BOX);
  valve_hpf->color((Fl_Color)178);
  valve_hpf->selection_color((Fl_Color)62);
  valve_hpf->labeltype(FL_NORMAL_LABEL);
  valve_hpf->labelfont(0);
  valve_hpf->labelsize(10);
  valve_hpf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_hpf->minimum(20);
  valve_hpf->maximum(20000);
  valve_hpf->step(1);
  valve_hpf->value(20);
  valve_hpf->textcolor(FL_BACKGROUND2_COLOR);
  valve_hpf->callback((Fl_Callback*)cb_valve_hpf);
  valve_hpf->align(Fl_Align(FL_ALIGN_LEFT));
  valve_hpf->when(FL_WHEN_CHANGED);
} // SliderW* valve_hpf
position(X, Y);
end();
}
