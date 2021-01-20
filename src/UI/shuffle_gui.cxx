// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "shuffle_gui.h"

void ShuffleGui::cb_shuffle_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->Shuffle_Bypass);
 return;
}
rkr->Shuffle_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Shuffle->cleanup();
rgui->findpos(26,(int)o->value(),o);
}
void ShuffleGui::cb_shuffle_activar(RKR_Light_Button* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_activar_i(o,v);
}

void ShuffleGui::cb_shuffle_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12026))rkr->efx_Shuffle->setpreset((int)o->value());
shuffle_volL->value(rkr->efx_Shuffle->getpar(Shuffle_Gain_L));
shuffle_volML->value(rkr->efx_Shuffle->getpar(Shuffle_Gain_ML));
shuffle_volMH->value(rkr->efx_Shuffle->getpar(Shuffle_Gain_MH));
shuffle_volH->value(rkr->efx_Shuffle->getpar(Shuffle_Gain_H));
shuffle_cross1->value(rkr->efx_Shuffle->getpar(Shuffle_Freq_L));
shuffle_cross2->value(rkr->efx_Shuffle->getpar(Shuffle_Freq_ML));
shuffle_cross3->value(rkr->efx_Shuffle->getpar(Shuffle_Freq_MH));
shuffle_cross4->value(rkr->efx_Shuffle->getpar(Shuffle_Freq_H));
shuffle_Q->value(rkr->efx_Shuffle->getpar(Shuffle_Width));
shuffle_WD->value(Dry_Wet(rkr->efx_Shuffle->getpar(Shuffle_DryWet)));
shuffle_E->value(rkr->efx_Shuffle->getpar(Shuffle_F_Band));
}
void ShuffleGui::cb_shuffle_preset(RKR_Choice* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_preset_i(o,v);
}

Fl_Menu_Item ShuffleGui::menu_shuffle_preset[] = {
 {"Shuffle 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Shuffle 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Shuffle 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Shuffle 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Remover", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ShuffleGui::cb_shuffle_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_DryWet);
 return;
} 
rkr->efx_Shuffle->changepar(Shuffle_DryWet,Dry_Wet((int)o->value()));
}
void ShuffleGui::cb_shuffle_WD(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_WD_i(o,v);
}

void ShuffleGui::cb_shuffle_cross1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Freq_L);
 return;
} 
rkr->efx_Shuffle->changepar(Shuffle_Freq_L,(int)o->value());
}
void ShuffleGui::cb_shuffle_cross1(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_cross1_i(o,v);
}

void ShuffleGui::cb_shuffle_volL_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Gain_L);
 return;
} 
rkr->efx_Shuffle->changepar(Shuffle_Gain_L,(int)o->value());
}
void ShuffleGui::cb_shuffle_volL(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_volL_i(o,v);
}

void ShuffleGui::cb_shuffle_cross2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Freq_ML);
 return;
} 
rkr->efx_Shuffle->changepar(Shuffle_Freq_ML,(int)o->value());
}
void ShuffleGui::cb_shuffle_cross2(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_cross2_i(o,v);
}

void ShuffleGui::cb_shuffle_volML_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Gain_ML);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Gain_ML,(int)o->value());
}
void ShuffleGui::cb_shuffle_volML(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_volML_i(o,v);
}

void ShuffleGui::cb_shuffle_cross3_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Freq_MH);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Freq_MH,(int)o->value());
}
void ShuffleGui::cb_shuffle_cross3(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_cross3_i(o,v);
}

void ShuffleGui::cb_shuffle_volMH_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Gain_MH);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Gain_MH,(int)o->value());
}
void ShuffleGui::cb_shuffle_volMH(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_volMH_i(o,v);
}

void ShuffleGui::cb_shuffle_cross4_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Freq_H);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Freq_H,(int)o->value());
}
void ShuffleGui::cb_shuffle_cross4(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_cross4_i(o,v);
}

void ShuffleGui::cb_shuffle_volH_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Gain_H);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Gain_H,(int)o->value());
}
void ShuffleGui::cb_shuffle_volH(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_volH_i(o,v);
}

void ShuffleGui::cb_shuffle_Q_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Shuffle_Width);
 return;
}
rkr->efx_Shuffle->changepar(Shuffle_Width,(int)o->value());
}
void ShuffleGui::cb_shuffle_Q(RKR_Slider* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_Q_i(o,v);
}

