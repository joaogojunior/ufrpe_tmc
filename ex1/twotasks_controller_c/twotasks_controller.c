/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c twotasks_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "twotasks_controller.h"

void Twotasks_controller__twotasks_controller_twotasks_c2_step(int twotasks_r1,
                                                               int twotasks_e1,
                                                               int twotasks_r2,
                                                               int twotasks_e2,
                                                               int twotasks_v_57,
                                                               int twotasks_v_56,
                                                               int twotasks_pnr_1,
                                                               int twotasks_v_41,
                                                               int twotasks_v_40,
                                                               int twotasks_pnr,
                                                               int p_twotasks_c2,
                                                               int p_twotasks_c1,
                                                               int twotasks_c1,
                                                               Twotasks_controller__twotasks_controller_twotasks_c2_out* _out) {
  
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
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
  sub_3 = p_twotasks_c2;
  if (twotasks_v_40) {
    sub_2 = sub_3;
  } else {
    sub_2 = false;
  };
  sub_1 = (twotasks_v_41&&sub_2);
  if (twotasks_v_56) {
    sub_4 = sub_3;
  } else {
    sub_4 = sub_1;
  };
  if (twotasks_v_57) {
    v_26 = sub_1;
    v = sub_4;
    sub_5 = sub_4;
  } else {
    v_26 = sub_4;
    v = sub_1;
    sub_5 = sub_3;
  };
  if (twotasks_c1) {
    v_19 = sub_4;
    v_1 = v;
  } else {
    v_19 = sub_5;
    v_1 = sub_5;
  };
  sub_6 = (twotasks_v_41&&false);
  if (twotasks_v_56) {
    sub_7 = sub_3;
  } else {
    sub_7 = sub_6;
  };
  if (twotasks_v_57) {
    v_28 = sub_6;
    v_2 = sub_7;
    sub_8 = sub_7;
  } else {
    v_28 = sub_7;
    v_2 = sub_6;
    sub_8 = sub_3;
  };
  if (twotasks_c1) {
    v_20 = sub_7;
  } else {
    v_20 = sub_8;
  };
  if (twotasks_e2) {
    v_21 = v_19;
  } else {
    v_21 = v_20;
  };
  if (twotasks_c1) {
    v_3 = v_2;
  } else {
    v_3 = sub_8;
  };
  if (twotasks_e2) {
    v_4 = v_1;
  } else {
    v_4 = v_3;
  };
  sub_10 = (twotasks_v_40&&sub_3);
  if (twotasks_v_41) {
    sub_9 = sub_2;
  } else {
    sub_9 = sub_10;
  };
  if (twotasks_v_56) {
    sub_11 = sub_3;
  } else {
    sub_11 = sub_9;
  };
  if (twotasks_v_57) {
    v_31 = sub_9;
    v_5 = sub_11;
    sub_12 = sub_11;
  } else {
    v_31 = sub_11;
    v_5 = sub_9;
    sub_12 = sub_3;
  };
  if (twotasks_c1) {
    v_22 = sub_11;
    v_6 = v_5;
  } else {
    v_22 = sub_12;
    v_6 = sub_12;
  };
  if (twotasks_v_41) {
    sub_13 = false;
  } else {
    sub_13 = sub_10;
  };
  if (twotasks_v_56) {
    sub_14 = sub_3;
  } else {
    sub_14 = sub_13;
  };
  if (twotasks_v_57) {
    v_33 = sub_13;
    v_7 = sub_14;
    sub_15 = sub_14;
  } else {
    v_33 = sub_14;
    v_7 = sub_13;
    sub_15 = sub_3;
  };
  if (twotasks_c1) {
    v_23 = sub_14;
  } else {
    v_23 = sub_15;
  };
  if (twotasks_e2) {
    v_24 = v_22;
  } else {
    v_24 = v_23;
  };
  if (twotasks_r2) {
    v_25 = v_21;
  } else {
    v_25 = v_24;
  };
  if (twotasks_c1) {
    v_8 = v_7;
  } else {
    v_8 = sub_15;
  };
  if (twotasks_e2) {
    v_9 = v_6;
  } else {
    v_9 = v_8;
  };
  if (twotasks_r2) {
    v_10 = v_4;
  } else {
    v_10 = v_9;
  };
  if (twotasks_v_57) {
    sub_16 = sub_1;
  } else {
    sub_16 = sub_3;
  };
  if (twotasks_c1) {
    v_27 = v_26;
    v_11 = sub_1;
  } else {
    v_27 = sub_16;
    v_11 = sub_16;
  };
  if (twotasks_v_57) {
    sub_17 = sub_6;
  } else {
    sub_17 = sub_3;
  };
  if (twotasks_c1) {
    v_29 = v_28;
  } else {
    v_29 = sub_17;
  };
  if (twotasks_e2) {
    v_30 = v_27;
  } else {
    v_30 = v_29;
  };
  if (twotasks_c1) {
    v_12 = sub_6;
  } else {
    v_12 = sub_17;
  };
  if (twotasks_e2) {
    v_13 = v_11;
  } else {
    v_13 = v_12;
  };
  if (twotasks_v_57) {
    sub_18 = sub_9;
  } else {
    sub_18 = sub_3;
  };
  if (twotasks_c1) {
    v_32 = v_31;
    v_14 = sub_9;
  } else {
    v_32 = sub_18;
    v_14 = sub_18;
  };
  if (twotasks_v_57) {
    sub_19 = sub_13;
  } else {
    sub_19 = sub_3;
  };
  if (twotasks_c1) {
    v_34 = v_33;
  } else {
    v_34 = sub_19;
  };
  if (twotasks_e2) {
    v_35 = v_32;
  } else {
    v_35 = v_34;
  };
  if (twotasks_r2) {
    v_36 = v_30;
  } else {
    v_36 = v_35;
  };
  if (twotasks_e1) {
    v_37 = v_25;
  } else {
    v_37 = v_36;
  };
  if (twotasks_c1) {
    v_15 = sub_13;
  } else {
    v_15 = sub_19;
  };
  if (twotasks_e2) {
    v_16 = v_14;
  } else {
    v_16 = v_15;
  };
  if (twotasks_r2) {
    v_17 = v_13;
  } else {
    v_17 = v_16;
  };
  if (twotasks_e1) {
    v_18 = v_10;
  } else {
    v_18 = v_17;
  };
  if (twotasks_r1) {
    sub_0 = v_18;
  } else {
    sub_0 = v_37;
  };
  _out->twotasks_c2 = sub_0;;
}

