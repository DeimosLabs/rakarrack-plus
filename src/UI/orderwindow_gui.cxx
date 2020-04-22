// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "orderwindow_gui.h"

void OrderWindowGui::cb_Pon_i(RKR_Button*, void*) {
  int i = Order_Bro->value();
int j = Avail_Bro->value();

if(!i) return;
if(!j) return;

Order_Bro->insert(i,Avail_Bro->text(j));

Avail_Bro->remove(j);
Order_Bro->remove(i+1);
Order_Bro->select(1);
m_rkr->new_order[i-1]=m_rkr->availables[j];
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Pon(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_Pon_i(o,v);
}

void OrderWindowGui::cb_Sube_i(RKR_Button*, void*) {
  int x,x1;

int i = Order_Bro->value();

Order_Bro->move(i,i-1);

i--;

if (i>0) 
{
x=m_rkr->new_order[i];
x1=m_rkr->new_order[i-1];

m_rkr->new_order[i]=x1;
m_rkr->new_order[i-1]=x;
};
}
void OrderWindowGui::cb_Sube(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_Sube_i(o,v);
}

void OrderWindowGui::cb_Baja_i(RKR_Button*, void*) {
  int x,x1;

int i = Order_Bro->value();

Order_Bro->move(i,i+1);

i--;

if (i<9)
{
x=m_rkr->new_order[i];
x1=m_rkr->new_order[i+1];

m_rkr->new_order[i]=x1;
m_rkr->new_order[i+1]=x;
};
}
void OrderWindowGui::cb_Baja(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_Baja_i(o,v);
}

void OrderWindowGui::cb_Fil0_i(RKR_Button*, void*) {
  m_rkr->eff_filter=0;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil0(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil0_i(o,v);
}

void OrderWindowGui::cb_Fil1_i(RKR_Button*, void*) {
  m_rkr->eff_filter=1;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil1(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil1_i(o,v);
}

void OrderWindowGui::cb_Fil2_i(RKR_Button*, void*) {
  m_rkr->eff_filter=2;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil2(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil2_i(o,v);
}

void OrderWindowGui::cb_Fil4_i(RKR_Button*, void*) {
  m_rkr->eff_filter=4;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil4(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil4_i(o,v);
}

void OrderWindowGui::cb_Fil8_i(RKR_Button*, void*) {
  m_rkr->eff_filter=8;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil8(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil8_i(o,v);
}

void OrderWindowGui::cb_Fil16_i(RKR_Button*, void*) {
  m_rkr->eff_filter=16;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil16(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil16_i(o,v);
}

void OrderWindowGui::cb_Fil32_i(RKR_Button*, void*) {
  m_rkr->eff_filter=32;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil32(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil32_i(o,v);
}

void OrderWindowGui::cb_Fil64_i(RKR_Button*, void*) {
  m_rkr->eff_filter=64;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil64(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil64_i(o,v);
}

void OrderWindowGui::cb_Fil128_i(RKR_Button*, void*) {
  m_rkr->eff_filter=128;
m_rgui->Fill_Avail(m_rkr->eff_filter);
}
void OrderWindowGui::cb_Fil128(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()->parent()))->cb_Fil128_i(o,v);
}

void OrderWindowGui::cb_Order_DeacHide_i(RKR_Check_Button* o, void*) {
  m_rkr->deachide=(int) o->value();
}
void OrderWindowGui::cb_Order_DeacHide(RKR_Check_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_Order_DeacHide_i(o,v);
}

void OrderWindowGui::cb_ok_order_i(RKR_Button*, void*) {
  int i;
for (i=0;i<10;i++) m_rkr->efx_order[i]=m_rkr->new_order[i];
m_rgui->reordena();
do_callback();
}
void OrderWindowGui::cb_ok_order(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_ok_order_i(o,v);
}

void OrderWindowGui::cb_Cancel_order_i(RKR_Button*, void*) {
  int i;
for (i=0;i<10;i++) m_rkr->efx_order[i]=m_rkr->saved_order[i];
do_callback();
}
void OrderWindowGui::cb_Cancel_order(RKR_Button* o, void* v) {
  ((OrderWindowGui*)(o->parent()))->cb_Cancel_order_i(o,v);
}
OrderWindowGui::OrderWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _OrderWindowGui();
}

OrderWindowGui::OrderWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _OrderWindowGui();
}

OrderWindowGui::OrderWindowGui()
  : Fl_Double_Window(0, 0, 500, 400, 0) {
  clear_flag(16);
  _OrderWindowGui();
}

void OrderWindowGui::_OrderWindowGui() {
this->box(FL_FLAT_BOX);
this->color((Fl_Color)4);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo1 = new Fl_Box(1, 1, 600, 400);
} // Fl_Box* Fondo1
{ RKR_Box* o = O_TITLE = new RKR_Box(25, 3, 438, 37, "Put Order in your Rack");
  O_TITLE->box(FL_NO_BOX);
  O_TITLE->color(FL_BACKGROUND_COLOR);
  O_TITLE->selection_color(FL_BACKGROUND_COLOR);
  O_TITLE->labeltype(FL_NORMAL_LABEL);
  O_TITLE->labelfont(1);
  O_TITLE->labelsize(33);
  O_TITLE->labelcolor(FL_BACKGROUND2_COLOR);
  O_TITLE->align(Fl_Align(FL_ALIGN_CENTER));
  O_TITLE->when(FL_WHEN_RELEASE);
  o->set_label_offset(23);
} // RKR_Box* O_TITLE
{ RKR_Browser* o = Avail_Bro = new RKR_Browser(15, 50, 175, 225);
  Avail_Bro->type(2);
  Avail_Bro->box(FL_NO_BOX);
  Avail_Bro->color(FL_BACKGROUND2_COLOR);
  Avail_Bro->selection_color(FL_SELECTION_COLOR);
  Avail_Bro->labeltype(FL_NORMAL_LABEL);
  Avail_Bro->labelfont(0);
  Avail_Bro->labelsize(18);
  Avail_Bro->labelcolor(FL_FOREGROUND_COLOR);
  Avail_Bro->textsize(18);
  Avail_Bro->textcolor(FL_BACKGROUND2_COLOR);
  Avail_Bro->user_data((void*)(99));
  Avail_Bro->align(Fl_Align(FL_ALIGN_BOTTOM));
  Avail_Bro->when(FL_WHEN_RELEASE_ALWAYS);
  o->set_text_offset(8);
} // RKR_Browser* Avail_Bro
{ RKR_Button* o = Pon = new RKR_Button(200, 145, 50, 25, "@<->");
  Pon->box(FL_UP_BOX);
  Pon->color(FL_BACKGROUND_COLOR);
  Pon->selection_color(FL_BACKGROUND_COLOR);
  Pon->labeltype(FL_NORMAL_LABEL);
  Pon->labelfont(0);
  Pon->labelsize(18);
  Pon->labelcolor(FL_FOREGROUND_COLOR);
  Pon->callback((Fl_Callback*)cb_Pon);
  Pon->align(Fl_Align(FL_ALIGN_CENTER));
  Pon->when(FL_WHEN_RELEASE);
  o->set_label_offset(8);
} // RKR_Button* Pon
{ RKR_Browser* o = Order_Bro = new RKR_Browser(260, 50, 175, 225);
  Order_Bro->type(2);
  Order_Bro->box(FL_NO_BOX);
  Order_Bro->color(FL_BACKGROUND2_COLOR);
  Order_Bro->selection_color(FL_SELECTION_COLOR);
  Order_Bro->labeltype(FL_NORMAL_LABEL);
  Order_Bro->labelfont(0);
  Order_Bro->labelsize(18);
  Order_Bro->labelcolor(FL_FOREGROUND_COLOR);
  Order_Bro->textsize(18);
  Order_Bro->textcolor(FL_BACKGROUND2_COLOR);
  Order_Bro->align(Fl_Align(FL_ALIGN_BOTTOM));
  Order_Bro->when(FL_WHEN_RELEASE_ALWAYS);
  o->set_text_offset(8);
} // RKR_Browser* Order_Bro
{ RKR_Button* o = Sube = new RKR_Button(442, 120, 50, 25, "@$2->");
  Sube->box(FL_UP_BOX);
  Sube->color(FL_BACKGROUND_COLOR);
  Sube->selection_color(FL_BACKGROUND_COLOR);
  Sube->labeltype(FL_NORMAL_LABEL);
  Sube->labelfont(0);
  Sube->labelsize(18);
  Sube->labelcolor(FL_FOREGROUND_COLOR);
  Sube->callback((Fl_Callback*)cb_Sube);
  Sube->align(Fl_Align(FL_ALIGN_CENTER));
  Sube->when(FL_WHEN_RELEASE);
  o->set_label_offset(8);
} // RKR_Button* Sube
{ RKR_Button* o = Baja = new RKR_Button(442, 160, 50, 25, "@$8->");
  Baja->box(FL_UP_BOX);
  Baja->color(FL_BACKGROUND_COLOR);
  Baja->selection_color(FL_BACKGROUND_COLOR);
  Baja->labeltype(FL_NORMAL_LABEL);
  Baja->labelfont(0);
  Baja->labelsize(18);
  Baja->labelcolor(FL_FOREGROUND_COLOR);
  Baja->callback((Fl_Callback*)cb_Baja);
  Baja->align(Fl_Align(FL_ALIGN_CENTER));
  Baja->when(FL_WHEN_RELEASE);
  o->set_label_offset(8);
} // RKR_Button* Baja
{ Filters = new Fl_Group(15, 280, 180, 110);
  { Fil0 = new RKR_Button(15, 284, 177, 15, "All");
    Fil0->type(102);
    Fil0->box(FL_UP_BOX);
    Fil0->color(FL_BACKGROUND_COLOR);
    Fil0->selection_color(FL_BACKGROUND_COLOR);
    Fil0->labeltype(FL_NORMAL_LABEL);
    Fil0->labelfont(0);
    Fil0->labelsize(10);
    Fil0->labelcolor(FL_FOREGROUND_COLOR);
    Fil0->callback((Fl_Callback*)cb_Fil0);
    Fil0->align(Fl_Align(FL_ALIGN_CENTER));
    Fil0->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil0
  { Fil1 = new RKR_Button(105, 304, 86, 15, "Distortion");
    Fil1->type(102);
    Fil1->box(FL_UP_BOX);
    Fil1->color(FL_BACKGROUND_COLOR);
    Fil1->selection_color(FL_BACKGROUND_COLOR);
    Fil1->labeltype(FL_NORMAL_LABEL);
    Fil1->labelfont(0);
    Fil1->labelsize(10);
    Fil1->labelcolor(FL_FOREGROUND_COLOR);
    Fil1->callback((Fl_Callback*)cb_Fil1);
    Fil1->align(Fl_Align(FL_ALIGN_CENTER));
    Fil1->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil1
  { Fil2 = new RKR_Button(15, 304, 78, 15, "Modulation");
    Fil2->type(102);
    Fil2->box(FL_UP_BOX);
    Fil2->color(FL_BACKGROUND_COLOR);
    Fil2->selection_color(FL_BACKGROUND_COLOR);
    Fil2->labeltype(FL_NORMAL_LABEL);
    Fil2->labelfont(0);
    Fil2->labelsize(10);
    Fil2->labelcolor(FL_FOREGROUND_COLOR);
    Fil2->callback((Fl_Callback*)cb_Fil2);
    Fil2->align(Fl_Align(FL_ALIGN_CENTER));
    Fil2->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil2
  { Fil4 = new RKR_Button(105, 325, 86, 15, "Time");
    Fil4->type(102);
    Fil4->box(FL_UP_BOX);
    Fil4->color(FL_BACKGROUND_COLOR);
    Fil4->selection_color(FL_BACKGROUND_COLOR);
    Fil4->labeltype(FL_NORMAL_LABEL);
    Fil4->labelfont(0);
    Fil4->labelsize(10);
    Fil4->labelcolor(FL_FOREGROUND_COLOR);
    Fil4->callback((Fl_Callback*)cb_Fil4);
    Fil4->align(Fl_Align(FL_ALIGN_CENTER));
    Fil4->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil4
  { Fil8 = new RKR_Button(15, 324, 78, 15, "Emulation");
    Fil8->type(102);
    Fil8->box(FL_UP_BOX);
    Fil8->color(FL_BACKGROUND_COLOR);
    Fil8->selection_color(FL_BACKGROUND_COLOR);
    Fil8->labeltype(FL_NORMAL_LABEL);
    Fil8->labelfont(0);
    Fil8->labelsize(10);
    Fil8->labelcolor(FL_FOREGROUND_COLOR);
    Fil8->callback((Fl_Callback*)cb_Fil8);
    Fil8->align(Fl_Align(FL_ALIGN_CENTER));
    Fil8->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil8
  { Fil16 = new RKR_Button(105, 345, 86, 15, "Filters");
    Fil16->type(102);
    Fil16->box(FL_UP_BOX);
    Fil16->color(FL_BACKGROUND_COLOR);
    Fil16->selection_color(FL_BACKGROUND_COLOR);
    Fil16->labeltype(FL_NORMAL_LABEL);
    Fil16->labelfont(0);
    Fil16->labelsize(10);
    Fil16->labelcolor(FL_FOREGROUND_COLOR);
    Fil16->callback((Fl_Callback*)cb_Fil16);
    Fil16->align(Fl_Align(FL_ALIGN_CENTER));
    Fil16->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil16
  { Fil32 = new RKR_Button(15, 344, 78, 15, "Dynamics");
    Fil32->type(102);
    Fil32->box(FL_UP_BOX);
    Fil32->color(FL_BACKGROUND_COLOR);
    Fil32->selection_color(FL_BACKGROUND_COLOR);
    Fil32->labeltype(FL_NORMAL_LABEL);
    Fil32->labelfont(0);
    Fil32->labelsize(10);
    Fil32->labelcolor(FL_FOREGROUND_COLOR);
    Fil32->callback((Fl_Callback*)cb_Fil32);
    Fil32->align(Fl_Align(FL_ALIGN_CENTER));
    Fil32->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil32
  { Fil64 = new RKR_Button(105, 365, 86, 15, "Processing && EQ");
    Fil64->type(102);
    Fil64->box(FL_UP_BOX);
    Fil64->color(FL_BACKGROUND_COLOR);
    Fil64->selection_color(FL_BACKGROUND_COLOR);
    Fil64->labeltype(FL_NORMAL_LABEL);
    Fil64->labelfont(0);
    Fil64->labelsize(10);
    Fil64->labelcolor(FL_FOREGROUND_COLOR);
    Fil64->callback((Fl_Callback*)cb_Fil64);
    Fil64->align(Fl_Align(FL_ALIGN_CENTER));
    Fil64->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil64
  { Fil128 = new RKR_Button(15, 365, 78, 15, "Synthesis");
    Fil128->type(102);
    Fil128->box(FL_UP_BOX);
    Fil128->color(FL_BACKGROUND_COLOR);
    Fil128->selection_color(FL_BACKGROUND_COLOR);
    Fil128->labeltype(FL_NORMAL_LABEL);
    Fil128->labelfont(0);
    Fil128->labelsize(10);
    Fil128->labelcolor(FL_FOREGROUND_COLOR);
    Fil128->callback((Fl_Callback*)cb_Fil128);
    Fil128->align(Fl_Align(FL_ALIGN_CENTER));
    Fil128->when(FL_WHEN_CHANGED);
  } // RKR_Button* Fil128
  Filters->end();
} // Fl_Group* Filters
{ RKR_Check_Button* o = Order_DeacHide = new RKR_Check_Button(420, 286, 23, 20, "Hide Unused Effect Widgets");
  Order_DeacHide->box(FL_NO_BOX);
  Order_DeacHide->down_box(FL_DOWN_BOX);
  Order_DeacHide->color(FL_BACKGROUND_COLOR);
  Order_DeacHide->selection_color(FL_FOREGROUND_COLOR);
  Order_DeacHide->labeltype(FL_NORMAL_LABEL);
  Order_DeacHide->labelfont(0);
  Order_DeacHide->labelsize(11);
  Order_DeacHide->labelcolor(FL_BACKGROUND2_COLOR);
  Order_DeacHide->callback((Fl_Callback*)cb_Order_DeacHide);
  Order_DeacHide->align(Fl_Align(FL_ALIGN_LEFT));
  Order_DeacHide->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Check_Button* Order_DeacHide
{ RKR_Button* o = ok_order = new RKR_Button(333, 349, 72, 26, "Ok");
  ok_order->box(FL_UP_BOX);
  ok_order->color(FL_BACKGROUND_COLOR);
  ok_order->selection_color(FL_BACKGROUND_COLOR);
  ok_order->labeltype(FL_NORMAL_LABEL);
  ok_order->labelfont(0);
  ok_order->labelsize(14);
  ok_order->labelcolor(FL_FOREGROUND_COLOR);
  ok_order->callback((Fl_Callback*)cb_ok_order);
  ok_order->align(Fl_Align(FL_ALIGN_CENTER));
  ok_order->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* ok_order
{ RKR_Button* o = Cancel_order = new RKR_Button(415, 349, 72, 26, "Cancel");
  Cancel_order->box(FL_UP_BOX);
  Cancel_order->color(FL_BACKGROUND_COLOR);
  Cancel_order->selection_color(FL_BACKGROUND_COLOR);
  Cancel_order->labeltype(FL_NORMAL_LABEL);
  Cancel_order->labelfont(0);
  Cancel_order->labelsize(14);
  Cancel_order->labelcolor(FL_FOREGROUND_COLOR);
  Cancel_order->callback((Fl_Callback*)cb_Cancel_order);
  Cancel_order->align(Fl_Align(FL_ALIGN_CENTER));
  Cancel_order->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* Cancel_order
this->m_rkr = NULL;
this->m_rgui = NULL;
end();
resizable(this);
}

void OrderWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui ) {
  m_rkr = _rkr;
  m_rgui= _rgui;
}
