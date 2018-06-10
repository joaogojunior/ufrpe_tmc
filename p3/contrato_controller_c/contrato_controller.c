/* --- Generated the 10/6/2018 at 8:23 --- */
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  sub_25 = false;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (contrato_ck_16_1) {
    v_183 = false;
    v_182 = sub_21;
  } else {
    v_183 = sub_21;
    v_182 = false;
  };
  if (contrato_botao_tv) {
    sub_26 = v_182;
  } else {
    sub_26 = v_183;
  };
  if (contrato_ct1) {
    sub_19 = sub_20;
  } else {
    sub_19 = sub_26;
  };
  sub_27 = sub_20;
  if (contrato_ck_14_1) {
    v_185 = sub_19;
    sub_18 = sub_27;
  } else {
    v_185 = sub_27;
    sub_18 = sub_19;
  };
  if (contrato_botao_lamp) {
    v_186 = sub_18;
  } else {
    v_186 = v_185;
  };
  if (contrato_cl1) {
    v_187 = sub_27;
    v_184 = sub_18;
  } else {
    v_187 = v_186;
    v_184 = sub_19;
  };
  if (contrato_cl2) {
    sub_17 = v_184;
  } else {
    sub_17 = v_187;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  v_174 = !(contrato_comfort_input);
  sub_45 = (v_174&&false);
  if (contrato_v_291) {
    v_175 = sub_45;
    sub_44 = sub_25;
  } else {
    v_175 = false;
    sub_44 = sub_45;
  };
  if (contrato_v_290) {
    v_176 = v_175;
  } else {
    v_176 = sub_44;
  };
  if (contrato_eco_input) {
    sub_43 = sub_25;
  } else {
    sub_43 = v_176;
  };
  sub_42 = sub_43;
  if (contrato_cws) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_23;
  };
  if (contrato_v_387) {
    sub_40 = sub_22;
  } else {
    sub_40 = sub_41;
  };
  sub_46 = sub_42;
  if (contrato_v_388) {
    v_177 = sub_46;
  } else {
    v_177 = sub_40;
  };
  if (contrato_end_wash) {
    sub_39 = v_177;
  } else {
    sub_39 = sub_46;
  };
  if (contrato_start_wash) {
    sub_48 = sub_43;
  } else {
    sub_48 = sub_24;
  };
  if (contrato_v_387) {
    v_173 = sub_48;
  } else {
    v_173 = sub_41;
  };
  if (contrato_v_388) {
    sub_47 = v_173;
  } else {
    sub_47 = sub_22;
  };
  if (contrato_v_389) {
    sub_38 = sub_47;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (contrato_ck_16_1) {
    v_172 = false;
    v_171 = sub_38;
  } else {
    v_172 = sub_38;
    v_171 = false;
  };
  if (contrato_botao_tv) {
    sub_49 = v_171;
  } else {
    sub_49 = v_172;
  };
  if (contrato_ct1) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_49;
  };
  sub_50 = sub_37;
  if (contrato_ck_14_1) {
    v_179 = sub_36;
    sub_35 = sub_50;
  } else {
    v_179 = sub_50;
    sub_35 = sub_36;
  };
  if (contrato_botao_lamp) {
    v_180 = sub_35;
  } else {
    v_180 = v_179;
  };
  if (contrato_cl1) {
    v_181 = sub_50;
    v_178 = sub_35;
  } else {
    v_181 = v_180;
    v_178 = sub_36;
  };
  if (contrato_cl2) {
    sub_34 = v_178;
  } else {
    sub_34 = v_181;
  };
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (contrato_v_424) {
    sub_10 = sub_28;
  } else {
    sub_10 = sub_11;
  };
  if (contrato_rad_up2) {
    v_170 = false;
  } else {
    v_170 = sub_13;
  };
  if (contrato_rc2) {
    sub_53 = v_170;
  } else {
    sub_53 = sub_12;
  };
  if (contrato_v_424) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_11;
  };
  sub_51 = sub_52;
  if (contrato_rc1) {
    v_188 = sub_10;
  } else {
    v_188 = sub_51;
  };
  sub_54 = sub_51;
  if (contrato_rad_up1) {
    sub_9 = v_188;
  } else {
    sub_9 = sub_54;
  };
  if (contrato_rad_up2) {
    v_166 = false;
  } else {
    v_166 = sub_30;
  };
  if (contrato_rc2) {
    v_167 = v_166;
  } else {
    v_167 = sub_29;
  };
  if (contrato_v_424) {
    sub_56 = sub_11;
  } else {
    sub_56 = sub_28;
  };
  if (contrato_rad_down2) {
    sub_58 = sub_14;
  } else {
    sub_58 = false;
  };
  if (contrato_rc2) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_12;
  };
  if (contrato_v_424) {
    v_168 = v_167;
  } else {
    v_168 = sub_57;
  };
  if (contrato_rad_down1) {
    v_169 = sub_56;
  } else {
    v_169 = v_168;
  };
  if (contrato_rc1) {
    sub_55 = v_169;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_v_425) {
    sub_8 = sub_55;
  } else {
    sub_8 = sub_9;
  };
  if (contrato_v_424) {
    sub_61 = false;
  } else {
    sub_61 = sub_11;
  };
  if (contrato_rc1) {
    v_165 = sub_61;
  } else {
    v_165 = sub_51;
  };
  if (contrato_rad_up1) {
    sub_60 = v_165;
  } else {
    sub_60 = sub_54;
  };
  if (contrato_v_424) {
    v_163 = false;
    sub_63 = sub_11;
  } else {
    v_163 = sub_57;
    sub_63 = false;
  };
  if (contrato_rad_down1) {
    v_164 = sub_63;
  } else {
    v_164 = v_163;
  };
  if (contrato_rc1) {
    sub_62 = v_164;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_v_425) {
    sub_59 = sub_62;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_ck_12_1) {
    v_190 = sub_8;
    v_189 = sub_59;
  } else {
    v_190 = sub_59;
    v_189 = sub_8;
  };
  if (contrato_push_janela) {
    v_191 = v_189;
  } else {
    v_191 = v_190;
  };
  if (contrato_cj) {
    sub_7 = v_191;
  } else {
    sub_7 = sub_8;
  };
  sub_65 = sub_59;
  sub_64 = sub_65;
  if (contrato_ck_10_1) {
    v_193 = sub_7;
    v_192 = sub_64;
  } else {
    v_193 = sub_64;
    v_192 = sub_7;
  };
  if (contrato_push_porta) {
    v_194 = v_192;
  } else {
    v_194 = v_193;
  };
  if (contrato_cp) {
    sub_6 = v_194;
  } else {
    sub_6 = sub_7;
  };
  sub_70 = sub_11;
  if (contrato_rc1) {
    v_156 = sub_70;
  } else {
    v_156 = sub_51;
  };
  if (contrato_rad_up1) {
    sub_69 = v_156;
  } else {
    sub_69 = sub_54;
  };
  if (contrato_v_424) {
    v_154 = sub_53;
  } else {
    v_154 = sub_57;
  };
  if (contrato_rad_down1) {
    v_155 = sub_11;
  } else {
    v_155 = v_154;
  };
  if (contrato_rc1) {
    sub_71 = v_155;
  } else {
    sub_71 = sub_70;
  };
  if (contrato_v_425) {
    sub_68 = sub_71;
  } else {
    sub_68 = sub_69;
  };
  if (contrato_ck_12_1) {
    v_158 = sub_68;
    v_157 = sub_59;
  } else {
    v_158 = sub_59;
    v_157 = sub_68;
  };
  if (contrato_push_janela) {
    v_159 = v_157;
  } else {
    v_159 = v_158;
  };
  if (contrato_cj) {
    sub_67 = v_159;
  } else {
    sub_67 = sub_68;
  };
  if (contrato_ck_10_1) {
    v_161 = sub_67;
    v_160 = sub_64;
  } else {
    v_161 = sub_64;
    v_160 = sub_67;
  };
  if (contrato_push_porta) {
    v_162 = v_160;
  } else {
    v_162 = v_161;
  };
  if (contrato_cp) {
    sub_66 = v_162;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_co) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_66;
  };
  if (contrato_v_387) {
    sub_87 = sub_46;
  } else {
    sub_87 = sub_22;
  };
  if (contrato_v_388) {
    v_141 = sub_22;
    v_140 = sub_87;
  } else {
    v_141 = sub_87;
    v_140 = sub_22;
  };
  if (contrato_end_wash) {
    sub_86 = v_140;
  } else {
    sub_86 = v_141;
  };
  if (contrato_v_389) {
    sub_85 = sub_21;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (contrato_ck_16_1) {
    v_139 = false;
    v_138 = sub_85;
  } else {
    v_139 = sub_85;
    v_138 = false;
  };
  if (contrato_botao_tv) {
    sub_88 = v_138;
  } else {
    sub_88 = v_139;
  };
  if (contrato_ct1) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_88;
  };
  sub_89 = sub_84;
  if (contrato_ck_14_1) {
    v_143 = sub_83;
    sub_82 = sub_89;
  } else {
    v_143 = sub_89;
    sub_82 = sub_83;
  };
  if (contrato_botao_lamp) {
    v_144 = sub_82;
  } else {
    v_144 = v_143;
  };
  if (contrato_cl1) {
    v_145 = sub_89;
    v_142 = sub_82;
  } else {
    v_145 = v_144;
    v_142 = sub_83;
  };
  if (contrato_cl2) {
    sub_81 = v_142;
  } else {
    sub_81 = v_145;
  };
  if (contrato_finish_oven) {
    v_146 = sub_16;
  } else {
    v_146 = sub_81;
  };
  if (contrato_tok) {
    sub_80 = sub_15;
  } else {
    sub_80 = v_146;
  };
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (contrato_v_424) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_11;
  };
  if (contrato_rc1) {
    v_147 = sub_76;
  } else {
    v_147 = sub_51;
  };
  if (contrato_rad_up1) {
    sub_75 = v_147;
  } else {
    sub_75 = sub_54;
  };
  if (contrato_rad_up2) {
    v_134 = false;
  } else {
    v_134 = sub_79;
  };
  if (contrato_rc2) {
    v_135 = v_134;
  } else {
    v_135 = sub_78;
  };
  if (contrato_v_424) {
    v_136 = v_135;
    sub_91 = sub_11;
  } else {
    v_136 = sub_57;
    sub_91 = sub_77;
  };
  if (contrato_rad_down1) {
    v_137 = sub_91;
  } else {
    v_137 = v_136;
  };
  if (contrato_rc1) {
    sub_90 = v_137;
  } else {
    sub_90 = sub_91;
  };
  if (contrato_v_425) {
    sub_74 = sub_90;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_ck_12_1) {
    v_149 = sub_74;
    v_148 = sub_59;
  } else {
    v_149 = sub_59;
    v_148 = sub_74;
  };
  if (contrato_push_janela) {
    v_150 = v_148;
  } else {
    v_150 = v_149;
  };
  if (contrato_cj) {
    sub_73 = v_150;
  } else {
    sub_73 = sub_74;
  };
  if (contrato_ck_10_1) {
    v_152 = sub_73;
    v_151 = sub_64;
  } else {
    v_152 = sub_64;
    v_151 = sub_73;
  };
  if (contrato_push_porta) {
    v_153 = v_151;
  } else {
    v_153 = v_152;
  };
  if (contrato_cp) {
    sub_72 = v_153;
  } else {
    sub_72 = sub_73;
  };
  if (contrato_v_330) {
    sub_4 = sub_72;
  } else {
    sub_4 = sub_5;
  };
  sub_92 = sub_6;
  if (contrato_v_329) {
    sub_3 = sub_92;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (contrato_v_330) {
    sub_93 = sub_92;
  } else {
    sub_93 = sub_5;
  };
  if (contrato_cold) {
    sub_105 = sub_81;
  } else {
    sub_105 = sub_17;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (contrato_v_424) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_11;
  };
  if (contrato_rc1) {
    v_126 = sub_99;
  } else {
    v_126 = sub_51;
  };
  if (contrato_rad_up1) {
    sub_98 = v_126;
  } else {
    sub_98 = sub_54;
  };
  if (contrato_rad_up2) {
    v_122 = false;
  } else {
    v_122 = sub_102;
  };
  if (contrato_rc2) {
    v_123 = v_122;
  } else {
    v_123 = sub_101;
  };
  if (contrato_v_424) {
    v_124 = v_123;
    sub_107 = sub_11;
  } else {
    v_124 = sub_57;
    sub_107 = sub_100;
  };
  if (contrato_rad_down1) {
    v_125 = sub_107;
  } else {
    v_125 = v_124;
  };
  if (contrato_rc1) {
    sub_106 = v_125;
  } else {
    sub_106 = sub_107;
  };
  if (contrato_v_425) {
    sub_97 = sub_106;
  } else {
    sub_97 = sub_98;
  };
  if (contrato_ck_12_1) {
    v_128 = sub_97;
    v_127 = sub_59;
  } else {
    v_128 = sub_59;
    v_127 = sub_97;
  };
  if (contrato_push_janela) {
    v_129 = v_127;
  } else {
    v_129 = v_128;
  };
  if (contrato_cj) {
    sub_96 = v_129;
  } else {
    sub_96 = sub_97;
  };
  if (contrato_ck_10_1) {
    v_131 = sub_96;
    v_130 = sub_64;
  } else {
    v_131 = sub_64;
    v_130 = sub_96;
  };
  if (contrato_push_porta) {
    v_132 = v_130;
  } else {
    v_132 = v_131;
  };
  if (contrato_cp) {
    v_133 = v_132;
  } else {
    v_133 = sub_96;
  };
  if (contrato_co) {
    sub_95 = v_133;
  } else {
    sub_95 = sub_66;
  };
  if (contrato_finish_oven) {
    v_114 = sub_16;
  } else {
    v_114 = sub_33;
  };
  if (contrato_tok) {
    sub_116 = sub_15;
  } else {
    sub_116 = v_114;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (contrato_v_424) {
    sub_112 = sub_113;
  } else {
    sub_112 = sub_11;
  };
  if (contrato_rc1) {
    v_115 = sub_112;
  } else {
    v_115 = sub_51;
  };
  if (contrato_rad_up1) {
    sub_111 = v_115;
  } else {
    sub_111 = sub_54;
  };
  if (contrato_rad_up2) {
    v_110 = false;
  } else {
    v_110 = sub_115;
  };
  if (contrato_rc2) {
    v_111 = v_110;
  } else {
    v_111 = sub_114;
  };
  if (contrato_v_424) {
    v_112 = v_111;
    sub_118 = sub_11;
  } else {
    v_112 = sub_57;
    sub_118 = sub_113;
  };
  if (contrato_rad_down1) {
    v_113 = sub_118;
  } else {
    v_113 = v_112;
  };
  if (contrato_rc1) {
    sub_117 = v_113;
  } else {
    sub_117 = sub_118;
  };
  if (contrato_v_425) {
    sub_110 = sub_117;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_ck_12_1) {
    v_117 = sub_110;
    v_116 = sub_59;
  } else {
    v_117 = sub_59;
    v_116 = sub_110;
  };
  if (contrato_push_janela) {
    v_118 = v_116;
  } else {
    v_118 = v_117;
  };
  if (contrato_cj) {
    sub_109 = v_118;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_ck_10_1) {
    v_120 = sub_109;
    v_119 = sub_64;
  } else {
    v_120 = sub_64;
    v_119 = sub_109;
  };
  if (contrato_push_porta) {
    v_121 = v_119;
  } else {
    v_121 = v_120;
  };
  if (contrato_cp) {
    sub_108 = v_121;
  } else {
    sub_108 = sub_109;
  };
  if (contrato_v_330) {
    sub_94 = sub_108;
  } else {
    sub_94 = sub_95;
  };
  if (contrato_v_329) {
    v_195 = sub_94;
  } else {
    v_195 = sub_93;
  };
  sub_120 = sub_66;
  if (contrato_v_330) {
    sub_119 = sub_92;
  } else {
    sub_119 = sub_120;
  };
  if (contrato_v_329) {
    v_196 = sub_94;
  } else {
    v_196 = sub_119;
  };
  if (contrato_start_oven) {
    v_197 = v_195;
  } else {
    v_197 = v_196;
  };
  if (contrato_v_328) {
    v_198 = v_197;
  } else {
    v_198 = sub_2;
  };
  sub_142 = true;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (contrato_ck_16_1) {
    v_97 = sub_21;
    sub_137 = false;
  } else {
    v_97 = sub_138;
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (contrato_ck_16_1) {
    sub_143 = sub_138;
  } else {
    sub_143 = sub_21;
  };
  if (contrato_botao_tv) {
    v_98 = sub_143;
  } else {
    v_98 = v_97;
  };
  if (contrato_ct1) {
    sub_135 = sub_136;
  } else {
    sub_135 = v_98;
  };
  if (contrato_ck_14_1) {
    v_100 = sub_135;
    sub_134 = false;
  } else {
    v_100 = false;
    sub_134 = sub_135;
  };
  if (contrato_botao_lamp) {
    v_101 = sub_134;
  } else {
    v_101 = v_100;
  };
  if (contrato_cl1) {
    v_102 = false;
    v_99 = sub_134;
  } else {
    v_102 = v_101;
    v_99 = sub_135;
  };
  if (contrato_cl2) {
    sub_133 = v_99;
  } else {
    sub_133 = v_102;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  if (contrato_v_424) {
    sub_126 = false;
  } else {
    sub_126 = sub_127;
  };
  if (contrato_rad_up2) {
    v_95 = false;
  } else {
    v_95 = sub_129;
  };
  if (contrato_rc2) {
    v_96 = v_95;
  } else {
    v_96 = sub_128;
  };
  if (contrato_v_424) {
    sub_145 = v_96;
  } else {
    sub_145 = sub_127;
  };
  sub_144 = sub_145;
  if (contrato_rc1) {
    v_103 = sub_126;
  } else {
    v_103 = sub_144;
  };
  if (contrato_rad_up1) {
    sub_125 = v_103;
  } else {
    sub_125 = sub_144;
  };
  if (contrato_v_424) {
    sub_147 = sub_127;
  } else {
    sub_147 = false;
  };
  if (contrato_rad_down2) {
    sub_149 = sub_130;
  } else {
    sub_149 = false;
  };
  if (contrato_rc2) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_128;
  };
  if (contrato_v_424) {
    v_93 = false;
  } else {
    v_93 = sub_148;
  };
  if (contrato_rad_down1) {
    v_94 = sub_147;
  } else {
    v_94 = v_93;
  };
  if (contrato_rc1) {
    sub_146 = v_94;
  } else {
    sub_146 = sub_147;
  };
  if (contrato_v_425) {
    sub_124 = sub_146;
  } else {
    sub_124 = sub_125;
  };
  if (contrato_ck_12_1) {
    v_105 = sub_124;
    v_104 = false;
  } else {
    v_105 = false;
    v_104 = sub_124;
  };
  if (contrato_push_janela) {
    v_106 = v_104;
  } else {
    v_106 = v_105;
  };
  if (contrato_cj) {
    sub_123 = v_106;
  } else {
    sub_123 = sub_124;
  };
  if (contrato_ck_10_1) {
    v_108 = sub_123;
    v_107 = false;
  } else {
    v_108 = false;
    v_107 = sub_123;
  };
  if (contrato_push_porta) {
    v_109 = v_107;
  } else {
    v_109 = v_108;
  };
  if (contrato_cp) {
    sub_122 = v_109;
  } else {
    sub_122 = sub_123;
  };
  sub_121 = sub_122;
  if (contrato_presenca) {
    sub_1 = v_198;
  } else {
    sub_1 = sub_121;
  };
  if (contrato_ct1) {
    sub_167 = sub_143;
  } else {
    sub_167 = sub_26;
  };
  sub_169 = sub_138;
  sub_168 = sub_169;
  if (contrato_ck_14_1) {
    v_83 = sub_167;
    sub_166 = sub_168;
  } else {
    v_83 = sub_168;
    sub_166 = sub_167;
  };
  if (contrato_botao_lamp) {
    v_84 = sub_166;
  } else {
    v_84 = v_83;
  };
  if (contrato_cl1) {
    v_85 = sub_168;
    v_82 = sub_166;
  } else {
    v_85 = v_84;
    v_82 = sub_167;
  };
  if (contrato_cl2) {
    sub_165 = v_82;
  } else {
    sub_165 = v_85;
  };
  sub_164 = sub_165;
  sub_163 = sub_164;
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_187 = (contrato_comfort_input||false);
  if (contrato_v_291) {
    v_75 = sub_187;
    sub_186 = sub_142;
  } else {
    v_75 = false;
    sub_186 = sub_187;
  };
  if (contrato_v_290) {
    v_76 = v_75;
  } else {
    v_76 = sub_186;
  };
  if (contrato_eco_input) {
    sub_185 = sub_142;
  } else {
    sub_185 = v_76;
  };
  sub_184 = sub_185;
  if (contrato_cws) {
    sub_183 = sub_184;
  } else {
    sub_183 = sub_140;
  };
  if (contrato_v_387) {
    sub_182 = sub_139;
  } else {
    sub_182 = sub_183;
  };
  sub_188 = sub_184;
  if (contrato_v_388) {
    v_77 = sub_188;
  } else {
    v_77 = sub_182;
  };
  if (contrato_end_wash) {
    sub_181 = v_77;
  } else {
    sub_181 = sub_188;
  };
  if (contrato_start_wash) {
    sub_190 = sub_185;
  } else {
    sub_190 = sub_141;
  };
  if (contrato_v_387) {
    v_74 = sub_190;
  } else {
    v_74 = sub_183;
  };
  if (contrato_v_388) {
    sub_189 = v_74;
  } else {
    sub_189 = sub_139;
  };
  if (contrato_v_389) {
    sub_180 = sub_189;
  } else {
    sub_180 = sub_181;
  };
  if (contrato_ck_16_1) {
    sub_179 = sub_180;
  } else {
    sub_179 = sub_38;
  };
  if (contrato_ct1) {
    sub_178 = sub_179;
  } else {
    sub_178 = sub_49;
  };
  sub_192 = sub_180;
  sub_191 = sub_192;
  if (contrato_ck_14_1) {
    v_79 = sub_178;
    sub_177 = sub_191;
  } else {
    v_79 = sub_191;
    sub_177 = sub_178;
  };
  if (contrato_botao_lamp) {
    v_80 = sub_177;
  } else {
    v_80 = v_79;
  };
  if (contrato_cl1) {
    v_81 = sub_191;
    v_78 = sub_177;
  } else {
    v_81 = v_80;
    v_78 = sub_178;
  };
  if (contrato_cl2) {
    sub_176 = v_78;
  } else {
    sub_176 = v_81;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  if (contrato_v_424) {
    sub_158 = sub_170;
  } else {
    sub_158 = sub_159;
  };
  if (contrato_rad_up2) {
    v_73 = false;
  } else {
    v_73 = sub_161;
  };
  if (contrato_rc2) {
    sub_195 = v_73;
  } else {
    sub_195 = sub_160;
  };
  if (contrato_v_424) {
    sub_194 = sub_195;
  } else {
    sub_194 = sub_159;
  };
  sub_193 = sub_194;
  if (contrato_rc1) {
    v_86 = sub_158;
  } else {
    v_86 = sub_193;
  };
  sub_196 = sub_193;
  if (contrato_rad_up1) {
    sub_157 = v_86;
  } else {
    sub_157 = sub_196;
  };
  if (contrato_rad_up2) {
    v_69 = false;
  } else {
    v_69 = sub_172;
  };
  if (contrato_rc2) {
    v_70 = v_69;
  } else {
    v_70 = sub_171;
  };
  if (contrato_v_424) {
    sub_198 = sub_159;
  } else {
    sub_198 = sub_170;
  };
  if (contrato_rad_down2) {
    sub_200 = sub_162;
  } else {
    sub_200 = false;
  };
  if (contrato_rc2) {
    sub_199 = sub_200;
  } else {
    sub_199 = sub_160;
  };
  if (contrato_v_424) {
    v_71 = v_70;
  } else {
    v_71 = sub_199;
  };
  if (contrato_rad_down1) {
    v_72 = sub_198;
  } else {
    v_72 = v_71;
  };
  if (contrato_rc1) {
    sub_197 = v_72;
  } else {
    sub_197 = sub_198;
  };
  if (contrato_v_425) {
    sub_156 = sub_197;
  } else {
    sub_156 = sub_157;
  };
  if (contrato_v_424) {
    sub_203 = false;
  } else {
    sub_203 = sub_159;
  };
  if (contrato_rc1) {
    v_68 = sub_203;
  } else {
    v_68 = sub_193;
  };
  if (contrato_rad_up1) {
    sub_202 = v_68;
  } else {
    sub_202 = sub_196;
  };
  if (contrato_v_424) {
    v_66 = false;
    sub_205 = sub_159;
  } else {
    v_66 = sub_199;
    sub_205 = false;
  };
  if (contrato_rad_down1) {
    v_67 = sub_205;
  } else {
    v_67 = v_66;
  };
  if (contrato_rc1) {
    sub_204 = v_67;
  } else {
    sub_204 = sub_205;
  };
  if (contrato_v_425) {
    sub_201 = sub_204;
  } else {
    sub_201 = sub_202;
  };
  if (contrato_ck_12_1) {
    v_88 = sub_156;
    v_87 = sub_201;
  } else {
    v_88 = sub_201;
    v_87 = sub_156;
  };
  if (contrato_push_janela) {
    v_89 = v_87;
  } else {
    v_89 = v_88;
  };
  if (contrato_cj) {
    sub_155 = v_89;
  } else {
    sub_155 = sub_156;
  };
  sub_207 = sub_201;
  sub_206 = sub_207;
  if (contrato_ck_10_1) {
    v_91 = sub_155;
    v_90 = sub_206;
  } else {
    v_91 = sub_206;
    v_90 = sub_155;
  };
  if (contrato_push_porta) {
    v_92 = v_90;
  } else {
    v_92 = v_91;
  };
  if (contrato_cp) {
    sub_154 = v_92;
  } else {
    sub_154 = sub_155;
  };
  sub_212 = sub_159;
  if (contrato_rc1) {
    v_59 = sub_212;
  } else {
    v_59 = sub_193;
  };
  if (contrato_rad_up1) {
    sub_211 = v_59;
  } else {
    sub_211 = sub_196;
  };
  if (contrato_v_424) {
    v_57 = sub_195;
  } else {
    v_57 = sub_199;
  };
  if (contrato_rad_down1) {
    v_58 = sub_159;
  } else {
    v_58 = v_57;
  };
  if (contrato_rc1) {
    sub_213 = v_58;
  } else {
    sub_213 = sub_212;
  };
  if (contrato_v_425) {
    sub_210 = sub_213;
  } else {
    sub_210 = sub_211;
  };
  if (contrato_ck_12_1) {
    v_61 = sub_210;
    v_60 = sub_201;
  } else {
    v_61 = sub_201;
    v_60 = sub_210;
  };
  if (contrato_push_janela) {
    v_62 = v_60;
  } else {
    v_62 = v_61;
  };
  if (contrato_cj) {
    sub_209 = v_62;
  } else {
    sub_209 = sub_210;
  };
  if (contrato_ck_10_1) {
    v_64 = sub_209;
    v_63 = sub_206;
  } else {
    v_64 = sub_206;
    v_63 = sub_209;
  };
  if (contrato_push_porta) {
    v_65 = v_63;
  } else {
    v_65 = v_64;
  };
  if (contrato_cp) {
    sub_208 = v_65;
  } else {
    sub_208 = sub_209;
  };
  if (contrato_co) {
    sub_153 = sub_154;
  } else {
    sub_153 = sub_208;
  };
  if (contrato_v_387) {
    sub_229 = sub_188;
  } else {
    sub_229 = sub_139;
  };
  if (contrato_v_388) {
    v_44 = sub_139;
    v_43 = sub_229;
  } else {
    v_44 = sub_229;
    v_43 = sub_139;
  };
  if (contrato_end_wash) {
    sub_228 = v_43;
  } else {
    sub_228 = v_44;
  };
  if (contrato_v_389) {
    sub_227 = sub_138;
  } else {
    sub_227 = sub_228;
  };
  if (contrato_ck_16_1) {
    sub_226 = sub_227;
  } else {
    sub_226 = sub_85;
  };
  if (contrato_ct1) {
    sub_225 = sub_226;
  } else {
    sub_225 = sub_88;
  };
  sub_231 = sub_227;
  sub_230 = sub_231;
  if (contrato_ck_14_1) {
    v_46 = sub_225;
    sub_224 = sub_230;
  } else {
    v_46 = sub_230;
    sub_224 = sub_225;
  };
  if (contrato_botao_lamp) {
    v_47 = sub_224;
  } else {
    v_47 = v_46;
  };
  if (contrato_cl1) {
    v_48 = sub_230;
    v_45 = sub_224;
  } else {
    v_48 = v_47;
    v_45 = sub_225;
  };
  if (contrato_cl2) {
    sub_223 = v_45;
  } else {
    sub_223 = v_48;
  };
  if (contrato_finish_oven) {
    v_49 = sub_164;
  } else {
    v_49 = sub_223;
  };
  if (contrato_tok) {
    sub_222 = sub_163;
  } else {
    sub_222 = v_49;
  };
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  if (contrato_v_424) {
    sub_218 = sub_219;
  } else {
    sub_218 = sub_159;
  };
  if (contrato_rc1) {
    v_50 = sub_218;
  } else {
    v_50 = sub_193;
  };
  if (contrato_rad_up1) {
    sub_217 = v_50;
  } else {
    sub_217 = sub_196;
  };
  if (contrato_rad_up2) {
    v_39 = false;
  } else {
    v_39 = sub_221;
  };
  if (contrato_rc2) {
    v_40 = v_39;
  } else {
    v_40 = sub_220;
  };
  if (contrato_v_424) {
    v_41 = v_40;
    sub_233 = sub_159;
  } else {
    v_41 = sub_199;
    sub_233 = sub_219;
  };
  if (contrato_rad_down1) {
    v_42 = sub_233;
  } else {
    v_42 = v_41;
  };
  if (contrato_rc1) {
    sub_232 = v_42;
  } else {
    sub_232 = sub_233;
  };
  if (contrato_v_425) {
    sub_216 = sub_232;
  } else {
    sub_216 = sub_217;
  };
  if (contrato_ck_12_1) {
    v_52 = sub_216;
    v_51 = sub_201;
  } else {
    v_52 = sub_201;
    v_51 = sub_216;
  };
  if (contrato_push_janela) {
    v_53 = v_51;
  } else {
    v_53 = v_52;
  };
  if (contrato_cj) {
    sub_215 = v_53;
  } else {
    sub_215 = sub_216;
  };
  if (contrato_ck_10_1) {
    v_55 = sub_215;
    v_54 = sub_206;
  } else {
    v_55 = sub_206;
    v_54 = sub_215;
  };
  if (contrato_push_porta) {
    v_56 = v_54;
  } else {
    v_56 = v_55;
  };
  if (contrato_cp) {
    sub_214 = v_56;
  } else {
    sub_214 = sub_215;
  };
  if (contrato_v_330) {
    sub_152 = sub_214;
  } else {
    sub_152 = sub_153;
  };
  sub_234 = sub_154;
  if (contrato_v_329) {
    sub_151 = sub_234;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  if (contrato_v_330) {
    sub_235 = sub_234;
  } else {
    sub_235 = sub_153;
  };
  if (contrato_cold) {
    sub_247 = sub_223;
  } else {
    sub_247 = sub_165;
  };
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  if (contrato_v_424) {
    sub_241 = sub_242;
  } else {
    sub_241 = sub_159;
  };
  if (contrato_rc1) {
    v_31 = sub_241;
  } else {
    v_31 = sub_193;
  };
  if (contrato_rad_up1) {
    sub_240 = v_31;
  } else {
    sub_240 = sub_196;
  };
  if (contrato_rad_up2) {
    v_27 = false;
  } else {
    v_27 = sub_244;
  };
  if (contrato_rc2) {
    v_28 = v_27;
  } else {
    v_28 = sub_243;
  };
  if (contrato_v_424) {
    v_29 = v_28;
    sub_249 = sub_159;
  } else {
    v_29 = sub_199;
    sub_249 = sub_242;
  };
  if (contrato_rad_down1) {
    v_30 = sub_249;
  } else {
    v_30 = v_29;
  };
  if (contrato_rc1) {
    sub_248 = v_30;
  } else {
    sub_248 = sub_249;
  };
  if (contrato_v_425) {
    sub_239 = sub_248;
  } else {
    sub_239 = sub_240;
  };
  if (contrato_ck_12_1) {
    v_33 = sub_239;
    v_32 = sub_201;
  } else {
    v_33 = sub_201;
    v_32 = sub_239;
  };
  if (contrato_push_janela) {
    v_34 = v_32;
  } else {
    v_34 = v_33;
  };
  if (contrato_cj) {
    sub_238 = v_34;
  } else {
    sub_238 = sub_239;
  };
  if (contrato_ck_10_1) {
    v_36 = sub_238;
    v_35 = sub_206;
  } else {
    v_36 = sub_206;
    v_35 = sub_238;
  };
  if (contrato_push_porta) {
    v_37 = v_35;
  } else {
    v_37 = v_36;
  };
  if (contrato_cp) {
    v_38 = v_37;
  } else {
    v_38 = sub_238;
  };
  if (contrato_co) {
    sub_237 = v_38;
  } else {
    sub_237 = sub_208;
  };
  if (contrato_finish_oven) {
    v_19 = sub_164;
  } else {
    v_19 = sub_175;
  };
  if (contrato_tok) {
    sub_258 = sub_163;
  } else {
    sub_258 = v_19;
  };
  sub_257 = sub_258;
  sub_256 = sub_257;
  sub_255 = sub_256;
  if (contrato_v_424) {
    sub_254 = sub_255;
  } else {
    sub_254 = sub_159;
  };
  if (contrato_rc1) {
    v_20 = sub_254;
  } else {
    v_20 = sub_193;
  };
  if (contrato_rad_up1) {
    sub_253 = v_20;
  } else {
    sub_253 = sub_196;
  };
  if (contrato_rad_up2) {
    v_15 = false;
  } else {
    v_15 = sub_257;
  };
  if (contrato_rc2) {
    v_16 = v_15;
  } else {
    v_16 = sub_256;
  };
  if (contrato_v_424) {
    v_17 = v_16;
    sub_260 = sub_159;
  } else {
    v_17 = sub_199;
    sub_260 = sub_255;
  };
  if (contrato_rad_down1) {
    v_18 = sub_260;
  } else {
    v_18 = v_17;
  };
  if (contrato_rc1) {
    sub_259 = v_18;
  } else {
    sub_259 = sub_260;
  };
  if (contrato_v_425) {
    sub_252 = sub_259;
  } else {
    sub_252 = sub_253;
  };
  if (contrato_ck_12_1) {
    v_22 = sub_252;
    v_21 = sub_201;
  } else {
    v_22 = sub_201;
    v_21 = sub_252;
  };
  if (contrato_push_janela) {
    v_23 = v_21;
  } else {
    v_23 = v_22;
  };
  if (contrato_cj) {
    sub_251 = v_23;
  } else {
    sub_251 = sub_252;
  };
  if (contrato_ck_10_1) {
    v_25 = sub_251;
    v_24 = sub_206;
  } else {
    v_25 = sub_206;
    v_24 = sub_251;
  };
  if (contrato_push_porta) {
    v_26 = v_24;
  } else {
    v_26 = v_25;
  };
  if (contrato_cp) {
    sub_250 = v_26;
  } else {
    sub_250 = sub_251;
  };
  if (contrato_v_330) {
    sub_236 = sub_250;
  } else {
    sub_236 = sub_237;
  };
  if (contrato_v_329) {
    v_199 = sub_236;
  } else {
    v_199 = sub_235;
  };
  sub_262 = sub_208;
  if (contrato_v_330) {
    sub_261 = sub_234;
  } else {
    sub_261 = sub_262;
  };
  if (contrato_v_329) {
    v_200 = sub_236;
  } else {
    v_200 = sub_261;
  };
  if (contrato_start_oven) {
    v_201 = v_199;
  } else {
    v_201 = v_200;
  };
  if (contrato_v_328) {
    v_202 = v_201;
  } else {
    v_202 = sub_150;
  };
  if (contrato_ct1) {
    sub_277 = sub_136;
  } else {
    sub_277 = sub_169;
  };
  if (contrato_ck_14_1) {
    v_5 = sub_277;
    sub_276 = false;
  } else {
    v_5 = false;
    sub_276 = sub_277;
  };
  if (contrato_botao_lamp) {
    v_6 = sub_276;
  } else {
    v_6 = v_5;
  };
  if (contrato_cl1) {
    v_7 = false;
    v_4 = sub_276;
  } else {
    v_7 = v_6;
    v_4 = sub_277;
  };
  if (contrato_cl2) {
    sub_275 = v_4;
  } else {
    sub_275 = v_7;
  };
  sub_274 = sub_275;
  sub_273 = sub_274;
  sub_272 = sub_273;
  sub_271 = sub_272;
  sub_270 = sub_271;
  sub_269 = sub_270;
  if (contrato_v_424) {
    sub_268 = false;
  } else {
    sub_268 = sub_269;
  };
  if (contrato_rad_up2) {
    v_2 = false;
  } else {
    v_2 = sub_271;
  };
  if (contrato_rc2) {
    v_3 = v_2;
  } else {
    v_3 = sub_270;
  };
  if (contrato_v_424) {
    sub_279 = v_3;
  } else {
    sub_279 = sub_269;
  };
  sub_278 = sub_279;
  if (contrato_rc1) {
    v_8 = sub_268;
  } else {
    v_8 = sub_278;
  };
  if (contrato_rad_up1) {
    sub_267 = v_8;
  } else {
    sub_267 = sub_278;
  };
  if (contrato_v_424) {
    sub_281 = sub_269;
  } else {
    sub_281 = false;
  };
  if (contrato_rad_down2) {
    sub_283 = sub_272;
  } else {
    sub_283 = false;
  };
  if (contrato_rc2) {
    sub_282 = sub_283;
  } else {
    sub_282 = sub_270;
  };
  if (contrato_v_424) {
    v = false;
  } else {
    v = sub_282;
  };
  if (contrato_rad_down1) {
    v_1 = sub_281;
  } else {
    v_1 = v;
  };
  if (contrato_rc1) {
    sub_280 = v_1;
  } else {
    sub_280 = sub_281;
  };
  if (contrato_v_425) {
    sub_266 = sub_280;
  } else {
    sub_266 = sub_267;
  };
  if (contrato_ck_12_1) {
    v_10 = sub_266;
    v_9 = false;
  } else {
    v_10 = false;
    v_9 = sub_266;
  };
  if (contrato_push_janela) {
    v_11 = v_9;
  } else {
    v_11 = v_10;
  };
  if (contrato_cj) {
    sub_265 = v_11;
  } else {
    sub_265 = sub_266;
  };
  if (contrato_ck_10_1) {
    v_13 = sub_265;
    v_12 = false;
  } else {
    v_13 = false;
    v_12 = sub_265;
  };
  if (contrato_push_porta) {
    v_14 = v_12;
  } else {
    v_14 = v_13;
  };
  if (contrato_cp) {
    sub_264 = v_14;
  } else {
    sub_264 = sub_265;
  };
  sub_263 = sub_264;
  if (contrato_presenca) {
    v_203 = v_202;
  } else {
    v_203 = sub_263;
  };
  if (p_contrato_ct2) {
    sub_0 = v_203;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  sub_25 = true;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_30 = false;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (contrato_ck_16_1) {
    v_371 = sub_21;
    sub_20 = sub_26;
  } else {
    v_371 = sub_26;
    sub_20 = sub_21;
  };
  if (contrato_botao_tv) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_371;
  };
  sub_31 = sub_26;
  if (contrato_ck_14_1) {
    v_373 = sub_19;
    sub_18 = sub_31;
  } else {
    v_373 = sub_31;
    sub_18 = sub_19;
  };
  if (contrato_botao_lamp) {
    v_374 = sub_18;
  } else {
    v_374 = v_373;
  };
  if (contrato_cl1) {
    v_372 = sub_18;
  } else {
    v_372 = sub_19;
  };
  sub_32 = sub_31;
  if (contrato_cl1) {
    v_375 = sub_32;
  } else {
    v_375 = v_374;
  };
  if (contrato_cl2) {
    sub_17 = v_372;
  } else {
    sub_17 = v_375;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_49 = (contrato_comfort_input||false);
  if (contrato_v_291) {
    v_362 = sub_49;
    sub_48 = sub_25;
  } else {
    v_362 = false;
    sub_48 = sub_49;
  };
  if (contrato_v_290) {
    v_363 = v_362;
  } else {
    v_363 = sub_48;
  };
  if (contrato_eco_input) {
    sub_47 = sub_25;
  } else {
    sub_47 = v_363;
  };
  sub_46 = sub_47;
  if (contrato_cws) {
    sub_45 = sub_46;
  } else {
    sub_45 = sub_23;
  };
  if (contrato_v_387) {
    sub_44 = sub_22;
  } else {
    sub_44 = sub_45;
  };
  sub_50 = sub_46;
  if (contrato_v_388) {
    v_364 = sub_50;
  } else {
    v_364 = sub_44;
  };
  if (contrato_end_wash) {
    sub_43 = v_364;
  } else {
    sub_43 = sub_50;
  };
  if (contrato_start_wash) {
    sub_52 = sub_47;
  } else {
    sub_52 = sub_24;
  };
  if (contrato_v_387) {
    v_361 = sub_52;
  } else {
    v_361 = sub_45;
  };
  if (contrato_v_388) {
    sub_51 = v_361;
  } else {
    sub_51 = sub_22;
  };
  if (contrato_v_389) {
    sub_42 = sub_51;
  } else {
    sub_42 = sub_43;
  };
  v_357 = !(contrato_comfort_input);
  sub_60 = (v_357&&false);
  if (contrato_v_291) {
    v_358 = sub_60;
    sub_59 = sub_30;
  } else {
    v_358 = false;
    sub_59 = sub_60;
  };
  if (contrato_v_290) {
    v_359 = v_358;
  } else {
    v_359 = sub_59;
  };
  if (contrato_eco_input) {
    sub_58 = sub_30;
  } else {
    sub_58 = v_359;
  };
  sub_57 = sub_58;
  if (contrato_cws) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_28;
  };
  if (contrato_v_387) {
    sub_55 = sub_27;
  } else {
    sub_55 = sub_56;
  };
  sub_61 = sub_57;
  if (contrato_v_388) {
    v_360 = sub_61;
  } else {
    v_360 = sub_55;
  };
  if (contrato_end_wash) {
    sub_54 = v_360;
  } else {
    sub_54 = sub_61;
  };
  if (contrato_start_wash) {
    sub_63 = sub_58;
  } else {
    sub_63 = sub_29;
  };
  if (contrato_v_387) {
    v_356 = sub_63;
  } else {
    v_356 = sub_56;
  };
  if (contrato_v_388) {
    sub_62 = v_356;
  } else {
    sub_62 = sub_27;
  };
  if (contrato_v_389) {
    sub_53 = sub_62;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_ck_16_1) {
    v_366 = sub_42;
    v_365 = sub_53;
  } else {
    v_366 = sub_53;
    v_365 = sub_42;
  };
  if (contrato_botao_tv) {
    sub_41 = v_365;
  } else {
    sub_41 = v_366;
  };
  sub_64 = sub_53;
  if (contrato_ck_14_1) {
    v_368 = sub_41;
    sub_40 = sub_64;
  } else {
    v_368 = sub_64;
    sub_40 = sub_41;
  };
  if (contrato_botao_lamp) {
    v_369 = sub_40;
  } else {
    v_369 = v_368;
  };
  if (contrato_cl1) {
    v_370 = sub_64;
    v_367 = sub_40;
  } else {
    v_370 = v_369;
    v_367 = sub_41;
  };
  if (contrato_cl2) {
    sub_39 = v_367;
  } else {
    sub_39 = v_370;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (contrato_v_424) {
    sub_10 = sub_33;
  } else {
    sub_10 = sub_11;
  };
  if (contrato_rad_up2) {
    v_355 = false;
  } else {
    v_355 = sub_13;
  };
  if (contrato_rc2) {
    sub_67 = v_355;
  } else {
    sub_67 = sub_12;
  };
  if (contrato_v_424) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_11;
  };
  sub_65 = sub_66;
  if (contrato_rc1) {
    v_376 = sub_10;
  } else {
    v_376 = sub_65;
  };
  sub_68 = sub_65;
  if (contrato_rad_up1) {
    sub_9 = v_376;
  } else {
    sub_9 = sub_68;
  };
  if (contrato_rad_up2) {
    v_351 = false;
  } else {
    v_351 = sub_35;
  };
  if (contrato_rc2) {
    v_352 = v_351;
  } else {
    v_352 = sub_34;
  };
  if (contrato_v_424) {
    sub_70 = sub_11;
  } else {
    sub_70 = sub_33;
  };
  if (contrato_rad_down2) {
    sub_72 = sub_14;
  } else {
    sub_72 = false;
  };
  if (contrato_rc2) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_12;
  };
  if (contrato_v_424) {
    v_353 = v_352;
  } else {
    v_353 = sub_71;
  };
  if (contrato_rad_down1) {
    v_354 = sub_70;
  } else {
    v_354 = v_353;
  };
  if (contrato_rc1) {
    sub_69 = v_354;
  } else {
    sub_69 = sub_70;
  };
  if (contrato_v_425) {
    sub_8 = sub_69;
  } else {
    sub_8 = sub_9;
  };
  if (contrato_v_424) {
    sub_75 = false;
  } else {
    sub_75 = sub_11;
  };
  if (contrato_rc1) {
    v_350 = sub_75;
  } else {
    v_350 = sub_65;
  };
  if (contrato_rad_up1) {
    sub_74 = v_350;
  } else {
    sub_74 = sub_68;
  };
  if (contrato_v_424) {
    v_348 = false;
    sub_77 = sub_11;
  } else {
    v_348 = sub_71;
    sub_77 = false;
  };
  if (contrato_rad_down1) {
    v_349 = sub_77;
  } else {
    v_349 = v_348;
  };
  if (contrato_rc1) {
    sub_76 = v_349;
  } else {
    sub_76 = sub_77;
  };
  if (contrato_v_425) {
    sub_73 = sub_76;
  } else {
    sub_73 = sub_74;
  };
  if (contrato_ck_12_1) {
    v_378 = sub_8;
    v_377 = sub_73;
  } else {
    v_378 = sub_73;
    v_377 = sub_8;
  };
  if (contrato_push_janela) {
    v_379 = v_377;
  } else {
    v_379 = v_378;
  };
  if (contrato_cj) {
    sub_7 = v_379;
  } else {
    sub_7 = sub_8;
  };
  sub_79 = sub_73;
  sub_78 = sub_79;
  if (contrato_ck_10_1) {
    v_381 = sub_7;
    v_380 = sub_78;
  } else {
    v_381 = sub_78;
    v_380 = sub_7;
  };
  if (contrato_push_porta) {
    v_382 = v_380;
  } else {
    v_382 = v_381;
  };
  if (contrato_cp) {
    sub_6 = v_382;
  } else {
    sub_6 = sub_7;
  };
  sub_84 = sub_11;
  if (contrato_rc1) {
    v_341 = sub_84;
  } else {
    v_341 = sub_65;
  };
  if (contrato_rad_up1) {
    sub_83 = v_341;
  } else {
    sub_83 = sub_68;
  };
  if (contrato_v_424) {
    v_339 = sub_67;
  } else {
    v_339 = sub_71;
  };
  if (contrato_rad_down1) {
    v_340 = sub_11;
  } else {
    v_340 = v_339;
  };
  if (contrato_rc1) {
    sub_85 = v_340;
  } else {
    sub_85 = sub_84;
  };
  if (contrato_v_425) {
    sub_82 = sub_85;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_ck_12_1) {
    v_343 = sub_82;
    v_342 = sub_73;
  } else {
    v_343 = sub_73;
    v_342 = sub_82;
  };
  if (contrato_push_janela) {
    v_344 = v_342;
  } else {
    v_344 = v_343;
  };
  if (contrato_cj) {
    sub_81 = v_344;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_ck_10_1) {
    v_346 = sub_81;
    v_345 = sub_78;
  } else {
    v_346 = sub_78;
    v_345 = sub_81;
  };
  if (contrato_push_porta) {
    v_347 = v_345;
  } else {
    v_347 = v_346;
  };
  if (contrato_cp) {
    sub_80 = v_347;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_co) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_80;
  };
  if (contrato_v_387) {
    sub_100 = sub_50;
  } else {
    sub_100 = sub_22;
  };
  if (contrato_v_388) {
    v_324 = sub_22;
    v_323 = sub_100;
  } else {
    v_324 = sub_100;
    v_323 = sub_22;
  };
  if (contrato_end_wash) {
    sub_99 = v_323;
  } else {
    sub_99 = v_324;
  };
  if (contrato_v_389) {
    sub_98 = sub_21;
  } else {
    sub_98 = sub_99;
  };
  if (contrato_v_387) {
    sub_103 = sub_61;
  } else {
    sub_103 = sub_27;
  };
  if (contrato_v_388) {
    v_322 = sub_27;
    v_321 = sub_103;
  } else {
    v_322 = sub_103;
    v_321 = sub_27;
  };
  if (contrato_end_wash) {
    sub_102 = v_321;
  } else {
    sub_102 = v_322;
  };
  if (contrato_v_389) {
    sub_101 = sub_26;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_ck_16_1) {
    v_326 = sub_98;
    v_325 = sub_101;
  } else {
    v_326 = sub_101;
    v_325 = sub_98;
  };
  if (contrato_botao_tv) {
    sub_97 = v_325;
  } else {
    sub_97 = v_326;
  };
  sub_104 = sub_101;
  if (contrato_ck_14_1) {
    v_328 = sub_97;
    sub_96 = sub_104;
  } else {
    v_328 = sub_104;
    sub_96 = sub_97;
  };
  if (contrato_botao_lamp) {
    v_329 = sub_96;
  } else {
    v_329 = v_328;
  };
  if (contrato_cl1) {
    v_330 = sub_104;
    v_327 = sub_96;
  } else {
    v_330 = v_329;
    v_327 = sub_97;
  };
  if (contrato_cl2) {
    sub_95 = v_327;
  } else {
    sub_95 = v_330;
  };
  if (contrato_finish_oven) {
    v_331 = sub_16;
  } else {
    v_331 = sub_95;
  };
  if (contrato_tok) {
    sub_94 = sub_15;
  } else {
    sub_94 = v_331;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (contrato_v_424) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_11;
  };
  if (contrato_rc1) {
    v_332 = sub_90;
  } else {
    v_332 = sub_65;
  };
  if (contrato_rad_up1) {
    sub_89 = v_332;
  } else {
    sub_89 = sub_68;
  };
  if (contrato_rad_up2) {
    v_317 = false;
  } else {
    v_317 = sub_93;
  };
  if (contrato_rc2) {
    v_318 = v_317;
  } else {
    v_318 = sub_92;
  };
  if (contrato_v_424) {
    v_319 = v_318;
    sub_106 = sub_11;
  } else {
    v_319 = sub_71;
    sub_106 = sub_91;
  };
  if (contrato_rad_down1) {
    v_320 = sub_106;
  } else {
    v_320 = v_319;
  };
  if (contrato_rc1) {
    sub_105 = v_320;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_v_425) {
    sub_88 = sub_105;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_ck_12_1) {
    v_334 = sub_88;
    v_333 = sub_73;
  } else {
    v_334 = sub_73;
    v_333 = sub_88;
  };
  if (contrato_push_janela) {
    v_335 = v_333;
  } else {
    v_335 = v_334;
  };
  if (contrato_cj) {
    sub_87 = v_335;
  } else {
    sub_87 = sub_88;
  };
  if (contrato_ck_10_1) {
    v_337 = sub_87;
    v_336 = sub_78;
  } else {
    v_337 = sub_78;
    v_336 = sub_87;
  };
  if (contrato_push_porta) {
    v_338 = v_336;
  } else {
    v_338 = v_337;
  };
  if (contrato_cp) {
    sub_86 = v_338;
  } else {
    sub_86 = sub_87;
  };
  if (contrato_v_330) {
    sub_4 = sub_86;
  } else {
    sub_4 = sub_5;
  };
  sub_107 = sub_6;
  if (contrato_v_329) {
    sub_3 = sub_107;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (contrato_v_330) {
    sub_108 = sub_107;
  } else {
    sub_108 = sub_5;
  };
  if (contrato_cold) {
    sub_120 = sub_95;
  } else {
    sub_120 = sub_17;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  if (contrato_v_424) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_11;
  };
  if (contrato_rc1) {
    v_309 = sub_114;
  } else {
    v_309 = sub_65;
  };
  if (contrato_rad_up1) {
    sub_113 = v_309;
  } else {
    sub_113 = sub_68;
  };
  if (contrato_rad_up2) {
    v_305 = false;
  } else {
    v_305 = sub_117;
  };
  if (contrato_rc2) {
    v_306 = v_305;
  } else {
    v_306 = sub_116;
  };
  if (contrato_v_424) {
    v_307 = v_306;
    sub_122 = sub_11;
  } else {
    v_307 = sub_71;
    sub_122 = sub_115;
  };
  if (contrato_rad_down1) {
    v_308 = sub_122;
  } else {
    v_308 = v_307;
  };
  if (contrato_rc1) {
    sub_121 = v_308;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_v_425) {
    sub_112 = sub_121;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_ck_12_1) {
    v_311 = sub_112;
    v_310 = sub_73;
  } else {
    v_311 = sub_73;
    v_310 = sub_112;
  };
  if (contrato_push_janela) {
    v_312 = v_310;
  } else {
    v_312 = v_311;
  };
  if (contrato_cj) {
    sub_111 = v_312;
  } else {
    sub_111 = sub_112;
  };
  if (contrato_ck_10_1) {
    v_314 = sub_111;
    v_313 = sub_78;
  } else {
    v_314 = sub_78;
    v_313 = sub_111;
  };
  if (contrato_push_porta) {
    v_315 = v_313;
  } else {
    v_315 = v_314;
  };
  if (contrato_cp) {
    v_316 = v_315;
  } else {
    v_316 = sub_111;
  };
  if (contrato_co) {
    sub_110 = v_316;
  } else {
    sub_110 = sub_80;
  };
  if (contrato_finish_oven) {
    v_297 = sub_16;
  } else {
    v_297 = sub_38;
  };
  if (contrato_tok) {
    sub_131 = sub_15;
  } else {
    sub_131 = v_297;
  };
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  if (contrato_v_424) {
    sub_127 = sub_128;
  } else {
    sub_127 = sub_11;
  };
  if (contrato_rc1) {
    v_298 = sub_127;
  } else {
    v_298 = sub_65;
  };
  if (contrato_rad_up1) {
    sub_126 = v_298;
  } else {
    sub_126 = sub_68;
  };
  if (contrato_rad_up2) {
    v_293 = false;
  } else {
    v_293 = sub_130;
  };
  if (contrato_rc2) {
    v_294 = v_293;
  } else {
    v_294 = sub_129;
  };
  if (contrato_v_424) {
    v_295 = v_294;
    sub_133 = sub_11;
  } else {
    v_295 = sub_71;
    sub_133 = sub_128;
  };
  if (contrato_rad_down1) {
    v_296 = sub_133;
  } else {
    v_296 = v_295;
  };
  if (contrato_rc1) {
    sub_132 = v_296;
  } else {
    sub_132 = sub_133;
  };
  if (contrato_v_425) {
    sub_125 = sub_132;
  } else {
    sub_125 = sub_126;
  };
  if (contrato_ck_12_1) {
    v_300 = sub_125;
    v_299 = sub_73;
  } else {
    v_300 = sub_73;
    v_299 = sub_125;
  };
  if (contrato_push_janela) {
    v_301 = v_299;
  } else {
    v_301 = v_300;
  };
  if (contrato_cj) {
    sub_124 = v_301;
  } else {
    sub_124 = sub_125;
  };
  if (contrato_ck_10_1) {
    v_303 = sub_124;
    v_302 = sub_78;
  } else {
    v_303 = sub_78;
    v_302 = sub_124;
  };
  if (contrato_push_porta) {
    v_304 = v_302;
  } else {
    v_304 = v_303;
  };
  if (contrato_cp) {
    sub_123 = v_304;
  } else {
    sub_123 = sub_124;
  };
  if (contrato_v_330) {
    sub_109 = sub_123;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_v_329) {
    v_383 = sub_109;
  } else {
    v_383 = sub_108;
  };
  sub_135 = sub_80;
  if (contrato_v_330) {
    sub_134 = sub_107;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_v_329) {
    v_384 = sub_109;
  } else {
    v_384 = sub_134;
  };
  if (contrato_start_oven) {
    v_385 = v_383;
  } else {
    v_385 = v_384;
  };
  if (contrato_v_328) {
    v_386 = v_385;
  } else {
    v_386 = sub_2;
  };
  if (contrato_ck_14_1) {
    v_283 = sub_31;
    sub_149 = false;
  } else {
    v_283 = false;
    sub_149 = sub_31;
  };
  if (contrato_botao_lamp) {
    v_284 = sub_149;
  } else {
    v_284 = v_283;
  };
  if (contrato_cl1) {
    v_285 = false;
    v_282 = sub_149;
  } else {
    v_285 = v_284;
    v_282 = sub_32;
  };
  if (contrato_cl2) {
    sub_148 = v_282;
  } else {
    sub_148 = v_285;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (contrato_v_424) {
    sub_141 = false;
  } else {
    sub_141 = sub_142;
  };
  if (contrato_rad_up2) {
    v_280 = false;
  } else {
    v_280 = sub_144;
  };
  if (contrato_rc2) {
    v_281 = v_280;
  } else {
    v_281 = sub_143;
  };
  if (contrato_v_424) {
    sub_151 = v_281;
  } else {
    sub_151 = sub_142;
  };
  sub_150 = sub_151;
  if (contrato_rc1) {
    v_286 = sub_141;
  } else {
    v_286 = sub_150;
  };
  if (contrato_rad_up1) {
    sub_140 = v_286;
  } else {
    sub_140 = sub_150;
  };
  if (contrato_v_424) {
    sub_153 = sub_142;
  } else {
    sub_153 = false;
  };
  if (contrato_rad_down2) {
    sub_155 = sub_145;
  } else {
    sub_155 = false;
  };
  if (contrato_rc2) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_143;
  };
  if (contrato_v_424) {
    v_278 = false;
  } else {
    v_278 = sub_154;
  };
  if (contrato_rad_down1) {
    v_279 = sub_153;
  } else {
    v_279 = v_278;
  };
  if (contrato_rc1) {
    sub_152 = v_279;
  } else {
    sub_152 = sub_153;
  };
  if (contrato_v_425) {
    sub_139 = sub_152;
  } else {
    sub_139 = sub_140;
  };
  if (contrato_ck_12_1) {
    v_288 = sub_139;
    v_287 = false;
  } else {
    v_288 = false;
    v_287 = sub_139;
  };
  if (contrato_push_janela) {
    v_289 = v_287;
  } else {
    v_289 = v_288;
  };
  if (contrato_cj) {
    sub_138 = v_289;
  } else {
    sub_138 = sub_139;
  };
  if (contrato_ck_10_1) {
    v_291 = sub_138;
    v_290 = false;
  } else {
    v_291 = false;
    v_290 = sub_138;
  };
  if (contrato_push_porta) {
    v_292 = v_290;
  } else {
    v_292 = v_291;
  };
  if (contrato_cp) {
    sub_137 = v_292;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (contrato_presenca) {
    sub_1 = v_386;
  } else {
    sub_1 = sub_136;
  };
  sub_174 = sub_21;
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_184 = sub_42;
  sub_183 = sub_184;
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  sub_175 = sub_176;
  if (contrato_v_424) {
    sub_164 = sub_175;
  } else {
    sub_164 = sub_165;
  };
  if (contrato_rad_up2) {
    v_270 = false;
  } else {
    v_270 = sub_167;
  };
  if (contrato_rc2) {
    sub_187 = v_270;
  } else {
    sub_187 = sub_166;
  };
  if (contrato_v_424) {
    sub_186 = sub_187;
  } else {
    sub_186 = sub_165;
  };
  sub_185 = sub_186;
  if (contrato_rc1) {
    v_271 = sub_164;
  } else {
    v_271 = sub_185;
  };
  sub_188 = sub_185;
  if (contrato_rad_up1) {
    sub_163 = v_271;
  } else {
    sub_163 = sub_188;
  };
  if (contrato_rad_up2) {
    v_266 = false;
  } else {
    v_266 = sub_177;
  };
  if (contrato_rc2) {
    v_267 = v_266;
  } else {
    v_267 = sub_176;
  };
  if (contrato_v_424) {
    sub_190 = sub_165;
  } else {
    sub_190 = sub_175;
  };
  if (contrato_rad_down2) {
    sub_192 = sub_168;
  } else {
    sub_192 = false;
  };
  if (contrato_rc2) {
    sub_191 = sub_192;
  } else {
    sub_191 = sub_166;
  };
  if (contrato_v_424) {
    v_268 = v_267;
  } else {
    v_268 = sub_191;
  };
  if (contrato_rad_down1) {
    v_269 = sub_190;
  } else {
    v_269 = v_268;
  };
  if (contrato_rc1) {
    sub_189 = v_269;
  } else {
    sub_189 = sub_190;
  };
  if (contrato_v_425) {
    sub_162 = sub_189;
  } else {
    sub_162 = sub_163;
  };
  if (contrato_v_424) {
    sub_195 = false;
  } else {
    sub_195 = sub_165;
  };
  if (contrato_rc1) {
    v_265 = sub_195;
  } else {
    v_265 = sub_185;
  };
  if (contrato_rad_up1) {
    sub_194 = v_265;
  } else {
    sub_194 = sub_188;
  };
  if (contrato_v_424) {
    v_263 = false;
    sub_197 = sub_165;
  } else {
    v_263 = sub_191;
    sub_197 = false;
  };
  if (contrato_rad_down1) {
    v_264 = sub_197;
  } else {
    v_264 = v_263;
  };
  if (contrato_rc1) {
    sub_196 = v_264;
  } else {
    sub_196 = sub_197;
  };
  if (contrato_v_425) {
    sub_193 = sub_196;
  } else {
    sub_193 = sub_194;
  };
  if (contrato_ck_12_1) {
    v_273 = sub_162;
    v_272 = sub_193;
  } else {
    v_273 = sub_193;
    v_272 = sub_162;
  };
  if (contrato_push_janela) {
    v_274 = v_272;
  } else {
    v_274 = v_273;
  };
  if (contrato_cj) {
    sub_161 = v_274;
  } else {
    sub_161 = sub_162;
  };
  sub_199 = sub_193;
  sub_198 = sub_199;
  if (contrato_ck_10_1) {
    v_276 = sub_161;
    v_275 = sub_198;
  } else {
    v_276 = sub_198;
    v_275 = sub_161;
  };
  if (contrato_push_porta) {
    v_277 = v_275;
  } else {
    v_277 = v_276;
  };
  if (contrato_cp) {
    sub_160 = v_277;
  } else {
    sub_160 = sub_161;
  };
  sub_204 = sub_165;
  if (contrato_rc1) {
    v_256 = sub_204;
  } else {
    v_256 = sub_185;
  };
  if (contrato_rad_up1) {
    sub_203 = v_256;
  } else {
    sub_203 = sub_188;
  };
  if (contrato_v_424) {
    v_254 = sub_187;
  } else {
    v_254 = sub_191;
  };
  if (contrato_rad_down1) {
    v_255 = sub_165;
  } else {
    v_255 = v_254;
  };
  if (contrato_rc1) {
    sub_205 = v_255;
  } else {
    sub_205 = sub_204;
  };
  if (contrato_v_425) {
    sub_202 = sub_205;
  } else {
    sub_202 = sub_203;
  };
  if (contrato_ck_12_1) {
    v_258 = sub_202;
    v_257 = sub_193;
  } else {
    v_258 = sub_193;
    v_257 = sub_202;
  };
  if (contrato_push_janela) {
    v_259 = v_257;
  } else {
    v_259 = v_258;
  };
  if (contrato_cj) {
    sub_201 = v_259;
  } else {
    sub_201 = sub_202;
  };
  if (contrato_ck_10_1) {
    v_261 = sub_201;
    v_260 = sub_198;
  } else {
    v_261 = sub_198;
    v_260 = sub_201;
  };
  if (contrato_push_porta) {
    v_262 = v_260;
  } else {
    v_262 = v_261;
  };
  if (contrato_cp) {
    sub_200 = v_262;
  } else {
    sub_200 = sub_201;
  };
  if (contrato_co) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_200;
  };
  sub_218 = sub_98;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  if (contrato_finish_oven) {
    v_246 = sub_170;
  } else {
    v_246 = sub_215;
  };
  if (contrato_tok) {
    sub_214 = sub_169;
  } else {
    sub_214 = v_246;
  };
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  if (contrato_v_424) {
    sub_210 = sub_211;
  } else {
    sub_210 = sub_165;
  };
  if (contrato_rc1) {
    v_247 = sub_210;
  } else {
    v_247 = sub_185;
  };
  if (contrato_rad_up1) {
    sub_209 = v_247;
  } else {
    sub_209 = sub_188;
  };
  if (contrato_rad_up2) {
    v_242 = false;
  } else {
    v_242 = sub_213;
  };
  if (contrato_rc2) {
    v_243 = v_242;
  } else {
    v_243 = sub_212;
  };
  if (contrato_v_424) {
    v_244 = v_243;
    sub_220 = sub_165;
  } else {
    v_244 = sub_191;
    sub_220 = sub_211;
  };
  if (contrato_rad_down1) {
    v_245 = sub_220;
  } else {
    v_245 = v_244;
  };
  if (contrato_rc1) {
    sub_219 = v_245;
  } else {
    sub_219 = sub_220;
  };
  if (contrato_v_425) {
    sub_208 = sub_219;
  } else {
    sub_208 = sub_209;
  };
  if (contrato_ck_12_1) {
    v_249 = sub_208;
    v_248 = sub_193;
  } else {
    v_249 = sub_193;
    v_248 = sub_208;
  };
  if (contrato_push_janela) {
    v_250 = v_248;
  } else {
    v_250 = v_249;
  };
  if (contrato_cj) {
    sub_207 = v_250;
  } else {
    sub_207 = sub_208;
  };
  if (contrato_ck_10_1) {
    v_252 = sub_207;
    v_251 = sub_198;
  } else {
    v_252 = sub_198;
    v_251 = sub_207;
  };
  if (contrato_push_porta) {
    v_253 = v_251;
  } else {
    v_253 = v_252;
  };
  if (contrato_cp) {
    sub_206 = v_253;
  } else {
    sub_206 = sub_207;
  };
  if (contrato_v_330) {
    sub_158 = sub_206;
  } else {
    sub_158 = sub_159;
  };
  sub_221 = sub_160;
  if (contrato_v_329) {
    sub_157 = sub_221;
  } else {
    sub_157 = sub_158;
  };
  sub_156 = sub_157;
  if (contrato_v_330) {
    sub_222 = sub_221;
  } else {
    sub_222 = sub_159;
  };
  if (contrato_cold) {
    sub_234 = sub_215;
  } else {
    sub_234 = sub_171;
  };
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (contrato_v_424) {
    sub_228 = sub_229;
  } else {
    sub_228 = sub_165;
  };
  if (contrato_rc1) {
    v_234 = sub_228;
  } else {
    v_234 = sub_185;
  };
  if (contrato_rad_up1) {
    sub_227 = v_234;
  } else {
    sub_227 = sub_188;
  };
  if (contrato_rad_up2) {
    v_230 = false;
  } else {
    v_230 = sub_231;
  };
  if (contrato_rc2) {
    v_231 = v_230;
  } else {
    v_231 = sub_230;
  };
  if (contrato_v_424) {
    v_232 = v_231;
    sub_236 = sub_165;
  } else {
    v_232 = sub_191;
    sub_236 = sub_229;
  };
  if (contrato_rad_down1) {
    v_233 = sub_236;
  } else {
    v_233 = v_232;
  };
  if (contrato_rc1) {
    sub_235 = v_233;
  } else {
    sub_235 = sub_236;
  };
  if (contrato_v_425) {
    sub_226 = sub_235;
  } else {
    sub_226 = sub_227;
  };
  if (contrato_ck_12_1) {
    v_236 = sub_226;
    v_235 = sub_193;
  } else {
    v_236 = sub_193;
    v_235 = sub_226;
  };
  if (contrato_push_janela) {
    v_237 = v_235;
  } else {
    v_237 = v_236;
  };
  if (contrato_cj) {
    sub_225 = v_237;
  } else {
    sub_225 = sub_226;
  };
  if (contrato_ck_10_1) {
    v_239 = sub_225;
    v_238 = sub_198;
  } else {
    v_239 = sub_198;
    v_238 = sub_225;
  };
  if (contrato_push_porta) {
    v_240 = v_238;
  } else {
    v_240 = v_239;
  };
  if (contrato_cp) {
    v_241 = v_240;
  } else {
    v_241 = sub_225;
  };
  if (contrato_co) {
    sub_224 = v_241;
  } else {
    sub_224 = sub_200;
  };
  if (contrato_finish_oven) {
    v_222 = sub_170;
  } else {
    v_222 = sub_180;
  };
  if (contrato_tok) {
    sub_245 = sub_169;
  } else {
    sub_245 = v_222;
  };
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  if (contrato_v_424) {
    sub_241 = sub_242;
  } else {
    sub_241 = sub_165;
  };
  if (contrato_rc1) {
    v_223 = sub_241;
  } else {
    v_223 = sub_185;
  };
  if (contrato_rad_up1) {
    sub_240 = v_223;
  } else {
    sub_240 = sub_188;
  };
  if (contrato_rad_up2) {
    v_218 = false;
  } else {
    v_218 = sub_244;
  };
  if (contrato_rc2) {
    v_219 = v_218;
  } else {
    v_219 = sub_243;
  };
  if (contrato_v_424) {
    v_220 = v_219;
    sub_247 = sub_165;
  } else {
    v_220 = sub_191;
    sub_247 = sub_242;
  };
  if (contrato_rad_down1) {
    v_221 = sub_247;
  } else {
    v_221 = v_220;
  };
  if (contrato_rc1) {
    sub_246 = v_221;
  } else {
    sub_246 = sub_247;
  };
  if (contrato_v_425) {
    sub_239 = sub_246;
  } else {
    sub_239 = sub_240;
  };
  if (contrato_ck_12_1) {
    v_225 = sub_239;
    v_224 = sub_193;
  } else {
    v_225 = sub_193;
    v_224 = sub_239;
  };
  if (contrato_push_janela) {
    v_226 = v_224;
  } else {
    v_226 = v_225;
  };
  if (contrato_cj) {
    sub_238 = v_226;
  } else {
    sub_238 = sub_239;
  };
  if (contrato_ck_10_1) {
    v_228 = sub_238;
    v_227 = sub_198;
  } else {
    v_228 = sub_198;
    v_227 = sub_238;
  };
  if (contrato_push_porta) {
    v_229 = v_227;
  } else {
    v_229 = v_228;
  };
  if (contrato_cp) {
    sub_237 = v_229;
  } else {
    sub_237 = sub_238;
  };
  if (contrato_v_330) {
    sub_223 = sub_237;
  } else {
    sub_223 = sub_224;
  };
  if (contrato_v_329) {
    v_387 = sub_223;
  } else {
    v_387 = sub_222;
  };
  sub_249 = sub_200;
  if (contrato_v_330) {
    sub_248 = sub_221;
  } else {
    sub_248 = sub_249;
  };
  if (contrato_v_329) {
    v_388 = sub_223;
  } else {
    v_388 = sub_248;
  };
  if (contrato_start_oven) {
    v_389 = v_387;
  } else {
    v_389 = v_388;
  };
  if (contrato_v_328) {
    v_390 = v_389;
  } else {
    v_390 = sub_156;
  };
  sub_264 = sub_20;
  if (contrato_ck_14_1) {
    v_208 = sub_264;
    sub_263 = false;
  } else {
    v_208 = false;
    sub_263 = sub_264;
  };
  if (contrato_botao_lamp) {
    v_209 = sub_263;
  } else {
    v_209 = v_208;
  };
  if (contrato_cl1) {
    v_210 = false;
    v_207 = sub_263;
  } else {
    v_210 = v_209;
    v_207 = sub_264;
  };
  if (contrato_cl2) {
    sub_262 = v_207;
  } else {
    sub_262 = v_210;
  };
  sub_261 = sub_262;
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_258 = sub_259;
  sub_257 = sub_258;
  sub_256 = sub_257;
  if (contrato_v_424) {
    sub_255 = false;
  } else {
    sub_255 = sub_256;
  };
  if (contrato_rad_up2) {
    v_205 = false;
  } else {
    v_205 = sub_258;
  };
  if (contrato_rc2) {
    v_206 = v_205;
  } else {
    v_206 = sub_257;
  };
  if (contrato_v_424) {
    sub_266 = v_206;
  } else {
    sub_266 = sub_256;
  };
  sub_265 = sub_266;
  if (contrato_rc1) {
    v_211 = sub_255;
  } else {
    v_211 = sub_265;
  };
  if (contrato_rad_up1) {
    sub_254 = v_211;
  } else {
    sub_254 = sub_265;
  };
  if (contrato_v_424) {
    sub_268 = sub_256;
  } else {
    sub_268 = false;
  };
  if (contrato_rad_down2) {
    sub_270 = sub_259;
  } else {
    sub_270 = false;
  };
  if (contrato_rc2) {
    sub_269 = sub_270;
  } else {
    sub_269 = sub_257;
  };
  if (contrato_v_424) {
    v = false;
  } else {
    v = sub_269;
  };
  if (contrato_rad_down1) {
    v_204 = sub_268;
  } else {
    v_204 = v;
  };
  if (contrato_rc1) {
    sub_267 = v_204;
  } else {
    sub_267 = sub_268;
  };
  if (contrato_v_425) {
    sub_253 = sub_267;
  } else {
    sub_253 = sub_254;
  };
  if (contrato_ck_12_1) {
    v_213 = sub_253;
    v_212 = false;
  } else {
    v_213 = false;
    v_212 = sub_253;
  };
  if (contrato_push_janela) {
    v_214 = v_212;
  } else {
    v_214 = v_213;
  };
  if (contrato_cj) {
    sub_252 = v_214;
  } else {
    sub_252 = sub_253;
  };
  if (contrato_ck_10_1) {
    v_216 = sub_252;
    v_215 = false;
  } else {
    v_216 = false;
    v_215 = sub_252;
  };
  if (contrato_push_porta) {
    v_217 = v_215;
  } else {
    v_217 = v_216;
  };
  if (contrato_cp) {
    sub_251 = v_217;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  if (contrato_presenca) {
    v_391 = v_390;
  } else {
    v_391 = sub_250;
  };
  if (p_contrato_ct1) {
    sub_0 = v_391;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  sub_24 = false;
  sub_25 = true;
  if (p_contrato_cl2) {
    sub_23 = sub_25;
  } else {
    sub_23 = sub_24;
  };
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
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  v_461 = !(contrato_comfort_input);
  sub_43 = (v_461&&false);
  if (contrato_v_291) {
    sub_42 = sub_24;
  } else {
    sub_42 = sub_43;
  };
  sub_44 = (contrato_comfort_input||false);
  if (contrato_v_291) {
    v_463 = sub_44;
    v_462 = sub_25;
  } else {
    v_463 = false;
    v_462 = sub_44;
  };
  if (p_contrato_cl2) {
    sub_41 = v_462;
  } else {
    sub_41 = sub_42;
  };
  if (contrato_v_291) {
    sub_45 = sub_43;
  } else {
    sub_45 = false;
  };
  if (p_contrato_cl2) {
    v_464 = v_463;
  } else {
    v_464 = sub_45;
  };
  if (contrato_v_290) {
    v_465 = v_464;
  } else {
    v_465 = sub_41;
  };
  if (contrato_eco_input) {
    sub_40 = sub_23;
  } else {
    sub_40 = v_465;
  };
  sub_39 = sub_40;
  if (contrato_cws) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_21;
  };
  if (contrato_v_387) {
    sub_37 = sub_20;
  } else {
    sub_37 = sub_38;
  };
  sub_46 = sub_39;
  if (contrato_v_388) {
    v_466 = sub_46;
  } else {
    v_466 = sub_37;
  };
  if (contrato_end_wash) {
    sub_36 = v_466;
  } else {
    sub_36 = sub_46;
  };
  if (contrato_start_wash) {
    sub_48 = sub_40;
  } else {
    sub_48 = sub_22;
  };
  if (contrato_v_387) {
    v_460 = sub_48;
  } else {
    v_460 = sub_38;
  };
  if (contrato_v_388) {
    sub_47 = v_460;
  } else {
    sub_47 = sub_20;
  };
  if (contrato_v_389) {
    sub_35 = sub_47;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (contrato_v_424) {
    sub_9 = sub_26;
  } else {
    sub_9 = sub_10;
  };
  if (contrato_rad_up2) {
    v_459 = false;
  } else {
    v_459 = sub_12;
  };
  if (contrato_rc2) {
    sub_51 = v_459;
  } else {
    sub_51 = sub_11;
  };
  if (contrato_v_424) {
    sub_50 = sub_51;
  } else {
    sub_50 = sub_10;
  };
  sub_49 = sub_50;
  if (contrato_rc1) {
    v_467 = sub_9;
  } else {
    v_467 = sub_49;
  };
  sub_52 = sub_49;
  if (contrato_rad_up1) {
    sub_8 = v_467;
  } else {
    sub_8 = sub_52;
  };
  if (contrato_rad_up2) {
    v_455 = false;
  } else {
    v_455 = sub_28;
  };
  if (contrato_rc2) {
    v_456 = v_455;
  } else {
    v_456 = sub_27;
  };
  if (contrato_v_424) {
    sub_54 = sub_10;
  } else {
    sub_54 = sub_26;
  };
  if (contrato_rad_down2) {
    sub_56 = sub_13;
  } else {
    sub_56 = false;
  };
  if (contrato_rc2) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_11;
  };
  if (contrato_v_424) {
    v_457 = v_456;
  } else {
    v_457 = sub_55;
  };
  if (contrato_rad_down1) {
    v_458 = sub_54;
  } else {
    v_458 = v_457;
  };
  if (contrato_rc1) {
    sub_53 = v_458;
  } else {
    sub_53 = sub_54;
  };
  if (contrato_v_425) {
    sub_7 = sub_53;
  } else {
    sub_7 = sub_8;
  };
  if (contrato_v_424) {
    sub_59 = false;
  } else {
    sub_59 = sub_10;
  };
  if (contrato_rc1) {
    v_454 = sub_59;
  } else {
    v_454 = sub_49;
  };
  if (contrato_rad_up1) {
    sub_58 = v_454;
  } else {
    sub_58 = sub_52;
  };
  if (contrato_v_424) {
    v_452 = false;
    sub_61 = sub_10;
  } else {
    v_452 = sub_55;
    sub_61 = false;
  };
  if (contrato_rad_down1) {
    v_453 = sub_61;
  } else {
    v_453 = v_452;
  };
  if (contrato_rc1) {
    sub_60 = v_453;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_v_425) {
    sub_57 = sub_60;
  } else {
    sub_57 = sub_58;
  };
  if (contrato_ck_12_1) {
    v_469 = sub_7;
    v_468 = sub_57;
  } else {
    v_469 = sub_57;
    v_468 = sub_7;
  };
  if (contrato_push_janela) {
    v_470 = v_468;
  } else {
    v_470 = v_469;
  };
  if (contrato_cj) {
    sub_6 = v_470;
  } else {
    sub_6 = sub_7;
  };
  sub_63 = sub_57;
  sub_62 = sub_63;
  if (contrato_ck_10_1) {
    v_472 = sub_6;
    v_471 = sub_62;
  } else {
    v_472 = sub_62;
    v_471 = sub_6;
  };
  if (contrato_push_porta) {
    v_473 = v_471;
  } else {
    v_473 = v_472;
  };
  if (contrato_cp) {
    sub_5 = v_473;
  } else {
    sub_5 = sub_6;
  };
  sub_68 = sub_10;
  if (contrato_rc1) {
    v_445 = sub_68;
  } else {
    v_445 = sub_49;
  };
  if (contrato_rad_up1) {
    sub_67 = v_445;
  } else {
    sub_67 = sub_52;
  };
  if (contrato_v_424) {
    v_443 = sub_51;
  } else {
    v_443 = sub_55;
  };
  if (contrato_rad_down1) {
    v_444 = sub_10;
  } else {
    v_444 = v_443;
  };
  if (contrato_rc1) {
    sub_69 = v_444;
  } else {
    sub_69 = sub_68;
  };
  if (contrato_v_425) {
    sub_66 = sub_69;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_ck_12_1) {
    v_447 = sub_66;
    v_446 = sub_57;
  } else {
    v_447 = sub_57;
    v_446 = sub_66;
  };
  if (contrato_push_janela) {
    v_448 = v_446;
  } else {
    v_448 = v_447;
  };
  if (contrato_cj) {
    sub_65 = v_448;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_ck_10_1) {
    v_450 = sub_65;
    v_449 = sub_62;
  } else {
    v_450 = sub_62;
    v_449 = sub_65;
  };
  if (contrato_push_porta) {
    v_451 = v_449;
  } else {
    v_451 = v_450;
  };
  if (contrato_cp) {
    sub_64 = v_451;
  } else {
    sub_64 = sub_65;
  };
  if (contrato_co) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_64;
  };
  if (contrato_v_387) {
    sub_84 = sub_46;
  } else {
    sub_84 = sub_20;
  };
  if (contrato_v_388) {
    v_434 = sub_20;
    v_433 = sub_84;
  } else {
    v_434 = sub_84;
    v_433 = sub_20;
  };
  if (contrato_end_wash) {
    sub_83 = v_433;
  } else {
    sub_83 = v_434;
  };
  if (contrato_v_389) {
    sub_82 = sub_19;
  } else {
    sub_82 = sub_83;
  };
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  if (contrato_finish_oven) {
    v_435 = sub_15;
  } else {
    v_435 = sub_79;
  };
  if (contrato_tok) {
    sub_78 = sub_14;
  } else {
    sub_78 = v_435;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (contrato_v_424) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_10;
  };
  if (contrato_rc1) {
    v_436 = sub_74;
  } else {
    v_436 = sub_49;
  };
  if (contrato_rad_up1) {
    sub_73 = v_436;
  } else {
    sub_73 = sub_52;
  };
  if (contrato_rad_up2) {
    v_429 = false;
  } else {
    v_429 = sub_77;
  };
  if (contrato_rc2) {
    v_430 = v_429;
  } else {
    v_430 = sub_76;
  };
  if (contrato_v_424) {
    v_431 = v_430;
    sub_86 = sub_10;
  } else {
    v_431 = sub_55;
    sub_86 = sub_75;
  };
  if (contrato_rad_down1) {
    v_432 = sub_86;
  } else {
    v_432 = v_431;
  };
  if (contrato_rc1) {
    sub_85 = v_432;
  } else {
    sub_85 = sub_86;
  };
  if (contrato_v_425) {
    sub_72 = sub_85;
  } else {
    sub_72 = sub_73;
  };
  if (contrato_ck_12_1) {
    v_438 = sub_72;
    v_437 = sub_57;
  } else {
    v_438 = sub_57;
    v_437 = sub_72;
  };
  if (contrato_push_janela) {
    v_439 = v_437;
  } else {
    v_439 = v_438;
  };
  if (contrato_cj) {
    sub_71 = v_439;
  } else {
    sub_71 = sub_72;
  };
  if (contrato_ck_10_1) {
    v_441 = sub_71;
    v_440 = sub_62;
  } else {
    v_441 = sub_62;
    v_440 = sub_71;
  };
  if (contrato_push_porta) {
    v_442 = v_440;
  } else {
    v_442 = v_441;
  };
  if (contrato_cp) {
    sub_70 = v_442;
  } else {
    sub_70 = sub_71;
  };
  if (contrato_v_330) {
    sub_3 = sub_70;
  } else {
    sub_3 = sub_4;
  };
  sub_87 = sub_5;
  if (contrato_v_329) {
    sub_2 = sub_87;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_88 = sub_87;
  } else {
    sub_88 = sub_4;
  };
  if (contrato_cold) {
    sub_100 = sub_79;
  } else {
    sub_100 = sub_16;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (contrato_v_424) {
    sub_94 = sub_95;
  } else {
    sub_94 = sub_10;
  };
  if (contrato_rc1) {
    v_421 = sub_94;
  } else {
    v_421 = sub_49;
  };
  if (contrato_rad_up1) {
    sub_93 = v_421;
  } else {
    sub_93 = sub_52;
  };
  if (contrato_rad_up2) {
    v_417 = false;
  } else {
    v_417 = sub_97;
  };
  if (contrato_rc2) {
    v_418 = v_417;
  } else {
    v_418 = sub_96;
  };
  if (contrato_v_424) {
    v_419 = v_418;
    sub_102 = sub_10;
  } else {
    v_419 = sub_55;
    sub_102 = sub_95;
  };
  if (contrato_rad_down1) {
    v_420 = sub_102;
  } else {
    v_420 = v_419;
  };
  if (contrato_rc1) {
    sub_101 = v_420;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_v_425) {
    sub_92 = sub_101;
  } else {
    sub_92 = sub_93;
  };
  if (contrato_ck_12_1) {
    v_423 = sub_92;
    v_422 = sub_57;
  } else {
    v_423 = sub_57;
    v_422 = sub_92;
  };
  if (contrato_push_janela) {
    v_424 = v_422;
  } else {
    v_424 = v_423;
  };
  if (contrato_cj) {
    sub_91 = v_424;
  } else {
    sub_91 = sub_92;
  };
  if (contrato_ck_10_1) {
    v_426 = sub_91;
    v_425 = sub_62;
  } else {
    v_426 = sub_62;
    v_425 = sub_91;
  };
  if (contrato_push_porta) {
    v_427 = v_425;
  } else {
    v_427 = v_426;
  };
  if (contrato_cp) {
    v_428 = v_427;
  } else {
    v_428 = sub_91;
  };
  if (contrato_co) {
    sub_90 = v_428;
  } else {
    sub_90 = sub_64;
  };
  if (contrato_finish_oven) {
    v_409 = sub_15;
  } else {
    v_409 = sub_31;
  };
  if (contrato_tok) {
    sub_111 = sub_14;
  } else {
    sub_111 = v_409;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  if (contrato_v_424) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_10;
  };
  if (contrato_rc1) {
    v_410 = sub_107;
  } else {
    v_410 = sub_49;
  };
  if (contrato_rad_up1) {
    sub_106 = v_410;
  } else {
    sub_106 = sub_52;
  };
  if (contrato_rad_up2) {
    v_405 = false;
  } else {
    v_405 = sub_110;
  };
  if (contrato_rc2) {
    v_406 = v_405;
  } else {
    v_406 = sub_109;
  };
  if (contrato_v_424) {
    v_407 = v_406;
    sub_113 = sub_10;
  } else {
    v_407 = sub_55;
    sub_113 = sub_108;
  };
  if (contrato_rad_down1) {
    v_408 = sub_113;
  } else {
    v_408 = v_407;
  };
  if (contrato_rc1) {
    sub_112 = v_408;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_v_425) {
    sub_105 = sub_112;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_ck_12_1) {
    v_412 = sub_105;
    v_411 = sub_57;
  } else {
    v_412 = sub_57;
    v_411 = sub_105;
  };
  if (contrato_push_janela) {
    v_413 = v_411;
  } else {
    v_413 = v_412;
  };
  if (contrato_cj) {
    sub_104 = v_413;
  } else {
    sub_104 = sub_105;
  };
  if (contrato_ck_10_1) {
    v_415 = sub_104;
    v_414 = sub_62;
  } else {
    v_415 = sub_62;
    v_414 = sub_104;
  };
  if (contrato_push_porta) {
    v_416 = v_414;
  } else {
    v_416 = v_415;
  };
  if (contrato_cp) {
    sub_103 = v_416;
  } else {
    sub_103 = sub_104;
  };
  if (contrato_v_330) {
    sub_89 = sub_103;
  } else {
    sub_89 = sub_90;
  };
  if (contrato_v_329) {
    v_474 = sub_89;
  } else {
    v_474 = sub_88;
  };
  sub_115 = sub_64;
  if (contrato_v_330) {
    sub_114 = sub_87;
  } else {
    sub_114 = sub_115;
  };
  if (contrato_v_329) {
    v_475 = sub_89;
  } else {
    v_475 = sub_114;
  };
  if (contrato_start_oven) {
    v_476 = v_474;
  } else {
    v_476 = v_475;
  };
  if (contrato_v_328) {
    v_477 = v_476;
  } else {
    v_477 = sub_1;
  };
  sub_134 = sub_25;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (contrato_ck_14_1) {
    v_396 = sub_18;
    v_395 = sub_130;
  } else {
    v_396 = sub_130;
    v_395 = sub_18;
  };
  if (contrato_botao_lamp) {
    v_397 = v_395;
  } else {
    v_397 = v_396;
  };
  if (contrato_ck_14_1) {
    sub_129 = false;
  } else {
    sub_129 = sub_130;
  };
  if (contrato_cl1) {
    sub_128 = sub_129;
  } else {
    sub_128 = v_397;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (contrato_v_424) {
    sub_121 = false;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_rad_up2) {
    v_393 = false;
  } else {
    v_393 = sub_124;
  };
  if (contrato_rc2) {
    v_394 = v_393;
  } else {
    v_394 = sub_123;
  };
  if (contrato_v_424) {
    sub_136 = v_394;
  } else {
    sub_136 = sub_122;
  };
  sub_135 = sub_136;
  if (contrato_rc1) {
    v_398 = sub_121;
  } else {
    v_398 = sub_135;
  };
  if (contrato_rad_up1) {
    sub_120 = v_398;
  } else {
    sub_120 = sub_135;
  };
  if (contrato_v_424) {
    sub_138 = sub_122;
  } else {
    sub_138 = false;
  };
  if (contrato_rad_down2) {
    sub_140 = sub_125;
  } else {
    sub_140 = false;
  };
  if (contrato_rc2) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_123;
  };
  if (contrato_v_424) {
    v = false;
  } else {
    v = sub_139;
  };
  if (contrato_rad_down1) {
    v_392 = sub_138;
  } else {
    v_392 = v;
  };
  if (contrato_rc1) {
    sub_137 = v_392;
  } else {
    sub_137 = sub_138;
  };
  if (contrato_v_425) {
    sub_119 = sub_137;
  } else {
    sub_119 = sub_120;
  };
  if (contrato_ck_12_1) {
    v_400 = sub_119;
    v_399 = false;
  } else {
    v_400 = false;
    v_399 = sub_119;
  };
  if (contrato_push_janela) {
    v_401 = v_399;
  } else {
    v_401 = v_400;
  };
  if (contrato_cj) {
    sub_118 = v_401;
  } else {
    sub_118 = sub_119;
  };
  if (contrato_ck_10_1) {
    v_403 = sub_118;
    v_402 = false;
  } else {
    v_403 = false;
    v_402 = sub_118;
  };
  if (contrato_push_porta) {
    v_404 = v_402;
  } else {
    v_404 = v_403;
  };
  if (contrato_cp) {
    sub_117 = v_404;
  } else {
    sub_117 = sub_118;
  };
  sub_116 = sub_117;
  if (contrato_presenca) {
    sub_0 = v_477;
  } else {
    sub_0 = sub_116;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
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
  sub_12 = sub_13;
  sub_11 = sub_12;
  v_616 = !(contrato_comfort_input);
  sub_39 = (v_616&&false);
  if (contrato_v_291) {
    v_617 = sub_39;
    sub_38 = sub_23;
  } else {
    v_617 = false;
    sub_38 = sub_39;
  };
  if (contrato_v_290) {
    v_618 = v_617;
  } else {
    v_618 = sub_38;
  };
  if (contrato_eco_input) {
    sub_37 = sub_23;
  } else {
    sub_37 = v_618;
  };
  sub_36 = sub_37;
  if (contrato_cws) {
    sub_35 = sub_36;
  } else {
    sub_35 = sub_21;
  };
  if (contrato_v_387) {
    sub_34 = sub_20;
  } else {
    sub_34 = sub_35;
  };
  sub_40 = sub_36;
  if (contrato_v_388) {
    v_619 = sub_40;
  } else {
    v_619 = sub_34;
  };
  if (contrato_end_wash) {
    sub_33 = v_619;
  } else {
    sub_33 = sub_40;
  };
  if (contrato_start_wash) {
    sub_42 = sub_37;
  } else {
    sub_42 = sub_22;
  };
  if (contrato_v_387) {
    v_615 = sub_42;
  } else {
    v_615 = sub_35;
  };
  if (contrato_v_388) {
    sub_41 = v_615;
  } else {
    sub_41 = sub_20;
  };
  if (contrato_v_389) {
    sub_32 = sub_41;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (contrato_v_424) {
    sub_10 = sub_24;
  } else {
    sub_10 = sub_11;
  };
  if (contrato_rad_up2) {
    v_614 = false;
  } else {
    v_614 = sub_13;
  };
  if (contrato_rc2) {
    sub_45 = v_614;
  } else {
    sub_45 = sub_12;
  };
  if (contrato_v_424) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_11;
  };
  sub_43 = sub_44;
  if (contrato_rc1) {
    v_620 = sub_10;
  } else {
    v_620 = sub_43;
  };
  sub_46 = sub_43;
  if (contrato_rad_up1) {
    sub_9 = v_620;
  } else {
    sub_9 = sub_46;
  };
  if (contrato_rad_up2) {
    v_610 = false;
  } else {
    v_610 = sub_26;
  };
  if (contrato_rc2) {
    v_611 = v_610;
  } else {
    v_611 = sub_25;
  };
  if (contrato_v_424) {
    sub_48 = sub_11;
  } else {
    sub_48 = sub_24;
  };
  if (contrato_rad_down2) {
    sub_50 = sub_14;
  } else {
    sub_50 = false;
  };
  if (contrato_rc2) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_12;
  };
  if (contrato_v_424) {
    v_612 = v_611;
  } else {
    v_612 = sub_49;
  };
  if (contrato_rad_down1) {
    v_613 = sub_48;
  } else {
    v_613 = v_612;
  };
  if (contrato_rc1) {
    sub_47 = v_613;
  } else {
    sub_47 = sub_48;
  };
  if (contrato_v_425) {
    sub_8 = sub_47;
  } else {
    sub_8 = sub_9;
  };
  if (contrato_v_424) {
    sub_53 = false;
  } else {
    sub_53 = sub_11;
  };
  if (contrato_rc1) {
    v_609 = sub_53;
  } else {
    v_609 = sub_43;
  };
  if (contrato_rad_up1) {
    sub_52 = v_609;
  } else {
    sub_52 = sub_46;
  };
  if (contrato_v_424) {
    v_607 = false;
    sub_55 = sub_11;
  } else {
    v_607 = sub_49;
    sub_55 = false;
  };
  if (contrato_rad_down1) {
    v_608 = sub_55;
  } else {
    v_608 = v_607;
  };
  if (contrato_rc1) {
    sub_54 = v_608;
  } else {
    sub_54 = sub_55;
  };
  if (contrato_v_425) {
    sub_51 = sub_54;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_ck_12_1) {
    v_622 = sub_8;
    v_621 = sub_51;
  } else {
    v_622 = sub_51;
    v_621 = sub_8;
  };
  if (contrato_push_janela) {
    v_623 = v_621;
  } else {
    v_623 = v_622;
  };
  if (contrato_cj) {
    sub_7 = v_623;
  } else {
    sub_7 = sub_8;
  };
  sub_57 = sub_51;
  sub_56 = sub_57;
  if (contrato_ck_10_1) {
    v_625 = sub_7;
    v_624 = sub_56;
  } else {
    v_625 = sub_56;
    v_624 = sub_7;
  };
  if (contrato_push_porta) {
    v_626 = v_624;
  } else {
    v_626 = v_625;
  };
  if (contrato_cp) {
    sub_6 = v_626;
  } else {
    sub_6 = sub_7;
  };
  sub_62 = sub_11;
  if (contrato_rc1) {
    v_600 = sub_62;
  } else {
    v_600 = sub_43;
  };
  if (contrato_rad_up1) {
    sub_61 = v_600;
  } else {
    sub_61 = sub_46;
  };
  if (contrato_v_424) {
    v_598 = sub_45;
  } else {
    v_598 = sub_49;
  };
  if (contrato_rad_down1) {
    v_599 = sub_11;
  } else {
    v_599 = v_598;
  };
  if (contrato_rc1) {
    sub_63 = v_599;
  } else {
    sub_63 = sub_62;
  };
  if (contrato_v_425) {
    sub_60 = sub_63;
  } else {
    sub_60 = sub_61;
  };
  if (contrato_ck_12_1) {
    v_602 = sub_60;
    v_601 = sub_51;
  } else {
    v_602 = sub_51;
    v_601 = sub_60;
  };
  if (contrato_push_janela) {
    v_603 = v_601;
  } else {
    v_603 = v_602;
  };
  if (contrato_cj) {
    sub_59 = v_603;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_ck_10_1) {
    v_605 = sub_59;
    v_604 = sub_56;
  } else {
    v_605 = sub_56;
    v_604 = sub_59;
  };
  if (contrato_push_porta) {
    v_606 = v_604;
  } else {
    v_606 = v_605;
  };
  if (contrato_cp) {
    sub_58 = v_606;
  } else {
    sub_58 = sub_59;
  };
  if (contrato_co) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_58;
  };
  if (contrato_v_387) {
    sub_77 = sub_40;
  } else {
    sub_77 = sub_20;
  };
  if (contrato_v_388) {
    v_589 = sub_20;
    v_588 = sub_77;
  } else {
    v_589 = sub_77;
    v_588 = sub_20;
  };
  if (contrato_end_wash) {
    sub_76 = v_588;
  } else {
    sub_76 = v_589;
  };
  if (contrato_v_389) {
    sub_75 = sub_19;
  } else {
    sub_75 = sub_76;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (contrato_finish_oven) {
    v_590 = sub_16;
  } else {
    v_590 = sub_73;
  };
  if (contrato_tok) {
    sub_72 = sub_15;
  } else {
    sub_72 = v_590;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (contrato_v_424) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_11;
  };
  if (contrato_rc1) {
    v_591 = sub_68;
  } else {
    v_591 = sub_43;
  };
  if (contrato_rad_up1) {
    sub_67 = v_591;
  } else {
    sub_67 = sub_46;
  };
  if (contrato_rad_up2) {
    v_584 = false;
  } else {
    v_584 = sub_71;
  };
  if (contrato_rc2) {
    v_585 = v_584;
  } else {
    v_585 = sub_70;
  };
  if (contrato_v_424) {
    v_586 = v_585;
    sub_79 = sub_11;
  } else {
    v_586 = sub_49;
    sub_79 = sub_69;
  };
  if (contrato_rad_down1) {
    v_587 = sub_79;
  } else {
    v_587 = v_586;
  };
  if (contrato_rc1) {
    sub_78 = v_587;
  } else {
    sub_78 = sub_79;
  };
  if (contrato_v_425) {
    sub_66 = sub_78;
  } else {
    sub_66 = sub_67;
  };
  if (contrato_ck_12_1) {
    v_593 = sub_66;
    v_592 = sub_51;
  } else {
    v_593 = sub_51;
    v_592 = sub_66;
  };
  if (contrato_push_janela) {
    v_594 = v_592;
  } else {
    v_594 = v_593;
  };
  if (contrato_cj) {
    sub_65 = v_594;
  } else {
    sub_65 = sub_66;
  };
  if (contrato_ck_10_1) {
    v_596 = sub_65;
    v_595 = sub_56;
  } else {
    v_596 = sub_56;
    v_595 = sub_65;
  };
  if (contrato_push_porta) {
    v_597 = v_595;
  } else {
    v_597 = v_596;
  };
  if (contrato_cp) {
    sub_64 = v_597;
  } else {
    sub_64 = sub_65;
  };
  if (contrato_v_330) {
    sub_4 = sub_64;
  } else {
    sub_4 = sub_5;
  };
  sub_80 = sub_6;
  if (contrato_v_329) {
    sub_3 = sub_80;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (contrato_v_330) {
    sub_81 = sub_80;
  } else {
    sub_81 = sub_5;
  };
  if (contrato_cold) {
    sub_93 = sub_73;
  } else {
    sub_93 = sub_17;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (contrato_v_424) {
    sub_87 = sub_88;
  } else {
    sub_87 = sub_11;
  };
  if (contrato_rc1) {
    v_576 = sub_87;
  } else {
    v_576 = sub_43;
  };
  if (contrato_rad_up1) {
    sub_86 = v_576;
  } else {
    sub_86 = sub_46;
  };
  if (contrato_rad_up2) {
    v_572 = false;
  } else {
    v_572 = sub_90;
  };
  if (contrato_rc2) {
    v_573 = v_572;
  } else {
    v_573 = sub_89;
  };
  if (contrato_v_424) {
    v_574 = v_573;
    sub_95 = sub_11;
  } else {
    v_574 = sub_49;
    sub_95 = sub_88;
  };
  if (contrato_rad_down1) {
    v_575 = sub_95;
  } else {
    v_575 = v_574;
  };
  if (contrato_rc1) {
    sub_94 = v_575;
  } else {
    sub_94 = sub_95;
  };
  if (contrato_v_425) {
    sub_85 = sub_94;
  } else {
    sub_85 = sub_86;
  };
  if (contrato_ck_12_1) {
    v_578 = sub_85;
    v_577 = sub_51;
  } else {
    v_578 = sub_51;
    v_577 = sub_85;
  };
  if (contrato_push_janela) {
    v_579 = v_577;
  } else {
    v_579 = v_578;
  };
  if (contrato_cj) {
    sub_84 = v_579;
  } else {
    sub_84 = sub_85;
  };
  if (contrato_ck_10_1) {
    v_581 = sub_84;
    v_580 = sub_56;
  } else {
    v_581 = sub_56;
    v_580 = sub_84;
  };
  if (contrato_push_porta) {
    v_582 = v_580;
  } else {
    v_582 = v_581;
  };
  if (contrato_cp) {
    v_583 = v_582;
  } else {
    v_583 = sub_84;
  };
  if (contrato_co) {
    sub_83 = v_583;
  } else {
    sub_83 = sub_58;
  };
  if (contrato_finish_oven) {
    v_564 = sub_16;
  } else {
    v_564 = sub_29;
  };
  if (contrato_tok) {
    sub_104 = sub_15;
  } else {
    sub_104 = v_564;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  if (contrato_v_424) {
    sub_100 = sub_101;
  } else {
    sub_100 = sub_11;
  };
  if (contrato_rc1) {
    v_565 = sub_100;
  } else {
    v_565 = sub_43;
  };
  if (contrato_rad_up1) {
    sub_99 = v_565;
  } else {
    sub_99 = sub_46;
  };
  if (contrato_rad_up2) {
    v_560 = false;
  } else {
    v_560 = sub_103;
  };
  if (contrato_rc2) {
    v_561 = v_560;
  } else {
    v_561 = sub_102;
  };
  if (contrato_v_424) {
    v_562 = v_561;
    sub_106 = sub_11;
  } else {
    v_562 = sub_49;
    sub_106 = sub_101;
  };
  if (contrato_rad_down1) {
    v_563 = sub_106;
  } else {
    v_563 = v_562;
  };
  if (contrato_rc1) {
    sub_105 = v_563;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_v_425) {
    sub_98 = sub_105;
  } else {
    sub_98 = sub_99;
  };
  if (contrato_ck_12_1) {
    v_567 = sub_98;
    v_566 = sub_51;
  } else {
    v_567 = sub_51;
    v_566 = sub_98;
  };
  if (contrato_push_janela) {
    v_568 = v_566;
  } else {
    v_568 = v_567;
  };
  if (contrato_cj) {
    sub_97 = v_568;
  } else {
    sub_97 = sub_98;
  };
  if (contrato_ck_10_1) {
    v_570 = sub_97;
    v_569 = sub_56;
  } else {
    v_570 = sub_56;
    v_569 = sub_97;
  };
  if (contrato_push_porta) {
    v_571 = v_569;
  } else {
    v_571 = v_570;
  };
  if (contrato_cp) {
    sub_96 = v_571;
  } else {
    sub_96 = sub_97;
  };
  if (contrato_v_330) {
    sub_82 = sub_96;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_v_329) {
    v_627 = sub_82;
  } else {
    v_627 = sub_81;
  };
  sub_108 = sub_58;
  if (contrato_v_330) {
    sub_107 = sub_80;
  } else {
    sub_107 = sub_108;
  };
  if (contrato_v_329) {
    v_628 = sub_82;
  } else {
    v_628 = sub_107;
  };
  if (contrato_start_oven) {
    v_629 = v_627;
  } else {
    v_629 = v_628;
  };
  if (contrato_v_328) {
    v_630 = v_629;
  } else {
    v_630 = sub_2;
  };
  if (contrato_ck_12_1) {
    v_555 = sub_51;
    v_554 = false;
  } else {
    v_555 = false;
    v_554 = sub_51;
  };
  if (contrato_push_janela) {
    v_556 = v_554;
  } else {
    v_556 = v_555;
  };
  if (contrato_cj) {
    sub_111 = v_556;
  } else {
    sub_111 = sub_57;
  };
  if (contrato_ck_10_1) {
    v_558 = sub_111;
    v_557 = false;
  } else {
    v_558 = false;
    v_557 = sub_111;
  };
  if (contrato_push_porta) {
    v_559 = v_557;
  } else {
    v_559 = v_558;
  };
  if (contrato_cp) {
    sub_110 = v_559;
  } else {
    sub_110 = sub_111;
  };
  sub_109 = sub_110;
  if (contrato_presenca) {
    sub_1 = v_630;
  } else {
    sub_1 = sub_109;
  };
  sub_133 = true;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_149 = (contrato_comfort_input||false);
  if (contrato_v_291) {
    v_544 = sub_149;
    sub_148 = sub_133;
  } else {
    v_544 = false;
    sub_148 = sub_149;
  };
  if (contrato_v_290) {
    v_545 = v_544;
  } else {
    v_545 = sub_148;
  };
  if (contrato_eco_input) {
    sub_147 = sub_133;
  } else {
    sub_147 = v_545;
  };
  sub_146 = sub_147;
  if (contrato_cws) {
    sub_145 = sub_146;
  } else {
    sub_145 = sub_131;
  };
  if (contrato_v_387) {
    sub_144 = sub_130;
  } else {
    sub_144 = sub_145;
  };
  sub_150 = sub_146;
  if (contrato_v_388) {
    v_546 = sub_150;
  } else {
    v_546 = sub_144;
  };
  if (contrato_end_wash) {
    sub_143 = v_546;
  } else {
    sub_143 = sub_150;
  };
  if (contrato_start_wash) {
    sub_152 = sub_147;
  } else {
    sub_152 = sub_132;
  };
  if (contrato_v_387) {
    v_543 = sub_152;
  } else {
    v_543 = sub_145;
  };
  if (contrato_v_388) {
    sub_151 = v_543;
  } else {
    sub_151 = sub_130;
  };
  if (contrato_v_389) {
    sub_142 = sub_151;
  } else {
    sub_142 = sub_143;
  };
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  if (contrato_v_424) {
    sub_120 = sub_134;
  } else {
    sub_120 = sub_121;
  };
  if (contrato_rad_up2) {
    v_542 = false;
  } else {
    v_542 = sub_123;
  };
  if (contrato_rc2) {
    sub_155 = v_542;
  } else {
    sub_155 = sub_122;
  };
  if (contrato_v_424) {
    sub_154 = sub_155;
  } else {
    sub_154 = sub_121;
  };
  sub_153 = sub_154;
  if (contrato_rc1) {
    v_547 = sub_120;
  } else {
    v_547 = sub_153;
  };
  sub_156 = sub_153;
  if (contrato_rad_up1) {
    sub_119 = v_547;
  } else {
    sub_119 = sub_156;
  };
  if (contrato_rad_up2) {
    v_538 = false;
  } else {
    v_538 = sub_136;
  };
  if (contrato_rc2) {
    v_539 = v_538;
  } else {
    v_539 = sub_135;
  };
  if (contrato_v_424) {
    sub_158 = sub_121;
  } else {
    sub_158 = sub_134;
  };
  if (contrato_rad_down2) {
    sub_160 = sub_124;
  } else {
    sub_160 = false;
  };
  if (contrato_rc2) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_122;
  };
  if (contrato_v_424) {
    v_540 = v_539;
  } else {
    v_540 = sub_159;
  };
  if (contrato_rad_down1) {
    v_541 = sub_158;
  } else {
    v_541 = v_540;
  };
  if (contrato_rc1) {
    sub_157 = v_541;
  } else {
    sub_157 = sub_158;
  };
  if (contrato_v_425) {
    sub_118 = sub_157;
  } else {
    sub_118 = sub_119;
  };
  if (contrato_v_424) {
    sub_163 = false;
  } else {
    sub_163 = sub_121;
  };
  if (contrato_rc1) {
    v_537 = sub_163;
  } else {
    v_537 = sub_153;
  };
  if (contrato_rad_up1) {
    sub_162 = v_537;
  } else {
    sub_162 = sub_156;
  };
  if (contrato_v_424) {
    v_535 = false;
    sub_165 = sub_121;
  } else {
    v_535 = sub_159;
    sub_165 = false;
  };
  if (contrato_rad_down1) {
    v_536 = sub_165;
  } else {
    v_536 = v_535;
  };
  if (contrato_rc1) {
    sub_164 = v_536;
  } else {
    sub_164 = sub_165;
  };
  if (contrato_v_425) {
    sub_161 = sub_164;
  } else {
    sub_161 = sub_162;
  };
  if (contrato_ck_12_1) {
    v_549 = sub_118;
    v_548 = sub_161;
  } else {
    v_549 = sub_161;
    v_548 = sub_118;
  };
  if (contrato_push_janela) {
    v_550 = v_548;
  } else {
    v_550 = v_549;
  };
  if (contrato_cj) {
    sub_117 = v_550;
  } else {
    sub_117 = sub_118;
  };
  sub_167 = sub_161;
  sub_166 = sub_167;
  if (contrato_ck_10_1) {
    v_552 = sub_117;
    v_551 = sub_166;
  } else {
    v_552 = sub_166;
    v_551 = sub_117;
  };
  if (contrato_push_porta) {
    v_553 = v_551;
  } else {
    v_553 = v_552;
  };
  if (contrato_cp) {
    sub_116 = v_553;
  } else {
    sub_116 = sub_117;
  };
  sub_172 = sub_121;
  if (contrato_rc1) {
    v_528 = sub_172;
  } else {
    v_528 = sub_153;
  };
  if (contrato_rad_up1) {
    sub_171 = v_528;
  } else {
    sub_171 = sub_156;
  };
  if (contrato_v_424) {
    v_526 = sub_155;
  } else {
    v_526 = sub_159;
  };
  if (contrato_rad_down1) {
    v_527 = sub_121;
  } else {
    v_527 = v_526;
  };
  if (contrato_rc1) {
    sub_173 = v_527;
  } else {
    sub_173 = sub_172;
  };
  if (contrato_v_425) {
    sub_170 = sub_173;
  } else {
    sub_170 = sub_171;
  };
  if (contrato_ck_12_1) {
    v_530 = sub_170;
    v_529 = sub_161;
  } else {
    v_530 = sub_161;
    v_529 = sub_170;
  };
  if (contrato_push_janela) {
    v_531 = v_529;
  } else {
    v_531 = v_530;
  };
  if (contrato_cj) {
    sub_169 = v_531;
  } else {
    sub_169 = sub_170;
  };
  if (contrato_ck_10_1) {
    v_533 = sub_169;
    v_532 = sub_166;
  } else {
    v_533 = sub_166;
    v_532 = sub_169;
  };
  if (contrato_push_porta) {
    v_534 = v_532;
  } else {
    v_534 = v_533;
  };
  if (contrato_cp) {
    sub_168 = v_534;
  } else {
    sub_168 = sub_169;
  };
  if (contrato_co) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_168;
  };
  if (contrato_v_387) {
    sub_187 = sub_150;
  } else {
    sub_187 = sub_130;
  };
  if (contrato_v_388) {
    v_517 = sub_130;
    v_516 = sub_187;
  } else {
    v_517 = sub_187;
    v_516 = sub_130;
  };
  if (contrato_end_wash) {
    sub_186 = v_516;
  } else {
    sub_186 = v_517;
  };
  if (contrato_v_389) {
    sub_185 = sub_129;
  } else {
    sub_185 = sub_186;
  };
  sub_184 = sub_185;
  sub_183 = sub_184;
  if (contrato_finish_oven) {
    v_518 = sub_126;
  } else {
    v_518 = sub_183;
  };
  if (contrato_tok) {
    sub_182 = sub_125;
  } else {
    sub_182 = v_518;
  };
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  if (contrato_v_424) {
    sub_178 = sub_179;
  } else {
    sub_178 = sub_121;
  };
  if (contrato_rc1) {
    v_519 = sub_178;
  } else {
    v_519 = sub_153;
  };
  if (contrato_rad_up1) {
    sub_177 = v_519;
  } else {
    sub_177 = sub_156;
  };
  if (contrato_rad_up2) {
    v_512 = false;
  } else {
    v_512 = sub_181;
  };
  if (contrato_rc2) {
    v_513 = v_512;
  } else {
    v_513 = sub_180;
  };
  if (contrato_v_424) {
    v_514 = v_513;
    sub_189 = sub_121;
  } else {
    v_514 = sub_159;
    sub_189 = sub_179;
  };
  if (contrato_rad_down1) {
    v_515 = sub_189;
  } else {
    v_515 = v_514;
  };
  if (contrato_rc1) {
    sub_188 = v_515;
  } else {
    sub_188 = sub_189;
  };
  if (contrato_v_425) {
    sub_176 = sub_188;
  } else {
    sub_176 = sub_177;
  };
  if (contrato_ck_12_1) {
    v_521 = sub_176;
    v_520 = sub_161;
  } else {
    v_521 = sub_161;
    v_520 = sub_176;
  };
  if (contrato_push_janela) {
    v_522 = v_520;
  } else {
    v_522 = v_521;
  };
  if (contrato_cj) {
    sub_175 = v_522;
  } else {
    sub_175 = sub_176;
  };
  if (contrato_ck_10_1) {
    v_524 = sub_175;
    v_523 = sub_166;
  } else {
    v_524 = sub_166;
    v_523 = sub_175;
  };
  if (contrato_push_porta) {
    v_525 = v_523;
  } else {
    v_525 = v_524;
  };
  if (contrato_cp) {
    sub_174 = v_525;
  } else {
    sub_174 = sub_175;
  };
  if (contrato_v_330) {
    sub_114 = sub_174;
  } else {
    sub_114 = sub_115;
  };
  sub_190 = sub_116;
  if (contrato_v_329) {
    sub_113 = sub_190;
  } else {
    sub_113 = sub_114;
  };
  sub_112 = sub_113;
  if (contrato_v_330) {
    sub_191 = sub_190;
  } else {
    sub_191 = sub_115;
  };
  if (contrato_cold) {
    sub_203 = sub_183;
  } else {
    sub_203 = sub_127;
  };
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (contrato_v_424) {
    sub_197 = sub_198;
  } else {
    sub_197 = sub_121;
  };
  if (contrato_rc1) {
    v_504 = sub_197;
  } else {
    v_504 = sub_153;
  };
  if (contrato_rad_up1) {
    sub_196 = v_504;
  } else {
    sub_196 = sub_156;
  };
  if (contrato_rad_up2) {
    v_500 = false;
  } else {
    v_500 = sub_200;
  };
  if (contrato_rc2) {
    v_501 = v_500;
  } else {
    v_501 = sub_199;
  };
  if (contrato_v_424) {
    v_502 = v_501;
    sub_205 = sub_121;
  } else {
    v_502 = sub_159;
    sub_205 = sub_198;
  };
  if (contrato_rad_down1) {
    v_503 = sub_205;
  } else {
    v_503 = v_502;
  };
  if (contrato_rc1) {
    sub_204 = v_503;
  } else {
    sub_204 = sub_205;
  };
  if (contrato_v_425) {
    sub_195 = sub_204;
  } else {
    sub_195 = sub_196;
  };
  if (contrato_ck_12_1) {
    v_506 = sub_195;
    v_505 = sub_161;
  } else {
    v_506 = sub_161;
    v_505 = sub_195;
  };
  if (contrato_push_janela) {
    v_507 = v_505;
  } else {
    v_507 = v_506;
  };
  if (contrato_cj) {
    sub_194 = v_507;
  } else {
    sub_194 = sub_195;
  };
  if (contrato_ck_10_1) {
    v_509 = sub_194;
    v_508 = sub_166;
  } else {
    v_509 = sub_166;
    v_508 = sub_194;
  };
  if (contrato_push_porta) {
    v_510 = v_508;
  } else {
    v_510 = v_509;
  };
  if (contrato_cp) {
    v_511 = v_510;
  } else {
    v_511 = sub_194;
  };
  if (contrato_co) {
    sub_193 = v_511;
  } else {
    sub_193 = sub_168;
  };
  if (contrato_finish_oven) {
    v_492 = sub_126;
  } else {
    v_492 = sub_139;
  };
  if (contrato_tok) {
    sub_214 = sub_125;
  } else {
    sub_214 = v_492;
  };
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  if (contrato_v_424) {
    sub_210 = sub_211;
  } else {
    sub_210 = sub_121;
  };
  if (contrato_rc1) {
    v_493 = sub_210;
  } else {
    v_493 = sub_153;
  };
  if (contrato_rad_up1) {
    sub_209 = v_493;
  } else {
    sub_209 = sub_156;
  };
  if (contrato_rad_up2) {
    v_488 = false;
  } else {
    v_488 = sub_213;
  };
  if (contrato_rc2) {
    v_489 = v_488;
  } else {
    v_489 = sub_212;
  };
  if (contrato_v_424) {
    v_490 = v_489;
    sub_216 = sub_121;
  } else {
    v_490 = sub_159;
    sub_216 = sub_211;
  };
  if (contrato_rad_down1) {
    v_491 = sub_216;
  } else {
    v_491 = v_490;
  };
  if (contrato_rc1) {
    sub_215 = v_491;
  } else {
    sub_215 = sub_216;
  };
  if (contrato_v_425) {
    sub_208 = sub_215;
  } else {
    sub_208 = sub_209;
  };
  if (contrato_ck_12_1) {
    v_495 = sub_208;
    v_494 = sub_161;
  } else {
    v_495 = sub_161;
    v_494 = sub_208;
  };
  if (contrato_push_janela) {
    v_496 = v_494;
  } else {
    v_496 = v_495;
  };
  if (contrato_cj) {
    sub_207 = v_496;
  } else {
    sub_207 = sub_208;
  };
  if (contrato_ck_10_1) {
    v_498 = sub_207;
    v_497 = sub_166;
  } else {
    v_498 = sub_166;
    v_497 = sub_207;
  };
  if (contrato_push_porta) {
    v_499 = v_497;
  } else {
    v_499 = v_498;
  };
  if (contrato_cp) {
    sub_206 = v_499;
  } else {
    sub_206 = sub_207;
  };
  if (contrato_v_330) {
    sub_192 = sub_206;
  } else {
    sub_192 = sub_193;
  };
  if (contrato_v_329) {
    v_631 = sub_192;
  } else {
    v_631 = sub_191;
  };
  sub_218 = sub_168;
  if (contrato_v_330) {
    sub_217 = sub_190;
  } else {
    sub_217 = sub_218;
  };
  if (contrato_v_329) {
    v_632 = sub_192;
  } else {
    v_632 = sub_217;
  };
  if (contrato_start_oven) {
    v_633 = v_631;
  } else {
    v_633 = v_632;
  };
  if (contrato_v_328) {
    v_634 = v_633;
  } else {
    v_634 = sub_112;
  };
  if (contrato_ck_14_1) {
    sub_232 = sub_18;
  } else {
    sub_232 = sub_128;
  };
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  if (contrato_v_424) {
    sub_224 = false;
  } else {
    sub_224 = sub_225;
  };
  if (contrato_rad_up2) {
    v_479 = false;
  } else {
    v_479 = sub_227;
  };
  if (contrato_rc2) {
    v_480 = v_479;
  } else {
    v_480 = sub_226;
  };
  if (contrato_v_424) {
    sub_234 = v_480;
  } else {
    sub_234 = sub_225;
  };
  sub_233 = sub_234;
  if (contrato_rc1) {
    v_481 = sub_224;
  } else {
    v_481 = sub_233;
  };
  if (contrato_rad_up1) {
    sub_223 = v_481;
  } else {
    sub_223 = sub_233;
  };
  if (contrato_v_424) {
    sub_236 = sub_225;
  } else {
    sub_236 = false;
  };
  if (contrato_rad_down2) {
    sub_238 = sub_228;
  } else {
    sub_238 = false;
  };
  if (contrato_rc2) {
    sub_237 = sub_238;
  } else {
    sub_237 = sub_226;
  };
  if (contrato_v_424) {
    v = false;
  } else {
    v = sub_237;
  };
  if (contrato_rad_down1) {
    v_478 = sub_236;
  } else {
    v_478 = v;
  };
  if (contrato_rc1) {
    sub_235 = v_478;
  } else {
    sub_235 = sub_236;
  };
  if (contrato_v_425) {
    sub_222 = sub_235;
  } else {
    sub_222 = sub_223;
  };
  if (contrato_ck_12_1) {
    v_483 = sub_222;
    v_482 = false;
  } else {
    v_483 = false;
    v_482 = sub_222;
  };
  if (contrato_push_janela) {
    v_484 = v_482;
  } else {
    v_484 = v_483;
  };
  if (contrato_cj) {
    sub_221 = v_484;
  } else {
    sub_221 = sub_222;
  };
  if (contrato_ck_10_1) {
    v_486 = sub_221;
    v_485 = false;
  } else {
    v_486 = false;
    v_485 = sub_221;
  };
  if (contrato_push_porta) {
    v_487 = v_485;
  } else {
    v_487 = v_486;
  };
  if (contrato_cp) {
    sub_220 = v_487;
  } else {
    sub_220 = sub_221;
  };
  sub_219 = sub_220;
  if (contrato_presenca) {
    v_635 = v_634;
  } else {
    v_635 = sub_219;
  };
  if (p_contrato_cl1) {
    sub_0 = v_635;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  sub_22 = false;
  if (p_contrato_rc2) {
    sub_21 = true;
  } else {
    sub_21 = sub_22;
  };
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
  v_701 = (contrato_comfort_input||false);
  v_700 = !(contrato_comfort_input);
  sub_38 = (v_700&&false);
  if (p_contrato_rc2) {
    sub_37 = v_701;
  } else {
    sub_37 = sub_38;
  };
  if (contrato_v_291) {
    v_702 = sub_37;
    sub_36 = sub_21;
  } else {
    v_702 = false;
    sub_36 = sub_37;
  };
  if (contrato_v_290) {
    v_703 = v_702;
  } else {
    v_703 = sub_36;
  };
  if (contrato_eco_input) {
    sub_35 = sub_21;
  } else {
    sub_35 = v_703;
  };
  sub_34 = sub_35;
  if (contrato_cws) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_19;
  };
  if (contrato_v_387) {
    sub_32 = sub_18;
  } else {
    sub_32 = sub_33;
  };
  sub_39 = sub_34;
  if (contrato_v_388) {
    v_704 = sub_39;
  } else {
    v_704 = sub_32;
  };
  if (contrato_end_wash) {
    sub_31 = v_704;
  } else {
    sub_31 = sub_39;
  };
  if (contrato_start_wash) {
    sub_41 = sub_35;
  } else {
    sub_41 = sub_20;
  };
  if (contrato_v_387) {
    v_699 = sub_41;
  } else {
    v_699 = sub_33;
  };
  if (contrato_v_388) {
    sub_40 = v_699;
  } else {
    sub_40 = sub_18;
  };
  if (contrato_v_389) {
    sub_30 = sub_40;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (contrato_v_424) {
    sub_9 = sub_23;
  } else {
    sub_9 = sub_10;
  };
  sub_53 = sub_22;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (contrato_rad_up2) {
    sub_44 = sub_45;
  } else {
    sub_44 = sub_11;
  };
  if (contrato_v_424) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_10;
  };
  sub_42 = sub_43;
  if (contrato_rc1) {
    v_705 = sub_9;
  } else {
    v_705 = sub_42;
  };
  sub_54 = sub_42;
  if (contrato_rad_up1) {
    sub_8 = v_705;
  } else {
    sub_8 = sub_54;
  };
  if (contrato_v_424) {
    sub_56 = sub_10;
  } else {
    sub_56 = sub_23;
  };
  if (contrato_rad_down2) {
    sub_58 = sub_12;
  } else {
    sub_58 = sub_45;
  };
  sub_57 = sub_58;
  if (contrato_v_291) {
    v_693 = sub_38;
    sub_70 = sub_22;
  } else {
    v_693 = false;
    sub_70 = sub_38;
  };
  if (contrato_v_290) {
    v_694 = v_693;
  } else {
    v_694 = sub_70;
  };
  if (contrato_eco_input) {
    sub_69 = sub_22;
  } else {
    sub_69 = v_694;
  };
  sub_68 = sub_69;
  if (contrato_cws) {
    sub_67 = sub_68;
  } else {
    sub_67 = sub_52;
  };
  if (contrato_v_387) {
    sub_66 = sub_51;
  } else {
    sub_66 = sub_67;
  };
  sub_71 = sub_68;
  if (contrato_v_388) {
    v_695 = sub_71;
  } else {
    v_695 = sub_66;
  };
  if (contrato_end_wash) {
    sub_65 = v_695;
  } else {
    sub_65 = sub_71;
  };
  if (contrato_start_wash) {
    sub_73 = sub_69;
  } else {
    sub_73 = sub_53;
  };
  if (contrato_v_387) {
    v_692 = sub_73;
  } else {
    v_692 = sub_67;
  };
  if (contrato_v_388) {
    sub_72 = v_692;
  } else {
    sub_72 = sub_51;
  };
  if (contrato_v_389) {
    sub_64 = sub_72;
  } else {
    sub_64 = sub_65;
  };
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (contrato_rad_up2) {
    v_696 = sub_59;
  } else {
    v_696 = sub_24;
  };
  if (contrato_v_424) {
    v_697 = v_696;
  } else {
    v_697 = sub_57;
  };
  if (contrato_rad_down1) {
    v_698 = sub_56;
  } else {
    v_698 = v_697;
  };
  if (contrato_rc1) {
    sub_55 = v_698;
  } else {
    sub_55 = sub_56;
  };
  if (contrato_v_425) {
    sub_7 = sub_55;
  } else {
    sub_7 = sub_8;
  };
  if (contrato_v_424) {
    sub_76 = false;
  } else {
    sub_76 = sub_10;
  };
  if (contrato_rc1) {
    v_691 = sub_76;
  } else {
    v_691 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_75 = v_691;
  } else {
    sub_75 = sub_54;
  };
  if (contrato_v_424) {
    v_689 = false;
    sub_78 = sub_10;
  } else {
    v_689 = sub_57;
    sub_78 = false;
  };
  if (contrato_rad_down1) {
    v_690 = sub_78;
  } else {
    v_690 = v_689;
  };
  if (contrato_rc1) {
    sub_77 = v_690;
  } else {
    sub_77 = sub_78;
  };
  if (contrato_v_425) {
    sub_74 = sub_77;
  } else {
    sub_74 = sub_75;
  };
  if (contrato_ck_12_1) {
    v_707 = sub_7;
    v_706 = sub_74;
  } else {
    v_707 = sub_74;
    v_706 = sub_7;
  };
  if (contrato_push_janela) {
    v_708 = v_706;
  } else {
    v_708 = v_707;
  };
  if (contrato_cj) {
    sub_6 = v_708;
  } else {
    sub_6 = sub_7;
  };
  sub_80 = sub_74;
  sub_79 = sub_80;
  if (contrato_ck_10_1) {
    v_710 = sub_6;
    v_709 = sub_79;
  } else {
    v_710 = sub_79;
    v_709 = sub_6;
  };
  if (contrato_push_porta) {
    v_711 = v_709;
  } else {
    v_711 = v_710;
  };
  if (contrato_cp) {
    sub_5 = v_711;
  } else {
    sub_5 = sub_6;
  };
  sub_85 = sub_10;
  if (contrato_rc1) {
    v_682 = sub_85;
  } else {
    v_682 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_84 = v_682;
  } else {
    sub_84 = sub_54;
  };
  if (contrato_v_424) {
    v_680 = sub_44;
  } else {
    v_680 = sub_57;
  };
  if (contrato_rad_down1) {
    v_681 = sub_10;
  } else {
    v_681 = v_680;
  };
  if (contrato_rc1) {
    sub_86 = v_681;
  } else {
    sub_86 = sub_85;
  };
  if (contrato_v_425) {
    sub_83 = sub_86;
  } else {
    sub_83 = sub_84;
  };
  if (contrato_ck_12_1) {
    v_684 = sub_83;
    v_683 = sub_74;
  } else {
    v_684 = sub_74;
    v_683 = sub_83;
  };
  if (contrato_push_janela) {
    v_685 = v_683;
  } else {
    v_685 = v_684;
  };
  if (contrato_cj) {
    sub_82 = v_685;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_ck_10_1) {
    v_687 = sub_82;
    v_686 = sub_79;
  } else {
    v_687 = sub_79;
    v_686 = sub_82;
  };
  if (contrato_push_porta) {
    v_688 = v_686;
  } else {
    v_688 = v_687;
  };
  if (contrato_cp) {
    sub_81 = v_688;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_co) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_81;
  };
  if (contrato_v_387) {
    sub_99 = sub_39;
  } else {
    sub_99 = sub_18;
  };
  if (contrato_v_388) {
    v_671 = sub_18;
    v_670 = sub_99;
  } else {
    v_671 = sub_99;
    v_670 = sub_18;
  };
  if (contrato_end_wash) {
    sub_98 = v_670;
  } else {
    sub_98 = v_671;
  };
  if (contrato_v_389) {
    sub_97 = sub_17;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (contrato_finish_oven) {
    v_672 = sub_14;
  } else {
    v_672 = sub_95;
  };
  if (contrato_tok) {
    sub_94 = sub_13;
  } else {
    sub_94 = v_672;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  if (contrato_v_424) {
    sub_91 = sub_92;
  } else {
    sub_91 = sub_10;
  };
  if (contrato_rc1) {
    v_673 = sub_91;
  } else {
    v_673 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_90 = v_673;
  } else {
    sub_90 = sub_54;
  };
  if (contrato_v_424) {
    sub_101 = sub_10;
  } else {
    sub_101 = sub_92;
  };
  if (contrato_v_387) {
    sub_107 = sub_71;
  } else {
    sub_107 = sub_51;
  };
  if (contrato_v_388) {
    v_665 = sub_51;
    v_664 = sub_107;
  } else {
    v_665 = sub_107;
    v_664 = sub_51;
  };
  if (contrato_end_wash) {
    sub_106 = v_664;
  } else {
    sub_106 = v_665;
  };
  if (contrato_v_389) {
    sub_105 = sub_50;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (contrato_finish_oven) {
    v_666 = sub_47;
  } else {
    v_666 = sub_103;
  };
  if (contrato_tok) {
    sub_102 = sub_46;
  } else {
    sub_102 = v_666;
  };
  if (contrato_rad_up2) {
    v_667 = sub_102;
  } else {
    v_667 = sub_93;
  };
  if (contrato_v_424) {
    v_668 = v_667;
  } else {
    v_668 = sub_57;
  };
  if (contrato_rad_down1) {
    v_669 = sub_101;
  } else {
    v_669 = v_668;
  };
  if (contrato_rc1) {
    sub_100 = v_669;
  } else {
    sub_100 = sub_101;
  };
  if (contrato_v_425) {
    sub_89 = sub_100;
  } else {
    sub_89 = sub_90;
  };
  if (contrato_ck_12_1) {
    v_675 = sub_89;
    v_674 = sub_74;
  } else {
    v_675 = sub_74;
    v_674 = sub_89;
  };
  if (contrato_push_janela) {
    v_676 = v_674;
  } else {
    v_676 = v_675;
  };
  if (contrato_cj) {
    sub_88 = v_676;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_ck_10_1) {
    v_678 = sub_88;
    v_677 = sub_79;
  } else {
    v_678 = sub_79;
    v_677 = sub_88;
  };
  if (contrato_push_porta) {
    v_679 = v_677;
  } else {
    v_679 = v_678;
  };
  if (contrato_cp) {
    sub_87 = v_679;
  } else {
    sub_87 = sub_88;
  };
  if (contrato_v_330) {
    sub_3 = sub_87;
  } else {
    sub_3 = sub_4;
  };
  sub_108 = sub_5;
  if (contrato_v_329) {
    sub_2 = sub_108;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_109 = sub_108;
  } else {
    sub_109 = sub_4;
  };
  if (contrato_cold) {
    sub_120 = sub_95;
  } else {
    sub_120 = sub_15;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  if (contrato_v_424) {
    sub_115 = sub_116;
  } else {
    sub_115 = sub_10;
  };
  if (contrato_rc1) {
    v_656 = sub_115;
  } else {
    v_656 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_114 = v_656;
  } else {
    sub_114 = sub_54;
  };
  if (contrato_v_424) {
    sub_122 = sub_10;
  } else {
    sub_122 = sub_116;
  };
  if (contrato_cold) {
    sub_125 = sub_103;
  } else {
    sub_125 = sub_48;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (contrato_rad_up2) {
    v_653 = sub_123;
  } else {
    v_653 = sub_117;
  };
  if (contrato_v_424) {
    v_654 = v_653;
  } else {
    v_654 = sub_57;
  };
  if (contrato_rad_down1) {
    v_655 = sub_122;
  } else {
    v_655 = v_654;
  };
  if (contrato_rc1) {
    sub_121 = v_655;
  } else {
    sub_121 = sub_122;
  };
  if (contrato_v_425) {
    sub_113 = sub_121;
  } else {
    sub_113 = sub_114;
  };
  if (contrato_ck_12_1) {
    v_658 = sub_113;
    v_657 = sub_74;
  } else {
    v_658 = sub_74;
    v_657 = sub_113;
  };
  if (contrato_push_janela) {
    v_659 = v_657;
  } else {
    v_659 = v_658;
  };
  if (contrato_cj) {
    sub_112 = v_659;
  } else {
    sub_112 = sub_113;
  };
  if (contrato_ck_10_1) {
    v_661 = sub_112;
    v_660 = sub_79;
  } else {
    v_661 = sub_79;
    v_660 = sub_112;
  };
  if (contrato_push_porta) {
    v_662 = v_660;
  } else {
    v_662 = v_661;
  };
  if (contrato_cp) {
    v_663 = v_662;
  } else {
    v_663 = sub_112;
  };
  if (contrato_co) {
    sub_111 = v_663;
  } else {
    sub_111 = sub_81;
  };
  if (contrato_finish_oven) {
    v_645 = sub_14;
  } else {
    v_645 = sub_27;
  };
  if (contrato_tok) {
    sub_133 = sub_13;
  } else {
    sub_133 = v_645;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (contrato_v_424) {
    sub_130 = sub_131;
  } else {
    sub_130 = sub_10;
  };
  if (contrato_rc1) {
    v_646 = sub_130;
  } else {
    v_646 = sub_42;
  };
  if (contrato_rad_up1) {
    sub_129 = v_646;
  } else {
    sub_129 = sub_54;
  };
  if (contrato_v_424) {
    sub_135 = sub_10;
  } else {
    sub_135 = sub_131;
  };
  if (contrato_finish_oven) {
    v_641 = sub_47;
  } else {
    v_641 = sub_61;
  };
  if (contrato_tok) {
    sub_136 = sub_46;
  } else {
    sub_136 = v_641;
  };
  if (contrato_rad_up2) {
    v_642 = sub_136;
  } else {
    v_642 = sub_132;
  };
  if (contrato_v_424) {
    v_643 = v_642;
  } else {
    v_643 = sub_57;
  };
  if (contrato_rad_down1) {
    v_644 = sub_135;
  } else {
    v_644 = v_643;
  };
  if (contrato_rc1) {
    sub_134 = v_644;
  } else {
    sub_134 = sub_135;
  };
  if (contrato_v_425) {
    sub_128 = sub_134;
  } else {
    sub_128 = sub_129;
  };
  if (contrato_ck_12_1) {
    v_648 = sub_128;
    v_647 = sub_74;
  } else {
    v_648 = sub_74;
    v_647 = sub_128;
  };
  if (contrato_push_janela) {
    v_649 = v_647;
  } else {
    v_649 = v_648;
  };
  if (contrato_cj) {
    sub_127 = v_649;
  } else {
    sub_127 = sub_128;
  };
  if (contrato_ck_10_1) {
    v_651 = sub_127;
    v_650 = sub_79;
  } else {
    v_651 = sub_79;
    v_650 = sub_127;
  };
  if (contrato_push_porta) {
    v_652 = v_650;
  } else {
    v_652 = v_651;
  };
  if (contrato_cp) {
    sub_126 = v_652;
  } else {
    sub_126 = sub_127;
  };
  if (contrato_v_330) {
    sub_110 = sub_126;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_v_329) {
    v_712 = sub_110;
  } else {
    v_712 = sub_109;
  };
  sub_138 = sub_81;
  if (contrato_v_330) {
    sub_137 = sub_108;
  } else {
    sub_137 = sub_138;
  };
  if (contrato_v_329) {
    v_713 = sub_110;
  } else {
    v_713 = sub_137;
  };
  if (contrato_start_oven) {
    v_714 = v_712;
  } else {
    v_714 = v_713;
  };
  if (contrato_v_328) {
    v_715 = v_714;
  } else {
    v_715 = sub_1;
  };
  if (contrato_ck_12_1) {
    v_636 = sub_74;
    v = false;
  } else {
    v_636 = false;
    v = sub_74;
  };
  if (contrato_push_janela) {
    v_637 = v;
  } else {
    v_637 = v_636;
  };
  if (contrato_cj) {
    sub_141 = v_637;
  } else {
    sub_141 = sub_80;
  };
  if (contrato_ck_10_1) {
    v_639 = sub_141;
    v_638 = false;
  } else {
    v_639 = false;
    v_638 = sub_141;
  };
  if (contrato_push_porta) {
    v_640 = v_638;
  } else {
    v_640 = v_639;
  };
  if (contrato_cp) {
    sub_140 = v_640;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  if (contrato_presenca) {
    sub_0 = v_715;
  } else {
    sub_0 = sub_139;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  
  int v_844;
  int v_843;
  int v_842;
  int v_841;
  int v_840;
  int v_839;
  int v_838;
  int v_837;
  int v_836;
  int v_835;
  int v_834;
  int v_833;
  int v_832;
  int v_831;
  int v_830;
  int v_829;
  int v_828;
  int v_827;
  int v_826;
  int v_825;
  int v_824;
  int v_823;
  int v_822;
  int v_821;
  int v_820;
  int v_819;
  int v_818;
  int v_817;
  int v_816;
  int v_815;
  int v_814;
  int v_813;
  int v_812;
  int v_811;
  int v_810;
  int v_809;
  int v_808;
  int v_807;
  int v_806;
  int v_805;
  int v_804;
  int v_803;
  int v_802;
  int v_801;
  int v_800;
  int v_799;
  int v_798;
  int v_797;
  int v_796;
  int v_795;
  int v_794;
  int v_793;
  int v_792;
  int v_791;
  int v_790;
  int v_789;
  int v_788;
  int v_787;
  int v_786;
  int v_785;
  int v_784;
  int v_783;
  int v_782;
  int v_781;
  int v_780;
  int v_779;
  int v_778;
  int v_777;
  int v_776;
  int v_775;
  int v_774;
  int v_773;
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
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
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
  sub_9 = sub_10;
  v_824 = !(contrato_comfort_input);
  sub_38 = (v_824&&false);
  if (contrato_v_291) {
    v_825 = sub_38;
    sub_37 = sub_22;
  } else {
    v_825 = false;
    sub_37 = sub_38;
  };
  if (contrato_v_290) {
    v_826 = v_825;
  } else {
    v_826 = sub_37;
  };
  if (contrato_eco_input) {
    sub_36 = sub_22;
  } else {
    sub_36 = v_826;
  };
  sub_35 = sub_36;
  if (contrato_cws) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_20;
  };
  if (contrato_v_387) {
    sub_33 = sub_19;
  } else {
    sub_33 = sub_34;
  };
  sub_39 = sub_35;
  if (contrato_v_388) {
    v_827 = sub_39;
  } else {
    v_827 = sub_33;
  };
  if (contrato_end_wash) {
    sub_32 = v_827;
  } else {
    sub_32 = sub_39;
  };
  if (contrato_start_wash) {
    sub_41 = sub_36;
  } else {
    sub_41 = sub_21;
  };
  if (contrato_v_387) {
    v_823 = sub_41;
  } else {
    v_823 = sub_34;
  };
  if (contrato_v_388) {
    sub_40 = v_823;
  } else {
    sub_40 = sub_19;
  };
  if (contrato_v_389) {
    sub_31 = sub_40;
  } else {
    sub_31 = sub_32;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (contrato_v_424) {
    v_828 = sub_11;
  } else {
    v_828 = sub_24;
  };
  sub_56 = !(contrato_comfort_input);
  if (contrato_v_291) {
    sub_55 = sub_22;
  } else {
    sub_55 = sub_56;
  };
  sub_57 = true;
  if (contrato_v_291) {
    v_820 = sub_56;
  } else {
    v_820 = sub_57;
  };
  if (contrato_v_290) {
    v_821 = v_820;
  } else {
    v_821 = sub_55;
  };
  if (contrato_eco_input) {
    sub_54 = sub_22;
  } else {
    sub_54 = v_821;
  };
  sub_53 = sub_54;
  if (contrato_cws) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_20;
  };
  if (contrato_v_387) {
    sub_51 = sub_19;
  } else {
    sub_51 = sub_52;
  };
  sub_58 = sub_53;
  if (contrato_v_388) {
    v_822 = sub_58;
  } else {
    v_822 = sub_51;
  };
  if (contrato_end_wash) {
    sub_50 = v_822;
  } else {
    sub_50 = sub_58;
  };
  if (contrato_start_wash) {
    sub_60 = sub_54;
  } else {
    sub_60 = sub_21;
  };
  if (contrato_v_387) {
    v_819 = sub_60;
  } else {
    v_819 = sub_52;
  };
  if (contrato_v_388) {
    sub_59 = v_819;
  } else {
    sub_59 = sub_19;
  };
  if (contrato_v_389) {
    sub_49 = sub_59;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (contrato_v_424) {
    v_829 = sub_11;
  } else {
    v_829 = sub_42;
  };
  if (contrato_rad_down1) {
    sub_23 = v_828;
  } else {
    sub_23 = v_829;
  };
  if (contrato_v_425) {
    sub_8 = sub_23;
  } else {
    sub_8 = sub_9;
  };
  if (contrato_v_424) {
    v_818 = sub_11;
  } else {
    v_818 = false;
  };
  sub_74 = sub_57;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (contrato_v_424) {
    sub_63 = sub_11;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_rad_down1) {
    sub_62 = v_818;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_v_425) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_9;
  };
  if (contrato_ck_12_1) {
    v_831 = sub_8;
    v_830 = sub_61;
  } else {
    v_831 = sub_61;
    v_830 = sub_8;
  };
  if (contrato_push_janela) {
    v_832 = v_830;
  } else {
    v_832 = v_831;
  };
  if (contrato_cj) {
    sub_7 = v_832;
  } else {
    sub_7 = sub_8;
  };
  sub_76 = sub_61;
  sub_75 = sub_76;
  if (contrato_ck_10_1) {
    v_834 = sub_7;
    v_833 = sub_75;
  } else {
    v_834 = sub_75;
    v_833 = sub_7;
  };
  if (contrato_push_porta) {
    v_835 = v_833;
  } else {
    v_835 = v_834;
  };
  if (contrato_cp) {
    sub_6 = v_835;
  } else {
    sub_6 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_813 = sub_9;
    v_812 = sub_61;
  } else {
    v_813 = sub_61;
    v_812 = sub_9;
  };
  if (contrato_push_janela) {
    v_814 = v_812;
  } else {
    v_814 = v_813;
  };
  if (contrato_cj) {
    sub_78 = v_814;
  } else {
    sub_78 = sub_9;
  };
  if (contrato_ck_10_1) {
    v_816 = sub_78;
    v_815 = sub_75;
  } else {
    v_816 = sub_75;
    v_815 = sub_78;
  };
  if (contrato_push_porta) {
    v_817 = v_815;
  } else {
    v_817 = v_816;
  };
  if (contrato_cp) {
    sub_77 = v_817;
  } else {
    sub_77 = sub_78;
  };
  if (contrato_co) {
    sub_5 = sub_6;
  } else {
    sub_5 = sub_77;
  };
  if (contrato_v_387) {
    sub_90 = sub_39;
  } else {
    sub_90 = sub_19;
  };
  if (contrato_v_388) {
    v_802 = sub_19;
    v_801 = sub_90;
  } else {
    v_802 = sub_90;
    v_801 = sub_19;
  };
  if (contrato_end_wash) {
    sub_89 = v_801;
  } else {
    sub_89 = v_802;
  };
  if (contrato_v_389) {
    sub_88 = sub_18;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (contrato_finish_oven) {
    v_803 = sub_15;
  } else {
    v_803 = sub_86;
  };
  if (contrato_tok) {
    sub_85 = sub_14;
  } else {
    sub_85 = v_803;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (contrato_v_424) {
    v_804 = sub_11;
  } else {
    v_804 = sub_83;
  };
  if (contrato_v_387) {
    sub_98 = sub_58;
  } else {
    sub_98 = sub_19;
  };
  if (contrato_v_388) {
    v_799 = sub_19;
    v_798 = sub_98;
  } else {
    v_799 = sub_98;
    v_798 = sub_19;
  };
  if (contrato_end_wash) {
    sub_97 = v_798;
  } else {
    sub_97 = v_799;
  };
  if (contrato_v_389) {
    sub_96 = sub_18;
  } else {
    sub_96 = sub_97;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  if (contrato_finish_oven) {
    v_800 = sub_15;
  } else {
    v_800 = sub_94;
  };
  if (contrato_tok) {
    sub_93 = sub_14;
  } else {
    sub_93 = v_800;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (contrato_v_424) {
    v_805 = sub_11;
  } else {
    v_805 = sub_91;
  };
  if (contrato_rad_down1) {
    sub_82 = v_804;
  } else {
    sub_82 = v_805;
  };
  if (contrato_v_425) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_9;
  };
  if (contrato_ck_12_1) {
    v_807 = sub_81;
    v_806 = sub_61;
  } else {
    v_807 = sub_61;
    v_806 = sub_81;
  };
  if (contrato_push_janela) {
    v_808 = v_806;
  } else {
    v_808 = v_807;
  };
  if (contrato_cj) {
    sub_80 = v_808;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_ck_10_1) {
    v_810 = sub_80;
    v_809 = sub_75;
  } else {
    v_810 = sub_75;
    v_809 = sub_80;
  };
  if (contrato_push_porta) {
    v_811 = v_809;
  } else {
    v_811 = v_810;
  };
  if (contrato_cp) {
    sub_79 = v_811;
  } else {
    sub_79 = sub_80;
  };
  if (contrato_v_330) {
    sub_4 = sub_79;
  } else {
    sub_4 = sub_5;
  };
  sub_99 = sub_6;
  if (contrato_v_329) {
    sub_3 = sub_99;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (contrato_v_330) {
    sub_100 = sub_99;
  } else {
    sub_100 = sub_5;
  };
  if (contrato_cold) {
    sub_110 = sub_86;
  } else {
    sub_110 = sub_16;
  };
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (contrato_v_424) {
    v_789 = sub_11;
  } else {
    v_789 = sub_106;
  };
  if (contrato_cold) {
    sub_115 = sub_94;
  } else {
    sub_115 = sub_16;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (contrato_v_424) {
    v_790 = sub_11;
  } else {
    v_790 = sub_111;
  };
  if (contrato_rad_down1) {
    sub_105 = v_789;
  } else {
    sub_105 = v_790;
  };
  if (contrato_v_425) {
    sub_104 = sub_105;
  } else {
    sub_104 = sub_9;
  };
  if (contrato_ck_12_1) {
    v_792 = sub_104;
    v_791 = sub_61;
  } else {
    v_792 = sub_61;
    v_791 = sub_104;
  };
  if (contrato_push_janela) {
    v_793 = v_791;
  } else {
    v_793 = v_792;
  };
  if (contrato_cj) {
    sub_103 = v_793;
  } else {
    sub_103 = sub_104;
  };
  if (contrato_ck_10_1) {
    v_795 = sub_103;
    v_794 = sub_75;
  } else {
    v_795 = sub_75;
    v_794 = sub_103;
  };
  if (contrato_push_porta) {
    v_796 = v_794;
  } else {
    v_796 = v_795;
  };
  if (contrato_cp) {
    v_797 = v_796;
  } else {
    v_797 = sub_103;
  };
  if (contrato_co) {
    sub_102 = v_797;
  } else {
    sub_102 = sub_77;
  };
  if (contrato_finish_oven) {
    v_780 = sub_15;
  } else {
    v_780 = sub_28;
  };
  if (contrato_tok) {
    sub_122 = sub_14;
  } else {
    sub_122 = v_780;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (contrato_v_424) {
    v_781 = sub_11;
  } else {
    v_781 = sub_120;
  };
  if (contrato_finish_oven) {
    v_779 = sub_15;
  } else {
    v_779 = sub_46;
  };
  if (contrato_tok) {
    sub_125 = sub_14;
  } else {
    sub_125 = v_779;
  };
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (contrato_v_424) {
    v_782 = sub_11;
  } else {
    v_782 = sub_123;
  };
  if (contrato_rad_down1) {
    sub_119 = v_781;
  } else {
    sub_119 = v_782;
  };
  if (contrato_v_425) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_9;
  };
  if (contrato_ck_12_1) {
    v_784 = sub_118;
    v_783 = sub_61;
  } else {
    v_784 = sub_61;
    v_783 = sub_118;
  };
  if (contrato_push_janela) {
    v_785 = v_783;
  } else {
    v_785 = v_784;
  };
  if (contrato_cj) {
    sub_117 = v_785;
  } else {
    sub_117 = sub_118;
  };
  if (contrato_ck_10_1) {
    v_787 = sub_117;
    v_786 = sub_75;
  } else {
    v_787 = sub_75;
    v_786 = sub_117;
  };
  if (contrato_push_porta) {
    v_788 = v_786;
  } else {
    v_788 = v_787;
  };
  if (contrato_cp) {
    sub_116 = v_788;
  } else {
    sub_116 = sub_117;
  };
  if (contrato_v_330) {
    sub_101 = sub_116;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_v_329) {
    v_836 = sub_101;
  } else {
    v_836 = sub_100;
  };
  sub_127 = sub_77;
  if (contrato_v_330) {
    sub_126 = sub_99;
  } else {
    sub_126 = sub_127;
  };
  if (contrato_v_329) {
    v_837 = sub_101;
  } else {
    v_837 = sub_126;
  };
  if (contrato_start_oven) {
    v_838 = v_836;
  } else {
    v_838 = v_837;
  };
  if (contrato_v_328) {
    v_839 = v_838;
  } else {
    v_839 = sub_2;
  };
  if (contrato_ck_12_1) {
    v_774 = sub_61;
    v_773 = false;
  } else {
    v_774 = false;
    v_773 = sub_61;
  };
  if (contrato_push_janela) {
    v_775 = v_773;
  } else {
    v_775 = v_774;
  };
  if (contrato_cj) {
    sub_130 = v_775;
  } else {
    sub_130 = sub_76;
  };
  if (contrato_ck_10_1) {
    v_777 = sub_130;
    v_776 = false;
  } else {
    v_777 = false;
    v_776 = sub_130;
  };
  if (contrato_push_porta) {
    v_778 = v_776;
  } else {
    v_778 = v_777;
  };
  if (contrato_cp) {
    sub_129 = v_778;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  if (contrato_presenca) {
    sub_1 = v_839;
  } else {
    sub_1 = sub_128;
  };
  if (contrato_v_291) {
    v_764 = contrato_comfort_input;
    sub_152 = sub_57;
  } else {
    v_764 = sub_22;
    sub_152 = contrato_comfort_input;
  };
  if (contrato_v_290) {
    v_765 = v_764;
  } else {
    v_765 = sub_152;
  };
  if (contrato_eco_input) {
    sub_151 = sub_57;
  } else {
    sub_151 = v_765;
  };
  sub_150 = sub_151;
  if (contrato_cws) {
    sub_149 = sub_150;
  } else {
    sub_149 = sub_73;
  };
  if (contrato_v_387) {
    sub_148 = sub_72;
  } else {
    sub_148 = sub_149;
  };
  sub_153 = sub_150;
  if (contrato_v_388) {
    v_766 = sub_153;
  } else {
    v_766 = sub_148;
  };
  if (contrato_end_wash) {
    sub_147 = v_766;
  } else {
    sub_147 = sub_153;
  };
  if (contrato_start_wash) {
    sub_155 = sub_151;
  } else {
    sub_155 = sub_74;
  };
  if (contrato_v_387) {
    v_763 = sub_155;
  } else {
    v_763 = sub_149;
  };
  if (contrato_v_388) {
    sub_154 = v_763;
  } else {
    sub_154 = sub_72;
  };
  if (contrato_v_389) {
    sub_146 = sub_154;
  } else {
    sub_146 = sub_147;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  if (contrato_v_424) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_64;
  };
  sub_156 = sub_64;
  if (contrato_rad_up1) {
    sub_138 = sub_139;
  } else {
    sub_138 = sub_156;
  };
  sub_172 = (contrato_comfort_input||false);
  if (contrato_v_291) {
    v_759 = sub_172;
    sub_171 = sub_57;
  } else {
    v_759 = false;
    sub_171 = sub_172;
  };
  if (contrato_v_290) {
    v_760 = v_759;
  } else {
    v_760 = sub_171;
  };
  if (contrato_eco_input) {
    sub_170 = sub_57;
  } else {
    sub_170 = v_760;
  };
  sub_169 = sub_170;
  if (contrato_cws) {
    sub_168 = sub_169;
  } else {
    sub_168 = sub_73;
  };
  if (contrato_v_387) {
    sub_167 = sub_72;
  } else {
    sub_167 = sub_168;
  };
  sub_173 = sub_169;
  if (contrato_v_388) {
    v_761 = sub_173;
  } else {
    v_761 = sub_167;
  };
  if (contrato_end_wash) {
    sub_166 = v_761;
  } else {
    sub_166 = sub_173;
  };
  if (contrato_start_wash) {
    sub_175 = sub_170;
  } else {
    sub_175 = sub_74;
  };
  if (contrato_v_387) {
    v_758 = sub_175;
  } else {
    v_758 = sub_168;
  };
  if (contrato_v_388) {
    sub_174 = v_758;
  } else {
    sub_174 = sub_72;
  };
  if (contrato_v_389) {
    sub_165 = sub_174;
  } else {
    sub_165 = sub_166;
  };
  sub_164 = sub_165;
  sub_163 = sub_164;
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (contrato_v_424) {
    v_762 = sub_64;
  } else {
    v_762 = sub_158;
  };
  if (contrato_rad_down1) {
    sub_157 = v_762;
  } else {
    sub_157 = sub_139;
  };
  if (contrato_v_425) {
    sub_137 = sub_157;
  } else {
    sub_137 = sub_138;
  };
  if (contrato_rad_up1) {
    sub_177 = sub_63;
  } else {
    sub_177 = sub_156;
  };
  if (contrato_v_424) {
    v_757 = sub_64;
  } else {
    v_757 = false;
  };
  if (contrato_rad_down1) {
    sub_178 = v_757;
  } else {
    sub_178 = sub_63;
  };
  if (contrato_v_425) {
    sub_176 = sub_178;
  } else {
    sub_176 = sub_177;
  };
  if (contrato_ck_12_1) {
    v_768 = sub_137;
    v_767 = sub_176;
  } else {
    v_768 = sub_176;
    v_767 = sub_137;
  };
  if (contrato_push_janela) {
    v_769 = v_767;
  } else {
    v_769 = v_768;
  };
  if (contrato_cj) {
    sub_136 = v_769;
  } else {
    sub_136 = sub_137;
  };
  sub_180 = sub_176;
  sub_179 = sub_180;
  if (contrato_ck_10_1) {
    v_771 = sub_136;
    v_770 = sub_179;
  } else {
    v_771 = sub_179;
    v_770 = sub_136;
  };
  if (contrato_push_porta) {
    v_772 = v_770;
  } else {
    v_772 = v_771;
  };
  if (contrato_cp) {
    sub_135 = v_772;
  } else {
    sub_135 = sub_136;
  };
  sub_183 = sub_156;
  if (contrato_ck_12_1) {
    v_752 = sub_183;
    v_751 = sub_176;
  } else {
    v_752 = sub_176;
    v_751 = sub_183;
  };
  if (contrato_push_janela) {
    v_753 = v_751;
  } else {
    v_753 = v_752;
  };
  if (contrato_cj) {
    sub_182 = v_753;
  } else {
    sub_182 = sub_183;
  };
  if (contrato_ck_10_1) {
    v_755 = sub_182;
    v_754 = sub_179;
  } else {
    v_755 = sub_179;
    v_754 = sub_182;
  };
  if (contrato_push_porta) {
    v_756 = v_754;
  } else {
    v_756 = v_755;
  };
  if (contrato_cp) {
    sub_181 = v_756;
  } else {
    sub_181 = sub_182;
  };
  if (contrato_co) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_181;
  };
  if (contrato_v_387) {
    sub_195 = sub_153;
  } else {
    sub_195 = sub_72;
  };
  if (contrato_v_388) {
    v_743 = sub_72;
    v_742 = sub_195;
  } else {
    v_743 = sub_195;
    v_742 = sub_72;
  };
  if (contrato_end_wash) {
    sub_194 = v_742;
  } else {
    sub_194 = v_743;
  };
  if (contrato_v_389) {
    sub_193 = sub_71;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (contrato_finish_oven) {
    v_744 = sub_68;
  } else {
    v_744 = sub_191;
  };
  if (contrato_tok) {
    sub_190 = sub_67;
  } else {
    sub_190 = v_744;
  };
  sub_189 = sub_190;
  if (contrato_v_424) {
    sub_188 = sub_189;
  } else {
    sub_188 = sub_64;
  };
  if (contrato_rad_up1) {
    sub_187 = sub_188;
  } else {
    sub_187 = sub_156;
  };
  if (contrato_v_387) {
    sub_204 = sub_173;
  } else {
    sub_204 = sub_72;
  };
  if (contrato_v_388) {
    v_739 = sub_72;
    v_738 = sub_204;
  } else {
    v_739 = sub_204;
    v_738 = sub_72;
  };
  if (contrato_end_wash) {
    sub_203 = v_738;
  } else {
    sub_203 = v_739;
  };
  if (contrato_v_389) {
    sub_202 = sub_71;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  sub_200 = sub_201;
  if (contrato_finish_oven) {
    v_740 = sub_68;
  } else {
    v_740 = sub_200;
  };
  if (contrato_tok) {
    sub_199 = sub_67;
  } else {
    sub_199 = v_740;
  };
  sub_198 = sub_199;
  sub_197 = sub_198;
  if (contrato_v_424) {
    v_741 = sub_64;
  } else {
    v_741 = sub_197;
  };
  if (contrato_rad_down1) {
    sub_196 = v_741;
  } else {
    sub_196 = sub_188;
  };
  if (contrato_v_425) {
    sub_186 = sub_196;
  } else {
    sub_186 = sub_187;
  };
  if (contrato_ck_12_1) {
    v_746 = sub_186;
    v_745 = sub_176;
  } else {
    v_746 = sub_176;
    v_745 = sub_186;
  };
  if (contrato_push_janela) {
    v_747 = v_745;
  } else {
    v_747 = v_746;
  };
  if (contrato_cj) {
    sub_185 = v_747;
  } else {
    sub_185 = sub_186;
  };
  if (contrato_ck_10_1) {
    v_749 = sub_185;
    v_748 = sub_179;
  } else {
    v_749 = sub_179;
    v_748 = sub_185;
  };
  if (contrato_push_porta) {
    v_750 = v_748;
  } else {
    v_750 = v_749;
  };
  if (contrato_cp) {
    sub_184 = v_750;
  } else {
    sub_184 = sub_185;
  };
  if (contrato_v_330) {
    sub_133 = sub_184;
  } else {
    sub_133 = sub_134;
  };
  sub_205 = sub_135;
  if (contrato_v_329) {
    sub_132 = sub_205;
  } else {
    sub_132 = sub_133;
  };
  sub_131 = sub_132;
  if (contrato_v_330) {
    sub_206 = sub_205;
  } else {
    sub_206 = sub_134;
  };
  if (contrato_cold) {
    sub_216 = sub_191;
  } else {
    sub_216 = sub_69;
  };
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (contrato_v_424) {
    sub_212 = sub_213;
  } else {
    sub_212 = sub_64;
  };
  if (contrato_rad_up1) {
    sub_211 = sub_212;
  } else {
    sub_211 = sub_156;
  };
  if (contrato_cold) {
    sub_222 = sub_200;
  } else {
    sub_222 = sub_69;
  };
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  if (contrato_v_424) {
    v_730 = sub_64;
  } else {
    v_730 = sub_218;
  };
  if (contrato_rad_down1) {
    sub_217 = v_730;
  } else {
    sub_217 = sub_212;
  };
  if (contrato_v_425) {
    sub_210 = sub_217;
  } else {
    sub_210 = sub_211;
  };
  if (contrato_ck_12_1) {
    v_732 = sub_210;
    v_731 = sub_176;
  } else {
    v_732 = sub_176;
    v_731 = sub_210;
  };
  if (contrato_push_janela) {
    v_733 = v_731;
  } else {
    v_733 = v_732;
  };
  if (contrato_cj) {
    sub_209 = v_733;
  } else {
    sub_209 = sub_210;
  };
  if (contrato_ck_10_1) {
    v_735 = sub_209;
    v_734 = sub_179;
  } else {
    v_735 = sub_179;
    v_734 = sub_209;
  };
  if (contrato_push_porta) {
    v_736 = v_734;
  } else {
    v_736 = v_735;
  };
  if (contrato_cp) {
    v_737 = v_736;
  } else {
    v_737 = sub_209;
  };
  if (contrato_co) {
    sub_208 = v_737;
  } else {
    sub_208 = sub_181;
  };
  if (contrato_finish_oven) {
    v_723 = sub_68;
  } else {
    v_723 = sub_143;
  };
  if (contrato_tok) {
    sub_229 = sub_67;
  } else {
    sub_229 = v_723;
  };
  sub_228 = sub_229;
  if (contrato_v_424) {
    sub_227 = sub_228;
  } else {
    sub_227 = sub_64;
  };
  if (contrato_rad_up1) {
    sub_226 = sub_227;
  } else {
    sub_226 = sub_156;
  };
  if (contrato_finish_oven) {
    v_721 = sub_68;
  } else {
    v_721 = sub_162;
  };
  if (contrato_tok) {
    sub_233 = sub_67;
  } else {
    sub_233 = v_721;
  };
  sub_232 = sub_233;
  sub_231 = sub_232;
  if (contrato_v_424) {
    v_722 = sub_64;
  } else {
    v_722 = sub_231;
  };
  if (contrato_rad_down1) {
    sub_230 = v_722;
  } else {
    sub_230 = sub_227;
  };
  if (contrato_v_425) {
    sub_225 = sub_230;
  } else {
    sub_225 = sub_226;
  };
  if (contrato_ck_12_1) {
    v_725 = sub_225;
    v_724 = sub_176;
  } else {
    v_725 = sub_176;
    v_724 = sub_225;
  };
  if (contrato_push_janela) {
    v_726 = v_724;
  } else {
    v_726 = v_725;
  };
  if (contrato_cj) {
    sub_224 = v_726;
  } else {
    sub_224 = sub_225;
  };
  if (contrato_ck_10_1) {
    v_728 = sub_224;
    v_727 = sub_179;
  } else {
    v_728 = sub_179;
    v_727 = sub_224;
  };
  if (contrato_push_porta) {
    v_729 = v_727;
  } else {
    v_729 = v_728;
  };
  if (contrato_cp) {
    sub_223 = v_729;
  } else {
    sub_223 = sub_224;
  };
  if (contrato_v_330) {
    sub_207 = sub_223;
  } else {
    sub_207 = sub_208;
  };
  if (contrato_v_329) {
    v_840 = sub_207;
  } else {
    v_840 = sub_206;
  };
  sub_235 = sub_181;
  if (contrato_v_330) {
    sub_234 = sub_205;
  } else {
    sub_234 = sub_235;
  };
  if (contrato_v_329) {
    v_841 = sub_207;
  } else {
    v_841 = sub_234;
  };
  if (contrato_start_oven) {
    v_842 = v_840;
  } else {
    v_842 = v_841;
  };
  if (contrato_v_328) {
    v_843 = v_842;
  } else {
    v_843 = sub_131;
  };
  if (contrato_ck_12_1) {
    v_716 = sub_176;
    v = false;
  } else {
    v_716 = false;
    v = sub_176;
  };
  if (contrato_push_janela) {
    v_717 = v;
  } else {
    v_717 = v_716;
  };
  if (contrato_cj) {
    sub_238 = v_717;
  } else {
    sub_238 = sub_180;
  };
  if (contrato_ck_10_1) {
    v_719 = sub_238;
    v_718 = false;
  } else {
    v_719 = false;
    v_718 = sub_238;
  };
  if (contrato_push_porta) {
    v_720 = v_718;
  } else {
    v_720 = v_719;
  };
  if (contrato_cp) {
    sub_237 = v_720;
  } else {
    sub_237 = sub_238;
  };
  sub_236 = sub_237;
  if (contrato_presenca) {
    v_844 = v_843;
  } else {
    v_844 = sub_236;
  };
  if (p_contrato_rc1) {
    sub_0 = v_844;
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
                                                               int contrato_v_425,
                                                               int contrato_v_424,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_389,
                                                               int contrato_v_388,
                                                               int contrato_v_387,
                                                               int contrato_pnr_2,
                                                               int contrato_v_330,
                                                               int contrato_v_329,
                                                               int contrato_v_328,
                                                               int contrato_pnr_1,
                                                               int contrato_v_291,
                                                               int contrato_v_290,
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
  
  int v_911;
  int v_910;
  int v_909;
  int v_908;
  int v_907;
  int v_906;
  int v_905;
  int v_904;
  int v_903;
  int v_902;
  int v_901;
  int v_900;
  int v_899;
  int v_898;
  int v_897;
  int v_896;
  int v_895;
  int v_894;
  int v_893;
  int v_892;
  int v_891;
  int v_890;
  int v_889;
  int v_888;
  int v_887;
  int v_886;
  int v_885;
  int v_884;
  int v_883;
  int v_882;
  int v_881;
  int v_880;
  int v_879;
  int v_878;
  int v_877;
  int v_876;
  int v_875;
  int v_874;
  int v_873;
  int v_872;
  int v_871;
  int v_870;
  int v_869;
  int v_868;
  int v_867;
  int v_866;
  int v_865;
  int v_864;
  int v_863;
  int v_862;
  int v_861;
  int v_860;
  int v_859;
  int v_858;
  int v_857;
  int v_856;
  int v_855;
  int v_854;
  int v_853;
  int v_852;
  int v_851;
  int v_850;
  int v_849;
  int v_848;
  int v_847;
  int v_846;
  int v_845;
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
  sub_21 = p_contrato_co;
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
  sub_37 = (contrato_comfort_input&&sub_21);
  if (contrato_v_291) {
    sub_36 = sub_20;
  } else {
    sub_36 = sub_37;
  };
  sub_38 = false;
  if (contrato_v_291) {
    v_894 = sub_37;
  } else {
    v_894 = sub_38;
  };
  if (contrato_v_290) {
    v_895 = v_894;
  } else {
    v_895 = sub_36;
  };
  if (contrato_eco_input) {
    sub_35 = sub_20;
  } else {
    sub_35 = v_895;
  };
  sub_34 = sub_35;
  if (contrato_cws) {
    sub_33 = sub_34;
  } else {
    sub_33 = sub_18;
  };
  if (contrato_v_387) {
    sub_32 = sub_17;
  } else {
    sub_32 = sub_33;
  };
  sub_39 = sub_34;
  if (contrato_v_388) {
    v_896 = sub_39;
  } else {
    v_896 = sub_32;
  };
  if (contrato_end_wash) {
    sub_31 = v_896;
  } else {
    sub_31 = sub_39;
  };
  if (contrato_start_wash) {
    sub_41 = sub_35;
  } else {
    sub_41 = sub_19;
  };
  if (contrato_v_387) {
    v_893 = sub_41;
  } else {
    v_893 = sub_33;
  };
  if (contrato_v_388) {
    sub_40 = v_893;
  } else {
    sub_40 = sub_17;
  };
  if (contrato_v_389) {
    sub_30 = sub_40;
  } else {
    sub_30 = sub_31;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (contrato_v_424) {
    v_897 = sub_9;
  } else {
    v_897 = sub_23;
  };
  if (contrato_rad_down1) {
    sub_22 = v_897;
  } else {
    sub_22 = sub_9;
  };
  if (contrato_v_425) {
    sub_6 = sub_22;
  } else {
    sub_6 = sub_7;
  };
  if (contrato_v_424) {
    v_892 = sub_9;
  } else {
    v_892 = false;
  };
  if (contrato_rad_down1) {
    sub_43 = v_892;
  } else {
    sub_43 = sub_9;
  };
  if (contrato_v_425) {
    sub_42 = sub_43;
  } else {
    sub_42 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_899 = sub_6;
    v_898 = sub_42;
  } else {
    v_899 = sub_42;
    v_898 = sub_6;
  };
  if (contrato_push_janela) {
    v_900 = v_898;
  } else {
    v_900 = v_899;
  };
  if (contrato_cj) {
    sub_5 = v_900;
  } else {
    sub_5 = sub_6;
  };
  sub_45 = sub_42;
  sub_44 = sub_45;
  if (contrato_ck_10_1) {
    v_902 = sub_5;
    v_901 = sub_44;
  } else {
    v_902 = sub_44;
    v_901 = sub_5;
  };
  if (contrato_push_porta) {
    v_903 = v_901;
  } else {
    v_903 = v_902;
  };
  if (contrato_cp) {
    sub_4 = v_903;
  } else {
    sub_4 = sub_5;
  };
  if (contrato_comfort_input) {
    sub_61 = sub_21;
  } else {
    sub_61 = false;
  };
  if (contrato_v_291) {
    v_883 = sub_61;
    sub_60 = sub_20;
  } else {
    v_883 = false;
    sub_60 = sub_61;
  };
  if (contrato_v_290) {
    v_884 = v_883;
  } else {
    v_884 = sub_60;
  };
  if (contrato_eco_input) {
    sub_59 = sub_20;
  } else {
    sub_59 = v_884;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (contrato_v_387) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_17;
  };
  if (contrato_v_388) {
    v_886 = sub_17;
    v_885 = sub_56;
  } else {
    v_886 = sub_56;
    v_885 = sub_17;
  };
  if (contrato_end_wash) {
    sub_55 = v_885;
  } else {
    sub_55 = v_886;
  };
  if (contrato_v_389) {
    sub_54 = sub_16;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (contrato_finish_oven) {
    v_887 = sub_13;
  } else {
    v_887 = sub_52;
  };
  if (contrato_tok) {
    sub_51 = sub_12;
  } else {
    sub_51 = v_887;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (contrato_v_424) {
    v_888 = sub_9;
  } else {
    v_888 = sub_49;
  };
  if (contrato_rad_down1) {
    sub_48 = v_888;
  } else {
    sub_48 = sub_9;
  };
  if (contrato_v_425) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_890 = sub_47;
    v_889 = sub_42;
  } else {
    v_890 = sub_42;
    v_889 = sub_47;
  };
  if (contrato_push_janela) {
    v_891 = v_889;
  } else {
    v_891 = v_890;
  };
  if (contrato_cj) {
    sub_46 = v_891;
  } else {
    sub_46 = sub_47;
  };
  if (contrato_ck_10_1) {
    v_905 = sub_46;
    v_904 = sub_44;
  } else {
    v_905 = sub_44;
    v_904 = sub_46;
  };
  if (contrato_push_porta) {
    v_906 = v_904;
  } else {
    v_906 = v_905;
  };
  if (contrato_cp) {
    v_907 = v_906;
  } else {
    v_907 = sub_46;
  };
  if (contrato_v_330) {
    sub_3 = v_907;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_cws) {
    sub_76 = sub_58;
  } else {
    sub_76 = sub_18;
  };
  if (contrato_v_387) {
    sub_75 = sub_17;
  } else {
    sub_75 = sub_76;
  };
  if (contrato_v_388) {
    v_875 = sub_57;
  } else {
    v_875 = sub_75;
  };
  if (contrato_end_wash) {
    sub_74 = v_875;
  } else {
    sub_74 = sub_57;
  };
  if (contrato_start_wash) {
    sub_78 = sub_59;
  } else {
    sub_78 = sub_19;
  };
  if (contrato_v_387) {
    v_874 = sub_78;
  } else {
    v_874 = sub_76;
  };
  if (contrato_v_388) {
    sub_77 = v_874;
  } else {
    sub_77 = sub_17;
  };
  if (contrato_v_389) {
    sub_73 = sub_77;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (contrato_v_424) {
    v_876 = sub_9;
  } else {
    v_876 = sub_66;
  };
  if (contrato_rad_down1) {
    sub_65 = v_876;
  } else {
    sub_65 = sub_9;
  };
  if (contrato_v_425) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_878 = sub_64;
    v_877 = sub_42;
  } else {
    v_878 = sub_42;
    v_877 = sub_64;
  };
  if (contrato_push_janela) {
    v_879 = v_877;
  } else {
    v_879 = v_878;
  };
  if (contrato_cj) {
    sub_63 = v_879;
  } else {
    sub_63 = sub_64;
  };
  if (contrato_ck_10_1) {
    v_881 = sub_63;
    v_880 = sub_44;
  } else {
    v_881 = sub_44;
    v_880 = sub_63;
  };
  if (contrato_push_porta) {
    v_882 = v_880;
  } else {
    v_882 = v_881;
  };
  if (contrato_cp) {
    sub_62 = v_882;
  } else {
    sub_62 = sub_63;
  };
  if (contrato_v_329) {
    sub_2 = sub_62;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_79 = sub_62;
  } else {
    sub_79 = sub_4;
  };
  if (contrato_v_387) {
    sub_93 = sub_39;
  } else {
    sub_93 = sub_17;
  };
  if (contrato_v_388) {
    v_862 = sub_17;
    v_861 = sub_93;
  } else {
    v_862 = sub_93;
    v_861 = sub_17;
  };
  if (contrato_end_wash) {
    sub_92 = v_861;
  } else {
    sub_92 = v_862;
  };
  if (contrato_v_389) {
    sub_91 = sub_16;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (contrato_cold) {
    sub_89 = sub_90;
  } else {
    sub_89 = sub_14;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (contrato_v_424) {
    v_863 = sub_9;
  } else {
    v_863 = sub_85;
  };
  if (contrato_rad_down1) {
    sub_84 = v_863;
  } else {
    sub_84 = sub_9;
  };
  if (contrato_v_425) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_865 = sub_83;
    v_864 = sub_42;
  } else {
    v_865 = sub_42;
    v_864 = sub_83;
  };
  if (contrato_push_janela) {
    v_866 = v_864;
  } else {
    v_866 = v_865;
  };
  if (contrato_cj) {
    sub_82 = v_866;
  } else {
    sub_82 = sub_83;
  };
  if (contrato_ck_10_1) {
    v_868 = sub_82;
    v_867 = sub_44;
  } else {
    v_868 = sub_44;
    v_867 = sub_82;
  };
  if (contrato_push_porta) {
    v_869 = v_867;
  } else {
    v_869 = v_868;
  };
  if (contrato_cp) {
    sub_81 = v_869;
  } else {
    sub_81 = sub_82;
  };
  if (contrato_finish_oven) {
    v_856 = sub_13;
  } else {
    v_856 = sub_70;
  };
  if (contrato_tok) {
    sub_99 = sub_12;
  } else {
    sub_99 = v_856;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (contrato_v_424) {
    v_857 = sub_9;
  } else {
    v_857 = sub_97;
  };
  if (contrato_rad_down1) {
    sub_96 = v_857;
  } else {
    sub_96 = sub_9;
  };
  if (contrato_v_425) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_7;
  };
  if (contrato_ck_12_1) {
    v_859 = sub_95;
    v_858 = sub_42;
  } else {
    v_859 = sub_42;
    v_858 = sub_95;
  };
  if (contrato_push_janela) {
    v_860 = v_858;
  } else {
    v_860 = v_859;
  };
  if (contrato_cj) {
    sub_94 = v_860;
  } else {
    sub_94 = sub_95;
  };
  if (contrato_ck_10_1) {
    v_871 = sub_94;
    v_870 = sub_44;
  } else {
    v_871 = sub_44;
    v_870 = sub_94;
  };
  if (contrato_push_porta) {
    v_872 = v_870;
  } else {
    v_872 = v_871;
  };
  if (contrato_cp) {
    v_873 = v_872;
  } else {
    v_873 = sub_94;
  };
  if (contrato_v_330) {
    sub_80 = v_873;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_v_329) {
    v_908 = sub_80;
  } else {
    v_908 = sub_79;
  };
  if (contrato_ck_12_1) {
    v_851 = sub_7;
    v_850 = sub_42;
  } else {
    v_851 = sub_42;
    v_850 = sub_7;
  };
  if (contrato_push_janela) {
    v_852 = v_850;
  } else {
    v_852 = v_851;
  };
  if (contrato_cj) {
    sub_102 = v_852;
  } else {
    sub_102 = sub_7;
  };
  if (contrato_ck_10_1) {
    v_854 = sub_102;
    v_853 = sub_44;
  } else {
    v_854 = sub_44;
    v_853 = sub_102;
  };
  if (contrato_push_porta) {
    v_855 = v_853;
  } else {
    v_855 = v_854;
  };
  if (contrato_cp) {
    sub_101 = v_855;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_v_330) {
    sub_100 = sub_62;
  } else {
    sub_100 = sub_101;
  };
  if (contrato_v_329) {
    v_909 = sub_80;
  } else {
    v_909 = sub_100;
  };
  if (contrato_start_oven) {
    v_910 = v_908;
  } else {
    v_910 = v_909;
  };
  if (contrato_v_328) {
    v_911 = v_910;
  } else {
    v_911 = sub_1;
  };
  if (contrato_ck_12_1) {
    v_845 = sub_42;
    v = false;
  } else {
    v_845 = false;
    v = sub_42;
  };
  if (contrato_push_janela) {
    v_846 = v;
  } else {
    v_846 = v_845;
  };
  if (contrato_cj) {
    sub_104 = v_846;
  } else {
    sub_104 = sub_45;
  };
  if (contrato_ck_10_1) {
    v_848 = sub_104;
    v_847 = false;
  } else {
    v_848 = false;
    v_847 = sub_104;
  };
  if (contrato_push_porta) {
    v_849 = v_847;
  } else {
    v_849 = v_848;
  };
  if (contrato_cp) {
    sub_103 = v_849;
  } else {
    sub_103 = sub_104;
  };
  if (contrato_presenca) {
    sub_0 = v_911;
  } else {
    sub_0 = sub_103;
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
                                                                int contrato_v_425,
                                                                int contrato_v_424,
                                                                int contrato_pnr_8,
                                                                int contrato_ck_10_1,
                                                                int contrato_pnr_7,
                                                                int contrato_ck_12_1,
                                                                int contrato_pnr_6,
                                                                int contrato_ck_14_1,
                                                                int contrato_pnr_5,
                                                                int contrato_ck_16_1,
                                                                int contrato_pnr_4,
                                                                int contrato_ck_18_1,
                                                                int contrato_pnr_3,
                                                                int contrato_v_389,
                                                                int contrato_v_388,
                                                                int contrato_v_387,
                                                                int contrato_pnr_2,
                                                                int contrato_v_330,
                                                                int contrato_v_329,
                                                                int contrato_v_328,
                                                                int contrato_pnr_1,
                                                                int contrato_v_291,
                                                                int contrato_v_290,
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
  
  int v_959;
  int v_958;
  int v_957;
  int v_956;
  int v_955;
  int v_954;
  int v_953;
  int v_952;
  int v_951;
  int v_950;
  int v_949;
  int v_948;
  int v_947;
  int v_946;
  int v_945;
  int v_944;
  int v_943;
  int v_942;
  int v_941;
  int v_940;
  int v_939;
  int v_938;
  int v_937;
  int v_936;
  int v_935;
  int v_934;
  int v_933;
  int v_932;
  int v_931;
  int v_930;
  int v_929;
  int v_928;
  int v_927;
  int v_926;
  int v_925;
  int v_924;
  int v_923;
  int v_922;
  int v_921;
  int v_920;
  int v_919;
  int v_918;
  int v_917;
  int v_916;
  int v_915;
  int v_914;
  int v_913;
  int v_912;
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
  sub_19 = p_contrato_cws;
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
  if (contrato_v_424) {
    v_948 = sub_8;
  } else {
    v_948 = false;
  };
  if (contrato_rad_down1) {
    sub_21 = v_948;
  } else {
    sub_21 = sub_8;
  };
  if (contrato_v_425) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_950 = sub_6;
    v_949 = sub_20;
  } else {
    v_950 = sub_20;
    v_949 = sub_6;
  };
  if (contrato_push_janela) {
    v_951 = v_949;
  } else {
    v_951 = v_950;
  };
  if (contrato_cj) {
    sub_5 = v_951;
  } else {
    sub_5 = sub_6;
  };
  sub_23 = sub_20;
  sub_22 = sub_23;
  if (contrato_ck_10_1) {
    v_953 = sub_5;
    v_952 = sub_22;
  } else {
    v_953 = sub_22;
    v_952 = sub_5;
  };
  if (contrato_push_porta) {
    v_954 = v_952;
  } else {
    v_954 = v_953;
  };
  if (contrato_cp) {
    sub_4 = v_954;
  } else {
    sub_4 = sub_5;
  };
  if (contrato_comfort_input) {
    sub_38 = sub_19;
  } else {
    sub_38 = false;
  };
  if (contrato_v_291) {
    v_939 = sub_38;
    sub_37 = sub_18;
  } else {
    v_939 = false;
    sub_37 = sub_38;
  };
  if (contrato_v_290) {
    v_940 = v_939;
  } else {
    v_940 = sub_37;
  };
  if (contrato_eco_input) {
    sub_36 = sub_18;
  } else {
    sub_36 = v_940;
  };
  sub_35 = sub_36;
  if (contrato_v_387) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_16;
  };
  if (contrato_v_388) {
    v_942 = sub_16;
    v_941 = sub_34;
  } else {
    v_942 = sub_34;
    v_941 = sub_16;
  };
  if (contrato_end_wash) {
    sub_33 = v_941;
  } else {
    sub_33 = v_942;
  };
  if (contrato_v_389) {
    sub_32 = sub_15;
  } else {
    sub_32 = sub_33;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (contrato_finish_oven) {
    v_943 = sub_12;
  } else {
    v_943 = sub_30;
  };
  if (contrato_tok) {
    sub_29 = sub_11;
  } else {
    sub_29 = v_943;
  };
  sub_28 = sub_29;
  sub_27 = sub_28;
  if (contrato_v_424) {
    v_944 = sub_8;
  } else {
    v_944 = sub_27;
  };
  if (contrato_rad_down1) {
    sub_26 = v_944;
  } else {
    sub_26 = sub_8;
  };
  if (contrato_v_425) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_946 = sub_25;
    v_945 = sub_20;
  } else {
    v_946 = sub_20;
    v_945 = sub_25;
  };
  if (contrato_push_janela) {
    v_947 = v_945;
  } else {
    v_947 = v_946;
  };
  if (contrato_cj) {
    sub_24 = v_947;
  } else {
    sub_24 = sub_25;
  };
  if (contrato_ck_10_1) {
    v_956 = sub_24;
    v_955 = sub_22;
  } else {
    v_956 = sub_22;
    v_955 = sub_24;
  };
  if (contrato_push_porta) {
    v_957 = v_955;
  } else {
    v_957 = v_956;
  };
  if (contrato_cp) {
    v_958 = v_957;
  } else {
    v_958 = sub_24;
  };
  if (contrato_v_330) {
    sub_3 = v_958;
  } else {
    sub_3 = sub_4;
  };
  sub_56 = (contrato_comfort_input&&sub_19);
  if (contrato_v_291) {
    sub_55 = sub_18;
  } else {
    sub_55 = sub_56;
  };
  sub_57 = false;
  if (contrato_v_291) {
    v_929 = sub_56;
  } else {
    v_929 = sub_57;
  };
  if (contrato_v_290) {
    v_930 = v_929;
  } else {
    v_930 = sub_55;
  };
  if (contrato_eco_input) {
    sub_54 = sub_18;
  } else {
    sub_54 = v_930;
  };
  sub_53 = sub_54;
  if (contrato_v_387) {
    sub_52 = sub_16;
  } else {
    sub_52 = sub_53;
  };
  if (contrato_v_388) {
    v_931 = sub_35;
  } else {
    v_931 = sub_52;
  };
  if (contrato_end_wash) {
    sub_51 = v_931;
  } else {
    sub_51 = sub_35;
  };
  if (contrato_start_wash) {
    v_927 = sub_36;
  } else {
    v_927 = sub_17;
  };
  if (contrato_v_387) {
    v_928 = v_927;
  } else {
    v_928 = sub_53;
  };
  if (contrato_v_388) {
    sub_58 = v_928;
  } else {
    sub_58 = sub_16;
  };
  if (contrato_v_389) {
    sub_50 = sub_58;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (contrato_v_424) {
    v_932 = sub_8;
  } else {
    v_932 = sub_43;
  };
  if (contrato_rad_down1) {
    sub_42 = v_932;
  } else {
    sub_42 = sub_8;
  };
  if (contrato_v_425) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_934 = sub_41;
    v_933 = sub_20;
  } else {
    v_934 = sub_20;
    v_933 = sub_41;
  };
  if (contrato_push_janela) {
    v_935 = v_933;
  } else {
    v_935 = v_934;
  };
  if (contrato_cj) {
    sub_40 = v_935;
  } else {
    sub_40 = sub_41;
  };
  if (contrato_ck_10_1) {
    v_937 = sub_40;
    v_936 = sub_22;
  } else {
    v_937 = sub_22;
    v_936 = sub_40;
  };
  if (contrato_push_porta) {
    v_938 = v_936;
  } else {
    v_938 = v_937;
  };
  if (contrato_cp) {
    sub_39 = v_938;
  } else {
    sub_39 = sub_40;
  };
  if (contrato_v_329) {
    sub_2 = sub_39;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_60 = sub_39;
  } else {
    sub_60 = sub_4;
  };
  if (contrato_finish_oven) {
    v_917 = sub_12;
  } else {
    v_917 = sub_47;
  };
  if (contrato_tok) {
    sub_66 = sub_11;
  } else {
    sub_66 = v_917;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (contrato_v_424) {
    v_918 = sub_8;
  } else {
    v_918 = sub_64;
  };
  if (contrato_rad_down1) {
    sub_63 = v_918;
  } else {
    sub_63 = sub_8;
  };
  if (contrato_v_425) {
    sub_62 = sub_63;
  } else {
    sub_62 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_920 = sub_62;
    v_919 = sub_20;
  } else {
    v_920 = sub_20;
    v_919 = sub_62;
  };
  if (contrato_push_janela) {
    v_921 = v_919;
  } else {
    v_921 = v_920;
  };
  if (contrato_cj) {
    sub_61 = v_921;
  } else {
    sub_61 = sub_62;
  };
  if (contrato_ck_10_1) {
    v_923 = sub_61;
    v_922 = sub_22;
  } else {
    v_923 = sub_22;
    v_922 = sub_61;
  };
  if (contrato_push_porta) {
    v_924 = v_922;
  } else {
    v_924 = v_923;
  };
  if (contrato_cp) {
    v_925 = v_924;
  } else {
    v_925 = sub_61;
  };
  if (contrato_v_330) {
    v_926 = v_925;
  } else {
    v_926 = sub_4;
  };
  if (contrato_v_329) {
    sub_59 = v_926;
  } else {
    sub_59 = sub_60;
  };
  if (contrato_v_328) {
    v_959 = sub_59;
  } else {
    v_959 = sub_1;
  };
  if (contrato_ck_12_1) {
    v_912 = sub_20;
    v = false;
  } else {
    v_912 = false;
    v = sub_20;
  };
  if (contrato_push_janela) {
    v_913 = v;
  } else {
    v_913 = v_912;
  };
  if (contrato_cj) {
    sub_68 = v_913;
  } else {
    sub_68 = sub_23;
  };
  if (contrato_ck_10_1) {
    v_915 = sub_68;
    v_914 = false;
  } else {
    v_915 = false;
    v_914 = sub_68;
  };
  if (contrato_push_porta) {
    v_916 = v_914;
  } else {
    v_916 = v_915;
  };
  if (contrato_cp) {
    sub_67 = v_916;
  } else {
    sub_67 = sub_68;
  };
  if (contrato_presenca) {
    sub_0 = v_959;
  } else {
    sub_0 = sub_67;
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
                                                               int contrato_v_425,
                                                               int contrato_v_424,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_389,
                                                               int contrato_v_388,
                                                               int contrato_v_387,
                                                               int contrato_pnr_2,
                                                               int contrato_v_330,
                                                               int contrato_v_329,
                                                               int contrato_v_328,
                                                               int contrato_pnr_1,
                                                               int contrato_v_291,
                                                               int contrato_v_290,
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
  
  int v_1030;
  int v_1029;
  int v_1028;
  int v_1027;
  int v_1026;
  int v_1025;
  int v_1024;
  int v_1023;
  int v_1022;
  int v_1021;
  int v_1020;
  int v_1019;
  int v_1018;
  int v_1017;
  int v_1016;
  int v_1015;
  int v_1014;
  int v_1013;
  int v_1012;
  int v_1011;
  int v_1010;
  int v_1009;
  int v_1008;
  int v_1007;
  int v_1006;
  int v_1005;
  int v_1004;
  int v_1003;
  int v_1002;
  int v_1001;
  int v_1000;
  int v_999;
  int v_998;
  int v_997;
  int v_996;
  int v_995;
  int v_994;
  int v_993;
  int v_992;
  int v_991;
  int v_990;
  int v_989;
  int v_988;
  int v_987;
  int v_986;
  int v_985;
  int v_984;
  int v_983;
  int v_982;
  int v_981;
  int v_980;
  int v_979;
  int v_978;
  int v_977;
  int v_976;
  int v_975;
  int v_974;
  int v_973;
  int v_972;
  int v_971;
  int v_970;
  int v_969;
  int v_968;
  int v_967;
  int v_966;
  int v_965;
  int v_964;
  int v_963;
  int v_962;
  int v_961;
  int v_960;
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
  sub_19 = p_contrato_cp;
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
  if (contrato_v_424) {
    v_1021 = sub_8;
  } else {
    v_1021 = false;
  };
  if (contrato_rad_down1) {
    sub_21 = v_1021;
  } else {
    sub_21 = sub_8;
  };
  if (contrato_v_425) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1023 = sub_6;
    v_1022 = sub_20;
  } else {
    v_1023 = sub_20;
    v_1022 = sub_6;
  };
  if (contrato_push_janela) {
    v_1024 = v_1022;
  } else {
    v_1024 = v_1023;
  };
  if (contrato_cj) {
    sub_5 = v_1024;
  } else {
    sub_5 = sub_6;
  };
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
  if (contrato_v_424) {
    v_1017 = sub_8;
  } else {
    v_1017 = sub_25;
  };
  if (contrato_rad_down1) {
    sub_24 = v_1017;
  } else {
    sub_24 = sub_8;
  };
  if (contrato_v_425) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1019 = sub_23;
    v_1018 = sub_20;
  } else {
    v_1019 = sub_20;
    v_1018 = sub_23;
  };
  if (contrato_push_janela) {
    v_1020 = v_1018;
  } else {
    v_1020 = v_1019;
  };
  if (contrato_cj) {
    sub_22 = v_1020;
  } else {
    sub_22 = sub_23;
  };
  if (contrato_ck_10_1) {
    v_1026 = sub_5;
    v_1025 = sub_22;
  } else {
    v_1026 = sub_22;
    v_1025 = sub_5;
  };
  if (contrato_push_porta) {
    sub_4 = v_1025;
  } else {
    sub_4 = v_1026;
  };
  if (contrato_comfort_input) {
    sub_50 = sub_19;
  } else {
    sub_50 = false;
  };
  if (contrato_v_291) {
    v_1008 = sub_50;
    sub_49 = sub_18;
  } else {
    v_1008 = false;
    sub_49 = sub_50;
  };
  if (contrato_v_290) {
    v_1009 = v_1008;
  } else {
    v_1009 = sub_49;
  };
  if (contrato_eco_input) {
    sub_48 = sub_18;
  } else {
    sub_48 = v_1009;
  };
  sub_47 = sub_48;
  if (contrato_v_387) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_16;
  };
  if (contrato_v_388) {
    v_1011 = sub_16;
    v_1010 = sub_46;
  } else {
    v_1011 = sub_46;
    v_1010 = sub_16;
  };
  if (contrato_end_wash) {
    sub_45 = v_1010;
  } else {
    sub_45 = v_1011;
  };
  if (contrato_v_389) {
    sub_44 = sub_15;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (contrato_finish_oven) {
    v_1012 = sub_12;
  } else {
    v_1012 = sub_42;
  };
  if (contrato_tok) {
    sub_41 = sub_11;
  } else {
    sub_41 = v_1012;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (contrato_v_424) {
    v_1013 = sub_8;
  } else {
    v_1013 = sub_39;
  };
  if (contrato_rad_down1) {
    sub_38 = v_1013;
  } else {
    sub_38 = sub_8;
  };
  if (contrato_v_425) {
    sub_37 = sub_38;
  } else {
    sub_37 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1015 = sub_37;
    v_1014 = sub_20;
  } else {
    v_1015 = sub_20;
    v_1014 = sub_37;
  };
  if (contrato_push_janela) {
    v_1016 = v_1014;
  } else {
    v_1016 = v_1015;
  };
  if (contrato_cj) {
    sub_36 = v_1016;
  } else {
    sub_36 = sub_37;
  };
  v_998 = !(contrato_comfort_input);
  sub_65 = (v_998&&false);
  if (contrato_v_291) {
    v_999 = sub_65;
    sub_64 = sub_35;
  } else {
    v_999 = false;
    sub_64 = sub_65;
  };
  if (contrato_v_290) {
    v_1000 = v_999;
  } else {
    v_1000 = sub_64;
  };
  if (contrato_eco_input) {
    sub_63 = sub_35;
  } else {
    sub_63 = v_1000;
  };
  sub_62 = sub_63;
  if (contrato_v_387) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_33;
  };
  if (contrato_v_388) {
    v_1002 = sub_33;
    v_1001 = sub_61;
  } else {
    v_1002 = sub_61;
    v_1001 = sub_33;
  };
  if (contrato_end_wash) {
    sub_60 = v_1001;
  } else {
    sub_60 = v_1002;
  };
  if (contrato_v_389) {
    sub_59 = sub_32;
  } else {
    sub_59 = sub_60;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  if (contrato_finish_oven) {
    v_1003 = sub_29;
  } else {
    v_1003 = sub_57;
  };
  if (contrato_tok) {
    sub_56 = sub_28;
  } else {
    sub_56 = v_1003;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (contrato_v_424) {
    v_1004 = sub_8;
  } else {
    v_1004 = sub_54;
  };
  if (contrato_rad_down1) {
    sub_53 = v_1004;
  } else {
    sub_53 = sub_8;
  };
  if (contrato_v_425) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1006 = sub_52;
    v_1005 = sub_20;
  } else {
    v_1006 = sub_20;
    v_1005 = sub_52;
  };
  if (contrato_push_janela) {
    v_1007 = v_1005;
  } else {
    v_1007 = v_1006;
  };
  if (contrato_cj) {
    sub_51 = v_1007;
  } else {
    sub_51 = sub_52;
  };
  if (contrato_ck_10_1) {
    v_1028 = sub_36;
    v_1027 = sub_51;
  } else {
    v_1028 = sub_51;
    v_1027 = sub_36;
  };
  if (contrato_push_porta) {
    v_1029 = v_1027;
  } else {
    v_1029 = v_1028;
  };
  if (contrato_v_330) {
    sub_3 = v_1029;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_388) {
    v_991 = sub_47;
  } else {
    v_991 = sub_16;
  };
  if (contrato_end_wash) {
    sub_78 = v_991;
  } else {
    sub_78 = sub_47;
  };
  if (contrato_start_wash) {
    v_989 = sub_48;
  } else {
    v_989 = sub_17;
  };
  if (contrato_v_387) {
    v_990 = v_989;
  } else {
    v_990 = sub_16;
  };
  if (contrato_v_388) {
    sub_79 = v_990;
  } else {
    sub_79 = sub_16;
  };
  if (contrato_v_389) {
    sub_77 = sub_79;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  if (contrato_v_424) {
    v_992 = sub_8;
  } else {
    v_992 = sub_70;
  };
  if (contrato_rad_down1) {
    sub_69 = v_992;
  } else {
    sub_69 = sub_8;
  };
  if (contrato_v_425) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_994 = sub_68;
    v_993 = sub_20;
  } else {
    v_994 = sub_20;
    v_993 = sub_68;
  };
  if (contrato_push_janela) {
    v_995 = v_993;
  } else {
    v_995 = v_994;
  };
  if (contrato_cj) {
    sub_67 = v_995;
  } else {
    sub_67 = sub_68;
  };
  if (contrato_v_388) {
    v_984 = sub_62;
  } else {
    v_984 = sub_33;
  };
  if (contrato_end_wash) {
    sub_91 = v_984;
  } else {
    sub_91 = sub_62;
  };
  if (contrato_start_wash) {
    v_982 = sub_63;
  } else {
    v_982 = sub_34;
  };
  if (contrato_v_387) {
    v_983 = v_982;
  } else {
    v_983 = sub_33;
  };
  if (contrato_v_388) {
    sub_92 = v_983;
  } else {
    sub_92 = sub_33;
  };
  if (contrato_v_389) {
    sub_90 = sub_92;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (contrato_v_424) {
    v_985 = sub_8;
  } else {
    v_985 = sub_83;
  };
  if (contrato_rad_down1) {
    sub_82 = v_985;
  } else {
    sub_82 = sub_8;
  };
  if (contrato_v_425) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_987 = sub_81;
    v_986 = sub_20;
  } else {
    v_987 = sub_20;
    v_986 = sub_81;
  };
  if (contrato_push_janela) {
    v_988 = v_986;
  } else {
    v_988 = v_987;
  };
  if (contrato_cj) {
    sub_80 = v_988;
  } else {
    sub_80 = sub_81;
  };
  if (contrato_ck_10_1) {
    v_997 = sub_67;
    v_996 = sub_80;
  } else {
    v_997 = sub_80;
    v_996 = sub_67;
  };
  if (contrato_push_porta) {
    sub_66 = v_996;
  } else {
    sub_66 = v_997;
  };
  if (contrato_v_329) {
    sub_2 = sub_66;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_94 = sub_66;
  } else {
    sub_94 = sub_4;
  };
  if (contrato_finish_oven) {
    v_973 = sub_12;
  } else {
    v_973 = sub_74;
  };
  if (contrato_tok) {
    sub_100 = sub_11;
  } else {
    sub_100 = v_973;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (contrato_v_424) {
    v_974 = sub_8;
  } else {
    v_974 = sub_98;
  };
  if (contrato_rad_down1) {
    sub_97 = v_974;
  } else {
    sub_97 = sub_8;
  };
  if (contrato_v_425) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_976 = sub_96;
    v_975 = sub_20;
  } else {
    v_976 = sub_20;
    v_975 = sub_96;
  };
  if (contrato_push_janela) {
    v_977 = v_975;
  } else {
    v_977 = v_976;
  };
  if (contrato_cj) {
    sub_95 = v_977;
  } else {
    sub_95 = sub_96;
  };
  if (contrato_finish_oven) {
    v_968 = sub_29;
  } else {
    v_968 = sub_87;
  };
  if (contrato_tok) {
    sub_106 = sub_28;
  } else {
    sub_106 = v_968;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  if (contrato_v_424) {
    v_969 = sub_8;
  } else {
    v_969 = sub_104;
  };
  if (contrato_rad_down1) {
    sub_103 = v_969;
  } else {
    sub_103 = sub_8;
  };
  if (contrato_v_425) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_971 = sub_102;
    v_970 = sub_20;
  } else {
    v_971 = sub_20;
    v_970 = sub_102;
  };
  if (contrato_push_janela) {
    v_972 = v_970;
  } else {
    v_972 = v_971;
  };
  if (contrato_cj) {
    sub_101 = v_972;
  } else {
    sub_101 = sub_102;
  };
  if (contrato_ck_10_1) {
    v_979 = sub_95;
    v_978 = sub_101;
  } else {
    v_979 = sub_101;
    v_978 = sub_95;
  };
  if (contrato_push_porta) {
    v_980 = v_978;
  } else {
    v_980 = v_979;
  };
  if (contrato_v_330) {
    v_981 = v_980;
  } else {
    v_981 = sub_4;
  };
  if (contrato_v_329) {
    sub_93 = v_981;
  } else {
    sub_93 = sub_94;
  };
  if (contrato_v_328) {
    v_1030 = sub_93;
  } else {
    v_1030 = sub_1;
  };
  if (contrato_ck_12_1) {
    v_964 = sub_20;
    v_963 = false;
  } else {
    v_964 = false;
    v_963 = sub_20;
  };
  if (contrato_push_janela) {
    v_965 = v_963;
  } else {
    v_965 = v_964;
  };
  if (contrato_cj) {
    sub_108 = v_965;
  } else {
    sub_108 = sub_20;
  };
  sub_112 = sub_25;
  sub_111 = sub_112;
  if (contrato_v_424) {
    v = sub_25;
  } else {
    v = false;
  };
  if (contrato_rad_down1) {
    sub_113 = v;
  } else {
    sub_113 = sub_25;
  };
  if (contrato_v_425) {
    sub_110 = sub_113;
  } else {
    sub_110 = sub_111;
  };
  if (contrato_ck_12_1) {
    v_961 = sub_110;
    v_960 = false;
  } else {
    v_961 = false;
    v_960 = sub_110;
  };
  if (contrato_push_janela) {
    v_962 = v_960;
  } else {
    v_962 = v_961;
  };
  if (contrato_cj) {
    sub_109 = v_962;
  } else {
    sub_109 = sub_110;
  };
  if (contrato_ck_10_1) {
    v_967 = sub_108;
    v_966 = sub_109;
  } else {
    v_967 = sub_109;
    v_966 = sub_108;
  };
  if (contrato_push_porta) {
    sub_107 = v_966;
  } else {
    sub_107 = v_967;
  };
  if (contrato_presenca) {
    sub_0 = v_1030;
  } else {
    sub_0 = sub_107;
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
                                                               int contrato_v_425,
                                                               int contrato_v_424,
                                                               int contrato_pnr_8,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_7,
                                                               int contrato_ck_12_1,
                                                               int contrato_pnr_6,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_5,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr_4,
                                                               int contrato_ck_18_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_389,
                                                               int contrato_v_388,
                                                               int contrato_v_387,
                                                               int contrato_pnr_2,
                                                               int contrato_v_330,
                                                               int contrato_v_329,
                                                               int contrato_v_328,
                                                               int contrato_pnr_1,
                                                               int contrato_v_291,
                                                               int contrato_v_290,
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
  
  int v_1069;
  int v_1068;
  int v_1067;
  int v_1066;
  int v_1065;
  int v_1064;
  int v_1063;
  int v_1062;
  int v_1061;
  int v_1060;
  int v_1059;
  int v_1058;
  int v_1057;
  int v_1056;
  int v_1055;
  int v_1054;
  int v_1053;
  int v_1052;
  int v_1051;
  int v_1050;
  int v_1049;
  int v_1048;
  int v_1047;
  int v_1046;
  int v_1045;
  int v_1044;
  int v_1043;
  int v_1042;
  int v_1041;
  int v_1040;
  int v_1039;
  int v_1038;
  int v_1037;
  int v_1036;
  int v_1035;
  int v_1034;
  int v_1033;
  int v_1032;
  int v_1031;
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
  sub_19 = p_contrato_cj;
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
  sub_32 = false;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (contrato_v_424) {
    v_1066 = sub_8;
  } else {
    v_1066 = sub_22;
  };
  if (contrato_rad_down1) {
    sub_21 = v_1066;
  } else {
    sub_21 = sub_8;
  };
  if (contrato_v_425) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1068 = sub_6;
    v_1067 = sub_20;
  } else {
    v_1068 = sub_20;
    v_1067 = sub_6;
  };
  if (contrato_push_janela) {
    sub_5 = v_1067;
  } else {
    sub_5 = v_1068;
  };
  sub_4 = sub_5;
  if (contrato_comfort_input) {
    sub_47 = sub_19;
  } else {
    sub_47 = false;
  };
  if (contrato_v_291) {
    v_1058 = sub_47;
    sub_46 = sub_18;
  } else {
    v_1058 = false;
    sub_46 = sub_47;
  };
  if (contrato_v_290) {
    v_1059 = v_1058;
  } else {
    v_1059 = sub_46;
  };
  if (contrato_eco_input) {
    sub_45 = sub_18;
  } else {
    sub_45 = v_1059;
  };
  sub_44 = sub_45;
  if (contrato_v_387) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_16;
  };
  if (contrato_v_388) {
    v_1061 = sub_16;
    v_1060 = sub_43;
  } else {
    v_1061 = sub_43;
    v_1060 = sub_16;
  };
  if (contrato_end_wash) {
    sub_42 = v_1060;
  } else {
    sub_42 = v_1061;
  };
  if (contrato_v_389) {
    sub_41 = sub_15;
  } else {
    sub_41 = sub_42;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (contrato_finish_oven) {
    v_1062 = sub_12;
  } else {
    v_1062 = sub_39;
  };
  if (contrato_tok) {
    sub_38 = sub_11;
  } else {
    sub_38 = v_1062;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (contrato_v_424) {
    v_1063 = sub_8;
  } else {
    v_1063 = sub_36;
  };
  if (contrato_rad_down1) {
    sub_35 = v_1063;
  } else {
    sub_35 = sub_8;
  };
  if (contrato_v_425) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_6;
  };
  v_1051 = !(contrato_comfort_input);
  sub_61 = (v_1051&&false);
  if (contrato_v_291) {
    v_1052 = sub_61;
    sub_60 = sub_32;
  } else {
    v_1052 = false;
    sub_60 = sub_61;
  };
  if (contrato_v_290) {
    v_1053 = v_1052;
  } else {
    v_1053 = sub_60;
  };
  if (contrato_eco_input) {
    sub_59 = sub_32;
  } else {
    sub_59 = v_1053;
  };
  sub_58 = sub_59;
  if (contrato_v_387) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_30;
  };
  if (contrato_v_388) {
    v_1055 = sub_30;
    v_1054 = sub_57;
  } else {
    v_1055 = sub_57;
    v_1054 = sub_30;
  };
  if (contrato_end_wash) {
    sub_56 = v_1054;
  } else {
    sub_56 = v_1055;
  };
  if (contrato_v_389) {
    sub_55 = sub_29;
  } else {
    sub_55 = sub_56;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (contrato_finish_oven) {
    v_1056 = sub_26;
  } else {
    v_1056 = sub_53;
  };
  if (contrato_tok) {
    sub_52 = sub_25;
  } else {
    sub_52 = v_1056;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (contrato_v_424) {
    v_1057 = sub_8;
  } else {
    v_1057 = sub_50;
  };
  if (contrato_rad_down1) {
    sub_49 = v_1057;
  } else {
    sub_49 = sub_8;
  };
  if (contrato_v_425) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1065 = sub_34;
    v_1064 = sub_48;
  } else {
    v_1065 = sub_48;
    v_1064 = sub_34;
  };
  if (contrato_push_janela) {
    sub_33 = v_1064;
  } else {
    sub_33 = v_1065;
  };
  if (contrato_v_330) {
    sub_3 = sub_33;
  } else {
    sub_3 = sub_4;
  };
  if (contrato_v_388) {
    v_1047 = sub_44;
  } else {
    v_1047 = sub_16;
  };
  if (contrato_end_wash) {
    sub_74 = v_1047;
  } else {
    sub_74 = sub_44;
  };
  if (contrato_start_wash) {
    v_1045 = sub_45;
  } else {
    v_1045 = sub_17;
  };
  if (contrato_v_387) {
    v_1046 = v_1045;
  } else {
    v_1046 = sub_16;
  };
  if (contrato_v_388) {
    sub_75 = v_1046;
  } else {
    sub_75 = sub_16;
  };
  if (contrato_v_389) {
    sub_73 = sub_75;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (contrato_v_424) {
    v_1048 = sub_8;
  } else {
    v_1048 = sub_66;
  };
  if (contrato_rad_down1) {
    sub_65 = v_1048;
  } else {
    sub_65 = sub_8;
  };
  if (contrato_v_425) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_6;
  };
  if (contrato_v_388) {
    v_1043 = sub_58;
  } else {
    v_1043 = sub_30;
  };
  if (contrato_end_wash) {
    sub_86 = v_1043;
  } else {
    sub_86 = sub_58;
  };
  if (contrato_start_wash) {
    v_1041 = sub_59;
  } else {
    v_1041 = sub_31;
  };
  if (contrato_v_387) {
    v_1042 = v_1041;
  } else {
    v_1042 = sub_30;
  };
  if (contrato_v_388) {
    sub_87 = v_1042;
  } else {
    sub_87 = sub_30;
  };
  if (contrato_v_389) {
    sub_85 = sub_87;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  if (contrato_v_424) {
    v_1044 = sub_8;
  } else {
    v_1044 = sub_78;
  };
  if (contrato_rad_down1) {
    sub_77 = v_1044;
  } else {
    sub_77 = sub_8;
  };
  if (contrato_v_425) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1050 = sub_64;
    v_1049 = sub_76;
  } else {
    v_1050 = sub_76;
    v_1049 = sub_64;
  };
  if (contrato_push_janela) {
    sub_63 = v_1049;
  } else {
    sub_63 = v_1050;
  };
  sub_62 = sub_63;
  if (contrato_v_329) {
    sub_2 = sub_62;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (contrato_v_330) {
    sub_89 = sub_62;
  } else {
    sub_89 = sub_4;
  };
  if (contrato_finish_oven) {
    v_1036 = sub_12;
  } else {
    v_1036 = sub_70;
  };
  if (contrato_tok) {
    sub_95 = sub_11;
  } else {
    sub_95 = v_1036;
  };
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (contrato_v_424) {
    v_1037 = sub_8;
  } else {
    v_1037 = sub_93;
  };
  if (contrato_rad_down1) {
    sub_92 = v_1037;
  } else {
    sub_92 = sub_8;
  };
  if (contrato_v_425) {
    sub_91 = sub_92;
  } else {
    sub_91 = sub_6;
  };
  if (contrato_finish_oven) {
    v_1034 = sub_26;
  } else {
    v_1034 = sub_82;
  };
  if (contrato_tok) {
    sub_100 = sub_25;
  } else {
    sub_100 = v_1034;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  if (contrato_v_424) {
    v_1035 = sub_8;
  } else {
    v_1035 = sub_98;
  };
  if (contrato_rad_down1) {
    sub_97 = v_1035;
  } else {
    sub_97 = sub_8;
  };
  if (contrato_v_425) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_6;
  };
  if (contrato_ck_12_1) {
    v_1039 = sub_91;
    v_1038 = sub_96;
  } else {
    v_1039 = sub_96;
    v_1038 = sub_91;
  };
  if (contrato_push_janela) {
    sub_90 = v_1038;
  } else {
    sub_90 = v_1039;
  };
  if (contrato_v_330) {
    v_1040 = sub_90;
  } else {
    v_1040 = sub_4;
  };
  if (contrato_v_329) {
    sub_88 = v_1040;
  } else {
    sub_88 = sub_89;
  };
  if (contrato_v_328) {
    v_1069 = sub_88;
  } else {
    v_1069 = sub_1;
  };
  if (contrato_v_424) {
    v_1031 = sub_8;
  } else {
    v_1031 = false;
  };
  if (contrato_rad_down1) {
    sub_104 = v_1031;
  } else {
    sub_104 = sub_8;
  };
  if (contrato_v_425) {
    sub_103 = sub_104;
  } else {
    sub_103 = sub_6;
  };
  sub_107 = sub_22;
  sub_106 = sub_107;
  if (contrato_v_424) {
    v = sub_22;
  } else {
    v = false;
  };
  if (contrato_rad_down1) {
    sub_108 = v;
  } else {
    sub_108 = sub_22;
  };
  if (contrato_v_425) {
    sub_105 = sub_108;
  } else {
    sub_105 = sub_106;
  };
  if (contrato_ck_12_1) {
    v_1033 = sub_103;
    v_1032 = sub_105;
  } else {
    v_1033 = sub_105;
    v_1032 = sub_103;
  };
  if (contrato_push_janela) {
    sub_102 = v_1032;
  } else {
    sub_102 = v_1033;
  };
  sub_101 = sub_102;
  if (contrato_presenca) {
    sub_0 = v_1069;
  } else {
    sub_0 = sub_101;
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
                                                   int contrato_v_425,
                                                   int contrato_v_424,
                                                   int contrato_pnr_8,
                                                   int contrato_ck_10_1,
                                                   int contrato_pnr_7,
                                                   int contrato_ck_12_1,
                                                   int contrato_pnr_6,
                                                   int contrato_ck_14_1,
                                                   int contrato_pnr_5,
                                                   int contrato_ck_16_1,
                                                   int contrato_pnr_4,
                                                   int contrato_ck_18_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_389,
                                                   int contrato_v_388,
                                                   int contrato_v_387,
                                                   int contrato_pnr_2,
                                                   int contrato_v_330,
                                                   int contrato_v_329,
                                                   int contrato_v_328,
                                                   int contrato_pnr_1,
                                                   int contrato_v_291,
                                                   int contrato_v_290,
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
                                                            contrato_v_425,
                                                            contrato_v_424,
                                                            contrato_pnr_8,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_3,
                                                            contrato_v_389,
                                                            contrato_v_388,
                                                            contrato_v_387,
                                                            contrato_pnr_2,
                                                            contrato_v_330,
                                                            contrato_v_329,
                                                            contrato_v_328,
                                                            contrato_pnr_1,
                                                            contrato_v_291,
                                                            contrato_v_290,
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
                                                            contrato_v_425,
                                                            contrato_v_424,
                                                            contrato_pnr_8,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_3,
                                                            contrato_v_389,
                                                            contrato_v_388,
                                                            contrato_v_387,
                                                            contrato_pnr_2,
                                                            contrato_v_330,
                                                            contrato_v_329,
                                                            contrato_v_328,
                                                            contrato_pnr_1,
                                                            contrato_v_291,
                                                            contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                            contrato_v_425,
                                                            contrato_v_424,
                                                            contrato_pnr_8,
                                                            contrato_ck_10_1,
                                                            contrato_pnr_7,
                                                            contrato_ck_12_1,
                                                            contrato_pnr_6,
                                                            contrato_ck_14_1,
                                                            contrato_pnr_5,
                                                            contrato_ck_16_1,
                                                            contrato_pnr_4,
                                                            contrato_ck_18_1,
                                                            contrato_pnr_3,
                                                            contrato_v_389,
                                                            contrato_v_388,
                                                            contrato_v_387,
                                                            contrato_pnr_2,
                                                            contrato_v_330,
                                                            contrato_v_329,
                                                            contrato_v_328,
                                                            contrato_pnr_1,
                                                            contrato_v_291,
                                                            contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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
                                                             contrato_v_425,
                                                             contrato_v_424,
                                                             contrato_pnr_8,
                                                             contrato_ck_10_1,
                                                             contrato_pnr_7,
                                                             contrato_ck_12_1,
                                                             contrato_pnr_6,
                                                             contrato_ck_14_1,
                                                             contrato_pnr_5,
                                                             contrato_ck_16_1,
                                                             contrato_pnr_4,
                                                             contrato_ck_18_1,
                                                             contrato_pnr_3,
                                                             contrato_v_389,
                                                             contrato_v_388,
                                                             contrato_v_387,
                                                             contrato_pnr_2,
                                                             contrato_v_330,
                                                             contrato_v_329,
                                                             contrato_v_328,
                                                             contrato_pnr_1,
                                                             contrato_v_291,
                                                             contrato_v_290,
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