void Twotasks_controller__twotasks_controller_twotasks_c1_step(int twotasks_r1,
                                                               int twotasks_e1,
                                                               int twotasks_r2,
                                                               int twotasks_e2,
                                                               int twotasks_v_57,
                                                               int twotasks_v_56,
                                                               int twotasks_pnr_1,
                                                               int twotasks_v_41,
                                                               int twotasks_v_40,
                                                               int twotasks_pnr,
                                                               int p_twotasks_c2,
                                                               int p_twotasks_c1,
                                                               Twotasks_controller__twotasks_controller_twotasks_c1_out* _out) {
  
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
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
  sub_3 = p_twotasks_c1;
  v_45 = (twotasks_v_40&&sub_3);
  if (twotasks_v_41) {
    sub_2 = v_45;
  } else {
    sub_2 = sub_3;
  };
  if (twotasks_v_40) {
    v_44 = sub_3;
  } else {
    v_44 = false;
  };
  if (twotasks_v_41) {
    sub_5 = v_44;
  } else {
    sub_5 = sub_3;
  };
  if (twotasks_v_56) {
    sub_4 = sub_3;
  } else {
    sub_4 = sub_5;
  };
  if (twotasks_v_57) {
    v_46 = sub_4;
  } else {
    v_46 = sub_2;
  };
  v_43 = !(twotasks_v_41);
  sub_6 = (v_43&&sub_3);
  if (twotasks_v_41) {
    sub_8 = false;
  } else {
    sub_8 = sub_3;
  };
  if (twotasks_v_56) {
    sub_7 = sub_3;
  } else {
    sub_7 = sub_8;
  };
  if (twotasks_v_57) {
    v_47 = sub_7;
  } else {
    v_47 = sub_6;
  };
  if (twotasks_e2) {
    sub_1 = v_46;
  } else {
    sub_1 = v_47;
  };
  if (twotasks_v_57) {
    v_42 = sub_8;
    v_41 = sub_5;
  } else {
    v_42 = sub_6;
    v_41 = sub_2;
  };
  if (twotasks_e2) {
    sub_9 = v_41;
  } else {
    sub_9 = v_42;
  };
  if (twotasks_e1) {
    v_48 = sub_1;
  } else {
    v_48 = sub_9;
  };
  if (twotasks_v_56) {
    sub_11 = sub_3;
  } else {
    sub_11 = sub_2;
  };
  if (twotasks_v_57) {
    v_39 = sub_4;
  } else {
    v_39 = sub_11;
  };
  if (twotasks_v_56) {
    sub_12 = sub_3;
  } else {
    sub_12 = sub_6;
  };
  if (twotasks_v_57) {
    v_40 = sub_7;
  } else {
    v_40 = sub_12;
  };
  if (twotasks_e2) {
    sub_10 = v_39;
  } else {
    sub_10 = v_40;
  };
  if (twotasks_v_57) {
    v_38 = sub_8;
    v = sub_5;
  } else {
    v_38 = sub_12;
    v = sub_11;
  };
  if (twotasks_e2) {
    sub_13 = v;
  } else {
    sub_13 = v_38;
  };
  if (twotasks_e1) {
    v_49 = sub_10;
  } else {
    v_49 = sub_13;
  };
  if (twotasks_r1) {
    sub_0 = v_48;
  } else {
    sub_0 = v_49;
  };
  _out->twotasks_c1 = sub_0;;
}

