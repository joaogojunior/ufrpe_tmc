/* --- Generated the 27/6/2018 at 7:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contrato_controller.h"

void Contrato_controller__contrato_controller_contrato_ts_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_tm,
                                                               int contrato_om,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_295,
                                                               int contrato_v_294,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_1,
                                                               int contrato_v_263,
                                                               int contrato_v_262,
                                                               int contrato_v_261,
                                                               int contrato_pnr,
                                                               int p_contrato_ts,
                                                               int p_contrato_co,
                                                               int p_contrato_ca,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_co,
                                                               int contrato_ca,
                                                               int contrato_cm,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_ts_out* _out) {
  
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
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  sub_13 = false;
  if (contrato_vb) {
    v_80 = false;
  } else {
    v_80 = sub_13;
  };
  sub_14 = sub_13;
  if (contrato_l2b) {
    sub_12 = v_80;
  } else {
    sub_12 = sub_14;
  };
  v_78 = !(contrato_cb);
  v_79 = (v_78&&false);
  if (contrato_vb) {
    sub_16 = v_79;
  } else {
    sub_16 = sub_13;
  };
  if (contrato_l2b) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_14;
  };
  if (contrato_l1b) {
    sub_11 = sub_12;
  } else {
    sub_11 = sub_15;
  };
  sub_17 = sub_14;
  if (contrato_l1b) {
    v_81 = sub_17;
  } else {
    v_81 = sub_15;
  };
  if (contrato_v_261) {
    v_82 = v_81;
  } else {
    v_82 = false;
  };
  if (contrato_v_262) {
    sub_10 = v_82;
  } else {
    sub_10 = sub_11;
  };
  sub_21 = sub_16;
  if (contrato_l1b) {
    sub_20 = sub_12;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_v_261) {
    sub_19 = false;
    sub_22 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_22 = false;
  };
  if (contrato_v_262) {
    sub_18 = sub_22;
  } else {
    sub_18 = sub_19;
  };
  if (contrato_v_263) {
    sub_9 = sub_18;
  } else {
    sub_9 = sub_10;
  };
  sub_8 = sub_9;
  if (contrato_v_262) {
    sub_26 = sub_22;
  } else {
    sub_26 = sub_20;
  };
  if (contrato_v_263) {
    sub_25 = sub_18;
  } else {
    sub_25 = sub_26;
  };
  if (contrato_l2b) {
    sub_31 = sub_14;
  } else {
    sub_31 = sub_16;
  };
  if (contrato_l1b) {
    sub_30 = sub_17;
  } else {
    sub_30 = sub_31;
  };
  sub_33 = (contrato_cb&&false);
  if (contrato_vb) {
    v_71 = sub_33;
  } else {
    v_71 = sub_13;
  };
  if (contrato_l2b) {
    sub_32 = v_71;
  } else {
    sub_32 = sub_14;
  };
  if (contrato_l1b) {
    v_74 = sub_32;
  } else {
    v_74 = sub_21;
  };
  if (contrato_v_261) {
    v_75 = v_74;
  } else {
    v_75 = false;
  };
  if (contrato_l1b) {
    v_72 = sub_32;
  } else {
    v_72 = sub_31;
  };
  if (contrato_v_261) {
    sub_29 = v_72;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_l1b) {
    sub_34 = sub_12;
  } else {
    sub_34 = sub_31;
  };
  if (contrato_v_261) {
    v_73 = sub_34;
  } else {
    v_73 = false;
  };
  if (contrato_v_262) {
    sub_28 = v_73;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_l1b) {
    sub_36 = sub_32;
  } else {
    sub_36 = sub_17;
  };
  if (contrato_v_261) {
    sub_35 = false;
  } else {
    sub_35 = sub_36;
  };
  if (contrato_v_262) {
    v_76 = v_75;
  } else {
    v_76 = sub_35;
  };
  if (contrato_v_263) {
    sub_27 = v_76;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_td) {
    v_77 = sub_27;
    sub_24 = sub_25;
  } else {
    v_77 = sub_25;
    sub_24 = sub_27;
  };
  if (contrato_ck_16_1) {
    sub_23 = v_77;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_ck_12_1) {
    v_84 = sub_8;
    v_83 = sub_23;
  } else {
    v_84 = sub_23;
    v_83 = sub_8;
  };
  if (contrato_cm) {
    sub_7 = v_83;
  } else {
    sub_7 = v_84;
  };
  sub_38 = sub_25;
  sub_37 = sub_38;
  if (contrato_ck_10_1) {
    v_86 = sub_7;
    v_85 = sub_37;
  } else {
    v_86 = sub_37;
    v_85 = sub_7;
  };
  if (contrato_cp) {
    sub_6 = v_85;
  } else {
    sub_6 = v_86;
  };
  sub_45 = sub_17;
  if (contrato_v_261) {
    v_65 = sub_34;
  } else {
    v_65 = sub_45;
  };
  if (contrato_v_262) {
    sub_44 = v_65;
  } else {
    sub_44 = sub_30;
  };
  if (contrato_v_263) {
    sub_43 = sub_45;
  } else {
    sub_43 = sub_44;
  };
  if (contrato_l1b) {
    v_62 = sub_15;
  } else {
    v_62 = sub_17;
  };
  if (contrato_v_261) {
    v_63 = v_62;
    v_61 = sub_20;
  } else {
    v_63 = sub_45;
    v_61 = sub_45;
  };
  if (contrato_l1b) {
    sub_49 = sub_15;
  } else {
    sub_49 = sub_21;
  };
  if (contrato_v_261) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_20;
  };
  if (contrato_v_262) {
    sub_47 = v_61;
  } else {
    sub_47 = sub_48;
  };
  if (contrato_v_261) {
    sub_50 = sub_45;
  } else {
    sub_50 = sub_49;
  };
  if (contrato_v_262) {
    v_64 = v_63;
  } else {
    v_64 = sub_50;
  };
  if (contrato_v_263) {
    sub_46 = v_64;
  } else {
    sub_46 = sub_47;
  };
  if (contrato_td) {
    v_66 = sub_46;
    sub_42 = sub_43;
  } else {
    v_66 = sub_43;
    sub_42 = sub_46;
  };
  if (contrato_ck_16_1) {
    sub_41 = v_66;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_ck_12_1) {
    v_68 = sub_38;
    v_67 = sub_41;
  } else {
    v_68 = sub_41;
    v_67 = sub_38;
  };
  if (contrato_cm) {
    sub_40 = v_67;
  } else {
    sub_40 = v_68;
  };
  if (contrato_ck_10_1) {
    v_70 = sub_37;
    v_69 = sub_40;
  } else {
    v_70 = sub_40;
    v_69 = sub_37;
  };
  if (contrato_cp) {
    sub_39 = v_69;
  } else {
    sub_39 = v_70;
  };
  if (contrato_v_294) {
    v_88 = sub_6;
    v_87 = sub_39;
  } else {
    v_88 = sub_39;
    v_87 = sub_6;
  };
  if (contrato_ca) {
    sub_5 = v_87;
  } else {
    sub_5 = v_88;
  };
  sub_4 = sub_5;
  sub_59 = true;
  if (contrato_vb) {
    v_50 = sub_59;
  } else {
    v_50 = sub_13;
  };
  if (contrato_l2b) {
    sub_58 = v_50;
  } else {
    sub_58 = sub_14;
  };
  v_49 = !(contrato_cb);
  if (contrato_vb) {
    sub_61 = v_49;
  } else {
    sub_61 = sub_13;
  };
  if (contrato_l2b) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_16;
  };
  if (contrato_l1b) {
    v_51 = sub_12;
    sub_57 = sub_58;
  } else {
    v_51 = sub_60;
    sub_57 = sub_60;
  };
  sub_64 = sub_59;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (contrato_v_261) {
    v_52 = v_51;
  } else {
    v_52 = sub_62;
  };
  if (contrato_v_262) {
    sub_56 = v_52;
  } else {
    sub_56 = sub_57;
  };
  sub_67 = sub_61;
  if (contrato_l1b) {
    sub_66 = sub_58;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_v_261) {
    v_53 = sub_66;
    sub_65 = sub_62;
  } else {
    v_53 = sub_62;
    sub_65 = sub_66;
  };
  if (contrato_v_262) {
    v_54 = v_53;
  } else {
    v_54 = sub_65;
  };
  if (contrato_v_263) {
    sub_55 = v_54;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_v_261) {
    v_45 = sub_20;
  } else {
    v_45 = sub_62;
  };
  sub_73 = (contrato_cb||false);
  if (contrato_vb) {
    v_44 = sub_73;
  } else {
    v_44 = sub_13;
  };
  if (contrato_l2b) {
    sub_72 = v_44;
  } else {
    sub_72 = sub_14;
  };
  if (contrato_l1b) {
    v_46 = sub_72;
  } else {
    v_46 = sub_67;
  };
  if (contrato_v_261) {
    v_47 = v_46;
  } else {
    v_47 = sub_62;
  };
  if (contrato_l1b) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_21;
  };
  if (contrato_v_261) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_20;
  };
  if (contrato_v_262) {
    sub_69 = v_45;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_261) {
    sub_74 = sub_62;
  } else {
    sub_74 = sub_71;
  };
  if (contrato_v_262) {
    v_48 = v_47;
  } else {
    v_48 = sub_74;
  };
  if (contrato_v_263) {
    sub_68 = v_48;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_td) {
    v_55 = sub_68;
    sub_54 = sub_55;
  } else {
    v_55 = sub_55;
    sub_54 = sub_68;
  };
  if (contrato_ck_16_1) {
    sub_53 = v_55;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_ck_12_1) {
    v_57 = sub_38;
    v_56 = sub_53;
  } else {
    v_57 = sub_53;
    v_56 = sub_38;
  };
  if (contrato_cm) {
    sub_52 = v_56;
  } else {
    sub_52 = v_57;
  };
  if (contrato_ck_10_1) {
    v_59 = sub_7;
    v_58 = sub_52;
  } else {
    v_59 = sub_52;
    v_58 = sub_7;
  };
  if (contrato_cp) {
    v_60 = v_58;
  } else {
    v_60 = v_59;
  };
  if (contrato_v_294) {
    sub_51 = v_60;
  } else {
    sub_51 = sub_39;
  };
  if (contrato_co) {
    v_89 = sub_51;
  } else {
    v_89 = sub_39;
  };
  if (contrato_v_295) {
    sub_3 = v_89;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_vb) {
    v_35 = false;
  } else {
    v_35 = sub_59;
  };
  if (contrato_l2b) {
    sub_83 = v_35;
  } else {
    sub_83 = sub_64;
  };
  if (contrato_vb) {
    sub_85 = sub_73;
  } else {
    sub_85 = sub_59;
  };
  if (contrato_l2b) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_64;
  };
  if (contrato_l1b) {
    v_36 = sub_63;
  } else {
    v_36 = sub_84;
  };
  if (contrato_v_261) {
    v_37 = v_36;
  } else {
    v_37 = false;
  };
  if (contrato_l1b) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_84;
  };
  if (contrato_v_262) {
    sub_81 = v_37;
  } else {
    sub_81 = sub_82;
  };
  sub_89 = sub_85;
  if (contrato_l1b) {
    sub_88 = sub_83;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_v_261) {
    sub_87 = false;
    sub_90 = sub_88;
  } else {
    sub_87 = sub_88;
    sub_90 = false;
  };
  if (contrato_v_262) {
    sub_86 = sub_90;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_v_263) {
    sub_80 = sub_86;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  if (contrato_v_262) {
    sub_94 = sub_90;
  } else {
    sub_94 = sub_88;
  };
  if (contrato_v_263) {
    sub_93 = sub_86;
  } else {
    sub_93 = sub_94;
  };
  if (contrato_l2b) {
    sub_99 = sub_64;
  } else {
    sub_99 = sub_85;
  };
  if (contrato_l1b) {
    sub_98 = sub_63;
  } else {
    sub_98 = sub_99;
  };
  v_26 = !(contrato_cb);
  v_27 = (v_26||false);
  if (contrato_vb) {
    v_28 = v_27;
  } else {
    v_28 = sub_59;
  };
  if (contrato_l2b) {
    sub_100 = v_28;
  } else {
    sub_100 = sub_64;
  };
  if (contrato_l1b) {
    v_31 = sub_100;
  } else {
    v_31 = sub_89;
  };
  if (contrato_v_261) {
    v_32 = v_31;
  } else {
    v_32 = false;
  };
  if (contrato_l1b) {
    v_29 = sub_100;
  } else {
    v_29 = sub_99;
  };
  if (contrato_v_261) {
    sub_97 = v_29;
  } else {
    sub_97 = sub_98;
  };
  if (contrato_l1b) {
    sub_101 = sub_83;
  } else {
    sub_101 = sub_99;
  };
  if (contrato_v_261) {
    v_30 = sub_101;
  } else {
    v_30 = false;
  };
  if (contrato_v_262) {
    sub_96 = v_30;
  } else {
    sub_96 = sub_97;
  };
  if (contrato_l1b) {
    sub_103 = sub_100;
  } else {
    sub_103 = sub_63;
  };
  if (contrato_v_261) {
    sub_102 = false;
  } else {
    sub_102 = sub_103;
  };
  if (contrato_v_262) {
    v_33 = v_32;
  } else {
    v_33 = sub_102;
  };
  if (contrato_v_263) {
    sub_95 = v_33;
  } else {
    sub_95 = sub_96;
  };
  if (contrato_td) {
    v_34 = sub_95;
    sub_92 = sub_93;
  } else {
    v_34 = sub_93;
    sub_92 = sub_95;
  };
  if (contrato_ck_16_1) {
    sub_91 = v_34;
  } else {
    sub_91 = sub_92;
  };
  if (contrato_ck_12_1) {
    v_39 = sub_79;
    v_38 = sub_91;
  } else {
    v_39 = sub_91;
    v_38 = sub_79;
  };
  if (contrato_cm) {
    sub_78 = v_38;
  } else {
    sub_78 = v_39;
  };
  sub_105 = sub_93;
  sub_104 = sub_105;
  if (contrato_ck_10_1) {
    v_41 = sub_78;
    v_40 = sub_104;
  } else {
    v_41 = sub_104;
    v_40 = sub_78;
  };
  if (contrato_cp) {
    sub_77 = v_40;
  } else {
    sub_77 = v_41;
  };
  if (contrato_v_261) {
    v_20 = sub_101;
  } else {
    v_20 = sub_62;
  };
  if (contrato_v_262) {
    sub_111 = v_20;
  } else {
    sub_111 = sub_98;
  };
  if (contrato_v_263) {
    sub_110 = sub_62;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_l1b) {
    v_17 = sub_84;
  } else {
    v_17 = sub_63;
  };
  if (contrato_v_261) {
    v_18 = v_17;
    v_16 = sub_88;
  } else {
    v_18 = sub_62;
    v_16 = sub_62;
  };
  if (contrato_l1b) {
    sub_115 = sub_84;
  } else {
    sub_115 = sub_89;
  };
  if (contrato_v_261) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_88;
  };
  if (contrato_v_262) {
    sub_113 = v_16;
  } else {
    sub_113 = sub_114;
  };
  if (contrato_v_261) {
    sub_116 = sub_62;
  } else {
    sub_116 = sub_115;
  };
  if (contrato_v_262) {
    v_19 = v_18;
  } else {
    v_19 = sub_116;
  };
  if (contrato_v_263) {
    sub_112 = v_19;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_td) {
    v_21 = sub_112;
    sub_109 = sub_110;
  } else {
    v_21 = sub_110;
    sub_109 = sub_112;
  };
  if (contrato_ck_16_1) {
    sub_108 = v_21;
  } else {
    sub_108 = sub_109;
  };
  if (contrato_ck_12_1) {
    v_23 = sub_105;
    v_22 = sub_108;
  } else {
    v_23 = sub_108;
    v_22 = sub_105;
  };
  if (contrato_cm) {
    sub_107 = v_22;
  } else {
    sub_107 = v_23;
  };
  if (contrato_ck_10_1) {
    v_25 = sub_104;
    v_24 = sub_107;
  } else {
    v_25 = sub_107;
    v_24 = sub_104;
  };
  if (contrato_cp) {
    sub_106 = v_24;
  } else {
    sub_106 = v_25;
  };
  if (contrato_v_294) {
    v_43 = sub_77;
    v_42 = sub_106;
  } else {
    v_43 = sub_106;
    v_42 = sub_77;
  };
  if (contrato_ca) {
    sub_76 = v_42;
  } else {
    sub_76 = v_43;
  };
  sub_75 = sub_76;
  if (contrato_vb) {
    sub_124 = contrato_cb;
  } else {
    sub_124 = sub_59;
  };
  if (contrato_l2b) {
    sub_123 = sub_85;
  } else {
    sub_123 = sub_124;
  };
  if (contrato_l1b) {
    sub_122 = sub_83;
  } else {
    sub_122 = sub_123;
  };
  if (contrato_vb) {
    v_8 = sub_13;
  } else {
    v_8 = sub_59;
  };
  if (contrato_l2b) {
    sub_125 = v_8;
  } else {
    sub_125 = sub_64;
  };
  if (contrato_l1b) {
    v_9 = sub_125;
  } else {
    v_9 = sub_123;
  };
  if (contrato_v_261) {
    v_10 = v_9;
  } else {
    v_10 = false;
  };
  if (contrato_v_262) {
    sub_121 = v_10;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_v_263) {
    sub_120 = sub_86;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  if (contrato_l2b) {
    sub_132 = sub_124;
  } else {
    sub_132 = sub_85;
  };
  if (contrato_l1b) {
    v_2 = sub_83;
  } else {
    v_2 = sub_132;
  };
  if (contrato_v_261) {
    v_3 = v_2;
  } else {
    v_3 = false;
  };
  if (contrato_l1b) {
    sub_131 = sub_125;
  } else {
    sub_131 = sub_132;
  };
  if (contrato_vb) {
    v = sub_33;
  } else {
    v = sub_59;
  };
  if (contrato_l2b) {
    sub_133 = v;
  } else {
    sub_133 = sub_64;
  };
  if (contrato_l1b) {
    v_4 = sub_133;
  } else {
    v_4 = sub_89;
  };
  if (contrato_v_261) {
    v_5 = v_4;
  } else {
    v_5 = false;
  };
  if (contrato_l1b) {
    v_1 = sub_133;
  } else {
    v_1 = sub_132;
  };
  if (contrato_v_261) {
    sub_130 = v_1;
  } else {
    sub_130 = sub_131;
  };
  if (contrato_v_262) {
    sub_129 = v_3;
  } else {
    sub_129 = sub_130;
  };
  if (contrato_l1b) {
    sub_135 = sub_133;
  } else {
    sub_135 = sub_124;
  };
  if (contrato_v_261) {
    sub_134 = false;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_v_262) {
    v_6 = v_5;
  } else {
    v_6 = sub_134;
  };
  if (contrato_v_263) {
    sub_128 = v_6;
  } else {
    sub_128 = sub_129;
  };
  if (contrato_td) {
    v_7 = sub_128;
    sub_127 = sub_93;
  } else {
    v_7 = sub_93;
    sub_127 = sub_128;
  };
  if (contrato_ck_16_1) {
    sub_126 = v_7;
  } else {
    sub_126 = sub_127;
  };
  if (contrato_ck_12_1) {
    v_12 = sub_119;
    v_11 = sub_126;
  } else {
    v_12 = sub_126;
    v_11 = sub_119;
  };
  if (contrato_cm) {
    sub_118 = v_11;
  } else {
    sub_118 = v_12;
  };
  if (contrato_ck_10_1) {
    v_14 = sub_118;
    v_13 = sub_107;
  } else {
    v_14 = sub_107;
    v_13 = sub_118;
  };
  if (contrato_cp) {
    v_15 = v_13;
  } else {
    v_15 = v_14;
  };
  if (contrato_v_294) {
    sub_117 = v_15;
  } else {
    sub_117 = sub_106;
  };
  if (contrato_co) {
    v_90 = sub_117;
  } else {
    v_90 = sub_106;
  };
  if (contrato_v_295) {
    v_91 = v_90;
  } else {
    v_91 = sub_75;
  };
  if (p_contrato_ts) {
    sub_2 = v_91;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->contrato_ts = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_co_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_tm,
                                                               int contrato_om,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_295,
                                                               int contrato_v_294,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_1,
                                                               int contrato_v_263,
                                                               int contrato_v_262,
                                                               int contrato_v_261,
                                                               int contrato_pnr,
                                                               int p_contrato_ts,
                                                               int p_contrato_co,
                                                               int p_contrato_ca,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_ca,
                                                               int contrato_cm,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_co_out* _out) {
  
  int v_168;
  int v_167;
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
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  sub_12 = false;
  if (contrato_vb) {
    v_159 = false;
  } else {
    v_159 = sub_12;
  };
  sub_13 = sub_12;
  if (contrato_l2b) {
    sub_11 = v_159;
  } else {
    sub_11 = sub_13;
  };
  v_157 = !(contrato_cb);
  v_158 = (v_157&&false);
  if (contrato_vb) {
    sub_15 = v_158;
  } else {
    sub_15 = sub_12;
  };
  if (contrato_l2b) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_13;
  };
  if (contrato_l1b) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_14;
  };
  sub_16 = sub_13;
  if (contrato_l1b) {
    v_160 = sub_16;
  } else {
    v_160 = sub_14;
  };
  if (contrato_v_261) {
    v_161 = v_160;
  } else {
    v_161 = false;
  };
  if (contrato_v_262) {
    sub_9 = v_161;
  } else {
    sub_9 = sub_10;
  };
  sub_20 = sub_15;
  if (contrato_l1b) {
    sub_19 = sub_11;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_v_261) {
    sub_18 = false;
    sub_21 = sub_19;
  } else {
    sub_18 = sub_19;
    sub_21 = false;
  };
  if (contrato_v_262) {
    sub_17 = sub_21;
  } else {
    sub_17 = sub_18;
  };
  if (contrato_v_263) {
    sub_8 = sub_17;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  if (contrato_v_262) {
    sub_25 = sub_21;
  } else {
    sub_25 = sub_19;
  };
  if (contrato_v_263) {
    sub_24 = sub_17;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_l2b) {
    sub_30 = sub_13;
  } else {
    sub_30 = sub_15;
  };
  if (contrato_l1b) {
    sub_29 = sub_16;
  } else {
    sub_29 = sub_30;
  };
  v_149 = (contrato_cb&&false);
  if (contrato_vb) {
    v_150 = v_149;
  } else {
    v_150 = sub_12;
  };
  if (contrato_l2b) {
    sub_31 = v_150;
  } else {
    sub_31 = sub_13;
  };
  if (contrato_l1b) {
    v_153 = sub_31;
  } else {
    v_153 = sub_20;
  };
  if (contrato_v_261) {
    v_154 = v_153;
  } else {
    v_154 = false;
  };
  if (contrato_l1b) {
    v_151 = sub_31;
  } else {
    v_151 = sub_30;
  };
  if (contrato_v_261) {
    sub_28 = v_151;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_l1b) {
    sub_32 = sub_11;
  } else {
    sub_32 = sub_30;
  };
  if (contrato_v_261) {
    v_152 = sub_32;
  } else {
    v_152 = false;
  };
  if (contrato_v_262) {
    sub_27 = v_152;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_l1b) {
    sub_34 = sub_31;
  } else {
    sub_34 = sub_16;
  };
  if (contrato_v_261) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_v_262) {
    v_155 = v_154;
  } else {
    v_155 = sub_33;
  };
  if (contrato_v_263) {
    sub_26 = v_155;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_td) {
    v_156 = sub_26;
    sub_23 = sub_24;
  } else {
    v_156 = sub_24;
    sub_23 = sub_26;
  };
  if (contrato_ck_16_1) {
    sub_22 = v_156;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_ck_12_1) {
    v_163 = sub_7;
    v_162 = sub_22;
  } else {
    v_163 = sub_22;
    v_162 = sub_7;
  };
  if (contrato_cm) {
    sub_6 = v_162;
  } else {
    sub_6 = v_163;
  };
  sub_36 = sub_24;
  sub_35 = sub_36;
  if (contrato_ck_10_1) {
    v_165 = sub_6;
    v_164 = sub_35;
  } else {
    v_165 = sub_35;
    v_164 = sub_6;
  };
  if (contrato_cp) {
    sub_5 = v_164;
  } else {
    sub_5 = v_165;
  };
  sub_43 = sub_16;
  if (contrato_v_261) {
    v_143 = sub_32;
  } else {
    v_143 = sub_43;
  };
  if (contrato_v_262) {
    sub_42 = v_143;
  } else {
    sub_42 = sub_29;
  };
  if (contrato_v_263) {
    sub_41 = sub_43;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_l1b) {
    v_140 = sub_14;
  } else {
    v_140 = sub_16;
  };
  if (contrato_v_261) {
    v_141 = v_140;
    v_139 = sub_19;
  } else {
    v_141 = sub_43;
    v_139 = sub_43;
  };
  if (contrato_l1b) {
    sub_47 = sub_14;
  } else {
    sub_47 = sub_20;
  };
  if (contrato_v_261) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_19;
  };
  if (contrato_v_262) {
    sub_45 = v_139;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_v_261) {
    sub_48 = sub_43;
  } else {
    sub_48 = sub_47;
  };
  if (contrato_v_262) {
    v_142 = v_141;
  } else {
    v_142 = sub_48;
  };
  if (contrato_v_263) {
    sub_44 = v_142;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_td) {
    v_144 = sub_44;
    sub_40 = sub_41;
  } else {
    v_144 = sub_41;
    sub_40 = sub_44;
  };
  if (contrato_ck_16_1) {
    sub_39 = v_144;
  } else {
    sub_39 = sub_40;
  };
  if (contrato_ck_12_1) {
    v_146 = sub_36;
    v_145 = sub_39;
  } else {
    v_146 = sub_39;
    v_145 = sub_36;
  };
  if (contrato_cm) {
    sub_38 = v_145;
  } else {
    sub_38 = v_146;
  };
  if (contrato_ck_10_1) {
    v_148 = sub_35;
    v_147 = sub_38;
  } else {
    v_148 = sub_38;
    v_147 = sub_35;
  };
  if (contrato_cp) {
    sub_37 = v_147;
  } else {
    sub_37 = v_148;
  };
  if (contrato_v_294) {
    v_167 = sub_5;
    v_166 = sub_37;
  } else {
    v_167 = sub_37;
    v_166 = sub_5;
  };
  if (contrato_ca) {
    sub_4 = v_166;
  } else {
    sub_4 = v_167;
  };
  v_131 = !(contrato_cb);
  if (contrato_vb) {
    sub_56 = v_131;
  } else {
    sub_56 = sub_12;
  };
  if (contrato_l2b) {
    sub_55 = sub_15;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_l1b) {
    sub_54 = sub_11;
  } else {
    sub_54 = sub_55;
  };
  sub_58 = true;
  if (contrato_vb) {
    v_130 = sub_58;
  } else {
    v_130 = sub_12;
  };
  if (contrato_l2b) {
    sub_57 = v_130;
  } else {
    sub_57 = sub_13;
  };
  if (contrato_l1b) {
    v_132 = sub_57;
  } else {
    v_132 = sub_55;
  };
  if (contrato_v_261) {
    v_133 = v_132;
  } else {
    v_133 = false;
  };
  if (contrato_v_262) {
    sub_53 = v_133;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_v_263) {
    sub_52 = sub_17;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (contrato_l2b) {
    sub_65 = sub_56;
  } else {
    sub_65 = sub_15;
  };
  if (contrato_l1b) {
    v_124 = sub_11;
  } else {
    v_124 = sub_65;
  };
  if (contrato_v_261) {
    v_125 = v_124;
  } else {
    v_125 = false;
  };
  if (contrato_l1b) {
    sub_64 = sub_57;
  } else {
    sub_64 = sub_65;
  };
  v_121 = !(contrato_cb);
  sub_67 = (v_121||false);
  if (contrato_vb) {
    v_122 = sub_67;
  } else {
    v_122 = sub_12;
  };
  if (contrato_l2b) {
    sub_66 = v_122;
  } else {
    sub_66 = sub_13;
  };
  if (contrato_l1b) {
    v_126 = sub_66;
  } else {
    v_126 = sub_20;
  };
  if (contrato_v_261) {
    v_127 = v_126;
  } else {
    v_127 = false;
  };
  if (contrato_l1b) {
    v_123 = sub_66;
  } else {
    v_123 = sub_65;
  };
  if (contrato_v_261) {
    sub_63 = v_123;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_v_262) {
    sub_62 = v_125;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_l1b) {
    sub_69 = sub_66;
  } else {
    sub_69 = sub_56;
  };
  if (contrato_v_261) {
    sub_68 = false;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_v_262) {
    v_128 = v_127;
  } else {
    v_128 = sub_68;
  };
  if (contrato_v_263) {
    sub_61 = v_128;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_td) {
    v_129 = sub_61;
    sub_60 = sub_24;
  } else {
    v_129 = sub_24;
    sub_60 = sub_61;
  };
  if (contrato_ck_16_1) {
    sub_59 = v_129;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_ck_12_1) {
    v_135 = sub_51;
    v_134 = sub_59;
  } else {
    v_135 = sub_59;
    v_134 = sub_51;
  };
  if (contrato_cm) {
    sub_50 = v_134;
  } else {
    sub_50 = v_135;
  };
  if (contrato_ck_10_1) {
    v_137 = sub_50;
    v_136 = sub_38;
  } else {
    v_137 = sub_38;
    v_136 = sub_50;
  };
  if (contrato_cp) {
    v_138 = v_136;
  } else {
    v_138 = v_137;
  };
  if (contrato_v_294) {
    sub_49 = v_138;
  } else {
    sub_49 = sub_37;
  };
  if (contrato_v_295) {
    sub_3 = sub_49;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_vb) {
    v_112 = false;
  } else {
    v_112 = sub_58;
  };
  sub_78 = sub_58;
  if (contrato_l2b) {
    sub_77 = v_112;
  } else {
    sub_77 = sub_78;
  };
  v_111 = (contrato_cb||false);
  if (contrato_vb) {
    sub_80 = v_111;
  } else {
    sub_80 = sub_58;
  };
  if (contrato_l2b) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_78;
  };
  if (contrato_l1b) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_79;
  };
  sub_81 = sub_78;
  if (contrato_l1b) {
    v_113 = sub_81;
  } else {
    v_113 = sub_79;
  };
  if (contrato_v_261) {
    v_114 = v_113;
  } else {
    v_114 = false;
  };
  if (contrato_v_262) {
    sub_75 = v_114;
  } else {
    sub_75 = sub_76;
  };
  sub_85 = sub_80;
  if (contrato_l1b) {
    sub_84 = sub_77;
  } else {
    sub_84 = sub_85;
  };
  if (contrato_v_261) {
    sub_83 = false;
    sub_86 = sub_84;
  } else {
    sub_83 = sub_84;
    sub_86 = false;
  };
  if (contrato_v_262) {
    sub_82 = sub_86;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_v_263) {
    sub_74 = sub_82;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  if (contrato_v_262) {
    sub_90 = sub_86;
  } else {
    sub_90 = sub_84;
  };
  if (contrato_v_263) {
    sub_89 = sub_82;
  } else {
    sub_89 = sub_90;
  };
  if (contrato_l2b) {
    sub_95 = sub_78;
  } else {
    sub_95 = sub_80;
  };
  if (contrato_l1b) {
    sub_94 = sub_81;
  } else {
    sub_94 = sub_95;
  };
  if (contrato_vb) {
    v_104 = sub_67;
  } else {
    v_104 = sub_58;
  };
  if (contrato_l2b) {
    sub_96 = v_104;
  } else {
    sub_96 = sub_78;
  };
  if (contrato_l1b) {
    v_107 = sub_96;
  } else {
    v_107 = sub_85;
  };
  if (contrato_v_261) {
    v_108 = v_107;
  } else {
    v_108 = false;
  };
  if (contrato_l1b) {
    v_105 = sub_96;
  } else {
    v_105 = sub_95;
  };
  if (contrato_v_261) {
    sub_93 = v_105;
  } else {
    sub_93 = sub_94;
  };
  if (contrato_l1b) {
    sub_97 = sub_77;
  } else {
    sub_97 = sub_95;
  };
  if (contrato_v_261) {
    v_106 = sub_97;
  } else {
    v_106 = false;
  };
  if (contrato_v_262) {
    sub_92 = v_106;
  } else {
    sub_92 = sub_93;
  };
  if (contrato_l1b) {
    sub_99 = sub_96;
  } else {
    sub_99 = sub_81;
  };
  if (contrato_v_261) {
    sub_98 = false;
  } else {
    sub_98 = sub_99;
  };
  if (contrato_v_262) {
    v_109 = v_108;
  } else {
    v_109 = sub_98;
  };
  if (contrato_v_263) {
    sub_91 = v_109;
  } else {
    sub_91 = sub_92;
  };
  if (contrato_td) {
    v_110 = sub_91;
    sub_88 = sub_89;
  } else {
    v_110 = sub_89;
    sub_88 = sub_91;
  };
  if (contrato_ck_16_1) {
    sub_87 = v_110;
  } else {
    sub_87 = sub_88;
  };
  if (contrato_ck_12_1) {
    v_116 = sub_73;
    v_115 = sub_87;
  } else {
    v_116 = sub_87;
    v_115 = sub_73;
  };
  if (contrato_cm) {
    sub_72 = v_115;
  } else {
    sub_72 = v_116;
  };
  sub_101 = sub_89;
  sub_100 = sub_101;
  if (contrato_ck_10_1) {
    v_118 = sub_72;
    v_117 = sub_100;
  } else {
    v_118 = sub_100;
    v_117 = sub_72;
  };
  if (contrato_cp) {
    sub_71 = v_117;
  } else {
    sub_71 = v_118;
  };
  sub_108 = sub_81;
  if (contrato_v_261) {
    v_98 = sub_97;
  } else {
    v_98 = sub_108;
  };
  if (contrato_v_262) {
    sub_107 = v_98;
  } else {
    sub_107 = sub_94;
  };
  if (contrato_v_263) {
    sub_106 = sub_108;
  } else {
    sub_106 = sub_107;
  };
  if (contrato_l1b) {
    v_95 = sub_79;
  } else {
    v_95 = sub_81;
  };
  if (contrato_v_261) {
    v_96 = v_95;
    v_94 = sub_84;
  } else {
    v_96 = sub_108;
    v_94 = sub_108;
  };
  if (contrato_l1b) {
    sub_112 = sub_79;
  } else {
    sub_112 = sub_85;
  };
  if (contrato_v_261) {
    sub_111 = sub_112;
  } else {
    sub_111 = sub_84;
  };
  if (contrato_v_262) {
    sub_110 = v_94;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_v_261) {
    sub_113 = sub_108;
  } else {
    sub_113 = sub_112;
  };
  if (contrato_v_262) {
    v_97 = v_96;
  } else {
    v_97 = sub_113;
  };
  if (contrato_v_263) {
    sub_109 = v_97;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_td) {
    v_99 = sub_109;
    sub_105 = sub_106;
  } else {
    v_99 = sub_106;
    sub_105 = sub_109;
  };
  if (contrato_ck_16_1) {
    sub_104 = v_99;
  } else {
    sub_104 = sub_105;
  };
  if (contrato_ck_12_1) {
    v_101 = sub_101;
    v_100 = sub_104;
  } else {
    v_101 = sub_104;
    v_100 = sub_101;
  };
  if (contrato_cm) {
    sub_103 = v_100;
  } else {
    sub_103 = v_101;
  };
  if (contrato_ck_10_1) {
    v_103 = sub_100;
    v_102 = sub_103;
  } else {
    v_103 = sub_103;
    v_102 = sub_100;
  };
  if (contrato_cp) {
    sub_102 = v_102;
  } else {
    sub_102 = v_103;
  };
  if (contrato_v_294) {
    v_120 = sub_71;
    v_119 = sub_102;
  } else {
    v_120 = sub_102;
    v_119 = sub_71;
  };
  if (contrato_ca) {
    sub_70 = v_119;
  } else {
    sub_70 = v_120;
  };
  if (contrato_ck_10_1) {
    v_92 = sub_72;
    v = sub_103;
  } else {
    v_92 = sub_103;
    v = sub_72;
  };
  if (contrato_cp) {
    v_93 = v;
  } else {
    v_93 = v_92;
  };
  if (contrato_v_294) {
    sub_114 = v_93;
  } else {
    sub_114 = sub_102;
  };
  if (contrato_v_295) {
    v_168 = sub_114;
  } else {
    v_168 = sub_70;
  };
  if (p_contrato_co) {
    sub_2 = v_168;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->contrato_co = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_ca_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_tm,
                                                               int contrato_om,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_295,
                                                               int contrato_v_294,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_1,
                                                               int contrato_v_263,
                                                               int contrato_v_262,
                                                               int contrato_v_261,
                                                               int contrato_pnr,
                                                               int p_contrato_ts,
                                                               int p_contrato_co,
                                                               int p_contrato_ca,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_cm,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_ca_out* _out) {
  
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
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
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
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
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  sub_12 = false;
  if (contrato_vb) {
    v_261 = false;
  } else {
    v_261 = sub_12;
  };
  sub_13 = sub_12;
  if (contrato_l2b) {
    sub_11 = v_261;
  } else {
    sub_11 = sub_13;
  };
  v_260 = !(contrato_cb);
  sub_16 = (v_260&&false);
  if (contrato_vb) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_12;
  };
  v_259 = !(contrato_cb);
  if (contrato_vb) {
    sub_17 = v_259;
  } else {
    sub_17 = sub_12;
  };
  if (contrato_l2b) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_17;
  };
  if (contrato_l1b) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_14;
  };
  sub_19 = true;
  if (contrato_vb) {
    v_258 = sub_19;
  } else {
    v_258 = sub_12;
  };
  if (contrato_l2b) {
    sub_18 = v_258;
  } else {
    sub_18 = sub_13;
  };
  if (contrato_l1b) {
    v_262 = sub_18;
  } else {
    v_262 = sub_14;
  };
  if (contrato_v_261) {
    v_263 = v_262;
  } else {
    v_263 = false;
  };
  if (contrato_v_262) {
    sub_9 = v_263;
  } else {
    sub_9 = sub_10;
  };
  sub_23 = sub_15;
  if (contrato_l1b) {
    sub_22 = sub_11;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_v_261) {
    sub_21 = false;
    sub_24 = sub_22;
  } else {
    sub_21 = sub_22;
    sub_24 = false;
  };
  if (contrato_v_262) {
    sub_20 = sub_24;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_v_263) {
    sub_8 = sub_20;
  } else {
    sub_8 = sub_9;
  };
  sub_7 = sub_8;
  if (contrato_v_262) {
    sub_28 = sub_24;
  } else {
    sub_28 = sub_22;
  };
  if (contrato_v_263) {
    sub_27 = sub_20;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_l2b) {
    sub_33 = sub_17;
  } else {
    sub_33 = sub_15;
  };
  if (contrato_l1b) {
    sub_32 = sub_18;
  } else {
    sub_32 = sub_33;
  };
  v_250 = !(contrato_cb);
  sub_35 = (v_250||false);
  if (contrato_vb) {
    v_251 = sub_35;
  } else {
    v_251 = sub_12;
  };
  if (contrato_l2b) {
    sub_34 = v_251;
  } else {
    sub_34 = sub_13;
  };
  if (contrato_l1b) {
    v_254 = sub_34;
  } else {
    v_254 = sub_23;
  };
  if (contrato_v_261) {
    v_255 = v_254;
  } else {
    v_255 = false;
  };
  if (contrato_l1b) {
    v_252 = sub_34;
  } else {
    v_252 = sub_33;
  };
  if (contrato_v_261) {
    sub_31 = v_252;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_l1b) {
    sub_36 = sub_11;
  } else {
    sub_36 = sub_33;
  };
  if (contrato_v_261) {
    v_253 = sub_36;
  } else {
    v_253 = false;
  };
  if (contrato_v_262) {
    sub_30 = v_253;
  } else {
    sub_30 = sub_31;
  };
  sub_39 = sub_17;
  if (contrato_l1b) {
    sub_38 = sub_34;
  } else {
    sub_38 = sub_39;
  };
  if (contrato_v_261) {
    sub_37 = false;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_262) {
    v_256 = v_255;
  } else {
    v_256 = sub_37;
  };
  if (contrato_v_263) {
    sub_29 = v_256;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_td) {
    v_257 = sub_29;
    sub_26 = sub_27;
  } else {
    v_257 = sub_27;
    sub_26 = sub_29;
  };
  if (contrato_ck_16_1) {
    sub_25 = v_257;
  } else {
    sub_25 = sub_26;
  };
  if (contrato_ck_12_1) {
    v_265 = sub_7;
    v_264 = sub_25;
  } else {
    v_265 = sub_25;
    v_264 = sub_7;
  };
  if (contrato_cm) {
    sub_6 = v_264;
  } else {
    sub_6 = v_265;
  };
  sub_41 = sub_27;
  sub_47 = sub_13;
  if (contrato_l2b) {
    sub_48 = sub_13;
  } else {
    sub_48 = sub_15;
  };
  if (contrato_l1b) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_48;
  };
  sub_49 = sub_47;
  if (contrato_l1b) {
    sub_50 = sub_11;
  } else {
    sub_50 = sub_48;
  };
  if (contrato_v_261) {
    v_246 = sub_50;
  } else {
    v_246 = sub_49;
  };
  if (contrato_v_262) {
    sub_45 = v_246;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_v_263) {
    sub_44 = sub_49;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_v_261) {
    v_242 = sub_22;
  } else {
    v_242 = sub_49;
  };
  if (contrato_l2b) {
    sub_55 = sub_15;
  } else {
    sub_55 = sub_13;
  };
  if (contrato_l1b) {
    v_243 = sub_55;
  } else {
    v_243 = sub_47;
  };
  if (contrato_v_261) {
    v_244 = v_243;
  } else {
    v_244 = sub_49;
  };
  if (contrato_l1b) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_23;
  };
  if (contrato_v_261) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_22;
  };
  if (contrato_v_262) {
    sub_52 = v_242;
  } else {
    sub_52 = sub_53;
  };
  if (contrato_v_261) {
    sub_56 = sub_49;
  } else {
    sub_56 = sub_54;
  };
  if (contrato_v_262) {
    v_245 = v_244;
  } else {
    v_245 = sub_56;
  };
  if (contrato_v_263) {
    sub_51 = v_245;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_td) {
    v_247 = sub_51;
    sub_43 = sub_44;
  } else {
    v_247 = sub_44;
    sub_43 = sub_51;
  };
  if (contrato_ck_16_1) {
    sub_42 = v_247;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_ck_12_1) {
    v_249 = sub_41;
    v_248 = sub_42;
  } else {
    v_249 = sub_42;
    v_248 = sub_41;
  };
  if (contrato_cm) {
    sub_40 = v_248;
  } else {
    sub_40 = v_249;
  };
  if (contrato_ck_10_1) {
    v_267 = sub_6;
    v_266 = sub_40;
  } else {
    v_267 = sub_40;
    v_266 = sub_6;
  };
  if (contrato_cp) {
    sub_5 = v_266;
  } else {
    sub_5 = v_267;
  };
  if (contrato_l1b) {
    v_238 = sub_47;
  } else {
    v_238 = sub_55;
  };
  if (contrato_v_261) {
    v_239 = v_238;
  } else {
    v_239 = false;
  };
  if (contrato_l1b) {
    sub_61 = sub_11;
  } else {
    sub_61 = sub_55;
  };
  if (contrato_v_262) {
    sub_60 = v_239;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_263) {
    sub_59 = sub_20;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (contrato_v_261) {
    v_233 = sub_50;
  } else {
    v_233 = false;
  };
  sub_68 = (contrato_cb&&false);
  if (contrato_vb) {
    v_231 = sub_68;
  } else {
    v_231 = sub_12;
  };
  if (contrato_l2b) {
    sub_67 = v_231;
  } else {
    sub_67 = sub_13;
  };
  if (contrato_l1b) {
    v_234 = sub_67;
  } else {
    v_234 = sub_23;
  };
  if (contrato_v_261) {
    v_235 = v_234;
  } else {
    v_235 = false;
  };
  if (contrato_l1b) {
    v_232 = sub_67;
  } else {
    v_232 = sub_48;
  };
  if (contrato_v_261) {
    sub_66 = v_232;
  } else {
    sub_66 = sub_46;
  };
  if (contrato_v_262) {
    sub_65 = v_233;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_l1b) {
    sub_70 = sub_67;
  } else {
    sub_70 = sub_47;
  };
  if (contrato_v_261) {
    sub_69 = false;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_262) {
    v_236 = v_235;
  } else {
    v_236 = sub_69;
  };
  if (contrato_v_263) {
    sub_64 = v_236;
  } else {
    sub_64 = sub_65;
  };
  if (contrato_td) {
    v_237 = sub_64;
    sub_63 = sub_27;
  } else {
    v_237 = sub_27;
    sub_63 = sub_64;
  };
  if (contrato_ck_16_1) {
    sub_62 = v_237;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_ck_12_1) {
    v_241 = sub_58;
    v_240 = sub_62;
  } else {
    v_241 = sub_62;
    v_240 = sub_58;
  };
  if (contrato_cm) {
    sub_57 = v_240;
  } else {
    sub_57 = v_241;
  };
  if (contrato_ck_10_1) {
    v_272 = sub_57;
    v_271 = sub_40;
  } else {
    v_272 = sub_40;
    v_271 = sub_57;
  };
  if (contrato_cp) {
    v_273 = v_271;
  } else {
    v_273 = v_272;
  };
  sub_78 = sub_19;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (contrato_v_261) {
    v_225 = sub_36;
  } else {
    v_225 = sub_76;
  };
  if (contrato_v_262) {
    sub_75 = v_225;
  } else {
    sub_75 = sub_32;
  };
  if (contrato_l1b) {
    sub_80 = sub_18;
  } else {
    sub_80 = sub_39;
  };
  if (contrato_v_261) {
    v_226 = sub_80;
    sub_79 = sub_76;
  } else {
    v_226 = sub_76;
    sub_79 = sub_80;
  };
  if (contrato_v_262) {
    v_227 = v_226;
  } else {
    v_227 = sub_79;
  };
  if (contrato_v_263) {
    sub_74 = v_227;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_v_261) {
    v_221 = sub_22;
  } else {
    v_221 = sub_76;
  };
  sub_86 = (contrato_cb||false);
  if (contrato_vb) {
    v_220 = sub_86;
  } else {
    v_220 = sub_12;
  };
  if (contrato_l2b) {
    sub_85 = v_220;
  } else {
    sub_85 = sub_13;
  };
  if (contrato_l1b) {
    v_222 = sub_85;
  } else {
    v_222 = sub_39;
  };
  if (contrato_v_261) {
    v_223 = v_222;
  } else {
    v_223 = sub_76;
  };
  if (contrato_l1b) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_23;
  };
  if (contrato_v_261) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_22;
  };
  if (contrato_v_262) {
    sub_82 = v_221;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_v_261) {
    sub_87 = sub_76;
  } else {
    sub_87 = sub_84;
  };
  if (contrato_v_262) {
    v_224 = v_223;
  } else {
    v_224 = sub_87;
  };
  if (contrato_v_263) {
    sub_81 = v_224;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_td) {
    v_228 = sub_81;
    sub_73 = sub_74;
  } else {
    v_228 = sub_74;
    sub_73 = sub_81;
  };
  if (contrato_ck_16_1) {
    sub_72 = v_228;
  } else {
    sub_72 = sub_73;
  };
  if (contrato_ck_12_1) {
    v_230 = sub_41;
    v_229 = sub_72;
  } else {
    v_230 = sub_72;
    v_229 = sub_41;
  };
  if (contrato_cm) {
    sub_71 = v_229;
  } else {
    sub_71 = v_230;
  };
  if (contrato_ck_10_1) {
    v_269 = sub_57;
    v_268 = sub_71;
  } else {
    v_269 = sub_71;
    v_268 = sub_57;
  };
  if (contrato_cp) {
    v_270 = v_268;
  } else {
    v_270 = v_269;
  };
  if (contrato_v_294) {
    sub_4 = v_270;
  } else {
    sub_4 = sub_5;
  };
  sub_89 = sub_41;
  if (contrato_ck_10_1) {
    v_219 = sub_89;
    v_218 = sub_40;
  } else {
    v_219 = sub_40;
    v_218 = sub_89;
  };
  if (contrato_cp) {
    sub_88 = v_218;
  } else {
    sub_88 = v_219;
  };
  if (contrato_v_294) {
    v_274 = v_273;
  } else {
    v_274 = sub_88;
  };
  if (contrato_v_295) {
    sub_3 = v_274;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_vb) {
    v_208 = false;
  } else {
    v_208 = sub_19;
  };
  if (contrato_l2b) {
    sub_97 = v_208;
  } else {
    sub_97 = sub_78;
  };
  if (contrato_vb) {
    sub_99 = sub_86;
  } else {
    sub_99 = sub_19;
  };
  if (contrato_l2b) {
    sub_98 = sub_99;
  } else {
    sub_98 = sub_78;
  };
  if (contrato_l1b) {
    v_209 = sub_77;
  } else {
    v_209 = sub_98;
  };
  if (contrato_v_261) {
    v_210 = v_209;
  } else {
    v_210 = false;
  };
  if (contrato_l1b) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_98;
  };
  if (contrato_v_262) {
    sub_95 = v_210;
  } else {
    sub_95 = sub_96;
  };
  sub_103 = sub_99;
  if (contrato_l1b) {
    sub_102 = sub_97;
  } else {
    sub_102 = sub_103;
  };
  if (contrato_v_261) {
    sub_101 = false;
    sub_104 = sub_102;
  } else {
    sub_101 = sub_102;
    sub_104 = false;
  };
  if (contrato_v_262) {
    sub_100 = sub_104;
  } else {
    sub_100 = sub_101;
  };
  if (contrato_v_263) {
    sub_94 = sub_100;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (contrato_v_262) {
    sub_108 = sub_104;
  } else {
    sub_108 = sub_102;
  };
  if (contrato_v_263) {
    sub_107 = sub_100;
  } else {
    sub_107 = sub_108;
  };
  if (contrato_l2b) {
    sub_113 = sub_78;
  } else {
    sub_113 = sub_99;
  };
  if (contrato_l1b) {
    sub_112 = sub_77;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_vb) {
    v_201 = sub_35;
  } else {
    v_201 = sub_19;
  };
  if (contrato_l2b) {
    sub_114 = v_201;
  } else {
    sub_114 = sub_78;
  };
  if (contrato_l1b) {
    v_204 = sub_114;
  } else {
    v_204 = sub_103;
  };
  if (contrato_v_261) {
    v_205 = v_204;
  } else {
    v_205 = false;
  };
  if (contrato_l1b) {
    v_202 = sub_114;
  } else {
    v_202 = sub_113;
  };
  if (contrato_v_261) {
    sub_111 = v_202;
  } else {
    sub_111 = sub_112;
  };
  if (contrato_l1b) {
    sub_115 = sub_97;
  } else {
    sub_115 = sub_113;
  };
  if (contrato_v_261) {
    v_203 = sub_115;
  } else {
    v_203 = false;
  };
  if (contrato_v_262) {
    sub_110 = v_203;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_l1b) {
    sub_117 = sub_114;
  } else {
    sub_117 = sub_77;
  };
  if (contrato_v_261) {
    sub_116 = false;
  } else {
    sub_116 = sub_117;
  };
  if (contrato_v_262) {
    v_206 = v_205;
  } else {
    v_206 = sub_116;
  };
  if (contrato_v_263) {
    sub_109 = v_206;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_td) {
    v_207 = sub_109;
    sub_106 = sub_107;
  } else {
    v_207 = sub_107;
    sub_106 = sub_109;
  };
  if (contrato_ck_16_1) {
    sub_105 = v_207;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_ck_12_1) {
    v_212 = sub_93;
    v_211 = sub_105;
  } else {
    v_212 = sub_105;
    v_211 = sub_93;
  };
  if (contrato_cm) {
    sub_92 = v_211;
  } else {
    sub_92 = v_212;
  };
  sub_119 = sub_107;
  if (contrato_vb) {
    v_194 = sub_12;
  } else {
    v_194 = sub_19;
  };
  if (contrato_l2b) {
    sub_125 = v_194;
  } else {
    sub_125 = sub_78;
  };
  if (contrato_vb) {
    sub_127 = contrato_cb;
  } else {
    sub_127 = sub_19;
  };
  if (contrato_l2b) {
    sub_126 = sub_127;
  } else {
    sub_126 = sub_99;
  };
  if (contrato_l1b) {
    sub_124 = sub_125;
    sub_128 = sub_97;
  } else {
    sub_124 = sub_126;
    sub_128 = sub_126;
  };
  if (contrato_v_261) {
    v_195 = sub_128;
  } else {
    v_195 = sub_49;
  };
  if (contrato_v_262) {
    sub_123 = v_195;
  } else {
    sub_123 = sub_124;
  };
  sub_131 = sub_127;
  if (contrato_l1b) {
    sub_130 = sub_125;
  } else {
    sub_130 = sub_131;
  };
  if (contrato_v_261) {
    v_196 = sub_130;
    sub_129 = sub_49;
  } else {
    v_196 = sub_49;
    sub_129 = sub_130;
  };
  if (contrato_v_262) {
    v_197 = v_196;
  } else {
    v_197 = sub_129;
  };
  if (contrato_v_263) {
    sub_122 = v_197;
  } else {
    sub_122 = sub_123;
  };
  if (contrato_v_261) {
    v_190 = sub_102;
  } else {
    v_190 = sub_49;
  };
  if (contrato_vb) {
    v_189 = sub_16;
  } else {
    v_189 = sub_19;
  };
  if (contrato_l2b) {
    sub_136 = v_189;
  } else {
    sub_136 = sub_78;
  };
  if (contrato_l1b) {
    v_191 = sub_136;
  } else {
    v_191 = sub_131;
  };
  if (contrato_v_261) {
    v_192 = v_191;
  } else {
    v_192 = sub_49;
  };
  if (contrato_l1b) {
    sub_135 = sub_136;
  } else {
    sub_135 = sub_103;
  };
  if (contrato_v_261) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_102;
  };
  if (contrato_v_262) {
    sub_133 = v_190;
  } else {
    sub_133 = sub_134;
  };
  if (contrato_v_261) {
    sub_137 = sub_49;
  } else {
    sub_137 = sub_135;
  };
  if (contrato_v_262) {
    v_193 = v_192;
  } else {
    v_193 = sub_137;
  };
  if (contrato_v_263) {
    sub_132 = v_193;
  } else {
    sub_132 = sub_133;
  };
  if (contrato_td) {
    v_198 = sub_132;
    sub_121 = sub_122;
  } else {
    v_198 = sub_122;
    sub_121 = sub_132;
  };
  if (contrato_ck_16_1) {
    sub_120 = v_198;
  } else {
    sub_120 = sub_121;
  };
  if (contrato_ck_12_1) {
    v_200 = sub_119;
    v_199 = sub_120;
  } else {
    v_200 = sub_120;
    v_199 = sub_119;
  };
  if (contrato_cm) {
    sub_118 = v_199;
  } else {
    sub_118 = v_200;
  };
  if (contrato_ck_10_1) {
    v_214 = sub_92;
    v_213 = sub_118;
  } else {
    v_214 = sub_118;
    v_213 = sub_92;
  };
  if (contrato_cp) {
    sub_91 = v_213;
  } else {
    sub_91 = v_214;
  };
  if (contrato_l2b) {
    sub_143 = sub_99;
  } else {
    sub_143 = sub_127;
  };
  if (contrato_l1b) {
    v_185 = sub_125;
  } else {
    v_185 = sub_143;
  };
  if (contrato_v_261) {
    v_186 = v_185;
  } else {
    v_186 = false;
  };
  if (contrato_l1b) {
    sub_142 = sub_97;
  } else {
    sub_142 = sub_143;
  };
  if (contrato_v_262) {
    sub_141 = v_186;
  } else {
    sub_141 = sub_142;
  };
  if (contrato_v_263) {
    sub_140 = sub_100;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  if (contrato_v_261) {
    v_180 = sub_128;
  } else {
    v_180 = false;
  };
  if (contrato_vb) {
    v_178 = sub_68;
  } else {
    v_178 = sub_19;
  };
  if (contrato_l2b) {
    sub_149 = v_178;
  } else {
    sub_149 = sub_78;
  };
  if (contrato_l1b) {
    v_181 = sub_149;
  } else {
    v_181 = sub_103;
  };
  if (contrato_v_261) {
    v_182 = v_181;
  } else {
    v_182 = false;
  };
  if (contrato_l1b) {
    v_179 = sub_149;
  } else {
    v_179 = sub_126;
  };
  if (contrato_v_261) {
    sub_148 = v_179;
  } else {
    sub_148 = sub_124;
  };
  if (contrato_v_262) {
    sub_147 = v_180;
  } else {
    sub_147 = sub_148;
  };
  if (contrato_l1b) {
    sub_151 = sub_149;
  } else {
    sub_151 = sub_131;
  };
  if (contrato_v_261) {
    sub_150 = false;
  } else {
    sub_150 = sub_151;
  };
  if (contrato_v_262) {
    v_183 = v_182;
  } else {
    v_183 = sub_150;
  };
  if (contrato_v_263) {
    sub_146 = v_183;
  } else {
    sub_146 = sub_147;
  };
  if (contrato_td) {
    v_184 = sub_146;
    sub_145 = sub_107;
  } else {
    v_184 = sub_107;
    sub_145 = sub_146;
  };
  if (contrato_ck_16_1) {
    sub_144 = v_184;
  } else {
    sub_144 = sub_145;
  };
  if (contrato_ck_12_1) {
    v_188 = sub_139;
    v_187 = sub_144;
  } else {
    v_188 = sub_144;
    v_187 = sub_139;
  };
  if (contrato_cm) {
    sub_138 = v_187;
  } else {
    sub_138 = v_188;
  };
  if (contrato_v_261) {
    v_174 = sub_115;
  } else {
    v_174 = sub_76;
  };
  if (contrato_v_262) {
    sub_156 = v_174;
  } else {
    sub_156 = sub_112;
  };
  if (contrato_v_263) {
    sub_155 = sub_76;
  } else {
    sub_155 = sub_156;
  };
  if (contrato_l1b) {
    v_171 = sub_98;
  } else {
    v_171 = sub_77;
  };
  if (contrato_v_261) {
    v_172 = v_171;
    v_170 = sub_102;
  } else {
    v_172 = sub_76;
    v_170 = sub_76;
  };
  if (contrato_l1b) {
    sub_160 = sub_98;
  } else {
    sub_160 = sub_103;
  };
  if (contrato_v_261) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_102;
  };
  if (contrato_v_262) {
    sub_158 = v_170;
  } else {
    sub_158 = sub_159;
  };
  if (contrato_v_261) {
    sub_161 = sub_76;
  } else {
    sub_161 = sub_160;
  };
  if (contrato_v_262) {
    v_173 = v_172;
  } else {
    v_173 = sub_161;
  };
  if (contrato_v_263) {
    sub_157 = v_173;
  } else {
    sub_157 = sub_158;
  };
  if (contrato_td) {
    v_175 = sub_157;
    sub_154 = sub_155;
  } else {
    v_175 = sub_155;
    sub_154 = sub_157;
  };
  if (contrato_ck_16_1) {
    sub_153 = v_175;
  } else {
    sub_153 = sub_154;
  };
  if (contrato_ck_12_1) {
    v_177 = sub_119;
    v_176 = sub_153;
  } else {
    v_177 = sub_153;
    v_176 = sub_119;
  };
  if (contrato_cm) {
    sub_152 = v_176;
  } else {
    sub_152 = v_177;
  };
  if (contrato_ck_10_1) {
    v_276 = sub_92;
    v_275 = sub_152;
  } else {
    v_276 = sub_152;
    v_275 = sub_92;
  };
  if (contrato_cp) {
    v_277 = v_275;
  } else {
    v_277 = v_276;
  };
  if (contrato_ck_10_1) {
    v_216 = sub_138;
    v_215 = sub_152;
  } else {
    v_216 = sub_152;
    v_215 = sub_138;
  };
  if (contrato_cp) {
    v_217 = v_215;
  } else {
    v_217 = v_216;
  };
  if (contrato_v_294) {
    sub_90 = v_217;
  } else {
    sub_90 = sub_91;
  };
  sub_163 = sub_119;
  if (contrato_ck_10_1) {
    v_169 = sub_163;
    v = sub_152;
  } else {
    v_169 = sub_152;
    v = sub_163;
  };
  if (contrato_cp) {
    sub_162 = v;
  } else {
    sub_162 = v_169;
  };
  if (contrato_v_294) {
    v_278 = v_277;
  } else {
    v_278 = sub_162;
  };
  if (contrato_v_295) {
    v_279 = v_278;
  } else {
    v_279 = sub_90;
  };
  if (p_contrato_ca) {
    sub_2 = v_279;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->contrato_ca = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cm_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_tm,
                                                               int contrato_om,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_295,
                                                               int contrato_v_294,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_1,
                                                               int contrato_v_263,
                                                               int contrato_v_262,
                                                               int contrato_v_261,
                                                               int contrato_pnr,
                                                               int p_contrato_ts,
                                                               int p_contrato_co,
                                                               int p_contrato_ca,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cm_out* _out) {
  
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
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
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  sub_12 = false;
  if (contrato_vb) {
    v_359 = false;
  } else {
    v_359 = sub_12;
  };
  sub_13 = sub_12;
  if (contrato_l2b) {
    sub_11 = v_359;
  } else {
    sub_11 = sub_13;
  };
  v_358 = !(contrato_cb);
  sub_16 = (v_358&&false);
  if (contrato_vb) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_12;
  };
  v_357 = !(contrato_cb);
  if (contrato_vb) {
    sub_17 = v_357;
  } else {
    sub_17 = sub_12;
  };
  if (contrato_l2b) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_17;
  };
  if (contrato_l1b) {
    sub_10 = sub_11;
  } else {
    sub_10 = sub_14;
  };
  sub_19 = true;
  if (contrato_vb) {
    v_356 = sub_19;
  } else {
    v_356 = sub_12;
  };
  if (contrato_l2b) {
    sub_18 = v_356;
  } else {
    sub_18 = sub_13;
  };
  if (contrato_l1b) {
    v_360 = sub_18;
  } else {
    v_360 = sub_14;
  };
  if (contrato_v_261) {
    v_361 = v_360;
  } else {
    v_361 = false;
  };
  if (contrato_v_262) {
    sub_9 = v_361;
  } else {
    sub_9 = sub_10;
  };
  sub_23 = sub_15;
  if (contrato_l1b) {
    sub_22 = sub_11;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_v_261) {
    sub_21 = false;
    sub_24 = sub_22;
  } else {
    sub_21 = sub_22;
    sub_24 = false;
  };
  if (contrato_v_262) {
    sub_20 = sub_24;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_v_263) {
    sub_8 = sub_20;
  } else {
    sub_8 = sub_9;
  };
  sub_29 = sub_13;
  if (contrato_l2b) {
    sub_30 = sub_13;
  } else {
    sub_30 = sub_17;
  };
  if (contrato_l1b) {
    v_351 = sub_18;
  } else {
    v_351 = sub_30;
  };
  if (contrato_v_261) {
    v_352 = v_351;
  } else {
    v_352 = false;
  };
  if (contrato_l1b) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_30;
  };
  sub_32 = (contrato_cb&&false);
  if (contrato_vb) {
    v_349 = sub_32;
  } else {
    v_349 = sub_12;
  };
  if (contrato_l2b) {
    sub_31 = v_349;
  } else {
    sub_31 = sub_13;
  };
  if (contrato_l1b) {
    v_353 = sub_31;
  } else {
    v_353 = sub_23;
  };
  if (contrato_v_261) {
    v_354 = v_353;
  } else {
    v_354 = false;
  };
  if (contrato_l1b) {
    v_350 = sub_31;
  } else {
    v_350 = sub_30;
  };
  if (contrato_v_261) {
    sub_27 = v_350;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_v_262) {
    sub_26 = v_352;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_l1b) {
    sub_34 = sub_31;
  } else {
    sub_34 = sub_29;
  };
  if (contrato_v_261) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_v_262) {
    v_355 = v_354;
  } else {
    v_355 = sub_33;
  };
  if (contrato_v_263) {
    sub_25 = v_355;
  } else {
    sub_25 = sub_26;
  };
  if (contrato_td) {
    v_362 = sub_25;
    sub_7 = sub_8;
  } else {
    v_362 = sub_8;
    sub_7 = sub_25;
  };
  if (contrato_ck_16_1) {
    sub_6 = v_362;
  } else {
    sub_6 = sub_7;
  };
  if (contrato_l2b) {
    sub_39 = sub_15;
  } else {
    sub_39 = sub_13;
  };
  if (contrato_l1b) {
    v_347 = sub_29;
  } else {
    v_347 = sub_39;
  };
  if (contrato_v_261) {
    v_348 = v_347;
  } else {
    v_348 = false;
  };
  if (contrato_l1b) {
    sub_38 = sub_11;
  } else {
    sub_38 = sub_39;
  };
  if (contrato_v_262) {
    sub_37 = v_348;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_263) {
    sub_36 = sub_20;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_l2b) {
    sub_44 = sub_17;
  } else {
    sub_44 = sub_13;
  };
  if (contrato_l1b) {
    v_342 = sub_29;
  } else {
    v_342 = sub_44;
  };
  if (contrato_v_261) {
    v_343 = v_342;
  } else {
    v_343 = false;
  };
  if (contrato_l1b) {
    sub_43 = sub_18;
  } else {
    sub_43 = sub_44;
  };
  v_339 = !(contrato_cb);
  sub_46 = (v_339||false);
  if (contrato_vb) {
    v_340 = sub_46;
  } else {
    v_340 = sub_12;
  };
  if (contrato_l2b) {
    sub_45 = v_340;
  } else {
    sub_45 = sub_13;
  };
  if (contrato_l1b) {
    v_344 = sub_45;
  } else {
    v_344 = sub_23;
  };
  if (contrato_v_261) {
    v_345 = v_344;
  } else {
    v_345 = false;
  };
  if (contrato_l1b) {
    v_341 = sub_45;
  } else {
    v_341 = sub_44;
  };
  if (contrato_v_261) {
    sub_42 = v_341;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_v_262) {
    sub_41 = v_343;
  } else {
    sub_41 = sub_42;
  };
  sub_49 = sub_17;
  if (contrato_l1b) {
    sub_48 = sub_45;
  } else {
    sub_48 = sub_49;
  };
  if (contrato_v_261) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  if (contrato_v_262) {
    v_346 = v_345;
  } else {
    v_346 = sub_47;
  };
  if (contrato_v_263) {
    sub_40 = v_346;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_td) {
    v_363 = sub_40;
    sub_35 = sub_36;
  } else {
    v_363 = sub_36;
    sub_35 = sub_40;
  };
  if (contrato_ck_16_1) {
    v_364 = v_363;
  } else {
    v_364 = sub_35;
  };
  if (contrato_ck_12_1) {
    sub_5 = v_364;
  } else {
    sub_5 = sub_6;
  };
  if (contrato_vb) {
    v_335 = false;
  } else {
    v_335 = sub_19;
  };
  sub_56 = sub_19;
  if (contrato_l2b) {
    sub_55 = v_335;
  } else {
    sub_55 = sub_56;
  };
  sub_59 = (contrato_cb||false);
  if (contrato_vb) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_19;
  };
  if (contrato_l2b) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_56;
  };
  if (contrato_l1b) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_57;
  };
  sub_60 = sub_56;
  if (contrato_l1b) {
    v_336 = sub_60;
  } else {
    v_336 = sub_57;
  };
  if (contrato_v_261) {
    v_337 = v_336;
  } else {
    v_337 = false;
  };
  if (contrato_v_262) {
    sub_53 = v_337;
  } else {
    sub_53 = sub_54;
  };
  sub_64 = sub_58;
  if (contrato_l1b) {
    sub_63 = sub_55;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_v_261) {
    sub_62 = false;
    sub_65 = sub_63;
  } else {
    sub_62 = sub_63;
    sub_65 = false;
  };
  if (contrato_v_262) {
    sub_61 = sub_65;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_v_263) {
    sub_52 = sub_61;
  } else {
    sub_52 = sub_53;
  };
  if (contrato_vb) {
    v_328 = sub_12;
  } else {
    v_328 = sub_19;
  };
  if (contrato_l2b) {
    sub_70 = v_328;
  } else {
    sub_70 = sub_56;
  };
  if (contrato_vb) {
    sub_72 = contrato_cb;
  } else {
    sub_72 = sub_19;
  };
  if (contrato_l2b) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_56;
  };
  if (contrato_l1b) {
    v_330 = sub_60;
  } else {
    v_330 = sub_71;
  };
  if (contrato_v_261) {
    v_331 = v_330;
  } else {
    v_331 = false;
  };
  if (contrato_l1b) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_71;
  };
  if (contrato_vb) {
    v_327 = sub_32;
  } else {
    v_327 = sub_19;
  };
  if (contrato_l2b) {
    sub_73 = v_327;
  } else {
    sub_73 = sub_56;
  };
  if (contrato_l1b) {
    v_332 = sub_73;
  } else {
    v_332 = sub_64;
  };
  if (contrato_v_261) {
    v_333 = v_332;
  } else {
    v_333 = false;
  };
  if (contrato_l1b) {
    v_329 = sub_73;
  } else {
    v_329 = sub_71;
  };
  if (contrato_v_261) {
    sub_68 = v_329;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_v_262) {
    sub_67 = v_331;
  } else {
    sub_67 = sub_68;
  };
  sub_76 = sub_72;
  if (contrato_l1b) {
    sub_75 = sub_73;
  } else {
    sub_75 = sub_76;
  };
  if (contrato_v_261) {
    sub_74 = false;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_v_262) {
    v_334 = v_333;
  } else {
    v_334 = sub_74;
  };
  if (contrato_v_263) {
    sub_66 = v_334;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_td) {
    v_338 = sub_66;
    sub_51 = sub_52;
  } else {
    v_338 = sub_52;
    sub_51 = sub_66;
  };
  if (contrato_ck_16_1) {
    sub_50 = v_338;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_l2b) {
    sub_81 = sub_58;
  } else {
    sub_81 = sub_72;
  };
  if (contrato_l1b) {
    v_325 = sub_70;
  } else {
    v_325 = sub_81;
  };
  if (contrato_v_261) {
    v_326 = v_325;
  } else {
    v_326 = false;
  };
  if (contrato_l1b) {
    sub_80 = sub_55;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_v_262) {
    sub_79 = v_326;
  } else {
    sub_79 = sub_80;
  };
  if (contrato_v_263) {
    sub_78 = sub_61;
  } else {
    sub_78 = sub_79;
  };
  if (contrato_l2b) {
    sub_86 = sub_56;
  } else {
    sub_86 = sub_72;
  };
  if (contrato_l1b) {
    v_320 = sub_70;
  } else {
    v_320 = sub_86;
  };
  if (contrato_v_261) {
    v_321 = v_320;
  } else {
    v_321 = false;
  };
  if (contrato_l1b) {
    sub_85 = sub_60;
  } else {
    sub_85 = sub_86;
  };
  if (contrato_vb) {
    v_318 = sub_46;
  } else {
    v_318 = sub_19;
  };
  if (contrato_l2b) {
    sub_87 = v_318;
  } else {
    sub_87 = sub_56;
  };
  if (contrato_l1b) {
    v_322 = sub_87;
  } else {
    v_322 = sub_64;
  };
  if (contrato_v_261) {
    v_323 = v_322;
  } else {
    v_323 = false;
  };
  if (contrato_l1b) {
    v_319 = sub_87;
  } else {
    v_319 = sub_86;
  };
  if (contrato_v_261) {
    sub_84 = v_319;
  } else {
    sub_84 = sub_85;
  };
  if (contrato_v_262) {
    sub_83 = v_321;
  } else {
    sub_83 = sub_84;
  };
  if (contrato_l1b) {
    sub_89 = sub_87;
  } else {
    sub_89 = sub_60;
  };
  if (contrato_v_261) {
    sub_88 = false;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_v_262) {
    v_324 = v_323;
  } else {
    v_324 = sub_88;
  };
  if (contrato_v_263) {
    sub_82 = v_324;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_td) {
    v_365 = sub_82;
    sub_77 = sub_78;
  } else {
    v_365 = sub_78;
    sub_77 = sub_82;
  };
  if (contrato_ck_16_1) {
    v_366 = v_365;
  } else {
    v_366 = sub_77;
  };
  if (contrato_ck_12_1) {
    v_367 = v_366;
  } else {
    v_367 = sub_50;
  };
  if (p_contrato_cm) {
    sub_4 = v_367;
  } else {
    sub_4 = sub_5;
  };
  if (contrato_l2b) {
    sub_97 = sub_13;
  } else {
    sub_97 = sub_15;
  };
  if (contrato_l1b) {
    v_310 = sub_11;
    sub_96 = sub_29;
  } else {
    v_310 = sub_97;
    sub_96 = sub_97;
  };
  sub_98 = sub_29;
  if (contrato_v_261) {
    v_311 = v_310;
  } else {
    v_311 = sub_98;
  };
  if (contrato_v_262) {
    sub_95 = v_311;
  } else {
    sub_95 = sub_96;
  };
  if (contrato_v_263) {
    sub_94 = sub_98;
  } else {
    sub_94 = sub_95;
  };
  if (contrato_l1b) {
    v_307 = sub_39;
  } else {
    v_307 = sub_29;
  };
  if (contrato_v_261) {
    v_308 = v_307;
    v_306 = sub_22;
  } else {
    v_308 = sub_98;
    v_306 = sub_98;
  };
  if (contrato_l1b) {
    sub_102 = sub_39;
  } else {
    sub_102 = sub_23;
  };
  if (contrato_v_261) {
    sub_101 = sub_102;
  } else {
    sub_101 = sub_22;
  };
  if (contrato_v_262) {
    sub_100 = v_306;
  } else {
    sub_100 = sub_101;
  };
  if (contrato_v_261) {
    sub_103 = sub_98;
  } else {
    sub_103 = sub_102;
  };
  if (contrato_v_262) {
    v_309 = v_308;
  } else {
    v_309 = sub_103;
  };
  if (contrato_v_263) {
    sub_99 = v_309;
  } else {
    sub_99 = sub_100;
  };
  if (contrato_td) {
    v_312 = sub_99;
    sub_93 = sub_94;
  } else {
    v_312 = sub_94;
    sub_93 = sub_99;
  };
  if (contrato_ck_16_1) {
    sub_92 = v_312;
  } else {
    sub_92 = sub_93;
  };
  if (contrato_l2b) {
    sub_108 = sub_17;
  } else {
    sub_108 = sub_15;
  };
  if (contrato_l1b) {
    v_302 = sub_11;
    sub_107 = sub_18;
  } else {
    v_302 = sub_108;
    sub_107 = sub_108;
  };
  sub_109 = sub_60;
  if (contrato_v_261) {
    v_303 = v_302;
  } else {
    v_303 = sub_109;
  };
  if (contrato_v_262) {
    sub_106 = v_303;
  } else {
    sub_106 = sub_107;
  };
  if (contrato_l1b) {
    sub_111 = sub_18;
  } else {
    sub_111 = sub_49;
  };
  if (contrato_v_261) {
    v_304 = sub_111;
    sub_110 = sub_109;
  } else {
    v_304 = sub_109;
    sub_110 = sub_111;
  };
  if (contrato_v_262) {
    v_305 = v_304;
  } else {
    v_305 = sub_110;
  };
  if (contrato_v_263) {
    sub_105 = v_305;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_v_261) {
    v_298 = sub_22;
  } else {
    v_298 = sub_109;
  };
  if (contrato_vb) {
    v_297 = sub_59;
  } else {
    v_297 = sub_12;
  };
  if (contrato_l2b) {
    sub_116 = v_297;
  } else {
    sub_116 = sub_13;
  };
  if (contrato_l1b) {
    v_299 = sub_116;
  } else {
    v_299 = sub_49;
  };
  if (contrato_v_261) {
    v_300 = v_299;
  } else {
    v_300 = sub_109;
  };
  if (contrato_l1b) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_23;
  };
  if (contrato_v_261) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_22;
  };
  if (contrato_v_262) {
    sub_113 = v_298;
  } else {
    sub_113 = sub_114;
  };
  if (contrato_v_261) {
    sub_117 = sub_109;
  } else {
    sub_117 = sub_115;
  };
  if (contrato_v_262) {
    v_301 = v_300;
  } else {
    v_301 = sub_117;
  };
  if (contrato_v_263) {
    sub_112 = v_301;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_td) {
    v_313 = sub_112;
    sub_104 = sub_105;
  } else {
    v_313 = sub_105;
    sub_104 = sub_112;
  };
  if (contrato_ck_16_1) {
    v_314 = v_313;
  } else {
    v_314 = sub_104;
  };
  if (contrato_ck_12_1) {
    sub_91 = v_314;
  } else {
    sub_91 = sub_92;
  };
  if (contrato_l2b) {
    sub_123 = sub_72;
  } else {
    sub_123 = sub_58;
  };
  if (contrato_l1b) {
    v_292 = sub_55;
  } else {
    v_292 = sub_123;
  };
  if (contrato_v_261) {
    v_293 = v_292;
  } else {
    v_293 = sub_98;
  };
  if (contrato_l1b) {
    sub_122 = sub_70;
  } else {
    sub_122 = sub_123;
  };
  if (contrato_v_262) {
    sub_121 = v_293;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_l1b) {
    sub_125 = sub_70;
  } else {
    sub_125 = sub_76;
  };
  if (contrato_v_261) {
    v_294 = sub_125;
    sub_124 = sub_98;
  } else {
    v_294 = sub_98;
    sub_124 = sub_125;
  };
  if (contrato_v_262) {
    v_295 = v_294;
  } else {
    v_295 = sub_124;
  };
  if (contrato_v_263) {
    sub_120 = v_295;
  } else {
    sub_120 = sub_121;
  };
  if (contrato_v_261) {
    v_288 = sub_63;
  } else {
    v_288 = sub_98;
  };
  if (contrato_vb) {
    v_287 = sub_16;
  } else {
    v_287 = sub_19;
  };
  if (contrato_l2b) {
    sub_130 = v_287;
  } else {
    sub_130 = sub_56;
  };
  if (contrato_l1b) {
    v_289 = sub_130;
  } else {
    v_289 = sub_76;
  };
  if (contrato_v_261) {
    v_290 = v_289;
  } else {
    v_290 = sub_98;
  };
  if (contrato_l1b) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_64;
  };
  if (contrato_v_261) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_63;
  };
  if (contrato_v_262) {
    sub_127 = v_288;
  } else {
    sub_127 = sub_128;
  };
  if (contrato_v_261) {
    sub_131 = sub_98;
  } else {
    sub_131 = sub_129;
  };
  if (contrato_v_262) {
    v_291 = v_290;
  } else {
    v_291 = sub_131;
  };
  if (contrato_v_263) {
    sub_126 = v_291;
  } else {
    sub_126 = sub_127;
  };
  if (contrato_td) {
    v_296 = sub_126;
    sub_119 = sub_120;
  } else {
    v_296 = sub_120;
    sub_119 = sub_126;
  };
  if (contrato_ck_16_1) {
    sub_118 = v_296;
  } else {
    sub_118 = sub_119;
  };
  if (contrato_l2b) {
    sub_136 = sub_56;
  } else {
    sub_136 = sub_58;
  };
  if (contrato_l1b) {
    v_285 = sub_55;
  } else {
    v_285 = sub_136;
  };
  if (contrato_v_261) {
    v_286 = v_285;
  } else {
    v_286 = sub_109;
  };
  if (contrato_l1b) {
    sub_135 = sub_60;
  } else {
    sub_135 = sub_136;
  };
  if (contrato_v_262) {
    sub_134 = v_286;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_v_263) {
    sub_133 = sub_109;
  } else {
    sub_133 = sub_134;
  };
  if (contrato_l1b) {
    v_282 = sub_57;
  } else {
    v_282 = sub_60;
  };
  if (contrato_v_261) {
    v_283 = v_282;
    v_281 = sub_63;
  } else {
    v_283 = sub_109;
    v_281 = sub_109;
  };
  if (contrato_l1b) {
    sub_140 = sub_57;
  } else {
    sub_140 = sub_64;
  };
  if (contrato_v_261) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_63;
  };
  if (contrato_v_262) {
    sub_138 = v_281;
  } else {
    sub_138 = sub_139;
  };
  if (contrato_v_261) {
    sub_141 = sub_109;
  } else {
    sub_141 = sub_140;
  };
  if (contrato_v_262) {
    v_284 = v_283;
  } else {
    v_284 = sub_141;
  };
  if (contrato_v_263) {
    sub_137 = v_284;
  } else {
    sub_137 = sub_138;
  };
  if (contrato_td) {
    v_315 = sub_137;
    sub_132 = sub_133;
  } else {
    v_315 = sub_133;
    sub_132 = sub_137;
  };
  if (contrato_ck_16_1) {
    v_316 = v_315;
  } else {
    v_316 = sub_132;
  };
  if (contrato_ck_12_1) {
    v_317 = v_316;
  } else {
    v_317 = sub_118;
  };
  if (p_contrato_cm) {
    sub_90 = v_317;
  } else {
    sub_90 = sub_91;
  };
  if (contrato_ck_10_1) {
    v_369 = sub_4;
    v_368 = sub_90;
  } else {
    v_369 = sub_90;
    v_368 = sub_4;
  };
  if (contrato_cp) {
    sub_3 = v_368;
  } else {
    sub_3 = v_369;
  };
  if (contrato_v_262) {
    sub_146 = sub_24;
  } else {
    sub_146 = sub_22;
  };
  if (contrato_v_263) {
    sub_145 = sub_20;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (contrato_v_262) {
    sub_148 = sub_65;
  } else {
    sub_148 = sub_63;
  };
  if (contrato_v_263) {
    sub_147 = sub_61;
  } else {
    sub_147 = sub_148;
  };
  if (p_contrato_cm) {
    sub_143 = sub_147;
  } else {
    sub_143 = sub_144;
  };
  if (contrato_ck_10_1) {
    v_280 = sub_143;
    v = sub_90;
  } else {
    v_280 = sub_90;
    v = sub_143;
  };
  if (contrato_cp) {
    sub_142 = v;
  } else {
    sub_142 = v_280;
  };
  if (contrato_v_294) {
    v_370 = sub_3;
  } else {
    v_370 = sub_142;
  };
  if (contrato_v_295) {
    sub_2 = v_370;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->contrato_cm = sub_0;;
}

void Contrato_controller__contrato_controller_contrato_cp_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_tm,
                                                               int contrato_om,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_295,
                                                               int contrato_v_294,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_1,
                                                               int contrato_v_263,
                                                               int contrato_v_262,
                                                               int contrato_v_261,
                                                               int contrato_pnr,
                                                               int p_contrato_ts,
                                                               int p_contrato_co,
                                                               int p_contrato_ca,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cp_out* _out) {
  
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
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
  sub_10 = false;
  sub_12 = p_contrato_cp;
  sub_11 = sub_12;
  if (contrato_vb) {
    v_411 = sub_10;
  } else {
    v_411 = sub_11;
  };
  sub_13 = sub_11;
  if (contrato_l2b) {
    sub_9 = v_411;
  } else {
    sub_9 = sub_13;
  };
  v_410 = (contrato_cb&&sub_12);
  if (contrato_vb) {
    sub_15 = v_410;
  } else {
    sub_15 = sub_11;
  };
  v_408 = !(contrato_cb);
  v_409 = (v_408||sub_12);
  if (contrato_vb) {
    sub_16 = v_409;
  } else {
    sub_16 = sub_11;
  };
  if (contrato_l2b) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_16;
  };
  if (contrato_l1b) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_14;
  };
  sub_19 = sub_10;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_21 = true;
  if (contrato_vb) {
    v_407 = sub_21;
  } else {
    v_407 = sub_11;
  };
  if (contrato_l2b) {
    sub_20 = v_407;
  } else {
    sub_20 = sub_13;
  };
  if (contrato_l1b) {
    v_412 = sub_20;
  } else {
    v_412 = sub_14;
  };
  if (contrato_v_261) {
    v_413 = v_412;
  } else {
    v_413 = sub_17;
  };
  if (contrato_v_262) {
    sub_7 = v_413;
  } else {
    sub_7 = sub_8;
  };
  sub_25 = sub_15;
  if (contrato_l1b) {
    sub_24 = sub_9;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_v_261) {
    v_406 = sub_24;
    sub_23 = sub_17;
  } else {
    v_406 = sub_17;
    sub_23 = sub_24;
  };
  if (contrato_v_262) {
    sub_22 = v_406;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_v_263) {
    sub_6 = sub_22;
  } else {
    sub_6 = sub_7;
  };
  sub_30 = sub_16;
  if (contrato_l1b) {
    sub_29 = sub_20;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_v_261) {
    v_402 = sub_29;
  } else {
    v_402 = sub_17;
  };
  v_400 = !(contrato_cb);
  if (contrato_vb) {
    v_401 = v_400;
  } else {
    v_401 = sub_11;
  };
  if (contrato_l2b) {
    sub_32 = v_401;
  } else {
    sub_32 = sub_13;
  };
  if (contrato_l1b) {
    v_403 = sub_32;
  } else {
    v_403 = sub_25;
  };
  if (contrato_v_261) {
    v_404 = v_403;
  } else {
    v_404 = sub_17;
  };
  if (contrato_l1b) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_30;
  };
  if (contrato_v_261) {
    sub_28 = sub_31;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_v_262) {
    sub_27 = v_402;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_v_261) {
    sub_33 = sub_17;
  } else {
    sub_33 = sub_31;
  };
  if (contrato_v_262) {
    v_405 = v_404;
  } else {
    v_405 = sub_33;
  };
  if (contrato_v_263) {
    sub_26 = v_405;
  } else {
    sub_26 = sub_27;
  };
  if (contrato_td) {
    v_414 = sub_26;
    sub_5 = sub_6;
  } else {
    v_414 = sub_6;
    sub_5 = sub_26;
  };
  if (contrato_ck_16_1) {
    sub_4 = v_414;
  } else {
    sub_4 = sub_5;
  };
  if (contrato_l2b) {
    sub_38 = sub_16;
  } else {
    sub_38 = sub_15;
  };
  if (contrato_l1b) {
    v_398 = sub_9;
    sub_37 = sub_20;
  } else {
    v_398 = sub_38;
    sub_37 = sub_38;
  };
  sub_41 = sub_21;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (contrato_v_261) {
    v_399 = v_398;
  } else {
    v_399 = sub_39;
  };
  if (contrato_v_262) {
    sub_36 = v_399;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_v_261) {
    v_397 = sub_29;
    sub_43 = sub_39;
  } else {
    v_397 = sub_39;
    sub_43 = sub_29;
  };
  if (contrato_v_262) {
    sub_42 = v_397;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_v_263) {
    sub_35 = sub_42;
  } else {
    sub_35 = sub_36;
  };
  if (contrato_v_261) {
    v_393 = sub_24;
  } else {
    v_393 = sub_39;
  };
  if (contrato_vb) {
    v_392 = contrato_cb;
  } else {
    v_392 = sub_11;
  };
  if (contrato_l2b) {
    sub_48 = v_392;
  } else {
    sub_48 = sub_13;
  };
  if (contrato_l1b) {
    v_394 = sub_48;
  } else {
    v_394 = sub_30;
  };
  if (contrato_v_261) {
    v_395 = v_394;
  } else {
    v_395 = sub_39;
  };
  if (contrato_l1b) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_25;
  };
  if (contrato_v_261) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_24;
  };
  if (contrato_v_262) {
    sub_45 = v_393;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_v_261) {
    sub_49 = sub_39;
  } else {
    sub_49 = sub_47;
  };
  if (contrato_v_262) {
    v_396 = v_395;
  } else {
    v_396 = sub_49;
  };
  if (contrato_v_263) {
    sub_44 = v_396;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_td) {
    v_415 = sub_44;
    sub_34 = sub_35;
  } else {
    v_415 = sub_35;
    sub_34 = sub_44;
  };
  if (contrato_ck_16_1) {
    v_416 = v_415;
  } else {
    v_416 = sub_34;
  };
  if (contrato_ck_10_1) {
    sub_3 = v_416;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_cb) {
    v_386 = sub_12;
  } else {
    v_386 = false;
  };
  if (contrato_vb) {
    sub_57 = v_386;
  } else {
    sub_57 = sub_11;
  };
  if (contrato_l2b) {
    sub_56 = sub_15;
  } else {
    sub_56 = sub_57;
  };
  if (contrato_l1b) {
    sub_55 = sub_9;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_vb) {
    v_385 = false;
  } else {
    v_385 = sub_11;
  };
  if (contrato_l2b) {
    sub_58 = v_385;
  } else {
    sub_58 = sub_13;
  };
  if (contrato_l1b) {
    v_387 = sub_58;
  } else {
    v_387 = sub_56;
  };
  if (contrato_v_261) {
    v_388 = v_387;
  } else {
    v_388 = sub_17;
  };
  if (contrato_v_262) {
    sub_54 = v_388;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_v_263) {
    sub_53 = sub_22;
  } else {
    sub_53 = sub_54;
  };
  sub_63 = sub_57;
  if (contrato_l1b) {
    sub_62 = sub_58;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_v_261) {
    v_381 = sub_62;
  } else {
    v_381 = sub_17;
  };
  v_378 = !(contrato_cb);
  v_379 = (v_378&&false);
  if (contrato_vb) {
    v_380 = v_379;
  } else {
    v_380 = sub_11;
  };
  if (contrato_l2b) {
    sub_65 = v_380;
  } else {
    sub_65 = sub_13;
  };
  if (contrato_l1b) {
    v_382 = sub_65;
  } else {
    v_382 = sub_25;
  };
  if (contrato_v_261) {
    v_383 = v_382;
  } else {
    v_383 = sub_17;
  };
  if (contrato_l1b) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_63;
  };
  if (contrato_v_261) {
    sub_61 = sub_64;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_v_262) {
    sub_60 = v_381;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_261) {
    sub_66 = sub_17;
  } else {
    sub_66 = sub_64;
  };
  if (contrato_v_262) {
    v_384 = v_383;
  } else {
    v_384 = sub_66;
  };
  if (contrato_v_263) {
    sub_59 = v_384;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_td) {
    v_389 = sub_59;
    sub_52 = sub_53;
  } else {
    v_389 = sub_53;
    sub_52 = sub_59;
  };
  if (contrato_ck_16_1) {
    sub_51 = v_389;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_l2b) {
    sub_71 = sub_16;
  } else {
    sub_71 = sub_57;
  };
  if (contrato_l1b) {
    v_376 = sub_58;
  } else {
    v_376 = sub_71;
  };
  if (contrato_v_261) {
    v_377 = v_376;
  } else {
    v_377 = sub_39;
  };
  if (contrato_l1b) {
    sub_70 = sub_20;
  } else {
    sub_70 = sub_71;
  };
  if (contrato_v_262) {
    sub_69 = v_377;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_263) {
    sub_68 = sub_42;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_v_261) {
    v_372 = sub_62;
  } else {
    v_372 = sub_39;
  };
  v = (contrato_cb||false);
  if (contrato_vb) {
    v_371 = v;
  } else {
    v_371 = sub_11;
  };
  if (contrato_l2b) {
    sub_76 = v_371;
  } else {
    sub_76 = sub_13;
  };
  if (contrato_l1b) {
    v_373 = sub_76;
  } else {
    v_373 = sub_30;
  };
  if (contrato_v_261) {
    v_374 = v_373;
  } else {
    v_374 = sub_39;
  };
  if (contrato_l1b) {
    sub_75 = sub_76;
  } else {
    sub_75 = sub_63;
  };
  if (contrato_v_261) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_62;
  };
  if (contrato_v_262) {
    sub_73 = v_372;
  } else {
    sub_73 = sub_74;
  };
  if (contrato_v_261) {
    sub_77 = sub_39;
  } else {
    sub_77 = sub_75;
  };
  if (contrato_v_262) {
    v_375 = v_374;
  } else {
    v_375 = sub_77;
  };
  if (contrato_v_263) {
    sub_72 = v_375;
  } else {
    sub_72 = sub_73;
  };
  if (contrato_td) {
    v_390 = sub_72;
    sub_67 = sub_68;
  } else {
    v_390 = sub_68;
    sub_67 = sub_72;
  };
  if (contrato_ck_16_1) {
    v_391 = v_390;
  } else {
    v_391 = sub_67;
  };
  if (contrato_ck_10_1) {
    sub_50 = v_391;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_v_294) {
    v_417 = sub_3;
  } else {
    v_417 = sub_50;
  };
  if (contrato_v_295) {
    sub_2 = v_417;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  sub_0 = sub_1;
  _out->contrato_cp = sub_0;;
}

void Contrato_controller__contrato_controller_step(int contrato_cb,
                                                   int contrato_l1b,
                                                   int contrato_l2b,
                                                   int contrato_vb,
                                                   int contrato_td,
                                                   int contrato_tm,
                                                   int contrato_om,
                                                   int contrato_ck_10_1,
                                                   int contrato_pnr_4,
                                                   int contrato_ck_12_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_295,
                                                   int contrato_v_294,
                                                   int contrato_pnr_2,
                                                   int contrato_ck_16_1,
                                                   int contrato_pnr_1,
                                                   int contrato_v_263,
                                                   int contrato_v_262,
                                                   int contrato_v_261,
                                                   int contrato_pnr,
                                                   int p_contrato_ts,
                                                   int p_contrato_co,
                                                   int p_contrato_ca,
                                                   int p_contrato_cm,
                                                   int p_contrato_cp,
                                                   Contrato_controller__contrato_controller_out* _out) {
  Contrato_controller__contrato_controller_contrato_cm_out Contrato_controller__contrato_controller_contrato_cm_out_st;
  Contrato_controller__contrato_controller_contrato_ca_out Contrato_controller__contrato_controller_contrato_ca_out_st;
  Contrato_controller__contrato_controller_contrato_cp_out Contrato_controller__contrato_controller_contrato_cp_out_st;
  Contrato_controller__contrato_controller_contrato_co_out Contrato_controller__contrato_controller_contrato_co_out_st;
  Contrato_controller__contrato_controller_contrato_ts_out Contrato_controller__contrato_controller_contrato_ts_out_st;
  Contrato_controller__contrato_controller_contrato_cp_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_tm,
                                                            contrato_om,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_3,
                                                            contrato_v_295,
                                                            contrato_v_294,
                                                            contrato_pnr_2,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_1,
                                                            contrato_v_263,
                                                            contrato_v_262,
                                                            contrato_v_261,
                                                            contrato_pnr,
                                                            p_contrato_ts,
                                                            p_contrato_co,
                                                            p_contrato_ca,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_cp_out_st);
  _out->contrato_cp = Contrato_controller__contrato_controller_contrato_cp_out_st.contrato_cp;
  Contrato_controller__contrato_controller_contrato_cm_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_tm,
                                                            contrato_om,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_3,
                                                            contrato_v_295,
                                                            contrato_v_294,
                                                            contrato_pnr_2,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_1,
                                                            contrato_v_263,
                                                            contrato_v_262,
                                                            contrato_v_261,
                                                            contrato_pnr,
                                                            p_contrato_ts,
                                                            p_contrato_co,
                                                            p_contrato_ca,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            _out->contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_cm_out_st);
  _out->contrato_cm = Contrato_controller__contrato_controller_contrato_cm_out_st.contrato_cm;
  Contrato_controller__contrato_controller_contrato_ca_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_tm,
                                                            contrato_om,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_3,
                                                            contrato_v_295,
                                                            contrato_v_294,
                                                            contrato_pnr_2,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_1,
                                                            contrato_v_263,
                                                            contrato_v_262,
                                                            contrato_v_261,
                                                            contrato_pnr,
                                                            p_contrato_ts,
                                                            p_contrato_co,
                                                            p_contrato_ca,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            _out->contrato_cm,
                                                            _out->contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_ca_out_st);
  _out->contrato_ca = Contrato_controller__contrato_controller_contrato_ca_out_st.contrato_ca;
  Contrato_controller__contrato_controller_contrato_co_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_tm,
                                                            contrato_om,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_3,
                                                            contrato_v_295,
                                                            contrato_v_294,
                                                            contrato_pnr_2,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_1,
                                                            contrato_v_263,
                                                            contrato_v_262,
                                                            contrato_v_261,
                                                            contrato_pnr,
                                                            p_contrato_ts,
                                                            p_contrato_co,
                                                            p_contrato_ca,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            _out->contrato_ca,
                                                            _out->contrato_cm,
                                                            _out->contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_co_out_st);
  _out->contrato_co = Contrato_controller__contrato_controller_contrato_co_out_st.contrato_co;
  Contrato_controller__contrato_controller_contrato_ts_step(contrato_cb,
                                                            contrato_l1b,
                                                            contrato_l2b,
                                                            contrato_vb,
                                                            contrato_td,
                                                            contrato_tm,
                                                            contrato_om,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_3,
                                                            contrato_v_295,
                                                            contrato_v_294,
                                                            contrato_pnr_2,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_1,
                                                            contrato_v_263,
                                                            contrato_v_262,
                                                            contrato_v_261,
                                                            contrato_pnr,
                                                            p_contrato_ts,
                                                            p_contrato_co,
                                                            p_contrato_ca,
                                                            p_contrato_cm,
                                                            p_contrato_cp,
                                                            _out->contrato_co,
                                                            _out->contrato_ca,
                                                            _out->contrato_cm,
                                                            _out->contrato_cp,
                                                            &Contrato_controller__contrato_controller_contrato_ts_out_st);
  _out->contrato_ts = Contrato_controller__contrato_controller_contrato_ts_out_st.contrato_ts;
}

