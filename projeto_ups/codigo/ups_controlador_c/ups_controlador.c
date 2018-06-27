/* --- Generated the 27/6/2018 at 7:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_102 = false;
  self->v_103 = false;
}

void Ups_controlador__computador_step(int c_atx, int off_atx, int t,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int ns_St_Boot_2_0;
  int ns_St_Boot_2_1;
  int ns_St_Off_2_0;
  int ns_St_Off_2_1;
  int ns_St_Rlevel4_2_0;
  int ns_St_Rlevel4_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Boot;
  int ns_St_Boot_2;
  int ns_St_Boot_1;
  int estado_St_Boot;
  int atuador_St_Boot;
  int nr_St_Off;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int estado_St_Off;
  int atuador_St_Off;
  int nr_St_Rlevel4;
  int ns_St_Rlevel4_2;
  int ns_St_Rlevel4_1;
  int estado_St_Rlevel4;
  int atuador_St_Rlevel4;
  int ck_1_2;
  int ck_1_1;
  int v_2_0;
  int v_2_1;
  int v_1;
  int v_2;
  int v_1_1;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int s_St_Boot_2_0;
  int s_St_Boot_2_1;
  int s_St_Off_2_0;
  int s_St_Off_2_1;
  int s_St_Rlevel4_2_0;
  int s_St_Rlevel4_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_Boot;
  int s_St_Boot_2;
  int s_St_Boot_1;
  int r_St_Off;
  int s_St_Off_2;
  int s_St_Off_1;
  int r_St_Rlevel4;
  int s_St_Rlevel4_2;
  int s_St_Rlevel4_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_102;
  ck_2 = self->v_103;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (off_atx) {
        v_1 = true;
      } else {
        v_1 = self->pnr;
      };
      if (t) {
        r_St_Boot = true;
      } else {
        r_St_Boot = v_1;
      };
      v_108 = r_St_Boot;
      if (off_atx) {
        v_1_1 = true;
      } else {
        v_1_1 = true;
      };
      if (t) {
        s_St_Boot_1 = false;
      } else {
        s_St_Boot_1 = v_1_1;
      };
      v_104 = s_St_Boot_1;
      if (off_atx) {
        v_2 = false;
      } else {
        v_2 = true;
      };
      if (t) {
        s_St_Boot_2 = false;
      } else {
        s_St_Boot_2 = v_2;
      };
      v_105 = s_St_Boot_2;
    } else {
      if (c_atx) {
        r_St_Off = true;
        s_St_Off_1 = true;
        s_St_Off_2 = true;
      } else {
        r_St_Off = self->pnr;
        s_St_Off_1 = true;
        s_St_Off_2 = false;
      };
      v_108 = r_St_Off;
      v_104 = s_St_Off_1;
      v_105 = s_St_Off_2;
    };
    s_1 = v_104;
    s_2 = v_105;
    r = v_108;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_109 = true;
      v_106 = true;
      v_107 = true;
    } else {
      if (c_atx) {
        r_St_Rlevel4 = true;
      } else {
        r_St_Rlevel4 = self->pnr;
      };
      v_109 = r_St_Rlevel4;
      if (c_atx) {
        s_St_Rlevel4_1 = true;
      } else {
        s_St_Rlevel4_1 = false;
      };
      v_106 = s_St_Rlevel4_1;
      if (c_atx) {
        s_St_Rlevel4_2 = false;
      } else {
        s_St_Rlevel4_2 = false;
      };
      v_107 = s_St_Rlevel4_2;
      if (s_St_Rlevel4_1) {
        s_St_Rlevel4_2_1 = s_St_Rlevel4_2;
      } else {
        s_St_Rlevel4_2_0 = s_St_Rlevel4_2;
      };
    };
    s_1 = v_106;
    s_2 = v_107;
    r = v_109;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      estado_St_Boot = 1;
      v_94 = estado_St_Boot;
      atuador_St_Boot = true;
      v_92 = atuador_St_Boot;
      nr_St_Boot = false;
      v_100 = nr_St_Boot;
      ns_St_Boot_1 = true;
      v_96 = ns_St_Boot_1;
      ns_St_Boot_2 = true;
      v_97 = ns_St_Boot_2;
    } else {
      estado_St_Off = 0;
      atuador_St_Off = false;
      nr_St_Off = false;
      ns_St_Off_1 = true;
      ns_St_Off_2 = false;
      v_94 = estado_St_Off;
      v_92 = atuador_St_Off;
      v_100 = nr_St_Off;
      v_96 = ns_St_Off_1;
      v_97 = ns_St_Off_2;
    };
    _out->atuador = v_92;
    _out->estado = v_94;
    ns_1 = v_96;
    ns_2 = v_97;
    nr = v_100;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_95 = 0;
      v_93 = true;
      v_101 = true;
      v_98 = true;
      v_99 = true;
    } else {
      estado_St_Rlevel4 = 2;
      v_95 = estado_St_Rlevel4;
      atuador_St_Rlevel4 = true;
      v_93 = atuador_St_Rlevel4;
      nr_St_Rlevel4 = false;
      v_101 = nr_St_Rlevel4;
      ns_St_Rlevel4_1 = false;
      v_98 = ns_St_Rlevel4_1;
      ns_St_Rlevel4_2 = false;
      v_99 = ns_St_Rlevel4_2;
      if (ns_St_Rlevel4_1) {
        ns_St_Rlevel4_2_1 = ns_St_Rlevel4_2;
      } else {
        ns_St_Rlevel4_2_0 = ns_St_Rlevel4_2;
      };
    };
    _out->atuador = v_93;
    _out->estado = v_95;
    ns_1 = v_98;
    ns_2 = v_99;
    nr = v_101;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (ns_St_Boot_1) {
        ns_St_Boot_2_1 = ns_St_Boot_2;
      } else {
        ns_St_Boot_2_0 = ns_St_Boot_2;
      };
    } else {
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1_3) {
    if (ck_2_1) {
      if (v_1_1) {
        v_2_1 = v_2;
      } else {
        v_2_0 = v_2;
      };
      if (s_St_Boot_1) {
        s_St_Boot_2_1 = s_St_Boot_2;
      } else {
        s_St_Boot_2_0 = s_St_Boot_2;
      };
    } else {
      if (s_St_Off_1) {
        s_St_Off_2_1 = s_St_Off_2;
      } else {
        s_St_Off_2_0 = s_St_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_102 = ns_1;
  self->v_103 = ns_2;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_145 = true;
  self->v_146 = false;
  self->v_147 = false;
}

void Ups_controlador__bateria_step(int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int ns_St_1_Descarregado_2_0;
  int ns_St_1_Descarregado_3_0_0;
  int ns_St_1_Descarregado_3_0_1;
  int ns_St_1_Descarregado_2_1;
  int ns_St_1_Descarregado_3_1_0;
  int ns_St_1_Descarregado_3_1_1;
  int estado_bat_St_1_Descarregado_2_0;
  int estado_bat_St_1_Descarregado_3_0_0;
  int estado_bat_St_1_Descarregado_3_0_1;
  int estado_bat_St_1_Descarregado_2_1;
  int estado_bat_St_1_Descarregado_3_1_0;
  int estado_bat_St_1_Descarregado_3_1_1;
  int ns_St_1_Limiar2_2_0;
  int ns_St_1_Limiar2_3_0_0;
  int ns_St_1_Limiar2_3_0_1;
  int ns_St_1_Limiar2_2_1;
  int ns_St_1_Limiar2_3_1_0;
  int ns_St_1_Limiar2_3_1_1;
  int estado_bat_St_1_Limiar2_2_0;
  int estado_bat_St_1_Limiar2_3_0_0;
  int estado_bat_St_1_Limiar2_3_0_1;
  int estado_bat_St_1_Limiar2_2_1;
  int estado_bat_St_1_Limiar2_3_1_0;
  int estado_bat_St_1_Limiar2_3_1_1;
  int ns_St_1_Limiar1_2_0;
  int ns_St_1_Limiar1_3_0_0;
  int ns_St_1_Limiar1_3_0_1;
  int ns_St_1_Limiar1_2_1;
  int ns_St_1_Limiar1_3_1_0;
  int ns_St_1_Limiar1_3_1_1;
  int estado_bat_St_1_Limiar1_2_0;
  int estado_bat_St_1_Limiar1_3_0_0;
  int estado_bat_St_1_Limiar1_3_0_1;
  int estado_bat_St_1_Limiar1_2_1;
  int estado_bat_St_1_Limiar1_3_1_0;
  int estado_bat_St_1_Limiar1_3_1_1;
  int ns_St_1_Carregado_2_0;
  int ns_St_1_Carregado_3_0_0;
  int ns_St_1_Carregado_3_0_1;
  int ns_St_1_Carregado_2_1;
  int ns_St_1_Carregado_3_1_0;
  int ns_St_1_Carregado_3_1_1;
  int estado_bat_St_1_Carregado_2_0;
  int estado_bat_St_1_Carregado_3_0_0;
  int estado_bat_St_1_Carregado_3_0_1;
  int estado_bat_St_1_Carregado_2_1;
  int estado_bat_St_1_Carregado_3_1_0;
  int estado_bat_St_1_Carregado_3_1_1;
  int ns_St_1_Erro_2_0;
  int ns_St_1_Erro_3_0_0;
  int ns_St_1_Erro_3_0_1;
  int ns_St_1_Erro_2_1;
  int ns_St_1_Erro_3_1_0;
  int ns_St_1_Erro_3_1_1;
  int estado_bat_St_1_Erro_2_0;
  int estado_bat_St_1_Erro_3_0_0;
  int estado_bat_St_1_Erro_3_0_1;
  int estado_bat_St_1_Erro_2_1;
  int estado_bat_St_1_Erro_3_1_0;
  int estado_bat_St_1_Erro_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_Descarregado;
  int ns_St_1_Descarregado_3;
  int ns_St_1_Descarregado_2;
  int ns_St_1_Descarregado_1;
  int estado_bat_St_1_Descarregado_3;
  int estado_bat_St_1_Descarregado_2;
  int estado_bat_St_1_Descarregado_1;
  int nr_St_1_Limiar2;
  int ns_St_1_Limiar2_3;
  int ns_St_1_Limiar2_2;
  int ns_St_1_Limiar2_1;
  int estado_bat_St_1_Limiar2_3;
  int estado_bat_St_1_Limiar2_2;
  int estado_bat_St_1_Limiar2_1;
  int nr_St_1_Limiar1;
  int ns_St_1_Limiar1_3;
  int ns_St_1_Limiar1_2;
  int ns_St_1_Limiar1_1;
  int estado_bat_St_1_Limiar1_3;
  int estado_bat_St_1_Limiar1_2;
  int estado_bat_St_1_Limiar1_1;
  int nr_St_1_Carregado;
  int ns_St_1_Carregado_3;
  int ns_St_1_Carregado_2;
  int ns_St_1_Carregado_1;
  int estado_bat_St_1_Carregado_3;
  int estado_bat_St_1_Carregado_2;
  int estado_bat_St_1_Carregado_1;
  int nr_St_1_Erro;
  int ns_St_1_Erro_3;
  int ns_St_1_Erro_2;
  int ns_St_1_Erro_1;
  int estado_bat_St_1_Erro_3;
  int estado_bat_St_1_Erro_2;
  int estado_bat_St_1_Erro_1;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_18_2_0;
  int v_18_3_0_0;
  int v_18_3_0_1;
  int v_18_2_1;
  int v_18_3_1_0;
  int v_18_3_1_1;
  int v_16_2_0;
  int v_16_3_0_0;
  int v_16_3_0_1;
  int v_16_2_1;
  int v_16_3_1_0;
  int v_16_3_1_1;
  int v_14_2_0;
  int v_14_3_0_0;
  int v_14_3_0_1;
  int v_14_2_1;
  int v_14_3_1_0;
  int v_14_3_1_1;
  int v_19;
  int v_18_3;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16_3;
  int v_16_2;
  int v_16_1;
  int v_15;
  int v_14_3;
  int v_14_2;
  int v_14_1;
  int v_12_2_0;
  int v_12_3_0_0;
  int v_12_3_0_1;
  int v_12_2_1;
  int v_12_3_1_0;
  int v_12_3_1_1;
  int v_13;
  int v_12_3;
  int v_12_2;
  int v_12_1;
  int v_10_2_0;
  int v_10_3_0_0;
  int v_10_3_0_1;
  int v_10_2_1;
  int v_10_3_1_0;
  int v_10_3_1_1;
  int v_8_2_0;
  int v_8_3_0_0;
  int v_8_3_0_1;
  int v_8_2_1;
  int v_8_3_1_0;
  int v_8_3_1_1;
  int v_11;
  int v_10_3;
  int v_10_2;
  int v_10_1;
  int v_9;
  int v_8_3;
  int v_8_2;
  int v_8_1;
  int v_6_2_0;
  int v_6_3_0_0;
  int v_6_3_0_1;
  int v_6_2_1;
  int v_6_3_1_0;
  int v_6_3_1_1;
  int v_4_2_0;
  int v_4_3_0_0;
  int v_4_3_0_1;
  int v_4_2_1;
  int v_4_3_1_0;
  int v_4_3_1_1;
  int v_7;
  int v_6_3;
  int v_6_2;
  int v_6_1;
  int v_5;
  int v_4_3;
  int v_4_2;
  int v_4_1;
  int v_2_2_0;
  int v_2_3_0_0;
  int v_2_3_0_1;
  int v_2_2_1;
  int v_2_3_1_0;
  int v_2_3_1_1;
  int v_3;
  int v_2_3;
  int v_2_2;
  int v_2_1;
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
  int s_St_1_Descarregado_2_0;
  int s_St_1_Descarregado_3_0_0;
  int s_St_1_Descarregado_3_0_1;
  int s_St_1_Descarregado_2_1;
  int s_St_1_Descarregado_3_1_0;
  int s_St_1_Descarregado_3_1_1;
  int s_St_1_Limiar2_2_0;
  int s_St_1_Limiar2_3_0_0;
  int s_St_1_Limiar2_3_0_1;
  int s_St_1_Limiar2_2_1;
  int s_St_1_Limiar2_3_1_0;
  int s_St_1_Limiar2_3_1_1;
  int s_St_1_Limiar1_2_0;
  int s_St_1_Limiar1_3_0_0;
  int s_St_1_Limiar1_3_0_1;
  int s_St_1_Limiar1_2_1;
  int s_St_1_Limiar1_3_1_0;
  int s_St_1_Limiar1_3_1_1;
  int s_St_1_Carregado_2_0;
  int s_St_1_Carregado_3_0_0;
  int s_St_1_Carregado_3_0_1;
  int s_St_1_Carregado_2_1;
  int s_St_1_Carregado_3_1_0;
  int s_St_1_Carregado_3_1_1;
  int s_St_1_Erro_2_0;
  int s_St_1_Erro_3_0_0;
  int s_St_1_Erro_3_0_1;
  int s_St_1_Erro_2_1;
  int s_St_1_Erro_3_1_0;
  int s_St_1_Erro_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Descarregado;
  int s_St_1_Descarregado_3;
  int s_St_1_Descarregado_2;
  int s_St_1_Descarregado_1;
  int r_St_1_Limiar2;
  int s_St_1_Limiar2_3;
  int s_St_1_Limiar2_2;
  int s_St_1_Limiar2_1;
  int r_St_1_Limiar1;
  int s_St_1_Limiar1_3;
  int s_St_1_Limiar1_2;
  int s_St_1_Limiar1_1;
  int r_St_1_Carregado;
  int s_St_1_Carregado_3;
  int s_St_1_Carregado_2;
  int s_St_1_Carregado_1;
  int r_St_1_Erro;
  int s_St_1_Erro_3;
  int s_St_1_Erro_2;
  int s_St_1_Erro_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int estado_bat_2_0;
  int estado_bat_3_0_0;
  int estado_bat_3_0_1;
  int estado_bat_2_1;
  int estado_bat_3_1_0;
  int estado_bat_3_1_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
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
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int a;
  int b;
  int c;
  int d;
  int e;
  v_37 = !(cp);
  v_38 = (v_37&&l1);
  v_39 = (v_38&&l2);
  a = (v_39&&v);
  v_20 = !(a);
  v_35 = (cp&&l1);
  v_36 = (v_35&&l2);
  b = (v_36&&v);
  v_21 = !(b);
  v_22 = (v_20&&v_21);
  v_32 = !(l1);
  v_31 = !(cp);
  v_33 = (v_31&&v_32);
  v_34 = (v_33&&l2);
  c = (v_34&&v);
  v_23 = !(c);
  v_24 = (v_22&&v_23);
  v_29 = !(l2);
  v_27 = !(l1);
  v_26 = !(cp);
  v_28 = (v_26&&v_27);
  v_30 = (v_28&&v_29);
  d = (v_30&&v);
  v_25 = !(d);
  e = (v_24&&v_25);
  ck_1 = self->v_145;
  ck_2_4 = self->v_146;
  ck_3 = self->v_147;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (e) {
          v_13 = true;
        } else {
          v_13 = self->pnr;
        };
        if (a) {
          r_St_1_Carregado = true;
        } else {
          r_St_1_Carregado = v_13;
        };
        if (e) {
          v_12_1 = true;
        } else {
          v_12_1 = true;
        };
        if (a) {
          s_St_1_Carregado_1 = false;
        } else {
          s_St_1_Carregado_1 = v_12_1;
        };
        if (e) {
          v_12_2 = false;
        } else {
          v_12_2 = true;
        };
        if (a) {
          s_St_1_Carregado_2 = false;
        } else {
          s_St_1_Carregado_2 = v_12_2;
        };
        if (e) {
          v_12_3 = false;
        } else {
          v_12_3 = true;
        };
        if (a) {
          s_St_1_Carregado_3 = true;
        } else {
          s_St_1_Carregado_3 = v_12_3;
        };
        v_163 = r_St_1_Carregado;
        v_148 = s_St_1_Carregado_1;
        v_149 = s_St_1_Carregado_2;
        v_150 = s_St_1_Carregado_3;
      } else {
        if (e) {
          v_3 = true;
        } else {
          v_3 = self->pnr;
        };
        if (c) {
          r_St_1_Descarregado = true;
        } else {
          r_St_1_Descarregado = v_3;
        };
        v_163 = r_St_1_Descarregado;
        if (e) {
          v_2_1 = true;
        } else {
          v_2_1 = true;
        };
        if (c) {
          s_St_1_Descarregado_1 = false;
        } else {
          s_St_1_Descarregado_1 = v_2_1;
        };
        v_148 = s_St_1_Descarregado_1;
        if (e) {
          v_2_2 = false;
        } else {
          v_2_2 = true;
        };
        if (c) {
          s_St_1_Descarregado_2 = false;
        } else {
          s_St_1_Descarregado_2 = v_2_2;
        };
        v_149 = s_St_1_Descarregado_2;
        if (e) {
          v_2_3 = false;
        } else {
          v_2_3 = false;
        };
        if (c) {
          s_St_1_Descarregado_3 = false;
        } else {
          s_St_1_Descarregado_3 = v_2_3;
        };
        v_150 = s_St_1_Descarregado_3;
      };
      v_157 = v_148;
      v_158 = v_149;
      v_159 = v_150;
      v_165 = v_163;
      if (ck_3_1_1) {
        if (v_12_1) {
          v_12_2_1 = v_12_2;
          if (v_12_2_1) {
            v_12_3_1_1 = v_12_3;
          } else {
            v_12_3_1_0 = v_12_3;
          };
        } else {
          v_12_2_0 = v_12_2;
          if (v_12_2_0) {
            v_12_3_0_1 = v_12_3;
          } else {
            v_12_3_0_0 = v_12_3;
          };
        };
        if (s_St_1_Carregado_1) {
          s_St_1_Carregado_2_1 = s_St_1_Carregado_2;
          if (s_St_1_Carregado_2_1) {
            s_St_1_Carregado_3_1_1 = s_St_1_Carregado_3;
          } else {
            s_St_1_Carregado_3_1_0 = s_St_1_Carregado_3;
          };
        } else {
          s_St_1_Carregado_2_0 = s_St_1_Carregado_2;
          if (s_St_1_Carregado_2_0) {
            s_St_1_Carregado_3_0_1 = s_St_1_Carregado_3;
          } else {
            s_St_1_Carregado_3_0_0 = s_St_1_Carregado_3;
          };
        };
      } else {
        if (v_2_1) {
          v_2_2_1 = v_2_2;
          if (v_2_2_1) {
            v_2_3_1_1 = v_2_3;
          } else {
            v_2_3_1_0 = v_2_3;
          };
        } else {
          v_2_2_0 = v_2_2;
          if (v_2_2_0) {
            v_2_3_0_1 = v_2_3;
          } else {
            v_2_3_0_0 = v_2_3;
          };
        };
        if (s_St_1_Descarregado_1) {
          s_St_1_Descarregado_2_1 = s_St_1_Descarregado_2;
          if (s_St_1_Descarregado_2_1) {
            s_St_1_Descarregado_3_1_1 = s_St_1_Descarregado_3;
          } else {
            s_St_1_Descarregado_3_1_0 = s_St_1_Descarregado_3;
          };
        } else {
          s_St_1_Descarregado_2_0 = s_St_1_Descarregado_2;
          if (s_St_1_Descarregado_2_0) {
            s_St_1_Descarregado_3_0_1 = s_St_1_Descarregado_3;
          } else {
            s_St_1_Descarregado_3_0_0 = s_St_1_Descarregado_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_164 = true;
        v_151 = true;
        v_152 = true;
        v_153 = true;
      } else {
        if (d) {
          v_15 = true;
        } else {
          v_15 = self->pnr;
        };
        if (c) {
          v_17 = true;
        } else {
          v_17 = v_15;
        };
        if (a) {
          v_19 = true;
        } else {
          v_19 = v_17;
        };
        if (b) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_19;
        };
        v_164 = r_St_1_Erro;
        if (d) {
          v_14_1 = true;
        } else {
          v_14_1 = true;
        };
        if (c) {
          v_16_1 = false;
        } else {
          v_16_1 = v_14_1;
        };
        if (a) {
          v_18_1 = false;
        } else {
          v_18_1 = v_16_1;
        };
        if (b) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_18_1;
        };
        v_151 = s_St_1_Erro_1;
        if (d) {
          v_14_2 = true;
        } else {
          v_14_2 = false;
        };
        if (c) {
          v_16_2 = false;
        } else {
          v_16_2 = v_14_2;
        };
        if (a) {
          v_18_2 = false;
        } else {
          v_18_2 = v_16_2;
        };
        if (b) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_18_2;
        };
        v_152 = s_St_1_Erro_2;
        if (d) {
          v_14_3 = false;
        } else {
          v_14_3 = false;
        };
        if (c) {
          v_16_3 = false;
        } else {
          v_16_3 = v_14_3;
        };
        if (a) {
          v_18_3 = true;
        } else {
          v_18_3 = v_16_3;
        };
        if (b) {
          s_St_1_Erro_3 = true;
        } else {
          s_St_1_Erro_3 = v_18_3;
        };
        v_153 = s_St_1_Erro_3;
        if (v_14_1) {
          v_14_2_1 = v_14_2;
          if (v_14_2_1) {
            v_14_3_1_1 = v_14_3;
          } else {
            v_14_3_1_0 = v_14_3;
          };
        } else {
          v_14_2_0 = v_14_2;
          if (v_14_2_0) {
            v_14_3_0_1 = v_14_3;
          } else {
            v_14_3_0_0 = v_14_3;
          };
        };
        if (v_16_1) {
          v_16_2_1 = v_16_2;
          if (v_16_2_1) {
            v_16_3_1_1 = v_16_3;
          } else {
            v_16_3_1_0 = v_16_3;
          };
        } else {
          v_16_2_0 = v_16_2;
          if (v_16_2_0) {
            v_16_3_0_1 = v_16_3;
          } else {
            v_16_3_0_0 = v_16_3;
          };
        };
        if (v_18_1) {
          v_18_2_1 = v_18_2;
          if (v_18_2_1) {
            v_18_3_1_1 = v_18_3;
          } else {
            v_18_3_1_0 = v_18_3;
          };
        } else {
          v_18_2_0 = v_18_2;
          if (v_18_2_0) {
            v_18_3_0_1 = v_18_3;
          } else {
            v_18_3_0_0 = v_18_3;
          };
        };
        if (s_St_1_Erro_1) {
          s_St_1_Erro_2_1 = s_St_1_Erro_2;
          if (s_St_1_Erro_2_1) {
            s_St_1_Erro_3_1_1 = s_St_1_Erro_3;
          } else {
            s_St_1_Erro_3_1_0 = s_St_1_Erro_3;
          };
        } else {
          s_St_1_Erro_2_0 = s_St_1_Erro_2;
          if (s_St_1_Erro_2_0) {
            s_St_1_Erro_3_0_1 = s_St_1_Erro_3;
          } else {
            s_St_1_Erro_3_0_0 = s_St_1_Erro_3;
          };
        };
      };
      v_157 = v_151;
      v_158 = v_152;
      v_159 = v_153;
      v_165 = v_164;
    };
    s_1 = v_157;
    s_2 = v_158;
    s_3 = v_159;
    r = v_165;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_160 = true;
      v_161 = true;
      v_162 = true;
      v_167 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (e) {
          v_9 = true;
        } else {
          v_9 = self->pnr;
        };
        if (c) {
          v_11 = true;
        } else {
          v_11 = v_9;
        };
        if (b) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_11;
        };
        if (e) {
          v_8_1 = true;
        } else {
          v_8_1 = false;
        };
        if (c) {
          v_10_1 = false;
        } else {
          v_10_1 = v_8_1;
        };
        if (b) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_10_1;
        };
        if (e) {
          v_8_2 = false;
        } else {
          v_8_2 = false;
        };
        if (c) {
          v_10_2 = false;
        } else {
          v_10_2 = v_8_2;
        };
        if (b) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_10_2;
        };
        if (e) {
          v_8_3 = false;
        } else {
          v_8_3 = true;
        };
        if (c) {
          v_10_3 = false;
        } else {
          v_10_3 = v_8_3;
        };
        if (b) {
          s_St_1_Limiar1_3 = true;
        } else {
          s_St_1_Limiar1_3 = v_10_3;
        };
        v_166 = r_St_1_Limiar1;
        v_154 = s_St_1_Limiar1_1;
        v_155 = s_St_1_Limiar1_2;
        v_156 = s_St_1_Limiar1_3;
        if (v_8_1) {
          v_8_2_1 = v_8_2;
          if (v_8_2_1) {
            v_8_3_1_1 = v_8_3;
          } else {
            v_8_3_1_0 = v_8_3;
          };
        } else {
          v_8_2_0 = v_8_2;
          if (v_8_2_0) {
            v_8_3_0_1 = v_8_3;
          } else {
            v_8_3_0_0 = v_8_3;
          };
        };
        if (v_10_1) {
          v_10_2_1 = v_10_2;
          if (v_10_2_1) {
            v_10_3_1_1 = v_10_3;
          } else {
            v_10_3_1_0 = v_10_3;
          };
        } else {
          v_10_2_0 = v_10_2;
          if (v_10_2_0) {
            v_10_3_0_1 = v_10_3;
          } else {
            v_10_3_0_0 = v_10_3;
          };
        };
      } else {
        if (e) {
          v_5 = true;
        } else {
          v_5 = self->pnr;
        };
        if (d) {
          v_7 = true;
        } else {
          v_7 = v_5;
        };
        if (a) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_7;
        };
        v_166 = r_St_1_Limiar2;
        if (e) {
          v_4_1 = true;
        } else {
          v_4_1 = false;
        };
        if (d) {
          v_6_1 = true;
        } else {
          v_6_1 = v_4_1;
        };
        if (a) {
          s_St_1_Limiar2_1 = false;
        } else {
          s_St_1_Limiar2_1 = v_6_1;
        };
        v_154 = s_St_1_Limiar2_1;
        if (e) {
          v_4_2 = false;
        } else {
          v_4_2 = false;
        };
        if (d) {
          v_6_2 = true;
        } else {
          v_6_2 = v_4_2;
        };
        if (a) {
          s_St_1_Limiar2_2 = false;
        } else {
          s_St_1_Limiar2_2 = v_6_2;
        };
        v_155 = s_St_1_Limiar2_2;
        if (e) {
          v_4_3 = false;
        } else {
          v_4_3 = false;
        };
        if (d) {
          v_6_3 = false;
        } else {
          v_6_3 = v_4_3;
        };
        if (a) {
          s_St_1_Limiar2_3 = true;
        } else {
          s_St_1_Limiar2_3 = v_6_3;
        };
        v_156 = s_St_1_Limiar2_3;
        if (v_4_1) {
          v_4_2_1 = v_4_2;
          if (v_4_2_1) {
            v_4_3_1_1 = v_4_3;
          } else {
            v_4_3_1_0 = v_4_3;
          };
        } else {
          v_4_2_0 = v_4_2;
          if (v_4_2_0) {
            v_4_3_0_1 = v_4_3;
          } else {
            v_4_3_0_0 = v_4_3;
          };
        };
        if (v_6_1) {
          v_6_2_1 = v_6_2;
          if (v_6_2_1) {
            v_6_3_1_1 = v_6_3;
          } else {
            v_6_3_1_0 = v_6_3;
          };
        } else {
          v_6_2_0 = v_6_2;
          if (v_6_2_0) {
            v_6_3_0_1 = v_6_3;
          } else {
            v_6_3_0_0 = v_6_3;
          };
        };
      };
      v_160 = v_154;
      v_161 = v_155;
      v_162 = v_156;
      v_167 = v_166;
    };
    s_1 = v_160;
    s_2 = v_161;
    s_3 = v_162;
    r = v_167;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  ck_2_3 = s_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        estado_bat_St_1_Carregado_1 = false;
        estado_bat_St_1_Carregado_2 = false;
        estado_bat_St_1_Carregado_3 = true;
        nr_St_1_Carregado = false;
        ns_St_1_Carregado_1 = true;
        ns_St_1_Carregado_2 = true;
        ns_St_1_Carregado_3 = true;
        v_110 = estado_bat_St_1_Carregado_1;
        v_111 = estado_bat_St_1_Carregado_2;
        v_112 = estado_bat_St_1_Carregado_3;
        v_140 = nr_St_1_Carregado;
        v_125 = ns_St_1_Carregado_1;
        v_126 = ns_St_1_Carregado_2;
        v_127 = ns_St_1_Carregado_3;
      } else {
        estado_bat_St_1_Descarregado_1 = true;
        v_110 = estado_bat_St_1_Descarregado_1;
        estado_bat_St_1_Descarregado_2 = true;
        v_111 = estado_bat_St_1_Descarregado_2;
        estado_bat_St_1_Descarregado_3 = true;
        v_112 = estado_bat_St_1_Descarregado_3;
        nr_St_1_Descarregado = false;
        v_140 = nr_St_1_Descarregado;
        ns_St_1_Descarregado_1 = true;
        v_125 = ns_St_1_Descarregado_1;
        ns_St_1_Descarregado_2 = true;
        v_126 = ns_St_1_Descarregado_2;
        ns_St_1_Descarregado_3 = false;
        v_127 = ns_St_1_Descarregado_3;
      };
      v_119 = v_110;
      v_120 = v_111;
      v_121 = v_112;
      v_134 = v_125;
      v_135 = v_126;
      v_136 = v_127;
      v_142 = v_140;
      if (ck_2_3_1_1) {
        if (estado_bat_St_1_Carregado_1) {
          estado_bat_St_1_Carregado_2_1 = estado_bat_St_1_Carregado_2;
          if (estado_bat_St_1_Carregado_2_1) {
            estado_bat_St_1_Carregado_3_1_1 = estado_bat_St_1_Carregado_3;
          } else {
            estado_bat_St_1_Carregado_3_1_0 = estado_bat_St_1_Carregado_3;
          };
        } else {
          estado_bat_St_1_Carregado_2_0 = estado_bat_St_1_Carregado_2;
          if (estado_bat_St_1_Carregado_2_0) {
            estado_bat_St_1_Carregado_3_0_1 = estado_bat_St_1_Carregado_3;
          } else {
            estado_bat_St_1_Carregado_3_0_0 = estado_bat_St_1_Carregado_3;
          };
        };
        if (ns_St_1_Carregado_1) {
          ns_St_1_Carregado_2_1 = ns_St_1_Carregado_2;
          if (ns_St_1_Carregado_2_1) {
            ns_St_1_Carregado_3_1_1 = ns_St_1_Carregado_3;
          } else {
            ns_St_1_Carregado_3_1_0 = ns_St_1_Carregado_3;
          };
        } else {
          ns_St_1_Carregado_2_0 = ns_St_1_Carregado_2;
          if (ns_St_1_Carregado_2_0) {
            ns_St_1_Carregado_3_0_1 = ns_St_1_Carregado_3;
          } else {
            ns_St_1_Carregado_3_0_0 = ns_St_1_Carregado_3;
          };
        };
      } else {
        if (estado_bat_St_1_Descarregado_1) {
          estado_bat_St_1_Descarregado_2_1 = estado_bat_St_1_Descarregado_2;
          if (estado_bat_St_1_Descarregado_2_1) {
            estado_bat_St_1_Descarregado_3_1_1 = estado_bat_St_1_Descarregado_3;
          } else {
            estado_bat_St_1_Descarregado_3_1_0 = estado_bat_St_1_Descarregado_3;
          };
        } else {
          estado_bat_St_1_Descarregado_2_0 = estado_bat_St_1_Descarregado_2;
          if (estado_bat_St_1_Descarregado_2_0) {
            estado_bat_St_1_Descarregado_3_0_1 = estado_bat_St_1_Descarregado_3;
          } else {
            estado_bat_St_1_Descarregado_3_0_0 = estado_bat_St_1_Descarregado_3;
          };
        };
        if (ns_St_1_Descarregado_1) {
          ns_St_1_Descarregado_2_1 = ns_St_1_Descarregado_2;
          if (ns_St_1_Descarregado_2_1) {
            ns_St_1_Descarregado_3_1_1 = ns_St_1_Descarregado_3;
          } else {
            ns_St_1_Descarregado_3_1_0 = ns_St_1_Descarregado_3;
          };
        } else {
          ns_St_1_Descarregado_2_0 = ns_St_1_Descarregado_2;
          if (ns_St_1_Descarregado_2_0) {
            ns_St_1_Descarregado_3_0_1 = ns_St_1_Descarregado_3;
          } else {
            ns_St_1_Descarregado_3_0_0 = ns_St_1_Descarregado_3;
          };
        };
      };
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_113 = true;
        v_114 = true;
        v_115 = true;
        v_141 = true;
        v_128 = true;
        v_129 = true;
        v_130 = true;
      } else {
        estado_bat_St_1_Erro_1 = false;
        v_113 = estado_bat_St_1_Erro_1;
        estado_bat_St_1_Erro_2 = false;
        v_114 = estado_bat_St_1_Erro_2;
        estado_bat_St_1_Erro_3 = false;
        v_115 = estado_bat_St_1_Erro_3;
        nr_St_1_Erro = false;
        v_141 = nr_St_1_Erro;
        ns_St_1_Erro_1 = true;
        v_128 = ns_St_1_Erro_1;
        ns_St_1_Erro_2 = false;
        v_129 = ns_St_1_Erro_2;
        ns_St_1_Erro_3 = false;
        v_130 = ns_St_1_Erro_3;
        if (estado_bat_St_1_Erro_1) {
          estado_bat_St_1_Erro_2_1 = estado_bat_St_1_Erro_2;
          if (estado_bat_St_1_Erro_2_1) {
            estado_bat_St_1_Erro_3_1_1 = estado_bat_St_1_Erro_3;
          } else {
            estado_bat_St_1_Erro_3_1_0 = estado_bat_St_1_Erro_3;
          };
        } else {
          estado_bat_St_1_Erro_2_0 = estado_bat_St_1_Erro_2;
          if (estado_bat_St_1_Erro_2_0) {
            estado_bat_St_1_Erro_3_0_1 = estado_bat_St_1_Erro_3;
          } else {
            estado_bat_St_1_Erro_3_0_0 = estado_bat_St_1_Erro_3;
          };
        };
        if (ns_St_1_Erro_1) {
          ns_St_1_Erro_2_1 = ns_St_1_Erro_2;
          if (ns_St_1_Erro_2_1) {
            ns_St_1_Erro_3_1_1 = ns_St_1_Erro_3;
          } else {
            ns_St_1_Erro_3_1_0 = ns_St_1_Erro_3;
          };
        } else {
          ns_St_1_Erro_2_0 = ns_St_1_Erro_2;
          if (ns_St_1_Erro_2_0) {
            ns_St_1_Erro_3_0_1 = ns_St_1_Erro_3;
          } else {
            ns_St_1_Erro_3_0_0 = ns_St_1_Erro_3;
          };
        };
      };
      v_119 = v_113;
      v_120 = v_114;
      v_121 = v_115;
      v_134 = v_128;
      v_135 = v_129;
      v_136 = v_130;
      v_142 = v_141;
    };
    _out->estado_bat_1 = v_119;
    _out->estado_bat_2 = v_120;
    _out->estado_bat_3 = v_121;
    ns_1 = v_134;
    ns_2 = v_135;
    ns_3 = v_136;
    nr = v_142;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_122 = true;
      v_123 = true;
      v_124 = true;
      v_137 = true;
      v_138 = true;
      v_139 = true;
      v_144 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        estado_bat_St_1_Limiar1_1 = true;
        estado_bat_St_1_Limiar1_2 = false;
        estado_bat_St_1_Limiar1_3 = false;
        nr_St_1_Limiar1 = false;
        ns_St_1_Limiar1_1 = false;
        ns_St_1_Limiar1_2 = false;
        ns_St_1_Limiar1_3 = true;
        v_116 = estado_bat_St_1_Limiar1_1;
        v_117 = estado_bat_St_1_Limiar1_2;
        v_118 = estado_bat_St_1_Limiar1_3;
        v_143 = nr_St_1_Limiar1;
        v_131 = ns_St_1_Limiar1_1;
        v_132 = ns_St_1_Limiar1_2;
        v_133 = ns_St_1_Limiar1_3;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_116 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = true;
        v_117 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_118 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_143 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_131 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_132 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_133 = ns_St_1_Limiar2_3;
      };
      v_122 = v_116;
      v_123 = v_117;
      v_124 = v_118;
      v_137 = v_131;
      v_138 = v_132;
      v_139 = v_133;
      v_144 = v_143;
    };
    _out->estado_bat_1 = v_122;
    _out->estado_bat_2 = v_123;
    _out->estado_bat_3 = v_124;
    ns_1 = v_137;
    ns_2 = v_138;
    ns_3 = v_139;
    nr = v_144;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (_out->estado_bat_1) {
    estado_bat_2_1 = _out->estado_bat_2;
    if (estado_bat_2_1) {
      estado_bat_3_1_1 = _out->estado_bat_3;
    } else {
      estado_bat_3_1_0 = _out->estado_bat_3;
    };
  } else {
    estado_bat_2_0 = _out->estado_bat_2;
    if (estado_bat_2_0) {
      estado_bat_3_0_1 = _out->estado_bat_3;
    } else {
      estado_bat_3_0_0 = _out->estado_bat_3;
    };
  };
  if (!(ck_2_1)) {
    if (!(ck_2_2_0)) {
      if (ck_2_3_0_0) {
        if (estado_bat_St_1_Limiar1_1) {
          estado_bat_St_1_Limiar1_2_1 = estado_bat_St_1_Limiar1_2;
          if (estado_bat_St_1_Limiar1_2_1) {
            estado_bat_St_1_Limiar1_3_1_1 = estado_bat_St_1_Limiar1_3;
          } else {
            estado_bat_St_1_Limiar1_3_1_0 = estado_bat_St_1_Limiar1_3;
          };
        } else {
          estado_bat_St_1_Limiar1_2_0 = estado_bat_St_1_Limiar1_2;
          if (estado_bat_St_1_Limiar1_2_0) {
            estado_bat_St_1_Limiar1_3_0_1 = estado_bat_St_1_Limiar1_3;
          } else {
            estado_bat_St_1_Limiar1_3_0_0 = estado_bat_St_1_Limiar1_3;
          };
        };
        if (ns_St_1_Limiar1_1) {
          ns_St_1_Limiar1_2_1 = ns_St_1_Limiar1_2;
          if (ns_St_1_Limiar1_2_1) {
            ns_St_1_Limiar1_3_1_1 = ns_St_1_Limiar1_3;
          } else {
            ns_St_1_Limiar1_3_1_0 = ns_St_1_Limiar1_3;
          };
        } else {
          ns_St_1_Limiar1_2_0 = ns_St_1_Limiar1_2;
          if (ns_St_1_Limiar1_2_0) {
            ns_St_1_Limiar1_3_0_1 = ns_St_1_Limiar1_3;
          } else {
            ns_St_1_Limiar1_3_0_0 = ns_St_1_Limiar1_3;
          };
        };
      } else {
        if (estado_bat_St_1_Limiar2_1) {
          estado_bat_St_1_Limiar2_2_1 = estado_bat_St_1_Limiar2_2;
          if (estado_bat_St_1_Limiar2_2_1) {
            estado_bat_St_1_Limiar2_3_1_1 = estado_bat_St_1_Limiar2_3;
          } else {
            estado_bat_St_1_Limiar2_3_1_0 = estado_bat_St_1_Limiar2_3;
          };
        } else {
          estado_bat_St_1_Limiar2_2_0 = estado_bat_St_1_Limiar2_2;
          if (estado_bat_St_1_Limiar2_2_0) {
            estado_bat_St_1_Limiar2_3_0_1 = estado_bat_St_1_Limiar2_3;
          } else {
            estado_bat_St_1_Limiar2_3_0_0 = estado_bat_St_1_Limiar2_3;
          };
        };
        if (ns_St_1_Limiar2_1) {
          ns_St_1_Limiar2_2_1 = ns_St_1_Limiar2_2;
          if (ns_St_1_Limiar2_2_1) {
            ns_St_1_Limiar2_3_1_1 = ns_St_1_Limiar2_3;
          } else {
            ns_St_1_Limiar2_3_1_0 = ns_St_1_Limiar2_3;
          };
        } else {
          ns_St_1_Limiar2_2_0 = ns_St_1_Limiar2_2;
          if (ns_St_1_Limiar2_2_0) {
            ns_St_1_Limiar2_3_0_1 = ns_St_1_Limiar2_3;
          } else {
            ns_St_1_Limiar2_3_0_0 = ns_St_1_Limiar2_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_4_0)) {
      if (ck_3_0_0) {
        if (s_St_1_Limiar1_1) {
          s_St_1_Limiar1_2_1 = s_St_1_Limiar1_2;
          if (s_St_1_Limiar1_2_1) {
            s_St_1_Limiar1_3_1_1 = s_St_1_Limiar1_3;
          } else {
            s_St_1_Limiar1_3_1_0 = s_St_1_Limiar1_3;
          };
        } else {
          s_St_1_Limiar1_2_0 = s_St_1_Limiar1_2;
          if (s_St_1_Limiar1_2_0) {
            s_St_1_Limiar1_3_0_1 = s_St_1_Limiar1_3;
          } else {
            s_St_1_Limiar1_3_0_0 = s_St_1_Limiar1_3;
          };
        };
      } else {
        if (s_St_1_Limiar2_1) {
          s_St_1_Limiar2_2_1 = s_St_1_Limiar2_2;
          if (s_St_1_Limiar2_2_1) {
            s_St_1_Limiar2_3_1_1 = s_St_1_Limiar2_3;
          } else {
            s_St_1_Limiar2_3_1_0 = s_St_1_Limiar2_3;
          };
        } else {
          s_St_1_Limiar2_2_0 = s_St_1_Limiar2_2;
          if (s_St_1_Limiar2_2_0) {
            s_St_1_Limiar2_3_0_1 = s_St_1_Limiar2_3;
          } else {
            s_St_1_Limiar2_3_0_0 = s_St_1_Limiar2_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_145 = ns_1;
  self->v_146 = ns_2;
  self->v_147 = ns_3;;
}

void Ups_controlador__atuador_sw_reset(Ups_controlador__atuador_sw_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Ups_controlador__atuador_sw_step(int ca,
                                      Ups_controlador__atuador_sw_out* _out,
                                      Ups_controlador__atuador_sw_mem* self) {
  
  int nr_St_2_Lig;
  int ns_St_2_Lig_1;
  int estado_St_2_Lig;
  int nr_St_2_Des;
  int ns_St_2_Des_1;
  int estado_St_2_Des;
  int ck_3_1;
  int r_St_2_Lig;
  int s_St_2_Lig_1;
  int r_St_2_Des;
  int s_St_2_Des_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (ca) {
      r_St_2_Des = true;
      s_St_2_Des_1 = false;
    } else {
      r_St_2_Des = self->pnr;
      s_St_2_Des_1 = true;
    };
    r = r_St_2_Des;
    s_1 = s_St_2_Des_1;
  } else {
    if (ca) {
      r_St_2_Lig = true;
    } else {
      r_St_2_Lig = self->pnr;
    };
    r = r_St_2_Lig;
    if (ca) {
      s_St_2_Lig_1 = true;
    } else {
      s_St_2_Lig_1 = false;
    };
    s_1 = s_St_2_Lig_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    estado_St_2_Des = false;
    nr_St_2_Des = false;
    ns_St_2_Des_1 = true;
    _out->estado = estado_St_2_Des;
    nr = nr_St_2_Des;
    ns_1 = ns_St_2_Des_1;
  } else {
    estado_St_2_Lig = true;
    _out->estado = estado_St_2_Lig;
    nr_St_2_Lig = false;
    nr = nr_St_2_Lig;
    ns_St_2_Lig_1 = false;
    ns_1 = ns_St_2_Lig_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Ups_controlador__periodo_dia_reset(Ups_controlador__periodo_dia_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Ups_controlador__periodo_dia_step(int t,
                                       Ups_controlador__periodo_dia_out* _out,
                                       Ups_controlador__periodo_dia_mem* self) {
  
  int nr_St_3_Noite;
  int ns_St_3_Noite_1;
  int isday_St_3_Noite;
  int nr_St_3_Dia;
  int ns_St_3_Dia_1;
  int isday_St_3_Dia;
  int ck_4_1;
  int r_St_3_Noite;
  int s_St_3_Noite_1;
  int r_St_3_Dia;
  int s_St_3_Dia_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (t) {
      r_St_3_Dia = true;
      s_St_3_Dia_1 = false;
    } else {
      r_St_3_Dia = self->pnr;
      s_St_3_Dia_1 = true;
    };
    r = r_St_3_Dia;
    s_1 = s_St_3_Dia_1;
  } else {
    if (t) {
      r_St_3_Noite = true;
    } else {
      r_St_3_Noite = self->pnr;
    };
    r = r_St_3_Noite;
    if (t) {
      s_St_3_Noite_1 = true;
    } else {
      s_St_3_Noite_1 = false;
    };
    s_1 = s_St_3_Noite_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    isday_St_3_Dia = true;
    nr_St_3_Dia = false;
    ns_St_3_Dia_1 = true;
    _out->isday = isday_St_3_Dia;
    nr = nr_St_3_Dia;
    ns_1 = ns_St_3_Dia_1;
  } else {
    isday_St_3_Noite = false;
    _out->isday = isday_St_3_Noite;
    nr_St_3_Noite = false;
    nr = nr_St_3_Noite;
    ns_St_3_Noite_1 = false;
    ns_1 = ns_St_3_Noite_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Ups_controlador__modem_adsl_reset(Ups_controlador__modem_adsl_mem* self) {
  self->pnr = false;
  self->v_203 = true;
  self->v_204 = true;
  self->v_205 = true;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int ns_St_4_Sleep_2_0;
  int ns_St_4_Sleep_3_0_0;
  int ns_St_4_Sleep_3_0_1;
  int ns_St_4_Sleep_2_1;
  int ns_St_4_Sleep_3_1_0;
  int ns_St_4_Sleep_3_1_1;
  int ns_St_4_Online_2_0;
  int ns_St_4_Online_3_0_0;
  int ns_St_4_Online_3_0_1;
  int ns_St_4_Online_2_1;
  int ns_St_4_Online_3_1_0;
  int ns_St_4_Online_3_1_1;
  int ns_St_4_Teste_2_0;
  int ns_St_4_Teste_3_0_0;
  int ns_St_4_Teste_3_0_1;
  int ns_St_4_Teste_2_1;
  int ns_St_4_Teste_3_1_0;
  int ns_St_4_Teste_3_1_1;
  int ns_St_4_Wait_2_0;
  int ns_St_4_Wait_3_0_0;
  int ns_St_4_Wait_3_0_1;
  int ns_St_4_Wait_2_1;
  int ns_St_4_Wait_3_1_0;
  int ns_St_4_Wait_3_1_1;
  int ns_St_4_Off_2_0;
  int ns_St_4_Off_3_0_0;
  int ns_St_4_Off_3_0_1;
  int ns_St_4_Off_2_1;
  int ns_St_4_Off_3_1_0;
  int ns_St_4_Off_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_St_4_Sleep;
  int ns_St_4_Sleep_3;
  int ns_St_4_Sleep_2;
  int ns_St_4_Sleep_1;
  int estado_St_4_Sleep;
  int atuador_St_4_Sleep;
  int desligado_St_4_Sleep;
  int nr_St_4_Online;
  int ns_St_4_Online_3;
  int ns_St_4_Online_2;
  int ns_St_4_Online_1;
  int estado_St_4_Online;
  int atuador_St_4_Online;
  int desligado_St_4_Online;
  int nr_St_4_Teste;
  int ns_St_4_Teste_3;
  int ns_St_4_Teste_2;
  int ns_St_4_Teste_1;
  int estado_St_4_Teste;
  int atuador_St_4_Teste;
  int desligado_St_4_Teste;
  int nr_St_4_Wait;
  int ns_St_4_Wait_3;
  int ns_St_4_Wait_2;
  int ns_St_4_Wait_1;
  int estado_St_4_Wait;
  int atuador_St_4_Wait;
  int desligado_St_4_Wait;
  int nr_St_4_Off;
  int ns_St_4_Off_3;
  int ns_St_4_Off_2;
  int ns_St_4_Off_1;
  int estado_St_4_Off;
  int atuador_St_4_Off;
  int desligado_St_4_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
  int v_46_2_0;
  int v_46_3_0_0;
  int v_46_3_0_1;
  int v_46_2_1;
  int v_46_3_1_0;
  int v_46_3_1_1;
  int v_44_2_0;
  int v_44_3_0_0;
  int v_44_3_0_1;
  int v_44_2_1;
  int v_44_3_1_0;
  int v_44_3_1_1;
  int v_47;
  int v_46_3;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44_3;
  int v_44_2;
  int v_44_1;
  int v_43;
  int v_41_2_0;
  int v_41_3_0_0;
  int v_41_3_0_1;
  int v_41_2_1;
  int v_41_3_1_0;
  int v_41_3_1_1;
  int v_42;
  int v_41_3;
  int v_41_2;
  int v_41_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_40;
  int v_3;
  int v_2;
  int v_1;
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
  int s_St_4_Sleep_2_0;
  int s_St_4_Sleep_3_0_0;
  int s_St_4_Sleep_3_0_1;
  int s_St_4_Sleep_2_1;
  int s_St_4_Sleep_3_1_0;
  int s_St_4_Sleep_3_1_1;
  int s_St_4_Online_2_0;
  int s_St_4_Online_3_0_0;
  int s_St_4_Online_3_0_1;
  int s_St_4_Online_2_1;
  int s_St_4_Online_3_1_0;
  int s_St_4_Online_3_1_1;
  int s_St_4_Teste_2_0;
  int s_St_4_Teste_3_0_0;
  int s_St_4_Teste_3_0_1;
  int s_St_4_Teste_2_1;
  int s_St_4_Teste_3_1_0;
  int s_St_4_Teste_3_1_1;
  int s_St_4_Wait_2_0;
  int s_St_4_Wait_3_0_0;
  int s_St_4_Wait_3_0_1;
  int s_St_4_Wait_2_1;
  int s_St_4_Wait_3_1_0;
  int s_St_4_Wait_3_1_1;
  int s_St_4_Off_2_0;
  int s_St_4_Off_3_0_0;
  int s_St_4_Off_3_0_1;
  int s_St_4_Off_2_1;
  int s_St_4_Off_3_1_0;
  int s_St_4_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_4_Sleep;
  int s_St_4_Sleep_3;
  int s_St_4_Sleep_2;
  int s_St_4_Sleep_1;
  int r_St_4_Online;
  int s_St_4_Online_3;
  int s_St_4_Online_2;
  int s_St_4_Online_1;
  int r_St_4_Teste;
  int s_St_4_Teste_3;
  int s_St_4_Teste_2;
  int s_St_4_Teste_1;
  int r_St_4_Wait;
  int s_St_4_Wait_3;
  int s_St_4_Wait_2;
  int s_St_4_Wait_1;
  int r_St_4_Off;
  int s_St_4_Off_3;
  int s_St_4_Off_2;
  int s_St_4_Off_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_203;
  ck_2 = self->v_204;
  ck_3 = self->v_205;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (c) {
          r_St_4_Off = true;
          s_St_4_Off_1 = false;
          s_St_4_Off_2 = false;
          s_St_4_Off_3 = false;
        } else {
          r_St_4_Off = self->pnr;
          s_St_4_Off_1 = true;
          s_St_4_Off_2 = true;
          s_St_4_Off_3 = true;
        };
        v_221 = r_St_4_Off;
        v_206 = s_St_4_Off_1;
        v_207 = s_St_4_Off_2;
        v_208 = s_St_4_Off_3;
        if (s_St_4_Off_1) {
          s_St_4_Off_2_1 = s_St_4_Off_2;
          if (s_St_4_Off_2_1) {
            s_St_4_Off_3_1_1 = s_St_4_Off_3;
          } else {
            s_St_4_Off_3_1_0 = s_St_4_Off_3;
          };
        } else {
          s_St_4_Off_2_0 = s_St_4_Off_2;
          if (s_St_4_Off_2_0) {
            s_St_4_Off_3_0_1 = s_St_4_Off_3;
          } else {
            s_St_4_Off_3_0_0 = s_St_4_Off_3;
          };
        };
      } else {
        if (c) {
          v_42 = true;
        } else {
          v_42 = self->pnr;
        };
        if (t) {
          r_St_4_Online = true;
        } else {
          r_St_4_Online = v_42;
        };
        v_221 = r_St_4_Online;
        if (c) {
          v_41_1 = true;
        } else {
          v_41_1 = true;
        };
        if (t) {
          s_St_4_Online_1 = false;
        } else {
          s_St_4_Online_1 = v_41_1;
        };
        v_206 = s_St_4_Online_1;
        if (c) {
          v_41_2 = true;
        } else {
          v_41_2 = true;
        };
        if (t) {
          s_St_4_Online_2 = false;
        } else {
          s_St_4_Online_2 = v_41_2;
        };
        v_207 = s_St_4_Online_2;
        if (c) {
          v_41_3 = true;
        } else {
          v_41_3 = false;
        };
        if (t) {
          s_St_4_Online_3 = true;
        } else {
          s_St_4_Online_3 = v_41_3;
        };
        v_208 = s_St_4_Online_3;
        if (v_41_1) {
          v_41_2_1 = v_41_2;
          if (v_41_2_1) {
            v_41_3_1_1 = v_41_3;
          } else {
            v_41_3_1_0 = v_41_3;
          };
        } else {
          v_41_2_0 = v_41_2;
          if (v_41_2_0) {
            v_41_3_0_1 = v_41_3;
          } else {
            v_41_3_0_0 = v_41_3;
          };
        };
        if (s_St_4_Online_1) {
          s_St_4_Online_2_1 = s_St_4_Online_2;
          if (s_St_4_Online_2_1) {
            s_St_4_Online_3_1_1 = s_St_4_Online_3;
          } else {
            s_St_4_Online_3_1_0 = s_St_4_Online_3;
          };
        } else {
          s_St_4_Online_2_0 = s_St_4_Online_2;
          if (s_St_4_Online_2_0) {
            s_St_4_Online_3_0_1 = s_St_4_Online_3;
          } else {
            s_St_4_Online_3_0_0 = s_St_4_Online_3;
          };
        };
      };
      v_215 = v_206;
      v_216 = v_207;
      v_217 = v_208;
      v_223 = v_221;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_222 = true;
        v_209 = true;
        v_210 = true;
        v_211 = true;
      } else {
        if (c) {
          v_40 = true;
        } else {
          v_40 = self->pnr;
        };
        if (t) {
          r_St_4_Sleep = true;
        } else {
          r_St_4_Sleep = v_40;
        };
        v_222 = r_St_4_Sleep;
        if (c) {
          v_1 = true;
        } else {
          v_1 = true;
        };
        if (t) {
          s_St_4_Sleep_1 = false;
        } else {
          s_St_4_Sleep_1 = v_1;
        };
        v_209 = s_St_4_Sleep_1;
        if (c) {
          v_2 = true;
        } else {
          v_2 = false;
        };
        if (t) {
          s_St_4_Sleep_2 = false;
        } else {
          s_St_4_Sleep_2 = v_2;
        };
        v_210 = s_St_4_Sleep_2;
        if (c) {
          v_3 = true;
        } else {
          v_3 = false;
        };
        if (t) {
          s_St_4_Sleep_3 = false;
        } else {
          s_St_4_Sleep_3 = v_3;
        };
        v_211 = s_St_4_Sleep_3;
      };
      v_215 = v_209;
      v_216 = v_210;
      v_217 = v_211;
      v_223 = v_222;
      if (!(ck_3_1_0)) {
        if (v_1) {
          v_2_1 = v_2;
          if (v_2_1) {
            v_3_1_1 = v_3;
          } else {
            v_3_1_0 = v_3;
          };
        } else {
          v_2_0 = v_2;
          if (v_2_0) {
            v_3_0_1 = v_3;
          } else {
            v_3_0_0 = v_3;
          };
        };
        if (s_St_4_Sleep_1) {
          s_St_4_Sleep_2_1 = s_St_4_Sleep_2;
          if (s_St_4_Sleep_2_1) {
            s_St_4_Sleep_3_1_1 = s_St_4_Sleep_3;
          } else {
            s_St_4_Sleep_3_1_0 = s_St_4_Sleep_3;
          };
        } else {
          s_St_4_Sleep_2_0 = s_St_4_Sleep_2;
          if (s_St_4_Sleep_2_0) {
            s_St_4_Sleep_3_0_1 = s_St_4_Sleep_3;
          } else {
            s_St_4_Sleep_3_0_0 = s_St_4_Sleep_3;
          };
        };
      };
    };
    s_1 = v_215;
    s_2 = v_216;
    s_3 = v_217;
    r = v_223;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_218 = true;
      v_219 = true;
      v_220 = true;
      v_225 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (c) {
          v_45 = true;
          v_44_1 = true;
          v_44_2 = true;
          v_44_3 = true;
        } else {
          v_45 = self->pnr;
          v_44_1 = false;
          v_44_2 = false;
          v_44_3 = true;
        };
        v_43 = !(o);
        if (v_43) {
          v_47 = true;
        } else {
          v_47 = v_45;
        };
        if (o) {
          r_St_4_Teste = true;
        } else {
          r_St_4_Teste = v_47;
        };
        v_224 = r_St_4_Teste;
        if (v_43) {
          v_46_1 = true;
        } else {
          v_46_1 = v_44_1;
        };
        if (o) {
          s_St_4_Teste_1 = true;
        } else {
          s_St_4_Teste_1 = v_46_1;
        };
        v_212 = s_St_4_Teste_1;
        if (v_43) {
          v_46_2 = false;
        } else {
          v_46_2 = v_44_2;
        };
        if (o) {
          s_St_4_Teste_2 = true;
        } else {
          s_St_4_Teste_2 = v_46_2;
        };
        v_213 = s_St_4_Teste_2;
        if (v_43) {
          v_46_3 = false;
        } else {
          v_46_3 = v_44_3;
        };
        if (o) {
          s_St_4_Teste_3 = false;
        } else {
          s_St_4_Teste_3 = v_46_3;
        };
        v_214 = s_St_4_Teste_3;
        if (v_44_1) {
          v_44_2_1 = v_44_2;
          if (v_44_2_1) {
            v_44_3_1_1 = v_44_3;
          } else {
            v_44_3_1_0 = v_44_3;
          };
        } else {
          v_44_2_0 = v_44_2;
          if (v_44_2_0) {
            v_44_3_0_1 = v_44_3;
          } else {
            v_44_3_0_0 = v_44_3;
          };
        };
        if (v_46_1) {
          v_46_2_1 = v_46_2;
          if (v_46_2_1) {
            v_46_3_1_1 = v_46_3;
          } else {
            v_46_3_1_0 = v_46_3;
          };
        } else {
          v_46_2_0 = v_46_2;
          if (v_46_2_0) {
            v_46_3_0_1 = v_46_3;
          } else {
            v_46_3_0_0 = v_46_3;
          };
        };
      } else {
        if (c) {
          v_49 = true;
        } else {
          v_49 = self->pnr;
        };
        if (t) {
          r_St_4_Wait = true;
        } else {
          r_St_4_Wait = v_49;
        };
        if (c) {
          v_48_1 = true;
        } else {
          v_48_1 = false;
        };
        if (t) {
          s_St_4_Wait_1 = false;
        } else {
          s_St_4_Wait_1 = v_48_1;
        };
        if (c) {
          v_48_2 = true;
        } else {
          v_48_2 = false;
        };
        if (t) {
          s_St_4_Wait_2 = false;
        } else {
          s_St_4_Wait_2 = v_48_2;
        };
        if (c) {
          v_48_3 = true;
        } else {
          v_48_3 = false;
        };
        if (t) {
          s_St_4_Wait_3 = true;
        } else {
          s_St_4_Wait_3 = v_48_3;
        };
        v_224 = r_St_4_Wait;
        v_212 = s_St_4_Wait_1;
        v_213 = s_St_4_Wait_2;
        v_214 = s_St_4_Wait_3;
        if (v_48_1) {
          v_48_2_1 = v_48_2;
          if (v_48_2_1) {
            v_48_3_1_1 = v_48_3;
          } else {
            v_48_3_1_0 = v_48_3;
          };
        } else {
          v_48_2_0 = v_48_2;
          if (v_48_2_0) {
            v_48_3_0_1 = v_48_3;
          } else {
            v_48_3_0_0 = v_48_3;
          };
        };
      };
      v_218 = v_212;
      v_219 = v_213;
      v_220 = v_214;
      v_225 = v_224;
    };
    s_1 = v_218;
    s_2 = v_219;
    s_3 = v_220;
    r = v_225;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  ck_5_3 = s_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        estado_St_4_Off = 0;
        desligado_St_4_Off = true;
        atuador_St_4_Off = false;
        nr_St_4_Off = false;
        ns_St_4_Off_1 = true;
        ns_St_4_Off_2 = true;
        ns_St_4_Off_3 = true;
        v_178 = estado_St_4_Off;
        v_168 = desligado_St_4_Off;
        v_173 = atuador_St_4_Off;
        v_198 = nr_St_4_Off;
        v_183 = ns_St_4_Off_1;
        v_184 = ns_St_4_Off_2;
        v_185 = ns_St_4_Off_3;
        if (ns_St_4_Off_1) {
          ns_St_4_Off_2_1 = ns_St_4_Off_2;
          if (ns_St_4_Off_2_1) {
            ns_St_4_Off_3_1_1 = ns_St_4_Off_3;
          } else {
            ns_St_4_Off_3_1_0 = ns_St_4_Off_3;
          };
        } else {
          ns_St_4_Off_2_0 = ns_St_4_Off_2;
          if (ns_St_4_Off_2_0) {
            ns_St_4_Off_3_0_1 = ns_St_4_Off_3;
          } else {
            ns_St_4_Off_3_0_0 = ns_St_4_Off_3;
          };
        };
      } else {
        estado_St_4_Online = 4;
        v_178 = estado_St_4_Online;
        desligado_St_4_Online = false;
        v_168 = desligado_St_4_Online;
        atuador_St_4_Online = true;
        v_173 = atuador_St_4_Online;
        nr_St_4_Online = false;
        v_198 = nr_St_4_Online;
        ns_St_4_Online_1 = true;
        v_183 = ns_St_4_Online_1;
        ns_St_4_Online_2 = true;
        v_184 = ns_St_4_Online_2;
        ns_St_4_Online_3 = false;
        v_185 = ns_St_4_Online_3;
        if (ns_St_4_Online_1) {
          ns_St_4_Online_2_1 = ns_St_4_Online_2;
          if (ns_St_4_Online_2_1) {
            ns_St_4_Online_3_1_1 = ns_St_4_Online_3;
          } else {
            ns_St_4_Online_3_1_0 = ns_St_4_Online_3;
          };
        } else {
          ns_St_4_Online_2_0 = ns_St_4_Online_2;
          if (ns_St_4_Online_2_0) {
            ns_St_4_Online_3_0_1 = ns_St_4_Online_3;
          } else {
            ns_St_4_Online_3_0_0 = ns_St_4_Online_3;
          };
        };
      };
      v_170 = v_168;
      v_175 = v_173;
      v_180 = v_178;
      v_192 = v_183;
      v_193 = v_184;
      v_194 = v_185;
      v_200 = v_198;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_179 = 0;
        v_169 = true;
        v_174 = true;
        v_199 = true;
        v_186 = true;
        v_187 = true;
        v_188 = true;
      } else {
        estado_St_4_Sleep = 1;
        v_179 = estado_St_4_Sleep;
        desligado_St_4_Sleep = false;
        v_169 = desligado_St_4_Sleep;
        atuador_St_4_Sleep = false;
        v_174 = atuador_St_4_Sleep;
        nr_St_4_Sleep = false;
        v_199 = nr_St_4_Sleep;
        ns_St_4_Sleep_1 = true;
        v_186 = ns_St_4_Sleep_1;
        ns_St_4_Sleep_2 = false;
        v_187 = ns_St_4_Sleep_2;
        ns_St_4_Sleep_3 = false;
        v_188 = ns_St_4_Sleep_3;
      };
      v_170 = v_169;
      v_175 = v_174;
      v_180 = v_179;
      v_192 = v_186;
      v_193 = v_187;
      v_194 = v_188;
      v_200 = v_199;
      if (!(ck_5_3_1_0)) {
        if (ns_St_4_Sleep_1) {
          ns_St_4_Sleep_2_1 = ns_St_4_Sleep_2;
          if (ns_St_4_Sleep_2_1) {
            ns_St_4_Sleep_3_1_1 = ns_St_4_Sleep_3;
          } else {
            ns_St_4_Sleep_3_1_0 = ns_St_4_Sleep_3;
          };
        } else {
          ns_St_4_Sleep_2_0 = ns_St_4_Sleep_2;
          if (ns_St_4_Sleep_2_0) {
            ns_St_4_Sleep_3_0_1 = ns_St_4_Sleep_3;
          } else {
            ns_St_4_Sleep_3_0_0 = ns_St_4_Sleep_3;
          };
        };
      };
    };
    _out->desligado = v_170;
    _out->atuador = v_175;
    _out->estado = v_180;
    ns_1 = v_192;
    ns_2 = v_193;
    ns_3 = v_194;
    nr = v_200;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_172 = true;
      v_177 = true;
      v_182 = 0;
      v_195 = true;
      v_196 = true;
      v_197 = true;
      v_202 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        estado_St_4_Teste = 3;
        v_181 = estado_St_4_Teste;
        desligado_St_4_Teste = false;
        v_171 = desligado_St_4_Teste;
        atuador_St_4_Teste = true;
        v_176 = atuador_St_4_Teste;
        nr_St_4_Teste = false;
        v_201 = nr_St_4_Teste;
        ns_St_4_Teste_1 = false;
        v_189 = ns_St_4_Teste_1;
        ns_St_4_Teste_2 = false;
        v_190 = ns_St_4_Teste_2;
        ns_St_4_Teste_3 = true;
        v_191 = ns_St_4_Teste_3;
      } else {
        estado_St_4_Wait = 2;
        desligado_St_4_Wait = false;
        atuador_St_4_Wait = true;
        nr_St_4_Wait = false;
        ns_St_4_Wait_1 = false;
        ns_St_4_Wait_2 = false;
        ns_St_4_Wait_3 = false;
        v_181 = estado_St_4_Wait;
        v_171 = desligado_St_4_Wait;
        v_176 = atuador_St_4_Wait;
        v_201 = nr_St_4_Wait;
        v_189 = ns_St_4_Wait_1;
        v_190 = ns_St_4_Wait_2;
        v_191 = ns_St_4_Wait_3;
      };
      v_172 = v_171;
      v_177 = v_176;
      v_182 = v_181;
      v_195 = v_189;
      v_196 = v_190;
      v_197 = v_191;
      v_202 = v_201;
    };
    _out->desligado = v_172;
    _out->atuador = v_177;
    _out->estado = v_182;
    ns_1 = v_195;
    ns_2 = v_196;
    ns_3 = v_197;
    nr = v_202;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_5_1)) {
    if (!(ck_5_2_0)) {
      if (ck_5_3_0_0) {
        if (ns_St_4_Teste_1) {
          ns_St_4_Teste_2_1 = ns_St_4_Teste_2;
          if (ns_St_4_Teste_2_1) {
            ns_St_4_Teste_3_1_1 = ns_St_4_Teste_3;
          } else {
            ns_St_4_Teste_3_1_0 = ns_St_4_Teste_3;
          };
        } else {
          ns_St_4_Teste_2_0 = ns_St_4_Teste_2;
          if (ns_St_4_Teste_2_0) {
            ns_St_4_Teste_3_0_1 = ns_St_4_Teste_3;
          } else {
            ns_St_4_Teste_3_0_0 = ns_St_4_Teste_3;
          };
        };
      } else {
        if (ns_St_4_Wait_1) {
          ns_St_4_Wait_2_1 = ns_St_4_Wait_2;
          if (ns_St_4_Wait_2_1) {
            ns_St_4_Wait_3_1_1 = ns_St_4_Wait_3;
          } else {
            ns_St_4_Wait_3_1_0 = ns_St_4_Wait_3;
          };
        } else {
          ns_St_4_Wait_2_0 = ns_St_4_Wait_2;
          if (ns_St_4_Wait_2_0) {
            ns_St_4_Wait_3_0_1 = ns_St_4_Wait_3;
          } else {
            ns_St_4_Wait_3_0_0 = ns_St_4_Wait_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_4_Teste_1) {
          s_St_4_Teste_2_1 = s_St_4_Teste_2;
          if (s_St_4_Teste_2_1) {
            s_St_4_Teste_3_1_1 = s_St_4_Teste_3;
          } else {
            s_St_4_Teste_3_1_0 = s_St_4_Teste_3;
          };
        } else {
          s_St_4_Teste_2_0 = s_St_4_Teste_2;
          if (s_St_4_Teste_2_0) {
            s_St_4_Teste_3_0_1 = s_St_4_Teste_3;
          } else {
            s_St_4_Teste_3_0_0 = s_St_4_Teste_3;
          };
        };
      } else {
        if (s_St_4_Wait_1) {
          s_St_4_Wait_2_1 = s_St_4_Wait_2;
          if (s_St_4_Wait_2_1) {
            s_St_4_Wait_3_1_1 = s_St_4_Wait_3;
          } else {
            s_St_4_Wait_3_1_0 = s_St_4_Wait_3;
          };
        } else {
          s_St_4_Wait_2_0 = s_St_4_Wait_2;
          if (s_St_4_Wait_2_0) {
            s_St_4_Wait_3_0_1 = s_St_4_Wait_3;
          } else {
            s_St_4_Wait_3_0_0 = s_St_4_Wait_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_203 = ns_1;
  self->v_204 = ns_2;
  self->v_205 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_261 = true;
  self->v_262 = false;
  self->v_263 = false;
  self->pnr_1 = false;
  self->ck_16_1 = true;
  self->pnr_2 = false;
  self->v_294 = false;
  self->v_295 = false;
  self->pnr_3 = false;
  self->ck_12_1 = true;
  self->pnr_4 = false;
  self->ck_10_1 = true;
}

void Ups_controlador__contrato_step(int cb, int l1b, int l2b, int vb, int td,
                                    int tm, int om,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int ns_St_5_Descarregado_2_0;
  int ns_St_5_Descarregado_3_0_0;
  int ns_St_5_Descarregado_3_0_1;
  int ns_St_5_Descarregado_2_1;
  int ns_St_5_Descarregado_3_1_0;
  int ns_St_5_Descarregado_3_1_1;
  int estado_bat_St_5_Descarregado_2_0;
  int estado_bat_St_5_Descarregado_3_0_0;
  int estado_bat_St_5_Descarregado_3_0_1;
  int estado_bat_St_5_Descarregado_2_1;
  int estado_bat_St_5_Descarregado_3_1_0;
  int estado_bat_St_5_Descarregado_3_1_1;
  int ns_St_5_Limiar2_2_0;
  int ns_St_5_Limiar2_3_0_0;
  int ns_St_5_Limiar2_3_0_1;
  int ns_St_5_Limiar2_2_1;
  int ns_St_5_Limiar2_3_1_0;
  int ns_St_5_Limiar2_3_1_1;
  int estado_bat_St_5_Limiar2_2_0;
  int estado_bat_St_5_Limiar2_3_0_0;
  int estado_bat_St_5_Limiar2_3_0_1;
  int estado_bat_St_5_Limiar2_2_1;
  int estado_bat_St_5_Limiar2_3_1_0;
  int estado_bat_St_5_Limiar2_3_1_1;
  int ns_St_5_Limiar1_2_0;
  int ns_St_5_Limiar1_3_0_0;
  int ns_St_5_Limiar1_3_0_1;
  int ns_St_5_Limiar1_2_1;
  int ns_St_5_Limiar1_3_1_0;
  int ns_St_5_Limiar1_3_1_1;
  int estado_bat_St_5_Limiar1_2_0;
  int estado_bat_St_5_Limiar1_3_0_0;
  int estado_bat_St_5_Limiar1_3_0_1;
  int estado_bat_St_5_Limiar1_2_1;
  int estado_bat_St_5_Limiar1_3_1_0;
  int estado_bat_St_5_Limiar1_3_1_1;
  int ns_St_5_Carregado_2_0;
  int ns_St_5_Carregado_3_0_0;
  int ns_St_5_Carregado_3_0_1;
  int ns_St_5_Carregado_2_1;
  int ns_St_5_Carregado_3_1_0;
  int ns_St_5_Carregado_3_1_1;
  int estado_bat_St_5_Carregado_2_0;
  int estado_bat_St_5_Carregado_3_0_0;
  int estado_bat_St_5_Carregado_3_0_1;
  int estado_bat_St_5_Carregado_2_1;
  int estado_bat_St_5_Carregado_3_1_0;
  int estado_bat_St_5_Carregado_3_1_1;
  int ns_St_5_Erro_2_0;
  int ns_St_5_Erro_3_0_0;
  int ns_St_5_Erro_3_0_1;
  int ns_St_5_Erro_2_1;
  int ns_St_5_Erro_3_1_0;
  int ns_St_5_Erro_3_1_1;
  int estado_bat_St_5_Erro_2_0;
  int estado_bat_St_5_Erro_3_0_0;
  int estado_bat_St_5_Erro_3_0_1;
  int estado_bat_St_5_Erro_2_1;
  int estado_bat_St_5_Erro_3_1_0;
  int estado_bat_St_5_Erro_3_1_1;
  int ck_19_2_0;
  int ck_19_3_0_0;
  int ck_19_3_0_1;
  int ck_19_2_1;
  int ck_19_3_1_0;
  int ck_19_3_1_1;
  int nr_St_5_Descarregado;
  int ns_St_5_Descarregado_3;
  int ns_St_5_Descarregado_2;
  int ns_St_5_Descarregado_1;
  int estado_bat_St_5_Descarregado_3;
  int estado_bat_St_5_Descarregado_2;
  int estado_bat_St_5_Descarregado_1;
  int nr_St_5_Limiar2;
  int ns_St_5_Limiar2_3;
  int ns_St_5_Limiar2_2;
  int ns_St_5_Limiar2_1;
  int estado_bat_St_5_Limiar2_3;
  int estado_bat_St_5_Limiar2_2;
  int estado_bat_St_5_Limiar2_1;
  int nr_St_5_Limiar1;
  int ns_St_5_Limiar1_3;
  int ns_St_5_Limiar1_2;
  int ns_St_5_Limiar1_1;
  int estado_bat_St_5_Limiar1_3;
  int estado_bat_St_5_Limiar1_2;
  int estado_bat_St_5_Limiar1_1;
  int nr_St_5_Carregado;
  int ns_St_5_Carregado_3;
  int ns_St_5_Carregado_2;
  int ns_St_5_Carregado_1;
  int estado_bat_St_5_Carregado_3;
  int estado_bat_St_5_Carregado_2;
  int estado_bat_St_5_Carregado_1;
  int nr_St_5_Erro;
  int ns_St_5_Erro_3;
  int ns_St_5_Erro_2;
  int ns_St_5_Erro_1;
  int estado_bat_St_5_Erro_3;
  int estado_bat_St_5_Erro_2;
  int estado_bat_St_5_Erro_1;
  int ck_19_3;
  int ck_19_2;
  int ck_19_1;
  int v_70_2_0;
  int v_70_3_0_0;
  int v_70_3_0_1;
  int v_70_2_1;
  int v_70_3_1_0;
  int v_70_3_1_1;
  int v_68_2_0;
  int v_68_3_0_0;
  int v_68_3_0_1;
  int v_68_2_1;
  int v_68_3_1_0;
  int v_68_3_1_1;
  int v_66_2_0;
  int v_66_3_0_0;
  int v_66_3_0_1;
  int v_66_2_1;
  int v_66_3_1_0;
  int v_66_3_1_1;
  int v_71;
  int v_70_3;
  int v_70_2;
  int v_70_1;
  int v_69;
  int v_68_3;
  int v_68_2;
  int v_68_1;
  int v_67;
  int v_66_3;
  int v_66_2;
  int v_66_1;
  int v_64_2_0;
  int v_64_3_0_0;
  int v_64_3_0_1;
  int v_64_2_1;
  int v_64_3_1_0;
  int v_64_3_1_1;
  int v_65;
  int v_64_3;
  int v_64_2;
  int v_64_1;
  int v_62_2_0;
  int v_62_3_0_0;
  int v_62_3_0_1;
  int v_62_2_1;
  int v_62_3_1_0;
  int v_62_3_1_1;
  int v_60_2_0;
  int v_60_3_0_0;
  int v_60_3_0_1;
  int v_60_2_1;
  int v_60_3_1_0;
  int v_60_3_1_1;
  int v_63;
  int v_62_3;
  int v_62_2;
  int v_62_1;
  int v_61;
  int v_60_3;
  int v_60_2;
  int v_60_1;
  int v_58_2_0;
  int v_58_3_0_0;
  int v_58_3_0_1;
  int v_58_2_1;
  int v_58_3_1_0;
  int v_58_3_1_1;
  int v_56_2_0;
  int v_56_3_0_0;
  int v_56_3_0_1;
  int v_56_2_1;
  int v_56_3_1_0;
  int v_56_3_1_1;
  int v_59;
  int v_58_3;
  int v_58_2;
  int v_58_1;
  int v_57;
  int v_56_3;
  int v_56_2;
  int v_56_1;
  int v_54_2_0;
  int v_54_3_0_0;
  int v_54_3_0_1;
  int v_54_2_1;
  int v_54_3_1_0;
  int v_54_3_1_1;
  int v_55;
  int v_54_3;
  int v_54_2;
  int v_54_1;
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
  int s_St_5_Descarregado_2_0;
  int s_St_5_Descarregado_3_0_0;
  int s_St_5_Descarregado_3_0_1;
  int s_St_5_Descarregado_2_1;
  int s_St_5_Descarregado_3_1_0;
  int s_St_5_Descarregado_3_1_1;
  int s_St_5_Limiar2_2_0;
  int s_St_5_Limiar2_3_0_0;
  int s_St_5_Limiar2_3_0_1;
  int s_St_5_Limiar2_2_1;
  int s_St_5_Limiar2_3_1_0;
  int s_St_5_Limiar2_3_1_1;
  int s_St_5_Limiar1_2_0;
  int s_St_5_Limiar1_3_0_0;
  int s_St_5_Limiar1_3_0_1;
  int s_St_5_Limiar1_2_1;
  int s_St_5_Limiar1_3_1_0;
  int s_St_5_Limiar1_3_1_1;
  int s_St_5_Carregado_2_0;
  int s_St_5_Carregado_3_0_0;
  int s_St_5_Carregado_3_0_1;
  int s_St_5_Carregado_2_1;
  int s_St_5_Carregado_3_1_0;
  int s_St_5_Carregado_3_1_1;
  int s_St_5_Erro_2_0;
  int s_St_5_Erro_3_0_0;
  int s_St_5_Erro_3_0_1;
  int s_St_5_Erro_2_1;
  int s_St_5_Erro_3_1_0;
  int s_St_5_Erro_3_1_1;
  int ck_18_2_0;
  int ck_18_3_0_0;
  int ck_18_3_0_1;
  int ck_18_2_1;
  int ck_18_3_1_0;
  int ck_18_3_1_1;
  int r_St_5_Descarregado;
  int s_St_5_Descarregado_3;
  int s_St_5_Descarregado_2;
  int s_St_5_Descarregado_1;
  int r_St_5_Limiar2;
  int s_St_5_Limiar2_3;
  int s_St_5_Limiar2_2;
  int s_St_5_Limiar2_1;
  int r_St_5_Limiar1;
  int s_St_5_Limiar1_3;
  int s_St_5_Limiar1_2;
  int s_St_5_Limiar1_1;
  int r_St_5_Carregado;
  int s_St_5_Carregado_3;
  int s_St_5_Carregado_2;
  int s_St_5_Carregado_1;
  int r_St_5_Erro;
  int s_St_5_Erro_3;
  int s_St_5_Erro_2;
  int s_St_5_Erro_1;
  int ck_18_3;
  int ck_18_2;
  int ck_18_1;
  int nr_1_St_6_Noite;
  int ns_1_St_6_Noite_1;
  int isday_St_6_Noite;
  int nr_1_St_6_Dia;
  int ns_1_St_6_Dia_1;
  int isday_St_6_Dia;
  int ck_17_1;
  int r_1_St_6_Noite;
  int s_1_St_6_Noite_1;
  int r_1_St_6_Dia;
  int s_1_St_6_Dia_1;
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
  int ns_2_St_7_Boot_2_0;
  int ns_2_St_7_Boot_2_1;
  int ns_2_St_7_Off_2_0;
  int ns_2_St_7_Off_2_1;
  int ns_2_St_7_Rlevel4_2_0;
  int ns_2_St_7_Rlevel4_2_1;
  int ck_15_2_0;
  int ck_15_2_1;
  int nr_2_St_7_Boot;
  int ns_2_St_7_Boot_2;
  int ns_2_St_7_Boot_1;
  int estado_2_St_7_Boot;
  int atuador_St_7_Boot;
  int nr_2_St_7_Off;
  int ns_2_St_7_Off_2;
  int ns_2_St_7_Off_1;
  int estado_2_St_7_Off;
  int atuador_St_7_Off;
  int nr_2_St_7_Rlevel4;
  int ns_2_St_7_Rlevel4_2;
  int ns_2_St_7_Rlevel4_1;
  int estado_2_St_7_Rlevel4;
  int atuador_St_7_Rlevel4;
  int ck_15_2;
  int ck_15_1;
  int v_52_2_0;
  int v_52_2_1;
  int v_53;
  int v_52_2;
  int v_52_1;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int s_2_St_7_Boot_2_0;
  int s_2_St_7_Boot_2_1;
  int s_2_St_7_Off_2_0;
  int s_2_St_7_Off_2_1;
  int s_2_St_7_Rlevel4_2_0;
  int s_2_St_7_Rlevel4_2_1;
  int ck_14_2_0;
  int ck_14_2_1;
  int r_2_St_7_Boot;
  int s_2_St_7_Boot_2;
  int s_2_St_7_Boot_1;
  int r_2_St_7_Off;
  int s_2_St_7_Off_2;
  int s_2_St_7_Off_1;
  int r_2_St_7_Rlevel4;
  int s_2_St_7_Rlevel4_2;
  int s_2_St_7_Rlevel4_1;
  int ck_14_2;
  int ck_14_1;
  int nr_3_St_8_Lig;
  int ns_3_St_8_Lig_1;
  int estado_1_St_8_Lig;
  int nr_3_St_8_Des;
  int ns_3_St_8_Des_1;
  int estado_1_St_8_Des;
  int ck_13_1;
  int r_3_St_8_Lig;
  int s_3_St_8_Lig_1;
  int r_3_St_8_Des;
  int s_3_St_8_Des_1;
  int nr_4_St_9_Lig;
  int ns_4_St_9_Lig_1;
  int estado_St_9_Lig;
  int nr_4_St_9_Des;
  int ns_4_St_9_Des_1;
  int estado_St_9_Des;
  int ck_11_1;
  int r_4_St_9_Lig;
  int s_4_St_9_Lig_1;
  int r_4_St_9_Des;
  int s_4_St_9_Des_1;
  int ps_B25_false;
  int pm_B25_false;
  int pb_B25_false;
  int erro_B25_false;
  int ps_B25_true;
  int pm_B25_true;
  int pb_B25_true;
  int erro_B25_true;
  int ck_6;
  int ps_B50_false;
  int pm_B50_false;
  int pb_B50_false;
  int erro_B50_false;
  int ps_B50_true;
  int pm_B50_true;
  int pb_B50_true;
  int erro_B50_true;
  int ck_7;
  int ps_B75_false;
  int pm_B75_false;
  int pb_B75_false;
  int erro_B75_false;
  int ps_B75_true;
  int pm_B75_true;
  int pb_B75_true;
  int erro_B75_true;
  int ck_8;
  int ps_B100_false;
  int pm_B100_false;
  int pb_B100_false;
  int erro_B100_false;
  int ps_B100_true;
  int pm_B100_true;
  int pb_B100_true;
  int erro_B100_true;
  int ck_9;
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
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int ps_B100;
  int pm_B100;
  int pb_B100;
  int erro_B100;
  int ps_B75;
  int pm_B75;
  int pb_B75;
  int erro_B75;
  int ps_B50;
  int pm_B50;
  int pb_B50;
  int erro_B50;
  int ps_B25;
  int pm_B25;
  int pb_B25;
  int erro_B25;
  int ps_BERR;
  int pm_BERR;
  int pb_BERR;
  int erro_BERR;
  int ck_3;
  int ck_2;
  int ck_1;
  int bat12v_2_0;
  int bat12v_3_0_0;
  int bat12v_3_0_1;
  int bat12v_2_1;
  int bat12v_3_1_0;
  int bat12v_3_1_1;
  int s_2_2_0;
  int s_2_2_1;
  int ns_2_2_0;
  int ns_2_2_1;
  int s_2_3_0;
  int s_3_2_0_0;
  int s_3_2_0_1;
  int s_2_3_1;
  int s_3_2_1_0;
  int s_3_2_1_1;
  int ns_2_3_0;
  int ns_3_2_0_0;
  int ns_3_2_0_1;
  int ns_2_3_1;
  int ns_3_2_1_0;
  int ns_3_2_1_1;
  int estado_bat_2_0;
  int estado_bat_3_0_0;
  int estado_bat_3_0_1;
  int estado_bat_2_1;
  int estado_bat_3_1_0;
  int estado_bat_3_1_1;
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
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_2;
  int s_2_1;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_3_2;
  int s_2_3;
  int s_1_2;
  int ns_3_2;
  int ns_2_3;
  int ns_1_2;
  int r;
  int nr;
  int cp_1;
  int l1;
  int l2;
  int v;
  int a;
  int b;
  int c;
  int d;
  int e;
  int estado_bat_3;
  int estado_bat_2;
  int estado_bat_1;
  int t_1;
  int isday;
  int c_atx;
  int off_atx;
  int t;
  int atuador;
  int estado_2;
  int ca_2;
  int estado_1;
  int ca_1;
  int estado;
  int v_50;
  int v_51;
  int ts;
  int co;
  int ca;
  int cm;
  int cp;
  cp_1 = cb;
  v_89 = !(cp_1);
  v_83 = !(cp_1);
  v_78 = !(cp_1);
  l1 = l1b;
  v_90 = (v_89&&l1);
  v_87 = (cp_1&&l1);
  v_84 = !(l1);
  v_85 = (v_83&&v_84);
  v_79 = !(l1);
  v_80 = (v_78&&v_79);
  l2 = l2b;
  v_91 = (v_90&&l2);
  v_88 = (v_87&&l2);
  v_86 = (v_85&&l2);
  v_81 = !(l2);
  v_82 = (v_80&&v_81);
  v = vb;
  a = (v_91&&v);
  v_72 = !(a);
  b = (v_88&&v);
  v_73 = !(b);
  v_74 = (v_72&&v_73);
  c = (v_86&&v);
  v_75 = !(c);
  v_76 = (v_74&&v_75);
  d = (v_82&&v);
  v_77 = !(d);
  e = (v_76&&v_77);
  ck_18_1 = self->v_261;
  ck_18_2 = self->v_262;
  ck_18_3 = self->v_263;
  t_1 = td;
  ck_14_1 = self->v_294;
  ck_14_2 = self->v_295;
  Contrato_controller__contrato_controller_step(cb, l1b, l2b, vb, td, tm, om,
                                                self->ck_10_1, self->pnr_4,
                                                self->ck_12_1, self->pnr_3,
                                                self->v_295, self->v_294,
                                                self->pnr_2, self->ck_16_1,
                                                self->pnr_1, self->v_263,
                                                self->v_262, self->v_261,
                                                self->pnr, true, true, true,
                                                true, true,
                                                &Contrato_controller__contrato_controller_out_st);
  ts = Contrato_controller__contrato_controller_out_st.contrato_ts;
  co = Contrato_controller__contrato_controller_out_st.contrato_co;
  ca = Contrato_controller__contrato_controller_out_st.contrato_ca;
  cm = Contrato_controller__contrato_controller_out_st.contrato_cm;
  cp = Contrato_controller__contrato_controller_out_st.contrato_cp;
  c_atx = ca;
  off_atx = co;
  t = ts;
  ca_2 = cm;
  ca_1 = cp;
  if (ck_18_1) {
    ck_18_2_1 = ck_18_2;
    if (ck_18_2_1) {
      ck_18_3_1_1 = ck_18_3;
      if (ck_18_3_1_1) {
        if (e) {
          v_65 = true;
        } else {
          v_65 = self->pnr;
        };
        if (a) {
          r_St_5_Carregado = true;
        } else {
          r_St_5_Carregado = v_65;
        };
        if (e) {
          v_64_1 = true;
        } else {
          v_64_1 = true;
        };
        if (a) {
          s_St_5_Carregado_1 = false;
        } else {
          s_St_5_Carregado_1 = v_64_1;
        };
        if (e) {
          v_64_2 = false;
        } else {
          v_64_2 = true;
        };
        if (a) {
          s_St_5_Carregado_2 = false;
        } else {
          s_St_5_Carregado_2 = v_64_2;
        };
        if (e) {
          v_64_3 = false;
        } else {
          v_64_3 = true;
        };
        if (a) {
          s_St_5_Carregado_3 = true;
        } else {
          s_St_5_Carregado_3 = v_64_3;
        };
        v_279 = r_St_5_Carregado;
        v_264 = s_St_5_Carregado_1;
        v_265 = s_St_5_Carregado_2;
        v_266 = s_St_5_Carregado_3;
      } else {
        if (e) {
          v_55 = true;
        } else {
          v_55 = self->pnr;
        };
        if (c) {
          r_St_5_Descarregado = true;
        } else {
          r_St_5_Descarregado = v_55;
        };
        v_279 = r_St_5_Descarregado;
        if (e) {
          v_54_1 = true;
        } else {
          v_54_1 = true;
        };
        if (c) {
          s_St_5_Descarregado_1 = false;
        } else {
          s_St_5_Descarregado_1 = v_54_1;
        };
        v_264 = s_St_5_Descarregado_1;
        if (e) {
          v_54_2 = false;
        } else {
          v_54_2 = true;
        };
        if (c) {
          s_St_5_Descarregado_2 = false;
        } else {
          s_St_5_Descarregado_2 = v_54_2;
        };
        v_265 = s_St_5_Descarregado_2;
        if (e) {
          v_54_3 = false;
        } else {
          v_54_3 = false;
        };
        if (c) {
          s_St_5_Descarregado_3 = false;
        } else {
          s_St_5_Descarregado_3 = v_54_3;
        };
        v_266 = s_St_5_Descarregado_3;
      };
      v_273 = v_264;
      v_274 = v_265;
      v_275 = v_266;
      v_281 = v_279;
      if (ck_18_3_1_1) {
        if (v_64_1) {
          v_64_2_1 = v_64_2;
          if (v_64_2_1) {
            v_64_3_1_1 = v_64_3;
          } else {
            v_64_3_1_0 = v_64_3;
          };
        } else {
          v_64_2_0 = v_64_2;
          if (v_64_2_0) {
            v_64_3_0_1 = v_64_3;
          } else {
            v_64_3_0_0 = v_64_3;
          };
        };
        if (s_St_5_Carregado_1) {
          s_St_5_Carregado_2_1 = s_St_5_Carregado_2;
          if (s_St_5_Carregado_2_1) {
            s_St_5_Carregado_3_1_1 = s_St_5_Carregado_3;
          } else {
            s_St_5_Carregado_3_1_0 = s_St_5_Carregado_3;
          };
        } else {
          s_St_5_Carregado_2_0 = s_St_5_Carregado_2;
          if (s_St_5_Carregado_2_0) {
            s_St_5_Carregado_3_0_1 = s_St_5_Carregado_3;
          } else {
            s_St_5_Carregado_3_0_0 = s_St_5_Carregado_3;
          };
        };
      } else {
        if (v_54_1) {
          v_54_2_1 = v_54_2;
          if (v_54_2_1) {
            v_54_3_1_1 = v_54_3;
          } else {
            v_54_3_1_0 = v_54_3;
          };
        } else {
          v_54_2_0 = v_54_2;
          if (v_54_2_0) {
            v_54_3_0_1 = v_54_3;
          } else {
            v_54_3_0_0 = v_54_3;
          };
        };
        if (s_St_5_Descarregado_1) {
          s_St_5_Descarregado_2_1 = s_St_5_Descarregado_2;
          if (s_St_5_Descarregado_2_1) {
            s_St_5_Descarregado_3_1_1 = s_St_5_Descarregado_3;
          } else {
            s_St_5_Descarregado_3_1_0 = s_St_5_Descarregado_3;
          };
        } else {
          s_St_5_Descarregado_2_0 = s_St_5_Descarregado_2;
          if (s_St_5_Descarregado_2_0) {
            s_St_5_Descarregado_3_0_1 = s_St_5_Descarregado_3;
          } else {
            s_St_5_Descarregado_3_0_0 = s_St_5_Descarregado_3;
          };
        };
      };
    } else {
      ck_18_3_1_0 = ck_18_3;
      if (ck_18_3_1_0) {
        v_280 = true;
        v_267 = true;
        v_268 = true;
        v_269 = true;
      } else {
        if (d) {
          v_67 = true;
        } else {
          v_67 = self->pnr;
        };
        if (c) {
          v_69 = true;
        } else {
          v_69 = v_67;
        };
        if (a) {
          v_71 = true;
        } else {
          v_71 = v_69;
        };
        if (b) {
          r_St_5_Erro = true;
        } else {
          r_St_5_Erro = v_71;
        };
        v_280 = r_St_5_Erro;
        if (d) {
          v_66_1 = true;
        } else {
          v_66_1 = true;
        };
        if (c) {
          v_68_1 = false;
        } else {
          v_68_1 = v_66_1;
        };
        if (a) {
          v_70_1 = false;
        } else {
          v_70_1 = v_68_1;
        };
        if (b) {
          s_St_5_Erro_1 = true;
        } else {
          s_St_5_Erro_1 = v_70_1;
        };
        v_267 = s_St_5_Erro_1;
        if (d) {
          v_66_2 = true;
        } else {
          v_66_2 = false;
        };
        if (c) {
          v_68_2 = false;
        } else {
          v_68_2 = v_66_2;
        };
        if (a) {
          v_70_2 = false;
        } else {
          v_70_2 = v_68_2;
        };
        if (b) {
          s_St_5_Erro_2 = true;
        } else {
          s_St_5_Erro_2 = v_70_2;
        };
        v_268 = s_St_5_Erro_2;
        if (d) {
          v_66_3 = false;
        } else {
          v_66_3 = false;
        };
        if (c) {
          v_68_3 = false;
        } else {
          v_68_3 = v_66_3;
        };
        if (a) {
          v_70_3 = true;
        } else {
          v_70_3 = v_68_3;
        };
        if (b) {
          s_St_5_Erro_3 = true;
        } else {
          s_St_5_Erro_3 = v_70_3;
        };
        v_269 = s_St_5_Erro_3;
        if (v_66_1) {
          v_66_2_1 = v_66_2;
          if (v_66_2_1) {
            v_66_3_1_1 = v_66_3;
          } else {
            v_66_3_1_0 = v_66_3;
          };
        } else {
          v_66_2_0 = v_66_2;
          if (v_66_2_0) {
            v_66_3_0_1 = v_66_3;
          } else {
            v_66_3_0_0 = v_66_3;
          };
        };
        if (v_68_1) {
          v_68_2_1 = v_68_2;
          if (v_68_2_1) {
            v_68_3_1_1 = v_68_3;
          } else {
            v_68_3_1_0 = v_68_3;
          };
        } else {
          v_68_2_0 = v_68_2;
          if (v_68_2_0) {
            v_68_3_0_1 = v_68_3;
          } else {
            v_68_3_0_0 = v_68_3;
          };
        };
        if (v_70_1) {
          v_70_2_1 = v_70_2;
          if (v_70_2_1) {
            v_70_3_1_1 = v_70_3;
          } else {
            v_70_3_1_0 = v_70_3;
          };
        } else {
          v_70_2_0 = v_70_2;
          if (v_70_2_0) {
            v_70_3_0_1 = v_70_3;
          } else {
            v_70_3_0_0 = v_70_3;
          };
        };
        if (s_St_5_Erro_1) {
          s_St_5_Erro_2_1 = s_St_5_Erro_2;
          if (s_St_5_Erro_2_1) {
            s_St_5_Erro_3_1_1 = s_St_5_Erro_3;
          } else {
            s_St_5_Erro_3_1_0 = s_St_5_Erro_3;
          };
        } else {
          s_St_5_Erro_2_0 = s_St_5_Erro_2;
          if (s_St_5_Erro_2_0) {
            s_St_5_Erro_3_0_1 = s_St_5_Erro_3;
          } else {
            s_St_5_Erro_3_0_0 = s_St_5_Erro_3;
          };
        };
      };
      v_273 = v_267;
      v_274 = v_268;
      v_275 = v_269;
      v_281 = v_280;
    };
    s_1_2 = v_273;
    s_2_3 = v_274;
    s_3_2 = v_275;
    r = v_281;
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      ck_18_3_0_1 = ck_18_3;
      v_276 = true;
      v_277 = true;
      v_278 = true;
      v_283 = true;
    } else {
      ck_18_3_0_0 = ck_18_3;
      if (ck_18_3_0_0) {
        if (e) {
          v_61 = true;
        } else {
          v_61 = self->pnr;
        };
        if (c) {
          v_63 = true;
        } else {
          v_63 = v_61;
        };
        if (b) {
          r_St_5_Limiar1 = true;
        } else {
          r_St_5_Limiar1 = v_63;
        };
        if (e) {
          v_60_1 = true;
        } else {
          v_60_1 = false;
        };
        if (c) {
          v_62_1 = false;
        } else {
          v_62_1 = v_60_1;
        };
        if (b) {
          s_St_5_Limiar1_1 = true;
        } else {
          s_St_5_Limiar1_1 = v_62_1;
        };
        if (e) {
          v_60_2 = false;
        } else {
          v_60_2 = false;
        };
        if (c) {
          v_62_2 = false;
        } else {
          v_62_2 = v_60_2;
        };
        if (b) {
          s_St_5_Limiar1_2 = true;
        } else {
          s_St_5_Limiar1_2 = v_62_2;
        };
        if (e) {
          v_60_3 = false;
        } else {
          v_60_3 = true;
        };
        if (c) {
          v_62_3 = false;
        } else {
          v_62_3 = v_60_3;
        };
        if (b) {
          s_St_5_Limiar1_3 = true;
        } else {
          s_St_5_Limiar1_3 = v_62_3;
        };
        v_282 = r_St_5_Limiar1;
        v_270 = s_St_5_Limiar1_1;
        v_271 = s_St_5_Limiar1_2;
        v_272 = s_St_5_Limiar1_3;
        if (v_60_1) {
          v_60_2_1 = v_60_2;
          if (v_60_2_1) {
            v_60_3_1_1 = v_60_3;
          } else {
            v_60_3_1_0 = v_60_3;
          };
        } else {
          v_60_2_0 = v_60_2;
          if (v_60_2_0) {
            v_60_3_0_1 = v_60_3;
          } else {
            v_60_3_0_0 = v_60_3;
          };
        };
        if (v_62_1) {
          v_62_2_1 = v_62_2;
          if (v_62_2_1) {
            v_62_3_1_1 = v_62_3;
          } else {
            v_62_3_1_0 = v_62_3;
          };
        } else {
          v_62_2_0 = v_62_2;
          if (v_62_2_0) {
            v_62_3_0_1 = v_62_3;
          } else {
            v_62_3_0_0 = v_62_3;
          };
        };
      } else {
        if (e) {
          v_57 = true;
        } else {
          v_57 = self->pnr;
        };
        if (d) {
          v_59 = true;
        } else {
          v_59 = v_57;
        };
        if (a) {
          r_St_5_Limiar2 = true;
        } else {
          r_St_5_Limiar2 = v_59;
        };
        v_282 = r_St_5_Limiar2;
        if (e) {
          v_56_1 = true;
        } else {
          v_56_1 = false;
        };
        if (d) {
          v_58_1 = true;
        } else {
          v_58_1 = v_56_1;
        };
        if (a) {
          s_St_5_Limiar2_1 = false;
        } else {
          s_St_5_Limiar2_1 = v_58_1;
        };
        v_270 = s_St_5_Limiar2_1;
        if (e) {
          v_56_2 = false;
        } else {
          v_56_2 = false;
        };
        if (d) {
          v_58_2 = true;
        } else {
          v_58_2 = v_56_2;
        };
        if (a) {
          s_St_5_Limiar2_2 = false;
        } else {
          s_St_5_Limiar2_2 = v_58_2;
        };
        v_271 = s_St_5_Limiar2_2;
        if (e) {
          v_56_3 = false;
        } else {
          v_56_3 = false;
        };
        if (d) {
          v_58_3 = false;
        } else {
          v_58_3 = v_56_3;
        };
        if (a) {
          s_St_5_Limiar2_3 = true;
        } else {
          s_St_5_Limiar2_3 = v_58_3;
        };
        v_272 = s_St_5_Limiar2_3;
        if (v_56_1) {
          v_56_2_1 = v_56_2;
          if (v_56_2_1) {
            v_56_3_1_1 = v_56_3;
          } else {
            v_56_3_1_0 = v_56_3;
          };
        } else {
          v_56_2_0 = v_56_2;
          if (v_56_2_0) {
            v_56_3_0_1 = v_56_3;
          } else {
            v_56_3_0_0 = v_56_3;
          };
        };
        if (v_58_1) {
          v_58_2_1 = v_58_2;
          if (v_58_2_1) {
            v_58_3_1_1 = v_58_3;
          } else {
            v_58_3_1_0 = v_58_3;
          };
        } else {
          v_58_2_0 = v_58_2;
          if (v_58_2_0) {
            v_58_3_0_1 = v_58_3;
          } else {
            v_58_3_0_0 = v_58_3;
          };
        };
      };
      v_276 = v_270;
      v_277 = v_271;
      v_278 = v_272;
      v_283 = v_282;
    };
    s_1_2 = v_276;
    s_2_3 = v_277;
    s_3_2 = v_278;
    r = v_283;
  };
  ck_19_1 = s_1_2;
  ck_19_2 = s_2_3;
  ck_19_3 = s_3_2;
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      ck_19_3_1_1 = ck_19_3;
      if (ck_19_3_1_1) {
        estado_bat_St_5_Carregado_1 = false;
        estado_bat_St_5_Carregado_2 = false;
        estado_bat_St_5_Carregado_3 = true;
        nr_St_5_Carregado = false;
        ns_St_5_Carregado_1 = true;
        ns_St_5_Carregado_2 = true;
        ns_St_5_Carregado_3 = true;
        v_226 = estado_bat_St_5_Carregado_1;
        v_227 = estado_bat_St_5_Carregado_2;
        v_228 = estado_bat_St_5_Carregado_3;
        v_256 = nr_St_5_Carregado;
        v_241 = ns_St_5_Carregado_1;
        v_242 = ns_St_5_Carregado_2;
        v_243 = ns_St_5_Carregado_3;
      } else {
        estado_bat_St_5_Descarregado_1 = true;
        v_226 = estado_bat_St_5_Descarregado_1;
        estado_bat_St_5_Descarregado_2 = true;
        v_227 = estado_bat_St_5_Descarregado_2;
        estado_bat_St_5_Descarregado_3 = true;
        v_228 = estado_bat_St_5_Descarregado_3;
        nr_St_5_Descarregado = false;
        v_256 = nr_St_5_Descarregado;
        ns_St_5_Descarregado_1 = true;
        v_241 = ns_St_5_Descarregado_1;
        ns_St_5_Descarregado_2 = true;
        v_242 = ns_St_5_Descarregado_2;
        ns_St_5_Descarregado_3 = false;
        v_243 = ns_St_5_Descarregado_3;
      };
      v_235 = v_226;
      v_236 = v_227;
      v_237 = v_228;
      v_250 = v_241;
      v_251 = v_242;
      v_252 = v_243;
      v_258 = v_256;
      if (ck_19_3_1_1) {
        if (estado_bat_St_5_Carregado_1) {
          estado_bat_St_5_Carregado_2_1 = estado_bat_St_5_Carregado_2;
          if (estado_bat_St_5_Carregado_2_1) {
            estado_bat_St_5_Carregado_3_1_1 = estado_bat_St_5_Carregado_3;
          } else {
            estado_bat_St_5_Carregado_3_1_0 = estado_bat_St_5_Carregado_3;
          };
        } else {
          estado_bat_St_5_Carregado_2_0 = estado_bat_St_5_Carregado_2;
          if (estado_bat_St_5_Carregado_2_0) {
            estado_bat_St_5_Carregado_3_0_1 = estado_bat_St_5_Carregado_3;
          } else {
            estado_bat_St_5_Carregado_3_0_0 = estado_bat_St_5_Carregado_3;
          };
        };
        if (ns_St_5_Carregado_1) {
          ns_St_5_Carregado_2_1 = ns_St_5_Carregado_2;
          if (ns_St_5_Carregado_2_1) {
            ns_St_5_Carregado_3_1_1 = ns_St_5_Carregado_3;
          } else {
            ns_St_5_Carregado_3_1_0 = ns_St_5_Carregado_3;
          };
        } else {
          ns_St_5_Carregado_2_0 = ns_St_5_Carregado_2;
          if (ns_St_5_Carregado_2_0) {
            ns_St_5_Carregado_3_0_1 = ns_St_5_Carregado_3;
          } else {
            ns_St_5_Carregado_3_0_0 = ns_St_5_Carregado_3;
          };
        };
      } else {
        if (estado_bat_St_5_Descarregado_1) {
          estado_bat_St_5_Descarregado_2_1 = estado_bat_St_5_Descarregado_2;
          if (estado_bat_St_5_Descarregado_2_1) {
            estado_bat_St_5_Descarregado_3_1_1 = estado_bat_St_5_Descarregado_3;
          } else {
            estado_bat_St_5_Descarregado_3_1_0 = estado_bat_St_5_Descarregado_3;
          };
        } else {
          estado_bat_St_5_Descarregado_2_0 = estado_bat_St_5_Descarregado_2;
          if (estado_bat_St_5_Descarregado_2_0) {
            estado_bat_St_5_Descarregado_3_0_1 = estado_bat_St_5_Descarregado_3;
          } else {
            estado_bat_St_5_Descarregado_3_0_0 = estado_bat_St_5_Descarregado_3;
          };
        };
        if (ns_St_5_Descarregado_1) {
          ns_St_5_Descarregado_2_1 = ns_St_5_Descarregado_2;
          if (ns_St_5_Descarregado_2_1) {
            ns_St_5_Descarregado_3_1_1 = ns_St_5_Descarregado_3;
          } else {
            ns_St_5_Descarregado_3_1_0 = ns_St_5_Descarregado_3;
          };
        } else {
          ns_St_5_Descarregado_2_0 = ns_St_5_Descarregado_2;
          if (ns_St_5_Descarregado_2_0) {
            ns_St_5_Descarregado_3_0_1 = ns_St_5_Descarregado_3;
          } else {
            ns_St_5_Descarregado_3_0_0 = ns_St_5_Descarregado_3;
          };
        };
      };
    } else {
      ck_19_3_1_0 = ck_19_3;
      if (ck_19_3_1_0) {
        v_229 = true;
        v_230 = true;
        v_231 = true;
        v_257 = true;
        v_244 = true;
        v_245 = true;
        v_246 = true;
      } else {
        estado_bat_St_5_Erro_1 = false;
        v_229 = estado_bat_St_5_Erro_1;
        estado_bat_St_5_Erro_2 = false;
        v_230 = estado_bat_St_5_Erro_2;
        estado_bat_St_5_Erro_3 = false;
        v_231 = estado_bat_St_5_Erro_3;
        nr_St_5_Erro = false;
        v_257 = nr_St_5_Erro;
        ns_St_5_Erro_1 = true;
        v_244 = ns_St_5_Erro_1;
        ns_St_5_Erro_2 = false;
        v_245 = ns_St_5_Erro_2;
        ns_St_5_Erro_3 = false;
        v_246 = ns_St_5_Erro_3;
        if (estado_bat_St_5_Erro_1) {
          estado_bat_St_5_Erro_2_1 = estado_bat_St_5_Erro_2;
          if (estado_bat_St_5_Erro_2_1) {
            estado_bat_St_5_Erro_3_1_1 = estado_bat_St_5_Erro_3;
          } else {
            estado_bat_St_5_Erro_3_1_0 = estado_bat_St_5_Erro_3;
          };
        } else {
          estado_bat_St_5_Erro_2_0 = estado_bat_St_5_Erro_2;
          if (estado_bat_St_5_Erro_2_0) {
            estado_bat_St_5_Erro_3_0_1 = estado_bat_St_5_Erro_3;
          } else {
            estado_bat_St_5_Erro_3_0_0 = estado_bat_St_5_Erro_3;
          };
        };
        if (ns_St_5_Erro_1) {
          ns_St_5_Erro_2_1 = ns_St_5_Erro_2;
          if (ns_St_5_Erro_2_1) {
            ns_St_5_Erro_3_1_1 = ns_St_5_Erro_3;
          } else {
            ns_St_5_Erro_3_1_0 = ns_St_5_Erro_3;
          };
        } else {
          ns_St_5_Erro_2_0 = ns_St_5_Erro_2;
          if (ns_St_5_Erro_2_0) {
            ns_St_5_Erro_3_0_1 = ns_St_5_Erro_3;
          } else {
            ns_St_5_Erro_3_0_0 = ns_St_5_Erro_3;
          };
        };
      };
      v_235 = v_229;
      v_236 = v_230;
      v_237 = v_231;
      v_250 = v_244;
      v_251 = v_245;
      v_252 = v_246;
      v_258 = v_257;
    };
    estado_bat_1 = v_235;
    estado_bat_2 = v_236;
    estado_bat_3 = v_237;
    ns_1_2 = v_250;
    ns_2_3 = v_251;
    ns_3_2 = v_252;
    nr = v_258;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      ck_19_3_0_1 = ck_19_3;
      v_238 = true;
      v_239 = true;
      v_240 = true;
      v_253 = true;
      v_254 = true;
      v_255 = true;
      v_260 = true;
    } else {
      ck_19_3_0_0 = ck_19_3;
      if (ck_19_3_0_0) {
        estado_bat_St_5_Limiar1_1 = true;
        estado_bat_St_5_Limiar1_2 = false;
        estado_bat_St_5_Limiar1_3 = false;
        nr_St_5_Limiar1 = false;
        ns_St_5_Limiar1_1 = false;
        ns_St_5_Limiar1_2 = false;
        ns_St_5_Limiar1_3 = true;
        v_232 = estado_bat_St_5_Limiar1_1;
        v_233 = estado_bat_St_5_Limiar1_2;
        v_234 = estado_bat_St_5_Limiar1_3;
        v_259 = nr_St_5_Limiar1;
        v_247 = ns_St_5_Limiar1_1;
        v_248 = ns_St_5_Limiar1_2;
        v_249 = ns_St_5_Limiar1_3;
      } else {
        estado_bat_St_5_Limiar2_1 = true;
        v_232 = estado_bat_St_5_Limiar2_1;
        estado_bat_St_5_Limiar2_2 = true;
        v_233 = estado_bat_St_5_Limiar2_2;
        estado_bat_St_5_Limiar2_3 = false;
        v_234 = estado_bat_St_5_Limiar2_3;
        nr_St_5_Limiar2 = false;
        v_259 = nr_St_5_Limiar2;
        ns_St_5_Limiar2_1 = false;
        v_247 = ns_St_5_Limiar2_1;
        ns_St_5_Limiar2_2 = false;
        v_248 = ns_St_5_Limiar2_2;
        ns_St_5_Limiar2_3 = false;
        v_249 = ns_St_5_Limiar2_3;
      };
      v_238 = v_232;
      v_239 = v_233;
      v_240 = v_234;
      v_253 = v_247;
      v_254 = v_248;
      v_255 = v_249;
      v_260 = v_259;
    };
    estado_bat_1 = v_238;
    estado_bat_2 = v_239;
    estado_bat_3 = v_240;
    ns_1_2 = v_253;
    ns_2_3 = v_254;
    ns_3_2 = v_255;
    nr = v_260;
  };
  _out->bat12v_1 = estado_bat_1;
  ck_1 = _out->bat12v_1;
  _out->bat12v_2 = estado_bat_2;
  ck_2 = _out->bat12v_2;
  _out->bat12v_3 = estado_bat_3;
  ck_3 = _out->bat12v_3;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
    } else {
      ck_3_1_0 = ck_3;
    };
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
    } else {
      ck_3_0_0 = ck_3;
      if (!(ck_3_0_0)) {
        erro_BERR = true;
        pb_BERR = true;
        pm_BERR = true;
        ps_BERR = true;
      };
    };
  };
  if (_out->bat12v_1) {
    bat12v_2_1 = _out->bat12v_2;
    if (bat12v_2_1) {
      bat12v_3_1_1 = _out->bat12v_3;
    } else {
      bat12v_3_1_0 = _out->bat12v_3;
    };
  } else {
    bat12v_2_0 = _out->bat12v_2;
    if (bat12v_2_0) {
      bat12v_3_0_1 = _out->bat12v_3;
    } else {
      bat12v_3_0_0 = _out->bat12v_3;
    };
  };
  if (estado_bat_1) {
    estado_bat_2_1 = estado_bat_2;
    if (estado_bat_2_1) {
      estado_bat_3_1_1 = estado_bat_3;
    } else {
      estado_bat_3_1_0 = estado_bat_3;
    };
  } else {
    estado_bat_2_0 = estado_bat_2;
    if (estado_bat_2_0) {
      estado_bat_3_0_1 = estado_bat_3;
    } else {
      estado_bat_3_0_0 = estado_bat_3;
    };
  };
  if (ns_1_2) {
    ns_2_3_1 = ns_2_3;
    if (ns_2_3_1) {
      ns_3_2_1_1 = ns_3_2;
    } else {
      ns_3_2_1_0 = ns_3_2;
    };
  } else {
    ns_2_3_0 = ns_2_3;
    if (ns_2_3_0) {
      ns_3_2_0_1 = ns_3_2;
    } else {
      ns_3_2_0_0 = ns_3_2;
    };
  };
  if (!(ck_19_1)) {
    if (!(ck_19_2_0)) {
      if (ck_19_3_0_0) {
        if (estado_bat_St_5_Limiar1_1) {
          estado_bat_St_5_Limiar1_2_1 = estado_bat_St_5_Limiar1_2;
          if (estado_bat_St_5_Limiar1_2_1) {
            estado_bat_St_5_Limiar1_3_1_1 = estado_bat_St_5_Limiar1_3;
          } else {
            estado_bat_St_5_Limiar1_3_1_0 = estado_bat_St_5_Limiar1_3;
          };
        } else {
          estado_bat_St_5_Limiar1_2_0 = estado_bat_St_5_Limiar1_2;
          if (estado_bat_St_5_Limiar1_2_0) {
            estado_bat_St_5_Limiar1_3_0_1 = estado_bat_St_5_Limiar1_3;
          } else {
            estado_bat_St_5_Limiar1_3_0_0 = estado_bat_St_5_Limiar1_3;
          };
        };
        if (ns_St_5_Limiar1_1) {
          ns_St_5_Limiar1_2_1 = ns_St_5_Limiar1_2;
          if (ns_St_5_Limiar1_2_1) {
            ns_St_5_Limiar1_3_1_1 = ns_St_5_Limiar1_3;
          } else {
            ns_St_5_Limiar1_3_1_0 = ns_St_5_Limiar1_3;
          };
        } else {
          ns_St_5_Limiar1_2_0 = ns_St_5_Limiar1_2;
          if (ns_St_5_Limiar1_2_0) {
            ns_St_5_Limiar1_3_0_1 = ns_St_5_Limiar1_3;
          } else {
            ns_St_5_Limiar1_3_0_0 = ns_St_5_Limiar1_3;
          };
        };
      } else {
        if (estado_bat_St_5_Limiar2_1) {
          estado_bat_St_5_Limiar2_2_1 = estado_bat_St_5_Limiar2_2;
          if (estado_bat_St_5_Limiar2_2_1) {
            estado_bat_St_5_Limiar2_3_1_1 = estado_bat_St_5_Limiar2_3;
          } else {
            estado_bat_St_5_Limiar2_3_1_0 = estado_bat_St_5_Limiar2_3;
          };
        } else {
          estado_bat_St_5_Limiar2_2_0 = estado_bat_St_5_Limiar2_2;
          if (estado_bat_St_5_Limiar2_2_0) {
            estado_bat_St_5_Limiar2_3_0_1 = estado_bat_St_5_Limiar2_3;
          } else {
            estado_bat_St_5_Limiar2_3_0_0 = estado_bat_St_5_Limiar2_3;
          };
        };
        if (ns_St_5_Limiar2_1) {
          ns_St_5_Limiar2_2_1 = ns_St_5_Limiar2_2;
          if (ns_St_5_Limiar2_2_1) {
            ns_St_5_Limiar2_3_1_1 = ns_St_5_Limiar2_3;
          } else {
            ns_St_5_Limiar2_3_1_0 = ns_St_5_Limiar2_3;
          };
        } else {
          ns_St_5_Limiar2_2_0 = ns_St_5_Limiar2_2;
          if (ns_St_5_Limiar2_2_0) {
            ns_St_5_Limiar2_3_0_1 = ns_St_5_Limiar2_3;
          } else {
            ns_St_5_Limiar2_3_0_0 = ns_St_5_Limiar2_3;
          };
        };
      };
    };
  };
  if (s_1_2) {
    s_2_3_1 = s_2_3;
    if (s_2_3_1) {
      s_3_2_1_1 = s_3_2;
    } else {
      s_3_2_1_0 = s_3_2;
    };
  } else {
    s_2_3_0 = s_2_3;
    if (s_2_3_0) {
      s_3_2_0_1 = s_3_2;
    } else {
      s_3_2_0_0 = s_3_2;
    };
  };
  if (!(ck_18_1)) {
    if (!(ck_18_2_0)) {
      if (ck_18_3_0_0) {
        if (s_St_5_Limiar1_1) {
          s_St_5_Limiar1_2_1 = s_St_5_Limiar1_2;
          if (s_St_5_Limiar1_2_1) {
            s_St_5_Limiar1_3_1_1 = s_St_5_Limiar1_3;
          } else {
            s_St_5_Limiar1_3_1_0 = s_St_5_Limiar1_3;
          };
        } else {
          s_St_5_Limiar1_2_0 = s_St_5_Limiar1_2;
          if (s_St_5_Limiar1_2_0) {
            s_St_5_Limiar1_3_0_1 = s_St_5_Limiar1_3;
          } else {
            s_St_5_Limiar1_3_0_0 = s_St_5_Limiar1_3;
          };
        };
      } else {
        if (s_St_5_Limiar2_1) {
          s_St_5_Limiar2_2_1 = s_St_5_Limiar2_2;
          if (s_St_5_Limiar2_2_1) {
            s_St_5_Limiar2_3_1_1 = s_St_5_Limiar2_3;
          } else {
            s_St_5_Limiar2_3_1_0 = s_St_5_Limiar2_3;
          };
        } else {
          s_St_5_Limiar2_2_0 = s_St_5_Limiar2_2;
          if (s_St_5_Limiar2_2_0) {
            s_St_5_Limiar2_3_0_1 = s_St_5_Limiar2_3;
          } else {
            s_St_5_Limiar2_3_0_0 = s_St_5_Limiar2_3;
          };
        };
      };
    };
  };
  if (self->ck_16_1) {
    if (t_1) {
      r_1_St_6_Dia = true;
      s_1_St_6_Dia_1 = false;
    } else {
      r_1_St_6_Dia = self->pnr_1;
      s_1_St_6_Dia_1 = true;
    };
    r_1 = r_1_St_6_Dia;
    s_1_1 = s_1_St_6_Dia_1;
  } else {
    if (t_1) {
      r_1_St_6_Noite = true;
    } else {
      r_1_St_6_Noite = self->pnr_1;
    };
    r_1 = r_1_St_6_Noite;
    if (t_1) {
      s_1_St_6_Noite_1 = true;
    } else {
      s_1_St_6_Noite_1 = false;
    };
    s_1_1 = s_1_St_6_Noite_1;
  };
  ck_17_1 = s_1_1;
  if (ck_17_1) {
    isday_St_6_Dia = true;
    nr_1_St_6_Dia = false;
    ns_1_St_6_Dia_1 = true;
    isday = isday_St_6_Dia;
    nr_1 = nr_1_St_6_Dia;
    ns_1_1 = ns_1_St_6_Dia_1;
  } else {
    isday_St_6_Noite = false;
    isday = isday_St_6_Noite;
    nr_1_St_6_Noite = false;
    nr_1 = nr_1_St_6_Noite;
    ns_1_St_6_Noite_1 = false;
    ns_1_1 = ns_1_St_6_Noite_1;
  };
  _out->relogio = isday;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        ck_6 = _out->relogio;
        if (ck_6) {
          erro_B25_true = false;
          erro_B25 = erro_B25_true;
        } else {
          erro_B25_false = false;
          erro_B25 = erro_B25_false;
        };
        v_302 = erro_B25;
      } else {
        ck_7 = _out->relogio;
        if (ck_7) {
          erro_B50_true = false;
          erro_B50 = erro_B50_true;
        } else {
          erro_B50_false = false;
          erro_B50 = erro_B50_false;
        };
        v_302 = erro_B50;
      };
      v_304 = v_302;
    } else {
      if (ck_3_1_0) {
        v_303 = true;
      } else {
        ck_8 = _out->relogio;
        if (ck_8) {
          erro_B75_true = false;
          erro_B75 = erro_B75_true;
        } else {
          erro_B75_false = false;
          erro_B75 = erro_B75_false;
        };
        v_303 = erro_B75;
      };
      v_304 = v_303;
    };
    _out->erro = v_304;
  } else {
    if (ck_2_0) {
      v_306 = true;
    } else {
      if (ck_3_0_0) {
        ck_9 = _out->relogio;
        if (ck_9) {
          erro_B100_true = false;
          erro_B100 = erro_B100_true;
        } else {
          erro_B100_false = false;
          erro_B100 = erro_B100_false;
        };
        v_305 = erro_B100;
      } else {
        v_305 = erro_BERR;
      };
      v_306 = v_305;
    };
    _out->erro = v_306;
  };
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      if (off_atx) {
        v_53 = true;
      } else {
        v_53 = self->pnr_2;
      };
      if (t) {
        r_2_St_7_Boot = true;
      } else {
        r_2_St_7_Boot = v_53;
      };
      v_300 = r_2_St_7_Boot;
      if (off_atx) {
        v_52_1 = true;
      } else {
        v_52_1 = true;
      };
      if (t) {
        s_2_St_7_Boot_1 = false;
      } else {
        s_2_St_7_Boot_1 = v_52_1;
      };
      v_296 = s_2_St_7_Boot_1;
      if (off_atx) {
        v_52_2 = false;
      } else {
        v_52_2 = true;
      };
      if (t) {
        s_2_St_7_Boot_2 = false;
      } else {
        s_2_St_7_Boot_2 = v_52_2;
      };
      v_297 = s_2_St_7_Boot_2;
    } else {
      if (c_atx) {
        r_2_St_7_Off = true;
        s_2_St_7_Off_1 = true;
        s_2_St_7_Off_2 = true;
      } else {
        r_2_St_7_Off = self->pnr_2;
        s_2_St_7_Off_1 = true;
        s_2_St_7_Off_2 = false;
      };
      v_300 = r_2_St_7_Off;
      v_296 = s_2_St_7_Off_1;
      v_297 = s_2_St_7_Off_2;
    };
    s_2_1 = v_296;
    s_2_2 = v_297;
    r_2 = v_300;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      v_301 = true;
      v_298 = true;
      v_299 = true;
    } else {
      if (c_atx) {
        r_2_St_7_Rlevel4 = true;
      } else {
        r_2_St_7_Rlevel4 = self->pnr_2;
      };
      v_301 = r_2_St_7_Rlevel4;
      if (c_atx) {
        s_2_St_7_Rlevel4_1 = true;
      } else {
        s_2_St_7_Rlevel4_1 = false;
      };
      v_298 = s_2_St_7_Rlevel4_1;
      if (c_atx) {
        s_2_St_7_Rlevel4_2 = false;
      } else {
        s_2_St_7_Rlevel4_2 = false;
      };
      v_299 = s_2_St_7_Rlevel4_2;
      if (s_2_St_7_Rlevel4_1) {
        s_2_St_7_Rlevel4_2_1 = s_2_St_7_Rlevel4_2;
      } else {
        s_2_St_7_Rlevel4_2_0 = s_2_St_7_Rlevel4_2;
      };
    };
    s_2_1 = v_298;
    s_2_2 = v_299;
    r_2 = v_301;
  };
  ck_15_1 = s_2_1;
  ck_15_2 = s_2_2;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      estado_2_St_7_Boot = 1;
      v_286 = estado_2_St_7_Boot;
      atuador_St_7_Boot = true;
      v_284 = atuador_St_7_Boot;
      nr_2_St_7_Boot = false;
      v_292 = nr_2_St_7_Boot;
      ns_2_St_7_Boot_1 = true;
      v_288 = ns_2_St_7_Boot_1;
      ns_2_St_7_Boot_2 = true;
      v_289 = ns_2_St_7_Boot_2;
    } else {
      estado_2_St_7_Off = 0;
      atuador_St_7_Off = false;
      nr_2_St_7_Off = false;
      ns_2_St_7_Off_1 = true;
      ns_2_St_7_Off_2 = false;
      v_286 = estado_2_St_7_Off;
      v_284 = atuador_St_7_Off;
      v_292 = nr_2_St_7_Off;
      v_288 = ns_2_St_7_Off_1;
      v_289 = ns_2_St_7_Off_2;
    };
    atuador = v_284;
    estado_2 = v_286;
    ns_2_1 = v_288;
    ns_2_2 = v_289;
    nr_2 = v_292;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      v_287 = 0;
      v_285 = true;
      v_293 = true;
      v_290 = true;
      v_291 = true;
    } else {
      estado_2_St_7_Rlevel4 = 2;
      v_287 = estado_2_St_7_Rlevel4;
      atuador_St_7_Rlevel4 = true;
      v_285 = atuador_St_7_Rlevel4;
      nr_2_St_7_Rlevel4 = false;
      v_293 = nr_2_St_7_Rlevel4;
      ns_2_St_7_Rlevel4_1 = false;
      v_290 = ns_2_St_7_Rlevel4_1;
      ns_2_St_7_Rlevel4_2 = false;
      v_291 = ns_2_St_7_Rlevel4_2;
      if (ns_2_St_7_Rlevel4_1) {
        ns_2_St_7_Rlevel4_2_1 = ns_2_St_7_Rlevel4_2;
      } else {
        ns_2_St_7_Rlevel4_2_0 = ns_2_St_7_Rlevel4_2;
      };
    };
    atuador = v_285;
    estado_2 = v_287;
    ns_2_1 = v_290;
    ns_2_2 = v_291;
    nr_2 = v_293;
  };
  _out->serv_estado = estado_2;
  _out->serv_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        if (ck_6) {
          ps_B25_true = !(_out->serv_atuador);
          ps_B25 = ps_B25_true;
        } else {
          ps_B25_false = !(_out->serv_atuador);
          ps_B25 = ps_B25_false;
        };
        v_317 = ps_B25;
      } else {
        if (ck_7) {
          ps_B50_true = (_out->serv_estado>0);
          ps_B50 = ps_B50_true;
        } else {
          ps_B50_false = !(_out->serv_atuador);
          ps_B50 = ps_B50_false;
        };
        v_317 = ps_B50;
      };
      v_319 = v_317;
    } else {
      if (ck_3_1_0) {
        v_318 = true;
      } else {
        if (ck_8) {
          ps_B75_true = (_out->serv_estado>0);
          ps_B75 = ps_B75_true;
        } else {
          ps_B75_false = !(_out->serv_atuador);
          ps_B75 = ps_B75_false;
        };
        v_318 = ps_B75;
      };
      v_319 = v_318;
    };
    _out->ps = v_319;
  } else {
    if (ck_2_0) {
      v_321 = true;
    } else {
      if (ck_3_0_0) {
        if (ck_9) {
          ps_B100_true = (_out->serv_estado>0);
          ps_B100 = ps_B100_true;
        } else {
          ps_B100_false = (_out->serv_estado>0);
          ps_B100 = ps_B100_false;
        };
        v_320 = ps_B100;
      } else {
        v_320 = ps_BERR;
      };
      v_321 = v_320;
    };
    _out->ps = v_321;
  };
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
  } else {
    ns_2_2_0 = ns_2_2;
  };
  if (ck_15_1) {
    if (ck_15_2_1) {
      if (ns_2_St_7_Boot_1) {
        ns_2_St_7_Boot_2_1 = ns_2_St_7_Boot_2;
      } else {
        ns_2_St_7_Boot_2_0 = ns_2_St_7_Boot_2;
      };
    } else {
      if (ns_2_St_7_Off_1) {
        ns_2_St_7_Off_2_1 = ns_2_St_7_Off_2;
      } else {
        ns_2_St_7_Off_2_0 = ns_2_St_7_Off_2;
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
  } else {
    s_2_2_0 = s_2_2;
  };
  if (ck_14_1) {
    if (ck_14_2_1) {
      if (v_52_1) {
        v_52_2_1 = v_52_2;
      } else {
        v_52_2_0 = v_52_2;
      };
      if (s_2_St_7_Boot_1) {
        s_2_St_7_Boot_2_1 = s_2_St_7_Boot_2;
      } else {
        s_2_St_7_Boot_2_0 = s_2_St_7_Boot_2;
      };
    } else {
      if (s_2_St_7_Off_1) {
        s_2_St_7_Off_2_1 = s_2_St_7_Off_2;
      } else {
        s_2_St_7_Off_2_0 = s_2_St_7_Off_2;
      };
    };
  };
  if (self->ck_12_1) {
    if (ca_2) {
      r_3_St_8_Des = true;
      s_3_St_8_Des_1 = false;
    } else {
      r_3_St_8_Des = self->pnr_3;
      s_3_St_8_Des_1 = true;
    };
    r_3 = r_3_St_8_Des;
    s_3_1 = s_3_St_8_Des_1;
  } else {
    if (ca_2) {
      r_3_St_8_Lig = true;
    } else {
      r_3_St_8_Lig = self->pnr_3;
    };
    r_3 = r_3_St_8_Lig;
    if (ca_2) {
      s_3_St_8_Lig_1 = true;
    } else {
      s_3_St_8_Lig_1 = false;
    };
    s_3_1 = s_3_St_8_Lig_1;
  };
  ck_13_1 = s_3_1;
  if (ck_13_1) {
    estado_1_St_8_Des = false;
    nr_3_St_8_Des = false;
    ns_3_St_8_Des_1 = true;
    estado_1 = estado_1_St_8_Des;
    nr_3 = nr_3_St_8_Des;
    ns_3_1 = ns_3_St_8_Des_1;
  } else {
    estado_1_St_8_Lig = true;
    estado_1 = estado_1_St_8_Lig;
    nr_3_St_8_Lig = false;
    nr_3 = nr_3_St_8_Lig;
    ns_3_St_8_Lig_1 = false;
    ns_3_1 = ns_3_St_8_Lig_1;
  };
  _out->modem_atuador = estado_1;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        if (ck_6) {
          pm_B25_true = !(_out->modem_atuador);
          pm_B25 = pm_B25_true;
        } else {
          pm_B25_false = !(_out->modem_atuador);
          pm_B25 = pm_B25_false;
        };
        v_312 = pm_B25;
      } else {
        if (ck_7) {
          pm_B50_true = _out->modem_atuador;
          pm_B50 = pm_B50_true;
        } else {
          pm_B50_false = _out->modem_atuador;
          pm_B50 = pm_B50_false;
        };
        v_312 = pm_B50;
      };
      v_314 = v_312;
    } else {
      if (ck_3_1_0) {
        v_313 = true;
      } else {
        if (ck_8) {
          pm_B75_true = _out->modem_atuador;
          pm_B75 = pm_B75_true;
        } else {
          pm_B75_false = _out->modem_atuador;
          pm_B75 = pm_B75_false;
        };
        v_313 = pm_B75;
      };
      v_314 = v_313;
    };
    _out->pm = v_314;
  } else {
    if (ck_2_0) {
      v_316 = true;
    } else {
      if (ck_3_0_0) {
        if (ck_9) {
          pm_B100_true = _out->modem_atuador;
          pm_B100 = pm_B100_true;
        } else {
          pm_B100_false = _out->modem_atuador;
          pm_B100 = pm_B100_false;
        };
        v_315 = pm_B100;
      } else {
        v_315 = pm_BERR;
      };
      v_316 = v_315;
    };
    _out->pm = v_316;
  };
  if (self->ck_10_1) {
    if (ca_1) {
      r_4_St_9_Des = true;
      s_4_St_9_Des_1 = false;
    } else {
      r_4_St_9_Des = self->pnr_4;
      s_4_St_9_Des_1 = true;
    };
    r_4 = r_4_St_9_Des;
    s_4_1 = s_4_St_9_Des_1;
  } else {
    if (ca_1) {
      r_4_St_9_Lig = true;
    } else {
      r_4_St_9_Lig = self->pnr_4;
    };
    r_4 = r_4_St_9_Lig;
    if (ca_1) {
      s_4_St_9_Lig_1 = true;
    } else {
      s_4_St_9_Lig_1 = false;
    };
    s_4_1 = s_4_St_9_Lig_1;
  };
  ck_11_1 = s_4_1;
  if (ck_11_1) {
    estado_St_9_Des = false;
    nr_4_St_9_Des = false;
    ns_4_St_9_Des_1 = true;
    estado = estado_St_9_Des;
    nr_4 = nr_4_St_9_Des;
    ns_4_1 = ns_4_St_9_Des_1;
  } else {
    estado_St_9_Lig = true;
    estado = estado_St_9_Lig;
    nr_4_St_9_Lig = false;
    nr_4 = nr_4_St_9_Lig;
    ns_4_St_9_Lig_1 = false;
    ns_4_1 = ns_4_St_9_Lig_1;
  };
  _out->pabx = estado;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        if (ck_6) {
          pb_B25_true = !(_out->pabx);
          pb_B25 = pb_B25_true;
        } else {
          pb_B25_false = !(_out->pabx);
          pb_B25 = pb_B25_false;
        };
        v_307 = pb_B25;
      } else {
        if (ck_7) {
          pb_B50_true = _out->pabx;
          pb_B50 = pb_B50_true;
        } else {
          pb_B50_false = !(_out->pabx);
          pb_B50 = pb_B50_false;
        };
        v_307 = pb_B50;
      };
      v_309 = v_307;
    } else {
      if (ck_3_1_0) {
        v_308 = true;
      } else {
        if (ck_8) {
          pb_B75_true = _out->pabx;
          pb_B75 = pb_B75_true;
        } else {
          pb_B75_false = !(_out->pabx);
          pb_B75 = pb_B75_false;
        };
        v_308 = pb_B75;
      };
      v_309 = v_308;
    };
    _out->pb = v_309;
  } else {
    if (ck_2_0) {
      v_311 = true;
    } else {
      if (ck_3_0_0) {
        if (ck_9) {
          pb_B100_true = _out->pabx;
          pb_B100 = pb_B100_true;
        } else {
          pb_B100_false = _out->pabx;
          pb_B100 = pb_B100_false;
        };
        v_310 = pb_B100;
      } else {
        v_310 = pb_BERR;
      };
      v_311 = v_310;
    };
    _out->pb = v_311;
  };
  v_50 = (_out->pb&&_out->pm);
  v_51 = (v_50&&_out->ps);
  self->pnr = nr;
  self->v_261 = ns_1_2;
  self->v_262 = ns_2_3;
  self->v_263 = ns_3_2;
  self->pnr_1 = nr_1;
  self->ck_16_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_294 = ns_2_1;
  self->v_295 = ns_2_2;
  self->pnr_3 = nr_3;
  self->ck_12_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_10_1 = ns_4_1;;
}

