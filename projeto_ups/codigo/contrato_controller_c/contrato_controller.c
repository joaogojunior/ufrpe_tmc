/* --- Generated the 25/6/2018 at 20:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contrato_controller.h"

void Contrato_controller__contrato_controller_contrato_cm_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_256,
                                                               int contrato_v_255,
                                                               int contrato_v_254,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_1,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cm_out* _out) {
  
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  v_4 = !(contrato_ck_14_1);
  sub_9 = (v_4&&false);
  sub_10 = (contrato_ck_14_1&&false);
  if (contrato_cp) {
    sub_8 = sub_9;
    sub_11 = sub_10;
  } else {
    sub_8 = sub_10;
    sub_11 = sub_9;
  };
  if (contrato_td) {
    v_5 = sub_11;
    sub_7 = sub_8;
  } else {
    v_5 = sub_8;
    sub_7 = sub_11;
  };
  if (contrato_ck_10_1) {
    sub_6 = v_5;
  } else {
    sub_6 = sub_7;
  };
  sub_14 = (contrato_ck_14_1||false);
  v_3 = !(contrato_ck_14_1);
  sub_15 = (v_3||false);
  if (contrato_cp) {
    sub_13 = sub_14;
    sub_16 = sub_15;
  } else {
    sub_13 = sub_15;
    sub_16 = sub_14;
  };
  if (contrato_td) {
    v_6 = sub_16;
    sub_12 = sub_13;
  } else {
    v_6 = sub_13;
    sub_12 = sub_16;
  };
  if (contrato_ck_10_1) {
    v_7 = v_6;
  } else {
    v_7 = sub_12;
  };
  if (contrato_ck_16_1) {
    v_8 = v_7;
  } else {
    v_8 = sub_6;
  };
  sub_19 = false;
  sub_18 = sub_19;
  sub_20 = true;
  if (p_contrato_cm) {
    sub_17 = sub_20;
  } else {
    sub_17 = sub_18;
  };
  if (contrato_vb) {
    sub_5 = v_8;
  } else {
    sub_5 = sub_17;
  };
  sub_21 = sub_17;
  if (contrato_l2b) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_21;
  };
  sub_23 = sub_21;
  if (contrato_cb) {
    v_9 = sub_23;
  } else {
    v_9 = sub_5;
  };
  sub_25 = sub_16;
  if (contrato_ck_16_1) {
    v_1 = sub_11;
  } else {
    v_1 = sub_25;
  };
  if (contrato_vb) {
    sub_24 = v_1;
  } else {
    sub_24 = sub_17;
  };
  if (contrato_l2b) {
    v_2 = sub_5;
  } else {
    v_2 = sub_24;
  };
  if (contrato_cb) {
    sub_22 = sub_23;
  } else {
    sub_22 = v_2;
  };
  if (contrato_l1b) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_22;
  };
  sub_29 = sub_8;
  if (contrato_ck_16_1) {
    sub_28 = sub_13;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_vb) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_17;
  };
  if (contrato_cb) {
    v_11 = sub_23;
  } else {
    v_11 = sub_27;
  };
  if (contrato_l2b) {
    v = sub_27;
  } else {
    v = sub_21;
  };
  if (contrato_cb) {
    sub_26 = v;
  } else {
    sub_26 = sub_4;
  };
  if (contrato_l1b) {
    v_12 = sub_26;
    v_10 = sub_26;
  } else {
    v_12 = v_11;
    v_10 = v_9;
  };
  if (contrato_v_256) {
    sub_2 = v_10;
  } else {
    sub_2 = sub_3;
  };
  sub_33 = sub_28;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (contrato_v_255) {
    sub_1 = sub_30;
  } else {
    sub_1 = sub_2;
  };
  if (contrato_l1b) {
    sub_35 = sub_26;
  } else {
    sub_35 = sub_22;
  };
  if (contrato_v_256) {
    sub_34 = sub_30;
  } else {
    sub_34 = sub_35;
  };
  if (contrato_l2b) {
    sub_37 = sub_24;
  } else {
    sub_37 = sub_21;
  };
  if (contrato_l1b) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_22;
  };
  if (contrato_v_256) {
    v_13 = v_12;
  } else {
    v_13 = sub_36;
  };
  if (contrato_v_255) {
    v_14 = v_13;
  } else {
    v_14 = sub_34;
  };
  if (contrato_v_254) {
    sub_0 = v_14;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cm = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cp_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_256,
                                                               int contrato_v_255,
                                                               int contrato_v_254,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_1,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cp_out* _out) {
  
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  sub_7 = contrato_ck_14_1;
  sub_8 = !(contrato_ck_14_1);
  if (contrato_td) {
    v_16 = sub_8;
    sub_6 = sub_7;
  } else {
    v_16 = sub_7;
    sub_6 = sub_8;
  };
  if (contrato_ck_10_1) {
    v_17 = v_16;
  } else {
    v_17 = sub_6;
  };
  sub_10 = p_contrato_cp;
  sub_9 = sub_10;
  if (contrato_vb) {
    sub_5 = v_17;
  } else {
    sub_5 = sub_9;
  };
  sub_11 = sub_9;
  if (contrato_l2b) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_11;
  };
  sub_13 = sub_11;
  if (contrato_cb) {
    v_18 = sub_13;
  } else {
    v_18 = sub_5;
  };
  if (contrato_vb) {
    sub_14 = sub_8;
  } else {
    sub_14 = sub_9;
  };
  if (contrato_l2b) {
    v_15 = sub_5;
  } else {
    v_15 = sub_14;
  };
  if (contrato_cb) {
    sub_12 = sub_13;
  } else {
    sub_12 = v_15;
  };
  if (contrato_l1b) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_12;
  };
  sub_17 = sub_7;
  if (contrato_vb) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_9;
  };
  if (contrato_cb) {
    v_20 = sub_13;
  } else {
    v_20 = sub_16;
  };
  if (contrato_l2b) {
    v = sub_16;
  } else {
    v = sub_11;
  };
  if (contrato_cb) {
    sub_15 = v;
  } else {
    sub_15 = sub_4;
  };
  if (contrato_l1b) {
    v_21 = sub_15;
    v_19 = sub_15;
  } else {
    v_21 = v_20;
    v_19 = v_18;
  };
  if (contrato_v_256) {
    sub_2 = v_19;
  } else {
    sub_2 = sub_3;
  };
  sub_21 = sub_17;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (contrato_v_255) {
    sub_1 = sub_18;
  } else {
    sub_1 = sub_2;
  };
  if (contrato_l1b) {
    sub_23 = sub_15;
  } else {
    sub_23 = sub_12;
  };
  if (contrato_v_256) {
    sub_22 = sub_18;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_l2b) {
    sub_25 = sub_14;
  } else {
    sub_25 = sub_11;
  };
  if (contrato_l1b) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_12;
  };
  if (contrato_v_256) {
    v_22 = v_21;
  } else {
    v_22 = sub_24;
  };
  if (contrato_v_255) {
    v_23 = v_22;
  } else {
    v_23 = sub_22;
  };
  if (contrato_v_254) {
    sub_0 = v_23;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cp = sub_0;;
}

void Contrato_controller__contrato_controller_step(int contrato_cb,
                                                   int contrato_l1b,
                                                   int contrato_l2b,
                                                   int contrato_vb,
                                                   int contrato_td,
                                                   int contrato_ck_10_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_256,
                                                   int contrato_v_255,
                                                   int contrato_v_254,
                                                   int contrato_pnr_2,
                                                   int contrato_ck_14_1,
                                                   int contrato_pnr_1,
                                                   int contrato_ck_16_1,
                                                   int contrato_pnr,
                                                   int p_contrato_cm,
                                                   int p_contrato_cp,
                                                   Contrato_controller__contrato_controller_out* _out) {
  Contrato_controller__contrato_controller_contrato_cm_out Contrato_controller__contrato_controller_contrato_cm_out_st;
  Contrato_controller__contrato_controller_contrato_cp_out Contrato_controller__contrato_controller_contrato_cp_out_st;
  Contrato_controller__contrato_controller_contrato_cp_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_3,
                                                            contrato_v_256,
                                                            contrato_v_255,
                                                            contrato_v_254,
                                                            contrato_pnr_2,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_1,
                                                            contrato_ck_16_1,
                                                            contrato_pnr,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_cp_out_st);
  _out->contrato_cp = Contrato_controller__contrato_controller_contrato_cp_out_st.contrato_cp;
  Contrato_controller__contrato_controller_contrato_cm_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_3,
                                                            contrato_v_256,
                                                            contrato_v_255,
                                                            contrato_v_254,
                                                            contrato_pnr_2,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_1,
                                                            contrato_ck_16_1,
                                                            contrato_pnr,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            _out->contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_cm_out_st);
  _out->contrato_cm = Contrato_controller__contrato_controller_contrato_cm_out_st.contrato_cm;
}

