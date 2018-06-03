/* --- Generated the 3/6/2018 at 13:56 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contrato_controller.h"

void Contrato_controller__contrato_controller_contrato_ct2_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_ct1,
                                                                int contrato_cl2,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
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
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (contrato_botao_tv) {
    v_33 = sub_14;
    sub_25 = false;
  } else {
    v_33 = false;
    sub_25 = sub_14;
  };
  if (contrato_ck_15_1) {
    sub_24 = v_33;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_ct1) {
    sub_12 = sub_13;
  } else {
    sub_12 = sub_24;
  };
  sub_26 = sub_13;
  if (contrato_ck_13_1) {
    v_35 = sub_12;
    sub_11 = sub_26;
  } else {
    v_35 = sub_26;
    sub_11 = sub_12;
  };
  if (contrato_botao_lamp) {
    v_36 = sub_11;
  } else {
    v_36 = v_35;
  };
  if (contrato_cl1) {
    v_37 = sub_26;
    v_34 = sub_11;
  } else {
    v_37 = v_36;
    v_34 = sub_12;
  };
  if (contrato_cl2) {
    sub_10 = v_34;
  } else {
    sub_10 = v_37;
  };
  sub_40 = true;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (contrato_botao_tv) {
    v_31 = sub_31;
  } else {
    v_31 = sub_14;
  };
  sub_30 = sub_31;
  if (contrato_ck_15_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_botao_tv) {
    sub_41 = sub_14;
  } else {
    sub_41 = sub_31;
  };
  if (contrato_ck_15_1) {
    v_32 = v_31;
  } else {
    v_32 = sub_41;
  };
  if (contrato_ct1) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_32;
  };
  if (contrato_ck_13_1) {
    v_39 = sub_28;
    sub_27 = false;
  } else {
    v_39 = false;
    sub_27 = sub_28;
  };
  if (contrato_botao_lamp) {
    v_40 = sub_27;
  } else {
    v_40 = v_39;
  };
  if (contrato_cl1) {
    v_41 = false;
    v_38 = sub_27;
  } else {
    v_41 = v_40;
    v_38 = sub_28;
  };
  if (contrato_cl2) {
    v_42 = v_38;
  } else {
    v_42 = v_41;
  };
  if (contrato_presenca) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_42;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (contrato_presenca) {
    sub_45 = sub_10;
  } else {
    sub_45 = false;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (contrato_v_427) {
    v_43 = sub_42;
  } else {
    v_43 = sub_6;
  };
  if (contrato_rad_up2) {
    sub_47 = false;
  } else {
    sub_47 = sub_9;
  };
  if (contrato_rc2) {
    v_30 = sub_47;
  } else {
    v_30 = sub_7;
  };
  if (contrato_v_427) {
    sub_46 = v_30;
  } else {
    sub_46 = sub_6;
  };
  if (contrato_rad_up1) {
    v_44 = v_43;
  } else {
    v_44 = sub_46;
  };
  if (contrato_rc1) {
    sub_5 = v_44;
  } else {
    sub_5 = sub_46;
  };
  sub_4 = sub_5;
  if (contrato_v_427) {
    sub_49 = sub_6;
  } else {
    sub_49 = sub_42;
  };
  sub_48 = sub_49;
  if (contrato_rad_down2) {
    v_29 = sub_8;
  } else {
    v_29 = false;
  };
  if (contrato_rc2) {
    sub_51 = v_29;
  } else {
    sub_51 = sub_7;
  };
  if (contrato_rad_up2) {
    sub_53 = false;
  } else {
    sub_53 = sub_45;
  };
  if (contrato_rc2) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_43;
  };
  if (contrato_v_427) {
    sub_50 = sub_52;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_rc1) {
    v_45 = sub_50;
  } else {
    v_45 = sub_48;
  };
  if (contrato_rad_down1) {
    v_46 = sub_48;
  } else {
    v_46 = v_45;
  };
  if (contrato_v_428) {
    sub_3 = v_46;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_427) {
    v_25 = false;
    sub_57 = sub_52;
  } else {
    v_25 = sub_42;
    sub_57 = sub_42;
  };
  if (contrato_rad_up1) {
    v_26 = v_25;
  } else {
    v_26 = sub_57;
  };
  if (contrato_rc1) {
    sub_56 = v_26;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  if (contrato_v_427) {
    sub_59 = sub_42;
  } else {
    sub_59 = false;
  };
  sub_58 = sub_59;
  if (contrato_rad_down2) {
    v_24 = sub_44;
  } else {
    v_24 = false;
  };
  if (contrato_rc2) {
    sub_61 = v_24;
  } else {
    sub_61 = sub_43;
  };
  if (contrato_v_427) {
    sub_60 = false;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_rc1) {
    v_27 = sub_60;
  } else {
    v_27 = sub_58;
  };
  if (contrato_rad_down1) {
    v_28 = sub_58;
  } else {
    v_28 = v_27;
  };
  if (contrato_v_428) {
    sub_54 = v_28;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_ck_11_1) {
    v_48 = sub_3;
    v_47 = sub_54;
  } else {
    v_48 = sub_54;
    v_47 = sub_3;
  };
  if (contrato_push_janela) {
    v_49 = v_47;
  } else {
    v_49 = v_48;
  };
  if (contrato_cj) {
    sub_2 = v_49;
  } else {
    sub_2 = sub_3;
  };
  sub_63 = sub_54;
  sub_62 = sub_63;
  if (contrato_ck_9_1) {
    v_51 = sub_2;
    v_50 = sub_62;
  } else {
    v_51 = sub_62;
    v_50 = sub_2;
  };
  if (contrato_push_porta) {
    v_52 = v_50;
  } else {
    v_52 = v_51;
  };
  if (contrato_cp) {
    sub_1 = v_52;
  } else {
    sub_1 = sub_2;
  };
  if (contrato_ck_15_1) {
    v_7 = sub_30;
  } else {
    v_7 = sub_13;
  };
  if (contrato_ct1) {
    sub_74 = v_7;
  } else {
    sub_74 = sub_24;
  };
  sub_75 = sub_30;
  if (contrato_ck_13_1) {
    v_9 = sub_74;
    sub_73 = sub_75;
  } else {
    v_9 = sub_75;
    sub_73 = sub_74;
  };
  if (contrato_botao_lamp) {
    v_10 = sub_73;
  } else {
    v_10 = v_9;
  };
  if (contrato_cl1) {
    v_11 = sub_75;
    v_8 = sub_73;
  } else {
    v_11 = v_10;
    v_8 = sub_74;
  };
  if (contrato_cl2) {
    sub_72 = v_8;
  } else {
    sub_72 = v_11;
  };
  if (contrato_ct1) {
    sub_77 = sub_29;
  } else {
    sub_77 = sub_30;
  };
  if (contrato_ck_13_1) {
    v_13 = sub_77;
    sub_76 = false;
  } else {
    v_13 = false;
    sub_76 = sub_77;
  };
  if (contrato_botao_lamp) {
    v_14 = sub_76;
  } else {
    v_14 = v_13;
  };
  if (contrato_cl1) {
    v_15 = false;
    v_12 = sub_76;
  } else {
    v_15 = v_14;
    v_12 = sub_77;
  };
  if (contrato_cl2) {
    v_16 = v_12;
  } else {
    v_16 = v_15;
  };
  if (contrato_presenca) {
    sub_71 = sub_72;
  } else {
    sub_71 = v_16;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (contrato_presenca) {
    sub_81 = sub_72;
  } else {
    sub_81 = false;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (contrato_v_427) {
    v_17 = sub_78;
  } else {
    v_17 = sub_68;
  };
  if (contrato_rad_up2) {
    sub_83 = false;
  } else {
    sub_83 = sub_71;
  };
  if (contrato_rc2) {
    v_6 = sub_83;
  } else {
    v_6 = sub_69;
  };
  if (contrato_v_427) {
    sub_82 = v_6;
  } else {
    sub_82 = sub_68;
  };
  if (contrato_rad_up1) {
    v_18 = v_17;
  } else {
    v_18 = sub_82;
  };
  if (contrato_rc1) {
    sub_67 = v_18;
  } else {
    sub_67 = sub_82;
  };
  sub_66 = sub_67;
  if (contrato_v_427) {
    sub_85 = sub_68;
  } else {
    sub_85 = sub_78;
  };
  sub_84 = sub_85;
  if (contrato_rad_down2) {
    v_5 = sub_70;
  } else {
    v_5 = false;
  };
  if (contrato_rc2) {
    sub_87 = v_5;
  } else {
    sub_87 = sub_69;
  };
  if (contrato_rad_up2) {
    sub_89 = false;
  } else {
    sub_89 = sub_81;
  };
  if (contrato_rc2) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_79;
  };
  if (contrato_v_427) {
    sub_86 = sub_88;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_rc1) {
    v_19 = sub_86;
  } else {
    v_19 = sub_84;
  };
  if (contrato_rad_down1) {
    v_20 = sub_84;
  } else {
    v_20 = v_19;
  };
  if (contrato_v_428) {
    sub_65 = v_20;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_v_427) {
    v_1 = false;
    sub_93 = sub_88;
  } else {
    v_1 = sub_78;
    sub_93 = sub_78;
  };
  if (contrato_rad_up1) {
    v_2 = v_1;
  } else {
    v_2 = sub_93;
  };
  if (contrato_rc1) {
    sub_92 = v_2;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  if (contrato_v_427) {
    sub_95 = sub_78;
  } else {
    sub_95 = false;
  };
  sub_94 = sub_95;
  if (contrato_rad_down2) {
    v = sub_80;
  } else {
    v = false;
  };
  if (contrato_rc2) {
    sub_97 = v;
  } else {
    sub_97 = sub_79;
  };
  if (contrato_v_427) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  if (contrato_rc1) {
    v_3 = sub_96;
  } else {
    v_3 = sub_94;
  };
  if (contrato_rad_down1) {
    v_4 = sub_94;
  } else {
    v_4 = v_3;
  };
  if (contrato_v_428) {
    sub_90 = v_4;
  } else {
    sub_90 = sub_91;
  };
  if (contrato_ck_11_1) {
    v_22 = sub_65;
    v_21 = sub_90;
  } else {
    v_22 = sub_90;
    v_21 = sub_65;
  };
  if (contrato_push_janela) {
    v_23 = v_21;
  } else {
    v_23 = v_22;
  };
  if (contrato_cj) {
    sub_64 = v_23;
  } else {
    sub_64 = sub_65;
  };
  sub_99 = sub_90;
  sub_98 = sub_99;
  if (contrato_ck_9_1) {
    v_54 = sub_64;
    v_53 = sub_98;
  } else {
    v_54 = sub_98;
    v_53 = sub_64;
  };
  if (contrato_push_porta) {
    v_55 = v_53;
  } else {
    v_55 = v_54;
  };
  if (contrato_cp) {
    v_56 = v_55;
  } else {
    v_56 = sub_64;
  };
  if (p_contrato_ct2) {
    sub_0 = v_56;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_ct2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_ct1_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_cl2,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_ct1_out* _out) {
  
  int v_105;
  int v_104;
  int v_103;
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
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  sub_23 = true;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_33 = false;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (contrato_botao_tv) {
    v_82 = sub_24;
    sub_13 = sub_14;
  } else {
    v_82 = sub_14;
    sub_13 = sub_24;
  };
  if (contrato_ck_15_1) {
    sub_12 = v_82;
  } else {
    sub_12 = sub_13;
  };
  sub_34 = sub_24;
  if (contrato_ck_13_1) {
    v_88 = sub_34;
    v_84 = sub_12;
    sub_11 = sub_34;
  } else {
    v_88 = false;
    v_84 = sub_34;
    sub_11 = sub_12;
  };
  if (contrato_botao_lamp) {
    v_85 = sub_11;
  } else {
    v_85 = v_84;
  };
  if (contrato_cl1) {
    v_83 = sub_11;
  } else {
    v_83 = sub_12;
  };
  sub_35 = sub_34;
  if (contrato_cl1) {
    v_86 = sub_35;
  } else {
    v_86 = v_85;
  };
  if (contrato_cl2) {
    sub_10 = v_83;
  } else {
    sub_10 = v_86;
  };
  if (contrato_ck_13_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_34;
  };
  if (contrato_botao_lamp) {
    v_89 = sub_36;
  } else {
    v_89 = v_88;
  };
  if (contrato_cl1) {
    v_90 = false;
    v_87 = sub_36;
  } else {
    v_90 = v_89;
    v_87 = sub_35;
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
    sub_40 = sub_10;
  } else {
    sub_40 = false;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (contrato_v_427) {
    v_92 = sub_37;
  } else {
    v_92 = sub_6;
  };
  if (contrato_rad_up2) {
    sub_42 = false;
  } else {
    sub_42 = sub_9;
  };
  if (contrato_rc2) {
    v_81 = sub_42;
  } else {
    v_81 = sub_7;
  };
  if (contrato_v_427) {
    sub_41 = v_81;
  } else {
    sub_41 = sub_6;
  };
  if (contrato_rad_up1) {
    v_93 = v_92;
  } else {
    v_93 = sub_41;
  };
  if (contrato_rc1) {
    sub_5 = v_93;
  } else {
    sub_5 = sub_41;
  };
  sub_4 = sub_5;
  if (contrato_v_427) {
    sub_44 = sub_6;
  } else {
    sub_44 = sub_37;
  };
  sub_43 = sub_44;
  if (contrato_rad_down2) {
    v_80 = sub_8;
  } else {
    v_80 = false;
  };
  if (contrato_rc2) {
    sub_46 = v_80;
  } else {
    sub_46 = sub_7;
  };
  if (contrato_rad_up2) {
    sub_48 = false;
  } else {
    sub_48 = sub_40;
  };
  if (contrato_rc2) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_38;
  };
  if (contrato_v_427) {
    sub_45 = sub_47;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_rc1) {
    v_94 = sub_45;
  } else {
    v_94 = sub_43;
  };
  if (contrato_rad_down1) {
    v_95 = sub_43;
  } else {
    v_95 = v_94;
  };
  if (contrato_v_428) {
    sub_3 = v_95;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_427) {
    v_76 = false;
    sub_52 = sub_47;
  } else {
    v_76 = sub_37;
    sub_52 = sub_37;
  };
  if (contrato_rad_up1) {
    v_77 = v_76;
  } else {
    v_77 = sub_52;
  };
  if (contrato_rc1) {
    sub_51 = v_77;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (contrato_v_427) {
    sub_54 = sub_37;
  } else {
    sub_54 = false;
  };
  sub_53 = sub_54;
  if (contrato_rad_down2) {
    v_75 = sub_39;
  } else {
    v_75 = false;
  };
  if (contrato_rc2) {
    sub_56 = v_75;
  } else {
    sub_56 = sub_38;
  };
  if (contrato_v_427) {
    sub_55 = false;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_rc1) {
    v_78 = sub_55;
  } else {
    v_78 = sub_53;
  };
  if (contrato_rad_down1) {
    v_79 = sub_53;
  } else {
    v_79 = v_78;
  };
  if (contrato_v_428) {
    sub_49 = v_79;
  } else {
    sub_49 = sub_50;
  };
  if (contrato_ck_11_1) {
    v_97 = sub_3;
    v_96 = sub_49;
  } else {
    v_97 = sub_49;
    v_96 = sub_3;
  };
  if (contrato_push_janela) {
    v_98 = v_96;
  } else {
    v_98 = v_97;
  };
  if (contrato_cj) {
    sub_2 = v_98;
  } else {
    sub_2 = sub_3;
  };
  sub_58 = sub_49;
  sub_57 = sub_58;
  if (contrato_ck_9_1) {
    v_100 = sub_2;
    v_99 = sub_57;
  } else {
    v_100 = sub_57;
    v_99 = sub_2;
  };
  if (contrato_push_porta) {
    v_101 = v_99;
  } else {
    v_101 = v_100;
  };
  if (contrato_cp) {
    sub_1 = v_101;
  } else {
    sub_1 = sub_2;
  };
  sub_70 = sub_14;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (contrato_ck_15_1) {
    sub_72 = sub_34;
  } else {
    sub_72 = sub_70;
  };
  if (contrato_ck_13_1) {
    v_64 = sub_72;
    sub_71 = false;
  } else {
    v_64 = false;
    sub_71 = sub_72;
  };
  if (contrato_botao_lamp) {
    v_65 = sub_71;
  } else {
    v_65 = v_64;
  };
  if (contrato_cl1) {
    v_66 = false;
    v_63 = sub_71;
  } else {
    v_66 = v_65;
    v_63 = sub_72;
  };
  if (contrato_cl2) {
    v_67 = v_63;
  } else {
    v_67 = v_66;
  };
  if (contrato_presenca) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_67;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (contrato_presenca) {
    sub_76 = sub_67;
  } else {
    sub_76 = false;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (contrato_v_427) {
    v_68 = sub_73;
  } else {
    v_68 = sub_63;
  };
  if (contrato_rad_up2) {
    sub_78 = false;
  } else {
    sub_78 = sub_66;
  };
  if (contrato_rc2) {
    v_62 = sub_78;
  } else {
    v_62 = sub_64;
  };
  if (contrato_v_427) {
    sub_77 = v_62;
  } else {
    sub_77 = sub_63;
  };
  if (contrato_rad_up1) {
    v_69 = v_68;
  } else {
    v_69 = sub_77;
  };
  if (contrato_rc1) {
    sub_62 = v_69;
  } else {
    sub_62 = sub_77;
  };
  sub_61 = sub_62;
  if (contrato_v_427) {
    sub_80 = sub_63;
  } else {
    sub_80 = sub_73;
  };
  sub_79 = sub_80;
  if (contrato_rad_down2) {
    v_61 = sub_65;
  } else {
    v_61 = false;
  };
  if (contrato_rc2) {
    sub_82 = v_61;
  } else {
    sub_82 = sub_64;
  };
  if (contrato_rad_up2) {
    sub_84 = false;
  } else {
    sub_84 = sub_76;
  };
  if (contrato_rc2) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_74;
  };
  if (contrato_v_427) {
    sub_81 = sub_83;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_rc1) {
    v_70 = sub_81;
  } else {
    v_70 = sub_79;
  };
  if (contrato_rad_down1) {
    v_71 = sub_79;
  } else {
    v_71 = v_70;
  };
  if (contrato_v_428) {
    sub_60 = v_71;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_427) {
    v_57 = false;
    sub_88 = sub_83;
  } else {
    v_57 = sub_73;
    sub_88 = sub_73;
  };
  if (contrato_rad_up1) {
    v_58 = v_57;
  } else {
    v_58 = sub_88;
  };
  if (contrato_rc1) {
    sub_87 = v_58;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  if (contrato_v_427) {
    sub_90 = sub_73;
  } else {
    sub_90 = false;
  };
  sub_89 = sub_90;
  if (contrato_rad_down2) {
    v = sub_75;
  } else {
    v = false;
  };
  if (contrato_rc2) {
    sub_92 = v;
  } else {
    sub_92 = sub_74;
  };
  if (contrato_v_427) {
    sub_91 = false;
  } else {
    sub_91 = sub_92;
  };
  if (contrato_rc1) {
    v_59 = sub_91;
  } else {
    v_59 = sub_89;
  };
  if (contrato_rad_down1) {
    v_60 = sub_89;
  } else {
    v_60 = v_59;
  };
  if (contrato_v_428) {
    sub_85 = v_60;
  } else {
    sub_85 = sub_86;
  };
  if (contrato_ck_11_1) {
    v_73 = sub_60;
    v_72 = sub_85;
  } else {
    v_73 = sub_85;
    v_72 = sub_60;
  };
  if (contrato_push_janela) {
    v_74 = v_72;
  } else {
    v_74 = v_73;
  };
  if (contrato_cj) {
    sub_59 = v_74;
  } else {
    sub_59 = sub_60;
  };
  sub_94 = sub_85;
  sub_93 = sub_94;
  if (contrato_ck_9_1) {
    v_103 = sub_59;
    v_102 = sub_93;
  } else {
    v_103 = sub_93;
    v_102 = sub_59;
  };
  if (contrato_push_porta) {
    v_104 = v_102;
  } else {
    v_104 = v_103;
  };
  if (contrato_cp) {
    v_105 = v_104;
  } else {
    v_105 = sub_59;
  };
  if (p_contrato_ct1) {
    sub_0 = v_105;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_ct1 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cl2_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_cl1,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_cl2_out* _out) {
  
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
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_35 = true;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (contrato_ck_13_1) {
    v_128 = sub_12;
    v_127 = sub_25;
  } else {
    v_128 = sub_25;
    v_127 = sub_12;
  };
  if (contrato_botao_lamp) {
    v_129 = v_127;
  } else {
    v_129 = v_128;
  };
  if (contrato_ck_13_1) {
    sub_24 = false;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  if (contrato_cl1) {
    v_130 = sub_23;
  } else {
    v_130 = v_129;
  };
  if (contrato_presenca) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_130;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (contrato_presenca) {
    sub_39 = sub_10;
  } else {
    sub_39 = false;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (contrato_v_427) {
    v_131 = sub_36;
  } else {
    v_131 = sub_6;
  };
  if (contrato_rad_up2) {
    sub_41 = false;
  } else {
    sub_41 = sub_9;
  };
  if (contrato_rc2) {
    v_126 = sub_41;
  } else {
    v_126 = sub_7;
  };
  if (contrato_v_427) {
    sub_40 = v_126;
  } else {
    sub_40 = sub_6;
  };
  if (contrato_rad_up1) {
    v_132 = v_131;
  } else {
    v_132 = sub_40;
  };
  if (contrato_rc1) {
    sub_5 = v_132;
  } else {
    sub_5 = sub_40;
  };
  sub_4 = sub_5;
  if (contrato_v_427) {
    sub_43 = sub_6;
  } else {
    sub_43 = sub_36;
  };
  sub_42 = sub_43;
  if (contrato_rad_down2) {
    v_125 = sub_8;
  } else {
    v_125 = false;
  };
  if (contrato_rc2) {
    sub_45 = v_125;
  } else {
    sub_45 = sub_7;
  };
  if (contrato_rad_up2) {
    sub_47 = false;
  } else {
    sub_47 = sub_39;
  };
  if (contrato_rc2) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_37;
  };
  if (contrato_v_427) {
    sub_44 = sub_46;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_rc1) {
    v_133 = sub_44;
  } else {
    v_133 = sub_42;
  };
  if (contrato_rad_down1) {
    v_134 = sub_42;
  } else {
    v_134 = v_133;
  };
  if (contrato_v_428) {
    sub_3 = v_134;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_427) {
    v_121 = false;
    sub_51 = sub_46;
  } else {
    v_121 = sub_36;
    sub_51 = sub_36;
  };
  if (contrato_rad_up1) {
    v_122 = v_121;
  } else {
    v_122 = sub_51;
  };
  if (contrato_rc1) {
    sub_50 = v_122;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (contrato_v_427) {
    sub_53 = sub_36;
  } else {
    sub_53 = false;
  };
  sub_52 = sub_53;
  if (contrato_rad_down2) {
    v_120 = sub_38;
  } else {
    v_120 = false;
  };
  if (contrato_rc2) {
    sub_55 = v_120;
  } else {
    sub_55 = sub_37;
  };
  if (contrato_v_427) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_rc1) {
    v_123 = sub_54;
  } else {
    v_123 = sub_52;
  };
  if (contrato_rad_down1) {
    v_124 = sub_52;
  } else {
    v_124 = v_123;
  };
  if (contrato_v_428) {
    sub_48 = v_124;
  } else {
    sub_48 = sub_49;
  };
  if (contrato_ck_11_1) {
    v_136 = sub_3;
    v_135 = sub_48;
  } else {
    v_136 = sub_48;
    v_135 = sub_3;
  };
  if (contrato_push_janela) {
    v_137 = v_135;
  } else {
    v_137 = v_136;
  };
  if (contrato_cj) {
    sub_2 = v_137;
  } else {
    sub_2 = sub_3;
  };
  sub_57 = sub_48;
  sub_56 = sub_57;
  if (contrato_ck_9_1) {
    v_139 = sub_2;
    v_138 = sub_56;
  } else {
    v_139 = sub_56;
    v_138 = sub_2;
  };
  if (contrato_push_porta) {
    v_140 = v_138;
  } else {
    v_140 = v_139;
  };
  if (contrato_cp) {
    sub_1 = v_140;
  } else {
    sub_1 = sub_2;
  };
  sub_67 = sub_25;
  if (contrato_cl1) {
    v_112 = sub_23;
  } else {
    v_112 = sub_67;
  };
  sub_66 = sub_67;
  if (contrato_presenca) {
    sub_65 = sub_66;
  } else {
    sub_65 = v_112;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (contrato_presenca) {
    sub_71 = sub_66;
  } else {
    sub_71 = false;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (contrato_v_427) {
    v_113 = sub_68;
  } else {
    v_113 = sub_62;
  };
  if (contrato_rad_up2) {
    sub_73 = false;
  } else {
    sub_73 = sub_65;
  };
  if (contrato_rc2) {
    v_111 = sub_73;
  } else {
    v_111 = sub_63;
  };
  if (contrato_v_427) {
    sub_72 = v_111;
  } else {
    sub_72 = sub_62;
  };
  if (contrato_rad_up1) {
    v_114 = v_113;
  } else {
    v_114 = sub_72;
  };
  if (contrato_rc1) {
    sub_61 = v_114;
  } else {
    sub_61 = sub_72;
  };
  sub_60 = sub_61;
  if (contrato_v_427) {
    sub_75 = sub_62;
  } else {
    sub_75 = sub_68;
  };
  sub_74 = sub_75;
  if (contrato_rad_down2) {
    v_110 = sub_64;
  } else {
    v_110 = false;
  };
  if (contrato_rc2) {
    sub_77 = v_110;
  } else {
    sub_77 = sub_63;
  };
  if (contrato_rad_up2) {
    sub_79 = false;
  } else {
    sub_79 = sub_71;
  };
  if (contrato_rc2) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_69;
  };
  if (contrato_v_427) {
    sub_76 = sub_78;
  } else {
    sub_76 = sub_77;
  };
  if (contrato_rc1) {
    v_115 = sub_76;
  } else {
    v_115 = sub_74;
  };
  if (contrato_rad_down1) {
    v_116 = sub_74;
  } else {
    v_116 = v_115;
  };
  if (contrato_v_428) {
    sub_59 = v_116;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_v_427) {
    v_106 = false;
    sub_83 = sub_78;
  } else {
    v_106 = sub_68;
    sub_83 = sub_68;
  };
  if (contrato_rad_up1) {
    v_107 = v_106;
  } else {
    v_107 = sub_83;
  };
  if (contrato_rc1) {
    sub_82 = v_107;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  if (contrato_v_427) {
    sub_85 = sub_68;
  } else {
    sub_85 = false;
  };
  sub_84 = sub_85;
  if (contrato_rad_down2) {
    v = sub_70;
  } else {
    v = false;
  };
  if (contrato_rc2) {
    sub_87 = v;
  } else {
    sub_87 = sub_69;
  };
  if (contrato_v_427) {
    sub_86 = false;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_rc1) {
    v_108 = sub_86;
  } else {
    v_108 = sub_84;
  };
  if (contrato_rad_down1) {
    v_109 = sub_84;
  } else {
    v_109 = v_108;
  };
  if (contrato_v_428) {
    sub_80 = v_109;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_ck_11_1) {
    v_118 = sub_59;
    v_117 = sub_80;
  } else {
    v_118 = sub_80;
    v_117 = sub_59;
  };
  if (contrato_push_janela) {
    v_119 = v_117;
  } else {
    v_119 = v_118;
  };
  if (contrato_cj) {
    sub_58 = v_119;
  } else {
    sub_58 = sub_59;
  };
  sub_89 = sub_80;
  sub_88 = sub_89;
  if (contrato_ck_9_1) {
    v_142 = sub_58;
    v_141 = sub_88;
  } else {
    v_142 = sub_88;
    v_141 = sub_58;
  };
  if (contrato_push_porta) {
    v_143 = v_141;
  } else {
    v_143 = v_142;
  };
  if (contrato_cp) {
    v_144 = v_143;
  } else {
    v_144 = sub_58;
  };
  if (p_contrato_cl2) {
    sub_0 = v_144;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cl2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cl1_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_rc2,
                                                                int contrato_rc1,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_cl1_out* _out) {
  
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
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
  sub_21 = false;
  if (p_contrato_cl1) {
    sub_20 = true;
  } else {
    sub_20 = sub_21;
  };
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_31 = sub_21;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (contrato_ck_13_1) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_10;
  };
  if (contrato_presenca) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_22;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (contrato_presenca) {
    sub_35 = sub_9;
  } else {
    sub_35 = false;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (contrato_v_427) {
    v_151 = sub_32;
  } else {
    v_151 = sub_5;
  };
  if (contrato_rad_up2) {
    sub_37 = false;
  } else {
    sub_37 = sub_8;
  };
  if (contrato_rc2) {
    v_150 = sub_37;
  } else {
    v_150 = sub_6;
  };
  if (contrato_v_427) {
    sub_36 = v_150;
  } else {
    sub_36 = sub_5;
  };
  if (contrato_rad_up1) {
    v_152 = v_151;
  } else {
    v_152 = sub_36;
  };
  if (contrato_rc1) {
    sub_4 = v_152;
  } else {
    sub_4 = sub_36;
  };
  sub_3 = sub_4;
  if (contrato_v_427) {
    sub_39 = sub_5;
  } else {
    sub_39 = sub_32;
  };
  sub_38 = sub_39;
  if (contrato_rad_down2) {
    v_149 = sub_7;
  } else {
    v_149 = false;
  };
  if (contrato_rc2) {
    sub_41 = v_149;
  } else {
    sub_41 = sub_6;
  };
  if (contrato_rad_up2) {
    sub_43 = false;
  } else {
    sub_43 = sub_35;
  };
  if (contrato_rc2) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_33;
  };
  if (contrato_v_427) {
    sub_40 = sub_42;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_rc1) {
    v_153 = sub_40;
  } else {
    v_153 = sub_38;
  };
  if (contrato_rad_down1) {
    v_154 = sub_38;
  } else {
    v_154 = v_153;
  };
  if (contrato_v_428) {
    sub_2 = v_154;
  } else {
    sub_2 = sub_3;
  };
  if (contrato_v_427) {
    v_145 = false;
    sub_47 = sub_42;
  } else {
    v_145 = sub_32;
    sub_47 = sub_32;
  };
  if (contrato_rad_up1) {
    v_146 = v_145;
  } else {
    v_146 = sub_47;
  };
  if (contrato_rc1) {
    sub_46 = v_146;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  if (contrato_v_427) {
    sub_49 = sub_32;
  } else {
    sub_49 = false;
  };
  sub_48 = sub_49;
  if (contrato_rad_down2) {
    v = sub_34;
  } else {
    v = false;
  };
  if (contrato_rc2) {
    sub_51 = v;
  } else {
    sub_51 = sub_33;
  };
  if (contrato_v_427) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_rc1) {
    v_147 = sub_50;
  } else {
    v_147 = sub_48;
  };
  if (contrato_rad_down1) {
    v_148 = sub_48;
  } else {
    v_148 = v_147;
  };
  if (contrato_v_428) {
    sub_44 = v_148;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_ck_11_1) {
    v_156 = sub_2;
    v_155 = sub_44;
  } else {
    v_156 = sub_44;
    v_155 = sub_2;
  };
  if (contrato_push_janela) {
    v_157 = v_155;
  } else {
    v_157 = v_156;
  };
  if (contrato_cj) {
    sub_1 = v_157;
  } else {
    sub_1 = sub_2;
  };
  sub_53 = sub_44;
  sub_52 = sub_53;
  if (contrato_ck_9_1) {
    v_159 = sub_1;
    v_158 = sub_52;
  } else {
    v_159 = sub_52;
    v_158 = sub_1;
  };
  if (contrato_push_porta) {
    v_160 = v_158;
  } else {
    v_160 = v_159;
  };
  if (contrato_cp) {
    sub_0 = v_160;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cl1 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_rc2_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_rc1,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_rc2_out* _out) {
  
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
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
  int sub_72;
  int sub_73;
  int sub_74;
  sub_21 = false;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (contrato_presenca) {
    sub_24 = sub_10;
  } else {
    sub_24 = false;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (contrato_v_427) {
    sub_6 = sub_22;
  } else {
    sub_6 = sub_7;
  };
  if (contrato_rad_up1) {
    v_174 = sub_6;
  } else {
    v_174 = sub_7;
  };
  if (contrato_rc1) {
    sub_5 = v_174;
  } else {
    sub_5 = sub_7;
  };
  sub_4 = sub_5;
  if (contrato_v_427) {
    sub_26 = sub_7;
  } else {
    sub_26 = sub_22;
  };
  sub_25 = sub_26;
  if (contrato_rc1) {
    v_175 = sub_6;
  } else {
    v_175 = sub_25;
  };
  if (contrato_rad_down1) {
    v_176 = sub_25;
  } else {
    v_176 = v_175;
  };
  if (contrato_v_428) {
    sub_3 = v_176;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_427) {
    sub_30 = false;
  } else {
    sub_30 = sub_22;
  };
  if (contrato_rad_up1) {
    v_171 = sub_30;
  } else {
    v_171 = sub_22;
  };
  if (contrato_rc1) {
    sub_29 = v_171;
  } else {
    sub_29 = sub_22;
  };
  sub_28 = sub_29;
  if (contrato_v_427) {
    sub_32 = sub_22;
  } else {
    sub_32 = false;
  };
  sub_31 = sub_32;
  if (contrato_rc1) {
    v_172 = sub_30;
  } else {
    v_172 = sub_31;
  };
  if (contrato_rad_down1) {
    v_173 = sub_31;
  } else {
    v_173 = v_172;
  };
  if (contrato_v_428) {
    sub_27 = v_173;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_ck_11_1) {
    v_178 = sub_3;
    v_177 = sub_27;
  } else {
    v_178 = sub_27;
    v_177 = sub_3;
  };
  if (contrato_push_janela) {
    v_179 = v_177;
  } else {
    v_179 = v_178;
  };
  if (contrato_cj) {
    sub_2 = v_179;
  } else {
    sub_2 = sub_3;
  };
  sub_34 = sub_27;
  sub_33 = sub_34;
  if (contrato_ck_9_1) {
    v_181 = sub_2;
    v_180 = sub_33;
  } else {
    v_181 = sub_33;
    v_180 = sub_2;
  };
  if (contrato_push_porta) {
    v_182 = v_180;
  } else {
    v_182 = v_181;
  };
  if (contrato_cp) {
    sub_1 = v_182;
  } else {
    sub_1 = sub_2;
  };
  sub_53 = true;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (contrato_presenca) {
    sub_56 = sub_42;
  } else {
    sub_56 = false;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (contrato_v_427) {
    v_164 = sub_54;
  } else {
    v_164 = sub_39;
  };
  if (contrato_rad_up2) {
    sub_58 = sub_9;
  } else {
    sub_58 = sub_41;
  };
  if (contrato_v_427) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_39;
  };
  if (contrato_rad_up1) {
    v_165 = v_164;
  } else {
    v_165 = sub_57;
  };
  if (contrato_rc1) {
    sub_38 = v_165;
  } else {
    sub_38 = sub_57;
  };
  sub_37 = sub_38;
  if (contrato_v_427) {
    sub_60 = sub_39;
  } else {
    sub_60 = sub_54;
  };
  sub_59 = sub_60;
  if (contrato_rad_down2) {
    sub_62 = sub_40;
  } else {
    sub_62 = sub_8;
  };
  if (contrato_rad_up2) {
    sub_64 = sub_24;
  } else {
    sub_64 = sub_56;
  };
  sub_63 = sub_64;
  if (contrato_v_427) {
    sub_61 = sub_63;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_rc1) {
    v_166 = sub_61;
  } else {
    v_166 = sub_59;
  };
  if (contrato_rad_down1) {
    v_167 = sub_59;
  } else {
    v_167 = v_166;
  };
  if (contrato_v_428) {
    sub_36 = v_167;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_v_427) {
    v = false;
    sub_68 = sub_63;
  } else {
    v = sub_54;
    sub_68 = sub_54;
  };
  if (contrato_rad_up1) {
    v_161 = v;
  } else {
    v_161 = sub_68;
  };
  if (contrato_rc1) {
    sub_67 = v_161;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (contrato_v_427) {
    sub_70 = sub_54;
  } else {
    sub_70 = false;
  };
  sub_69 = sub_70;
  if (contrato_rad_down2) {
    sub_72 = sub_55;
  } else {
    sub_72 = sub_23;
  };
  if (contrato_v_427) {
    sub_71 = false;
  } else {
    sub_71 = sub_72;
  };
  if (contrato_rc1) {
    v_162 = sub_71;
  } else {
    v_162 = sub_69;
  };
  if (contrato_rad_down1) {
    v_163 = sub_69;
  } else {
    v_163 = v_162;
  };
  if (contrato_v_428) {
    sub_65 = v_163;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_ck_11_1) {
    v_169 = sub_36;
    v_168 = sub_65;
  } else {
    v_169 = sub_65;
    v_168 = sub_36;
  };
  if (contrato_push_janela) {
    v_170 = v_168;
  } else {
    v_170 = v_169;
  };
  if (contrato_cj) {
    sub_35 = v_170;
  } else {
    sub_35 = sub_36;
  };
  sub_74 = sub_65;
  sub_73 = sub_74;
  if (contrato_ck_9_1) {
    v_184 = sub_35;
    v_183 = sub_73;
  } else {
    v_184 = sub_73;
    v_183 = sub_35;
  };
  if (contrato_push_porta) {
    v_185 = v_183;
  } else {
    v_185 = v_184;
  };
  if (contrato_cp) {
    v_186 = v_185;
  } else {
    v_186 = sub_35;
  };
  if (p_contrato_rc2) {
    sub_0 = v_186;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_rc2 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_rc1_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_co,
                                                                int contrato_cws,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_rc1_out* _out) {
  
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
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
  sub_20 = p_contrato_rc1;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_35 = false;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (contrato_presenca) {
    sub_23 = sub_8;
  } else {
    sub_23 = sub_24;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (contrato_v_427) {
    v_188 = sub_21;
  } else {
    v_188 = sub_5;
  };
  if (contrato_rad_up1) {
    sub_4 = v_188;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (contrato_presenca) {
    sub_39 = sub_8;
  } else {
    sub_39 = false;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (contrato_v_427) {
    sub_36 = sub_5;
  } else {
    sub_36 = sub_37;
  };
  sub_55 = true;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (contrato_presenca) {
    sub_43 = sub_8;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (contrato_v_427) {
    sub_40 = sub_21;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_rad_down1) {
    v_189 = sub_36;
  } else {
    v_189 = sub_40;
  };
  if (contrato_v_428) {
    sub_2 = v_189;
  } else {
    sub_2 = sub_3;
  };
  if (contrato_presenca) {
    sub_61 = sub_24;
  } else {
    sub_61 = false;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (contrato_v_427) {
    v = sub_59;
  } else {
    v = sub_37;
  };
  if (contrato_rad_up1) {
    sub_58 = v;
  } else {
    sub_58 = sub_37;
  };
  sub_57 = sub_58;
  if (contrato_v_427) {
    sub_62 = sub_37;
  } else {
    sub_62 = false;
  };
  if (contrato_presenca) {
    sub_66 = sub_44;
  } else {
    sub_66 = false;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (contrato_v_427) {
    sub_63 = sub_59;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_rad_down1) {
    v_187 = sub_62;
  } else {
    v_187 = sub_63;
  };
  if (contrato_v_428) {
    sub_56 = v_187;
  } else {
    sub_56 = sub_57;
  };
  if (contrato_ck_11_1) {
    v_191 = sub_2;
    v_190 = sub_56;
  } else {
    v_191 = sub_56;
    v_190 = sub_2;
  };
  if (contrato_push_janela) {
    v_192 = v_190;
  } else {
    v_192 = v_191;
  };
  if (contrato_cj) {
    sub_1 = v_192;
  } else {
    sub_1 = sub_2;
  };
  sub_68 = sub_56;
  sub_67 = sub_68;
  if (contrato_ck_9_1) {
    v_194 = sub_1;
    v_193 = sub_67;
  } else {
    v_194 = sub_67;
    v_193 = sub_1;
  };
  if (contrato_push_porta) {
    v_195 = v_193;
  } else {
    v_195 = v_194;
  };
  if (contrato_cp) {
    sub_0 = v_195;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_rc1 = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_co_step(int contrato_eco_input,
                                                               int contrato_comfort_input,
                                                               int contrato_end_wash,
                                                               int contrato_start_wash,
                                                               int contrato_finish_oven,
                                                               int contrato_start_oven,
                                                               int contrato_tok,
                                                               int contrato_cold,
                                                               int contrato_push_porta,
                                                               int contrato_push_janela,
                                                               int contrato_rad_up1,
                                                               int contrato_rad_down1,
                                                               int contrato_rad_up2,
                                                               int contrato_rad_down2,
                                                               int contrato_presenca,
                                                               int contrato_botao_lamp,
                                                               int contrato_botao_tv,
                                                               int contrato_v_428,
                                                               int contrato_v_427,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_9_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_11_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_13_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_15_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_17_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_392,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_pnr_2,
                                                               int contrato_v_333,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_pnr_1,
                                                               int contrato_v_294,
                                                               int contrato_v_293,
                                                               int contrato_pnr,
                                                               int p_contrato_ct2,
                                                               int p_contrato_ct1,
                                                               int p_contrato_cl2,
                                                               int p_contrato_cl1,
                                                               int p_contrato_rc2,
                                                               int p_contrato_rc1,
                                                               int p_contrato_co,
                                                               int p_contrato_cws,
                                                               int p_contrato_cp,
                                                               int p_contrato_cj,
                                                               int contrato_cws,
                                                               int contrato_cp,
                                                               int contrato_cj,
                                                               Contrato_controller__contrato_controller_contrato_co_out* _out) {
  
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
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
  sub_19 = p_contrato_co;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (contrato_presenca) {
    sub_23 = sub_8;
  } else {
    sub_23 = false;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (contrato_v_427) {
    sub_20 = sub_5;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_rad_down1) {
    v_196 = sub_20;
  } else {
    v_196 = sub_4;
  };
  if (contrato_v_428) {
    sub_2 = v_196;
  } else {
    sub_2 = sub_3;
  };
  sub_26 = sub_21;
  sub_25 = sub_26;
  if (contrato_v_427) {
    sub_27 = sub_21;
  } else {
    sub_27 = false;
  };
  if (contrato_rad_down1) {
    v = sub_27;
  } else {
    v = sub_26;
  };
  if (contrato_v_428) {
    sub_24 = v;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_ck_11_1) {
    v_198 = sub_2;
    v_197 = sub_24;
  } else {
    v_198 = sub_24;
    v_197 = sub_2;
  };
  if (contrato_push_janela) {
    v_199 = v_197;
  } else {
    v_199 = v_198;
  };
  if (contrato_cj) {
    sub_1 = v_199;
  } else {
    sub_1 = sub_2;
  };
  sub_29 = sub_24;
  sub_28 = sub_29;
  if (contrato_ck_9_1) {
    v_201 = sub_1;
    v_200 = sub_28;
  } else {
    v_201 = sub_28;
    v_200 = sub_1;
  };
  if (contrato_push_porta) {
    v_202 = v_200;
  } else {
    v_202 = v_201;
  };
  if (contrato_cp) {
    sub_0 = v_202;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_co = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cws_step(int contrato_eco_input,
                                                                int contrato_comfort_input,
                                                                int contrato_end_wash,
                                                                int contrato_start_wash,
                                                                int contrato_finish_oven,
                                                                int contrato_start_oven,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_push_porta,
                                                                int contrato_push_janela,
                                                                int contrato_rad_up1,
                                                                int contrato_rad_down1,
                                                                int contrato_rad_up2,
                                                                int contrato_rad_down2,
                                                                int contrato_presenca,
                                                                int contrato_botao_lamp,
                                                                int contrato_botao_tv,
                                                                int contrato_v_428,
                                                                int contrato_v_427,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_9_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_11_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_13_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_15_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_17_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_392,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_pnr_2,
                                                                int contrato_v_333,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_pnr_1,
                                                                int contrato_v_294,
                                                                int contrato_v_293,
                                                                int contrato_pnr,
                                                                int p_contrato_ct2,
                                                                int p_contrato_ct1,
                                                                int p_contrato_cl2,
                                                                int p_contrato_cl1,
                                                                int p_contrato_rc2,
                                                                int p_contrato_rc1,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                int p_contrato_cp,
                                                                int p_contrato_cj,
                                                                int contrato_cp,
                                                                int contrato_cj,
                                                                Contrato_controller__contrato_controller_contrato_cws_out* _out) {
  
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
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
  sub_18 = p_contrato_cws;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (contrato_presenca) {
    sub_22 = sub_8;
  } else {
    sub_22 = false;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (contrato_v_427) {
    sub_19 = sub_5;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_rad_down1) {
    v_203 = sub_19;
  } else {
    v_203 = sub_4;
  };
  if (contrato_v_428) {
    sub_2 = v_203;
  } else {
    sub_2 = sub_3;
  };
  sub_25 = sub_20;
  sub_24 = sub_25;
  if (contrato_v_427) {
    sub_26 = sub_20;
  } else {
    sub_26 = false;
  };
  if (contrato_rad_down1) {
    v = sub_26;
  } else {
    v = sub_25;
  };
  if (contrato_v_428) {
    sub_23 = v;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_ck_11_1) {
    v_205 = sub_2;
    v_204 = sub_23;
  } else {
    v_205 = sub_23;
    v_204 = sub_2;
  };
  if (contrato_push_janela) {
    v_206 = v_204;
  } else {
    v_206 = v_205;
  };
  if (contrato_cj) {
    sub_1 = v_206;
  } else {
    sub_1 = sub_2;
  };
  sub_28 = sub_23;
  sub_27 = sub_28;
  if (contrato_ck_9_1) {
    v_208 = sub_1;
    v_207 = sub_27;
  } else {
    v_208 = sub_27;
    v_207 = sub_1;
  };
  if (contrato_push_porta) {
    v_209 = v_207;
  } else {
    v_209 = v_208;
  };
  if (contrato_cp) {
    sub_0 = v_209;
  } else {
    sub_0 = sub_1;
  };
  _out->contrato_cws = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cp_step(int contrato_eco_input,
                                                               int contrato_comfort_input,
                                                               int contrato_end_wash,
                                                               int contrato_start_wash,
                                                               int contrato_finish_oven,
                                                               int contrato_start_oven,
                                                               int contrato_tok,
                                                               int contrato_cold,
                                                               int contrato_push_porta,
                                                               int contrato_push_janela,
                                                               int contrato_rad_up1,
                                                               int contrato_rad_down1,
                                                               int contrato_rad_up2,
                                                               int contrato_rad_down2,
                                                               int contrato_presenca,
                                                               int contrato_botao_lamp,
                                                               int contrato_botao_tv,
                                                               int contrato_v_428,
                                                               int contrato_v_427,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_9_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_11_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_13_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_15_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_17_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_392,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_pnr_2,
                                                               int contrato_v_333,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_pnr_1,
                                                               int contrato_v_294,
                                                               int contrato_v_293,
                                                               int contrato_pnr,
                                                               int p_contrato_ct2,
                                                               int p_contrato_ct1,
                                                               int p_contrato_cl2,
                                                               int p_contrato_cl1,
                                                               int p_contrato_rc2,
                                                               int p_contrato_rc1,
                                                               int p_contrato_co,
                                                               int p_contrato_cws,
                                                               int p_contrato_cp,
                                                               int p_contrato_cj,
                                                               int contrato_cj,
                                                               Contrato_controller__contrato_controller_contrato_cp_out* _out) {
  
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
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
  sub_18 = p_contrato_cp;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (contrato_presenca) {
    sub_22 = sub_8;
  } else {
    sub_22 = false;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (contrato_v_427) {
    sub_19 = sub_5;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_rad_down1) {
    v_214 = sub_19;
  } else {
    v_214 = sub_4;
  };
  if (contrato_v_428) {
    sub_2 = v_214;
  } else {
    sub_2 = sub_3;
  };
  sub_25 = sub_20;
  sub_24 = sub_25;
  if (contrato_v_427) {
    sub_26 = sub_20;
  } else {
    sub_26 = false;
  };
  if (contrato_rad_down1) {
    v_213 = sub_26;
  } else {
    v_213 = sub_25;
  };
  if (contrato_v_428) {
    sub_23 = v_213;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_ck_11_1) {
    v_216 = sub_2;
    v_215 = sub_23;
  } else {
    v_216 = sub_23;
    v_215 = sub_2;
  };
  if (contrato_push_janela) {
    v_217 = v_215;
  } else {
    v_217 = v_216;
  };
  if (contrato_cj) {
    sub_1 = v_217;
  } else {
    sub_1 = sub_2;
  };
  sub_43 = false;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (contrato_presenca) {
    sub_33 = sub_8;
  } else {
    sub_33 = sub_34;
  };
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (contrato_presenca) {
    sub_47 = sub_34;
  } else {
    sub_47 = false;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (contrato_v_427) {
    sub_44 = sub_31;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_rad_down1) {
    v = sub_44;
  } else {
    v = sub_30;
  };
  if (contrato_v_428) {
    sub_28 = v;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_ck_11_1) {
    v_211 = sub_28;
    v_210 = sub_23;
  } else {
    v_211 = sub_23;
    v_210 = sub_28;
  };
  if (contrato_push_janela) {
    v_212 = v_210;
  } else {
    v_212 = v_211;
  };
  if (contrato_cj) {
    sub_27 = v_212;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_ck_9_1) {
    v_219 = sub_1;
    v_218 = sub_27;
  } else {
    v_219 = sub_27;
    v_218 = sub_1;
  };
  if (contrato_push_porta) {
    sub_0 = v_218;
  } else {
    sub_0 = v_219;
  };
  _out->contrato_cp = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cj_step(int contrato_eco_input,
                                                               int contrato_comfort_input,
                                                               int contrato_end_wash,
                                                               int contrato_start_wash,
                                                               int contrato_finish_oven,
                                                               int contrato_start_oven,
                                                               int contrato_tok,
                                                               int contrato_cold,
                                                               int contrato_push_porta,
                                                               int contrato_push_janela,
                                                               int contrato_rad_up1,
                                                               int contrato_rad_down1,
                                                               int contrato_rad_up2,
                                                               int contrato_rad_down2,
                                                               int contrato_presenca,
                                                               int contrato_botao_lamp,
                                                               int contrato_botao_tv,
                                                               int contrato_v_428,
                                                               int contrato_v_427,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_9_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_11_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_13_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_15_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_17_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_392,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_pnr_2,
                                                               int contrato_v_333,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_pnr_1,
                                                               int contrato_v_294,
                                                               int contrato_v_293,
                                                               int contrato_pnr,
                                                               int p_contrato_ct2,
                                                               int p_contrato_ct1,
                                                               int p_contrato_cl2,
                                                               int p_contrato_cl1,
                                                               int p_contrato_rc2,
                                                               int p_contrato_rc1,
                                                               int p_contrato_co,
                                                               int p_contrato_cws,
                                                               int p_contrato_cp,
                                                               int p_contrato_cj,
                                                               Contrato_controller__contrato_controller_contrato_cj_out* _out) {
  
  int v_222;
  int v_221;
  int v_220;
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
  sub_18 = p_contrato_cj;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (contrato_presenca) {
    sub_22 = sub_8;
  } else {
    sub_22 = false;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (contrato_v_427) {
    sub_19 = sub_5;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_rad_down1) {
    v_220 = sub_19;
  } else {
    v_220 = sub_4;
  };
  if (contrato_v_428) {
    sub_2 = v_220;
  } else {
    sub_2 = sub_3;
  };
  sub_38 = false;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (contrato_presenca) {
    sub_28 = sub_8;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (contrato_presenca) {
    sub_42 = sub_29;
  } else {
    sub_42 = false;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (contrato_v_427) {
    sub_39 = sub_26;
  } else {
    sub_39 = sub_40;
  };
  if (contrato_rad_down1) {
    v = sub_39;
  } else {
    v = sub_25;
  };
  if (contrato_v_428) {
    sub_23 = v;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_ck_11_1) {
    v_222 = sub_2;
    v_221 = sub_23;
  } else {
    v_222 = sub_23;
    v_221 = sub_2;
  };
  if (contrato_push_janela) {
    sub_1 = v_221;
  } else {
    sub_1 = v_222;
  };
  sub_0 = sub_1;
  _out->contrato_cj = sub_0;;
}

void Contrato_controller__contrato_controller_step(int contrato_eco_input,
                                                   int contrato_comfort_input,
                                                   int contrato_end_wash,
                                                   int contrato_start_wash,
                                                   int contrato_finish_oven,
                                                   int contrato_start_oven,
                                                   int contrato_tok,
                                                   int contrato_cold,
                                                   int contrato_push_porta,
                                                   int contrato_push_janela,
                                                   int contrato_rad_up1,
                                                   int contrato_rad_down1,
                                                   int contrato_rad_up2,
                                                   int contrato_rad_down2,
                                                   int contrato_presenca,
                                                   int contrato_botao_lamp,
                                                   int contrato_botao_tv,
                                                   int contrato_v_428,
                                                   int contrato_v_427,
                                                   int contrato_pnr_8,
                                                   int contrato_ck_9_1,
                                                   int contrato_pnr_7,
                                                   int contrato_ck_11_1,
                                                   int contrato_pnr_6,
                                                   int contrato_ck_13_1,
                                                   int contrato_pnr_5,
                                                   int contrato_ck_15_1,
                                                   int contrato_pnr_4,
                                                   int contrato_ck_17_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_392,
                                                   int contrato_v_391,
                                                   int contrato_v_390,
                                                   int contrato_pnr_2,
                                                   int contrato_v_333,
                                                   int contrato_v_332,
                                                   int contrato_v_331,
                                                   int contrato_pnr_1,
                                                   int contrato_v_294,
                                                   int contrato_v_293,
                                                   int contrato_pnr,
                                                   int p_contrato_ct2,
                                                   int p_contrato_ct1,
                                                   int p_contrato_cl2,
                                                   int p_contrato_cl1,
                                                   int p_contrato_rc2,
                                                   int p_contrato_rc1,
                                                   int p_contrato_co,
                                                   int p_contrato_cws,
                                                   int p_contrato_cp,
                                                   int p_contrato_cj,
                                                   Contrato_controller__contrato_controller_out* _out) {
  Contrato_controller__contrato_controller_contrato_cl1_out Contrato_controller__contrato_controller_contrato_cl1_out_st;
  Contrato_controller__contrato_controller_contrato_cws_out Contrato_controller__contrato_controller_contrato_cws_out_st;
  Contrato_controller__contrato_controller_contrato_cl2_out Contrato_controller__contrato_controller_contrato_cl2_out_st;
  Contrato_controller__contrato_controller_contrato_rc1_out Contrato_controller__contrato_controller_contrato_rc1_out_st;
  Contrato_controller__contrato_controller_contrato_cj_out Contrato_controller__contrato_controller_contrato_cj_out_st;
  Contrato_controller__contrato_controller_contrato_cp_out Contrato_controller__contrato_controller_contrato_cp_out_st;
  Contrato_controller__contrato_controller_contrato_co_out Contrato_controller__contrato_controller_contrato_co_out_st;
  Contrato_controller__contrato_controller_contrato_ct2_out Contrato_controller__contrato_controller_contrato_ct2_out_st;
  Contrato_controller__contrato_controller_contrato_rc2_out Contrato_controller__contrato_controller_contrato_rc2_out_st;
  Contrato_controller__contrato_controller_contrato_ct1_out Contrato_controller__contrato_controller_contrato_ct1_out_st;
  Contrato_controller__contrato_controller_contrato_cj_step(contrato_eco_input,
                                                            contrato_comfort_input,
                                                            contrato_end_wash,
                                                            contrato_start_wash,
                                                            contrato_finish_oven,
                                                            contrato_start_oven,
                                                            contrato_tok,
                                                            contrato_cold,
                                                            contrato_push_porta,
                                                            contrato_push_janela,
                                                            contrato_rad_up1,
                                                            contrato_rad_down1,
                                                            contrato_rad_up2,
                                                            contrato_rad_down2,
                                                            contrato_presenca,
                                                            contrato_botao_lamp,
                                                            contrato_botao_tv,
                                                            contrato_v_428,
                                                            contrato_v_427,
                                                            contrato_pnr_8,
                                                            contrato_ck_9_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_11_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_13_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_15_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_17_1,
                                                            contrato_pnr_3,
                                                            contrato_v_392,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_pnr_2,
                                                            contrato_v_333,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_pnr_1,
                                                            contrato_v_294,
                                                            contrato_v_293,
                                                            contrato_pnr,
                                                            p_contrato_ct2,
                                                            p_contrato_ct1,
                                                            p_contrato_cl2,
                                                            p_contrato_cl1,
                                                            p_contrato_rc2,
                                                            p_contrato_rc1,
                                                            p_contrato_co,
                                                            p_contrato_cws,
                                                            p_contrato_cp,
                                                            p_contrato_cj,
                                                            &Contrato_controller__contrato_controller_contrato_cj_out_st);
  _out->contrato_cj = Contrato_controller__contrato_controller_contrato_cj_out_st.contrato_cj;
  Contrato_controller__contrato_controller_contrato_cp_step(contrato_eco_input,
                                                            contrato_comfort_input,
                                                            contrato_end_wash,
                                                            contrato_start_wash,
                                                            contrato_finish_oven,
                                                            contrato_start_oven,
                                                            contrato_tok,
                                                            contrato_cold,
                                                            contrato_push_porta,
                                                            contrato_push_janela,
                                                            contrato_rad_up1,
                                                            contrato_rad_down1,
                                                            contrato_rad_up2,
                                                            contrato_rad_down2,
                                                            contrato_presenca,
                                                            contrato_botao_lamp,
                                                            contrato_botao_tv,
                                                            contrato_v_428,
                                                            contrato_v_427,
                                                            contrato_pnr_8,
                                                            contrato_ck_9_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_11_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_13_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_15_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_17_1,
                                                            contrato_pnr_3,
                                                            contrato_v_392,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_pnr_2,
                                                            contrato_v_333,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_pnr_1,
                                                            contrato_v_294,
                                                            contrato_v_293,
                                                            contrato_pnr,
                                                            p_contrato_ct2,
                                                            p_contrato_ct1,
                                                            p_contrato_cl2,
                                                            p_contrato_cl1,
                                                            p_contrato_rc2,
                                                            p_contrato_rc1,
                                                            p_contrato_co,
                                                            p_contrato_cws,
                                                            p_contrato_cp,
                                                            p_contrato_cj,
                                                            _out->contrato_cj,
                                                            &Contrato_controller__contrato_controller_contrato_cp_out_st);
  _out->contrato_cp = Contrato_controller__contrato_controller_contrato_cp_out_st.contrato_cp;
  Contrato_controller__contrato_controller_contrato_cws_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_cws_out_st);
  _out->contrato_cws = Contrato_controller__contrato_controller_contrato_cws_out_st.contrato_cws;
  Contrato_controller__contrato_controller_contrato_co_step(contrato_eco_input,
                                                            contrato_comfort_input,
                                                            contrato_end_wash,
                                                            contrato_start_wash,
                                                            contrato_finish_oven,
                                                            contrato_start_oven,
                                                            contrato_tok,
                                                            contrato_cold,
                                                            contrato_push_porta,
                                                            contrato_push_janela,
                                                            contrato_rad_up1,
                                                            contrato_rad_down1,
                                                            contrato_rad_up2,
                                                            contrato_rad_down2,
                                                            contrato_presenca,
                                                            contrato_botao_lamp,
                                                            contrato_botao_tv,
                                                            contrato_v_428,
                                                            contrato_v_427,
                                                            contrato_pnr_8,
                                                            contrato_ck_9_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_11_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_13_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_15_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_17_1,
                                                            contrato_pnr_3,
                                                            contrato_v_392,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_pnr_2,
                                                            contrato_v_333,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_pnr_1,
                                                            contrato_v_294,
                                                            contrato_v_293,
                                                            contrato_pnr,
                                                            p_contrato_ct2,
                                                            p_contrato_ct1,
                                                            p_contrato_cl2,
                                                            p_contrato_cl1,
                                                            p_contrato_rc2,
                                                            p_contrato_rc1,
                                                            p_contrato_co,
                                                            p_contrato_cws,
                                                            p_contrato_cp,
                                                            p_contrato_cj,
                                                            _out->contrato_cws,
                                                            _out->contrato_cp,
                                                            _out->contrato_cj,
                                                            &Contrato_controller__contrato_controller_contrato_co_out_st);
  _out->contrato_co = Contrato_controller__contrato_controller_contrato_co_out_st.contrato_co;
  Contrato_controller__contrato_controller_contrato_rc1_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_rc1_out_st);
  _out->contrato_rc1 = Contrato_controller__contrato_controller_contrato_rc1_out_st.contrato_rc1;
  Contrato_controller__contrato_controller_contrato_rc2_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_rc1,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_rc2_out_st);
  _out->contrato_rc2 = Contrato_controller__contrato_controller_contrato_rc2_out_st.contrato_rc2;
  Contrato_controller__contrato_controller_contrato_cl1_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_cl1_out_st);
  _out->contrato_cl1 = Contrato_controller__contrato_controller_contrato_cl1_out_st.contrato_cl1;
  Contrato_controller__contrato_controller_contrato_cl2_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_cl2_out_st);
  _out->contrato_cl2 = Contrato_controller__contrato_controller_contrato_cl2_out_st.contrato_cl2;
  Contrato_controller__contrato_controller_contrato_ct1_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_cl2,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_ct1_out_st);
  _out->contrato_ct1 = Contrato_controller__contrato_controller_contrato_ct1_out_st.contrato_ct1;
  Contrato_controller__contrato_controller_contrato_ct2_step(contrato_eco_input,
                                                             contrato_comfort_input,
                                                             contrato_end_wash,
                                                             contrato_start_wash,
                                                             contrato_finish_oven,
                                                             contrato_start_oven,
                                                             contrato_tok,
                                                             contrato_cold,
                                                             contrato_push_porta,
                                                             contrato_push_janela,
                                                             contrato_rad_up1,
                                                             contrato_rad_down1,
                                                             contrato_rad_up2,
                                                             contrato_rad_down2,
                                                             contrato_presenca,
                                                             contrato_botao_lamp,
                                                             contrato_botao_tv,
                                                             contrato_v_428,
                                                             contrato_v_427,
                                                             contrato_pnr_8,
                                                             contrato_ck_9_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_11_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_13_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_15_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_17_1,
                                                             contrato_pnr_3,
                                                             contrato_v_392,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_pnr_2,
                                                             contrato_v_333,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_pnr_1,
                                                             contrato_v_294,
                                                             contrato_v_293,
                                                             contrato_pnr,
                                                             p_contrato_ct2,
                                                             p_contrato_ct1,
                                                             p_contrato_cl2,
                                                             p_contrato_cl1,
                                                             p_contrato_rc2,
                                                             p_contrato_rc1,
                                                             p_contrato_co,
                                                             p_contrato_cws,
                                                             p_contrato_cp,
                                                             p_contrato_cj,
                                                             _out->contrato_ct1,
                                                             _out->contrato_cl2,
                                                             _out->contrato_cl1,
                                                             _out->contrato_rc2,
                                                             _out->contrato_rc1,
                                                             _out->contrato_co,
                                                             _out->contrato_cws,
                                                             _out->contrato_cp,
                                                             _out->contrato_cj,
                                                             &Contrato_controller__contrato_controller_contrato_ct2_out_st);
  _out->contrato_ct2 = Contrato_controller__contrato_controller_contrato_ct2_out_st.contrato_ct2;
}