void Twotasks_controller__twotasks_controller_step(int twotasks_r1,
                                                   int twotasks_e1,
                                                   int twotasks_r2,
                                                   int twotasks_e2,
                                                   int twotasks_v_57,
                                                   int twotasks_v_56,
                                                   int twotasks_pnr_1,
                                                   int twotasks_v_41,
                                                   int twotasks_v_40,
                                                   int twotasks_pnr,
                                                   int p_twotasks_c2,
                                                   int p_twotasks_c1,
                                                   Twotasks_controller__twotasks_controller_out* _out) {
  Twotasks_controller__twotasks_controller_twotasks_c2_out Twotasks_controller__twotasks_controller_twotasks_c2_out_st;
  Twotasks_controller__twotasks_controller_twotasks_c1_out Twotasks_controller__twotasks_controller_twotasks_c1_out_st;
  Twotasks_controller__twotasks_controller_twotasks_c1_step(twotasks_r1,
                                                            twotasks_e1,
                                                            twotasks_r2,
                                                            twotasks_e2,
                                                            twotasks_v_57,
                                                            twotasks_v_56,
                                                            twotasks_pnr_1,
                                                            twotasks_v_41,
                                                            twotasks_v_40,
                                                            twotasks_pnr,
                                                            p_twotasks_c2,
                                                            p_twotasks_c1,
                                                            &Twotasks_controller__twotasks_controller_twotasks_c1_out_st);
  _out->twotasks_c1 = Twotasks_controller__twotasks_controller_twotasks_c1_out_st.twotasks_c1;
  Twotasks_controller__twotasks_controller_twotasks_c2_step(twotasks_r1,
                                                            twotasks_e1,
                                                            twotasks_r2,
                                                            twotasks_e2,
                                                            twotasks_v_57,
                                                            twotasks_v_56,
                                                            twotasks_pnr_1,
                                                            twotasks_v_41,
                                                            twotasks_v_40,
                                                            twotasks_pnr,
                                                            p_twotasks_c2,
                                                            p_twotasks_c1,
                                                            _out->twotasks_c1,
                                                            &Twotasks_controller__twotasks_controller_twotasks_c2_out_st);
  _out->twotasks_c2 = Twotasks_controller__twotasks_controller_twotasks_c2_out_st.twotasks_c2;
}