void ShuffleGui::cb_shuffle_E_i(RKR_Check_Button* o, void*) {
  rkr->efx_Shuffle->changepar(Shuffle_F_Band,(int)o->value());
}
void ShuffleGui::cb_shuffle_E(RKR_Check_Button* o, void* v) {
  ((ShuffleGui*)(o->parent()))->cb_shuffle_E_i(o,v);
}
ShuffleGui::ShuffleGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ shuffle_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  shuffle_activar->box(FL_UP_BOX);
  shuffle_activar->shortcut(0x33);
  shuffle_activar->color((Fl_Color)62);
  shuffle_activar->selection_color((Fl_Color)1);
  shuffle_activar->labeltype(FL_NORMAL_LABEL);
  shuffle_activar->labelfont(0);
  shuffle_activar->labelsize(10);
  shuffle_activar->labelcolor(FL_FOREGROUND_COLOR);
  shuffle_activar->callback((Fl_Callback*)cb_shuffle_activar, (void*)(2));
  shuffle_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  shuffle_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* shuffle_activar
{ shuffle_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  shuffle_preset->box(FL_FLAT_BOX);
  shuffle_preset->down_box(FL_BORDER_BOX);
  shuffle_preset->color(FL_BACKGROUND_COLOR);
  shuffle_preset->selection_color(FL_FOREGROUND_COLOR);
  shuffle_preset->labeltype(FL_NORMAL_LABEL);
  shuffle_preset->labelfont(0);
  shuffle_preset->labelsize(10);
  shuffle_preset->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_preset->textsize(10);
  shuffle_preset->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_preset->callback((Fl_Callback*)cb_shuffle_preset, (void*)(12026));
  shuffle_preset->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_preset->when(FL_WHEN_RELEASE_ALWAYS);
  shuffle_preset->menu(menu_shuffle_preset);
} // RKR_Choice* shuffle_preset
{ shuffle_WD = new RKR_Slider(56, 31, 100, 10, "Dry/Wet");
  shuffle_WD->type(5);
  shuffle_WD->box(FL_FLAT_BOX);
  shuffle_WD->color((Fl_Color)178);
  shuffle_WD->selection_color((Fl_Color)62);
  shuffle_WD->labeltype(FL_NORMAL_LABEL);
  shuffle_WD->labelfont(0);
  shuffle_WD->labelsize(10);
  shuffle_WD->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_WD->maximum(127);
  shuffle_WD->step(1);
  shuffle_WD->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_WD->callback((Fl_Callback*)cb_shuffle_WD);
  shuffle_WD->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_WD
{ shuffle_cross1 = new RKR_Slider(56, 49, 100, 10, "Low Freq");
  shuffle_cross1->type(5);
  shuffle_cross1->box(FL_FLAT_BOX);
  shuffle_cross1->color((Fl_Color)178);
  shuffle_cross1->selection_color((Fl_Color)62);
  shuffle_cross1->labeltype(FL_NORMAL_LABEL);
  shuffle_cross1->labelfont(0);
  shuffle_cross1->labelsize(10);
  shuffle_cross1->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross1->minimum(20);
  shuffle_cross1->maximum(1000);
  shuffle_cross1->step(1);
  shuffle_cross1->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross1->callback((Fl_Callback*)cb_shuffle_cross1);
  shuffle_cross1->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_cross1->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_cross1
{ shuffle_volL = new RKR_Slider(56, 64, 100, 10, "Low Gain");
  shuffle_volL->type(5);
  shuffle_volL->box(FL_FLAT_BOX);
  shuffle_volL->color((Fl_Color)178);
  shuffle_volL->selection_color((Fl_Color)62);
  shuffle_volL->labeltype(FL_NORMAL_LABEL);
  shuffle_volL->labelfont(0);
  shuffle_volL->labelsize(10);
  shuffle_volL->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_volL->minimum(-64);
  shuffle_volL->maximum(64);
  shuffle_volL->step(1);
  shuffle_volL->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_volL->callback((Fl_Callback*)cb_shuffle_volL);
  shuffle_volL->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_volL->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_volL
{ shuffle_cross2 = new RKR_Slider(56, 79, 100, 10, "M.L. Freq");
  shuffle_cross2->tooltip("Mid Low Frequency");
  shuffle_cross2->type(5);
  shuffle_cross2->box(FL_FLAT_BOX);
  shuffle_cross2->color((Fl_Color)178);
  shuffle_cross2->selection_color((Fl_Color)62);
  shuffle_cross2->labeltype(FL_NORMAL_LABEL);
  shuffle_cross2->labelfont(0);
  shuffle_cross2->labelsize(10);
  shuffle_cross2->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross2->minimum(400);
  shuffle_cross2->maximum(4000);
  shuffle_cross2->step(1);
  shuffle_cross2->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross2->callback((Fl_Callback*)cb_shuffle_cross2);
  shuffle_cross2->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_cross2->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_cross2
{ shuffle_volML = new RKR_Slider(56, 94, 100, 10, "M.L Gain");
  shuffle_volML->tooltip("Mid Low Gain");
  shuffle_volML->type(5);
  shuffle_volML->box(FL_FLAT_BOX);
  shuffle_volML->color((Fl_Color)178);
  shuffle_volML->selection_color((Fl_Color)62);
  shuffle_volML->labeltype(FL_NORMAL_LABEL);
  shuffle_volML->labelfont(0);
  shuffle_volML->labelsize(10);
  shuffle_volML->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_volML->minimum(-64);
  shuffle_volML->maximum(64);
  shuffle_volML->step(1);
  shuffle_volML->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_volML->callback((Fl_Callback*)cb_shuffle_volML);
  shuffle_volML->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_volML->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_volML
{ shuffle_cross3 = new RKR_Slider(56, 109, 100, 10, "M.H. Freq");
  shuffle_cross3->tooltip("Mid High Frequency");
  shuffle_cross3->type(5);
  shuffle_cross3->box(FL_FLAT_BOX);
  shuffle_cross3->color((Fl_Color)178);
  shuffle_cross3->selection_color((Fl_Color)62);
  shuffle_cross3->labeltype(FL_NORMAL_LABEL);
  shuffle_cross3->labelfont(0);
  shuffle_cross3->labelsize(10);
  shuffle_cross3->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross3->minimum(1200);
  shuffle_cross3->maximum(8000);
  shuffle_cross3->step(1);
  shuffle_cross3->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross3->callback((Fl_Callback*)cb_shuffle_cross3);
  shuffle_cross3->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_cross3->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_cross3
{ shuffle_volMH = new RKR_Slider(56, 124, 100, 10, "M.H. Gain");
  shuffle_volMH->tooltip("Mid High Gain");
  shuffle_volMH->type(5);
  shuffle_volMH->box(FL_FLAT_BOX);
  shuffle_volMH->color((Fl_Color)178);
  shuffle_volMH->selection_color((Fl_Color)62);
  shuffle_volMH->labeltype(FL_NORMAL_LABEL);
  shuffle_volMH->labelfont(0);
  shuffle_volMH->labelsize(10);
  shuffle_volMH->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_volMH->minimum(-64);
  shuffle_volMH->maximum(64);
  shuffle_volMH->step(1);
  shuffle_volMH->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_volMH->callback((Fl_Callback*)cb_shuffle_volMH);
  shuffle_volMH->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_volMH->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_volMH
{ shuffle_cross4 = new RKR_Slider(56, 139, 100, 10, "High Freq");
  shuffle_cross4->tooltip("High Frequency");
  shuffle_cross4->type(5);
  shuffle_cross4->box(FL_FLAT_BOX);
  shuffle_cross4->color((Fl_Color)178);
  shuffle_cross4->selection_color((Fl_Color)62);
  shuffle_cross4->labeltype(FL_NORMAL_LABEL);
  shuffle_cross4->labelfont(0);
  shuffle_cross4->labelsize(10);
  shuffle_cross4->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross4->minimum(6000);
  shuffle_cross4->maximum(26000);
  shuffle_cross4->step(1);
  shuffle_cross4->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_cross4->callback((Fl_Callback*)cb_shuffle_cross4);
  shuffle_cross4->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_cross4->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_cross4
{ shuffle_volH = new RKR_Slider(56, 154, 100, 10, "High Gain");
  shuffle_volH->type(5);
  shuffle_volH->box(FL_FLAT_BOX);
  shuffle_volH->color((Fl_Color)178);
  shuffle_volH->selection_color((Fl_Color)62);
  shuffle_volH->labeltype(FL_NORMAL_LABEL);
  shuffle_volH->labelfont(0);
  shuffle_volH->labelsize(10);
  shuffle_volH->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_volH->minimum(-64);
  shuffle_volH->maximum(64);
  shuffle_volH->step(1);
  shuffle_volH->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_volH->callback((Fl_Callback*)cb_shuffle_volH);
  shuffle_volH->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_volH->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_volH
{ shuffle_Q = new RKR_Slider(56, 169, 100, 10, "Q");
  shuffle_Q->tooltip("Width");
  shuffle_Q->type(5);
  shuffle_Q->box(FL_FLAT_BOX);
  shuffle_Q->color((Fl_Color)178);
  shuffle_Q->selection_color((Fl_Color)62);
  shuffle_Q->labeltype(FL_NORMAL_LABEL);
  shuffle_Q->labelfont(0);
  shuffle_Q->labelsize(10);
  shuffle_Q->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_Q->minimum(-64);
  shuffle_Q->maximum(64);
  shuffle_Q->step(1);
  shuffle_Q->textcolor(FL_BACKGROUND2_COLOR);
  shuffle_Q->callback((Fl_Callback*)cb_shuffle_Q);
  shuffle_Q->align(Fl_Align(FL_ALIGN_LEFT));
  shuffle_Q->when(FL_WHEN_CHANGED);
} // RKR_Slider* shuffle_Q
{ shuffle_E = new RKR_Check_Button(2, 167, 40, 15, "Rev");
  shuffle_E->tooltip("Filtered Band - (Uncheck = Mid: Check = Side)");
  shuffle_E->box(FL_NO_BOX);
  shuffle_E->down_box(FL_BORDER_BOX);
  shuffle_E->color(FL_BACKGROUND_COLOR);
  shuffle_E->selection_color(FL_FOREGROUND_COLOR);
  shuffle_E->labeltype(FL_NORMAL_LABEL);
  shuffle_E->labelfont(0);
  shuffle_E->labelsize(10);
  shuffle_E->labelcolor(FL_BACKGROUND2_COLOR);
  shuffle_E->callback((Fl_Callback*)cb_shuffle_E, (void*)(2));
  shuffle_E->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  shuffle_E->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* shuffle_E
position(X, Y);
end();
}
