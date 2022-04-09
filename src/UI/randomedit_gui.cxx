// generated by Fast Light User Interface Designer (fluid) version 1.0308

#include "randomedit_gui.h"
RandomEditGui::RandomEditGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _RandomEditGui();
}

RandomEditGui::RandomEditGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _RandomEditGui();
}

RandomEditGui::RandomEditGui()
  : Fl_Double_Window(0, 0, 125, 235, 0) {
  clear_flag(16);
  _RandomEditGui();
}

void RandomEditGui::_RandomEditGui() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo14 = new Fl_Box(0, 1, 125, 234);
} // Fl_Box* Fondo14
{ RandomScroll = new RKR_Scroll(13, 25, 100, 185, "Exclude Effect");
  RandomScroll->tooltip("Check any effects that should NOT be included for random selection.");
  RandomScroll->type(6);
  RandomScroll->box(FL_NO_BOX);
  RandomScroll->color(FL_BACKGROUND_COLOR);
  RandomScroll->selection_color(FL_BACKGROUND_COLOR);
  RandomScroll->labeltype(FL_NORMAL_LABEL);
  RandomScroll->labelfont(0);
  RandomScroll->labelsize(14);
  RandomScroll->labelcolor(FL_BACKGROUND2_COLOR);
  RandomScroll->align(Fl_Align(FL_ALIGN_TOP));
  RandomScroll->when(FL_WHEN_RELEASE);
  RandomScroll->end();
} // RKR_Scroll* RandomScroll
end();
resizable(this);
}

void RandomEditGui::initialize(RKR * _rkr, RKRGUI *_rgui) {
  m_process = _rkr;
  m_parent = _rgui;
  make_effect_scroller();
}

void RandomEditGui::make_effect_scroller() {
  RandomScroll->clear();
    
      RandomScroll->begin();
      
      for (intptr_t i = 0; i < C_NUMBER_EFFECTS; ++i)
      {
          RKR_Check_Button *b = new RKR_Check_Button(15, (i * 20) + 22, 100, 20,
               m_process->efx_names[m_parent->Busca_Eff(i)].Nom);
  
          b->user_data((void *) i);
          b->callback((Fl_Callback *)m_parent->Set_effect);
      }
      
      RandomScroll->end();
}
