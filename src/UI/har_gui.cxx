// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "har_gui.h"

void HarGui::cb_har_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Harmonizer_Bypass);
 return;
}
rkr->Harmonizer_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_Har->cleanup();
rkr->efx_Har->changepar(Harm_Interval,rkr->efx_Har->getpar(Harm_Interval));
rgui->Chord(0);
rgui->findpos(14,(int)o->value(),o);
}
void HarGui::cb_har_activar(RKR_Light_Button* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_activar_i(o,v);
}

void HarGui::cb_har_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12014))rkr->efx_Har->setpreset((int)o->value());
har_WD->value(Dry_Wet(rkr->efx_Har->getpar(Harm_DryWet)));
har_pan->value(rkr->efx_Har->getpar(Harm_Pan)-64);
har_gan->value(rkr->efx_Har->getpar(Harm_Gain)-64);
har_int->value(rkr->efx_Har->getpar(Harm_Interval)-12);
har_SELECT->value(rkr->efx_Har->getpar(Harm_Select));
har_note->value(rkr->efx_Har->getpar(Harm_Note));
har_type->value(rkr->efx_Har->getpar(Harm_Chord));
har_freq1->value(rkr->efx_Har->getpar(Harm_Filter_Freq));
har_gan1->value(rkr->efx_Har->getpar(Harm_Filter_Gain)-64);
har_q1->value(rkr->efx_Har->getpar(Harm_Filter_Q)-64);
har_MIDI->value(rkr->efx_Har->getpar(Harm_MIDI));
if ((rkr->efx_Har->PMIDI) || (rkr->efx_Har->PSELECT)) rgui->Chord(0);
}
void HarGui::cb_har_preset(RKR_Choice* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_preset_i(o,v);
}

Fl_Menu_Item HarGui::menu_har_preset[] = {
 {"Plain", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Octavator", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"3m Down", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void HarGui::cb_har_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(31);
 return;
} 
rkr->efx_Har->changepar(Harm_DryWet,Dry_Wet((int)(o->value())));
}
void HarGui::cb_har_WD(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_WD_i(o,v);
}

void HarGui::cb_har_int_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(27);
 return;
} 
rkr->Harmonizer_Bypass=0;
rkr->efx_Har->changepar(Harm_Interval,(int)(o->value()+12));
if((int)har_activar->value())rkr->Harmonizer_Bypass=1;
}
void HarGui::cb_har_int(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_int_i(o,v);
}

void HarGui::cb_har_gan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(412);
 return;
} 
rkr->efx_Har->changepar(Harm_Gain,(int)(o->value()+64));
}
void HarGui::cb_har_gan(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_gan_i(o,v);
}

void HarGui::cb_har_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(49);
 return;
} 
rkr->efx_Har->changepar(Harm_Pan,(int)(o->value()+64));
}
void HarGui::cb_har_pan(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_pan_i(o,v);
}

void HarGui::cb_har_freq1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(26);
 return;
} 
rkr->efx_Har->changepar(Harm_Filter_Freq,(int)o->value());
}
void HarGui::cb_har_freq1(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_freq1_i(o,v);
}

void HarGui::cb_har_gan1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(413);
 return;
} 
rkr->efx_Har->changepar(Harm_Filter_Gain,(int)(o->value()+64));
}
void HarGui::cb_har_gan1(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_gan1_i(o,v);
}

void HarGui::cb_har_q1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(414);
 return;
} 
rkr->efx_Har->changepar(Harm_Filter_Q,(int)(o->value()+64));
}
void HarGui::cb_har_q1(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_q1_i(o,v);
}

void HarGui::cb_har_MIDI_i(RKR_Check_Button* o, void*) {
  rkr->efx_Har->changepar(Harm_MIDI,(int)o->value());
rkr->RC_Harm->cleanup();
if(!(int)o->value())rkr->efx_Har->changepar(Harm_Interval,rkr->efx_Har->getpar(Harm_Interval));
}
void HarGui::cb_har_MIDI(RKR_Check_Button* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_MIDI_i(o,v);
}

