/* --- Generated the 21/5/2018 at 10:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contrato_controller.h"

void Contrato_controller__contrato_controller_contrato_ct2_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int contrato_ct1,
                                                                int contrato_cl2,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_ct2_out* _out) {
  
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
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
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  sub_13 = false;
  v_36 = (contrato_ck_15_1&&false);
  v_34 = !(contrato_ck_15_1);
  v_35 = (v_34&&false);
  if (contrato_bt) {
    sub_14 = v_35;
  } else {
    sub_14 = v_36;
  };
  if (contrato_ct1) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_14;
  };
  sub_15 = sub_13;
  if (contrato_ck_13_1) {
    v_38 = sub_12;
    sub_11 = sub_15;
  } else {
    v_38 = sub_15;
    sub_11 = sub_12;
  };
  if (contrato_bl) {
    v_39 = sub_11;
  } else {
    v_39 = v_38;
  };
  if (contrato_cl1) {
    v_40 = sub_15;
    v_37 = sub_11;
  } else {
    v_40 = v_39;
    v_37 = sub_12;
  };
  if (contrato_cl2) {
    sub_10 = v_37;
  } else {
    sub_10 = v_40;
  };
  v_32 = !(contrato_ck_15_1);
  v_31 = !(contrato_ck_15_1);
  sub_19 = (v_31||false);
  sub_18 = sub_19;
  sub_20 = contrato_ck_15_1;
  if (contrato_bt) {
    v_33 = sub_20;
  } else {
    v_33 = v_32;
  };
  if (contrato_ct1) {
    sub_17 = sub_18;
  } else {
    sub_17 = v_33;
  };
  if (contrato_ck_13_1) {
    v_42 = sub_17;
    sub_16 = false;
  } else {
    v_42 = false;
    sub_16 = sub_17;
  };
  if (contrato_bl) {
    v_43 = sub_16;
  } else {
    v_43 = v_42;
  };
  if (contrato_cl1) {
    v_44 = false;
    v_41 = sub_16;
  } else {
    v_44 = v_43;
    v_41 = sub_17;
  };
  if (contrato_cl2) {
    v_45 = v_41;
  } else {
    v_45 = v_44;
  };
  if (contrato_presenca) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_45;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (contrato_presenca) {
    sub_24 = sub_10;
  } else {
    sub_24 = false;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (contrato_v_262) {
    sub_5 = sub_21;
  } else {
    sub_5 = sub_6;
  };
  if (contrato_rup2) {
    v_29 = false;
  } else {
    v_29 = sub_8;
  };
  if (contrato_rc2) {
    v_30 = v_29;
  } else {
    v_30 = sub_7;
  };
  if (contrato_v_262) {
    sub_26 = v_30;
  } else {
    sub_26 = sub_6;
  };
  sub_25 = sub_26;
  if (contrato_rc1) {
    v_46 = sub_5;
  } else {
    v_46 = sub_25;
  };
  sub_27 = sub_25;
  if (contrato_rup1) {
    sub_4 = v_46;
  } else {
    sub_4 = sub_27;
  };
  if (contrato_rup2) {
    v_25 = false;
  } else {
    v_25 = sub_23;
  };
  if (contrato_rc2) {
    v_26 = v_25;
  } else {
    v_26 = sub_22;
  };
  if (contrato_v_262) {
    sub_29 = sub_6;
  } else {
    sub_29 = sub_21;
  };
  if (contrato_rdown2) {
    sub_31 = sub_9;
  } else {
    sub_31 = false;
  };
  if (contrato_rc2) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_7;
  };
  if (contrato_v_262) {
    v_27 = v_26;
  } else {
    v_27 = sub_30;
  };
  if (contrato_rdown1) {
    v_28 = sub_29;
  } else {
    v_28 = v_27;
  };
  if (contrato_rc1) {
    sub_28 = v_28;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_v_263) {
    sub_3 = sub_28;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_262) {
    sub_34 = false;
  } else {
    sub_34 = sub_6;
  };
  if (contrato_rc1) {
    v_24 = sub_34;
  } else {
    v_24 = sub_25;
  };
  if (contrato_rup1) {
    sub_33 = v_24;
  } else {
    sub_33 = sub_27;
  };
  if (contrato_v_262) {
    v_22 = false;
    sub_36 = sub_6;
  } else {
    v_22 = sub_30;
    sub_36 = false;
  };
  if (contrato_rdown1) {
    v_23 = sub_36;
  } else {
    v_23 = v_22;
  };
  if (contrato_rc1) {
    sub_35 = v_23;
  } else {
    sub_35 = sub_36;
  };
  if (contrato_v_263) {
    sub_32 = sub_35;
  } else {
    sub_32 = sub_33;
  };
  if (contrato_ck_11_1) {
    v_48 = sub_3;
    v_47 = sub_32;
  } else {
    v_48 = sub_32;
    v_47 = sub_3;
  };
  if (contrato_pjanela) {
    v_49 = v_47;
  } else {
    v_49 = v_48;
  };
  if (contrato_cj) {
    sub_2 = v_49;
  } else {
    sub_2 = sub_3;
  };
  sub_38 = sub_32;
  sub_37 = sub_38;
  if (contrato_ck_9_1) {
    v_51 = sub_2;
    v_50 = sub_37;
  } else {
    v_51 = sub_37;
    v_50 = sub_2;
  };
  if (contrato_pporta) {
    v_52 = v_50;
  } else {
    v_52 = v_51;
  };
  if (contrato_cp) {
    sub_1 = v_52;
  } else {
    sub_1 = sub_2;
  };
  if (contrato_ct1) {
    sub_49 = sub_20;
  } else {
    sub_49 = sub_14;
  };
  sub_51 = true;
  sub_50 = sub_51;
  if (contrato_ck_13_1) {
    v_10 = sub_49;
    sub_48 = sub_50;
  } else {
    v_10 = sub_50;
    sub_48 = sub_49;
  };
  if (contrato_bl) {
    v_11 = sub_48;
  } else {
    v_11 = v_10;
  };
  if (contrato_cl1) {
    v_12 = sub_50;
    v_9 = sub_48;
  } else {
    v_12 = v_11;
    v_9 = sub_49;
  };
  if (contrato_cl2) {
    sub_47 = v_9;
  } else {
    sub_47 = v_12;
  };
  if (contrato_ct1) {
    sub_53 = sub_18;
  } else {
    sub_53 = sub_51;
  };
  if (contrato_ck_13_1) {
    v_14 = sub_53;
    sub_52 = false;
  } else {
    v_14 = false;
    sub_52 = sub_53;
  };
  if (contrato_bl) {
    v_15 = sub_52;
  } else {
    v_15 = v_14;
  };
  if (contrato_cl1) {
    v_16 = false;
    v_13 = sub_52;
  } else {
    v_16 = v_15;
    v_13 = sub_53;
  };
  if (contrato_cl2) {
    v_17 = v_13;
  } else {
    v_17 = v_16;
  };
  if (contrato_presenca) {
    sub_46 = sub_47;
  } else {
    sub_46 = v_17;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (contrato_presenca) {
    sub_57 = sub_47;
  } else {
    sub_57 = false;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (contrato_v_262) {
    sub_42 = sub_54;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_rup2) {
    v_7 = false;
  } else {
    v_7 = sub_45;
  };
  if (contrato_rc2) {
    v_8 = v_7;
  } else {
    v_8 = sub_44;
  };
  if (contrato_v_262) {
    sub_59 = v_8;
  } else {
    sub_59 = sub_43;
  };
  sub_58 = sub_59;
  if (contrato_rc1) {
    v_18 = sub_42;
  } else {
    v_18 = sub_58;
  };
  sub_60 = sub_58;
  if (contrato_rup1) {
    sub_41 = v_18;
  } else {
    sub_41 = sub_60;
  };
  if (contrato_rup2) {
    v_3 = false;
  } else {
    v_3 = sub_56;
  };
  if (contrato_rc2) {
    v_4 = v_3;
  } else {
    v_4 = sub_55;
  };
  if (contrato_v_262) {
    sub_62 = sub_43;
  } else {
    sub_62 = sub_54;
  };
  if (contrato_rdown2) {
    sub_64 = sub_46;
  } else {
    sub_64 = false;
  };
  if (contrato_rc2) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_44;
  };
  if (contrato_v_262) {
    v_5 = v_4;
  } else {
    v_5 = sub_63;
  };
  if (contrato_rdown1) {
    v_6 = sub_62;
  } else {
    v_6 = v_5;
  };
  if (contrato_rc1) {
    sub_61 = v_6;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_v_263) {
    sub_40 = sub_61;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_v_262) {
    sub_67 = false;
  } else {
    sub_67 = sub_43;
  };
  if (contrato_rc1) {
    v_2 = sub_67;
  } else {
    v_2 = sub_58;
  };
  if (contrato_rup1) {
    sub_66 = v_2;
  } else {
    sub_66 = sub_60;
  };
  if (contrato_v_262) {
    v = false;
    sub_69 = sub_43;
  } else {
    v = sub_63;
    sub_69 = false;
  };
  if (contrato_rdown1) {
    v_1 = sub_69;
  } else {
    v_1 = v;
  };
  if (contrato_rc1) {
    sub_68 = v_1;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_v_263) {
    sub_65 = sub_68;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_ck_11_1) {
    v_20 = sub_40;
    v_19 = sub_65;
  } else {
    v_20 = sub_65;
    v_19 = sub_40;
  };
  if (contrato_pjanela) {
    v_21 = v_19;
  } else {
    v_21 = v_20;
  };
  if (contrato_cj) {
    sub_39 = v_21;
  } else {
    sub_39 = sub_40;
  };
  sub_71 = sub_65;
  sub_70 = sub_71;
  if (contrato_ck_9_1) {
    v_54 = sub_39;
    v_53 = sub_70;
  } else {
    v_54 = sub_70;
    v_53 = sub_39;
  };
  if (contrato_pporta) {
    v_55 = v_53;
  } else {
    v_55 = v_54;
  };
  if (contrato_cp) {
    v_56 = v_55;
  } else {
    v_56 = sub_39;
  };
  if (p_contrato_ct2) {
    sub_0 = v_56;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_ct2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_ct1_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int contrato_cl2,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_ct1_out* _out) {
  
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
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
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  sub_13 = !(contrato_ck_15_1);
  if (contrato_bt) {
    sub_12 = sub_13;
  } else {
    sub_12 = contrato_ck_15_1;
  };
  sub_14 = false;
  if (contrato_ck_13_1) {
    v_88 = sub_14;
    v_84 = sub_12;
    sub_11 = sub_14;
  } else {
    v_88 = false;
    v_84 = sub_14;
    sub_11 = sub_12;
  };
  if (contrato_bl) {
    v_85 = sub_11;
  } else {
    v_85 = v_84;
  };
  if (contrato_cl1) {
    v_83 = sub_11;
  } else {
    v_83 = sub_12;
  };
  sub_15 = sub_14;
  if (contrato_cl1) {
    v_86 = sub_15;
  } else {
    v_86 = v_85;
  };
  if (contrato_cl2) {
    sub_10 = v_83;
  } else {
    sub_10 = v_86;
  };
  if (contrato_ck_13_1) {
    sub_16 = false;
  } else {
    sub_16 = sub_14;
  };
  if (contrato_bl) {
    v_89 = sub_16;
  } else {
    v_89 = v_88;
  };
  if (contrato_cl1) {
    v_90 = false;
    v_87 = sub_16;
  } else {
    v_90 = v_89;
    v_87 = sub_15;
  };
  if (contrato_cl2) {
    v_91 = v_87;
  } else {
    v_91 = v_90;
  };
  if (contrato_presenca) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_91;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (contrato_presenca) {
    sub_20 = sub_10;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (contrato_v_262) {
    sub_5 = sub_17;
  } else {
    sub_5 = sub_6;
  };
  if (contrato_rup2) {
    v_81 = false;
  } else {
    v_81 = sub_8;
  };
  if (contrato_rc2) {
    v_82 = v_81;
  } else {
    v_82 = sub_7;
  };
  if (contrato_v_262) {
    sub_22 = v_82;
  } else {
    sub_22 = sub_6;
  };
  sub_21 = sub_22;
  if (contrato_rc1) {
    v_92 = sub_5;
  } else {
    v_92 = sub_21;
  };
  sub_23 = sub_21;
  if (contrato_rup1) {
    sub_4 = v_92;
  } else {
    sub_4 = sub_23;
  };
  if (contrato_rup2) {
    v_77 = false;
  } else {
    v_77 = sub_19;
  };
  if (contrato_rc2) {
    v_78 = v_77;
  } else {
    v_78 = sub_18;
  };
  if (contrato_v_262) {
    sub_25 = sub_6;
  } else {
    sub_25 = sub_17;
  };
  if (contrato_rdown2) {
    sub_27 = sub_9;
  } else {
    sub_27 = false;
  };
  if (contrato_rc2) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_7;
  };
  if (contrato_v_262) {
    v_79 = v_78;
  } else {
    v_79 = sub_26;
  };
  if (contrato_rdown1) {
    v_80 = sub_25;
  } else {
    v_80 = v_79;
  };
  if (contrato_rc1) {
    sub_24 = v_80;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_v_263) {
    sub_3 = sub_24;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_262) {
    sub_30 = false;
  } else {
    sub_30 = sub_6;
  };
  if (contrato_rc1) {
    v_76 = sub_30;
  } else {
    v_76 = sub_21;
  };
  if (contrato_rup1) {
    sub_29 = v_76;
  } else {
    sub_29 = sub_23;
  };
  if (contrato_v_262) {
    v_74 = false;
    sub_32 = sub_6;
  } else {
    v_74 = sub_26;
    sub_32 = false;
  };
  if (contrato_rdown1) {
    v_75 = sub_32;
  } else {
    v_75 = v_74;
  };
  if (contrato_rc1) {
    sub_31 = v_75;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_v_263) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_ck_11_1) {
    v_94 = sub_3;
    v_93 = sub_28;
  } else {
    v_94 = sub_28;
    v_93 = sub_3;
  };
  if (contrato_pjanela) {
    v_95 = v_93;
  } else {
    v_95 = v_94;
  };
  if (contrato_cj) {
    sub_2 = v_95;
  } else {
    sub_2 = sub_3;
  };
  sub_34 = sub_28;
  sub_33 = sub_34;
  if (contrato_ck_9_1) {
    v_97 = sub_2;
    v_96 = sub_33;
  } else {
    v_97 = sub_33;
    v_96 = sub_2;
  };
  if (contrato_pporta) {
    v_98 = v_96;
  } else {
    v_98 = v_97;
  };
  if (contrato_cp) {
    sub_1 = v_98;
  } else {
    sub_1 = sub_2;
  };
  sub_46 = true;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_48 = sub_13;
  if (contrato_ck_13_1) {
    v_66 = sub_48;
    sub_47 = false;
  } else {
    v_66 = false;
    sub_47 = sub_48;
  };
  if (contrato_bl) {
    v_67 = sub_47;
  } else {
    v_67 = v_66;
  };
  if (contrato_cl1) {
    v_68 = false;
    v_65 = sub_47;
  } else {
    v_68 = v_67;
    v_65 = sub_48;
  };
  if (contrato_cl2) {
    v_69 = v_65;
  } else {
    v_69 = v_68;
  };
  if (contrato_presenca) {
    sub_42 = sub_43;
  } else {
    sub_42 = v_69;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (contrato_presenca) {
    sub_52 = sub_43;
  } else {
    sub_52 = false;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (contrato_v_262) {
    sub_38 = sub_49;
  } else {
    sub_38 = sub_39;
  };
  if (contrato_rup2) {
    v_63 = false;
  } else {
    v_63 = sub_41;
  };
  if (contrato_rc2) {
    v_64 = v_63;
  } else {
    v_64 = sub_40;
  };
  if (contrato_v_262) {
    sub_54 = v_64;
  } else {
    sub_54 = sub_39;
  };
  sub_53 = sub_54;
  if (contrato_rc1) {
    v_70 = sub_38;
  } else {
    v_70 = sub_53;
  };
  sub_55 = sub_53;
  if (contrato_rup1) {
    sub_37 = v_70;
  } else {
    sub_37 = sub_55;
  };
  if (contrato_rup2) {
    v_59 = false;
  } else {
    v_59 = sub_51;
  };
  if (contrato_rc2) {
    v_60 = v_59;
  } else {
    v_60 = sub_50;
  };
  if (contrato_v_262) {
    sub_57 = sub_39;
  } else {
    sub_57 = sub_49;
  };
  if (contrato_rdown2) {
    sub_59 = sub_42;
  } else {
    sub_59 = false;
  };
  if (contrato_rc2) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_40;
  };
  if (contrato_v_262) {
    v_61 = v_60;
  } else {
    v_61 = sub_58;
  };
  if (contrato_rdown1) {
    v_62 = sub_57;
  } else {
    v_62 = v_61;
  };
  if (contrato_rc1) {
    sub_56 = v_62;
  } else {
    sub_56 = sub_57;
  };
  if (contrato_v_263) {
    sub_36 = sub_56;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_v_262) {
    sub_62 = false;
  } else {
    sub_62 = sub_39;
  };
  if (contrato_rc1) {
    v_58 = sub_62;
  } else {
    v_58 = sub_53;
  };
  if (contrato_rup1) {
    sub_61 = v_58;
  } else {
    sub_61 = sub_55;
  };
  if (contrato_v_262) {
    v = false;
    sub_64 = sub_39;
  } else {
    v = sub_58;
    sub_64 = false;
  };
  if (contrato_rdown1) {
    v_57 = sub_64;
  } else {
    v_57 = v;
  };
  if (contrato_rc1) {
    sub_63 = v_57;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_v_263) {
    sub_60 = sub_63;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_ck_11_1) {
    v_72 = sub_36;
    v_71 = sub_60;
  } else {
    v_72 = sub_60;
    v_71 = sub_36;
  };
  if (contrato_pjanela) {
    v_73 = v_71;
  } else {
    v_73 = v_72;
  };
  if (contrato_cj) {
    sub_35 = v_73;
  } else {
    sub_35 = sub_36;
  };
  sub_66 = sub_60;
  sub_65 = sub_66;
  if (contrato_ck_9_1) {
    v_100 = sub_35;
    v_99 = sub_65;
  } else {
    v_100 = sub_65;
    v_99 = sub_35;
  };
  if (contrato_pporta) {
    v_101 = v_99;
  } else {
    v_101 = v_100;
  };
  if (contrato_cp) {
    v_102 = v_101;
  } else {
    v_102 = sub_35;
  };
  if (p_contrato_ct1) {
    sub_0 = v_102;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_ct1 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cl2_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_cl2_out* _out) {
  
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
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
  sub_12 = p_contrato_cl2;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_14 = true;
  if (contrato_ck_13_1) {
    v_112 = sub_11;
    v_111 = sub_14;
  } else {
    v_112 = sub_14;
    v_111 = sub_11;
  };
  if (contrato_bl) {
    v_113 = v_111;
  } else {
    v_113 = v_112;
  };
  if (contrato_ck_13_1) {
    sub_13 = false;
  } else {
    sub_13 = sub_14;
  };
  if (contrato_cl1) {
    v_114 = sub_13;
  } else {
    v_114 = v_113;
  };
  if (contrato_presenca) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_114;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (contrato_presenca) {
    sub_18 = sub_9;
  } else {
    sub_18 = false;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (contrato_v_262) {
    sub_4 = sub_15;
  } else {
    sub_4 = sub_5;
  };
  if (contrato_rup2) {
    v_109 = false;
  } else {
    v_109 = sub_7;
  };
  if (contrato_rc2) {
    v_110 = v_109;
  } else {
    v_110 = sub_6;
  };
  if (contrato_v_262) {
    sub_20 = v_110;
  } else {
    sub_20 = sub_5;
  };
  sub_19 = sub_20;
  if (contrato_rc1) {
    v_115 = sub_4;
  } else {
    v_115 = sub_19;
  };
  sub_21 = sub_19;
  if (contrato_rup1) {
    sub_3 = v_115;
  } else {
    sub_3 = sub_21;
  };
  if (contrato_rup2) {
    v_105 = false;
  } else {
    v_105 = sub_17;
  };
  if (contrato_rc2) {
    v_106 = v_105;
  } else {
    v_106 = sub_16;
  };
  if (contrato_v_262) {
    sub_23 = sub_5;
  } else {
    sub_23 = sub_15;
  };
  if (contrato_rdown2) {
    sub_25 = sub_8;
  } else {
    sub_25 = false;
  };
  if (contrato_rc2) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_6;
  };
  if (contrato_v_262) {
    v_107 = v_106;
  } else {
    v_107 = sub_24;
  };
  if (contrato_rdown1) {
    v_108 = sub_23;
  } else {
    v_108 = v_107;
  };
  if (contrato_rc1) {
    sub_22 = v_108;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_v_263) {
    sub_2 = sub_22;
  } else {
    sub_2 = sub_3;
  };
  if (contrato_v_262) {
    sub_28 = false;
  } else {
    sub_28 = sub_5;
  };
  if (contrato_rc1) {
    v_104 = sub_28;
  } else {
    v_104 = sub_19;
  };
  if (contrato_rup1) {
    sub_27 = v_104;
  } else {
    sub_27 = sub_21;
  };
  if (contrato_v_262) {
    v = false;
    sub_30 = sub_5;
  } else {
    v = sub_24;
    sub_30 = false;
  };
  if (contrato_rdown1) {
    v_103 = sub_30;
  } else {
    v_103 = v;
  };
  if (contrato_rc1) {
    sub_29 = v_103;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_v_263) {
    sub_26 = sub_29;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_ck_11_1) {
    v_117 = sub_2;
    v_116 = sub_26;
  } else {
    v_117 = sub_26;
    v_116 = sub_2;
  };
  if (contrato_pjanela) {
    v_118 = v_116;
  } else {
    v_118 = v_117;
  };
  if (contrato_cj) {
    sub_1 = v_118;
  } else {
    sub_1 = sub_2;
  };
  sub_32 = sub_26;
  sub_31 = sub_32;
  if (contrato_ck_9_1) {
    v_120 = sub_1;
    v_119 = sub_31;
  } else {
    v_120 = sub_31;
    v_119 = sub_1;
  };
  if (contrato_pporta) {
    v_121 = v_119;
  } else {
    v_121 = v_120;
  };
  if (contrato_cp) {
    sub_0 = v_121;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cl2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cl1_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_cl1_out* _out) {
  
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
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
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  sub_11 = false;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (contrato_presenca) {
    sub_15 = sub_10;
  } else {
    sub_15 = false;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (contrato_v_262) {
    sub_5 = sub_12;
  } else {
    sub_5 = sub_6;
  };
  if (contrato_rup2) {
    v_141 = false;
  } else {
    v_141 = sub_8;
  };
  if (contrato_rc2) {
    v_142 = v_141;
  } else {
    v_142 = sub_7;
  };
  if (contrato_v_262) {
    sub_17 = v_142;
  } else {
    sub_17 = sub_6;
  };
  sub_16 = sub_17;
  if (contrato_rc1) {
    v_143 = sub_5;
  } else {
    v_143 = sub_16;
  };
  sub_18 = sub_16;
  if (contrato_rup1) {
    sub_4 = v_143;
  } else {
    sub_4 = sub_18;
  };
  if (contrato_rup2) {
    v_137 = false;
  } else {
    v_137 = sub_14;
  };
  if (contrato_rc2) {
    v_138 = v_137;
  } else {
    v_138 = sub_13;
  };
  if (contrato_v_262) {
    sub_20 = sub_6;
  } else {
    sub_20 = sub_12;
  };
  if (contrato_rdown2) {
    sub_22 = sub_9;
  } else {
    sub_22 = false;
  };
  if (contrato_rc2) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_7;
  };
  if (contrato_v_262) {
    v_139 = v_138;
  } else {
    v_139 = sub_21;
  };
  if (contrato_rdown1) {
    v_140 = sub_20;
  } else {
    v_140 = v_139;
  };
  if (contrato_rc1) {
    sub_19 = v_140;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_v_263) {
    sub_3 = sub_19;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_262) {
    sub_25 = false;
  } else {
    sub_25 = sub_6;
  };
  if (contrato_rc1) {
    v_136 = sub_25;
  } else {
    v_136 = sub_16;
  };
  if (contrato_rup1) {
    sub_24 = v_136;
  } else {
    sub_24 = sub_18;
  };
  if (contrato_v_262) {
    v_134 = false;
    sub_27 = sub_6;
  } else {
    v_134 = sub_21;
    sub_27 = false;
  };
  if (contrato_rdown1) {
    v_135 = sub_27;
  } else {
    v_135 = v_134;
  };
  if (contrato_rc1) {
    sub_26 = v_135;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_v_263) {
    sub_23 = sub_26;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_ck_11_1) {
    v_145 = sub_3;
    v_144 = sub_23;
  } else {
    v_145 = sub_23;
    v_144 = sub_3;
  };
  if (contrato_pjanela) {
    v_146 = v_144;
  } else {
    v_146 = v_145;
  };
  if (contrato_cj) {
    sub_2 = v_146;
  } else {
    sub_2 = sub_3;
  };
  sub_29 = sub_23;
  sub_28 = sub_29;
  if (contrato_ck_9_1) {
    v_148 = sub_2;
    v_147 = sub_28;
  } else {
    v_148 = sub_28;
    v_147 = sub_2;
  };
  if (contrato_pporta) {
    v_149 = v_147;
  } else {
    v_149 = v_148;
  };
  if (contrato_cp) {
    sub_1 = v_149;
  } else {
    sub_1 = sub_2;
  };
  sub_39 = true;
  sub_38 = sub_39;
  if (contrato_ck_13_1) {
    sub_40 = sub_11;
  } else {
    sub_40 = sub_39;
  };
  if (contrato_presenca) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_40;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (contrato_presenca) {
    sub_44 = sub_38;
  } else {
    sub_44 = false;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (contrato_v_262) {
    sub_33 = sub_41;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_rup2) {
    v_128 = false;
  } else {
    v_128 = sub_36;
  };
  if (contrato_rc2) {
    v_129 = v_128;
  } else {
    v_129 = sub_35;
  };
  if (contrato_v_262) {
    sub_46 = v_129;
  } else {
    sub_46 = sub_34;
  };
  sub_45 = sub_46;
  if (contrato_rc1) {
    v_130 = sub_33;
  } else {
    v_130 = sub_45;
  };
  sub_47 = sub_45;
  if (contrato_rup1) {
    sub_32 = v_130;
  } else {
    sub_32 = sub_47;
  };
  if (contrato_rup2) {
    v_124 = false;
  } else {
    v_124 = sub_43;
  };
  if (contrato_rc2) {
    v_125 = v_124;
  } else {
    v_125 = sub_42;
  };
  if (contrato_v_262) {
    sub_49 = sub_34;
  } else {
    sub_49 = sub_41;
  };
  if (contrato_rdown2) {
    sub_51 = sub_37;
  } else {
    sub_51 = false;
  };
  if (contrato_rc2) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_35;
  };
  if (contrato_v_262) {
    v_126 = v_125;
  } else {
    v_126 = sub_50;
  };
  if (contrato_rdown1) {
    v_127 = sub_49;
  } else {
    v_127 = v_126;
  };
  if (contrato_rc1) {
    sub_48 = v_127;
  } else {
    sub_48 = sub_49;
  };
  if (contrato_v_263) {
    sub_31 = sub_48;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_v_262) {
    sub_54 = false;
  } else {
    sub_54 = sub_34;
  };
  if (contrato_rc1) {
    v_123 = sub_54;
  } else {
    v_123 = sub_45;
  };
  if (contrato_rup1) {
    sub_53 = v_123;
  } else {
    sub_53 = sub_47;
  };
  if (contrato_v_262) {
    v = false;
    sub_56 = sub_34;
  } else {
    v = sub_50;
    sub_56 = false;
  };
  if (contrato_rdown1) {
    v_122 = sub_56;
  } else {
    v_122 = v;
  };
  if (contrato_rc1) {
    sub_55 = v_122;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_v_263) {
    sub_52 = sub_55;
  } else {
    sub_52 = sub_53;
  };
  if (contrato_ck_11_1) {
    v_132 = sub_31;
    v_131 = sub_52;
  } else {
    v_132 = sub_52;
    v_131 = sub_31;
  };
  if (contrato_pjanela) {
    v_133 = v_131;
  } else {
    v_133 = v_132;
  };
  if (contrato_cj) {
    sub_30 = v_133;
  } else {
    sub_30 = sub_31;
  };
  sub_58 = sub_52;
  sub_57 = sub_58;
  if (contrato_ck_9_1) {
    v_151 = sub_30;
    v_150 = sub_57;
  } else {
    v_151 = sub_57;
    v_150 = sub_30;
  };
  if (contrato_pporta) {
    v_152 = v_150;
  } else {
    v_152 = v_151;
  };
  if (contrato_cp) {
    v_153 = v_152;
  } else {
    v_153 = sub_30;
  };
  if (p_contrato_cl1) {
    sub_0 = v_153;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cl1 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_rc2_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_rc2_out* _out) {
  
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
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
  sub_10 = p_contrato_rc2;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (contrato_presenca) {
    sub_13 = sub_8;
  } else {
    sub_13 = false;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (contrato_v_262) {
    sub_4 = sub_11;
  } else {
    sub_4 = sub_5;
  };
  sub_18 = false;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (contrato_rup2) {
    v_159 = sub_16;
  } else {
    v_159 = sub_6;
  };
  if (contrato_v_262) {
    sub_15 = v_159;
  } else {
    sub_15 = sub_5;
  };
  sub_14 = sub_15;
  if (contrato_rc1) {
    v_160 = sub_4;
  } else {
    v_160 = sub_14;
  };
  sub_19 = sub_14;
  if (contrato_rup1) {
    sub_3 = v_160;
  } else {
    sub_3 = sub_19;
  };
  if (contrato_v_262) {
    sub_21 = sub_5;
  } else {
    sub_21 = sub_11;
  };
  if (contrato_rdown2) {
    sub_23 = sub_7;
  } else {
    sub_23 = sub_16;
  };
  sub_22 = sub_23;
  if (contrato_presenca) {
    sub_24 = sub_17;
  } else {
    sub_24 = false;
  };
  if (contrato_rup2) {
    v_156 = sub_24;
  } else {
    v_156 = sub_12;
  };
  if (contrato_v_262) {
    v_157 = v_156;
  } else {
    v_157 = sub_22;
  };
  if (contrato_rdown1) {
    v_158 = sub_21;
  } else {
    v_158 = v_157;
  };
  if (contrato_rc1) {
    sub_20 = v_158;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_v_263) {
    sub_2 = sub_20;
  } else {
    sub_2 = sub_3;
  };
  if (contrato_v_262) {
    sub_27 = false;
  } else {
    sub_27 = sub_5;
  };
  if (contrato_rc1) {
    v_155 = sub_27;
  } else {
    v_155 = sub_14;
  };
  if (contrato_rup1) {
    sub_26 = v_155;
  } else {
    sub_26 = sub_19;
  };
  if (contrato_v_262) {
    v = false;
    sub_29 = sub_5;
  } else {
    v = sub_22;
    sub_29 = false;
  };
  if (contrato_rdown1) {
    v_154 = sub_29;
  } else {
    v_154 = v;
  };
  if (contrato_rc1) {
    sub_28 = v_154;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_v_263) {
    sub_25 = sub_28;
  } else {
    sub_25 = sub_26;
  };
  if (contrato_ck_11_1) {
    v_162 = sub_2;
    v_161 = sub_25;
  } else {
    v_162 = sub_25;
    v_161 = sub_2;
  };
  if (contrato_pjanela) {
    v_163 = v_161;
  } else {
    v_163 = v_162;
  };
  if (contrato_cj) {
    sub_1 = v_163;
  } else {
    sub_1 = sub_2;
  };
  sub_31 = sub_25;
  sub_30 = sub_31;
  if (contrato_ck_9_1) {
    v_165 = sub_1;
    v_164 = sub_30;
  } else {
    v_165 = sub_30;
    v_164 = sub_1;
  };
  if (contrato_pporta) {
    v_166 = v_164;
  } else {
    v_166 = v_165;
  };
  if (contrato_cp) {
    sub_0 = v_166;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_rc2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_rc1_step(int contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_pporta,
                                                                int contrato_pjanela,
                                                                int contrato_rup1,
                                                                int contrato_rdown1,
                                                                int contrato_rup2,
                                                                int contrato_rdown2,
                                                                int contrato_presenca,
                                                                int contrato_bl,
                                                                int contrato_bt,
                                                                int contrato_v_263,
                                                                int contrato_v_262,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_3,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_2,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_1,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                Contrato_controller__contrato_controller_contrato_rc1_out* _out) {
  
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
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
  sub_10 = p_contrato_rc1;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_15 = false;
  sub_14 = sub_15;
  if (contrato_presenca) {
    sub_13 = sub_8;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (contrato_v_262) {
    sub_4 = sub_11;
  } else {
    sub_4 = sub_5;
  };
  sub_16 = sub_5;
  if (contrato_rup1) {
    sub_3 = sub_4;
  } else {
    sub_3 = sub_16;
  };
  if (contrato_presenca) {
    sub_20 = sub_8;
  } else {
    sub_20 = false;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (contrato_v_262) {
    v_168 = sub_5;
  } else {
    v_168 = sub_18;
  };
  sub_25 = true;
  sub_24 = sub_25;
  if (contrato_presenca) {
    sub_23 = sub_8;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (contrato_v_262) {
    v_169 = sub_11;
  } else {
    v_169 = sub_21;
  };
  if (contrato_rdown1) {
    sub_17 = v_168;
  } else {
    sub_17 = v_169;
  };
  if (contrato_v_263) {
    sub_2 = sub_17;
  } else {
    sub_2 = sub_3;
  };
  sub_31 = sub_14;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (contrato_v_262) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_5;
  };
  if (contrato_rup1) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_16;
  };
  if (contrato_v_262) {
    v = sub_5;
  } else {
    v = false;
  };
  sub_35 = sub_24;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (contrato_v_262) {
    v_167 = sub_29;
  } else {
    v_167 = sub_33;
  };
  if (contrato_rdown1) {
    sub_32 = v;
  } else {
    sub_32 = v_167;
  };
  if (contrato_v_263) {
    sub_26 = sub_32;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_ck_11_1) {
    v_171 = sub_2;
    v_170 = sub_26;
  } else {
    v_171 = sub_26;
    v_170 = sub_2;
  };
  if (contrato_pjanela) {
    v_172 = v_170;
  } else {
    v_172 = v_171;
  };
  if (contrato_cj) {
    sub_1 = v_172;
  } else {
    sub_1 = sub_2;
  };
  sub_37 = sub_26;
  sub_36 = sub_37;
  if (contrato_ck_9_1) {
    v_174 = sub_1;
    v_173 = sub_36;
  } else {
    v_174 = sub_36;
    v_173 = sub_1;
  };
  if (contrato_pporta) {
    v_175 = v_173;
  } else {
    v_175 = v_174;
  };
  if (contrato_cp) {
    sub_0 = v_175;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_rc1 = sub_0;;
}

void Contrato_controller__contrato_controller_step(int contrato_cj,
                                                   int contrato_cp,
                                                   int contrato_pporta,
                                                   int contrato_pjanela,
                                                   int contrato_rup1,
                                                   int contrato_rdown1,
                                                   int contrato_rup2,
                                                   int contrato_rdown2,
                                                   int contrato_presenca,
                                                   int contrato_bl,
                                                   int contrato_bt,
                                                   int contrato_v_263,
                                                   int contrato_v_262,
                                                   int contrato_pnr_5,
                                                   int contrato_ck_9_1,
                                                   int contrato_pnr_4,
                                                   int contrato_ck_11_1,
                                                   int contrato_pnr_3,
                                                   int contrato_ck_13_1,
                                                   int contrato_pnr_2,
                                                   int contrato_ck_15_1,
                                                   int contrato_pnr_1,
                                                   int contrato_ck_17_1,
                                                   int contrato_pnr,
                                                   int p_contrato_ct2,
                                                   int p_contrato_ct1,
                                                   int p_contrato_cl2,
                                                   int p_contrato_cl1,
                                                   int p_contrato_rc2,
                                                   int p_contrato_rc1,
                                                   Contrato_controller__contrato_controller_out* _out) {
  Contrato_controller__contrato_controller_contrato_cl1_out Contrato_controller__contrato_controller_contrato_cl1_out_st;
  Contrato_controller__contrato_controller_contrato_cl2_out Contrato_controller__contrato_controller_contrato_cl2_out_st;
  Contrato_controller__contrato_controller_contrato_rc1_out Contrato_controller__contrato_controller_contrato_rc1_out_st;
  Contrato_controller__contrato_controller_contrato_ct2_out Contrato_controller__contrato_controller_contrato_ct2_out_st;
  Contrato_controller__contrato_controller_contrato_rc2_out Contrato_controller__contrato_controller_contrato_rc2_out_st;
  Contrato_controller__contrato_controller_contrato_ct1_out Contrato_controller__contrato_controller_contrato_ct1_out_st;
  Contrato_controller__contrato_controller_contrato_rc1_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_rc1_out_st);
  _out->contrato_rc1 = Contrato_controller__contrato_controller_contrato_rc1_out_st.contrato_rc1;
  Contrato_controller__contrato_controller_contrato_rc2_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             _out->contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_rc2_out_st);
  _out->contrato_rc2 = Contrato_controller__contrato_controller_contrato_rc2_out_st.contrato_rc2;
  Contrato_controller__contrato_controller_contrato_cl1_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_cl1_out_st);
  _out->contrato_cl1 = Contrato_controller__contrato_controller_contrato_cl1_out_st.contrato_cl1;
  Contrato_controller__contrato_controller_contrato_cl2_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_cl2_out_st);
  _out->contrato_cl2 = Contrato_controller__contrato_controller_contrato_cl2_out_st.contrato_cl2;
  Contrato_controller__contrato_controller_contrato_ct1_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             _out->contrato_cl2,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_ct1_out_st);
  _out->contrato_ct1 = Contrato_controller__contrato_controller_contrato_ct1_out_st.contrato_ct1;
  Contrato_controller__contrato_controller_contrato_ct2_step(contrato_cj,
                                                             contrato_cp,
                                                             contrato_pporta,
                                                             contrato_pjanela,
                                                             contrato_rup1,
                                                             contrato_rdown1,
                                                             contrato_rup2,
                                                             contrato_rdown2,
                                                             contrato_presenca,
                                                             contrato_bl,
                                                             contrato_bt,
                                                             contrato_v_263,
                                                             contrato_v_262,
                                                             contrato_pnr_5,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_3,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_2,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_1,
                                                             contrato_ck_17_1,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             _out->contrato_ct1,
                                                             _out->contrato_cl2,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             &Contrato_controller__contrato_controller_contrato_ct2_out_st);
  _out->contrato_ct2 = Contrato_controller__contrato_controller_contrato_ct2_out_st.contrato_ct2;
}

