/* --- Generated the 10/6/2018 at 9:2 --- */
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  sub_21 = false;
  v_123 = (contrato_ck_18_1&&false);
  v_121 = !(contrato_ck_18_1);
  v_122 = (v_121&&false);
  if (contrato_botao_tv) {
    sub_22 = v_122;
  } else {
    sub_22 = v_123;
  };
  if (contrato_ct1) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  sub_23 = sub_21;
  if (contrato_ck_16_1) {
    v_125 = sub_20;
    sub_19 = sub_23;
  } else {
    v_125 = sub_23;
    sub_19 = sub_20;
  };
  if (contrato_botao_lamp) {
    v_126 = sub_19;
  } else {
    v_126 = v_125;
  };
  if (contrato_cl1) {
    v_127 = sub_23;
    v_124 = sub_19;
  } else {
    v_127 = v_126;
    v_124 = sub_20;
  };
  if (contrato_cl2) {
    sub_18 = v_124;
  } else {
    sub_18 = v_127;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (contrato_rad_up2) {
    v_120 = false;
  } else {
    v_120 = sub_12;
  };
  if (contrato_rc2) {
    sub_26 = v_120;
  } else {
    sub_26 = sub_11;
  };
  if (contrato_v_426) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_10;
  };
  sub_24 = sub_25;
  if (contrato_rc1) {
    v_128 = sub_9;
  } else {
    v_128 = sub_24;
  };
  sub_27 = sub_24;
  if (contrato_rad_up1) {
    sub_8 = v_128;
  } else {
    sub_8 = sub_27;
  };
  if (contrato_rad_down2) {
    sub_30 = sub_13;
  } else {
    sub_30 = false;
  };
  if (contrato_rc2) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_11;
  };
  if (contrato_v_426) {
    v_118 = sub_26;
  } else {
    v_118 = sub_29;
  };
  if (contrato_rad_down1) {
    v_119 = sub_10;
  } else {
    v_119 = v_118;
  };
  if (contrato_rc1) {
    sub_28 = v_119;
  } else {
    sub_28 = sub_9;
  };
  if (contrato_v_427) {
    v_129 = sub_28;
  } else {
    v_129 = sub_8;
  };
  v_111 = !(contrato_ck_18_1);
  v_110 = !(contrato_ck_18_1);
  sub_46 = (v_110||false);
  sub_45 = sub_46;
  sub_47 = contrato_ck_18_1;
  if (contrato_botao_tv) {
    v_112 = sub_47;
  } else {
    v_112 = v_111;
  };
  if (contrato_ct1) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_112;
  };
  if (contrato_ck_16_1) {
    v_114 = sub_44;
    sub_43 = false;
  } else {
    v_114 = false;
    sub_43 = sub_44;
  };
  if (contrato_botao_lamp) {
    v_115 = sub_43;
  } else {
    v_115 = v_114;
  };
  if (contrato_cl1) {
    v_116 = false;
    v_113 = sub_43;
  } else {
    v_116 = v_115;
    v_113 = sub_44;
  };
  if (contrato_cl2) {
    sub_42 = v_113;
  } else {
    sub_42 = v_116;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (contrato_v_426) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_rad_up2) {
    v_108 = false;
  } else {
    v_108 = sub_36;
  };
  if (contrato_rc2) {
    v_109 = v_108;
  } else {
    v_109 = sub_35;
  };
  if (contrato_v_426) {
    sub_49 = v_109;
  } else {
    sub_49 = sub_34;
  };
  sub_48 = sub_49;
  if (contrato_rc1) {
    v_117 = sub_33;
  } else {
    v_117 = sub_48;
  };
  if (contrato_rad_up1) {
    sub_32 = v_117;
  } else {
    sub_32 = sub_48;
  };
  if (contrato_v_426) {
    sub_51 = sub_34;
  } else {
    sub_51 = false;
  };
  if (contrato_rad_down2) {
    sub_53 = sub_37;
  } else {
    sub_53 = false;
  };
  if (contrato_rc2) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_35;
  };
  if (contrato_v_426) {
    v_106 = false;
  } else {
    v_106 = sub_52;
  };
  if (contrato_rad_down1) {
    v_107 = sub_51;
  } else {
    v_107 = v_106;
  };
  if (contrato_rc1) {
    sub_50 = v_107;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_v_427) {
    sub_31 = sub_50;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_presenca) {
    sub_7 = v_129;
  } else {
    sub_7 = sub_31;
  };
  if (contrato_v_426) {
    sub_56 = false;
  } else {
    sub_56 = sub_10;
  };
  if (contrato_rc1) {
    v_104 = sub_56;
  } else {
    v_104 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_55 = v_104;
  } else {
    sub_55 = sub_27;
  };
  if (contrato_v_426) {
    v_102 = false;
    sub_58 = sub_10;
  } else {
    v_102 = sub_29;
    sub_58 = false;
  };
  if (contrato_rad_down1) {
    v_103 = sub_58;
  } else {
    v_103 = v_102;
  };
  if (contrato_rc1) {
    sub_57 = v_103;
  } else {
    sub_57 = sub_58;
  };
  if (contrato_v_427) {
    v_105 = sub_57;
  } else {
    v_105 = sub_55;
  };
  if (contrato_presenca) {
    sub_54 = v_105;
  } else {
    sub_54 = false;
  };
  if (contrato_ck_14_1) {
    v_131 = sub_7;
    v_130 = sub_54;
  } else {
    v_131 = sub_54;
    v_130 = sub_7;
  };
  if (contrato_push_janela) {
    v_132 = v_130;
  } else {
    v_132 = v_131;
  };
  if (contrato_cj) {
    sub_6 = v_132;
  } else {
    sub_6 = sub_7;
  };
  sub_60 = sub_54;
  sub_59 = sub_60;
  if (contrato_ck_12_1) {
    v_134 = sub_6;
    v_133 = sub_59;
  } else {
    v_134 = sub_59;
    v_133 = sub_6;
  };
  if (contrato_push_porta) {
    v_135 = v_133;
  } else {
    v_135 = v_134;
  };
  if (contrato_cp) {
    sub_5 = v_135;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (contrato_co) {
    sub_79 = false;
  } else {
    sub_79 = sub_15;
  };
  sub_78 = sub_79;
  if (contrato_v_332) {
    sub_77 = sub_13;
  } else {
    sub_77 = sub_78;
  };
  if (contrato_v_331) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  if (contrato_start_oven) {
    sub_81 = sub_79;
  } else {
    sub_81 = sub_14;
  };
  if (contrato_v_332) {
    sub_80 = false;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_finish_oven) {
    v_86 = sub_18;
  } else {
    v_86 = false;
  };
  if (contrato_tok) {
    sub_85 = sub_17;
  } else {
    sub_85 = v_86;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (contrato_v_332) {
    v_87 = sub_82;
  } else {
    v_87 = sub_13;
  };
  if (contrato_v_331) {
    v_88 = v_87;
  } else {
    v_88 = sub_80;
  };
  if (contrato_v_330) {
    sub_75 = v_88;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (contrato_v_426) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_10;
  };
  if (contrato_rc1) {
    v_89 = sub_71;
  } else {
    v_89 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_70 = v_89;
  } else {
    sub_70 = sub_27;
  };
  if (contrato_rad_up2) {
    v_82 = false;
  } else {
    v_82 = sub_74;
  };
  if (contrato_rc2) {
    v_83 = v_82;
  } else {
    v_83 = sub_73;
  };
  if (contrato_v_426) {
    v_84 = v_83;
    sub_87 = sub_10;
  } else {
    v_84 = sub_29;
    sub_87 = sub_72;
  };
  if (contrato_rad_down1) {
    v_85 = sub_87;
  } else {
    v_85 = v_84;
  };
  if (contrato_rc1) {
    sub_86 = v_85;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_v_427) {
    v_90 = sub_86;
  } else {
    v_90 = sub_70;
  };
  if (contrato_presenca) {
    sub_69 = v_90;
  } else {
    sub_69 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_92 = sub_69;
    v_91 = sub_54;
  } else {
    v_92 = sub_54;
    v_91 = sub_69;
  };
  if (contrato_push_janela) {
    v_93 = v_91;
  } else {
    v_93 = v_92;
  };
  if (contrato_cj) {
    sub_68 = v_93;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_ck_12_1) {
    v_95 = sub_68;
    v_94 = sub_59;
  } else {
    v_95 = sub_59;
    v_94 = sub_68;
  };
  if (contrato_push_porta) {
    v_96 = v_94;
  } else {
    v_96 = v_95;
  };
  if (contrato_cp) {
    sub_67 = v_96;
  } else {
    sub_67 = sub_68;
  };
  if (contrato_v_390) {
    sub_88 = sub_67;
  } else {
    sub_88 = sub_5;
  };
  if (contrato_end_wash) {
    v_97 = sub_88;
  } else {
    v_97 = sub_67;
  };
  if (contrato_cws) {
    sub_66 = sub_67;
  } else {
    sub_66 = v_97;
  };
  sub_89 = sub_88;
  if (contrato_cws) {
    v_98 = sub_89;
  } else {
    v_98 = sub_4;
  };
  if (contrato_v_391) {
    sub_65 = v_98;
  } else {
    sub_65 = sub_66;
  };
  sub_64 = sub_65;
  if (contrato_v_332) {
    sub_102 = sub_82;
  } else {
    sub_102 = sub_78;
  };
  if (contrato_v_331) {
    sub_101 = false;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_cold) {
    v_69 = false;
  } else {
    v_69 = sub_16;
  };
  if (contrato_co) {
    sub_104 = v_69;
  } else {
    sub_104 = sub_15;
  };
  sub_103 = sub_104;
  if (contrato_v_332) {
    v_70 = sub_82;
  } else {
    v_70 = sub_103;
  };
  if (contrato_v_331) {
    v_71 = v_70;
  } else {
    v_71 = sub_80;
  };
  if (contrato_v_330) {
    sub_100 = v_71;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (contrato_v_426) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_10;
  };
  if (contrato_rc1) {
    v_72 = sub_96;
  } else {
    v_72 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_95 = v_72;
  } else {
    sub_95 = sub_27;
  };
  if (contrato_rad_up2) {
    v_65 = false;
  } else {
    v_65 = sub_99;
  };
  if (contrato_rc2) {
    v_66 = v_65;
  } else {
    v_66 = sub_98;
  };
  if (contrato_v_426) {
    v_67 = v_66;
    sub_106 = sub_10;
  } else {
    v_67 = sub_29;
    sub_106 = sub_97;
  };
  if (contrato_rad_down1) {
    v_68 = sub_106;
  } else {
    v_68 = v_67;
  };
  if (contrato_rc1) {
    sub_105 = v_68;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_v_427) {
    v_73 = sub_105;
  } else {
    v_73 = sub_95;
  };
  if (contrato_presenca) {
    sub_94 = v_73;
  } else {
    sub_94 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_75 = sub_94;
    v_74 = sub_54;
  } else {
    v_75 = sub_54;
    v_74 = sub_94;
  };
  if (contrato_push_janela) {
    v_76 = v_74;
  } else {
    v_76 = v_75;
  };
  if (contrato_cj) {
    sub_93 = v_76;
  } else {
    sub_93 = sub_94;
  };
  if (contrato_ck_12_1) {
    v_78 = sub_93;
    v_77 = sub_59;
  } else {
    v_78 = sub_59;
    v_77 = sub_93;
  };
  if (contrato_push_porta) {
    v_79 = v_77;
  } else {
    v_79 = v_78;
  };
  if (contrato_cp) {
    sub_92 = v_79;
  } else {
    sub_92 = sub_93;
  };
  if (contrato_v_390) {
    v_81 = sub_67;
    v_80 = sub_92;
  } else {
    v_81 = sub_92;
    v_80 = sub_5;
  };
  if (contrato_end_wash) {
    sub_91 = v_80;
  } else {
    sub_91 = v_81;
  };
  sub_90 = sub_91;
  if (contrato_v_391) {
    v_100 = sub_3;
    v_99 = sub_89;
  } else {
    v_100 = sub_90;
    v_99 = sub_90;
  };
  if (contrato_start_wash) {
    v_101 = v_99;
  } else {
    v_101 = v_100;
  };
  if (contrato_v_389) {
    sub_63 = v_101;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_v_289) {
    sub_62 = sub_2;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_comfort_input) {
    v_136 = sub_62;
    sub_61 = sub_2;
  } else {
    v_136 = sub_63;
    sub_61 = sub_62;
  };
  if (contrato_v_288) {
    v_137 = v_136;
  } else {
    v_137 = sub_61;
  };
  if (contrato_eco_input) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_137;
  };
  if (contrato_ct1) {
    sub_125 = sub_47;
  } else {
    sub_125 = sub_22;
  };
  sub_127 = true;
  sub_126 = sub_127;
  if (contrato_ck_16_1) {
    v_54 = sub_125;
    sub_124 = sub_126;
  } else {
    v_54 = sub_126;
    sub_124 = sub_125;
  };
  if (contrato_botao_lamp) {
    v_55 = sub_124;
  } else {
    v_55 = v_54;
  };
  if (contrato_cl1) {
    v_56 = sub_126;
    v_53 = sub_124;
  } else {
    v_56 = v_55;
    v_53 = sub_125;
  };
  if (contrato_cl2) {
    sub_123 = v_53;
  } else {
    sub_123 = v_56;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (contrato_rad_up2) {
    v_52 = false;
  } else {
    v_52 = sub_117;
  };
  if (contrato_rc2) {
    sub_130 = v_52;
  } else {
    sub_130 = sub_116;
  };
  if (contrato_v_426) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_115;
  };
  sub_128 = sub_129;
  if (contrato_rc1) {
    v_57 = sub_114;
  } else {
    v_57 = sub_128;
  };
  sub_131 = sub_128;
  if (contrato_rad_up1) {
    sub_113 = v_57;
  } else {
    sub_113 = sub_131;
  };
  if (contrato_rad_down2) {
    sub_134 = sub_118;
  } else {
    sub_134 = false;
  };
  if (contrato_rc2) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_116;
  };
  if (contrato_v_426) {
    v_50 = sub_130;
  } else {
    v_50 = sub_133;
  };
  if (contrato_rad_down1) {
    v_51 = sub_115;
  } else {
    v_51 = v_50;
  };
  if (contrato_rc1) {
    sub_132 = v_51;
  } else {
    sub_132 = sub_114;
  };
  if (contrato_v_427) {
    v_58 = sub_132;
  } else {
    v_58 = sub_113;
  };
  if (contrato_ct1) {
    sub_148 = sub_45;
  } else {
    sub_148 = sub_127;
  };
  if (contrato_ck_16_1) {
    v_46 = sub_148;
    sub_147 = false;
  } else {
    v_46 = false;
    sub_147 = sub_148;
  };
  if (contrato_botao_lamp) {
    v_47 = sub_147;
  } else {
    v_47 = v_46;
  };
  if (contrato_cl1) {
    v_48 = false;
    v_45 = sub_147;
  } else {
    v_48 = v_47;
    v_45 = sub_148;
  };
  if (contrato_cl2) {
    sub_146 = v_45;
  } else {
    sub_146 = v_48;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (contrato_v_426) {
    sub_137 = false;
  } else {
    sub_137 = sub_138;
  };
  if (contrato_rad_up2) {
    v_43 = false;
  } else {
    v_43 = sub_140;
  };
  if (contrato_rc2) {
    v_44 = v_43;
  } else {
    v_44 = sub_139;
  };
  if (contrato_v_426) {
    sub_150 = v_44;
  } else {
    sub_150 = sub_138;
  };
  sub_149 = sub_150;
  if (contrato_rc1) {
    v_49 = sub_137;
  } else {
    v_49 = sub_149;
  };
  if (contrato_rad_up1) {
    sub_136 = v_49;
  } else {
    sub_136 = sub_149;
  };
  if (contrato_v_426) {
    sub_152 = sub_138;
  } else {
    sub_152 = false;
  };
  if (contrato_rad_down2) {
    sub_154 = sub_141;
  } else {
    sub_154 = false;
  };
  if (contrato_rc2) {
    sub_153 = sub_154;
  } else {
    sub_153 = sub_139;
  };
  if (contrato_v_426) {
    v_41 = false;
  } else {
    v_41 = sub_153;
  };
  if (contrato_rad_down1) {
    v_42 = sub_152;
  } else {
    v_42 = v_41;
  };
  if (contrato_rc1) {
    sub_151 = v_42;
  } else {
    sub_151 = sub_152;
  };
  if (contrato_v_427) {
    sub_135 = sub_151;
  } else {
    sub_135 = sub_136;
  };
  if (contrato_presenca) {
    sub_112 = v_58;
  } else {
    sub_112 = sub_135;
  };
  if (contrato_v_426) {
    sub_157 = false;
  } else {
    sub_157 = sub_115;
  };
  if (contrato_rc1) {
    v_39 = sub_157;
  } else {
    v_39 = sub_128;
  };
  if (contrato_rad_up1) {
    sub_156 = v_39;
  } else {
    sub_156 = sub_131;
  };
  if (contrato_v_426) {
    v_37 = false;
    sub_159 = sub_115;
  } else {
    v_37 = sub_133;
    sub_159 = false;
  };
  if (contrato_rad_down1) {
    v_38 = sub_159;
  } else {
    v_38 = v_37;
  };
  if (contrato_rc1) {
    sub_158 = v_38;
  } else {
    sub_158 = sub_159;
  };
  if (contrato_v_427) {
    v_40 = sub_158;
  } else {
    v_40 = sub_156;
  };
  if (contrato_presenca) {
    sub_155 = v_40;
  } else {
    sub_155 = false;
  };
  if (contrato_ck_14_1) {
    v_60 = sub_112;
    v_59 = sub_155;
  } else {
    v_60 = sub_155;
    v_59 = sub_112;
  };
  if (contrato_push_janela) {
    v_61 = v_59;
  } else {
    v_61 = v_60;
  };
  if (contrato_cj) {
    sub_111 = v_61;
  } else {
    sub_111 = sub_112;
  };
  sub_161 = sub_155;
  sub_160 = sub_161;
  if (contrato_ck_12_1) {
    v_63 = sub_111;
    v_62 = sub_160;
  } else {
    v_63 = sub_160;
    v_62 = sub_111;
  };
  if (contrato_push_porta) {
    v_64 = v_62;
  } else {
    v_64 = v_63;
  };
  if (contrato_cp) {
    sub_110 = v_64;
  } else {
    sub_110 = sub_111;
  };
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (contrato_co) {
    sub_180 = false;
  } else {
    sub_180 = sub_120;
  };
  sub_179 = sub_180;
  if (contrato_v_332) {
    sub_178 = sub_118;
  } else {
    sub_178 = sub_179;
  };
  if (contrato_v_331) {
    sub_177 = false;
  } else {
    sub_177 = sub_178;
  };
  if (contrato_start_oven) {
    sub_182 = sub_180;
  } else {
    sub_182 = sub_119;
  };
  if (contrato_v_332) {
    sub_181 = false;
  } else {
    sub_181 = sub_182;
  };
  if (contrato_finish_oven) {
    v_21 = sub_123;
  } else {
    v_21 = false;
  };
  if (contrato_tok) {
    sub_186 = sub_122;
  } else {
    sub_186 = v_21;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  sub_183 = sub_184;
  if (contrato_v_332) {
    v_22 = sub_183;
  } else {
    v_22 = sub_118;
  };
  if (contrato_v_331) {
    v_23 = v_22;
  } else {
    v_23 = sub_181;
  };
  if (contrato_v_330) {
    sub_176 = v_23;
  } else {
    sub_176 = sub_177;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (contrato_v_426) {
    sub_172 = sub_173;
  } else {
    sub_172 = sub_115;
  };
  if (contrato_rc1) {
    v_24 = sub_172;
  } else {
    v_24 = sub_128;
  };
  if (contrato_rad_up1) {
    sub_171 = v_24;
  } else {
    sub_171 = sub_131;
  };
  if (contrato_rad_up2) {
    v_17 = false;
  } else {
    v_17 = sub_175;
  };
  if (contrato_rc2) {
    v_18 = v_17;
  } else {
    v_18 = sub_174;
  };
  if (contrato_v_426) {
    v_19 = v_18;
    sub_188 = sub_115;
  } else {
    v_19 = sub_133;
    sub_188 = sub_173;
  };
  if (contrato_rad_down1) {
    v_20 = sub_188;
  } else {
    v_20 = v_19;
  };
  if (contrato_rc1) {
    sub_187 = v_20;
  } else {
    sub_187 = sub_188;
  };
  if (contrato_v_427) {
    v_25 = sub_187;
  } else {
    v_25 = sub_171;
  };
  if (contrato_presenca) {
    sub_170 = v_25;
  } else {
    sub_170 = sub_135;
  };
  if (contrato_ck_14_1) {
    v_27 = sub_170;
    v_26 = sub_155;
  } else {
    v_27 = sub_155;
    v_26 = sub_170;
  };
  if (contrato_push_janela) {
    v_28 = v_26;
  } else {
    v_28 = v_27;
  };
  if (contrato_cj) {
    sub_169 = v_28;
  } else {
    sub_169 = sub_170;
  };
  if (contrato_ck_12_1) {
    v_30 = sub_169;
    v_29 = sub_160;
  } else {
    v_30 = sub_160;
    v_29 = sub_169;
  };
  if (contrato_push_porta) {
    v_31 = v_29;
  } else {
    v_31 = v_30;
  };
  if (contrato_cp) {
    sub_168 = v_31;
  } else {
    sub_168 = sub_169;
  };
  if (contrato_v_390) {
    sub_189 = sub_168;
  } else {
    sub_189 = sub_110;
  };
  if (contrato_end_wash) {
    v_32 = sub_189;
  } else {
    v_32 = sub_168;
  };
  if (contrato_cws) {
    sub_167 = sub_168;
  } else {
    sub_167 = v_32;
  };
  sub_190 = sub_189;
  if (contrato_cws) {
    v_33 = sub_190;
  } else {
    v_33 = sub_109;
  };
  if (contrato_v_391) {
    sub_166 = v_33;
  } else {
    sub_166 = sub_167;
  };
  sub_165 = sub_166;
  if (contrato_v_332) {
    sub_203 = sub_183;
  } else {
    sub_203 = sub_179;
  };
  if (contrato_v_331) {
    sub_202 = false;
  } else {
    sub_202 = sub_203;
  };
  if (contrato_cold) {
    v_4 = false;
  } else {
    v_4 = sub_121;
  };
  if (contrato_co) {
    sub_205 = v_4;
  } else {
    sub_205 = sub_120;
  };
  sub_204 = sub_205;
  if (contrato_v_332) {
    v_5 = sub_183;
  } else {
    v_5 = sub_204;
  };
  if (contrato_v_331) {
    v_6 = v_5;
  } else {
    v_6 = sub_181;
  };
  if (contrato_v_330) {
    sub_201 = v_6;
  } else {
    sub_201 = sub_202;
  };
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (contrato_v_426) {
    sub_197 = sub_198;
  } else {
    sub_197 = sub_115;
  };
  if (contrato_rc1) {
    v_7 = sub_197;
  } else {
    v_7 = sub_128;
  };
  if (contrato_rad_up1) {
    sub_196 = v_7;
  } else {
    sub_196 = sub_131;
  };
  if (contrato_rad_up2) {
    v = false;
  } else {
    v = sub_200;
  };
  if (contrato_rc2) {
    v_1 = v;
  } else {
    v_1 = sub_199;
  };
  if (contrato_v_426) {
    v_2 = v_1;
    sub_207 = sub_115;
  } else {
    v_2 = sub_133;
    sub_207 = sub_198;
  };
  if (contrato_rad_down1) {
    v_3 = sub_207;
  } else {
    v_3 = v_2;
  };
  if (contrato_rc1) {
    sub_206 = v_3;
  } else {
    sub_206 = sub_207;
  };
  if (contrato_v_427) {
    v_8 = sub_206;
  } else {
    v_8 = sub_196;
  };
  if (contrato_presenca) {
    sub_195 = v_8;
  } else {
    sub_195 = sub_135;
  };
  if (contrato_ck_14_1) {
    v_10 = sub_195;
    v_9 = sub_155;
  } else {
    v_10 = sub_155;
    v_9 = sub_195;
  };
  if (contrato_push_janela) {
    v_11 = v_9;
  } else {
    v_11 = v_10;
  };
  if (contrato_cj) {
    sub_194 = v_11;
  } else {
    sub_194 = sub_195;
  };
  if (contrato_ck_12_1) {
    v_13 = sub_194;
    v_12 = sub_160;
  } else {
    v_13 = sub_160;
    v_12 = sub_194;
  };
  if (contrato_push_porta) {
    v_14 = v_12;
  } else {
    v_14 = v_13;
  };
  if (contrato_cp) {
    sub_193 = v_14;
  } else {
    sub_193 = sub_194;
  };
  if (contrato_v_390) {
    v_16 = sub_168;
    v_15 = sub_193;
  } else {
    v_16 = sub_193;
    v_15 = sub_110;
  };
  if (contrato_end_wash) {
    sub_192 = v_15;
  } else {
    sub_192 = v_16;
  };
  sub_191 = sub_192;
  if (contrato_v_391) {
    v_35 = sub_108;
    v_34 = sub_190;
  } else {
    v_35 = sub_191;
    v_34 = sub_191;
  };
  if (contrato_start_wash) {
    v_36 = v_34;
  } else {
    v_36 = v_35;
  };
  if (contrato_v_389) {
    sub_164 = v_36;
  } else {
    sub_164 = sub_165;
  };
  if (contrato_v_289) {
    sub_163 = sub_107;
  } else {
    sub_163 = sub_164;
  };
  if (contrato_comfort_input) {
    v_138 = sub_163;
    sub_162 = sub_107;
  } else {
    v_138 = sub_164;
    sub_162 = sub_163;
  };
  if (contrato_v_288) {
    v_139 = v_138;
  } else {
    v_139 = sub_162;
  };
  if (contrato_eco_input) {
    v_140 = sub_107;
  } else {
    v_140 = v_139;
  };
  if (p_contrato_ct2) {
    sub_0 = v_140;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  sub_21 = !(contrato_ck_18_1);
  if (contrato_botao_tv) {
    sub_20 = sub_21;
  } else {
    sub_20 = contrato_ck_18_1;
  };
  sub_22 = false;
  if (contrato_ck_16_1) {
    v_255 = sub_20;
    sub_19 = sub_22;
  } else {
    v_255 = sub_22;
    sub_19 = sub_20;
  };
  if (contrato_botao_lamp) {
    v_256 = sub_19;
  } else {
    v_256 = v_255;
  };
  if (contrato_cl1) {
    v_254 = sub_19;
  } else {
    v_254 = sub_20;
  };
  sub_23 = sub_22;
  if (contrato_cl1) {
    v_257 = sub_23;
  } else {
    v_257 = v_256;
  };
  if (contrato_cl2) {
    sub_18 = v_254;
  } else {
    sub_18 = v_257;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (contrato_rad_up2) {
    v_253 = false;
  } else {
    v_253 = sub_12;
  };
  if (contrato_rc2) {
    sub_26 = v_253;
  } else {
    sub_26 = sub_11;
  };
  if (contrato_v_426) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_10;
  };
  sub_24 = sub_25;
  if (contrato_rc1) {
    v_258 = sub_9;
  } else {
    v_258 = sub_24;
  };
  sub_27 = sub_24;
  if (contrato_rad_up1) {
    sub_8 = v_258;
  } else {
    sub_8 = sub_27;
  };
  if (contrato_rad_down2) {
    sub_30 = sub_13;
  } else {
    sub_30 = false;
  };
  if (contrato_rc2) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_11;
  };
  if (contrato_v_426) {
    v_251 = sub_26;
  } else {
    v_251 = sub_29;
  };
  if (contrato_rad_down1) {
    v_252 = sub_10;
  } else {
    v_252 = v_251;
  };
  if (contrato_rc1) {
    sub_28 = v_252;
  } else {
    sub_28 = sub_9;
  };
  if (contrato_v_427) {
    v_259 = sub_28;
  } else {
    v_259 = sub_8;
  };
  if (contrato_ck_16_1) {
    v_247 = sub_22;
    sub_43 = false;
  } else {
    v_247 = false;
    sub_43 = sub_22;
  };
  if (contrato_botao_lamp) {
    v_248 = sub_43;
  } else {
    v_248 = v_247;
  };
  if (contrato_cl1) {
    v_249 = false;
    v_246 = sub_43;
  } else {
    v_249 = v_248;
    v_246 = sub_23;
  };
  if (contrato_cl2) {
    sub_42 = v_246;
  } else {
    sub_42 = v_249;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (contrato_v_426) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_rad_up2) {
    v_244 = false;
  } else {
    v_244 = sub_36;
  };
  if (contrato_rc2) {
    v_245 = v_244;
  } else {
    v_245 = sub_35;
  };
  if (contrato_v_426) {
    sub_45 = v_245;
  } else {
    sub_45 = sub_34;
  };
  sub_44 = sub_45;
  if (contrato_rc1) {
    v_250 = sub_33;
  } else {
    v_250 = sub_44;
  };
  if (contrato_rad_up1) {
    sub_32 = v_250;
  } else {
    sub_32 = sub_44;
  };
  if (contrato_v_426) {
    sub_47 = sub_34;
  } else {
    sub_47 = false;
  };
  if (contrato_rad_down2) {
    sub_49 = sub_37;
  } else {
    sub_49 = false;
  };
  if (contrato_rc2) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_35;
  };
  if (contrato_v_426) {
    v_242 = false;
  } else {
    v_242 = sub_48;
  };
  if (contrato_rad_down1) {
    v_243 = sub_47;
  } else {
    v_243 = v_242;
  };
  if (contrato_rc1) {
    sub_46 = v_243;
  } else {
    sub_46 = sub_47;
  };
  if (contrato_v_427) {
    sub_31 = sub_46;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_presenca) {
    sub_7 = v_259;
  } else {
    sub_7 = sub_31;
  };
  if (contrato_v_426) {
    sub_52 = false;
  } else {
    sub_52 = sub_10;
  };
  if (contrato_rc1) {
    v_240 = sub_52;
  } else {
    v_240 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_51 = v_240;
  } else {
    sub_51 = sub_27;
  };
  if (contrato_v_426) {
    v_238 = false;
    sub_54 = sub_10;
  } else {
    v_238 = sub_29;
    sub_54 = false;
  };
  if (contrato_rad_down1) {
    v_239 = sub_54;
  } else {
    v_239 = v_238;
  };
  if (contrato_rc1) {
    sub_53 = v_239;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_v_427) {
    v_241 = sub_53;
  } else {
    v_241 = sub_51;
  };
  if (contrato_presenca) {
    sub_50 = v_241;
  } else {
    sub_50 = false;
  };
  if (contrato_ck_14_1) {
    v_261 = sub_7;
    v_260 = sub_50;
  } else {
    v_261 = sub_50;
    v_260 = sub_7;
  };
  if (contrato_push_janela) {
    v_262 = v_260;
  } else {
    v_262 = v_261;
  };
  if (contrato_cj) {
    sub_6 = v_262;
  } else {
    sub_6 = sub_7;
  };
  sub_56 = sub_50;
  sub_55 = sub_56;
  if (contrato_ck_12_1) {
    v_264 = sub_6;
    v_263 = sub_55;
  } else {
    v_264 = sub_55;
    v_263 = sub_6;
  };
  if (contrato_push_porta) {
    v_265 = v_263;
  } else {
    v_265 = v_264;
  };
  if (contrato_cp) {
    sub_5 = v_265;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (contrato_co) {
    sub_75 = false;
  } else {
    sub_75 = sub_15;
  };
  sub_74 = sub_75;
  if (contrato_v_332) {
    sub_73 = sub_13;
  } else {
    sub_73 = sub_74;
  };
  if (contrato_v_331) {
    sub_72 = false;
  } else {
    sub_72 = sub_73;
  };
  if (contrato_start_oven) {
    sub_77 = sub_75;
  } else {
    sub_77 = sub_14;
  };
  if (contrato_v_332) {
    sub_76 = false;
  } else {
    sub_76 = sub_77;
  };
  if (contrato_finish_oven) {
    v_222 = sub_18;
  } else {
    v_222 = false;
  };
  if (contrato_tok) {
    sub_81 = sub_17;
  } else {
    sub_81 = v_222;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (contrato_v_332) {
    v_223 = sub_78;
  } else {
    v_223 = sub_13;
  };
  if (contrato_v_331) {
    v_224 = v_223;
  } else {
    v_224 = sub_76;
  };
  if (contrato_v_330) {
    sub_71 = v_224;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  if (contrato_v_426) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_10;
  };
  if (contrato_rc1) {
    v_225 = sub_67;
  } else {
    v_225 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_66 = v_225;
  } else {
    sub_66 = sub_27;
  };
  if (contrato_rad_up2) {
    v_218 = false;
  } else {
    v_218 = sub_70;
  };
  if (contrato_rc2) {
    v_219 = v_218;
  } else {
    v_219 = sub_69;
  };
  if (contrato_v_426) {
    v_220 = v_219;
    sub_83 = sub_10;
  } else {
    v_220 = sub_29;
    sub_83 = sub_68;
  };
  if (contrato_rad_down1) {
    v_221 = sub_83;
  } else {
    v_221 = v_220;
  };
  if (contrato_rc1) {
    sub_82 = v_221;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_v_427) {
    v_226 = sub_82;
  } else {
    v_226 = sub_66;
  };
  if (contrato_presenca) {
    sub_65 = v_226;
  } else {
    sub_65 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_228 = sub_65;
    v_227 = sub_50;
  } else {
    v_228 = sub_50;
    v_227 = sub_65;
  };
  if (contrato_push_janela) {
    v_229 = v_227;
  } else {
    v_229 = v_228;
  };
  if (contrato_cj) {
    sub_64 = v_229;
  } else {
    sub_64 = sub_65;
  };
  if (contrato_ck_12_1) {
    v_231 = sub_64;
    v_230 = sub_55;
  } else {
    v_231 = sub_55;
    v_230 = sub_64;
  };
  if (contrato_push_porta) {
    v_232 = v_230;
  } else {
    v_232 = v_231;
  };
  if (contrato_cp) {
    sub_63 = v_232;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_v_390) {
    sub_84 = sub_63;
  } else {
    sub_84 = sub_5;
  };
  if (contrato_end_wash) {
    v_233 = sub_84;
  } else {
    v_233 = sub_63;
  };
  if (contrato_cws) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_233;
  };
  sub_85 = sub_84;
  if (contrato_cws) {
    v_234 = sub_85;
  } else {
    v_234 = sub_4;
  };
  if (contrato_v_391) {
    sub_61 = v_234;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  if (contrato_v_332) {
    sub_98 = sub_78;
  } else {
    sub_98 = sub_74;
  };
  if (contrato_v_331) {
    sub_97 = false;
  } else {
    sub_97 = sub_98;
  };
  if (contrato_cold) {
    v_205 = false;
  } else {
    v_205 = sub_16;
  };
  if (contrato_co) {
    sub_100 = v_205;
  } else {
    sub_100 = sub_15;
  };
  sub_99 = sub_100;
  if (contrato_v_332) {
    v_206 = sub_78;
  } else {
    v_206 = sub_99;
  };
  if (contrato_v_331) {
    v_207 = v_206;
  } else {
    v_207 = sub_76;
  };
  if (contrato_v_330) {
    sub_96 = v_207;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (contrato_v_426) {
    sub_92 = sub_93;
  } else {
    sub_92 = sub_10;
  };
  if (contrato_rc1) {
    v_208 = sub_92;
  } else {
    v_208 = sub_24;
  };
  if (contrato_rad_up1) {
    sub_91 = v_208;
  } else {
    sub_91 = sub_27;
  };
  if (contrato_rad_up2) {
    v_201 = false;
  } else {
    v_201 = sub_95;
  };
  if (contrato_rc2) {
    v_202 = v_201;
  } else {
    v_202 = sub_94;
  };
  if (contrato_v_426) {
    v_203 = v_202;
    sub_102 = sub_10;
  } else {
    v_203 = sub_29;
    sub_102 = sub_93;
  };
  if (contrato_rad_down1) {
    v_204 = sub_102;
  } else {
    v_204 = v_203;
  };
  if (contrato_rc1) {
    sub_101 = v_204;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_v_427) {
    v_209 = sub_101;
  } else {
    v_209 = sub_91;
  };
  if (contrato_presenca) {
    sub_90 = v_209;
  } else {
    sub_90 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_211 = sub_90;
    v_210 = sub_50;
  } else {
    v_211 = sub_50;
    v_210 = sub_90;
  };
  if (contrato_push_janela) {
    v_212 = v_210;
  } else {
    v_212 = v_211;
  };
  if (contrato_cj) {
    sub_89 = v_212;
  } else {
    sub_89 = sub_90;
  };
  if (contrato_ck_12_1) {
    v_214 = sub_89;
    v_213 = sub_55;
  } else {
    v_214 = sub_55;
    v_213 = sub_89;
  };
  if (contrato_push_porta) {
    v_215 = v_213;
  } else {
    v_215 = v_214;
  };
  if (contrato_cp) {
    sub_88 = v_215;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_v_390) {
    v_217 = sub_63;
    v_216 = sub_88;
  } else {
    v_217 = sub_88;
    v_216 = sub_5;
  };
  if (contrato_end_wash) {
    sub_87 = v_216;
  } else {
    sub_87 = v_217;
  };
  sub_86 = sub_87;
  if (contrato_v_391) {
    v_236 = sub_3;
    v_235 = sub_85;
  } else {
    v_236 = sub_86;
    v_235 = sub_86;
  };
  if (contrato_start_wash) {
    v_237 = v_235;
  } else {
    v_237 = v_236;
  };
  if (contrato_v_389) {
    sub_59 = v_237;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_v_289) {
    sub_58 = sub_2;
  } else {
    sub_58 = sub_59;
  };
  if (contrato_comfort_input) {
    v_266 = sub_58;
    sub_57 = sub_2;
  } else {
    v_266 = sub_59;
    sub_57 = sub_58;
  };
  if (contrato_v_288) {
    v_267 = v_266;
  } else {
    v_267 = sub_57;
  };
  if (contrato_eco_input) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_267;
  };
  sub_122 = true;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (contrato_rad_up2) {
    v_192 = false;
  } else {
    v_192 = sub_113;
  };
  if (contrato_rc2) {
    sub_125 = v_192;
  } else {
    sub_125 = sub_112;
  };
  if (contrato_v_426) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_111;
  };
  sub_123 = sub_124;
  if (contrato_rc1) {
    v_193 = sub_110;
  } else {
    v_193 = sub_123;
  };
  sub_126 = sub_123;
  if (contrato_rad_up1) {
    sub_109 = v_193;
  } else {
    sub_109 = sub_126;
  };
  if (contrato_rad_down2) {
    sub_129 = sub_114;
  } else {
    sub_129 = false;
  };
  if (contrato_rc2) {
    sub_128 = sub_129;
  } else {
    sub_128 = sub_112;
  };
  if (contrato_v_426) {
    v_190 = sub_125;
  } else {
    v_190 = sub_128;
  };
  if (contrato_rad_down1) {
    v_191 = sub_111;
  } else {
    v_191 = v_190;
  };
  if (contrato_rc1) {
    sub_127 = v_191;
  } else {
    sub_127 = sub_110;
  };
  if (contrato_v_427) {
    v_194 = sub_127;
  } else {
    v_194 = sub_109;
  };
  sub_143 = sub_21;
  if (contrato_ck_16_1) {
    v_186 = sub_143;
    sub_142 = false;
  } else {
    v_186 = false;
    sub_142 = sub_143;
  };
  if (contrato_botao_lamp) {
    v_187 = sub_142;
  } else {
    v_187 = v_186;
  };
  if (contrato_cl1) {
    v_188 = false;
    v_185 = sub_142;
  } else {
    v_188 = v_187;
    v_185 = sub_143;
  };
  if (contrato_cl2) {
    sub_141 = v_185;
  } else {
    sub_141 = v_188;
  };
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (contrato_v_426) {
    sub_132 = false;
  } else {
    sub_132 = sub_133;
  };
  if (contrato_rad_up2) {
    v_183 = false;
  } else {
    v_183 = sub_135;
  };
  if (contrato_rc2) {
    v_184 = v_183;
  } else {
    v_184 = sub_134;
  };
  if (contrato_v_426) {
    sub_145 = v_184;
  } else {
    sub_145 = sub_133;
  };
  sub_144 = sub_145;
  if (contrato_rc1) {
    v_189 = sub_132;
  } else {
    v_189 = sub_144;
  };
  if (contrato_rad_up1) {
    sub_131 = v_189;
  } else {
    sub_131 = sub_144;
  };
  if (contrato_v_426) {
    sub_147 = sub_133;
  } else {
    sub_147 = false;
  };
  if (contrato_rad_down2) {
    sub_149 = sub_136;
  } else {
    sub_149 = false;
  };
  if (contrato_rc2) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_134;
  };
  if (contrato_v_426) {
    v_181 = false;
  } else {
    v_181 = sub_148;
  };
  if (contrato_rad_down1) {
    v_182 = sub_147;
  } else {
    v_182 = v_181;
  };
  if (contrato_rc1) {
    sub_146 = v_182;
  } else {
    sub_146 = sub_147;
  };
  if (contrato_v_427) {
    sub_130 = sub_146;
  } else {
    sub_130 = sub_131;
  };
  if (contrato_presenca) {
    sub_108 = v_194;
  } else {
    sub_108 = sub_130;
  };
  if (contrato_v_426) {
    sub_152 = false;
  } else {
    sub_152 = sub_111;
  };
  if (contrato_rc1) {
    v_179 = sub_152;
  } else {
    v_179 = sub_123;
  };
  if (contrato_rad_up1) {
    sub_151 = v_179;
  } else {
    sub_151 = sub_126;
  };
  if (contrato_v_426) {
    v_177 = false;
    sub_154 = sub_111;
  } else {
    v_177 = sub_128;
    sub_154 = false;
  };
  if (contrato_rad_down1) {
    v_178 = sub_154;
  } else {
    v_178 = v_177;
  };
  if (contrato_rc1) {
    sub_153 = v_178;
  } else {
    sub_153 = sub_154;
  };
  if (contrato_v_427) {
    v_180 = sub_153;
  } else {
    v_180 = sub_151;
  };
  if (contrato_presenca) {
    sub_150 = v_180;
  } else {
    sub_150 = false;
  };
  if (contrato_ck_14_1) {
    v_196 = sub_108;
    v_195 = sub_150;
  } else {
    v_196 = sub_150;
    v_195 = sub_108;
  };
  if (contrato_push_janela) {
    v_197 = v_195;
  } else {
    v_197 = v_196;
  };
  if (contrato_cj) {
    sub_107 = v_197;
  } else {
    sub_107 = sub_108;
  };
  sub_156 = sub_150;
  sub_155 = sub_156;
  if (contrato_ck_12_1) {
    v_199 = sub_107;
    v_198 = sub_155;
  } else {
    v_199 = sub_155;
    v_198 = sub_107;
  };
  if (contrato_push_porta) {
    v_200 = v_198;
  } else {
    v_200 = v_199;
  };
  if (contrato_cp) {
    sub_106 = v_200;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (contrato_co) {
    sub_175 = false;
  } else {
    sub_175 = sub_116;
  };
  sub_174 = sub_175;
  if (contrato_v_332) {
    sub_173 = sub_114;
  } else {
    sub_173 = sub_174;
  };
  if (contrato_v_331) {
    sub_172 = false;
  } else {
    sub_172 = sub_173;
  };
  if (contrato_start_oven) {
    sub_177 = sub_175;
  } else {
    sub_177 = sub_115;
  };
  if (contrato_v_332) {
    sub_176 = false;
  } else {
    sub_176 = sub_177;
  };
  if (contrato_finish_oven) {
    v_161 = sub_119;
  } else {
    v_161 = false;
  };
  if (contrato_tok) {
    sub_181 = sub_118;
  } else {
    sub_181 = v_161;
  };
  sub_180 = sub_181;
  sub_179 = sub_180;
  sub_178 = sub_179;
  if (contrato_v_332) {
    v_162 = sub_178;
  } else {
    v_162 = sub_114;
  };
  if (contrato_v_331) {
    v_163 = v_162;
  } else {
    v_163 = sub_176;
  };
  if (contrato_v_330) {
    sub_171 = v_163;
  } else {
    sub_171 = sub_172;
  };
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (contrato_v_426) {
    sub_167 = sub_168;
  } else {
    sub_167 = sub_111;
  };
  if (contrato_rc1) {
    v_164 = sub_167;
  } else {
    v_164 = sub_123;
  };
  if (contrato_rad_up1) {
    sub_166 = v_164;
  } else {
    sub_166 = sub_126;
  };
  if (contrato_rad_up2) {
    v_157 = false;
  } else {
    v_157 = sub_170;
  };
  if (contrato_rc2) {
    v_158 = v_157;
  } else {
    v_158 = sub_169;
  };
  if (contrato_v_426) {
    v_159 = v_158;
    sub_183 = sub_111;
  } else {
    v_159 = sub_128;
    sub_183 = sub_168;
  };
  if (contrato_rad_down1) {
    v_160 = sub_183;
  } else {
    v_160 = v_159;
  };
  if (contrato_rc1) {
    sub_182 = v_160;
  } else {
    sub_182 = sub_183;
  };
  if (contrato_v_427) {
    v_165 = sub_182;
  } else {
    v_165 = sub_166;
  };
  if (contrato_presenca) {
    sub_165 = v_165;
  } else {
    sub_165 = sub_130;
  };
  if (contrato_ck_14_1) {
    v_167 = sub_165;
    v_166 = sub_150;
  } else {
    v_167 = sub_150;
    v_166 = sub_165;
  };
  if (contrato_push_janela) {
    v_168 = v_166;
  } else {
    v_168 = v_167;
  };
  if (contrato_cj) {
    sub_164 = v_168;
  } else {
    sub_164 = sub_165;
  };
  if (contrato_ck_12_1) {
    v_170 = sub_164;
    v_169 = sub_155;
  } else {
    v_170 = sub_155;
    v_169 = sub_164;
  };
  if (contrato_push_porta) {
    v_171 = v_169;
  } else {
    v_171 = v_170;
  };
  if (contrato_cp) {
    sub_163 = v_171;
  } else {
    sub_163 = sub_164;
  };
  if (contrato_v_390) {
    sub_184 = sub_163;
  } else {
    sub_184 = sub_106;
  };
  if (contrato_end_wash) {
    v_172 = sub_184;
  } else {
    v_172 = sub_163;
  };
  if (contrato_cws) {
    sub_162 = sub_163;
  } else {
    sub_162 = v_172;
  };
  sub_185 = sub_184;
  if (contrato_cws) {
    v_173 = sub_185;
  } else {
    v_173 = sub_105;
  };
  if (contrato_v_391) {
    sub_161 = v_173;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  if (contrato_v_332) {
    sub_198 = sub_178;
  } else {
    sub_198 = sub_174;
  };
  if (contrato_v_331) {
    sub_197 = false;
  } else {
    sub_197 = sub_198;
  };
  if (contrato_cold) {
    v_144 = false;
  } else {
    v_144 = sub_117;
  };
  if (contrato_co) {
    sub_200 = v_144;
  } else {
    sub_200 = sub_116;
  };
  sub_199 = sub_200;
  if (contrato_v_332) {
    v_145 = sub_178;
  } else {
    v_145 = sub_199;
  };
  if (contrato_v_331) {
    v_146 = v_145;
  } else {
    v_146 = sub_176;
  };
  if (contrato_v_330) {
    sub_196 = v_146;
  } else {
    sub_196 = sub_197;
  };
  sub_195 = sub_196;
  sub_194 = sub_195;
  sub_193 = sub_194;
  if (contrato_v_426) {
    sub_192 = sub_193;
  } else {
    sub_192 = sub_111;
  };
  if (contrato_rc1) {
    v_147 = sub_192;
  } else {
    v_147 = sub_123;
  };
  if (contrato_rad_up1) {
    sub_191 = v_147;
  } else {
    sub_191 = sub_126;
  };
  if (contrato_rad_up2) {
    v = false;
  } else {
    v = sub_195;
  };
  if (contrato_rc2) {
    v_141 = v;
  } else {
    v_141 = sub_194;
  };
  if (contrato_v_426) {
    v_142 = v_141;
    sub_202 = sub_111;
  } else {
    v_142 = sub_128;
    sub_202 = sub_193;
  };
  if (contrato_rad_down1) {
    v_143 = sub_202;
  } else {
    v_143 = v_142;
  };
  if (contrato_rc1) {
    sub_201 = v_143;
  } else {
    sub_201 = sub_202;
  };
  if (contrato_v_427) {
    v_148 = sub_201;
  } else {
    v_148 = sub_191;
  };
  if (contrato_presenca) {
    sub_190 = v_148;
  } else {
    sub_190 = sub_130;
  };
  if (contrato_ck_14_1) {
    v_150 = sub_190;
    v_149 = sub_150;
  } else {
    v_150 = sub_150;
    v_149 = sub_190;
  };
  if (contrato_push_janela) {
    v_151 = v_149;
  } else {
    v_151 = v_150;
  };
  if (contrato_cj) {
    sub_189 = v_151;
  } else {
    sub_189 = sub_190;
  };
  if (contrato_ck_12_1) {
    v_153 = sub_189;
    v_152 = sub_155;
  } else {
    v_153 = sub_155;
    v_152 = sub_189;
  };
  if (contrato_push_porta) {
    v_154 = v_152;
  } else {
    v_154 = v_153;
  };
  if (contrato_cp) {
    sub_188 = v_154;
  } else {
    sub_188 = sub_189;
  };
  if (contrato_v_390) {
    v_156 = sub_163;
    v_155 = sub_188;
  } else {
    v_156 = sub_188;
    v_155 = sub_106;
  };
  if (contrato_end_wash) {
    sub_187 = v_155;
  } else {
    sub_187 = v_156;
  };
  sub_186 = sub_187;
  if (contrato_v_391) {
    v_175 = sub_104;
    v_174 = sub_185;
  } else {
    v_175 = sub_186;
    v_174 = sub_186;
  };
  if (contrato_start_wash) {
    v_176 = v_174;
  } else {
    v_176 = v_175;
  };
  if (contrato_v_389) {
    sub_159 = v_176;
  } else {
    sub_159 = sub_160;
  };
  if (contrato_v_289) {
    sub_158 = sub_103;
  } else {
    sub_158 = sub_159;
  };
  if (contrato_comfort_input) {
    v_268 = sub_158;
    sub_157 = sub_103;
  } else {
    v_268 = sub_159;
    sub_157 = sub_158;
  };
  if (contrato_v_288) {
    v_269 = v_268;
  } else {
    v_269 = sub_157;
  };
  if (contrato_eco_input) {
    v_270 = sub_103;
  } else {
    v_270 = v_269;
  };
  if (p_contrato_ct1) {
    sub_0 = v_270;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
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
  sub_20 = p_contrato_cl2;
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
  if (contrato_rad_up2) {
    v_321 = false;
  } else {
    v_321 = sub_11;
  };
  if (contrato_rc2) {
    sub_23 = v_321;
  } else {
    sub_23 = sub_10;
  };
  if (contrato_v_426) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_9;
  };
  sub_21 = sub_22;
  if (contrato_rc1) {
    v_322 = sub_8;
  } else {
    v_322 = sub_21;
  };
  sub_24 = sub_21;
  if (contrato_rad_up1) {
    sub_7 = v_322;
  } else {
    sub_7 = sub_24;
  };
  if (contrato_rad_down2) {
    sub_27 = sub_12;
  } else {
    sub_27 = false;
  };
  if (contrato_rc2) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_10;
  };
  if (contrato_v_426) {
    v_319 = sub_23;
  } else {
    v_319 = sub_26;
  };
  if (contrato_rad_down1) {
    v_320 = sub_9;
  } else {
    v_320 = v_319;
  };
  if (contrato_rc1) {
    sub_25 = v_320;
  } else {
    sub_25 = sub_8;
  };
  if (contrato_v_427) {
    v_323 = sub_25;
  } else {
    v_323 = sub_7;
  };
  sub_41 = true;
  if (contrato_ck_16_1) {
    v_316 = sub_19;
    v_315 = sub_41;
  } else {
    v_316 = sub_41;
    v_315 = sub_19;
  };
  if (contrato_botao_lamp) {
    v_317 = v_315;
  } else {
    v_317 = v_316;
  };
  if (contrato_ck_16_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_cl1) {
    sub_39 = sub_40;
  } else {
    sub_39 = v_317;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (contrato_v_426) {
    sub_30 = false;
  } else {
    sub_30 = sub_31;
  };
  if (contrato_rad_up2) {
    v_313 = false;
  } else {
    v_313 = sub_33;
  };
  if (contrato_rc2) {
    v_314 = v_313;
  } else {
    v_314 = sub_32;
  };
  if (contrato_v_426) {
    sub_43 = v_314;
  } else {
    sub_43 = sub_31;
  };
  sub_42 = sub_43;
  if (contrato_rc1) {
    v_318 = sub_30;
  } else {
    v_318 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_29 = v_318;
  } else {
    sub_29 = sub_42;
  };
  if (contrato_v_426) {
    sub_45 = sub_31;
  } else {
    sub_45 = false;
  };
  if (contrato_rad_down2) {
    sub_47 = sub_34;
  } else {
    sub_47 = false;
  };
  if (contrato_rc2) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_32;
  };
  if (contrato_v_426) {
    v_311 = false;
  } else {
    v_311 = sub_46;
  };
  if (contrato_rad_down1) {
    v_312 = sub_45;
  } else {
    v_312 = v_311;
  };
  if (contrato_rc1) {
    sub_44 = v_312;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_v_427) {
    sub_28 = sub_44;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_presenca) {
    sub_6 = v_323;
  } else {
    sub_6 = sub_28;
  };
  if (contrato_v_426) {
    sub_50 = false;
  } else {
    sub_50 = sub_9;
  };
  if (contrato_rc1) {
    v_309 = sub_50;
  } else {
    v_309 = sub_21;
  };
  if (contrato_rad_up1) {
    sub_49 = v_309;
  } else {
    sub_49 = sub_24;
  };
  if (contrato_v_426) {
    v_307 = false;
    sub_52 = sub_9;
  } else {
    v_307 = sub_26;
    sub_52 = false;
  };
  if (contrato_rad_down1) {
    v_308 = sub_52;
  } else {
    v_308 = v_307;
  };
  if (contrato_rc1) {
    sub_51 = v_308;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_v_427) {
    v_310 = sub_51;
  } else {
    v_310 = sub_49;
  };
  if (contrato_presenca) {
    sub_48 = v_310;
  } else {
    sub_48 = false;
  };
  if (contrato_ck_14_1) {
    v_325 = sub_6;
    v_324 = sub_48;
  } else {
    v_325 = sub_48;
    v_324 = sub_6;
  };
  if (contrato_push_janela) {
    v_326 = v_324;
  } else {
    v_326 = v_325;
  };
  if (contrato_cj) {
    sub_5 = v_326;
  } else {
    sub_5 = sub_6;
  };
  sub_54 = sub_48;
  sub_53 = sub_54;
  if (contrato_ck_12_1) {
    v_328 = sub_5;
    v_327 = sub_53;
  } else {
    v_328 = sub_53;
    v_327 = sub_5;
  };
  if (contrato_push_porta) {
    v_329 = v_327;
  } else {
    v_329 = v_328;
  };
  if (contrato_cp) {
    sub_4 = v_329;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (contrato_co) {
    sub_73 = false;
  } else {
    sub_73 = sub_14;
  };
  sub_72 = sub_73;
  if (contrato_v_332) {
    sub_71 = sub_12;
  } else {
    sub_71 = sub_72;
  };
  if (contrato_v_331) {
    sub_70 = false;
  } else {
    sub_70 = sub_71;
  };
  if (contrato_start_oven) {
    sub_75 = sub_73;
  } else {
    sub_75 = sub_13;
  };
  if (contrato_v_332) {
    sub_74 = false;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_finish_oven) {
    v_291 = sub_17;
  } else {
    v_291 = false;
  };
  if (contrato_tok) {
    sub_79 = sub_16;
  } else {
    sub_79 = v_291;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (contrato_v_332) {
    v_292 = sub_76;
  } else {
    v_292 = sub_12;
  };
  if (contrato_v_331) {
    v_293 = v_292;
  } else {
    v_293 = sub_74;
  };
  if (contrato_v_330) {
    sub_69 = v_293;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (contrato_v_426) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_9;
  };
  if (contrato_rc1) {
    v_294 = sub_65;
  } else {
    v_294 = sub_21;
  };
  if (contrato_rad_up1) {
    sub_64 = v_294;
  } else {
    sub_64 = sub_24;
  };
  if (contrato_rad_up2) {
    v_287 = false;
  } else {
    v_287 = sub_68;
  };
  if (contrato_rc2) {
    v_288 = v_287;
  } else {
    v_288 = sub_67;
  };
  if (contrato_v_426) {
    v_289 = v_288;
    sub_81 = sub_9;
  } else {
    v_289 = sub_26;
    sub_81 = sub_66;
  };
  if (contrato_rad_down1) {
    v_290 = sub_81;
  } else {
    v_290 = v_289;
  };
  if (contrato_rc1) {
    sub_80 = v_290;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_v_427) {
    v_295 = sub_80;
  } else {
    v_295 = sub_64;
  };
  if (contrato_presenca) {
    sub_63 = v_295;
  } else {
    sub_63 = sub_28;
  };
  if (contrato_ck_14_1) {
    v_297 = sub_63;
    v_296 = sub_48;
  } else {
    v_297 = sub_48;
    v_296 = sub_63;
  };
  if (contrato_push_janela) {
    v_298 = v_296;
  } else {
    v_298 = v_297;
  };
  if (contrato_cj) {
    sub_62 = v_298;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_ck_12_1) {
    v_300 = sub_62;
    v_299 = sub_53;
  } else {
    v_300 = sub_53;
    v_299 = sub_62;
  };
  if (contrato_push_porta) {
    v_301 = v_299;
  } else {
    v_301 = v_300;
  };
  if (contrato_cp) {
    sub_61 = v_301;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_v_390) {
    sub_82 = sub_61;
  } else {
    sub_82 = sub_4;
  };
  if (contrato_end_wash) {
    v_302 = sub_82;
  } else {
    v_302 = sub_61;
  };
  if (contrato_cws) {
    sub_60 = sub_61;
  } else {
    sub_60 = v_302;
  };
  sub_83 = sub_82;
  if (contrato_cws) {
    v_303 = sub_83;
  } else {
    v_303 = sub_3;
  };
  if (contrato_v_391) {
    sub_59 = v_303;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  if (contrato_v_332) {
    sub_96 = sub_76;
  } else {
    sub_96 = sub_72;
  };
  if (contrato_v_331) {
    sub_95 = false;
  } else {
    sub_95 = sub_96;
  };
  if (contrato_cold) {
    v_274 = false;
  } else {
    v_274 = sub_15;
  };
  if (contrato_co) {
    sub_98 = v_274;
  } else {
    sub_98 = sub_14;
  };
  sub_97 = sub_98;
  if (contrato_v_332) {
    v_275 = sub_76;
  } else {
    v_275 = sub_97;
  };
  if (contrato_v_331) {
    v_276 = v_275;
  } else {
    v_276 = sub_74;
  };
  if (contrato_v_330) {
    sub_94 = v_276;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (contrato_v_426) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_9;
  };
  if (contrato_rc1) {
    v_277 = sub_90;
  } else {
    v_277 = sub_21;
  };
  if (contrato_rad_up1) {
    sub_89 = v_277;
  } else {
    sub_89 = sub_24;
  };
  if (contrato_rad_up2) {
    v = false;
  } else {
    v = sub_93;
  };
  if (contrato_rc2) {
    v_271 = v;
  } else {
    v_271 = sub_92;
  };
  if (contrato_v_426) {
    v_272 = v_271;
    sub_100 = sub_9;
  } else {
    v_272 = sub_26;
    sub_100 = sub_91;
  };
  if (contrato_rad_down1) {
    v_273 = sub_100;
  } else {
    v_273 = v_272;
  };
  if (contrato_rc1) {
    sub_99 = v_273;
  } else {
    sub_99 = sub_100;
  };
  if (contrato_v_427) {
    v_278 = sub_99;
  } else {
    v_278 = sub_89;
  };
  if (contrato_presenca) {
    sub_88 = v_278;
  } else {
    sub_88 = sub_28;
  };
  if (contrato_ck_14_1) {
    v_280 = sub_88;
    v_279 = sub_48;
  } else {
    v_280 = sub_48;
    v_279 = sub_88;
  };
  if (contrato_push_janela) {
    v_281 = v_279;
  } else {
    v_281 = v_280;
  };
  if (contrato_cj) {
    sub_87 = v_281;
  } else {
    sub_87 = sub_88;
  };
  if (contrato_ck_12_1) {
    v_283 = sub_87;
    v_282 = sub_53;
  } else {
    v_283 = sub_53;
    v_282 = sub_87;
  };
  if (contrato_push_porta) {
    v_284 = v_282;
  } else {
    v_284 = v_283;
  };
  if (contrato_cp) {
    sub_86 = v_284;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_v_390) {
    v_286 = sub_61;
    v_285 = sub_86;
  } else {
    v_286 = sub_86;
    v_285 = sub_4;
  };
  if (contrato_end_wash) {
    sub_85 = v_285;
  } else {
    sub_85 = v_286;
  };
  sub_84 = sub_85;
  if (contrato_v_391) {
    v_305 = sub_2;
    v_304 = sub_83;
  } else {
    v_305 = sub_84;
    v_304 = sub_84;
  };
  if (contrato_start_wash) {
    v_306 = v_304;
  } else {
    v_306 = v_305;
  };
  if (contrato_v_389) {
    sub_57 = v_306;
  } else {
    sub_57 = sub_58;
  };
  if (contrato_v_289) {
    sub_56 = sub_1;
  } else {
    sub_56 = sub_57;
  };
  if (contrato_comfort_input) {
    v_330 = sub_56;
    sub_55 = sub_1;
  } else {
    v_330 = sub_57;
    sub_55 = sub_56;
  };
  if (contrato_v_288) {
    v_331 = v_330;
  } else {
    v_331 = sub_55;
  };
  if (contrato_eco_input) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_331;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
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
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  sub_19 = false;
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
  if (contrato_rad_up2) {
    v_430 = false;
  } else {
    v_430 = sub_12;
  };
  if (contrato_rc2) {
    sub_22 = v_430;
  } else {
    sub_22 = sub_11;
  };
  if (contrato_v_426) {
    sub_21 = sub_22;
  } else {
    sub_21 = sub_10;
  };
  sub_20 = sub_21;
  if (contrato_rc1) {
    v_431 = sub_9;
  } else {
    v_431 = sub_20;
  };
  sub_23 = sub_20;
  if (contrato_rad_up1) {
    sub_8 = v_431;
  } else {
    sub_8 = sub_23;
  };
  if (contrato_rad_down2) {
    sub_26 = sub_13;
  } else {
    sub_26 = false;
  };
  if (contrato_rc2) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_11;
  };
  if (contrato_v_426) {
    v_428 = sub_22;
  } else {
    v_428 = sub_25;
  };
  if (contrato_rad_down1) {
    v_429 = sub_10;
  } else {
    v_429 = v_428;
  };
  if (contrato_rc1) {
    sub_24 = v_429;
  } else {
    sub_24 = sub_9;
  };
  if (contrato_v_427) {
    v_432 = sub_24;
  } else {
    v_432 = sub_8;
  };
  if (contrato_v_426) {
    sub_29 = false;
  } else {
    sub_29 = sub_10;
  };
  if (contrato_rc1) {
    v_427 = sub_29;
  } else {
    v_427 = sub_20;
  };
  if (contrato_rad_up1) {
    sub_28 = v_427;
  } else {
    sub_28 = sub_23;
  };
  if (contrato_v_426) {
    v_425 = false;
    sub_31 = sub_10;
  } else {
    v_425 = sub_25;
    sub_31 = false;
  };
  if (contrato_rad_down1) {
    v_426 = sub_31;
  } else {
    v_426 = v_425;
  };
  if (contrato_rc1) {
    sub_30 = v_426;
  } else {
    sub_30 = sub_31;
  };
  if (contrato_v_427) {
    sub_27 = sub_30;
  } else {
    sub_27 = sub_28;
  };
  if (contrato_presenca) {
    sub_7 = v_432;
    sub_32 = sub_27;
  } else {
    sub_7 = sub_27;
    sub_32 = false;
  };
  if (contrato_ck_14_1) {
    v_434 = sub_7;
    v_433 = sub_32;
  } else {
    v_434 = sub_32;
    v_433 = sub_7;
  };
  if (contrato_push_janela) {
    v_435 = v_433;
  } else {
    v_435 = v_434;
  };
  if (contrato_cj) {
    sub_6 = v_435;
  } else {
    sub_6 = sub_7;
  };
  sub_34 = sub_32;
  sub_33 = sub_34;
  if (contrato_ck_12_1) {
    v_437 = sub_6;
    v_436 = sub_33;
  } else {
    v_437 = sub_33;
    v_436 = sub_6;
  };
  if (contrato_push_porta) {
    v_438 = v_436;
  } else {
    v_438 = v_437;
  };
  if (contrato_cp) {
    sub_5 = v_438;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (contrato_co) {
    sub_53 = false;
  } else {
    sub_53 = sub_15;
  };
  sub_52 = sub_53;
  if (contrato_v_332) {
    sub_51 = sub_13;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_v_331) {
    sub_50 = false;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_start_oven) {
    sub_55 = sub_53;
  } else {
    sub_55 = sub_14;
  };
  if (contrato_v_332) {
    sub_54 = false;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_finish_oven) {
    v_409 = sub_18;
  } else {
    v_409 = false;
  };
  if (contrato_tok) {
    sub_59 = sub_17;
  } else {
    sub_59 = v_409;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (contrato_v_332) {
    v_410 = sub_56;
  } else {
    v_410 = sub_13;
  };
  if (contrato_v_331) {
    v_411 = v_410;
  } else {
    v_411 = sub_54;
  };
  if (contrato_v_330) {
    sub_49 = v_411;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (contrato_v_426) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_10;
  };
  if (contrato_rc1) {
    v_412 = sub_45;
  } else {
    v_412 = sub_20;
  };
  if (contrato_rad_up1) {
    sub_44 = v_412;
  } else {
    sub_44 = sub_23;
  };
  if (contrato_rad_up2) {
    v_405 = false;
  } else {
    v_405 = sub_48;
  };
  if (contrato_rc2) {
    v_406 = v_405;
  } else {
    v_406 = sub_47;
  };
  if (contrato_v_426) {
    v_407 = v_406;
    sub_61 = sub_10;
  } else {
    v_407 = sub_25;
    sub_61 = sub_46;
  };
  if (contrato_rad_down1) {
    v_408 = sub_61;
  } else {
    v_408 = v_407;
  };
  if (contrato_rc1) {
    sub_60 = v_408;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_427) {
    v_413 = sub_60;
  } else {
    v_413 = sub_44;
  };
  if (contrato_presenca) {
    sub_43 = v_413;
  } else {
    sub_43 = sub_27;
  };
  if (contrato_ck_14_1) {
    v_415 = sub_43;
    v_414 = sub_32;
  } else {
    v_415 = sub_32;
    v_414 = sub_43;
  };
  if (contrato_push_janela) {
    v_416 = v_414;
  } else {
    v_416 = v_415;
  };
  if (contrato_cj) {
    sub_42 = v_416;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_ck_12_1) {
    v_418 = sub_42;
    v_417 = sub_33;
  } else {
    v_418 = sub_33;
    v_417 = sub_42;
  };
  if (contrato_push_porta) {
    v_419 = v_417;
  } else {
    v_419 = v_418;
  };
  if (contrato_cp) {
    sub_41 = v_419;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_v_390) {
    sub_62 = sub_41;
  } else {
    sub_62 = sub_5;
  };
  if (contrato_end_wash) {
    v_420 = sub_62;
  } else {
    v_420 = sub_41;
  };
  if (contrato_cws) {
    sub_40 = sub_41;
  } else {
    sub_40 = v_420;
  };
  sub_63 = sub_62;
  if (contrato_cws) {
    v_421 = sub_63;
  } else {
    v_421 = sub_4;
  };
  if (contrato_v_391) {
    sub_39 = v_421;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  if (contrato_v_332) {
    sub_76 = sub_56;
  } else {
    sub_76 = sub_52;
  };
  if (contrato_v_331) {
    sub_75 = false;
  } else {
    sub_75 = sub_76;
  };
  if (contrato_cold) {
    v_392 = false;
  } else {
    v_392 = sub_16;
  };
  if (contrato_co) {
    sub_78 = v_392;
  } else {
    sub_78 = sub_15;
  };
  sub_77 = sub_78;
  if (contrato_v_332) {
    v_393 = sub_56;
  } else {
    v_393 = sub_77;
  };
  if (contrato_v_331) {
    v_394 = v_393;
  } else {
    v_394 = sub_54;
  };
  if (contrato_v_330) {
    sub_74 = v_394;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (contrato_v_426) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_10;
  };
  if (contrato_rc1) {
    v_395 = sub_70;
  } else {
    v_395 = sub_20;
  };
  if (contrato_rad_up1) {
    sub_69 = v_395;
  } else {
    sub_69 = sub_23;
  };
  if (contrato_rad_up2) {
    v_388 = false;
  } else {
    v_388 = sub_73;
  };
  if (contrato_rc2) {
    v_389 = v_388;
  } else {
    v_389 = sub_72;
  };
  if (contrato_v_426) {
    v_390 = v_389;
    sub_80 = sub_10;
  } else {
    v_390 = sub_25;
    sub_80 = sub_71;
  };
  if (contrato_rad_down1) {
    v_391 = sub_80;
  } else {
    v_391 = v_390;
  };
  if (contrato_rc1) {
    sub_79 = v_391;
  } else {
    sub_79 = sub_80;
  };
  if (contrato_v_427) {
    v_396 = sub_79;
  } else {
    v_396 = sub_69;
  };
  if (contrato_presenca) {
    sub_68 = v_396;
  } else {
    sub_68 = sub_27;
  };
  if (contrato_ck_14_1) {
    v_398 = sub_68;
    v_397 = sub_32;
  } else {
    v_398 = sub_32;
    v_397 = sub_68;
  };
  if (contrato_push_janela) {
    v_399 = v_397;
  } else {
    v_399 = v_398;
  };
  if (contrato_cj) {
    sub_67 = v_399;
  } else {
    sub_67 = sub_68;
  };
  if (contrato_ck_12_1) {
    v_401 = sub_67;
    v_400 = sub_33;
  } else {
    v_401 = sub_33;
    v_400 = sub_67;
  };
  if (contrato_push_porta) {
    v_402 = v_400;
  } else {
    v_402 = v_401;
  };
  if (contrato_cp) {
    sub_66 = v_402;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_v_390) {
    v_404 = sub_41;
    v_403 = sub_66;
  } else {
    v_404 = sub_66;
    v_403 = sub_5;
  };
  if (contrato_end_wash) {
    sub_65 = v_403;
  } else {
    sub_65 = v_404;
  };
  sub_64 = sub_65;
  if (contrato_v_391) {
    v_423 = sub_3;
    v_422 = sub_63;
  } else {
    v_423 = sub_64;
    v_422 = sub_64;
  };
  if (contrato_start_wash) {
    v_424 = v_422;
  } else {
    v_424 = v_423;
  };
  if (contrato_v_389) {
    sub_37 = v_424;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_289) {
    sub_36 = sub_2;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_comfort_input) {
    v_439 = sub_36;
    sub_35 = sub_2;
  } else {
    v_439 = sub_37;
    sub_35 = sub_36;
  };
  if (contrato_v_288) {
    v_440 = v_439;
  } else {
    v_440 = sub_35;
  };
  if (contrato_eco_input) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_440;
  };
  sub_98 = true;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (contrato_rad_up2) {
    v_379 = false;
  } else {
    v_379 = sub_91;
  };
  if (contrato_rc2) {
    sub_101 = v_379;
  } else {
    sub_101 = sub_90;
  };
  if (contrato_v_426) {
    sub_100 = sub_101;
  } else {
    sub_100 = sub_89;
  };
  sub_99 = sub_100;
  if (contrato_rc1) {
    v_380 = sub_88;
  } else {
    v_380 = sub_99;
  };
  sub_102 = sub_99;
  if (contrato_rad_up1) {
    sub_87 = v_380;
  } else {
    sub_87 = sub_102;
  };
  if (contrato_rad_down2) {
    sub_105 = sub_92;
  } else {
    sub_105 = false;
  };
  if (contrato_rc2) {
    sub_104 = sub_105;
  } else {
    sub_104 = sub_90;
  };
  if (contrato_v_426) {
    v_377 = sub_101;
  } else {
    v_377 = sub_104;
  };
  if (contrato_rad_down1) {
    v_378 = sub_89;
  } else {
    v_378 = v_377;
  };
  if (contrato_rc1) {
    sub_103 = v_378;
  } else {
    sub_103 = sub_88;
  };
  if (contrato_v_427) {
    v_381 = sub_103;
  } else {
    v_381 = sub_87;
  };
  if (contrato_ck_16_1) {
    sub_118 = sub_19;
  } else {
    sub_118 = sub_98;
  };
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (contrato_v_426) {
    sub_108 = false;
  } else {
    sub_108 = sub_109;
  };
  if (contrato_rad_up2) {
    v_374 = false;
  } else {
    v_374 = sub_111;
  };
  if (contrato_rc2) {
    v_375 = v_374;
  } else {
    v_375 = sub_110;
  };
  if (contrato_v_426) {
    sub_120 = v_375;
  } else {
    sub_120 = sub_109;
  };
  sub_119 = sub_120;
  if (contrato_rc1) {
    v_376 = sub_108;
  } else {
    v_376 = sub_119;
  };
  if (contrato_rad_up1) {
    sub_107 = v_376;
  } else {
    sub_107 = sub_119;
  };
  if (contrato_v_426) {
    sub_122 = sub_109;
  } else {
    sub_122 = false;
  };
  if (contrato_rad_down2) {
    sub_124 = sub_112;
  } else {
    sub_124 = false;
  };
  if (contrato_rc2) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_110;
  };
  if (contrato_v_426) {
    v_372 = false;
  } else {
    v_372 = sub_123;
  };
  if (contrato_rad_down1) {
    v_373 = sub_122;
  } else {
    v_373 = v_372;
  };
  if (contrato_rc1) {
    sub_121 = v_373;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_v_427) {
    sub_106 = sub_121;
  } else {
    sub_106 = sub_107;
  };
  if (contrato_presenca) {
    sub_86 = v_381;
  } else {
    sub_86 = sub_106;
  };
  if (contrato_v_426) {
    sub_127 = false;
  } else {
    sub_127 = sub_89;
  };
  if (contrato_rc1) {
    v_370 = sub_127;
  } else {
    v_370 = sub_99;
  };
  if (contrato_rad_up1) {
    sub_126 = v_370;
  } else {
    sub_126 = sub_102;
  };
  if (contrato_v_426) {
    v_368 = false;
    sub_129 = sub_89;
  } else {
    v_368 = sub_104;
    sub_129 = false;
  };
  if (contrato_rad_down1) {
    v_369 = sub_129;
  } else {
    v_369 = v_368;
  };
  if (contrato_rc1) {
    sub_128 = v_369;
  } else {
    sub_128 = sub_129;
  };
  if (contrato_v_427) {
    v_371 = sub_128;
  } else {
    v_371 = sub_126;
  };
  if (contrato_presenca) {
    sub_125 = v_371;
  } else {
    sub_125 = false;
  };
  if (contrato_ck_14_1) {
    v_383 = sub_86;
    v_382 = sub_125;
  } else {
    v_383 = sub_125;
    v_382 = sub_86;
  };
  if (contrato_push_janela) {
    v_384 = v_382;
  } else {
    v_384 = v_383;
  };
  if (contrato_cj) {
    sub_85 = v_384;
  } else {
    sub_85 = sub_86;
  };
  sub_131 = sub_125;
  sub_130 = sub_131;
  if (contrato_ck_12_1) {
    v_386 = sub_85;
    v_385 = sub_130;
  } else {
    v_386 = sub_130;
    v_385 = sub_85;
  };
  if (contrato_push_porta) {
    v_387 = v_385;
  } else {
    v_387 = v_386;
  };
  if (contrato_cp) {
    sub_84 = v_387;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  if (contrato_co) {
    sub_150 = false;
  } else {
    sub_150 = sub_94;
  };
  sub_149 = sub_150;
  if (contrato_v_332) {
    sub_148 = sub_92;
  } else {
    sub_148 = sub_149;
  };
  if (contrato_v_331) {
    sub_147 = false;
  } else {
    sub_147 = sub_148;
  };
  if (contrato_start_oven) {
    sub_152 = sub_150;
  } else {
    sub_152 = sub_93;
  };
  if (contrato_v_332) {
    sub_151 = false;
  } else {
    sub_151 = sub_152;
  };
  if (contrato_finish_oven) {
    v_352 = sub_97;
  } else {
    v_352 = false;
  };
  if (contrato_tok) {
    sub_156 = sub_96;
  } else {
    sub_156 = v_352;
  };
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  if (contrato_v_332) {
    v_353 = sub_153;
  } else {
    v_353 = sub_92;
  };
  if (contrato_v_331) {
    v_354 = v_353;
  } else {
    v_354 = sub_151;
  };
  if (contrato_v_330) {
    sub_146 = v_354;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (contrato_v_426) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_89;
  };
  if (contrato_rc1) {
    v_355 = sub_142;
  } else {
    v_355 = sub_99;
  };
  if (contrato_rad_up1) {
    sub_141 = v_355;
  } else {
    sub_141 = sub_102;
  };
  if (contrato_rad_up2) {
    v_348 = false;
  } else {
    v_348 = sub_145;
  };
  if (contrato_rc2) {
    v_349 = v_348;
  } else {
    v_349 = sub_144;
  };
  if (contrato_v_426) {
    v_350 = v_349;
    sub_158 = sub_89;
  } else {
    v_350 = sub_104;
    sub_158 = sub_143;
  };
  if (contrato_rad_down1) {
    v_351 = sub_158;
  } else {
    v_351 = v_350;
  };
  if (contrato_rc1) {
    sub_157 = v_351;
  } else {
    sub_157 = sub_158;
  };
  if (contrato_v_427) {
    v_356 = sub_157;
  } else {
    v_356 = sub_141;
  };
  if (contrato_presenca) {
    sub_140 = v_356;
  } else {
    sub_140 = sub_106;
  };
  if (contrato_ck_14_1) {
    v_358 = sub_140;
    v_357 = sub_125;
  } else {
    v_358 = sub_125;
    v_357 = sub_140;
  };
  if (contrato_push_janela) {
    v_359 = v_357;
  } else {
    v_359 = v_358;
  };
  if (contrato_cj) {
    sub_139 = v_359;
  } else {
    sub_139 = sub_140;
  };
  if (contrato_ck_12_1) {
    v_361 = sub_139;
    v_360 = sub_130;
  } else {
    v_361 = sub_130;
    v_360 = sub_139;
  };
  if (contrato_push_porta) {
    v_362 = v_360;
  } else {
    v_362 = v_361;
  };
  if (contrato_cp) {
    sub_138 = v_362;
  } else {
    sub_138 = sub_139;
  };
  if (contrato_v_390) {
    sub_159 = sub_138;
  } else {
    sub_159 = sub_84;
  };
  if (contrato_end_wash) {
    v_363 = sub_159;
  } else {
    v_363 = sub_138;
  };
  if (contrato_cws) {
    sub_137 = sub_138;
  } else {
    sub_137 = v_363;
  };
  sub_160 = sub_159;
  if (contrato_cws) {
    v_364 = sub_160;
  } else {
    v_364 = sub_83;
  };
  if (contrato_v_391) {
    sub_136 = v_364;
  } else {
    sub_136 = sub_137;
  };
  sub_135 = sub_136;
  if (contrato_v_332) {
    sub_173 = sub_153;
  } else {
    sub_173 = sub_149;
  };
  if (contrato_v_331) {
    sub_172 = false;
  } else {
    sub_172 = sub_173;
  };
  if (contrato_cold) {
    v_335 = false;
  } else {
    v_335 = sub_95;
  };
  if (contrato_co) {
    sub_175 = v_335;
  } else {
    sub_175 = sub_94;
  };
  sub_174 = sub_175;
  if (contrato_v_332) {
    v_336 = sub_153;
  } else {
    v_336 = sub_174;
  };
  if (contrato_v_331) {
    v_337 = v_336;
  } else {
    v_337 = sub_151;
  };
  if (contrato_v_330) {
    sub_171 = v_337;
  } else {
    sub_171 = sub_172;
  };
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (contrato_v_426) {
    sub_167 = sub_168;
  } else {
    sub_167 = sub_89;
  };
  if (contrato_rc1) {
    v_338 = sub_167;
  } else {
    v_338 = sub_99;
  };
  if (contrato_rad_up1) {
    sub_166 = v_338;
  } else {
    sub_166 = sub_102;
  };
  if (contrato_rad_up2) {
    v = false;
  } else {
    v = sub_170;
  };
  if (contrato_rc2) {
    v_332 = v;
  } else {
    v_332 = sub_169;
  };
  if (contrato_v_426) {
    v_333 = v_332;
    sub_177 = sub_89;
  } else {
    v_333 = sub_104;
    sub_177 = sub_168;
  };
  if (contrato_rad_down1) {
    v_334 = sub_177;
  } else {
    v_334 = v_333;
  };
  if (contrato_rc1) {
    sub_176 = v_334;
  } else {
    sub_176 = sub_177;
  };
  if (contrato_v_427) {
    v_339 = sub_176;
  } else {
    v_339 = sub_166;
  };
  if (contrato_presenca) {
    sub_165 = v_339;
  } else {
    sub_165 = sub_106;
  };
  if (contrato_ck_14_1) {
    v_341 = sub_165;
    v_340 = sub_125;
  } else {
    v_341 = sub_125;
    v_340 = sub_165;
  };
  if (contrato_push_janela) {
    v_342 = v_340;
  } else {
    v_342 = v_341;
  };
  if (contrato_cj) {
    sub_164 = v_342;
  } else {
    sub_164 = sub_165;
  };
  if (contrato_ck_12_1) {
    v_344 = sub_164;
    v_343 = sub_130;
  } else {
    v_344 = sub_130;
    v_343 = sub_164;
  };
  if (contrato_push_porta) {
    v_345 = v_343;
  } else {
    v_345 = v_344;
  };
  if (contrato_cp) {
    sub_163 = v_345;
  } else {
    sub_163 = sub_164;
  };
  if (contrato_v_390) {
    v_347 = sub_138;
    v_346 = sub_163;
  } else {
    v_347 = sub_163;
    v_346 = sub_84;
  };
  if (contrato_end_wash) {
    sub_162 = v_346;
  } else {
    sub_162 = v_347;
  };
  sub_161 = sub_162;
  if (contrato_v_391) {
    v_366 = sub_82;
    v_365 = sub_160;
  } else {
    v_366 = sub_161;
    v_365 = sub_161;
  };
  if (contrato_start_wash) {
    v_367 = v_365;
  } else {
    v_367 = v_366;
  };
  if (contrato_v_389) {
    sub_134 = v_367;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_v_289) {
    sub_133 = sub_81;
  } else {
    sub_133 = sub_134;
  };
  if (contrato_comfort_input) {
    v_441 = sub_133;
    sub_132 = sub_81;
  } else {
    v_441 = sub_134;
    sub_132 = sub_133;
  };
  if (contrato_v_288) {
    v_442 = v_441;
  } else {
    v_442 = sub_132;
  };
  if (contrato_eco_input) {
    v_443 = sub_81;
  } else {
    v_443 = v_442;
  };
  if (p_contrato_cl1) {
    sub_0 = v_443;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
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
  sub_18 = false;
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
  if (contrato_v_426) {
    sub_21 = false;
  } else {
    sub_21 = sub_10;
  };
  if (contrato_rc1) {
    v_523 = sub_21;
  } else {
    v_523 = sub_9;
  };
  if (contrato_rad_up1) {
    sub_20 = v_523;
  } else {
    sub_20 = sub_8;
  };
  if (contrato_v_426) {
    sub_23 = sub_10;
  } else {
    sub_23 = false;
  };
  if (contrato_rad_down1) {
    v_522 = sub_23;
  } else {
    v_522 = sub_21;
  };
  if (contrato_rc1) {
    sub_22 = v_522;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_v_427) {
    sub_19 = sub_22;
  } else {
    sub_19 = sub_20;
  };
  if (contrato_presenca) {
    sub_7 = sub_8;
    sub_24 = sub_19;
  } else {
    sub_7 = sub_19;
    sub_24 = false;
  };
  if (contrato_ck_14_1) {
    v_525 = sub_7;
    v_524 = sub_24;
  } else {
    v_525 = sub_24;
    v_524 = sub_7;
  };
  if (contrato_push_janela) {
    v_526 = v_524;
  } else {
    v_526 = v_525;
  };
  if (contrato_cj) {
    sub_6 = v_526;
  } else {
    sub_6 = sub_7;
  };
  sub_26 = sub_24;
  sub_25 = sub_26;
  if (contrato_ck_12_1) {
    v_528 = sub_6;
    v_527 = sub_25;
  } else {
    v_528 = sub_25;
    v_527 = sub_6;
  };
  if (contrato_push_porta) {
    v_529 = v_527;
  } else {
    v_529 = v_528;
  };
  if (contrato_cp) {
    sub_5 = v_529;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (contrato_co) {
    sub_44 = false;
  } else {
    sub_44 = sub_14;
  };
  sub_43 = sub_44;
  if (contrato_v_332) {
    sub_42 = sub_12;
  } else {
    sub_42 = sub_43;
  };
  if (contrato_v_331) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_start_oven) {
    sub_46 = sub_44;
  } else {
    sub_46 = sub_13;
  };
  if (contrato_v_332) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_finish_oven) {
    v_506 = sub_17;
  } else {
    v_506 = false;
  };
  if (contrato_tok) {
    sub_50 = sub_16;
  } else {
    sub_50 = v_506;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (contrato_v_332) {
    v_507 = sub_47;
  } else {
    v_507 = sub_12;
  };
  if (contrato_v_331) {
    v_508 = v_507;
  } else {
    v_508 = sub_45;
  };
  if (contrato_v_330) {
    sub_40 = v_508;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (contrato_v_426) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_10;
  };
  if (contrato_rc1) {
    v_509 = sub_37;
  } else {
    v_509 = sub_9;
  };
  if (contrato_rad_up1) {
    sub_36 = v_509;
  } else {
    sub_36 = sub_8;
  };
  if (contrato_v_426) {
    sub_52 = sub_10;
  } else {
    sub_52 = sub_38;
  };
  if (contrato_rad_down1) {
    v_505 = sub_52;
  } else {
    v_505 = sub_37;
  };
  if (contrato_rc1) {
    sub_51 = v_505;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_v_427) {
    v_510 = sub_51;
  } else {
    v_510 = sub_36;
  };
  if (contrato_presenca) {
    sub_35 = v_510;
  } else {
    sub_35 = sub_19;
  };
  if (contrato_ck_14_1) {
    v_512 = sub_35;
    v_511 = sub_24;
  } else {
    v_512 = sub_24;
    v_511 = sub_35;
  };
  if (contrato_push_janela) {
    v_513 = v_511;
  } else {
    v_513 = v_512;
  };
  if (contrato_cj) {
    sub_34 = v_513;
  } else {
    sub_34 = sub_35;
  };
  if (contrato_ck_12_1) {
    v_515 = sub_34;
    v_514 = sub_25;
  } else {
    v_515 = sub_25;
    v_514 = sub_34;
  };
  if (contrato_push_porta) {
    v_516 = v_514;
  } else {
    v_516 = v_515;
  };
  if (contrato_cp) {
    sub_33 = v_516;
  } else {
    sub_33 = sub_34;
  };
  if (contrato_v_390) {
    sub_53 = sub_33;
  } else {
    sub_53 = sub_5;
  };
  if (contrato_end_wash) {
    v_517 = sub_53;
  } else {
    v_517 = sub_33;
  };
  if (contrato_cws) {
    sub_32 = sub_33;
  } else {
    sub_32 = v_517;
  };
  sub_54 = sub_53;
  if (contrato_cws) {
    v_518 = sub_54;
  } else {
    v_518 = sub_4;
  };
  if (contrato_v_391) {
    sub_31 = v_518;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  if (contrato_v_332) {
    sub_66 = sub_47;
  } else {
    sub_66 = sub_43;
  };
  if (contrato_v_331) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_cold) {
    v_492 = false;
  } else {
    v_492 = sub_15;
  };
  if (contrato_co) {
    sub_68 = v_492;
  } else {
    sub_68 = sub_14;
  };
  sub_67 = sub_68;
  if (contrato_v_332) {
    v_493 = sub_47;
  } else {
    v_493 = sub_67;
  };
  if (contrato_v_331) {
    v_494 = v_493;
  } else {
    v_494 = sub_45;
  };
  if (contrato_v_330) {
    sub_64 = v_494;
  } else {
    sub_64 = sub_65;
  };
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (contrato_v_426) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_10;
  };
  if (contrato_rc1) {
    v_495 = sub_61;
  } else {
    v_495 = sub_9;
  };
  if (contrato_rad_up1) {
    sub_60 = v_495;
  } else {
    sub_60 = sub_8;
  };
  if (contrato_v_426) {
    sub_70 = sub_10;
  } else {
    sub_70 = sub_62;
  };
  if (contrato_rad_down1) {
    v_491 = sub_70;
  } else {
    v_491 = sub_61;
  };
  if (contrato_rc1) {
    sub_69 = v_491;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_427) {
    v_496 = sub_69;
  } else {
    v_496 = sub_60;
  };
  if (contrato_presenca) {
    sub_59 = v_496;
  } else {
    sub_59 = sub_19;
  };
  if (contrato_ck_14_1) {
    v_498 = sub_59;
    v_497 = sub_24;
  } else {
    v_498 = sub_24;
    v_497 = sub_59;
  };
  if (contrato_push_janela) {
    v_499 = v_497;
  } else {
    v_499 = v_498;
  };
  if (contrato_cj) {
    sub_58 = v_499;
  } else {
    sub_58 = sub_59;
  };
  if (contrato_ck_12_1) {
    v_501 = sub_58;
    v_500 = sub_25;
  } else {
    v_501 = sub_25;
    v_500 = sub_58;
  };
  if (contrato_push_porta) {
    v_502 = v_500;
  } else {
    v_502 = v_501;
  };
  if (contrato_cp) {
    sub_57 = v_502;
  } else {
    sub_57 = sub_58;
  };
  if (contrato_v_390) {
    v_504 = sub_33;
    v_503 = sub_57;
  } else {
    v_504 = sub_57;
    v_503 = sub_5;
  };
  if (contrato_end_wash) {
    sub_56 = v_503;
  } else {
    sub_56 = v_504;
  };
  sub_55 = sub_56;
  if (contrato_v_391) {
    v_520 = sub_3;
    v_519 = sub_54;
  } else {
    v_520 = sub_55;
    v_519 = sub_55;
  };
  if (contrato_start_wash) {
    v_521 = v_519;
  } else {
    v_521 = v_520;
  };
  if (contrato_v_389) {
    sub_29 = v_521;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_v_289) {
    sub_28 = sub_2;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_comfort_input) {
    v_530 = sub_28;
    sub_27 = sub_2;
  } else {
    v_530 = sub_29;
    sub_27 = sub_28;
  };
  if (contrato_v_288) {
    v_531 = v_530;
  } else {
    v_531 = sub_27;
  };
  if (contrato_eco_input) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_531;
  };
  sub_87 = true;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (contrato_rad_up2) {
    sub_90 = sub_11;
  } else {
    sub_90 = sub_80;
  };
  if (contrato_v_426) {
    sub_89 = sub_90;
  } else {
    sub_89 = sub_79;
  };
  sub_88 = sub_89;
  if (contrato_rc1) {
    v_483 = sub_78;
  } else {
    v_483 = sub_88;
  };
  sub_91 = sub_88;
  if (contrato_rad_up1) {
    sub_77 = v_483;
  } else {
    sub_77 = sub_91;
  };
  if (contrato_rad_down2) {
    sub_94 = sub_81;
  } else {
    sub_94 = sub_12;
  };
  sub_93 = sub_94;
  if (contrato_v_426) {
    v_481 = sub_90;
  } else {
    v_481 = sub_93;
  };
  if (contrato_rad_down1) {
    v_482 = sub_79;
  } else {
    v_482 = v_481;
  };
  if (contrato_rc1) {
    sub_92 = v_482;
  } else {
    sub_92 = sub_78;
  };
  if (contrato_v_427) {
    v_484 = sub_92;
  } else {
    v_484 = sub_77;
  };
  if (contrato_v_426) {
    sub_97 = false;
  } else {
    sub_97 = sub_79;
  };
  if (contrato_rc1) {
    v_480 = sub_97;
  } else {
    v_480 = sub_88;
  };
  if (contrato_rad_up1) {
    sub_96 = v_480;
  } else {
    sub_96 = sub_91;
  };
  if (contrato_v_426) {
    v_478 = false;
    sub_99 = sub_79;
  } else {
    v_478 = sub_93;
    sub_99 = false;
  };
  if (contrato_rad_down1) {
    v_479 = sub_99;
  } else {
    v_479 = v_478;
  };
  if (contrato_rc1) {
    sub_98 = v_479;
  } else {
    sub_98 = sub_99;
  };
  if (contrato_v_427) {
    sub_95 = sub_98;
  } else {
    sub_95 = sub_96;
  };
  if (contrato_presenca) {
    sub_76 = v_484;
    sub_100 = sub_95;
  } else {
    sub_76 = sub_95;
    sub_100 = false;
  };
  if (contrato_ck_14_1) {
    v_486 = sub_76;
    v_485 = sub_100;
  } else {
    v_486 = sub_100;
    v_485 = sub_76;
  };
  if (contrato_push_janela) {
    v_487 = v_485;
  } else {
    v_487 = v_486;
  };
  if (contrato_cj) {
    sub_75 = v_487;
  } else {
    sub_75 = sub_76;
  };
  sub_102 = sub_100;
  sub_101 = sub_102;
  if (contrato_ck_12_1) {
    v_489 = sub_75;
    v_488 = sub_101;
  } else {
    v_489 = sub_101;
    v_488 = sub_75;
  };
  if (contrato_push_porta) {
    v_490 = v_488;
  } else {
    v_490 = v_489;
  };
  if (contrato_cp) {
    sub_74 = v_490;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (contrato_co) {
    sub_120 = false;
  } else {
    sub_120 = sub_83;
  };
  sub_119 = sub_120;
  if (contrato_v_332) {
    sub_118 = sub_81;
  } else {
    sub_118 = sub_119;
  };
  if (contrato_v_331) {
    sub_117 = false;
  } else {
    sub_117 = sub_118;
  };
  if (contrato_start_oven) {
    sub_122 = sub_120;
  } else {
    sub_122 = sub_82;
  };
  if (contrato_v_332) {
    sub_121 = false;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_finish_oven) {
    v_462 = sub_86;
  } else {
    v_462 = false;
  };
  if (contrato_tok) {
    sub_126 = sub_85;
  } else {
    sub_126 = v_462;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (contrato_v_332) {
    v_463 = sub_123;
  } else {
    v_463 = sub_81;
  };
  if (contrato_v_331) {
    v_464 = v_463;
  } else {
    v_464 = sub_121;
  };
  if (contrato_v_330) {
    sub_116 = v_464;
  } else {
    sub_116 = sub_117;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  if (contrato_v_426) {
    sub_113 = sub_114;
  } else {
    sub_113 = sub_79;
  };
  if (contrato_rc1) {
    v_465 = sub_113;
  } else {
    v_465 = sub_88;
  };
  if (contrato_rad_up1) {
    sub_112 = v_465;
  } else {
    sub_112 = sub_91;
  };
  if (contrato_rad_up2) {
    v_459 = sub_39;
  } else {
    v_459 = sub_115;
  };
  if (contrato_v_426) {
    v_460 = v_459;
    sub_128 = sub_79;
  } else {
    v_460 = sub_93;
    sub_128 = sub_114;
  };
  if (contrato_rad_down1) {
    v_461 = sub_128;
  } else {
    v_461 = v_460;
  };
  if (contrato_rc1) {
    sub_127 = v_461;
  } else {
    sub_127 = sub_128;
  };
  if (contrato_v_427) {
    v_466 = sub_127;
  } else {
    v_466 = sub_112;
  };
  if (contrato_presenca) {
    sub_111 = v_466;
  } else {
    sub_111 = sub_95;
  };
  if (contrato_ck_14_1) {
    v_468 = sub_111;
    v_467 = sub_100;
  } else {
    v_468 = sub_100;
    v_467 = sub_111;
  };
  if (contrato_push_janela) {
    v_469 = v_467;
  } else {
    v_469 = v_468;
  };
  if (contrato_cj) {
    sub_110 = v_469;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_ck_12_1) {
    v_471 = sub_110;
    v_470 = sub_101;
  } else {
    v_471 = sub_101;
    v_470 = sub_110;
  };
  if (contrato_push_porta) {
    v_472 = v_470;
  } else {
    v_472 = v_471;
  };
  if (contrato_cp) {
    sub_109 = v_472;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_v_390) {
    sub_129 = sub_109;
  } else {
    sub_129 = sub_74;
  };
  if (contrato_end_wash) {
    v_473 = sub_129;
  } else {
    v_473 = sub_109;
  };
  if (contrato_cws) {
    sub_108 = sub_109;
  } else {
    sub_108 = v_473;
  };
  sub_130 = sub_129;
  if (contrato_cws) {
    v_474 = sub_130;
  } else {
    v_474 = sub_73;
  };
  if (contrato_v_391) {
    sub_107 = v_474;
  } else {
    sub_107 = sub_108;
  };
  sub_106 = sub_107;
  if (contrato_v_332) {
    sub_142 = sub_123;
  } else {
    sub_142 = sub_119;
  };
  if (contrato_v_331) {
    sub_141 = false;
  } else {
    sub_141 = sub_142;
  };
  if (contrato_cold) {
    v_446 = false;
  } else {
    v_446 = sub_84;
  };
  if (contrato_co) {
    sub_144 = v_446;
  } else {
    sub_144 = sub_83;
  };
  sub_143 = sub_144;
  if (contrato_v_332) {
    v_447 = sub_123;
  } else {
    v_447 = sub_143;
  };
  if (contrato_v_331) {
    v_448 = v_447;
  } else {
    v_448 = sub_121;
  };
  if (contrato_v_330) {
    sub_140 = v_448;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (contrato_v_426) {
    sub_137 = sub_138;
  } else {
    sub_137 = sub_79;
  };
  if (contrato_rc1) {
    v_449 = sub_137;
  } else {
    v_449 = sub_88;
  };
  if (contrato_rad_up1) {
    sub_136 = v_449;
  } else {
    sub_136 = sub_91;
  };
  if (contrato_rad_up2) {
    v = sub_63;
  } else {
    v = sub_139;
  };
  if (contrato_v_426) {
    v_444 = v;
    sub_146 = sub_79;
  } else {
    v_444 = sub_93;
    sub_146 = sub_138;
  };
  if (contrato_rad_down1) {
    v_445 = sub_146;
  } else {
    v_445 = v_444;
  };
  if (contrato_rc1) {
    sub_145 = v_445;
  } else {
    sub_145 = sub_146;
  };
  if (contrato_v_427) {
    v_450 = sub_145;
  } else {
    v_450 = sub_136;
  };
  if (contrato_presenca) {
    sub_135 = v_450;
  } else {
    sub_135 = sub_95;
  };
  if (contrato_ck_14_1) {
    v_452 = sub_135;
    v_451 = sub_100;
  } else {
    v_452 = sub_100;
    v_451 = sub_135;
  };
  if (contrato_push_janela) {
    v_453 = v_451;
  } else {
    v_453 = v_452;
  };
  if (contrato_cj) {
    sub_134 = v_453;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_ck_12_1) {
    v_455 = sub_134;
    v_454 = sub_101;
  } else {
    v_455 = sub_101;
    v_454 = sub_134;
  };
  if (contrato_push_porta) {
    v_456 = v_454;
  } else {
    v_456 = v_455;
  };
  if (contrato_cp) {
    sub_133 = v_456;
  } else {
    sub_133 = sub_134;
  };
  if (contrato_v_390) {
    v_458 = sub_109;
    v_457 = sub_133;
  } else {
    v_458 = sub_133;
    v_457 = sub_74;
  };
  if (contrato_end_wash) {
    sub_132 = v_457;
  } else {
    sub_132 = v_458;
  };
  sub_131 = sub_132;
  if (contrato_v_391) {
    v_476 = sub_72;
    v_475 = sub_130;
  } else {
    v_476 = sub_131;
    v_475 = sub_131;
  };
  if (contrato_start_wash) {
    v_477 = v_475;
  } else {
    v_477 = v_476;
  };
  if (contrato_v_389) {
    sub_105 = v_477;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_v_289) {
    sub_104 = sub_71;
  } else {
    sub_104 = sub_105;
  };
  if (contrato_comfort_input) {
    v_532 = sub_104;
    sub_103 = sub_71;
  } else {
    v_532 = sub_105;
    sub_103 = sub_104;
  };
  if (contrato_v_288) {
    v_533 = v_532;
  } else {
    v_533 = sub_103;
  };
  if (contrato_eco_input) {
    v_534 = sub_71;
  } else {
    v_534 = v_533;
  };
  if (p_contrato_rc2) {
    sub_0 = v_534;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
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
  int sub_164;
  sub_18 = false;
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
  if (contrato_v_426) {
    v_613 = sub_10;
  } else {
    v_613 = false;
  };
  sub_30 = true;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (contrato_v_426) {
    sub_21 = sub_10;
  } else {
    sub_21 = sub_22;
  };
  if (contrato_rad_down1) {
    sub_20 = v_613;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_v_427) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_8;
  };
  if (contrato_presenca) {
    sub_7 = sub_8;
    sub_31 = sub_19;
  } else {
    sub_7 = sub_19;
    sub_31 = false;
  };
  if (contrato_ck_14_1) {
    v_615 = sub_7;
    v_614 = sub_31;
  } else {
    v_615 = sub_31;
    v_614 = sub_7;
  };
  if (contrato_push_janela) {
    v_616 = v_614;
  } else {
    v_616 = v_615;
  };
  if (contrato_cj) {
    sub_6 = v_616;
  } else {
    sub_6 = sub_7;
  };
  sub_33 = sub_31;
  sub_32 = sub_33;
  if (contrato_ck_12_1) {
    v_618 = sub_6;
    v_617 = sub_32;
  } else {
    v_618 = sub_32;
    v_617 = sub_6;
  };
  if (contrato_push_porta) {
    v_619 = v_617;
  } else {
    v_619 = v_618;
  };
  if (contrato_cp) {
    sub_5 = v_619;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (contrato_co) {
    sub_50 = false;
  } else {
    sub_50 = sub_14;
  };
  sub_49 = sub_50;
  if (contrato_v_332) {
    sub_48 = sub_12;
  } else {
    sub_48 = sub_49;
  };
  if (contrato_v_331) {
    sub_47 = false;
  } else {
    sub_47 = sub_48;
  };
  if (contrato_start_oven) {
    sub_52 = sub_50;
  } else {
    sub_52 = sub_13;
  };
  if (contrato_v_332) {
    sub_51 = false;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_finish_oven) {
    v_596 = sub_17;
  } else {
    v_596 = false;
  };
  if (contrato_tok) {
    sub_56 = sub_16;
  } else {
    sub_56 = v_596;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (contrato_v_332) {
    v_597 = sub_53;
  } else {
    v_597 = sub_12;
  };
  if (contrato_v_331) {
    v_598 = v_597;
  } else {
    v_598 = sub_51;
  };
  if (contrato_v_330) {
    sub_46 = v_598;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (contrato_v_426) {
    v_599 = sub_10;
  } else {
    v_599 = sub_44;
  };
  if (contrato_co) {
    sub_63 = sub_26;
  } else {
    sub_63 = sub_14;
  };
  sub_62 = sub_63;
  if (contrato_v_332) {
    sub_61 = sub_12;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_v_331) {
    sub_60 = sub_24;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_start_oven) {
    sub_65 = sub_63;
  } else {
    sub_65 = sub_13;
  };
  if (contrato_v_332) {
    sub_64 = sub_24;
  } else {
    sub_64 = sub_65;
  };
  if (contrato_finish_oven) {
    v_593 = sub_17;
  } else {
    v_593 = sub_29;
  };
  if (contrato_tok) {
    sub_69 = sub_16;
  } else {
    sub_69 = v_593;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (contrato_v_332) {
    v_594 = sub_66;
  } else {
    v_594 = sub_12;
  };
  if (contrato_v_331) {
    v_595 = v_594;
  } else {
    v_595 = sub_64;
  };
  if (contrato_v_330) {
    sub_59 = v_595;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (contrato_v_426) {
    v_600 = sub_10;
  } else {
    v_600 = sub_57;
  };
  if (contrato_rad_down1) {
    sub_43 = v_599;
  } else {
    sub_43 = v_600;
  };
  if (contrato_v_427) {
    v_601 = sub_43;
  } else {
    v_601 = sub_8;
  };
  if (contrato_presenca) {
    sub_42 = v_601;
  } else {
    sub_42 = sub_19;
  };
  if (contrato_ck_14_1) {
    v_603 = sub_42;
    v_602 = sub_31;
  } else {
    v_603 = sub_31;
    v_602 = sub_42;
  };
  if (contrato_push_janela) {
    v_604 = v_602;
  } else {
    v_604 = v_603;
  };
  if (contrato_cj) {
    sub_41 = v_604;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_ck_12_1) {
    v_606 = sub_41;
    v_605 = sub_32;
  } else {
    v_606 = sub_32;
    v_605 = sub_41;
  };
  if (contrato_push_porta) {
    v_607 = v_605;
  } else {
    v_607 = v_606;
  };
  if (contrato_cp) {
    sub_40 = v_607;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_v_390) {
    sub_70 = sub_40;
  } else {
    sub_70 = sub_5;
  };
  if (contrato_end_wash) {
    v_608 = sub_70;
  } else {
    v_608 = sub_40;
  };
  if (contrato_cws) {
    sub_39 = sub_40;
  } else {
    sub_39 = v_608;
  };
  sub_71 = sub_70;
  if (contrato_cws) {
    v_609 = sub_71;
  } else {
    v_609 = sub_4;
  };
  if (contrato_v_391) {
    sub_38 = v_609;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (contrato_v_332) {
    sub_82 = sub_53;
  } else {
    sub_82 = sub_49;
  };
  if (contrato_v_331) {
    sub_81 = false;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_cold) {
    v_579 = false;
  } else {
    v_579 = sub_15;
  };
  if (contrato_co) {
    sub_84 = v_579;
  } else {
    sub_84 = sub_14;
  };
  sub_83 = sub_84;
  if (contrato_v_332) {
    v_580 = sub_53;
  } else {
    v_580 = sub_83;
  };
  if (contrato_v_331) {
    v_581 = v_580;
  } else {
    v_581 = sub_51;
  };
  if (contrato_v_330) {
    sub_80 = v_581;
  } else {
    sub_80 = sub_81;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (contrato_v_426) {
    v_582 = sub_10;
  } else {
    v_582 = sub_78;
  };
  if (contrato_v_332) {
    sub_89 = sub_66;
  } else {
    sub_89 = sub_62;
  };
  if (contrato_v_331) {
    sub_88 = sub_24;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_cold) {
    v_576 = sub_27;
  } else {
    v_576 = sub_15;
  };
  if (contrato_co) {
    sub_91 = v_576;
  } else {
    sub_91 = sub_14;
  };
  sub_90 = sub_91;
  if (contrato_v_332) {
    v_577 = sub_66;
  } else {
    v_577 = sub_90;
  };
  if (contrato_v_331) {
    v_578 = v_577;
  } else {
    v_578 = sub_64;
  };
  if (contrato_v_330) {
    sub_87 = v_578;
  } else {
    sub_87 = sub_88;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (contrato_v_426) {
    v_583 = sub_10;
  } else {
    v_583 = sub_85;
  };
  if (contrato_rad_down1) {
    sub_77 = v_582;
  } else {
    sub_77 = v_583;
  };
  if (contrato_v_427) {
    v_584 = sub_77;
  } else {
    v_584 = sub_8;
  };
  if (contrato_presenca) {
    sub_76 = v_584;
  } else {
    sub_76 = sub_19;
  };
  if (contrato_ck_14_1) {
    v_586 = sub_76;
    v_585 = sub_31;
  } else {
    v_586 = sub_31;
    v_585 = sub_76;
  };
  if (contrato_push_janela) {
    v_587 = v_585;
  } else {
    v_587 = v_586;
  };
  if (contrato_cj) {
    sub_75 = v_587;
  } else {
    sub_75 = sub_76;
  };
  if (contrato_ck_12_1) {
    v_589 = sub_75;
    v_588 = sub_32;
  } else {
    v_589 = sub_32;
    v_588 = sub_75;
  };
  if (contrato_push_porta) {
    v_590 = v_588;
  } else {
    v_590 = v_589;
  };
  if (contrato_cp) {
    sub_74 = v_590;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_v_390) {
    v_592 = sub_40;
    v_591 = sub_74;
  } else {
    v_592 = sub_74;
    v_591 = sub_5;
  };
  if (contrato_end_wash) {
    sub_73 = v_591;
  } else {
    sub_73 = v_592;
  };
  sub_72 = sub_73;
  if (contrato_v_391) {
    v_611 = sub_3;
    v_610 = sub_71;
  } else {
    v_611 = sub_72;
    v_610 = sub_72;
  };
  if (contrato_start_wash) {
    v_612 = v_610;
  } else {
    v_612 = v_611;
  };
  if (contrato_v_389) {
    sub_36 = v_612;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_v_289) {
    sub_35 = sub_2;
  } else {
    sub_35 = sub_36;
  };
  if (contrato_comfort_input) {
    v_620 = sub_35;
    sub_34 = sub_2;
  } else {
    v_620 = sub_36;
    sub_34 = sub_35;
  };
  if (contrato_v_288) {
    v_621 = v_620;
  } else {
    v_621 = sub_34;
  };
  if (contrato_eco_input) {
    sub_1 = sub_2;
  } else {
    sub_1 = v_621;
  };
  sub_98 = sub_22;
  if (contrato_rad_up1) {
    sub_100 = sub_21;
  } else {
    sub_100 = sub_98;
  };
  if (contrato_v_426) {
    v_569 = sub_22;
  } else {
    v_569 = false;
  };
  if (contrato_rad_down1) {
    sub_101 = v_569;
  } else {
    sub_101 = sub_21;
  };
  if (contrato_v_427) {
    sub_99 = sub_101;
  } else {
    sub_99 = sub_100;
  };
  if (contrato_presenca) {
    sub_97 = sub_98;
    sub_102 = sub_99;
  } else {
    sub_97 = sub_99;
    sub_102 = false;
  };
  if (contrato_ck_14_1) {
    v_571 = sub_97;
    v_570 = sub_102;
  } else {
    v_571 = sub_102;
    v_570 = sub_97;
  };
  if (contrato_push_janela) {
    v_572 = v_570;
  } else {
    v_572 = v_571;
  };
  if (contrato_cj) {
    sub_96 = v_572;
  } else {
    sub_96 = sub_97;
  };
  sub_104 = sub_102;
  sub_103 = sub_104;
  if (contrato_ck_12_1) {
    v_574 = sub_96;
    v_573 = sub_103;
  } else {
    v_574 = sub_103;
    v_573 = sub_96;
  };
  if (contrato_push_porta) {
    v_575 = v_573;
  } else {
    v_575 = v_574;
  };
  if (contrato_cp) {
    sub_95 = v_575;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (contrato_co) {
    sub_121 = sub_14;
  } else {
    sub_121 = sub_26;
  };
  sub_120 = sub_121;
  if (contrato_v_332) {
    sub_119 = sub_24;
  } else {
    sub_119 = sub_120;
  };
  if (contrato_v_331) {
    sub_118 = sub_12;
  } else {
    sub_118 = sub_119;
  };
  if (contrato_start_oven) {
    sub_123 = sub_121;
  } else {
    sub_123 = sub_25;
  };
  if (contrato_v_332) {
    sub_122 = sub_12;
  } else {
    sub_122 = sub_123;
  };
  if (contrato_finish_oven) {
    v_554 = sub_29;
  } else {
    v_554 = sub_17;
  };
  if (contrato_tok) {
    sub_127 = sub_28;
  } else {
    sub_127 = v_554;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (contrato_v_332) {
    v_555 = sub_124;
  } else {
    v_555 = sub_24;
  };
  if (contrato_v_331) {
    v_556 = v_555;
  } else {
    v_556 = sub_122;
  };
  if (contrato_v_330) {
    sub_117 = v_556;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (contrato_v_426) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_22;
  };
  if (contrato_rad_up1) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_98;
  };
  if (contrato_co) {
    sub_135 = false;
  } else {
    sub_135 = sub_26;
  };
  sub_134 = sub_135;
  if (contrato_v_332) {
    sub_133 = sub_24;
  } else {
    sub_133 = sub_134;
  };
  if (contrato_v_331) {
    sub_132 = false;
  } else {
    sub_132 = sub_133;
  };
  if (contrato_start_oven) {
    sub_137 = sub_135;
  } else {
    sub_137 = sub_25;
  };
  if (contrato_v_332) {
    sub_136 = false;
  } else {
    sub_136 = sub_137;
  };
  if (contrato_finish_oven) {
    v_550 = sub_29;
  } else {
    v_550 = false;
  };
  if (contrato_tok) {
    sub_141 = sub_28;
  } else {
    sub_141 = v_550;
  };
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (contrato_v_332) {
    v_551 = sub_138;
  } else {
    v_551 = sub_24;
  };
  if (contrato_v_331) {
    v_552 = v_551;
  } else {
    v_552 = sub_136;
  };
  if (contrato_v_330) {
    sub_131 = v_552;
  } else {
    sub_131 = sub_132;
  };
  sub_130 = sub_131;
  sub_129 = sub_130;
  if (contrato_v_426) {
    v_553 = sub_22;
  } else {
    v_553 = sub_129;
  };
  if (contrato_rad_down1) {
    sub_128 = v_553;
  } else {
    sub_128 = sub_115;
  };
  if (contrato_v_427) {
    v_557 = sub_128;
  } else {
    v_557 = sub_114;
  };
  if (contrato_presenca) {
    sub_113 = v_557;
  } else {
    sub_113 = sub_99;
  };
  if (contrato_ck_14_1) {
    v_559 = sub_113;
    v_558 = sub_102;
  } else {
    v_559 = sub_102;
    v_558 = sub_113;
  };
  if (contrato_push_janela) {
    v_560 = v_558;
  } else {
    v_560 = v_559;
  };
  if (contrato_cj) {
    sub_112 = v_560;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_ck_12_1) {
    v_562 = sub_112;
    v_561 = sub_103;
  } else {
    v_562 = sub_103;
    v_561 = sub_112;
  };
  if (contrato_push_porta) {
    v_563 = v_561;
  } else {
    v_563 = v_562;
  };
  if (contrato_cp) {
    sub_111 = v_563;
  } else {
    sub_111 = sub_112;
  };
  if (contrato_v_390) {
    sub_142 = sub_111;
  } else {
    sub_142 = sub_95;
  };
  if (contrato_end_wash) {
    v_564 = sub_142;
  } else {
    v_564 = sub_111;
  };
  if (contrato_cws) {
    sub_110 = sub_111;
  } else {
    sub_110 = v_564;
  };
  sub_143 = sub_142;
  if (contrato_cws) {
    v_565 = sub_143;
  } else {
    v_565 = sub_94;
  };
  if (contrato_v_391) {
    sub_109 = v_565;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  if (contrato_v_332) {
    sub_154 = sub_124;
  } else {
    sub_154 = sub_120;
  };
  if (contrato_v_331) {
    sub_153 = sub_12;
  } else {
    sub_153 = sub_154;
  };
  if (contrato_cold) {
    v_538 = sub_15;
  } else {
    v_538 = sub_27;
  };
  if (contrato_co) {
    sub_156 = v_538;
  } else {
    sub_156 = sub_26;
  };
  sub_155 = sub_156;
  if (contrato_v_332) {
    v_539 = sub_124;
  } else {
    v_539 = sub_155;
  };
  if (contrato_v_331) {
    v_540 = v_539;
  } else {
    v_540 = sub_122;
  };
  if (contrato_v_330) {
    sub_152 = v_540;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  if (contrato_v_426) {
    sub_150 = sub_151;
  } else {
    sub_150 = sub_22;
  };
  if (contrato_rad_up1) {
    sub_149 = sub_150;
  } else {
    sub_149 = sub_98;
  };
  if (contrato_v_332) {
    sub_162 = sub_138;
  } else {
    sub_162 = sub_134;
  };
  if (contrato_v_331) {
    sub_161 = false;
  } else {
    sub_161 = sub_162;
  };
  if (contrato_cold) {
    v = false;
  } else {
    v = sub_27;
  };
  if (contrato_co) {
    sub_164 = v;
  } else {
    sub_164 = sub_26;
  };
  sub_163 = sub_164;
  if (contrato_v_332) {
    v_535 = sub_138;
  } else {
    v_535 = sub_163;
  };
  if (contrato_v_331) {
    v_536 = v_535;
  } else {
    v_536 = sub_136;
  };
  if (contrato_v_330) {
    sub_160 = v_536;
  } else {
    sub_160 = sub_161;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (contrato_v_426) {
    v_537 = sub_22;
  } else {
    v_537 = sub_158;
  };
  if (contrato_rad_down1) {
    sub_157 = v_537;
  } else {
    sub_157 = sub_150;
  };
  if (contrato_v_427) {
    v_541 = sub_157;
  } else {
    v_541 = sub_149;
  };
  if (contrato_presenca) {
    sub_148 = v_541;
  } else {
    sub_148 = sub_99;
  };
  if (contrato_ck_14_1) {
    v_543 = sub_148;
    v_542 = sub_102;
  } else {
    v_543 = sub_102;
    v_542 = sub_148;
  };
  if (contrato_push_janela) {
    v_544 = v_542;
  } else {
    v_544 = v_543;
  };
  if (contrato_cj) {
    sub_147 = v_544;
  } else {
    sub_147 = sub_148;
  };
  if (contrato_ck_12_1) {
    v_546 = sub_147;
    v_545 = sub_103;
  } else {
    v_546 = sub_103;
    v_545 = sub_147;
  };
  if (contrato_push_porta) {
    v_547 = v_545;
  } else {
    v_547 = v_546;
  };
  if (contrato_cp) {
    sub_146 = v_547;
  } else {
    sub_146 = sub_147;
  };
  if (contrato_v_390) {
    v_549 = sub_111;
    v_548 = sub_146;
  } else {
    v_549 = sub_146;
    v_548 = sub_95;
  };
  if (contrato_end_wash) {
    sub_145 = v_548;
  } else {
    sub_145 = v_549;
  };
  sub_144 = sub_145;
  if (contrato_v_391) {
    v_567 = sub_93;
    v_566 = sub_143;
  } else {
    v_567 = sub_144;
    v_566 = sub_144;
  };
  if (contrato_start_wash) {
    v_568 = v_566;
  } else {
    v_568 = v_567;
  };
  if (contrato_v_389) {
    sub_107 = v_568;
  } else {
    sub_107 = sub_108;
  };
  if (contrato_v_289) {
    sub_106 = sub_92;
  } else {
    sub_106 = sub_107;
  };
  if (contrato_comfort_input) {
    v_622 = sub_106;
    sub_105 = sub_92;
  } else {
    v_622 = sub_107;
    sub_105 = sub_106;
  };
  if (contrato_v_288) {
    v_623 = v_622;
  } else {
    v_623 = sub_105;
  };
  if (contrato_eco_input) {
    v_624 = sub_92;
  } else {
    v_624 = v_623;
  };
  if (p_contrato_rc1) {
    sub_0 = v_624;
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
                                                               int contrato_v_427,
                                                               int contrato_v_426,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_20_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_v_389,
                                                               int contrato_pnr_2,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_v_330,
                                                               int contrato_pnr_1,
                                                               int contrato_pnr,
                                                               int contrato_v_289,
                                                               int contrato_v_288,
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
  
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
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
  sub_17 = p_contrato_co;
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
  if (contrato_v_426) {
    v_652 = sub_9;
  } else {
    v_652 = false;
  };
  if (contrato_rad_down1) {
    sub_19 = v_652;
  } else {
    sub_19 = sub_9;
  };
  if (contrato_v_427) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_7;
  };
  if (contrato_presenca) {
    sub_6 = sub_7;
    sub_20 = sub_18;
  } else {
    sub_6 = sub_18;
    sub_20 = false;
  };
  if (contrato_ck_14_1) {
    v_654 = sub_6;
    v_653 = sub_20;
  } else {
    v_654 = sub_20;
    v_653 = sub_6;
  };
  if (contrato_push_janela) {
    v_655 = v_653;
  } else {
    v_655 = v_654;
  };
  if (contrato_cj) {
    sub_5 = v_655;
  } else {
    sub_5 = sub_6;
  };
  sub_22 = sub_20;
  sub_21 = sub_22;
  if (contrato_ck_12_1) {
    v_657 = sub_5;
    v_656 = sub_21;
  } else {
    v_657 = sub_21;
    v_656 = sub_5;
  };
  if (contrato_push_porta) {
    v_658 = v_656;
  } else {
    v_658 = v_657;
  };
  if (contrato_cp) {
    sub_4 = v_658;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_43 = false;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (contrato_v_332) {
    sub_37 = sub_11;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_331) {
    sub_36 = false;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_start_oven) {
    sub_45 = sub_39;
  } else {
    sub_45 = sub_12;
  };
  if (contrato_v_332) {
    sub_44 = false;
  } else {
    sub_44 = sub_45;
  };
  if (contrato_finish_oven) {
    v_636 = sub_15;
  } else {
    v_636 = false;
  };
  if (contrato_tok) {
    sub_48 = sub_14;
  } else {
    sub_48 = v_636;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (contrato_v_332) {
    v_637 = sub_46;
  } else {
    v_637 = sub_11;
  };
  if (contrato_v_331) {
    v_638 = v_637;
  } else {
    v_638 = sub_44;
  };
  if (contrato_v_330) {
    sub_35 = v_638;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (contrato_v_426) {
    v_639 = sub_9;
  } else {
    v_639 = sub_33;
  };
  if (contrato_rad_down1) {
    sub_32 = v_639;
  } else {
    sub_32 = sub_9;
  };
  if (contrato_v_427) {
    v_640 = sub_32;
  } else {
    v_640 = sub_7;
  };
  if (contrato_presenca) {
    sub_31 = v_640;
  } else {
    sub_31 = sub_18;
  };
  if (contrato_ck_14_1) {
    v_642 = sub_31;
    v_641 = sub_20;
  } else {
    v_642 = sub_20;
    v_641 = sub_31;
  };
  if (contrato_push_janela) {
    v_643 = v_641;
  } else {
    v_643 = v_642;
  };
  if (contrato_cj) {
    sub_30 = v_643;
  } else {
    sub_30 = sub_31;
  };
  if (contrato_ck_12_1) {
    v_645 = sub_30;
    v_644 = sub_21;
  } else {
    v_645 = sub_21;
    v_644 = sub_30;
  };
  if (contrato_push_porta) {
    v_646 = v_644;
  } else {
    v_646 = v_645;
  };
  if (contrato_cp) {
    sub_29 = v_646;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_v_390) {
    sub_49 = sub_29;
  } else {
    sub_49 = sub_4;
  };
  if (contrato_end_wash) {
    v_647 = sub_49;
  } else {
    v_647 = sub_29;
  };
  if (contrato_cws) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_647;
  };
  sub_50 = sub_49;
  if (contrato_cws) {
    v_648 = sub_50;
  } else {
    v_648 = sub_3;
  };
  if (contrato_v_391) {
    sub_27 = v_648;
  } else {
    sub_27 = sub_28;
  };
  sub_26 = sub_27;
  if (contrato_v_332) {
    sub_61 = sub_46;
  } else {
    sub_61 = sub_38;
  };
  if (contrato_v_331) {
    sub_60 = false;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_cold) {
    sub_63 = sub_40;
  } else {
    sub_63 = sub_13;
  };
  sub_62 = sub_63;
  if (contrato_v_332) {
    v = sub_46;
  } else {
    v = sub_62;
  };
  if (contrato_v_331) {
    v_625 = v;
  } else {
    v_625 = sub_44;
  };
  if (contrato_v_330) {
    sub_59 = v_625;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (contrato_v_426) {
    v_626 = sub_9;
  } else {
    v_626 = sub_57;
  };
  if (contrato_rad_down1) {
    sub_56 = v_626;
  } else {
    sub_56 = sub_9;
  };
  if (contrato_v_427) {
    v_627 = sub_56;
  } else {
    v_627 = sub_7;
  };
  if (contrato_presenca) {
    sub_55 = v_627;
  } else {
    sub_55 = sub_18;
  };
  if (contrato_ck_14_1) {
    v_629 = sub_55;
    v_628 = sub_20;
  } else {
    v_629 = sub_20;
    v_628 = sub_55;
  };
  if (contrato_push_janela) {
    v_630 = v_628;
  } else {
    v_630 = v_629;
  };
  if (contrato_cj) {
    sub_54 = v_630;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_ck_12_1) {
    v_632 = sub_54;
    v_631 = sub_21;
  } else {
    v_632 = sub_21;
    v_631 = sub_54;
  };
  if (contrato_push_porta) {
    v_633 = v_631;
  } else {
    v_633 = v_632;
  };
  if (contrato_cp) {
    sub_53 = v_633;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_v_390) {
    v_635 = sub_29;
    v_634 = sub_53;
  } else {
    v_635 = sub_53;
    v_634 = sub_4;
  };
  if (contrato_end_wash) {
    sub_52 = v_634;
  } else {
    sub_52 = v_635;
  };
  sub_51 = sub_52;
  if (contrato_v_391) {
    v_650 = sub_2;
    v_649 = sub_50;
  } else {
    v_650 = sub_51;
    v_649 = sub_51;
  };
  if (contrato_start_wash) {
    v_651 = v_649;
  } else {
    v_651 = v_650;
  };
  if (contrato_v_389) {
    sub_25 = v_651;
  } else {
    sub_25 = sub_26;
  };
  if (contrato_v_289) {
    sub_24 = sub_1;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_comfort_input) {
    v_659 = sub_24;
    sub_23 = sub_1;
  } else {
    v_659 = sub_25;
    sub_23 = sub_24;
  };
  if (contrato_v_288) {
    v_660 = v_659;
  } else {
    v_660 = sub_23;
  };
  if (contrato_eco_input) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_660;
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
                                                                int contrato_v_427,
                                                                int contrato_v_426,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_20_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_391,
                                                                int contrato_v_390,
                                                                int contrato_v_389,
                                                                int contrato_pnr_2,
                                                                int contrato_v_332,
                                                                int contrato_v_331,
                                                                int contrato_v_330,
                                                                int contrato_pnr_1,
                                                                int contrato_pnr,
                                                                int contrato_v_289,
                                                                int contrato_v_288,
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
  
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_696;
  int v_695;
  int v_694;
  int v_693;
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
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
  sub_16 = p_contrato_cws;
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
  if (contrato_v_426) {
    v_694 = sub_8;
  } else {
    v_694 = false;
  };
  if (contrato_rad_down1) {
    sub_18 = v_694;
  } else {
    sub_18 = sub_8;
  };
  if (contrato_v_427) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_6;
  };
  if (contrato_presenca) {
    sub_5 = sub_6;
    sub_19 = sub_17;
  } else {
    sub_5 = sub_17;
    sub_19 = false;
  };
  if (contrato_ck_14_1) {
    v_696 = sub_5;
    v_695 = sub_19;
  } else {
    v_696 = sub_19;
    v_695 = sub_5;
  };
  if (contrato_push_janela) {
    v_697 = v_695;
  } else {
    v_697 = v_696;
  };
  if (contrato_cj) {
    sub_4 = v_697;
  } else {
    sub_4 = sub_5;
  };
  sub_21 = sub_19;
  sub_20 = sub_21;
  if (contrato_ck_12_1) {
    v_699 = sub_4;
    v_698 = sub_20;
  } else {
    v_699 = sub_20;
    v_698 = sub_4;
  };
  if (contrato_push_porta) {
    v_700 = v_698;
  } else {
    v_700 = v_699;
  };
  if (contrato_cp) {
    sub_3 = v_700;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_41 = false;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (contrato_v_331) {
    sub_35 = sub_36;
  } else {
    sub_35 = sub_10;
  };
  if (contrato_v_332) {
    sub_42 = sub_36;
  } else {
    sub_42 = sub_10;
  };
  if (contrato_finish_oven) {
    v_679 = sub_14;
  } else {
    v_679 = sub_40;
  };
  if (contrato_tok) {
    sub_44 = sub_13;
  } else {
    sub_44 = v_679;
  };
  sub_43 = sub_44;
  if (contrato_v_332) {
    v_680 = sub_43;
  } else {
    v_680 = sub_10;
  };
  if (contrato_v_331) {
    v_681 = v_680;
  } else {
    v_681 = sub_42;
  };
  if (contrato_v_330) {
    sub_34 = v_681;
  } else {
    sub_34 = sub_35;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (contrato_v_426) {
    v_682 = sub_8;
  } else {
    v_682 = sub_32;
  };
  if (contrato_rad_down1) {
    sub_31 = v_682;
  } else {
    sub_31 = sub_8;
  };
  if (contrato_v_427) {
    v_683 = sub_31;
  } else {
    v_683 = sub_6;
  };
  if (contrato_presenca) {
    sub_30 = v_683;
  } else {
    sub_30 = sub_17;
  };
  if (contrato_ck_14_1) {
    v_685 = sub_30;
    v_684 = sub_19;
  } else {
    v_685 = sub_19;
    v_684 = sub_30;
  };
  if (contrato_push_janela) {
    v_686 = v_684;
  } else {
    v_686 = v_685;
  };
  if (contrato_cj) {
    sub_29 = v_686;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_ck_12_1) {
    v_688 = sub_29;
    v_687 = sub_20;
  } else {
    v_688 = sub_20;
    v_687 = sub_29;
  };
  if (contrato_push_porta) {
    v_689 = v_687;
  } else {
    v_689 = v_688;
  };
  if (contrato_cp) {
    sub_28 = v_689;
  } else {
    sub_28 = sub_29;
  };
  if (contrato_v_331) {
    sub_52 = false;
  } else {
    sub_52 = sub_10;
  };
  if (contrato_v_332) {
    sub_54 = false;
  } else {
    sub_54 = sub_10;
  };
  if (contrato_finish_oven) {
    v_670 = sub_14;
  } else {
    v_670 = false;
  };
  if (contrato_tok) {
    sub_57 = sub_13;
  } else {
    sub_57 = v_670;
  };
  sub_56 = sub_57;
  if (contrato_v_332) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_10;
  };
  if (contrato_v_331) {
    sub_53 = sub_55;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_v_330) {
    sub_51 = sub_53;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (contrato_v_426) {
    v_671 = sub_8;
  } else {
    v_671 = sub_49;
  };
  if (contrato_rad_down1) {
    sub_48 = v_671;
  } else {
    sub_48 = sub_8;
  };
  if (contrato_v_427) {
    v_672 = sub_48;
  } else {
    v_672 = sub_6;
  };
  if (contrato_presenca) {
    sub_47 = v_672;
  } else {
    sub_47 = sub_17;
  };
  if (contrato_ck_14_1) {
    v_674 = sub_47;
    v_673 = sub_19;
  } else {
    v_674 = sub_19;
    v_673 = sub_47;
  };
  if (contrato_push_janela) {
    v_675 = v_673;
  } else {
    v_675 = v_674;
  };
  if (contrato_cj) {
    sub_46 = v_675;
  } else {
    sub_46 = sub_47;
  };
  if (contrato_ck_12_1) {
    v_677 = sub_46;
    v_676 = sub_20;
  } else {
    v_677 = sub_20;
    v_676 = sub_46;
  };
  if (contrato_push_porta) {
    v_678 = v_676;
  } else {
    v_678 = v_677;
  };
  if (contrato_cp) {
    sub_45 = v_678;
  } else {
    sub_45 = sub_46;
  };
  if (contrato_v_390) {
    v_690 = sub_45;
  } else {
    v_690 = sub_28;
  };
  if (contrato_end_wash) {
    sub_27 = v_690;
  } else {
    sub_27 = sub_45;
  };
  if (contrato_v_390) {
    sub_58 = sub_28;
  } else {
    sub_58 = sub_3;
  };
  if (contrato_v_391) {
    sub_26 = sub_58;
  } else {
    sub_26 = sub_27;
  };
  sub_25 = sub_26;
  if (contrato_v_331) {
    sub_67 = false;
  } else {
    sub_67 = sub_55;
  };
  if (contrato_v_330) {
    sub_66 = sub_53;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (contrato_v_426) {
    v = sub_8;
  } else {
    v = sub_64;
  };
  if (contrato_rad_down1) {
    sub_63 = v;
  } else {
    sub_63 = sub_8;
  };
  if (contrato_v_427) {
    v_661 = sub_63;
  } else {
    v_661 = sub_6;
  };
  if (contrato_presenca) {
    sub_62 = v_661;
  } else {
    sub_62 = sub_17;
  };
  if (contrato_ck_14_1) {
    v_663 = sub_62;
    v_662 = sub_19;
  } else {
    v_663 = sub_19;
    v_662 = sub_62;
  };
  if (contrato_push_janela) {
    v_664 = v_662;
  } else {
    v_664 = v_663;
  };
  if (contrato_cj) {
    sub_61 = v_664;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_ck_12_1) {
    v_666 = sub_61;
    v_665 = sub_20;
  } else {
    v_666 = sub_20;
    v_665 = sub_61;
  };
  if (contrato_push_porta) {
    v_667 = v_665;
  } else {
    v_667 = v_666;
  };
  if (contrato_cp) {
    sub_60 = v_667;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_390) {
    v_669 = sub_45;
    v_668 = sub_60;
  } else {
    v_669 = sub_60;
    v_668 = sub_3;
  };
  if (contrato_end_wash) {
    sub_59 = v_668;
  } else {
    sub_59 = v_669;
  };
  if (contrato_v_391) {
    v_692 = sub_2;
  } else {
    v_692 = sub_59;
  };
  if (contrato_v_390) {
    sub_68 = sub_45;
  } else {
    sub_68 = sub_3;
  };
  if (contrato_v_391) {
    v_691 = sub_68;
  } else {
    v_691 = sub_59;
  };
  if (contrato_start_wash) {
    v_693 = v_691;
  } else {
    v_693 = v_692;
  };
  if (contrato_v_389) {
    sub_24 = v_693;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_v_289) {
    sub_23 = sub_1;
  } else {
    sub_23 = sub_24;
  };
  if (contrato_comfort_input) {
    v_701 = sub_23;
    sub_22 = sub_1;
  } else {
    v_701 = sub_24;
    sub_22 = sub_23;
  };
  if (contrato_v_288) {
    v_702 = v_701;
  } else {
    v_702 = sub_22;
  };
  if (contrato_eco_input) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_702;
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
                                                               int contrato_v_427,
                                                               int contrato_v_426,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_20_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_v_389,
                                                               int contrato_pnr_2,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_v_330,
                                                               int contrato_pnr_1,
                                                               int contrato_pnr,
                                                               int contrato_v_289,
                                                               int contrato_v_288,
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
  
  int v_746;
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int v_741;
  int v_740;
  int v_739;
  int v_738;
  int v_737;
  int v_736;
  int v_735;
  int v_734;
  int v_733;
  int v_732;
  int v_731;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int v_725;
  int v_724;
  int v_723;
  int v_722;
  int v_721;
  int v_720;
  int v_719;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_710;
  int v_709;
  int v_708;
  int v_707;
  int v_706;
  int v_705;
  int v_704;
  int v_703;
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
  sub_16 = p_contrato_cp;
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
  if (contrato_v_426) {
    v_739 = sub_8;
  } else {
    v_739 = false;
  };
  if (contrato_rad_down1) {
    sub_18 = v_739;
  } else {
    sub_18 = sub_8;
  };
  if (contrato_v_427) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_6;
  };
  if (contrato_presenca) {
    sub_5 = sub_6;
    sub_19 = sub_17;
  } else {
    sub_5 = sub_17;
    sub_19 = false;
  };
  if (contrato_ck_14_1) {
    v_741 = sub_5;
    v_740 = sub_19;
  } else {
    v_741 = sub_19;
    v_740 = sub_5;
  };
  if (contrato_push_janela) {
    v_742 = v_740;
  } else {
    v_742 = v_741;
  };
  if (contrato_cj) {
    sub_4 = v_742;
  } else {
    sub_4 = sub_5;
  };
  sub_30 = false;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (contrato_v_426) {
    v_734 = sub_8;
  } else {
    v_734 = sub_23;
  };
  if (contrato_rad_down1) {
    sub_22 = v_734;
  } else {
    sub_22 = sub_8;
  };
  if (contrato_v_427) {
    v_735 = sub_22;
  } else {
    v_735 = sub_6;
  };
  sub_33 = sub_23;
  sub_32 = sub_33;
  if (contrato_v_426) {
    v_733 = sub_23;
  } else {
    v_733 = false;
  };
  if (contrato_rad_down1) {
    sub_34 = v_733;
  } else {
    sub_34 = sub_23;
  };
  if (contrato_v_427) {
    sub_31 = sub_34;
  } else {
    sub_31 = sub_32;
  };
  if (contrato_presenca) {
    sub_21 = v_735;
  } else {
    sub_21 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_737 = sub_21;
    v_736 = sub_19;
  } else {
    v_737 = sub_19;
    v_736 = sub_21;
  };
  if (contrato_push_janela) {
    v_738 = v_736;
  } else {
    v_738 = v_737;
  };
  if (contrato_cj) {
    sub_20 = v_738;
  } else {
    sub_20 = sub_21;
  };
  if (contrato_ck_12_1) {
    v_744 = sub_4;
    v_743 = sub_20;
  } else {
    v_744 = sub_20;
    v_743 = sub_4;
  };
  if (contrato_push_porta) {
    sub_3 = v_743;
  } else {
    sub_3 = v_744;
  };
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (contrato_v_331) {
    sub_49 = false;
  } else {
    sub_49 = sub_10;
  };
  if (contrato_v_332) {
    sub_51 = false;
  } else {
    sub_51 = sub_10;
  };
  if (contrato_finish_oven) {
    v_722 = sub_14;
  } else {
    v_722 = false;
  };
  if (contrato_tok) {
    sub_54 = sub_13;
  } else {
    sub_54 = v_722;
  };
  sub_53 = sub_54;
  if (contrato_v_332) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_10;
  };
  if (contrato_v_331) {
    sub_50 = sub_52;
  } else {
    sub_50 = sub_51;
  };
  if (contrato_v_330) {
    sub_48 = sub_50;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (contrato_v_426) {
    v_723 = sub_8;
  } else {
    v_723 = sub_46;
  };
  if (contrato_rad_down1) {
    sub_45 = v_723;
  } else {
    sub_45 = sub_8;
  };
  if (contrato_v_427) {
    v_724 = sub_45;
  } else {
    v_724 = sub_6;
  };
  if (contrato_presenca) {
    sub_44 = v_724;
  } else {
    sub_44 = sub_17;
  };
  if (contrato_ck_14_1) {
    v_726 = sub_44;
    v_725 = sub_19;
  } else {
    v_726 = sub_19;
    v_725 = sub_44;
  };
  if (contrato_push_janela) {
    v_727 = v_725;
  } else {
    v_727 = v_726;
  };
  if (contrato_cj) {
    sub_43 = v_727;
  } else {
    sub_43 = sub_44;
  };
  if (contrato_v_331) {
    sub_61 = false;
  } else {
    sub_61 = sub_25;
  };
  if (contrato_v_332) {
    sub_63 = false;
  } else {
    sub_63 = sub_25;
  };
  if (contrato_finish_oven) {
    v_716 = sub_29;
  } else {
    v_716 = false;
  };
  if (contrato_tok) {
    sub_66 = sub_28;
  } else {
    sub_66 = v_716;
  };
  sub_65 = sub_66;
  if (contrato_v_332) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_25;
  };
  if (contrato_v_331) {
    sub_62 = sub_64;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_v_330) {
    sub_60 = sub_62;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (contrato_v_426) {
    v_717 = sub_8;
  } else {
    v_717 = sub_58;
  };
  if (contrato_rad_down1) {
    sub_57 = v_717;
  } else {
    sub_57 = sub_8;
  };
  if (contrato_v_427) {
    v_718 = sub_57;
  } else {
    v_718 = sub_6;
  };
  if (contrato_presenca) {
    sub_56 = v_718;
  } else {
    sub_56 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_720 = sub_56;
    v_719 = sub_19;
  } else {
    v_720 = sub_19;
    v_719 = sub_56;
  };
  if (contrato_push_janela) {
    v_721 = v_719;
  } else {
    v_721 = v_720;
  };
  if (contrato_cj) {
    sub_55 = v_721;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_ck_12_1) {
    v_729 = sub_43;
    v_728 = sub_55;
  } else {
    v_729 = sub_55;
    v_728 = sub_43;
  };
  if (contrato_push_porta) {
    sub_42 = v_728;
  } else {
    sub_42 = v_729;
  };
  if (contrato_v_390) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_3;
  };
  if (contrato_end_wash) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_42;
  };
  if (contrato_v_391) {
    sub_39 = sub_2;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  if (contrato_v_331) {
    sub_75 = false;
  } else {
    sub_75 = sub_52;
  };
  if (contrato_v_330) {
    sub_74 = sub_50;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (contrato_v_426) {
    v_707 = sub_8;
  } else {
    v_707 = sub_72;
  };
  if (contrato_rad_down1) {
    sub_71 = v_707;
  } else {
    sub_71 = sub_8;
  };
  if (contrato_v_427) {
    v_708 = sub_71;
  } else {
    v_708 = sub_6;
  };
  if (contrato_presenca) {
    sub_70 = v_708;
  } else {
    sub_70 = sub_17;
  };
  if (contrato_ck_14_1) {
    v_710 = sub_70;
    v_709 = sub_19;
  } else {
    v_710 = sub_19;
    v_709 = sub_70;
  };
  if (contrato_push_janela) {
    v_711 = v_709;
  } else {
    v_711 = v_710;
  };
  if (contrato_cj) {
    sub_69 = v_711;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_331) {
    sub_82 = false;
  } else {
    sub_82 = sub_64;
  };
  if (contrato_v_330) {
    sub_81 = sub_62;
  } else {
    sub_81 = sub_82;
  };
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (contrato_v_426) {
    v = sub_8;
  } else {
    v = sub_79;
  };
  if (contrato_rad_down1) {
    sub_78 = v;
  } else {
    sub_78 = sub_8;
  };
  if (contrato_v_427) {
    v_703 = sub_78;
  } else {
    v_703 = sub_6;
  };
  if (contrato_presenca) {
    sub_77 = v_703;
  } else {
    sub_77 = sub_31;
  };
  if (contrato_ck_14_1) {
    v_705 = sub_77;
    v_704 = sub_19;
  } else {
    v_705 = sub_19;
    v_704 = sub_77;
  };
  if (contrato_push_janela) {
    v_706 = v_704;
  } else {
    v_706 = v_705;
  };
  if (contrato_cj) {
    sub_76 = v_706;
  } else {
    sub_76 = sub_77;
  };
  if (contrato_ck_12_1) {
    v_713 = sub_69;
    v_712 = sub_76;
  } else {
    v_713 = sub_76;
    v_712 = sub_69;
  };
  if (contrato_push_porta) {
    sub_68 = v_712;
  } else {
    sub_68 = v_713;
  };
  if (contrato_v_390) {
    v_715 = sub_42;
    v_714 = sub_68;
  } else {
    v_715 = sub_68;
    v_714 = sub_3;
  };
  if (contrato_end_wash) {
    sub_67 = v_714;
  } else {
    sub_67 = v_715;
  };
  if (contrato_v_391) {
    v_731 = sub_2;
    v_730 = sub_41;
  } else {
    v_731 = sub_67;
    v_730 = sub_67;
  };
  if (contrato_start_wash) {
    v_732 = v_730;
  } else {
    v_732 = v_731;
  };
  if (contrato_v_389) {
    sub_37 = v_732;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_289) {
    sub_36 = sub_1;
  } else {
    sub_36 = sub_37;
  };
  if (contrato_comfort_input) {
    v_745 = sub_36;
    sub_35 = sub_1;
  } else {
    v_745 = sub_37;
    sub_35 = sub_36;
  };
  if (contrato_v_288) {
    v_746 = v_745;
  } else {
    v_746 = sub_35;
  };
  if (contrato_eco_input) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_746;
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
                                                               int contrato_v_427,
                                                               int contrato_v_426,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_20_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_391,
                                                               int contrato_v_390,
                                                               int contrato_v_389,
                                                               int contrato_pnr_2,
                                                               int contrato_v_332,
                                                               int contrato_v_331,
                                                               int contrato_v_330,
                                                               int contrato_pnr_1,
                                                               int contrato_pnr,
                                                               int contrato_v_289,
                                                               int contrato_v_288,
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
  
  int v_772;
  int v_771;
  int v_770;
  int v_769;
  int v_768;
  int v_767;
  int v_766;
  int v_765;
  int v_764;
  int v_763;
  int v_762;
  int v_761;
  int v_760;
  int v_759;
  int v_758;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
  int v_751;
  int v_750;
  int v_749;
  int v_748;
  int v_747;
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
  sub_16 = p_contrato_cj;
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
  if (contrato_v_426) {
    v_768 = sub_8;
  } else {
    v_768 = false;
  };
  if (contrato_rad_down1) {
    sub_18 = v_768;
  } else {
    sub_18 = sub_8;
  };
  if (contrato_v_427) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_6;
  };
  if (contrato_presenca) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_17;
  };
  sub_28 = false;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (contrato_v_426) {
    v_766 = sub_8;
  } else {
    v_766 = sub_21;
  };
  if (contrato_rad_down1) {
    sub_20 = v_766;
  } else {
    sub_20 = sub_8;
  };
  if (contrato_v_427) {
    v_767 = sub_20;
  } else {
    v_767 = sub_6;
  };
  sub_31 = sub_21;
  sub_30 = sub_31;
  if (contrato_v_426) {
    v_765 = sub_21;
  } else {
    v_765 = false;
  };
  if (contrato_rad_down1) {
    sub_32 = v_765;
  } else {
    sub_32 = sub_21;
  };
  if (contrato_v_427) {
    sub_29 = sub_32;
  } else {
    sub_29 = sub_30;
  };
  if (contrato_presenca) {
    sub_19 = v_767;
  } else {
    sub_19 = sub_29;
  };
  if (contrato_ck_14_1) {
    v_770 = sub_5;
    v_769 = sub_19;
  } else {
    v_770 = sub_19;
    v_769 = sub_5;
  };
  if (contrato_push_janela) {
    sub_4 = v_769;
  } else {
    sub_4 = v_770;
  };
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  if (contrato_v_331) {
    sub_47 = false;
  } else {
    sub_47 = sub_10;
  };
  if (contrato_v_332) {
    sub_49 = false;
  } else {
    sub_49 = sub_10;
  };
  if (contrato_finish_oven) {
    v_757 = sub_14;
  } else {
    v_757 = false;
  };
  if (contrato_tok) {
    sub_52 = sub_13;
  } else {
    sub_52 = v_757;
  };
  sub_51 = sub_52;
  if (contrato_v_332) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_10;
  };
  if (contrato_v_331) {
    sub_48 = sub_50;
  } else {
    sub_48 = sub_49;
  };
  if (contrato_v_330) {
    sub_46 = sub_48;
  } else {
    sub_46 = sub_47;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (contrato_v_426) {
    v_758 = sub_8;
  } else {
    v_758 = sub_44;
  };
  if (contrato_rad_down1) {
    sub_43 = v_758;
  } else {
    sub_43 = sub_8;
  };
  if (contrato_v_427) {
    v_759 = sub_43;
  } else {
    v_759 = sub_6;
  };
  if (contrato_presenca) {
    sub_42 = v_759;
  } else {
    sub_42 = sub_17;
  };
  if (contrato_v_331) {
    sub_58 = false;
  } else {
    sub_58 = sub_23;
  };
  if (contrato_v_332) {
    sub_60 = false;
  } else {
    sub_60 = sub_23;
  };
  if (contrato_finish_oven) {
    v_754 = sub_27;
  } else {
    v_754 = false;
  };
  if (contrato_tok) {
    sub_63 = sub_26;
  } else {
    sub_63 = v_754;
  };
  sub_62 = sub_63;
  if (contrato_v_332) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_23;
  };
  if (contrato_v_331) {
    sub_59 = sub_61;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_v_330) {
    sub_57 = sub_59;
  } else {
    sub_57 = sub_58;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (contrato_v_426) {
    v_755 = sub_8;
  } else {
    v_755 = sub_55;
  };
  if (contrato_rad_down1) {
    sub_54 = v_755;
  } else {
    sub_54 = sub_8;
  };
  if (contrato_v_427) {
    v_756 = sub_54;
  } else {
    v_756 = sub_6;
  };
  if (contrato_presenca) {
    sub_53 = v_756;
  } else {
    sub_53 = sub_29;
  };
  if (contrato_ck_14_1) {
    v_761 = sub_42;
    v_760 = sub_53;
  } else {
    v_761 = sub_53;
    v_760 = sub_42;
  };
  if (contrato_push_janela) {
    sub_41 = v_760;
  } else {
    sub_41 = v_761;
  };
  sub_40 = sub_41;
  if (contrato_v_390) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_3;
  };
  if (contrato_end_wash) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_40;
  };
  if (contrato_v_391) {
    sub_37 = sub_2;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  if (contrato_v_331) {
    sub_72 = false;
  } else {
    sub_72 = sub_50;
  };
  if (contrato_v_330) {
    sub_71 = sub_48;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (contrato_v_426) {
    v_748 = sub_8;
  } else {
    v_748 = sub_69;
  };
  if (contrato_rad_down1) {
    sub_68 = v_748;
  } else {
    sub_68 = sub_8;
  };
  if (contrato_v_427) {
    v_749 = sub_68;
  } else {
    v_749 = sub_6;
  };
  if (contrato_presenca) {
    sub_67 = v_749;
  } else {
    sub_67 = sub_17;
  };
  if (contrato_v_331) {
    sub_78 = false;
  } else {
    sub_78 = sub_61;
  };
  if (contrato_v_330) {
    sub_77 = sub_59;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (contrato_v_426) {
    v = sub_8;
  } else {
    v = sub_75;
  };
  if (contrato_rad_down1) {
    sub_74 = v;
  } else {
    sub_74 = sub_8;
  };
  if (contrato_v_427) {
    v_747 = sub_74;
  } else {
    v_747 = sub_6;
  };
  if (contrato_presenca) {
    sub_73 = v_747;
  } else {
    sub_73 = sub_29;
  };
  if (contrato_ck_14_1) {
    v_751 = sub_67;
    v_750 = sub_73;
  } else {
    v_751 = sub_73;
    v_750 = sub_67;
  };
  if (contrato_push_janela) {
    sub_66 = v_750;
  } else {
    sub_66 = v_751;
  };
  sub_65 = sub_66;
  if (contrato_v_390) {
    v_753 = sub_40;
    v_752 = sub_65;
  } else {
    v_753 = sub_65;
    v_752 = sub_3;
  };
  if (contrato_end_wash) {
    sub_64 = v_752;
  } else {
    sub_64 = v_753;
  };
  if (contrato_v_391) {
    v_763 = sub_2;
    v_762 = sub_39;
  } else {
    v_763 = sub_64;
    v_762 = sub_64;
  };
  if (contrato_start_wash) {
    v_764 = v_762;
  } else {
    v_764 = v_763;
  };
  if (contrato_v_389) {
    sub_35 = v_764;
  } else {
    sub_35 = sub_36;
  };
  if (contrato_v_289) {
    sub_34 = sub_1;
  } else {
    sub_34 = sub_35;
  };
  if (contrato_comfort_input) {
    v_771 = sub_34;
    sub_33 = sub_1;
  } else {
    v_771 = sub_35;
    sub_33 = sub_34;
  };
  if (contrato_v_288) {
    v_772 = v_771;
  } else {
    v_772 = sub_33;
  };
  if (contrato_eco_input) {
    sub_0 = sub_1;
  } else {
    sub_0 = v_772;
  };
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
                                                   int contrato_v_427,
                                                   int contrato_v_426,
                                                   int contrato_pnr_8,
                                                   int contrato_ck_12_1,
                                                   int contrato_pnr_7,
                                                   int contrato_ck_14_1,
                                                   int contrato_pnr_6,
                                                   int contrato_ck_16_1,
                                                   int contrato_pnr_5,
                                                   int contrato_ck_18_1,
                                                   int contrato_pnr_4,
                                                   int contrato_ck_20_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_391,
                                                   int contrato_v_390,
                                                   int contrato_v_389,
                                                   int contrato_pnr_2,
                                                   int contrato_v_332,
                                                   int contrato_v_331,
                                                   int contrato_v_330,
                                                   int contrato_pnr_1,
                                                   int contrato_pnr,
                                                   int contrato_v_289,
                                                   int contrato_v_288,
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
                                                            contrato_v_427,
                                                            contrato_v_426,
                                                            contrato_pnr_8,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_20_1,
                                                            contrato_pnr_3,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_v_389,
                                                            contrato_pnr_2,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_v_330,
                                                            contrato_pnr_1,
                                                            contrato_pnr,
                                                            contrato_v_289,
                                                            contrato_v_288,
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
                                                            contrato_v_427,
                                                            contrato_v_426,
                                                            contrato_pnr_8,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_20_1,
                                                            contrato_pnr_3,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_v_389,
                                                            contrato_pnr_2,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_v_330,
                                                            contrato_pnr_1,
                                                            contrato_pnr,
                                                            contrato_v_289,
                                                            contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                            contrato_v_427,
                                                            contrato_v_426,
                                                            contrato_pnr_8,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_20_1,
                                                            contrato_pnr_3,
                                                            contrato_v_391,
                                                            contrato_v_390,
                                                            contrato_v_389,
                                                            contrato_pnr_2,
                                                            contrato_v_332,
                                                            contrato_v_331,
                                                            contrato_v_330,
                                                            contrato_pnr_1,
                                                            contrato_pnr,
                                                            contrato_v_289,
                                                            contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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
                                                             contrato_v_427,
                                                             contrato_v_426,
                                                             contrato_pnr_8,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_20_1,
                                                             contrato_pnr_3,
                                                             contrato_v_391,
                                                             contrato_v_390,
                                                             contrato_v_389,
                                                             contrato_pnr_2,
                                                             contrato_v_332,
                                                             contrato_v_331,
                                                             contrato_v_330,
                                                             contrato_pnr_1,
                                                             contrato_pnr,
                                                             contrato_v_289,
                                                             contrato_v_288,
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