void HarGui::cb_har_SELECT_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(447);
 return;
}
rkr->efx_Har->changepar(Harm_Select,(int)o->value());
rkr->RC_Harm->cleanup();
if(!(int)o->value())rkr->efx_Har->changepar(Harm_Interval,rkr->efx_Har->getpar(Harm_Interval));
rgui->Chord(0);
}
void HarGui::cb_har_SELECT(RKR_Check_Button* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_SELECT_i(o,v);
}

void HarGui::cb_har_note_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(444);
 return;
}
rkr->efx_Har->changepar(Harm_Note,(unsigned char)o->value());
rgui->Chord(0);
}
void HarGui::cb_har_note(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_note_i(o,v);
}

void HarGui::cb_har_type_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(445);
 return;
}
rkr->efx_Har->changepar(Harm_Chord,(unsigned char)o->value());
rgui->Chord(0);
}
void HarGui::cb_har_type(RKR_Slider* o, void* v) {
  ((HarGui*)(o->parent()))->cb_har_type_i(o,v);
}
HarGui::HarGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ har_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  har_activar->box(FL_UP_BOX);
  har_activar->shortcut(0x30);
  har_activar->color((Fl_Color)62);
  har_activar->selection_color((Fl_Color)1);
  har_activar->labeltype(FL_NORMAL_LABEL);
  har_activar->labelfont(0);
  har_activar->labelsize(10);
  har_activar->labelcolor(FL_FOREGROUND_COLOR);
  har_activar->callback((Fl_Callback*)cb_har_activar, (void*)(2));
  har_activar->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  har_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* har_activar
{ har_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  har_preset->box(FL_FLAT_BOX);
  har_preset->down_box(FL_BORDER_BOX);
  har_preset->color(FL_BACKGROUND_COLOR);
  har_preset->selection_color(FL_FOREGROUND_COLOR);
  har_preset->labeltype(FL_NORMAL_LABEL);
  har_preset->labelfont(0);
  har_preset->labelsize(10);
  har_preset->labelcolor(FL_BACKGROUND2_COLOR);
  har_preset->textsize(10);
  har_preset->textcolor(FL_BACKGROUND2_COLOR);
  har_preset->callback((Fl_Callback*)cb_har_preset, (void*)(12014));
  har_preset->align(Fl_Align(FL_ALIGN_LEFT));
  har_preset->when(FL_WHEN_RELEASE_ALWAYS);
  har_preset->menu(menu_har_preset);
} // RKR_Choice* har_preset
{ har_WD = new RKR_Slider(56, 30, 100, 10, "Dry/Wet");
  har_WD->type(5);
  har_WD->box(FL_FLAT_BOX);
  har_WD->color((Fl_Color)178);
  har_WD->selection_color((Fl_Color)62);
  har_WD->labeltype(FL_NORMAL_LABEL);
  har_WD->labelfont(0);
  har_WD->labelsize(10);
  har_WD->labelcolor(FL_BACKGROUND2_COLOR);
  har_WD->maximum(127);
  har_WD->step(1);
  har_WD->textcolor(FL_BACKGROUND2_COLOR);
  har_WD->callback((Fl_Callback*)cb_har_WD);
  har_WD->align(Fl_Align(FL_ALIGN_LEFT));
  har_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_WD
{ har_int = new RKR_Slider(56, 43, 100, 10, "Interval");
  har_int->type(5);
  har_int->box(FL_FLAT_BOX);
  har_int->color((Fl_Color)178);
  har_int->selection_color((Fl_Color)62);
  har_int->labeltype(FL_NORMAL_LABEL);
  har_int->labelfont(0);
  har_int->labelsize(10);
  har_int->labelcolor(FL_BACKGROUND2_COLOR);
  har_int->minimum(-12);
  har_int->maximum(12);
  har_int->step(1);
  har_int->textcolor(FL_BACKGROUND2_COLOR);
  har_int->callback((Fl_Callback*)cb_har_int);
  har_int->align(Fl_Align(FL_ALIGN_LEFT));
  har_int->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_int
{ har_gan = new RKR_Slider(56, 58, 100, 10, "Gain");
  har_gan->type(5);
  har_gan->box(FL_FLAT_BOX);
  har_gan->color((Fl_Color)178);
  har_gan->selection_color((Fl_Color)62);
  har_gan->labeltype(FL_NORMAL_LABEL);
  har_gan->labelfont(0);
  har_gan->labelsize(10);
  har_gan->labelcolor(FL_BACKGROUND2_COLOR);
  har_gan->minimum(-64);
  har_gan->maximum(63);
  har_gan->step(1);
  har_gan->textcolor(FL_BACKGROUND2_COLOR);
  har_gan->callback((Fl_Callback*)cb_har_gan);
  har_gan->align(Fl_Align(FL_ALIGN_LEFT));
  har_gan->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_gan
{ har_pan = new RKR_Slider(56, 71, 100, 10, "Pan");
  har_pan->type(5);
  har_pan->box(FL_FLAT_BOX);
  har_pan->color((Fl_Color)178);
  har_pan->selection_color((Fl_Color)62);
  har_pan->labeltype(FL_NORMAL_LABEL);
  har_pan->labelfont(0);
  har_pan->labelsize(10);
  har_pan->labelcolor(FL_BACKGROUND2_COLOR);
  har_pan->minimum(-64);
  har_pan->maximum(63);
  har_pan->step(1);
  har_pan->textcolor(FL_BACKGROUND2_COLOR);
  har_pan->callback((Fl_Callback*)cb_har_pan);
  har_pan->align(Fl_Align(FL_ALIGN_LEFT));
  har_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_pan
{ har_freq1 = new RKR_Slider(56, 88, 100, 10, "Freq");
  har_freq1->type(5);
  har_freq1->box(FL_FLAT_BOX);
  har_freq1->color((Fl_Color)178);
  har_freq1->selection_color((Fl_Color)62);
  har_freq1->labeltype(FL_NORMAL_LABEL);
  har_freq1->labelfont(0);
  har_freq1->labelsize(10);
  har_freq1->labelcolor(FL_BACKGROUND2_COLOR);
  har_freq1->minimum(20);
  har_freq1->maximum(26000);
  har_freq1->step(1);
  har_freq1->value(2000);
  har_freq1->textcolor(FL_BACKGROUND2_COLOR);
  har_freq1->callback((Fl_Callback*)cb_har_freq1);
  har_freq1->align(Fl_Align(FL_ALIGN_LEFT));
  har_freq1->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_freq1
{ har_gan1 = new RKR_Slider(56, 100, 100, 10, "F. Gain");
  har_gan1->tooltip("Filter Gain");
  har_gan1->type(5);
  har_gan1->box(FL_FLAT_BOX);
  har_gan1->color((Fl_Color)178);
  har_gan1->selection_color((Fl_Color)62);
  har_gan1->labeltype(FL_NORMAL_LABEL);
  har_gan1->labelfont(0);
  har_gan1->labelsize(10);
  har_gan1->labelcolor(FL_BACKGROUND2_COLOR);
  har_gan1->minimum(-64);
  har_gan1->maximum(63);
  har_gan1->step(1);
  har_gan1->textcolor(FL_BACKGROUND2_COLOR);
  har_gan1->callback((Fl_Callback*)cb_har_gan1);
  har_gan1->align(Fl_Align(FL_ALIGN_LEFT));
  har_gan1->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_gan1
{ har_q1 = new RKR_Slider(56, 112, 100, 10, "Filter Q");
  har_q1->type(5);
  har_q1->box(FL_FLAT_BOX);
  har_q1->color((Fl_Color)178);
  har_q1->selection_color((Fl_Color)62);
  har_q1->labeltype(FL_NORMAL_LABEL);
  har_q1->labelfont(0);
  har_q1->labelsize(10);
  har_q1->labelcolor(FL_BACKGROUND2_COLOR);
  har_q1->minimum(-64);
  har_q1->maximum(63);
  har_q1->step(1);
  har_q1->textcolor(FL_BACKGROUND2_COLOR);
  har_q1->callback((Fl_Callback*)cb_har_q1);
  har_q1->align(Fl_Align(FL_ALIGN_LEFT));
  har_q1->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_q1
{ har_MIDI = new RKR_Check_Button(9, 124, 15, 15, "MIDI");
  har_MIDI->box(FL_NO_BOX);
  har_MIDI->down_box(FL_BORDER_BOX);
  har_MIDI->color(FL_BACKGROUND_COLOR);
  har_MIDI->selection_color(FL_FOREGROUND_COLOR);
  har_MIDI->labeltype(FL_NORMAL_LABEL);
  har_MIDI->labelfont(0);
  har_MIDI->labelsize(10);
  har_MIDI->labelcolor(FL_BACKGROUND2_COLOR);
  har_MIDI->callback((Fl_Callback*)cb_har_MIDI, (void*)(2));
  har_MIDI->align(Fl_Align(FL_ALIGN_RIGHT));
  har_MIDI->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* har_MIDI
{ har_SELECT = new RKR_Check_Button(9, 142, 15, 15, "SELECT");
  har_SELECT->box(FL_NO_BOX);
  har_SELECT->down_box(FL_BORDER_BOX);
  har_SELECT->color(FL_BACKGROUND_COLOR);
  har_SELECT->selection_color(FL_FOREGROUND_COLOR);
  har_SELECT->labeltype(FL_NORMAL_LABEL);
  har_SELECT->labelfont(0);
  har_SELECT->labelsize(10);
  har_SELECT->labelcolor(FL_BACKGROUND2_COLOR);
  har_SELECT->callback((Fl_Callback*)cb_har_SELECT, (void*)(2));
  har_SELECT->align(Fl_Align(FL_ALIGN_RIGHT));
  har_SELECT->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* har_SELECT
{ RKR_Box* o = har_chordname = new RKR_Box(56, 126, 98, 27);
  har_chordname->box(FL_NO_BOX);
  har_chordname->color(FL_BACKGROUND_COLOR);
  har_chordname->selection_color(FL_BACKGROUND_COLOR);
  har_chordname->labeltype(FL_NORMAL_LABEL);
  har_chordname->labelfont(0);
  har_chordname->labelsize(12);
  har_chordname->labelcolor(FL_BACKGROUND2_COLOR);
  har_chordname->align(Fl_Align(FL_ALIGN_CENTER));
  har_chordname->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Box* har_chordname
{ har_note = new RKR_Slider(56, 158, 100, 10, "Note");
  har_note->type(5);
  har_note->box(FL_FLAT_BOX);
  har_note->color((Fl_Color)178);
  har_note->selection_color((Fl_Color)62);
  har_note->labeltype(FL_NORMAL_LABEL);
  har_note->labelfont(0);
  har_note->labelsize(10);
  har_note->labelcolor(FL_BACKGROUND2_COLOR);
  har_note->maximum(23);
  har_note->step(1);
  har_note->textcolor(FL_BACKGROUND2_COLOR);
  har_note->callback((Fl_Callback*)cb_har_note);
  har_note->align(Fl_Align(FL_ALIGN_LEFT));
  har_note->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_note
{ har_type = new RKR_Slider(56, 170, 100, 10, "Chord");
  har_type->type(5);
  har_type->box(FL_FLAT_BOX);
  har_type->color((Fl_Color)178);
  har_type->selection_color((Fl_Color)62);
  har_type->labeltype(FL_NORMAL_LABEL);
  har_type->labelfont(0);
  har_type->labelsize(10);
  har_type->labelcolor(FL_BACKGROUND2_COLOR);
  har_type->maximum(33);
  har_type->step(1);
  har_type->textcolor(FL_BACKGROUND2_COLOR);
  har_type->callback((Fl_Callback*)cb_har_type);
  har_type->align(Fl_Align(FL_ALIGN_LEFT));
  har_type->when(FL_WHEN_CHANGED);
} // RKR_Slider* har_type
position(X, Y);
end();
}
