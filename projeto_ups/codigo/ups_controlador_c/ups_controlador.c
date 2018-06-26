/* --- Generated the 25/6/2018 at 20:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_105 = false;
  self->v_106 = false;
}

void Ups_controlador__computador_step(int sw_atx, int c_atx, int rup,
                                      int rup_nc, int rdown, int rdown_nc,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int ns_St_Rl1_2_0;
  int ns_St_Rl1_2_1;
  int estado_pc_St_Rl1_2_0;
  int estado_pc_St_Rl1_2_1;
  int ns_St_Rl3_2_0;
  int ns_St_Rl3_2_1;
  int estado_pc_St_Rl3_2_0;
  int estado_pc_St_Rl3_2_1;
  int ns_St_Off_2_0;
  int ns_St_Off_2_1;
  int estado_pc_St_Off_2_0;
  int estado_pc_St_Off_2_1;
  int ns_St_Rl4_2_0;
  int ns_St_Rl4_2_1;
  int estado_pc_St_Rl4_2_0;
  int estado_pc_St_Rl4_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_Rl1;
  int ns_St_Rl1_2;
  int ns_St_Rl1_1;
  int estado_pc_St_Rl1_2;
  int estado_pc_St_Rl1_1;
  int nr_St_Rl3;
  int ns_St_Rl3_2;
  int ns_St_Rl3_1;
  int estado_pc_St_Rl3_2;
  int estado_pc_St_Rl3_1;
  int nr_St_Off;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int estado_pc_St_Off_2;
  int estado_pc_St_Off_1;
  int nr_St_Rl4;
  int ns_St_Rl4_2;
  int ns_St_Rl4_1;
  int estado_pc_St_Rl4_2;
  int estado_pc_St_Rl4_1;
  int ck_1_2;
  int ck_1_1;
  int v_6_2_0;
  int v_6_2_1;
  int v_7;
  int v_6_2;
  int v_6_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_2_2_0;
  int v_2_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2_2;
  int v_2_1;
  int v_2_3_0;
  int v_2_3_1;
  int v_1;
  int v_2_3;
  int v_1_1;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int s_St_Rl1_2_0;
  int s_St_Rl1_2_1;
  int s_St_Rl3_2_0;
  int s_St_Rl3_2_1;
  int s_St_Off_2_0;
  int s_St_Off_2_1;
  int s_St_Rl4_2_0;
  int s_St_Rl4_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_Rl1;
  int s_St_Rl1_2;
  int s_St_Rl1_1;
  int r_St_Rl3;
  int s_St_Rl3_2;
  int s_St_Rl3_1;
  int r_St_Off;
  int s_St_Off_2;
  int s_St_Off_1;
  int r_St_Rl4;
  int s_St_Rl4_2;
  int s_St_Rl4_1;
  int ck_2;
  int ck_1_3;
  int estado_pc_2_0;
  int estado_pc_2_1;
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
  int a;
  int d;
  int u;
  int o;
  a = (sw_atx||c_atx);
  d = (rdown||rdown_nc);
  o = (a||d);
  u = (rup||rup_nc);
  ck_1_3 = self->v_105;
  ck_2 = self->v_106;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (a) {
        r_St_Off = true;
        s_St_Off_1 = false;
        s_St_Off_2 = false;
      } else {
        r_St_Off = self->pnr;
        s_St_Off_1 = true;
        s_St_Off_2 = true;
      };
      v_111 = r_St_Off;
      v_107 = s_St_Off_1;
      v_108 = s_St_Off_2;
    } else {
      if (u) {
        v_1 = true;
      } else {
        v_1 = self->pnr;
      };
      if (o) {
        r_St_Rl1 = true;
      } else {
        r_St_Rl1 = v_1;
      };
      v_111 = r_St_Rl1;
      if (u) {
        v_1_1 = false;
      } else {
        v_1_1 = true;
      };
      if (o) {
        s_St_Rl1_1 = true;
      } else {
        s_St_Rl1_1 = v_1_1;
      };
      v_107 = s_St_Rl1_1;
      if (u) {
        v_2_3 = false;
      } else {
        v_2_3 = false;
      };
      if (o) {
        s_St_Rl1_2 = true;
      } else {
        s_St_Rl1_2 = v_2_3;
      };
      v_108 = s_St_Rl1_2;
    };
    s_1 = v_107;
    s_2 = v_108;
    r = v_111;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      if (d) {
        v_3 = true;
      } else {
        v_3 = self->pnr;
      };
      if (a) {
        v_5 = true;
      } else {
        v_5 = v_3;
      };
      if (u) {
        r_St_Rl3 = true;
      } else {
        r_St_Rl3 = v_5;
      };
      v_112 = r_St_Rl3;
      if (d) {
        v_2_1 = true;
      } else {
        v_2_1 = false;
      };
      if (a) {
        v_4_1 = true;
      } else {
        v_4_1 = v_2_1;
      };
      if (u) {
        s_St_Rl3_1 = false;
      } else {
        s_St_Rl3_1 = v_4_1;
      };
      v_109 = s_St_Rl3_1;
      if (d) {
        v_2_2 = false;
      } else {
        v_2_2 = true;
      };
      if (a) {
        v_4_2 = true;
      } else {
        v_4_2 = v_2_2;
      };
      if (u) {
        s_St_Rl3_2 = false;
      } else {
        s_St_Rl3_2 = v_4_2;
      };
      v_110 = s_St_Rl3_2;
      if (v_2_1) {
        v_2_2_1 = v_2_2;
      } else {
        v_2_2_0 = v_2_2;
      };
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_Rl3_1) {
        s_St_Rl3_2_1 = s_St_Rl3_2;
      } else {
        s_St_Rl3_2_0 = s_St_Rl3_2;
      };
    } else {
      if (d) {
        v_7 = true;
      } else {
        v_7 = self->pnr;
      };
      if (a) {
        r_St_Rl4 = true;
      } else {
        r_St_Rl4 = v_7;
      };
      if (d) {
        v_6_1 = false;
      } else {
        v_6_1 = false;
      };
      if (a) {
        s_St_Rl4_1 = true;
      } else {
        s_St_Rl4_1 = v_6_1;
      };
      if (d) {
        v_6_2 = true;
      } else {
        v_6_2 = false;
      };
      if (a) {
        s_St_Rl4_2 = true;
      } else {
        s_St_Rl4_2 = v_6_2;
      };
      v_112 = r_St_Rl4;
      v_109 = s_St_Rl4_1;
      v_110 = s_St_Rl4_2;
      if (v_6_1) {
        v_6_2_1 = v_6_2;
      } else {
        v_6_2_0 = v_6_2;
      };
      if (s_St_Rl4_1) {
        s_St_Rl4_2_1 = s_St_Rl4_2;
      } else {
        s_St_Rl4_2_0 = s_St_Rl4_2;
      };
    };
    s_1 = v_109;
    s_2 = v_110;
    r = v_112;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      estado_pc_St_Off_1 = false;
      estado_pc_St_Off_2 = false;
      nr_St_Off = false;
      ns_St_Off_1 = true;
      ns_St_Off_2 = true;
      v_95 = estado_pc_St_Off_1;
      v_96 = estado_pc_St_Off_2;
      v_103 = nr_St_Off;
      v_99 = ns_St_Off_1;
      v_100 = ns_St_Off_2;
    } else {
      estado_pc_St_Rl1_1 = false;
      v_95 = estado_pc_St_Rl1_1;
      estado_pc_St_Rl1_2 = true;
      v_96 = estado_pc_St_Rl1_2;
      nr_St_Rl1 = false;
      v_103 = nr_St_Rl1;
      ns_St_Rl1_1 = true;
      v_99 = ns_St_Rl1_1;
      ns_St_Rl1_2 = false;
      v_100 = ns_St_Rl1_2;
    };
    _out->estado_pc_1 = v_95;
    _out->estado_pc_2 = v_96;
    ns_1 = v_99;
    ns_2 = v_100;
    nr = v_103;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      estado_pc_St_Rl3_1 = true;
      v_97 = estado_pc_St_Rl3_1;
      estado_pc_St_Rl3_2 = false;
      v_98 = estado_pc_St_Rl3_2;
      nr_St_Rl3 = false;
      v_104 = nr_St_Rl3;
      ns_St_Rl3_1 = false;
      v_101 = ns_St_Rl3_1;
      ns_St_Rl3_2 = true;
      v_102 = ns_St_Rl3_2;
      if (estado_pc_St_Rl3_1) {
        estado_pc_St_Rl3_2_1 = estado_pc_St_Rl3_2;
      } else {
        estado_pc_St_Rl3_2_0 = estado_pc_St_Rl3_2;
      };
      if (ns_St_Rl3_1) {
        ns_St_Rl3_2_1 = ns_St_Rl3_2;
      } else {
        ns_St_Rl3_2_0 = ns_St_Rl3_2;
      };
    } else {
      estado_pc_St_Rl4_1 = true;
      estado_pc_St_Rl4_2 = true;
      nr_St_Rl4 = false;
      ns_St_Rl4_1 = false;
      ns_St_Rl4_2 = false;
      v_97 = estado_pc_St_Rl4_1;
      v_98 = estado_pc_St_Rl4_2;
      v_104 = nr_St_Rl4;
      v_101 = ns_St_Rl4_1;
      v_102 = ns_St_Rl4_2;
      if (estado_pc_St_Rl4_1) {
        estado_pc_St_Rl4_2_1 = estado_pc_St_Rl4_2;
      } else {
        estado_pc_St_Rl4_2_0 = estado_pc_St_Rl4_2;
      };
      if (ns_St_Rl4_1) {
        ns_St_Rl4_2_1 = ns_St_Rl4_2;
      } else {
        ns_St_Rl4_2_0 = ns_St_Rl4_2;
      };
    };
    _out->estado_pc_1 = v_97;
    _out->estado_pc_2 = v_98;
    ns_1 = v_101;
    ns_2 = v_102;
    nr = v_104;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->estado_pc_1) {
    estado_pc_2_1 = _out->estado_pc_2;
  } else {
    estado_pc_2_0 = _out->estado_pc_2;
  };
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (estado_pc_St_Off_1) {
        estado_pc_St_Off_2_1 = estado_pc_St_Off_2;
      } else {
        estado_pc_St_Off_2_0 = estado_pc_St_Off_2;
      };
      if (ns_St_Off_1) {
        ns_St_Off_2_1 = ns_St_Off_2;
      } else {
        ns_St_Off_2_0 = ns_St_Off_2;
      };
    } else {
      if (estado_pc_St_Rl1_1) {
        estado_pc_St_Rl1_2_1 = estado_pc_St_Rl1_2;
      } else {
        estado_pc_St_Rl1_2_0 = estado_pc_St_Rl1_2;
      };
      if (ns_St_Rl1_1) {
        ns_St_Rl1_2_1 = ns_St_Rl1_2;
      } else {
        ns_St_Rl1_2_0 = ns_St_Rl1_2;
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
      if (s_St_Off_1) {
        s_St_Off_2_1 = s_St_Off_2;
      } else {
        s_St_Off_2_0 = s_St_Off_2;
      };
    } else {
      if (v_1_1) {
        v_2_3_1 = v_2_3;
      } else {
        v_2_3_0 = v_2_3;
      };
      if (s_St_Rl1_1) {
        s_St_Rl1_2_1 = s_St_Rl1_2;
      } else {
        s_St_Rl1_2_0 = s_St_Rl1_2;
      };
    };
  };
  self->pnr = nr;
  self->v_105 = ns_1;
  self->v_106 = ns_2;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_148 = true;
  self->v_149 = false;
  self->v_150 = false;
}

void Ups_controlador__bateria_step(int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int v_24_2_0;
  int v_24_3_0_0;
  int v_24_3_0_1;
  int v_24_2_1;
  int v_24_3_1_0;
  int v_24_3_1_1;
  int v_22_2_0;
  int v_22_3_0_0;
  int v_22_3_0_1;
  int v_22_2_1;
  int v_22_3_1_0;
  int v_22_3_1_1;
  int v_20_2_0;
  int v_20_3_0_0;
  int v_20_3_0_1;
  int v_20_2_1;
  int v_20_3_1_0;
  int v_20_3_1_1;
  int v_25;
  int v_24_3;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_22_3;
  int v_22_2;
  int v_22_1;
  int v_21;
  int v_20_3;
  int v_20_2;
  int v_20_1;
  int v_18_2_0;
  int v_18_3_0_0;
  int v_18_3_0_1;
  int v_18_2_1;
  int v_18_3_1_0;
  int v_18_3_1_1;
  int v_19;
  int v_18_3;
  int v_18_2;
  int v_18_1;
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
  int v_10_2_0;
  int v_10_3_0_0;
  int v_10_3_0_1;
  int v_10_2_1;
  int v_10_3_1_0;
  int v_10_3_1_1;
  int v_13;
  int v_12_3;
  int v_12_2;
  int v_12_1;
  int v_11;
  int v_10_3;
  int v_10_2;
  int v_10_1;
  int v_8_2_0;
  int v_8_3_0_0;
  int v_8_3_0_1;
  int v_8_2_1;
  int v_8_3_1_0;
  int v_8_3_1_1;
  int v_9;
  int v_8_3;
  int v_8_2;
  int v_8_1;
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
  v_43 = !(cp);
  v_44 = (v_43&&l1);
  v_45 = (v_44&&l2);
  a = (v_45&&v);
  v_26 = !(a);
  v_41 = (cp&&l1);
  v_42 = (v_41&&l2);
  b = (v_42&&v);
  v_27 = !(b);
  v_28 = (v_26&&v_27);
  v_38 = !(l1);
  v_37 = !(cp);
  v_39 = (v_37&&v_38);
  v_40 = (v_39&&l2);
  c = (v_40&&v);
  v_29 = !(c);
  v_30 = (v_28&&v_29);
  v_35 = !(l2);
  v_33 = !(l1);
  v_32 = !(cp);
  v_34 = (v_32&&v_33);
  v_36 = (v_34&&v_35);
  d = (v_36&&v);
  v_31 = !(d);
  e = (v_30&&v_31);
  ck_1 = self->v_148;
  ck_2_4 = self->v_149;
  ck_3 = self->v_150;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (e) {
          v_19 = true;
        } else {
          v_19 = self->pnr;
        };
        if (a) {
          r_St_1_Carregado = true;
        } else {
          r_St_1_Carregado = v_19;
        };
        if (e) {
          v_18_1 = true;
        } else {
          v_18_1 = true;
        };
        if (a) {
          s_St_1_Carregado_1 = false;
        } else {
          s_St_1_Carregado_1 = v_18_1;
        };
        if (e) {
          v_18_2 = false;
        } else {
          v_18_2 = true;
        };
        if (a) {
          s_St_1_Carregado_2 = false;
        } else {
          s_St_1_Carregado_2 = v_18_2;
        };
        if (e) {
          v_18_3 = false;
        } else {
          v_18_3 = true;
        };
        if (a) {
          s_St_1_Carregado_3 = true;
        } else {
          s_St_1_Carregado_3 = v_18_3;
        };
        v_166 = r_St_1_Carregado;
        v_151 = s_St_1_Carregado_1;
        v_152 = s_St_1_Carregado_2;
        v_153 = s_St_1_Carregado_3;
      } else {
        if (e) {
          v_9 = true;
        } else {
          v_9 = self->pnr;
        };
        if (c) {
          r_St_1_Descarregado = true;
        } else {
          r_St_1_Descarregado = v_9;
        };
        v_166 = r_St_1_Descarregado;
        if (e) {
          v_8_1 = true;
        } else {
          v_8_1 = true;
        };
        if (c) {
          s_St_1_Descarregado_1 = false;
        } else {
          s_St_1_Descarregado_1 = v_8_1;
        };
        v_151 = s_St_1_Descarregado_1;
        if (e) {
          v_8_2 = false;
        } else {
          v_8_2 = true;
        };
        if (c) {
          s_St_1_Descarregado_2 = false;
        } else {
          s_St_1_Descarregado_2 = v_8_2;
        };
        v_152 = s_St_1_Descarregado_2;
        if (e) {
          v_8_3 = false;
        } else {
          v_8_3 = false;
        };
        if (c) {
          s_St_1_Descarregado_3 = false;
        } else {
          s_St_1_Descarregado_3 = v_8_3;
        };
        v_153 = s_St_1_Descarregado_3;
      };
      v_160 = v_151;
      v_161 = v_152;
      v_162 = v_153;
      v_168 = v_166;
      if (ck_3_1_1) {
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
        v_167 = true;
        v_154 = true;
        v_155 = true;
        v_156 = true;
      } else {
        if (d) {
          v_21 = true;
        } else {
          v_21 = self->pnr;
        };
        if (c) {
          v_23 = true;
        } else {
          v_23 = v_21;
        };
        if (a) {
          v_25 = true;
        } else {
          v_25 = v_23;
        };
        if (b) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_25;
        };
        v_167 = r_St_1_Erro;
        if (d) {
          v_20_1 = true;
        } else {
          v_20_1 = true;
        };
        if (c) {
          v_22_1 = false;
        } else {
          v_22_1 = v_20_1;
        };
        if (a) {
          v_24_1 = false;
        } else {
          v_24_1 = v_22_1;
        };
        if (b) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_24_1;
        };
        v_154 = s_St_1_Erro_1;
        if (d) {
          v_20_2 = true;
        } else {
          v_20_2 = false;
        };
        if (c) {
          v_22_2 = false;
        } else {
          v_22_2 = v_20_2;
        };
        if (a) {
          v_24_2 = false;
        } else {
          v_24_2 = v_22_2;
        };
        if (b) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_24_2;
        };
        v_155 = s_St_1_Erro_2;
        if (d) {
          v_20_3 = false;
        } else {
          v_20_3 = false;
        };
        if (c) {
          v_22_3 = false;
        } else {
          v_22_3 = v_20_3;
        };
        if (a) {
          v_24_3 = true;
        } else {
          v_24_3 = v_22_3;
        };
        if (b) {
          s_St_1_Erro_3 = true;
        } else {
          s_St_1_Erro_3 = v_24_3;
        };
        v_156 = s_St_1_Erro_3;
        if (v_20_1) {
          v_20_2_1 = v_20_2;
          if (v_20_2_1) {
            v_20_3_1_1 = v_20_3;
          } else {
            v_20_3_1_0 = v_20_3;
          };
        } else {
          v_20_2_0 = v_20_2;
          if (v_20_2_0) {
            v_20_3_0_1 = v_20_3;
          } else {
            v_20_3_0_0 = v_20_3;
          };
        };
        if (v_22_1) {
          v_22_2_1 = v_22_2;
          if (v_22_2_1) {
            v_22_3_1_1 = v_22_3;
          } else {
            v_22_3_1_0 = v_22_3;
          };
        } else {
          v_22_2_0 = v_22_2;
          if (v_22_2_0) {
            v_22_3_0_1 = v_22_3;
          } else {
            v_22_3_0_0 = v_22_3;
          };
        };
        if (v_24_1) {
          v_24_2_1 = v_24_2;
          if (v_24_2_1) {
            v_24_3_1_1 = v_24_3;
          } else {
            v_24_3_1_0 = v_24_3;
          };
        } else {
          v_24_2_0 = v_24_2;
          if (v_24_2_0) {
            v_24_3_0_1 = v_24_3;
          } else {
            v_24_3_0_0 = v_24_3;
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
      v_160 = v_154;
      v_161 = v_155;
      v_162 = v_156;
      v_168 = v_167;
    };
    s_1 = v_160;
    s_2 = v_161;
    s_3 = v_162;
    r = v_168;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_163 = true;
      v_164 = true;
      v_165 = true;
      v_170 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (e) {
          v_15 = true;
        } else {
          v_15 = self->pnr;
        };
        if (c) {
          v_17 = true;
        } else {
          v_17 = v_15;
        };
        if (b) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_17;
        };
        if (e) {
          v_14_1 = true;
        } else {
          v_14_1 = false;
        };
        if (c) {
          v_16_1 = false;
        } else {
          v_16_1 = v_14_1;
        };
        if (b) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_16_1;
        };
        if (e) {
          v_14_2 = false;
        } else {
          v_14_2 = false;
        };
        if (c) {
          v_16_2 = false;
        } else {
          v_16_2 = v_14_2;
        };
        if (b) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_16_2;
        };
        if (e) {
          v_14_3 = false;
        } else {
          v_14_3 = true;
        };
        if (c) {
          v_16_3 = false;
        } else {
          v_16_3 = v_14_3;
        };
        if (b) {
          s_St_1_Limiar1_3 = true;
        } else {
          s_St_1_Limiar1_3 = v_16_3;
        };
        v_169 = r_St_1_Limiar1;
        v_157 = s_St_1_Limiar1_1;
        v_158 = s_St_1_Limiar1_2;
        v_159 = s_St_1_Limiar1_3;
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
      } else {
        if (e) {
          v_11 = true;
        } else {
          v_11 = self->pnr;
        };
        if (d) {
          v_13 = true;
        } else {
          v_13 = v_11;
        };
        if (a) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_13;
        };
        v_169 = r_St_1_Limiar2;
        if (e) {
          v_10_1 = true;
        } else {
          v_10_1 = false;
        };
        if (d) {
          v_12_1 = true;
        } else {
          v_12_1 = v_10_1;
        };
        if (a) {
          s_St_1_Limiar2_1 = false;
        } else {
          s_St_1_Limiar2_1 = v_12_1;
        };
        v_157 = s_St_1_Limiar2_1;
        if (e) {
          v_10_2 = false;
        } else {
          v_10_2 = false;
        };
        if (d) {
          v_12_2 = true;
        } else {
          v_12_2 = v_10_2;
        };
        if (a) {
          s_St_1_Limiar2_2 = false;
        } else {
          s_St_1_Limiar2_2 = v_12_2;
        };
        v_158 = s_St_1_Limiar2_2;
        if (e) {
          v_10_3 = false;
        } else {
          v_10_3 = false;
        };
        if (d) {
          v_12_3 = false;
        } else {
          v_12_3 = v_10_3;
        };
        if (a) {
          s_St_1_Limiar2_3 = true;
        } else {
          s_St_1_Limiar2_3 = v_12_3;
        };
        v_159 = s_St_1_Limiar2_3;
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
      };
      v_163 = v_157;
      v_164 = v_158;
      v_165 = v_159;
      v_170 = v_169;
    };
    s_1 = v_163;
    s_2 = v_164;
    s_3 = v_165;
    r = v_170;
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
        v_113 = estado_bat_St_1_Carregado_1;
        v_114 = estado_bat_St_1_Carregado_2;
        v_115 = estado_bat_St_1_Carregado_3;
        v_143 = nr_St_1_Carregado;
        v_128 = ns_St_1_Carregado_1;
        v_129 = ns_St_1_Carregado_2;
        v_130 = ns_St_1_Carregado_3;
      } else {
        estado_bat_St_1_Descarregado_1 = true;
        v_113 = estado_bat_St_1_Descarregado_1;
        estado_bat_St_1_Descarregado_2 = true;
        v_114 = estado_bat_St_1_Descarregado_2;
        estado_bat_St_1_Descarregado_3 = true;
        v_115 = estado_bat_St_1_Descarregado_3;
        nr_St_1_Descarregado = false;
        v_143 = nr_St_1_Descarregado;
        ns_St_1_Descarregado_1 = true;
        v_128 = ns_St_1_Descarregado_1;
        ns_St_1_Descarregado_2 = true;
        v_129 = ns_St_1_Descarregado_2;
        ns_St_1_Descarregado_3 = false;
        v_130 = ns_St_1_Descarregado_3;
      };
      v_122 = v_113;
      v_123 = v_114;
      v_124 = v_115;
      v_137 = v_128;
      v_138 = v_129;
      v_139 = v_130;
      v_145 = v_143;
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
        v_116 = true;
        v_117 = true;
        v_118 = true;
        v_144 = true;
        v_131 = true;
        v_132 = true;
        v_133 = true;
      } else {
        estado_bat_St_1_Erro_1 = false;
        v_116 = estado_bat_St_1_Erro_1;
        estado_bat_St_1_Erro_2 = false;
        v_117 = estado_bat_St_1_Erro_2;
        estado_bat_St_1_Erro_3 = false;
        v_118 = estado_bat_St_1_Erro_3;
        nr_St_1_Erro = false;
        v_144 = nr_St_1_Erro;
        ns_St_1_Erro_1 = true;
        v_131 = ns_St_1_Erro_1;
        ns_St_1_Erro_2 = false;
        v_132 = ns_St_1_Erro_2;
        ns_St_1_Erro_3 = false;
        v_133 = ns_St_1_Erro_3;
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
      v_122 = v_116;
      v_123 = v_117;
      v_124 = v_118;
      v_137 = v_131;
      v_138 = v_132;
      v_139 = v_133;
      v_145 = v_144;
    };
    _out->estado_bat_1 = v_122;
    _out->estado_bat_2 = v_123;
    _out->estado_bat_3 = v_124;
    ns_1 = v_137;
    ns_2 = v_138;
    ns_3 = v_139;
    nr = v_145;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_125 = true;
      v_126 = true;
      v_127 = true;
      v_140 = true;
      v_141 = true;
      v_142 = true;
      v_147 = true;
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
        v_119 = estado_bat_St_1_Limiar1_1;
        v_120 = estado_bat_St_1_Limiar1_2;
        v_121 = estado_bat_St_1_Limiar1_3;
        v_146 = nr_St_1_Limiar1;
        v_134 = ns_St_1_Limiar1_1;
        v_135 = ns_St_1_Limiar1_2;
        v_136 = ns_St_1_Limiar1_3;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_119 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = true;
        v_120 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_121 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_146 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_134 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_135 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_136 = ns_St_1_Limiar2_3;
      };
      v_125 = v_119;
      v_126 = v_120;
      v_127 = v_121;
      v_140 = v_134;
      v_141 = v_135;
      v_142 = v_136;
      v_147 = v_146;
    };
    _out->estado_bat_1 = v_125;
    _out->estado_bat_2 = v_126;
    _out->estado_bat_3 = v_127;
    ns_1 = v_140;
    ns_2 = v_141;
    ns_3 = v_142;
    nr = v_147;
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
  self->v_148 = ns_1;
  self->v_149 = ns_2;
  self->v_150 = ns_3;;
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
  self->v_196 = true;
  self->v_197 = true;
  self->v_198 = true;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int nr_St_4_Online;
  int ns_St_4_Online_3;
  int ns_St_4_Online_2;
  int ns_St_4_Online_1;
  int estado_St_4_Online;
  int nr_St_4_Teste;
  int ns_St_4_Teste_3;
  int ns_St_4_Teste_2;
  int ns_St_4_Teste_1;
  int estado_St_4_Teste;
  int nr_St_4_Wait;
  int ns_St_4_Wait_3;
  int ns_St_4_Wait_2;
  int ns_St_4_Wait_1;
  int estado_St_4_Wait;
  int nr_St_4_Off;
  int ns_St_4_Off_3;
  int ns_St_4_Off_2;
  int ns_St_4_Off_1;
  int estado_St_4_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
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
  int v_52_2_0;
  int v_52_3_0_0;
  int v_52_3_0_1;
  int v_52_2_1;
  int v_52_3_1_0;
  int v_52_3_1_1;
  int v_50_2_0;
  int v_50_3_0_0;
  int v_50_3_0_1;
  int v_50_2_1;
  int v_50_3_1_0;
  int v_50_3_1_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_50_3;
  int v_50_2;
  int v_50_1;
  int v_49;
  int v_47_2_0;
  int v_47_3_0_0;
  int v_47_3_0_1;
  int v_47_2_1;
  int v_47_3_1_0;
  int v_47_3_1_1;
  int v_48;
  int v_47_3;
  int v_47_2;
  int v_47_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_46;
  int v_3;
  int v_2;
  int v_1;
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
  ck_1 = self->v_196;
  ck_2 = self->v_197;
  ck_3 = self->v_198;
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
        v_214 = r_St_4_Off;
        v_199 = s_St_4_Off_1;
        v_200 = s_St_4_Off_2;
        v_201 = s_St_4_Off_3;
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
          v_48 = true;
        } else {
          v_48 = self->pnr;
        };
        if (t) {
          r_St_4_Online = true;
        } else {
          r_St_4_Online = v_48;
        };
        v_214 = r_St_4_Online;
        if (c) {
          v_47_1 = true;
        } else {
          v_47_1 = true;
        };
        if (t) {
          s_St_4_Online_1 = false;
        } else {
          s_St_4_Online_1 = v_47_1;
        };
        v_199 = s_St_4_Online_1;
        if (c) {
          v_47_2 = true;
        } else {
          v_47_2 = true;
        };
        if (t) {
          s_St_4_Online_2 = false;
        } else {
          s_St_4_Online_2 = v_47_2;
        };
        v_200 = s_St_4_Online_2;
        if (c) {
          v_47_3 = true;
        } else {
          v_47_3 = false;
        };
        if (t) {
          s_St_4_Online_3 = true;
        } else {
          s_St_4_Online_3 = v_47_3;
        };
        v_201 = s_St_4_Online_3;
        if (v_47_1) {
          v_47_2_1 = v_47_2;
          if (v_47_2_1) {
            v_47_3_1_1 = v_47_3;
          } else {
            v_47_3_1_0 = v_47_3;
          };
        } else {
          v_47_2_0 = v_47_2;
          if (v_47_2_0) {
            v_47_3_0_1 = v_47_3;
          } else {
            v_47_3_0_0 = v_47_3;
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
      v_208 = v_199;
      v_209 = v_200;
      v_210 = v_201;
      v_216 = v_214;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_215 = true;
        v_202 = true;
        v_203 = true;
        v_204 = true;
      } else {
        if (c) {
          v_46 = true;
        } else {
          v_46 = self->pnr;
        };
        if (t) {
          r_St_4_Sleep = true;
        } else {
          r_St_4_Sleep = v_46;
        };
        v_215 = r_St_4_Sleep;
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
        v_202 = s_St_4_Sleep_1;
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
        v_203 = s_St_4_Sleep_2;
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
        v_204 = s_St_4_Sleep_3;
      };
      v_208 = v_202;
      v_209 = v_203;
      v_210 = v_204;
      v_216 = v_215;
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
    s_1 = v_208;
    s_2 = v_209;
    s_3 = v_210;
    r = v_216;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_211 = true;
      v_212 = true;
      v_213 = true;
      v_218 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (c) {
          v_51 = true;
          v_50_1 = true;
          v_50_2 = true;
          v_50_3 = true;
        } else {
          v_51 = self->pnr;
          v_50_1 = false;
          v_50_2 = false;
          v_50_3 = true;
        };
        v_49 = !(o);
        if (v_49) {
          v_53 = true;
        } else {
          v_53 = v_51;
        };
        if (o) {
          r_St_4_Teste = true;
        } else {
          r_St_4_Teste = v_53;
        };
        v_217 = r_St_4_Teste;
        if (v_49) {
          v_52_1 = true;
        } else {
          v_52_1 = v_50_1;
        };
        if (o) {
          s_St_4_Teste_1 = true;
        } else {
          s_St_4_Teste_1 = v_52_1;
        };
        v_205 = s_St_4_Teste_1;
        if (v_49) {
          v_52_2 = false;
        } else {
          v_52_2 = v_50_2;
        };
        if (o) {
          s_St_4_Teste_2 = true;
        } else {
          s_St_4_Teste_2 = v_52_2;
        };
        v_206 = s_St_4_Teste_2;
        if (v_49) {
          v_52_3 = false;
        } else {
          v_52_3 = v_50_3;
        };
        if (o) {
          s_St_4_Teste_3 = false;
        } else {
          s_St_4_Teste_3 = v_52_3;
        };
        v_207 = s_St_4_Teste_3;
        if (v_50_1) {
          v_50_2_1 = v_50_2;
          if (v_50_2_1) {
            v_50_3_1_1 = v_50_3;
          } else {
            v_50_3_1_0 = v_50_3;
          };
        } else {
          v_50_2_0 = v_50_2;
          if (v_50_2_0) {
            v_50_3_0_1 = v_50_3;
          } else {
            v_50_3_0_0 = v_50_3;
          };
        };
        if (v_52_1) {
          v_52_2_1 = v_52_2;
          if (v_52_2_1) {
            v_52_3_1_1 = v_52_3;
          } else {
            v_52_3_1_0 = v_52_3;
          };
        } else {
          v_52_2_0 = v_52_2;
          if (v_52_2_0) {
            v_52_3_0_1 = v_52_3;
          } else {
            v_52_3_0_0 = v_52_3;
          };
        };
      } else {
        if (c) {
          v_55 = true;
        } else {
          v_55 = self->pnr;
        };
        if (t) {
          r_St_4_Wait = true;
        } else {
          r_St_4_Wait = v_55;
        };
        if (c) {
          v_54_1 = true;
        } else {
          v_54_1 = false;
        };
        if (t) {
          s_St_4_Wait_1 = false;
        } else {
          s_St_4_Wait_1 = v_54_1;
        };
        if (c) {
          v_54_2 = true;
        } else {
          v_54_2 = false;
        };
        if (t) {
          s_St_4_Wait_2 = false;
        } else {
          s_St_4_Wait_2 = v_54_2;
        };
        if (c) {
          v_54_3 = true;
        } else {
          v_54_3 = false;
        };
        if (t) {
          s_St_4_Wait_3 = true;
        } else {
          s_St_4_Wait_3 = v_54_3;
        };
        v_217 = r_St_4_Wait;
        v_205 = s_St_4_Wait_1;
        v_206 = s_St_4_Wait_2;
        v_207 = s_St_4_Wait_3;
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
      };
      v_211 = v_205;
      v_212 = v_206;
      v_213 = v_207;
      v_218 = v_217;
    };
    s_1 = v_211;
    s_2 = v_212;
    s_3 = v_213;
    r = v_218;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  ck_5_3 = s_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        estado_St_4_Off = 1;
        nr_St_4_Off = false;
        ns_St_4_Off_1 = true;
        ns_St_4_Off_2 = true;
        ns_St_4_Off_3 = true;
        v_171 = estado_St_4_Off;
        v_191 = nr_St_4_Off;
        v_176 = ns_St_4_Off_1;
        v_177 = ns_St_4_Off_2;
        v_178 = ns_St_4_Off_3;
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
        estado_St_4_Online = 5;
        v_171 = estado_St_4_Online;
        nr_St_4_Online = false;
        v_191 = nr_St_4_Online;
        ns_St_4_Online_1 = true;
        v_176 = ns_St_4_Online_1;
        ns_St_4_Online_2 = true;
        v_177 = ns_St_4_Online_2;
        ns_St_4_Online_3 = false;
        v_178 = ns_St_4_Online_3;
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
      v_173 = v_171;
      v_185 = v_176;
      v_186 = v_177;
      v_187 = v_178;
      v_193 = v_191;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_172 = 0;
        v_192 = true;
        v_179 = true;
        v_180 = true;
        v_181 = true;
      } else {
        estado_St_4_Sleep = 2;
        v_172 = estado_St_4_Sleep;
        nr_St_4_Sleep = false;
        v_192 = nr_St_4_Sleep;
        ns_St_4_Sleep_1 = true;
        v_179 = ns_St_4_Sleep_1;
        ns_St_4_Sleep_2 = false;
        v_180 = ns_St_4_Sleep_2;
        ns_St_4_Sleep_3 = false;
        v_181 = ns_St_4_Sleep_3;
      };
      v_173 = v_172;
      v_185 = v_179;
      v_186 = v_180;
      v_187 = v_181;
      v_193 = v_192;
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
    _out->estado = v_173;
    ns_1 = v_185;
    ns_2 = v_186;
    ns_3 = v_187;
    nr = v_193;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_175 = 0;
      v_188 = true;
      v_189 = true;
      v_190 = true;
      v_195 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        estado_St_4_Teste = 4;
        v_174 = estado_St_4_Teste;
        nr_St_4_Teste = false;
        v_194 = nr_St_4_Teste;
        ns_St_4_Teste_1 = false;
        v_182 = ns_St_4_Teste_1;
        ns_St_4_Teste_2 = false;
        v_183 = ns_St_4_Teste_2;
        ns_St_4_Teste_3 = true;
        v_184 = ns_St_4_Teste_3;
      } else {
        estado_St_4_Wait = 3;
        nr_St_4_Wait = false;
        ns_St_4_Wait_1 = false;
        ns_St_4_Wait_2 = false;
        ns_St_4_Wait_3 = false;
        v_174 = estado_St_4_Wait;
        v_194 = nr_St_4_Wait;
        v_182 = ns_St_4_Wait_1;
        v_183 = ns_St_4_Wait_2;
        v_184 = ns_St_4_Wait_3;
      };
      v_175 = v_174;
      v_188 = v_182;
      v_189 = v_183;
      v_190 = v_184;
      v_195 = v_194;
    };
    _out->estado = v_175;
    ns_1 = v_188;
    ns_2 = v_189;
    ns_3 = v_190;
    nr = v_195;
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
  self->v_196 = ns_1;
  self->v_197 = ns_2;
  self->v_198 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->ck_16_1 = true;
  self->pnr_1 = false;
  self->ck_14_1 = true;
  self->pnr_2 = false;
  self->v_254 = true;
  self->v_255 = false;
  self->v_256 = false;
  self->pnr_3 = false;
  self->ck_10_1 = true;
}

void Ups_controlador__contrato_step(int cb, int l1b, int l2b, int vb, int td,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
  int nr_St_5_Lig;
  int ns_St_5_Lig_1;
  int estado_1_St_5_Lig;
  int nr_St_5_Des;
  int ns_St_5_Des_1;
  int estado_1_St_5_Des;
  int ck_17_1;
  int r_St_5_Lig;
  int s_St_5_Lig_1;
  int r_St_5_Des;
  int s_St_5_Des_1;
  int nr_1_St_6_Lig;
  int ns_1_St_6_Lig_1;
  int estado_St_6_Lig;
  int nr_1_St_6_Des;
  int ns_1_St_6_Des_1;
  int estado_St_6_Des;
  int ck_15_1;
  int r_1_St_6_Lig;
  int s_1_St_6_Lig_1;
  int r_1_St_6_Des;
  int s_1_St_6_Des_1;
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
  int ns_2_St_7_Descarregado_2_0;
  int ns_2_St_7_Descarregado_3_0_0;
  int ns_2_St_7_Descarregado_3_0_1;
  int ns_2_St_7_Descarregado_2_1;
  int ns_2_St_7_Descarregado_3_1_0;
  int ns_2_St_7_Descarregado_3_1_1;
  int estado_bat_St_7_Descarregado_2_0;
  int estado_bat_St_7_Descarregado_3_0_0;
  int estado_bat_St_7_Descarregado_3_0_1;
  int estado_bat_St_7_Descarregado_2_1;
  int estado_bat_St_7_Descarregado_3_1_0;
  int estado_bat_St_7_Descarregado_3_1_1;
  int ns_2_St_7_Limiar2_2_0;
  int ns_2_St_7_Limiar2_3_0_0;
  int ns_2_St_7_Limiar2_3_0_1;
  int ns_2_St_7_Limiar2_2_1;
  int ns_2_St_7_Limiar2_3_1_0;
  int ns_2_St_7_Limiar2_3_1_1;
  int estado_bat_St_7_Limiar2_2_0;
  int estado_bat_St_7_Limiar2_3_0_0;
  int estado_bat_St_7_Limiar2_3_0_1;
  int estado_bat_St_7_Limiar2_2_1;
  int estado_bat_St_7_Limiar2_3_1_0;
  int estado_bat_St_7_Limiar2_3_1_1;
  int ns_2_St_7_Limiar1_2_0;
  int ns_2_St_7_Limiar1_3_0_0;
  int ns_2_St_7_Limiar1_3_0_1;
  int ns_2_St_7_Limiar1_2_1;
  int ns_2_St_7_Limiar1_3_1_0;
  int ns_2_St_7_Limiar1_3_1_1;
  int estado_bat_St_7_Limiar1_2_0;
  int estado_bat_St_7_Limiar1_3_0_0;
  int estado_bat_St_7_Limiar1_3_0_1;
  int estado_bat_St_7_Limiar1_2_1;
  int estado_bat_St_7_Limiar1_3_1_0;
  int estado_bat_St_7_Limiar1_3_1_1;
  int ns_2_St_7_Carregado_2_0;
  int ns_2_St_7_Carregado_3_0_0;
  int ns_2_St_7_Carregado_3_0_1;
  int ns_2_St_7_Carregado_2_1;
  int ns_2_St_7_Carregado_3_1_0;
  int ns_2_St_7_Carregado_3_1_1;
  int estado_bat_St_7_Carregado_2_0;
  int estado_bat_St_7_Carregado_3_0_0;
  int estado_bat_St_7_Carregado_3_0_1;
  int estado_bat_St_7_Carregado_2_1;
  int estado_bat_St_7_Carregado_3_1_0;
  int estado_bat_St_7_Carregado_3_1_1;
  int ns_2_St_7_Erro_2_0;
  int ns_2_St_7_Erro_3_0_0;
  int ns_2_St_7_Erro_3_0_1;
  int ns_2_St_7_Erro_2_1;
  int ns_2_St_7_Erro_3_1_0;
  int ns_2_St_7_Erro_3_1_1;
  int estado_bat_St_7_Erro_2_0;
  int estado_bat_St_7_Erro_3_0_0;
  int estado_bat_St_7_Erro_3_0_1;
  int estado_bat_St_7_Erro_2_1;
  int estado_bat_St_7_Erro_3_1_0;
  int estado_bat_St_7_Erro_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int nr_2_St_7_Descarregado;
  int ns_2_St_7_Descarregado_3;
  int ns_2_St_7_Descarregado_2;
  int ns_2_St_7_Descarregado_1;
  int estado_bat_St_7_Descarregado_3;
  int estado_bat_St_7_Descarregado_2;
  int estado_bat_St_7_Descarregado_1;
  int nr_2_St_7_Limiar2;
  int ns_2_St_7_Limiar2_3;
  int ns_2_St_7_Limiar2_2;
  int ns_2_St_7_Limiar2_1;
  int estado_bat_St_7_Limiar2_3;
  int estado_bat_St_7_Limiar2_2;
  int estado_bat_St_7_Limiar2_1;
  int nr_2_St_7_Limiar1;
  int ns_2_St_7_Limiar1_3;
  int ns_2_St_7_Limiar1_2;
  int ns_2_St_7_Limiar1_1;
  int estado_bat_St_7_Limiar1_3;
  int estado_bat_St_7_Limiar1_2;
  int estado_bat_St_7_Limiar1_1;
  int nr_2_St_7_Carregado;
  int ns_2_St_7_Carregado_3;
  int ns_2_St_7_Carregado_2;
  int ns_2_St_7_Carregado_1;
  int estado_bat_St_7_Carregado_3;
  int estado_bat_St_7_Carregado_2;
  int estado_bat_St_7_Carregado_1;
  int nr_2_St_7_Erro;
  int ns_2_St_7_Erro_3;
  int ns_2_St_7_Erro_2;
  int ns_2_St_7_Erro_1;
  int estado_bat_St_7_Erro_3;
  int estado_bat_St_7_Erro_2;
  int estado_bat_St_7_Erro_1;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_73_2_0;
  int v_73_3_0_0;
  int v_73_3_0_1;
  int v_73_2_1;
  int v_73_3_1_0;
  int v_73_3_1_1;
  int v_71_2_0;
  int v_71_3_0_0;
  int v_71_3_0_1;
  int v_71_2_1;
  int v_71_3_1_0;
  int v_71_3_1_1;
  int v_69_2_0;
  int v_69_3_0_0;
  int v_69_3_0_1;
  int v_69_2_1;
  int v_69_3_1_0;
  int v_69_3_1_1;
  int v_74;
  int v_73_3;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71_3;
  int v_71_2;
  int v_71_1;
  int v_70;
  int v_69_3;
  int v_69_2;
  int v_69_1;
  int v_67_2_0;
  int v_67_3_0_0;
  int v_67_3_0_1;
  int v_67_2_1;
  int v_67_3_1_0;
  int v_67_3_1_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
  int v_65_2_0;
  int v_65_3_0_0;
  int v_65_3_0_1;
  int v_65_2_1;
  int v_65_3_1_0;
  int v_65_3_1_1;
  int v_63_2_0;
  int v_63_3_0_0;
  int v_63_3_0_1;
  int v_63_2_1;
  int v_63_3_1_0;
  int v_63_3_1_1;
  int v_66;
  int v_65_3;
  int v_65_2;
  int v_65_1;
  int v_64;
  int v_63_3;
  int v_63_2;
  int v_63_1;
  int v_61_2_0;
  int v_61_3_0_0;
  int v_61_3_0_1;
  int v_61_2_1;
  int v_61_3_1_0;
  int v_61_3_1_1;
  int v_59_2_0;
  int v_59_3_0_0;
  int v_59_3_0_1;
  int v_59_2_1;
  int v_59_3_1_0;
  int v_59_3_1_1;
  int v_62;
  int v_61_3;
  int v_61_2;
  int v_61_1;
  int v_60;
  int v_59_3;
  int v_59_2;
  int v_59_1;
  int v_57_2_0;
  int v_57_3_0_0;
  int v_57_3_0_1;
  int v_57_2_1;
  int v_57_3_1_0;
  int v_57_3_1_1;
  int v_58;
  int v_57_3;
  int v_57_2;
  int v_57_1;
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
  int s_2_St_7_Descarregado_2_0;
  int s_2_St_7_Descarregado_3_0_0;
  int s_2_St_7_Descarregado_3_0_1;
  int s_2_St_7_Descarregado_2_1;
  int s_2_St_7_Descarregado_3_1_0;
  int s_2_St_7_Descarregado_3_1_1;
  int s_2_St_7_Limiar2_2_0;
  int s_2_St_7_Limiar2_3_0_0;
  int s_2_St_7_Limiar2_3_0_1;
  int s_2_St_7_Limiar2_2_1;
  int s_2_St_7_Limiar2_3_1_0;
  int s_2_St_7_Limiar2_3_1_1;
  int s_2_St_7_Limiar1_2_0;
  int s_2_St_7_Limiar1_3_0_0;
  int s_2_St_7_Limiar1_3_0_1;
  int s_2_St_7_Limiar1_2_1;
  int s_2_St_7_Limiar1_3_1_0;
  int s_2_St_7_Limiar1_3_1_1;
  int s_2_St_7_Carregado_2_0;
  int s_2_St_7_Carregado_3_0_0;
  int s_2_St_7_Carregado_3_0_1;
  int s_2_St_7_Carregado_2_1;
  int s_2_St_7_Carregado_3_1_0;
  int s_2_St_7_Carregado_3_1_1;
  int s_2_St_7_Erro_2_0;
  int s_2_St_7_Erro_3_0_0;
  int s_2_St_7_Erro_3_0_1;
  int s_2_St_7_Erro_2_1;
  int s_2_St_7_Erro_3_1_0;
  int s_2_St_7_Erro_3_1_1;
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
  int r_2_St_7_Descarregado;
  int s_2_St_7_Descarregado_3;
  int s_2_St_7_Descarregado_2;
  int s_2_St_7_Descarregado_1;
  int r_2_St_7_Limiar2;
  int s_2_St_7_Limiar2_3;
  int s_2_St_7_Limiar2_2;
  int s_2_St_7_Limiar2_1;
  int r_2_St_7_Limiar1;
  int s_2_St_7_Limiar1_3;
  int s_2_St_7_Limiar1_2;
  int s_2_St_7_Limiar1_1;
  int r_2_St_7_Carregado;
  int s_2_St_7_Carregado_3;
  int s_2_St_7_Carregado_2;
  int s_2_St_7_Carregado_1;
  int r_2_St_7_Erro;
  int s_2_St_7_Erro_3;
  int s_2_St_7_Erro_2;
  int s_2_St_7_Erro_1;
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
  int nr_3_St_8_Noite;
  int ns_3_St_8_Noite_1;
  int isday_St_8_Noite;
  int nr_3_St_8_Dia;
  int ns_3_St_8_Dia_1;
  int isday_St_8_Dia;
  int ck_11_1;
  int r_3_St_8_Noite;
  int s_3_St_8_Noite_1;
  int r_3_St_8_Dia;
  int s_3_St_8_Dia_1;
  int pm_B25_false;
  int pb_B25_false;
  int erro_B25_false;
  int pm_B25_true;
  int pb_B25_true;
  int erro_B25_true;
  int ck_6;
  int pm_B50_false;
  int pb_B50_false;
  int erro_B50_false;
  int pm_B50_true;
  int pb_B50_true;
  int erro_B50_true;
  int ck_7;
  int pm_B75_false;
  int pb_B75_false;
  int erro_B75_false;
  int pm_B75_true;
  int pb_B75_true;
  int erro_B75_true;
  int ck_8;
  int pm_B100_false;
  int pb_B100_false;
  int erro_B100_false;
  int pm_B100_true;
  int pb_B100_true;
  int erro_B100_true;
  int ck_9;
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
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int pm_B100;
  int pb_B100;
  int erro_B100;
  int pm_B75;
  int pb_B75;
  int erro_B75;
  int pm_B50;
  int pb_B50;
  int erro_B50;
  int pm_B25;
  int pb_B25;
  int erro_B25;
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
  int s_2_3_0_0;
  int s_2_3_0_1;
  int s_2_2_1;
  int s_2_3_1_0;
  int s_2_3_1_1;
  int ns_2_2_0;
  int ns_2_3_0_0;
  int ns_2_3_0_1;
  int ns_2_2_1;
  int ns_2_3_1_0;
  int ns_2_3_1_1;
  int estado_bat_2_0;
  int estado_bat_3_0_0;
  int estado_bat_3_0_1;
  int estado_bat_2_1;
  int estado_bat_3_1_0;
  int estado_bat_3_1_1;
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
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_2_3;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int ca_1;
  int estado_1;
  int ca;
  int estado;
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
  int t;
  int isday;
  int v_56;
  int cm;
  int cp;
  cp_1 = cb;
  v_92 = !(cp_1);
  v_86 = !(cp_1);
  v_81 = !(cp_1);
  l1 = l1b;
  v_93 = (v_92&&l1);
  v_90 = (cp_1&&l1);
  v_87 = !(l1);
  v_88 = (v_86&&v_87);
  v_82 = !(l1);
  v_83 = (v_81&&v_82);
  l2 = l2b;
  v_94 = (v_93&&l2);
  v_91 = (v_90&&l2);
  v_89 = (v_88&&l2);
  v_84 = !(l2);
  v_85 = (v_83&&v_84);
  v = vb;
  a = (v_94&&v);
  v_75 = !(a);
  b = (v_91&&v);
  v_76 = !(b);
  v_77 = (v_75&&v_76);
  c = (v_89&&v);
  v_78 = !(c);
  v_79 = (v_77&&v_78);
  d = (v_85&&v);
  v_80 = !(d);
  e = (v_79&&v_80);
  ck_12_1 = self->v_254;
  ck_12_2 = self->v_255;
  ck_12_3 = self->v_256;
  t = td;
  Contrato_controller__contrato_controller_step(cb, l1b, l2b, vb, td,
                                                self->ck_10_1, self->pnr_3,
                                                self->v_256, self->v_255,
                                                self->v_254, self->pnr_2,
                                                self->ck_14_1, self->pnr_1,
                                                self->ck_16_1, self->pnr,
                                                true, true,
                                                &Contrato_controller__contrato_controller_out_st);
  cm = Contrato_controller__contrato_controller_out_st.contrato_cm;
  cp = Contrato_controller__contrato_controller_out_st.contrato_cp;
  ca_1 = cm;
  ca = cp;
  if (self->ck_16_1) {
    if (ca_1) {
      r_St_5_Des = true;
      s_St_5_Des_1 = false;
    } else {
      r_St_5_Des = self->pnr;
      s_St_5_Des_1 = true;
    };
    r = r_St_5_Des;
    s_1_2 = s_St_5_Des_1;
  } else {
    if (ca_1) {
      r_St_5_Lig = true;
    } else {
      r_St_5_Lig = self->pnr;
    };
    r = r_St_5_Lig;
    if (ca_1) {
      s_St_5_Lig_1 = true;
    } else {
      s_St_5_Lig_1 = false;
    };
    s_1_2 = s_St_5_Lig_1;
  };
  ck_17_1 = s_1_2;
  if (ck_17_1) {
    estado_1_St_5_Des = false;
    nr_St_5_Des = false;
    ns_St_5_Des_1 = true;
    estado_1 = estado_1_St_5_Des;
    nr = nr_St_5_Des;
    ns_1_2 = ns_St_5_Des_1;
  } else {
    estado_1_St_5_Lig = true;
    estado_1 = estado_1_St_5_Lig;
    nr_St_5_Lig = false;
    nr = nr_St_5_Lig;
    ns_St_5_Lig_1 = false;
    ns_1_2 = ns_St_5_Lig_1;
  };
  _out->modem_atuador = estado_1;
  if (self->ck_14_1) {
    if (ca) {
      r_1_St_6_Des = true;
      s_1_St_6_Des_1 = false;
    } else {
      r_1_St_6_Des = self->pnr_1;
      s_1_St_6_Des_1 = true;
    };
    r_1 = r_1_St_6_Des;
    s_1_1 = s_1_St_6_Des_1;
  } else {
    if (ca) {
      r_1_St_6_Lig = true;
    } else {
      r_1_St_6_Lig = self->pnr_1;
    };
    r_1 = r_1_St_6_Lig;
    if (ca) {
      s_1_St_6_Lig_1 = true;
    } else {
      s_1_St_6_Lig_1 = false;
    };
    s_1_1 = s_1_St_6_Lig_1;
  };
  ck_15_1 = s_1_1;
  if (ck_15_1) {
    estado_St_6_Des = false;
    nr_1_St_6_Des = false;
    ns_1_St_6_Des_1 = true;
    estado = estado_St_6_Des;
    nr_1 = nr_1_St_6_Des;
    ns_1_1 = ns_1_St_6_Des_1;
  } else {
    estado_St_6_Lig = true;
    estado = estado_St_6_Lig;
    nr_1_St_6_Lig = false;
    nr_1 = nr_1_St_6_Lig;
    ns_1_St_6_Lig_1 = false;
    ns_1_1 = ns_1_St_6_Lig_1;
  };
  _out->pabx = estado;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      ck_12_3_1_1 = ck_12_3;
      if (ck_12_3_1_1) {
        if (e) {
          v_68 = true;
        } else {
          v_68 = self->pnr_2;
        };
        if (a) {
          r_2_St_7_Carregado = true;
        } else {
          r_2_St_7_Carregado = v_68;
        };
        if (e) {
          v_67_1 = true;
        } else {
          v_67_1 = true;
        };
        if (a) {
          s_2_St_7_Carregado_1 = false;
        } else {
          s_2_St_7_Carregado_1 = v_67_1;
        };
        if (e) {
          v_67_2 = false;
        } else {
          v_67_2 = true;
        };
        if (a) {
          s_2_St_7_Carregado_2 = false;
        } else {
          s_2_St_7_Carregado_2 = v_67_2;
        };
        if (e) {
          v_67_3 = false;
        } else {
          v_67_3 = true;
        };
        if (a) {
          s_2_St_7_Carregado_3 = true;
        } else {
          s_2_St_7_Carregado_3 = v_67_3;
        };
        v_272 = r_2_St_7_Carregado;
        v_257 = s_2_St_7_Carregado_1;
        v_258 = s_2_St_7_Carregado_2;
        v_259 = s_2_St_7_Carregado_3;
      } else {
        if (e) {
          v_58 = true;
        } else {
          v_58 = self->pnr_2;
        };
        if (c) {
          r_2_St_7_Descarregado = true;
        } else {
          r_2_St_7_Descarregado = v_58;
        };
        v_272 = r_2_St_7_Descarregado;
        if (e) {
          v_57_1 = true;
        } else {
          v_57_1 = true;
        };
        if (c) {
          s_2_St_7_Descarregado_1 = false;
        } else {
          s_2_St_7_Descarregado_1 = v_57_1;
        };
        v_257 = s_2_St_7_Descarregado_1;
        if (e) {
          v_57_2 = false;
        } else {
          v_57_2 = true;
        };
        if (c) {
          s_2_St_7_Descarregado_2 = false;
        } else {
          s_2_St_7_Descarregado_2 = v_57_2;
        };
        v_258 = s_2_St_7_Descarregado_2;
        if (e) {
          v_57_3 = false;
        } else {
          v_57_3 = false;
        };
        if (c) {
          s_2_St_7_Descarregado_3 = false;
        } else {
          s_2_St_7_Descarregado_3 = v_57_3;
        };
        v_259 = s_2_St_7_Descarregado_3;
      };
      v_266 = v_257;
      v_267 = v_258;
      v_268 = v_259;
      v_274 = v_272;
      if (ck_12_3_1_1) {
        if (v_67_1) {
          v_67_2_1 = v_67_2;
          if (v_67_2_1) {
            v_67_3_1_1 = v_67_3;
          } else {
            v_67_3_1_0 = v_67_3;
          };
        } else {
          v_67_2_0 = v_67_2;
          if (v_67_2_0) {
            v_67_3_0_1 = v_67_3;
          } else {
            v_67_3_0_0 = v_67_3;
          };
        };
        if (s_2_St_7_Carregado_1) {
          s_2_St_7_Carregado_2_1 = s_2_St_7_Carregado_2;
          if (s_2_St_7_Carregado_2_1) {
            s_2_St_7_Carregado_3_1_1 = s_2_St_7_Carregado_3;
          } else {
            s_2_St_7_Carregado_3_1_0 = s_2_St_7_Carregado_3;
          };
        } else {
          s_2_St_7_Carregado_2_0 = s_2_St_7_Carregado_2;
          if (s_2_St_7_Carregado_2_0) {
            s_2_St_7_Carregado_3_0_1 = s_2_St_7_Carregado_3;
          } else {
            s_2_St_7_Carregado_3_0_0 = s_2_St_7_Carregado_3;
          };
        };
      } else {
        if (v_57_1) {
          v_57_2_1 = v_57_2;
          if (v_57_2_1) {
            v_57_3_1_1 = v_57_3;
          } else {
            v_57_3_1_0 = v_57_3;
          };
        } else {
          v_57_2_0 = v_57_2;
          if (v_57_2_0) {
            v_57_3_0_1 = v_57_3;
          } else {
            v_57_3_0_0 = v_57_3;
          };
        };
        if (s_2_St_7_Descarregado_1) {
          s_2_St_7_Descarregado_2_1 = s_2_St_7_Descarregado_2;
          if (s_2_St_7_Descarregado_2_1) {
            s_2_St_7_Descarregado_3_1_1 = s_2_St_7_Descarregado_3;
          } else {
            s_2_St_7_Descarregado_3_1_0 = s_2_St_7_Descarregado_3;
          };
        } else {
          s_2_St_7_Descarregado_2_0 = s_2_St_7_Descarregado_2;
          if (s_2_St_7_Descarregado_2_0) {
            s_2_St_7_Descarregado_3_0_1 = s_2_St_7_Descarregado_3;
          } else {
            s_2_St_7_Descarregado_3_0_0 = s_2_St_7_Descarregado_3;
          };
        };
      };
    } else {
      ck_12_3_1_0 = ck_12_3;
      if (ck_12_3_1_0) {
        v_273 = true;
        v_260 = true;
        v_261 = true;
        v_262 = true;
      } else {
        if (d) {
          v_70 = true;
        } else {
          v_70 = self->pnr_2;
        };
        if (c) {
          v_72 = true;
        } else {
          v_72 = v_70;
        };
        if (a) {
          v_74 = true;
        } else {
          v_74 = v_72;
        };
        if (b) {
          r_2_St_7_Erro = true;
        } else {
          r_2_St_7_Erro = v_74;
        };
        v_273 = r_2_St_7_Erro;
        if (d) {
          v_69_1 = true;
        } else {
          v_69_1 = true;
        };
        if (c) {
          v_71_1 = false;
        } else {
          v_71_1 = v_69_1;
        };
        if (a) {
          v_73_1 = false;
        } else {
          v_73_1 = v_71_1;
        };
        if (b) {
          s_2_St_7_Erro_1 = true;
        } else {
          s_2_St_7_Erro_1 = v_73_1;
        };
        v_260 = s_2_St_7_Erro_1;
        if (d) {
          v_69_2 = true;
        } else {
          v_69_2 = false;
        };
        if (c) {
          v_71_2 = false;
        } else {
          v_71_2 = v_69_2;
        };
        if (a) {
          v_73_2 = false;
        } else {
          v_73_2 = v_71_2;
        };
        if (b) {
          s_2_St_7_Erro_2 = true;
        } else {
          s_2_St_7_Erro_2 = v_73_2;
        };
        v_261 = s_2_St_7_Erro_2;
        if (d) {
          v_69_3 = false;
        } else {
          v_69_3 = false;
        };
        if (c) {
          v_71_3 = false;
        } else {
          v_71_3 = v_69_3;
        };
        if (a) {
          v_73_3 = true;
        } else {
          v_73_3 = v_71_3;
        };
        if (b) {
          s_2_St_7_Erro_3 = true;
        } else {
          s_2_St_7_Erro_3 = v_73_3;
        };
        v_262 = s_2_St_7_Erro_3;
        if (v_69_1) {
          v_69_2_1 = v_69_2;
          if (v_69_2_1) {
            v_69_3_1_1 = v_69_3;
          } else {
            v_69_3_1_0 = v_69_3;
          };
        } else {
          v_69_2_0 = v_69_2;
          if (v_69_2_0) {
            v_69_3_0_1 = v_69_3;
          } else {
            v_69_3_0_0 = v_69_3;
          };
        };
        if (v_71_1) {
          v_71_2_1 = v_71_2;
          if (v_71_2_1) {
            v_71_3_1_1 = v_71_3;
          } else {
            v_71_3_1_0 = v_71_3;
          };
        } else {
          v_71_2_0 = v_71_2;
          if (v_71_2_0) {
            v_71_3_0_1 = v_71_3;
          } else {
            v_71_3_0_0 = v_71_3;
          };
        };
        if (v_73_1) {
          v_73_2_1 = v_73_2;
          if (v_73_2_1) {
            v_73_3_1_1 = v_73_3;
          } else {
            v_73_3_1_0 = v_73_3;
          };
        } else {
          v_73_2_0 = v_73_2;
          if (v_73_2_0) {
            v_73_3_0_1 = v_73_3;
          } else {
            v_73_3_0_0 = v_73_3;
          };
        };
        if (s_2_St_7_Erro_1) {
          s_2_St_7_Erro_2_1 = s_2_St_7_Erro_2;
          if (s_2_St_7_Erro_2_1) {
            s_2_St_7_Erro_3_1_1 = s_2_St_7_Erro_3;
          } else {
            s_2_St_7_Erro_3_1_0 = s_2_St_7_Erro_3;
          };
        } else {
          s_2_St_7_Erro_2_0 = s_2_St_7_Erro_2;
          if (s_2_St_7_Erro_2_0) {
            s_2_St_7_Erro_3_0_1 = s_2_St_7_Erro_3;
          } else {
            s_2_St_7_Erro_3_0_0 = s_2_St_7_Erro_3;
          };
        };
      };
      v_266 = v_260;
      v_267 = v_261;
      v_268 = v_262;
      v_274 = v_273;
    };
    s_2_1 = v_266;
    s_2_2 = v_267;
    s_2_3 = v_268;
    r_2 = v_274;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
      v_269 = true;
      v_270 = true;
      v_271 = true;
      v_276 = true;
    } else {
      ck_12_3_0_0 = ck_12_3;
      if (ck_12_3_0_0) {
        if (e) {
          v_64 = true;
        } else {
          v_64 = self->pnr_2;
        };
        if (c) {
          v_66 = true;
        } else {
          v_66 = v_64;
        };
        if (b) {
          r_2_St_7_Limiar1 = true;
        } else {
          r_2_St_7_Limiar1 = v_66;
        };
        if (e) {
          v_63_1 = true;
        } else {
          v_63_1 = false;
        };
        if (c) {
          v_65_1 = false;
        } else {
          v_65_1 = v_63_1;
        };
        if (b) {
          s_2_St_7_Limiar1_1 = true;
        } else {
          s_2_St_7_Limiar1_1 = v_65_1;
        };
        if (e) {
          v_63_2 = false;
        } else {
          v_63_2 = false;
        };
        if (c) {
          v_65_2 = false;
        } else {
          v_65_2 = v_63_2;
        };
        if (b) {
          s_2_St_7_Limiar1_2 = true;
        } else {
          s_2_St_7_Limiar1_2 = v_65_2;
        };
        if (e) {
          v_63_3 = false;
        } else {
          v_63_3 = true;
        };
        if (c) {
          v_65_3 = false;
        } else {
          v_65_3 = v_63_3;
        };
        if (b) {
          s_2_St_7_Limiar1_3 = true;
        } else {
          s_2_St_7_Limiar1_3 = v_65_3;
        };
        v_275 = r_2_St_7_Limiar1;
        v_263 = s_2_St_7_Limiar1_1;
        v_264 = s_2_St_7_Limiar1_2;
        v_265 = s_2_St_7_Limiar1_3;
        if (v_63_1) {
          v_63_2_1 = v_63_2;
          if (v_63_2_1) {
            v_63_3_1_1 = v_63_3;
          } else {
            v_63_3_1_0 = v_63_3;
          };
        } else {
          v_63_2_0 = v_63_2;
          if (v_63_2_0) {
            v_63_3_0_1 = v_63_3;
          } else {
            v_63_3_0_0 = v_63_3;
          };
        };
        if (v_65_1) {
          v_65_2_1 = v_65_2;
          if (v_65_2_1) {
            v_65_3_1_1 = v_65_3;
          } else {
            v_65_3_1_0 = v_65_3;
          };
        } else {
          v_65_2_0 = v_65_2;
          if (v_65_2_0) {
            v_65_3_0_1 = v_65_3;
          } else {
            v_65_3_0_0 = v_65_3;
          };
        };
      } else {
        if (e) {
          v_60 = true;
        } else {
          v_60 = self->pnr_2;
        };
        if (d) {
          v_62 = true;
        } else {
          v_62 = v_60;
        };
        if (a) {
          r_2_St_7_Limiar2 = true;
        } else {
          r_2_St_7_Limiar2 = v_62;
        };
        v_275 = r_2_St_7_Limiar2;
        if (e) {
          v_59_1 = true;
        } else {
          v_59_1 = false;
        };
        if (d) {
          v_61_1 = true;
        } else {
          v_61_1 = v_59_1;
        };
        if (a) {
          s_2_St_7_Limiar2_1 = false;
        } else {
          s_2_St_7_Limiar2_1 = v_61_1;
        };
        v_263 = s_2_St_7_Limiar2_1;
        if (e) {
          v_59_2 = false;
        } else {
          v_59_2 = false;
        };
        if (d) {
          v_61_2 = true;
        } else {
          v_61_2 = v_59_2;
        };
        if (a) {
          s_2_St_7_Limiar2_2 = false;
        } else {
          s_2_St_7_Limiar2_2 = v_61_2;
        };
        v_264 = s_2_St_7_Limiar2_2;
        if (e) {
          v_59_3 = false;
        } else {
          v_59_3 = false;
        };
        if (d) {
          v_61_3 = false;
        } else {
          v_61_3 = v_59_3;
        };
        if (a) {
          s_2_St_7_Limiar2_3 = true;
        } else {
          s_2_St_7_Limiar2_3 = v_61_3;
        };
        v_265 = s_2_St_7_Limiar2_3;
        if (v_59_1) {
          v_59_2_1 = v_59_2;
          if (v_59_2_1) {
            v_59_3_1_1 = v_59_3;
          } else {
            v_59_3_1_0 = v_59_3;
          };
        } else {
          v_59_2_0 = v_59_2;
          if (v_59_2_0) {
            v_59_3_0_1 = v_59_3;
          } else {
            v_59_3_0_0 = v_59_3;
          };
        };
        if (v_61_1) {
          v_61_2_1 = v_61_2;
          if (v_61_2_1) {
            v_61_3_1_1 = v_61_3;
          } else {
            v_61_3_1_0 = v_61_3;
          };
        } else {
          v_61_2_0 = v_61_2;
          if (v_61_2_0) {
            v_61_3_0_1 = v_61_3;
          } else {
            v_61_3_0_0 = v_61_3;
          };
        };
      };
      v_269 = v_263;
      v_270 = v_264;
      v_271 = v_265;
      v_276 = v_275;
    };
    s_2_1 = v_269;
    s_2_2 = v_270;
    s_2_3 = v_271;
    r_2 = v_276;
  };
  ck_13_1 = s_2_1;
  ck_13_2 = s_2_2;
  ck_13_3 = s_2_3;
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        estado_bat_St_7_Carregado_1 = false;
        estado_bat_St_7_Carregado_2 = false;
        estado_bat_St_7_Carregado_3 = true;
        nr_2_St_7_Carregado = false;
        ns_2_St_7_Carregado_1 = true;
        ns_2_St_7_Carregado_2 = true;
        ns_2_St_7_Carregado_3 = true;
        v_219 = estado_bat_St_7_Carregado_1;
        v_220 = estado_bat_St_7_Carregado_2;
        v_221 = estado_bat_St_7_Carregado_3;
        v_249 = nr_2_St_7_Carregado;
        v_234 = ns_2_St_7_Carregado_1;
        v_235 = ns_2_St_7_Carregado_2;
        v_236 = ns_2_St_7_Carregado_3;
      } else {
        estado_bat_St_7_Descarregado_1 = true;
        v_219 = estado_bat_St_7_Descarregado_1;
        estado_bat_St_7_Descarregado_2 = true;
        v_220 = estado_bat_St_7_Descarregado_2;
        estado_bat_St_7_Descarregado_3 = true;
        v_221 = estado_bat_St_7_Descarregado_3;
        nr_2_St_7_Descarregado = false;
        v_249 = nr_2_St_7_Descarregado;
        ns_2_St_7_Descarregado_1 = true;
        v_234 = ns_2_St_7_Descarregado_1;
        ns_2_St_7_Descarregado_2 = true;
        v_235 = ns_2_St_7_Descarregado_2;
        ns_2_St_7_Descarregado_3 = false;
        v_236 = ns_2_St_7_Descarregado_3;
      };
      v_228 = v_219;
      v_229 = v_220;
      v_230 = v_221;
      v_243 = v_234;
      v_244 = v_235;
      v_245 = v_236;
      v_251 = v_249;
      if (ck_13_3_1_1) {
        if (estado_bat_St_7_Carregado_1) {
          estado_bat_St_7_Carregado_2_1 = estado_bat_St_7_Carregado_2;
          if (estado_bat_St_7_Carregado_2_1) {
            estado_bat_St_7_Carregado_3_1_1 = estado_bat_St_7_Carregado_3;
          } else {
            estado_bat_St_7_Carregado_3_1_0 = estado_bat_St_7_Carregado_3;
          };
        } else {
          estado_bat_St_7_Carregado_2_0 = estado_bat_St_7_Carregado_2;
          if (estado_bat_St_7_Carregado_2_0) {
            estado_bat_St_7_Carregado_3_0_1 = estado_bat_St_7_Carregado_3;
          } else {
            estado_bat_St_7_Carregado_3_0_0 = estado_bat_St_7_Carregado_3;
          };
        };
        if (ns_2_St_7_Carregado_1) {
          ns_2_St_7_Carregado_2_1 = ns_2_St_7_Carregado_2;
          if (ns_2_St_7_Carregado_2_1) {
            ns_2_St_7_Carregado_3_1_1 = ns_2_St_7_Carregado_3;
          } else {
            ns_2_St_7_Carregado_3_1_0 = ns_2_St_7_Carregado_3;
          };
        } else {
          ns_2_St_7_Carregado_2_0 = ns_2_St_7_Carregado_2;
          if (ns_2_St_7_Carregado_2_0) {
            ns_2_St_7_Carregado_3_0_1 = ns_2_St_7_Carregado_3;
          } else {
            ns_2_St_7_Carregado_3_0_0 = ns_2_St_7_Carregado_3;
          };
        };
      } else {
        if (estado_bat_St_7_Descarregado_1) {
          estado_bat_St_7_Descarregado_2_1 = estado_bat_St_7_Descarregado_2;
          if (estado_bat_St_7_Descarregado_2_1) {
            estado_bat_St_7_Descarregado_3_1_1 = estado_bat_St_7_Descarregado_3;
          } else {
            estado_bat_St_7_Descarregado_3_1_0 = estado_bat_St_7_Descarregado_3;
          };
        } else {
          estado_bat_St_7_Descarregado_2_0 = estado_bat_St_7_Descarregado_2;
          if (estado_bat_St_7_Descarregado_2_0) {
            estado_bat_St_7_Descarregado_3_0_1 = estado_bat_St_7_Descarregado_3;
          } else {
            estado_bat_St_7_Descarregado_3_0_0 = estado_bat_St_7_Descarregado_3;
          };
        };
        if (ns_2_St_7_Descarregado_1) {
          ns_2_St_7_Descarregado_2_1 = ns_2_St_7_Descarregado_2;
          if (ns_2_St_7_Descarregado_2_1) {
            ns_2_St_7_Descarregado_3_1_1 = ns_2_St_7_Descarregado_3;
          } else {
            ns_2_St_7_Descarregado_3_1_0 = ns_2_St_7_Descarregado_3;
          };
        } else {
          ns_2_St_7_Descarregado_2_0 = ns_2_St_7_Descarregado_2;
          if (ns_2_St_7_Descarregado_2_0) {
            ns_2_St_7_Descarregado_3_0_1 = ns_2_St_7_Descarregado_3;
          } else {
            ns_2_St_7_Descarregado_3_0_0 = ns_2_St_7_Descarregado_3;
          };
        };
      };
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_222 = true;
        v_223 = true;
        v_224 = true;
        v_250 = true;
        v_237 = true;
        v_238 = true;
        v_239 = true;
      } else {
        estado_bat_St_7_Erro_1 = false;
        v_222 = estado_bat_St_7_Erro_1;
        estado_bat_St_7_Erro_2 = false;
        v_223 = estado_bat_St_7_Erro_2;
        estado_bat_St_7_Erro_3 = false;
        v_224 = estado_bat_St_7_Erro_3;
        nr_2_St_7_Erro = false;
        v_250 = nr_2_St_7_Erro;
        ns_2_St_7_Erro_1 = true;
        v_237 = ns_2_St_7_Erro_1;
        ns_2_St_7_Erro_2 = false;
        v_238 = ns_2_St_7_Erro_2;
        ns_2_St_7_Erro_3 = false;
        v_239 = ns_2_St_7_Erro_3;
        if (estado_bat_St_7_Erro_1) {
          estado_bat_St_7_Erro_2_1 = estado_bat_St_7_Erro_2;
          if (estado_bat_St_7_Erro_2_1) {
            estado_bat_St_7_Erro_3_1_1 = estado_bat_St_7_Erro_3;
          } else {
            estado_bat_St_7_Erro_3_1_0 = estado_bat_St_7_Erro_3;
          };
        } else {
          estado_bat_St_7_Erro_2_0 = estado_bat_St_7_Erro_2;
          if (estado_bat_St_7_Erro_2_0) {
            estado_bat_St_7_Erro_3_0_1 = estado_bat_St_7_Erro_3;
          } else {
            estado_bat_St_7_Erro_3_0_0 = estado_bat_St_7_Erro_3;
          };
        };
        if (ns_2_St_7_Erro_1) {
          ns_2_St_7_Erro_2_1 = ns_2_St_7_Erro_2;
          if (ns_2_St_7_Erro_2_1) {
            ns_2_St_7_Erro_3_1_1 = ns_2_St_7_Erro_3;
          } else {
            ns_2_St_7_Erro_3_1_0 = ns_2_St_7_Erro_3;
          };
        } else {
          ns_2_St_7_Erro_2_0 = ns_2_St_7_Erro_2;
          if (ns_2_St_7_Erro_2_0) {
            ns_2_St_7_Erro_3_0_1 = ns_2_St_7_Erro_3;
          } else {
            ns_2_St_7_Erro_3_0_0 = ns_2_St_7_Erro_3;
          };
        };
      };
      v_228 = v_222;
      v_229 = v_223;
      v_230 = v_224;
      v_243 = v_237;
      v_244 = v_238;
      v_245 = v_239;
      v_251 = v_250;
    };
    estado_bat_1 = v_228;
    estado_bat_2 = v_229;
    estado_bat_3 = v_230;
    ns_2_1 = v_243;
    ns_2_2 = v_244;
    ns_2_3 = v_245;
    nr_2 = v_251;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      v_231 = true;
      v_232 = true;
      v_233 = true;
      v_246 = true;
      v_247 = true;
      v_248 = true;
      v_253 = true;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        estado_bat_St_7_Limiar1_1 = true;
        estado_bat_St_7_Limiar1_2 = false;
        estado_bat_St_7_Limiar1_3 = false;
        nr_2_St_7_Limiar1 = false;
        ns_2_St_7_Limiar1_1 = false;
        ns_2_St_7_Limiar1_2 = false;
        ns_2_St_7_Limiar1_3 = true;
        v_225 = estado_bat_St_7_Limiar1_1;
        v_226 = estado_bat_St_7_Limiar1_2;
        v_227 = estado_bat_St_7_Limiar1_3;
        v_252 = nr_2_St_7_Limiar1;
        v_240 = ns_2_St_7_Limiar1_1;
        v_241 = ns_2_St_7_Limiar1_2;
        v_242 = ns_2_St_7_Limiar1_3;
      } else {
        estado_bat_St_7_Limiar2_1 = true;
        v_225 = estado_bat_St_7_Limiar2_1;
        estado_bat_St_7_Limiar2_2 = true;
        v_226 = estado_bat_St_7_Limiar2_2;
        estado_bat_St_7_Limiar2_3 = false;
        v_227 = estado_bat_St_7_Limiar2_3;
        nr_2_St_7_Limiar2 = false;
        v_252 = nr_2_St_7_Limiar2;
        ns_2_St_7_Limiar2_1 = false;
        v_240 = ns_2_St_7_Limiar2_1;
        ns_2_St_7_Limiar2_2 = false;
        v_241 = ns_2_St_7_Limiar2_2;
        ns_2_St_7_Limiar2_3 = false;
        v_242 = ns_2_St_7_Limiar2_3;
      };
      v_231 = v_225;
      v_232 = v_226;
      v_233 = v_227;
      v_246 = v_240;
      v_247 = v_241;
      v_248 = v_242;
      v_253 = v_252;
    };
    estado_bat_1 = v_231;
    estado_bat_2 = v_232;
    estado_bat_3 = v_233;
    ns_2_1 = v_246;
    ns_2_2 = v_247;
    ns_2_3 = v_248;
    nr_2 = v_253;
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
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_2_3_1_1 = ns_2_3;
    } else {
      ns_2_3_1_0 = ns_2_3;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_2_3_0_1 = ns_2_3;
    } else {
      ns_2_3_0_0 = ns_2_3;
    };
  };
  if (!(ck_13_1)) {
    if (!(ck_13_2_0)) {
      if (ck_13_3_0_0) {
        if (estado_bat_St_7_Limiar1_1) {
          estado_bat_St_7_Limiar1_2_1 = estado_bat_St_7_Limiar1_2;
          if (estado_bat_St_7_Limiar1_2_1) {
            estado_bat_St_7_Limiar1_3_1_1 = estado_bat_St_7_Limiar1_3;
          } else {
            estado_bat_St_7_Limiar1_3_1_0 = estado_bat_St_7_Limiar1_3;
          };
        } else {
          estado_bat_St_7_Limiar1_2_0 = estado_bat_St_7_Limiar1_2;
          if (estado_bat_St_7_Limiar1_2_0) {
            estado_bat_St_7_Limiar1_3_0_1 = estado_bat_St_7_Limiar1_3;
          } else {
            estado_bat_St_7_Limiar1_3_0_0 = estado_bat_St_7_Limiar1_3;
          };
        };
        if (ns_2_St_7_Limiar1_1) {
          ns_2_St_7_Limiar1_2_1 = ns_2_St_7_Limiar1_2;
          if (ns_2_St_7_Limiar1_2_1) {
            ns_2_St_7_Limiar1_3_1_1 = ns_2_St_7_Limiar1_3;
          } else {
            ns_2_St_7_Limiar1_3_1_0 = ns_2_St_7_Limiar1_3;
          };
        } else {
          ns_2_St_7_Limiar1_2_0 = ns_2_St_7_Limiar1_2;
          if (ns_2_St_7_Limiar1_2_0) {
            ns_2_St_7_Limiar1_3_0_1 = ns_2_St_7_Limiar1_3;
          } else {
            ns_2_St_7_Limiar1_3_0_0 = ns_2_St_7_Limiar1_3;
          };
        };
      } else {
        if (estado_bat_St_7_Limiar2_1) {
          estado_bat_St_7_Limiar2_2_1 = estado_bat_St_7_Limiar2_2;
          if (estado_bat_St_7_Limiar2_2_1) {
            estado_bat_St_7_Limiar2_3_1_1 = estado_bat_St_7_Limiar2_3;
          } else {
            estado_bat_St_7_Limiar2_3_1_0 = estado_bat_St_7_Limiar2_3;
          };
        } else {
          estado_bat_St_7_Limiar2_2_0 = estado_bat_St_7_Limiar2_2;
          if (estado_bat_St_7_Limiar2_2_0) {
            estado_bat_St_7_Limiar2_3_0_1 = estado_bat_St_7_Limiar2_3;
          } else {
            estado_bat_St_7_Limiar2_3_0_0 = estado_bat_St_7_Limiar2_3;
          };
        };
        if (ns_2_St_7_Limiar2_1) {
          ns_2_St_7_Limiar2_2_1 = ns_2_St_7_Limiar2_2;
          if (ns_2_St_7_Limiar2_2_1) {
            ns_2_St_7_Limiar2_3_1_1 = ns_2_St_7_Limiar2_3;
          } else {
            ns_2_St_7_Limiar2_3_1_0 = ns_2_St_7_Limiar2_3;
          };
        } else {
          ns_2_St_7_Limiar2_2_0 = ns_2_St_7_Limiar2_2;
          if (ns_2_St_7_Limiar2_2_0) {
            ns_2_St_7_Limiar2_3_0_1 = ns_2_St_7_Limiar2_3;
          } else {
            ns_2_St_7_Limiar2_3_0_0 = ns_2_St_7_Limiar2_3;
          };
        };
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
    if (s_2_2_1) {
      s_2_3_1_1 = s_2_3;
    } else {
      s_2_3_1_0 = s_2_3;
    };
  } else {
    s_2_2_0 = s_2_2;
    if (s_2_2_0) {
      s_2_3_0_1 = s_2_3;
    } else {
      s_2_3_0_0 = s_2_3;
    };
  };
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
        if (s_2_St_7_Limiar1_1) {
          s_2_St_7_Limiar1_2_1 = s_2_St_7_Limiar1_2;
          if (s_2_St_7_Limiar1_2_1) {
            s_2_St_7_Limiar1_3_1_1 = s_2_St_7_Limiar1_3;
          } else {
            s_2_St_7_Limiar1_3_1_0 = s_2_St_7_Limiar1_3;
          };
        } else {
          s_2_St_7_Limiar1_2_0 = s_2_St_7_Limiar1_2;
          if (s_2_St_7_Limiar1_2_0) {
            s_2_St_7_Limiar1_3_0_1 = s_2_St_7_Limiar1_3;
          } else {
            s_2_St_7_Limiar1_3_0_0 = s_2_St_7_Limiar1_3;
          };
        };
      } else {
        if (s_2_St_7_Limiar2_1) {
          s_2_St_7_Limiar2_2_1 = s_2_St_7_Limiar2_2;
          if (s_2_St_7_Limiar2_2_1) {
            s_2_St_7_Limiar2_3_1_1 = s_2_St_7_Limiar2_3;
          } else {
            s_2_St_7_Limiar2_3_1_0 = s_2_St_7_Limiar2_3;
          };
        } else {
          s_2_St_7_Limiar2_2_0 = s_2_St_7_Limiar2_2;
          if (s_2_St_7_Limiar2_2_0) {
            s_2_St_7_Limiar2_3_0_1 = s_2_St_7_Limiar2_3;
          } else {
            s_2_St_7_Limiar2_3_0_0 = s_2_St_7_Limiar2_3;
          };
        };
      };
    };
  };
  if (self->ck_10_1) {
    if (t) {
      r_3_St_8_Dia = true;
      s_3_St_8_Dia_1 = false;
    } else {
      r_3_St_8_Dia = self->pnr_3;
      s_3_St_8_Dia_1 = true;
    };
    r_3 = r_3_St_8_Dia;
    s_3_1 = s_3_St_8_Dia_1;
  } else {
    if (t) {
      r_3_St_8_Noite = true;
    } else {
      r_3_St_8_Noite = self->pnr_3;
    };
    r_3 = r_3_St_8_Noite;
    if (t) {
      s_3_St_8_Noite_1 = true;
    } else {
      s_3_St_8_Noite_1 = false;
    };
    s_3_1 = s_3_St_8_Noite_1;
  };
  ck_11_1 = s_3_1;
  if (ck_11_1) {
    isday_St_8_Dia = true;
    nr_3_St_8_Dia = false;
    ns_3_St_8_Dia_1 = true;
    isday = isday_St_8_Dia;
    nr_3 = nr_3_St_8_Dia;
    ns_3_1 = ns_3_St_8_Dia_1;
  } else {
    isday_St_8_Noite = false;
    isday = isday_St_8_Noite;
    nr_3_St_8_Noite = false;
    nr_3 = nr_3_St_8_Noite;
    ns_3_St_8_Noite_1 = false;
    ns_3_1 = ns_3_St_8_Noite_1;
  };
  _out->relogio = isday;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        ck_6 = _out->relogio;
        if (ck_6) {
          pm_B25_true = !(_out->modem_atuador);
          pm_B25 = pm_B25_true;
          pb_B25_true = !(_out->pabx);
          pb_B25 = pb_B25_true;
          erro_B25_true = false;
          erro_B25 = erro_B25_true;
        } else {
          pm_B25_false = !(_out->modem_atuador);
          pm_B25 = pm_B25_false;
          pb_B25_false = !(_out->pabx);
          pb_B25 = pb_B25_false;
          erro_B25_false = false;
          erro_B25 = erro_B25_false;
        };
        v_287 = pm_B25;
        v_282 = pb_B25;
        v_277 = erro_B25;
      } else {
        ck_7 = _out->relogio;
        if (ck_7) {
          pm_B50_true = _out->modem_atuador;
          pm_B50 = pm_B50_true;
          pb_B50_true = _out->pabx;
          pb_B50 = pb_B50_true;
          erro_B50_true = false;
          erro_B50 = erro_B50_true;
        } else {
          pm_B50_false = _out->modem_atuador;
          pm_B50 = pm_B50_false;
          pb_B50_false = !(_out->pabx);
          pb_B50 = pb_B50_false;
          erro_B50_false = false;
          erro_B50 = erro_B50_false;
        };
        v_287 = pm_B50;
        v_282 = pb_B50;
        v_277 = erro_B50;
      };
      v_289 = v_287;
      v_284 = v_282;
      v_279 = v_277;
    } else {
      if (ck_3_1_0) {
        v_288 = true;
        v_283 = true;
        v_278 = true;
      } else {
        ck_8 = _out->relogio;
        if (ck_8) {
          pm_B75_true = _out->modem_atuador;
          pm_B75 = pm_B75_true;
          pb_B75_true = _out->pabx;
          pb_B75 = pb_B75_true;
          erro_B75_true = false;
          erro_B75 = erro_B75_true;
        } else {
          pm_B75_false = _out->modem_atuador;
          pm_B75 = pm_B75_false;
          pb_B75_false = !(_out->pabx);
          pb_B75 = pb_B75_false;
          erro_B75_false = false;
          erro_B75 = erro_B75_false;
        };
        v_288 = pm_B75;
        v_283 = pb_B75;
        v_278 = erro_B75;
      };
      v_289 = v_288;
      v_284 = v_283;
      v_279 = v_278;
    };
    _out->pm = v_289;
    _out->pb = v_284;
    _out->erro = v_279;
  } else {
    if (ck_2_0) {
      v_291 = true;
      v_286 = true;
      v_281 = true;
    } else {
      if (ck_3_0_0) {
        ck_9 = _out->relogio;
        if (ck_9) {
          pm_B100_true = _out->modem_atuador;
          pm_B100 = pm_B100_true;
          pb_B100_true = _out->pabx;
          pb_B100 = pb_B100_true;
          erro_B100_true = false;
          erro_B100 = erro_B100_true;
        } else {
          pm_B100_false = _out->modem_atuador;
          pm_B100 = pm_B100_false;
          pb_B100_false = _out->pabx;
          pb_B100 = pb_B100_false;
          erro_B100_false = false;
          erro_B100 = erro_B100_false;
        };
        v_290 = pm_B100;
        v_285 = pb_B100;
        v_280 = erro_B100;
      } else {
        v_290 = pm_BERR;
        v_285 = pb_BERR;
        v_280 = erro_BERR;
      };
      v_291 = v_290;
      v_286 = v_285;
      v_281 = v_280;
    };
    _out->pm = v_291;
    _out->pb = v_286;
    _out->erro = v_281;
  };
  v_56 = (_out->pb&&_out->pm);
  self->pnr = nr;
  self->ck_16_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_14_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_254 = ns_2_1;
  self->v_255 = ns_2_2;
  self->v_256 = ns_2_3;
  self->pnr_3 = nr_3;
  self->ck_10_1 = ns_3_1;;
}

