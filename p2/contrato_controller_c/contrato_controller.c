/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contrato_controller.h"

void Contrato_controller__contrato_controller_contrato_co_step(int contrato_ews,
                                                               int contrato_sws,
                                                               int contrato_fo,
                                                               int contrato_so,
                                                               int contrato_tok,
                                                               int contrato_cold,
                                                               int contrato_v_241,
                                                               int contrato_v_240,
                                                               int contrato_v_239,
                                                               int contrato_pnr_1,
                                                               int contrato_v_182,
                                                               int contrato_v_181,
                                                               int contrato_v_180,
                                                               int contrato_pnr,
                                                               int p_contrato_co,
                                                               int p_contrato_cws,
                                                               int contrato_cws,
                                                               Contrato_controller__contrato_controller_contrato_co_out* _out) {
  
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
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  sub_10 = false;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (contrato_v_239) {
    v_5 = false;
  } else {
    v_5 = sub_9;
  };
  if (contrato_cws) {
    sub_17 = false;
  } else {
    sub_17 = sub_10;
  };
  if (contrato_v_239) {
    sub_16 = sub_9;
  } else {
    sub_16 = sub_17;
  };
  if (contrato_v_241) {
    v_6 = sub_16;
  } else {
    v_6 = false;
  };
  if (contrato_ews) {
    sub_15 = sub_16;
  } else {
    sub_15 = v_5;
  };
  if (contrato_v_241) {
    sub_14 = sub_8;
  } else {
    sub_14 = sub_15;
  };
  if (contrato_v_240) {
    sub_13 = v_6;
  } else {
    sub_13 = sub_14;
  };
  if (contrato_fo) {
    v_7 = sub_8;
  } else {
    v_7 = sub_13;
  };
  if (contrato_tok) {
    sub_12 = sub_7;
  } else {
    sub_12 = v_7;
  };
  sub_11 = sub_12;
  if (contrato_v_182) {
    sub_3 = sub_11;
  } else {
    sub_3 = sub_4;
  };
  sub_21 = sub_13;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (contrato_v_181) {
    sub_2 = sub_18;
  } else {
    sub_2 = sub_3;
  };
  if (contrato_v_182) {
    sub_22 = sub_18;
  } else {
    sub_22 = sub_4;
  };
  if (contrato_v_181) {
    v_8 = sub_3;
  } else {
    v_8 = sub_22;
  };
  if (contrato_v_180) {
    sub_1 = v_8;
  } else {
    sub_1 = sub_2;
  };
  sub_34 = true;
  if (contrato_cws) {
    sub_33 = sub_10;
  } else {
    sub_33 = sub_34;
  };
  sub_35 = sub_34;
  if (contrato_v_239) {
    v_3 = sub_9;
    sub_32 = sub_35;
  } else {
    v_3 = sub_35;
    sub_32 = sub_33;
  };
  if (contrato_v_241) {
    v_4 = sub_32;
  } else {
    v_4 = sub_8;
  };
  if (contrato_ews) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_3;
  };
  sub_36 = sub_35;
  if (contrato_v_241) {
    sub_30 = sub_36;
  } else {
    sub_30 = sub_31;
  };
  if (contrato_v_240) {
    sub_29 = v_4;
  } else {
    sub_29 = sub_30;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_40 = sub_36;
  if (contrato_v_239) {
    v = false;
  } else {
    v = sub_35;
  };
  if (contrato_cws) {
    sub_45 = false;
  } else {
    sub_45 = sub_34;
  };
  if (contrato_v_239) {
    sub_44 = sub_35;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_v_241) {
    v_1 = sub_44;
  } else {
    v_1 = false;
  };
  if (contrato_ews) {
    sub_43 = sub_44;
  } else {
    sub_43 = v;
  };
  if (contrato_v_241) {
    sub_42 = sub_36;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_v_240) {
    sub_41 = v_1;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_fo) {
    v_2 = sub_36;
  } else {
    v_2 = sub_41;
  };
  if (contrato_tok) {
    sub_39 = sub_40;
  } else {
    sub_39 = v_2;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (contrato_v_182) {
    sub_24 = sub_37;
  } else {
    sub_24 = sub_25;
  };
  sub_49 = sub_41;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (contrato_v_181) {
    sub_23 = sub_46;
  } else {
    sub_23 = sub_24;
  };
  sub_52 = sub_40;
  if (contrato_so) {
    sub_51 = sub_26;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_v_182) {
    sub_50 = sub_46;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_cold) {
    sub_54 = sub_27;
  } else {
    sub_54 = sub_52;
  };
  sub_53 = sub_54;
  if (contrato_v_182) {
    v_9 = sub_37;
  } else {
    v_9 = sub_53;
  };
  if (contrato_v_181) {
    v_10 = v_9;
  } else {
    v_10 = sub_50;
  };
  if (contrato_v_180) {
    v_11 = v_10;
  } else {
    v_11 = sub_23;
  };
  if (p_contrato_co) {
    sub_0 = v_11;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_co = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cws_step(int contrato_ews,
                                                                int contrato_sws,
                                                                int contrato_fo,
                                                                int contrato_so,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_v_241,
                                                                int contrato_v_240,
                                                                int contrato_v_239,
                                                                int contrato_pnr_1,
                                                                int contrato_v_182,
                                                                int contrato_v_181,
                                                                int contrato_v_180,
                                                                int contrato_pnr,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                Contrato_controller__contrato_controller_contrato_cws_out* _out) {
  
  int v_14;
  int v_13;
  int v_12;
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
  sub_9 = p_contrato_cws;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (contrato_v_239) {
    v = false;
  } else {
    v = sub_8;
  };
  sub_16 = false;
  if (contrato_v_239) {
    sub_15 = sub_8;
  } else {
    sub_15 = sub_16;
  };
  if (contrato_v_241) {
    v_12 = sub_15;
  } else {
    v_12 = false;
  };
  if (contrato_ews) {
    sub_14 = sub_15;
  } else {
    sub_14 = v;
  };
  if (contrato_v_241) {
    sub_13 = sub_7;
  } else {
    sub_13 = sub_14;
  };
  if (contrato_v_240) {
    sub_12 = v_12;
  } else {
    sub_12 = sub_13;
  };
  if (contrato_fo) {
    v_13 = sub_7;
  } else {
    v_13 = sub_12;
  };
  if (contrato_tok) {
    sub_11 = sub_6;
  } else {
    sub_11 = v_13;
  };
  sub_10 = sub_11;
  if (contrato_v_182) {
    sub_2 = sub_10;
  } else {
    sub_2 = sub_3;
  };
  sub_20 = sub_12;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (contrato_v_181) {
    sub_1 = sub_17;
  } else {
    sub_1 = sub_2;
  };
  if (contrato_v_182) {
    sub_21 = sub_17;
  } else {
    sub_21 = sub_3;
  };
  if (contrato_v_181) {
    v_14 = sub_2;
  } else {
    v_14 = sub_21;
  };
  if (contrato_v_180) {
    sub_0 = v_14;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cws = sub_0;;
}

void Contrato_controller__contrato_controller_step(int contrato_ews,
                                                   int contrato_sws,
                                                   int contrato_fo,
                                                   int contrato_so,
                                                   int contrato_tok,
                                                   int contrato_cold,
                                                   int contrato_v_241,
                                                   int contrato_v_240,
                                                   int contrato_v_239,
                                                   int contrato_pnr_1,
                                                   int contrato_v_182,
                                                   int contrato_v_181,
                                                   int contrato_v_180,
                                                   int contrato_pnr,
                                                   int p_contrato_co,
                                                   int p_contrato_cws,
                                                   Contrato_controller__contrato_controller_out* _out) {
  Contrato_controller__contrato_controller_contrato_cws_out Contrato_controller__contrato_controller_contrato_cws_out_st;
  Contrato_controller__contrato_controller_contrato_co_out Contrato_controller__contrato_controller_contrato_co_out_st;
  Contrato_controller__contrato_controller_contrato_cws_step(contrato_ews,
                                                             contrato_sws,
                                                             contrato_fo,
                                                             contrato_so,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_v_241,
                                                             contrato_v_240,
                                                             contrato_v_239,
                                                             contrato_pnr_1,
                                                             contrato_v_182,
                                                             contrato_v_181,
                                                             contrato_v_180,
                                                             contrato_pnr,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             &Contrato_controller__contrato_controller_contrato_cws_out_st);
  _out->contrato_cws = Contrato_controller__contrato_controller_contrato_cws_out_st.contrato_cws;
  Contrato_controller__contrato_controller_contrato_co_step(contrato_ews,
                                                            contrato_sws,
                                                            contrato_fo,
                                                            contrato_so,
                                                            contrato_tok,
                                                            contrato_cold,
                                                            contrato_v_241,
                                                            contrato_v_240,
                                                            contrato_v_239,
                                                            contrato_pnr_1,
                                                            contrato_v_182,
                                                            contrato_v_181,
                                                            contrato_v_180,
                                                            contrato_pnr,
                                                            p_contrato_co,
                                                            p_contrato_cws,
                                                            _out->contrato_cws,
                                                            &Contrato_controller__contrato_controller_contrato_co_out_st);
  _out->contrato_co = Contrato_controller__contrato_controller_contrato_co_out_st.contrato_co;
}

