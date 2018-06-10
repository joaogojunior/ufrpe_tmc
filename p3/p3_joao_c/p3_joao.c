/* --- Generated the 10/6/2018 at 9:2 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p3_joao.h"

void P3_joao__washingmachine_reset(P3_joao__washingmachine_mem* self) {
  self->pnr = false;
  self->v_164 = true;
  self->v_165 = true;
  self->v_166 = true;
}

void P3_joao__washingmachine_step(int e, int s, int c,
                                  P3_joao__washingmachine_out* _out,
                                  P3_joao__washingmachine_mem* self) {
  
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
  int ns_St_Standby_2_0;
  int ns_St_Standby_3_0_0;
  int ns_St_Standby_3_0_1;
  int ns_St_Standby_2_1;
  int ns_St_Standby_3_1_0;
  int ns_St_Standby_3_1_1;
  int ns_St_Spin_2_0;
  int ns_St_Spin_3_0_0;
  int ns_St_Spin_3_0_1;
  int ns_St_Spin_2_1;
  int ns_St_Spin_3_1_0;
  int ns_St_Spin_3_1_1;
  int ns_St_Rinse_2_0;
  int ns_St_Rinse_3_0_0;
  int ns_St_Rinse_3_0_1;
  int ns_St_Rinse_2_1;
  int ns_St_Rinse_3_1_0;
  int ns_St_Rinse_3_1_1;
  int ns_St_Washing_2_0;
  int ns_St_Washing_3_0_0;
  int ns_St_Washing_3_0_1;
  int ns_St_Washing_2_1;
  int ns_St_Washing_3_1_0;
  int ns_St_Washing_3_1_1;
  int ns_St_Waterfill_2_0;
  int ns_St_Waterfill_3_0_0;
  int ns_St_Waterfill_3_0_1;
  int ns_St_Waterfill_2_1;
  int ns_St_Waterfill_3_1_0;
  int ns_St_Waterfill_3_1_1;
  int ns_St_Off_2_0;
  int ns_St_Off_3_0_0;
  int ns_St_Off_3_0_1;
  int ns_St_Off_2_1;
  int ns_St_Off_3_1_0;
  int ns_St_Off_3_1_1;
  int ck_1_2_0;
  int ck_1_3_0_0;
  int ck_1_3_0_1;
  int ck_1_2_1;
  int ck_1_3_1_0;
  int ck_1_3_1_1;
  int nr_St_Standby;
  int ns_St_Standby_3;
  int ns_St_Standby_2;
  int ns_St_Standby_1;
  int i_St_Standby;
  int p_St_Standby;
  int nr_St_Spin;
  int ns_St_Spin_3;
  int ns_St_Spin_2;
  int ns_St_Spin_1;
  int i_St_Spin;
  int p_St_Spin;
  int nr_St_Rinse;
  int ns_St_Rinse_3;
  int ns_St_Rinse_2;
  int ns_St_Rinse_1;
  int i_St_Rinse;
  int p_St_Rinse;
  int nr_St_Washing;
  int ns_St_Washing_3;
  int ns_St_Washing_2;
  int ns_St_Washing_1;
  int i_St_Washing;
  int p_St_Washing;
  int nr_St_Waterfill;
  int ns_St_Waterfill_3;
  int ns_St_Waterfill_2;
  int ns_St_Waterfill_1;
  int i_St_Waterfill;
  int p_St_Waterfill;
  int nr_St_Off;
  int ns_St_Off_3;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int i_St_Off;
  int p_St_Off;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_3_2_0;
  int v_3_3_0_0;
  int v_3_3_0_1;
  int v_3_2_1;
  int v_3_3_1_0;
  int v_3_3_1_1;
  int v_4;
  int v_3_3;
  int v_3_2;
  int v_3_1;
  int v_2;
  int v_1;
  int v;
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
  int s_4_St_Standby_2_0;
  int s_4_St_Standby_3_0_0;
  int s_4_St_Standby_3_0_1;
  int s_4_St_Standby_2_1;
  int s_4_St_Standby_3_1_0;
  int s_4_St_Standby_3_1_1;
  int s_4_St_Spin_2_0;
  int s_4_St_Spin_3_0_0;
  int s_4_St_Spin_3_0_1;
  int s_4_St_Spin_2_1;
  int s_4_St_Spin_3_1_0;
  int s_4_St_Spin_3_1_1;
  int s_4_St_Rinse_2_0;
  int s_4_St_Rinse_3_0_0;
  int s_4_St_Rinse_3_0_1;
  int s_4_St_Rinse_2_1;
  int s_4_St_Rinse_3_1_0;
  int s_4_St_Rinse_3_1_1;
  int s_4_St_Washing_2_0;
  int s_4_St_Washing_3_0_0;
  int s_4_St_Washing_3_0_1;
  int s_4_St_Washing_2_1;
  int s_4_St_Washing_3_1_0;
  int s_4_St_Washing_3_1_1;
  int s_4_St_Waterfill_2_0;
  int s_4_St_Waterfill_3_0_0;
  int s_4_St_Waterfill_3_0_1;
  int s_4_St_Waterfill_2_1;
  int s_4_St_Waterfill_3_1_0;
  int s_4_St_Waterfill_3_1_1;
  int s_4_St_Off_2_0;
  int s_4_St_Off_3_0_0;
  int s_4_St_Off_3_0_1;
  int s_4_St_Off_2_1;
  int s_4_St_Off_3_1_0;
  int s_4_St_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Standby;
  int s_4_St_Standby_3;
  int s_4_St_Standby_2;
  int s_4_St_Standby_1;
  int r_St_Spin;
  int s_4_St_Spin_3;
  int s_4_St_Spin_2;
  int s_4_St_Spin_1;
  int r_St_Rinse;
  int s_4_St_Rinse_3;
  int s_4_St_Rinse_2;
  int s_4_St_Rinse_1;
  int r_St_Washing;
  int s_4_St_Washing_3;
  int s_4_St_Washing_2;
  int s_4_St_Washing_1;
  int r_St_Waterfill;
  int s_4_St_Waterfill_3;
  int s_4_St_Waterfill_2;
  int s_4_St_Waterfill_1;
  int r_St_Off;
  int s_4_St_Off_3;
  int s_4_St_Off_2;
  int s_4_St_Off_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
  int s_4_2_0;
  int s_4_3_0_0;
  int s_4_3_0_1;
  int s_4_2_1;
  int s_4_3_1_0;
  int s_4_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_4_3;
  int s_4_2;
  int s_4_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_4 = self->v_164;
  ck_2 = self->v_165;
  ck_3 = self->v_166;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (s) {
          r_St_Off = true;
          s_4_St_Off_1 = false;
          s_4_St_Off_2 = false;
          s_4_St_Off_3 = false;
        } else {
          r_St_Off = self->pnr;
          s_4_St_Off_1 = true;
          s_4_St_Off_2 = true;
          s_4_St_Off_3 = true;
        };
        v_185 = r_St_Off;
        v_167 = s_4_St_Off_1;
        v_168 = s_4_St_Off_2;
        v_169 = s_4_St_Off_3;
        if (s_4_St_Off_1) {
          s_4_St_Off_2_1 = s_4_St_Off_2;
          if (s_4_St_Off_2_1) {
            s_4_St_Off_3_1_1 = s_4_St_Off_3;
          } else {
            s_4_St_Off_3_1_0 = s_4_St_Off_3;
          };
        } else {
          s_4_St_Off_2_0 = s_4_St_Off_2;
          if (s_4_St_Off_2_0) {
            s_4_St_Off_3_0_1 = s_4_St_Off_3;
          } else {
            s_4_St_Off_3_0_0 = s_4_St_Off_3;
          };
        };
      } else {
        if (e) {
          r_St_Rinse = true;
        } else {
          r_St_Rinse = self->pnr;
        };
        v_185 = r_St_Rinse;
        if (e) {
          s_4_St_Rinse_1 = true;
        } else {
          s_4_St_Rinse_1 = true;
        };
        v_167 = s_4_St_Rinse_1;
        if (e) {
          s_4_St_Rinse_2 = false;
        } else {
          s_4_St_Rinse_2 = true;
        };
        v_168 = s_4_St_Rinse_2;
        if (e) {
          s_4_St_Rinse_3 = false;
        } else {
          s_4_St_Rinse_3 = false;
        };
        v_169 = s_4_St_Rinse_3;
        if (s_4_St_Rinse_1) {
          s_4_St_Rinse_2_1 = s_4_St_Rinse_2;
          if (s_4_St_Rinse_2_1) {
            s_4_St_Rinse_3_1_1 = s_4_St_Rinse_3;
          } else {
            s_4_St_Rinse_3_1_0 = s_4_St_Rinse_3;
          };
        } else {
          s_4_St_Rinse_2_0 = s_4_St_Rinse_2;
          if (s_4_St_Rinse_2_0) {
            s_4_St_Rinse_3_0_1 = s_4_St_Rinse_3;
          } else {
            s_4_St_Rinse_3_0_0 = s_4_St_Rinse_3;
          };
        };
      };
      v_179 = v_167;
      v_180 = v_168;
      v_181 = v_169;
      v_187 = v_185;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_186 = true;
        v_170 = true;
        v_171 = true;
        v_172 = true;
      } else {
        if (e) {
          r_St_Spin = true;
        } else {
          r_St_Spin = self->pnr;
        };
        v_186 = r_St_Spin;
        if (e) {
          s_4_St_Spin_1 = true;
        } else {
          s_4_St_Spin_1 = true;
        };
        v_170 = s_4_St_Spin_1;
        if (e) {
          s_4_St_Spin_2 = true;
        } else {
          s_4_St_Spin_2 = false;
        };
        v_171 = s_4_St_Spin_2;
        if (e) {
          s_4_St_Spin_3 = true;
        } else {
          s_4_St_Spin_3 = false;
        };
        v_172 = s_4_St_Spin_3;
      };
      v_179 = v_170;
      v_180 = v_171;
      v_181 = v_172;
      v_187 = v_186;
      if (!(ck_3_1_0)) {
        if (s_4_St_Spin_1) {
          s_4_St_Spin_2_1 = s_4_St_Spin_2;
          if (s_4_St_Spin_2_1) {
            s_4_St_Spin_3_1_1 = s_4_St_Spin_3;
          } else {
            s_4_St_Spin_3_1_0 = s_4_St_Spin_3;
          };
        } else {
          s_4_St_Spin_2_0 = s_4_St_Spin_2;
          if (s_4_St_Spin_2_0) {
            s_4_St_Spin_3_0_1 = s_4_St_Spin_3;
          } else {
            s_4_St_Spin_3_0_0 = s_4_St_Spin_3;
          };
        };
      };
    };
    s_4_1 = v_179;
    s_4_2 = v_180;
    s_4_3 = v_181;
    r = v_187;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c) {
          r_St_Standby = true;
        } else {
          r_St_Standby = self->pnr;
        };
        v_188 = r_St_Standby;
        if (c) {
          s_4_St_Standby_1 = false;
        } else {
          s_4_St_Standby_1 = false;
        };
        v_173 = s_4_St_Standby_1;
        if (c) {
          s_4_St_Standby_2 = true;
        } else {
          s_4_St_Standby_2 = true;
        };
        v_174 = s_4_St_Standby_2;
        if (c) {
          s_4_St_Standby_3 = false;
        } else {
          s_4_St_Standby_3 = true;
        };
        v_175 = s_4_St_Standby_3;
      } else {
        if (e) {
          r_St_Washing = true;
          s_4_St_Washing_1 = true;
          s_4_St_Washing_2 = true;
          s_4_St_Washing_3 = false;
        } else {
          r_St_Washing = self->pnr;
          s_4_St_Washing_1 = false;
          s_4_St_Washing_2 = true;
          s_4_St_Washing_3 = false;
        };
        v_188 = r_St_Washing;
        v_173 = s_4_St_Washing_1;
        v_174 = s_4_St_Washing_2;
        v_175 = s_4_St_Washing_3;
      };
      v_182 = v_173;
      v_183 = v_174;
      v_184 = v_175;
      v_190 = v_188;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_189 = true;
        v_176 = true;
        v_177 = true;
        v_178 = true;
      } else {
        v_2 = (e&&c);
        if (v_2) {
          v_4 = true;
          v_3_1 = false;
          v_3_2 = true;
          v_3_3 = false;
        } else {
          v_4 = self->pnr;
          v_3_1 = false;
          v_3_2 = false;
          v_3_3 = false;
        };
        v = !(c);
        v_1 = (e&&v);
        if (v_1) {
          r_St_Waterfill = true;
        } else {
          r_St_Waterfill = v_4;
        };
        v_189 = r_St_Waterfill;
        if (v_1) {
          s_4_St_Waterfill_1 = false;
        } else {
          s_4_St_Waterfill_1 = v_3_1;
        };
        v_176 = s_4_St_Waterfill_1;
        if (v_1) {
          s_4_St_Waterfill_2 = true;
        } else {
          s_4_St_Waterfill_2 = v_3_2;
        };
        v_177 = s_4_St_Waterfill_2;
        if (v_1) {
          s_4_St_Waterfill_3 = true;
        } else {
          s_4_St_Waterfill_3 = v_3_3;
        };
        v_178 = s_4_St_Waterfill_3;
        if (v_3_1) {
          v_3_2_1 = v_3_2;
          if (v_3_2_1) {
            v_3_3_1_1 = v_3_3;
          } else {
            v_3_3_1_0 = v_3_3;
          };
        } else {
          v_3_2_0 = v_3_2;
          if (v_3_2_0) {
            v_3_3_0_1 = v_3_3;
          } else {
            v_3_3_0_0 = v_3_3;
          };
        };
        if (s_4_St_Waterfill_1) {
          s_4_St_Waterfill_2_1 = s_4_St_Waterfill_2;
          if (s_4_St_Waterfill_2_1) {
            s_4_St_Waterfill_3_1_1 = s_4_St_Waterfill_3;
          } else {
            s_4_St_Waterfill_3_1_0 = s_4_St_Waterfill_3;
          };
        } else {
          s_4_St_Waterfill_2_0 = s_4_St_Waterfill_2;
          if (s_4_St_Waterfill_2_0) {
            s_4_St_Waterfill_3_0_1 = s_4_St_Waterfill_3;
          } else {
            s_4_St_Waterfill_3_0_0 = s_4_St_Waterfill_3;
          };
        };
      };
      v_182 = v_176;
      v_183 = v_177;
      v_184 = v_178;
      v_190 = v_189;
    };
    s_4_1 = v_182;
    s_4_2 = v_183;
    s_4_3 = v_184;
    r = v_190;
  };
  ck_1_1 = s_4_1;
  ck_1_2 = s_4_2;
  ck_1_3 = s_4_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        p_St_Off = 0;
        i_St_Off = 0;
        nr_St_Off = false;
        ns_St_Off_1 = true;
        ns_St_Off_2 = true;
        ns_St_Off_3 = true;
        v_128 = p_St_Off;
        v_134 = i_St_Off;
        v_158 = nr_St_Off;
        v_140 = ns_St_Off_1;
        v_141 = ns_St_Off_2;
        v_142 = ns_St_Off_3;
        if (ns_St_Off_1) {
          ns_St_Off_2_1 = ns_St_Off_2;
          if (ns_St_Off_2_1) {
            ns_St_Off_3_1_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_1_0 = ns_St_Off_3;
          };
        } else {
          ns_St_Off_2_0 = ns_St_Off_2;
          if (ns_St_Off_2_0) {
            ns_St_Off_3_0_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_0_0 = ns_St_Off_3;
          };
        };
      } else {
        p_St_Rinse = 200;
        v_128 = p_St_Rinse;
        i_St_Rinse = 3;
        v_134 = i_St_Rinse;
        nr_St_Rinse = false;
        v_158 = nr_St_Rinse;
        ns_St_Rinse_1 = true;
        v_140 = ns_St_Rinse_1;
        ns_St_Rinse_2 = true;
        v_141 = ns_St_Rinse_2;
        ns_St_Rinse_3 = false;
        v_142 = ns_St_Rinse_3;
        if (ns_St_Rinse_1) {
          ns_St_Rinse_2_1 = ns_St_Rinse_2;
          if (ns_St_Rinse_2_1) {
            ns_St_Rinse_3_1_1 = ns_St_Rinse_3;
          } else {
            ns_St_Rinse_3_1_0 = ns_St_Rinse_3;
          };
        } else {
          ns_St_Rinse_2_0 = ns_St_Rinse_2;
          if (ns_St_Rinse_2_0) {
            ns_St_Rinse_3_0_1 = ns_St_Rinse_3;
          } else {
            ns_St_Rinse_3_0_0 = ns_St_Rinse_3;
          };
        };
      };
      v_130 = v_128;
      v_136 = v_134;
      v_152 = v_140;
      v_153 = v_141;
      v_154 = v_142;
      v_160 = v_158;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_129 = 0;
        v_135 = 0;
        v_159 = true;
        v_143 = true;
        v_144 = true;
        v_145 = true;
      } else {
        p_St_Spin = 800;
        v_129 = p_St_Spin;
        i_St_Spin = 4;
        v_135 = i_St_Spin;
        nr_St_Spin = false;
        v_159 = nr_St_Spin;
        ns_St_Spin_1 = true;
        v_143 = ns_St_Spin_1;
        ns_St_Spin_2 = false;
        v_144 = ns_St_Spin_2;
        ns_St_Spin_3 = false;
        v_145 = ns_St_Spin_3;
      };
      v_130 = v_129;
      v_136 = v_135;
      v_152 = v_143;
      v_153 = v_144;
      v_154 = v_145;
      v_160 = v_159;
      if (!(ck_1_3_1_0)) {
        if (ns_St_Spin_1) {
          ns_St_Spin_2_1 = ns_St_Spin_2;
          if (ns_St_Spin_2_1) {
            ns_St_Spin_3_1_1 = ns_St_Spin_3;
          } else {
            ns_St_Spin_3_1_0 = ns_St_Spin_3;
          };
        } else {
          ns_St_Spin_2_0 = ns_St_Spin_2;
          if (ns_St_Spin_2_0) {
            ns_St_Spin_3_0_1 = ns_St_Spin_3;
          } else {
            ns_St_Spin_3_0_0 = ns_St_Spin_3;
          };
        };
      };
    };
    _out->p = v_130;
    _out->i = v_136;
    ns_1 = v_152;
    ns_2 = v_153;
    ns_3 = v_154;
    nr = v_160;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        p_St_Standby = 0;
        v_131 = p_St_Standby;
        i_St_Standby = 5;
        v_137 = i_St_Standby;
        nr_St_Standby = false;
        v_161 = nr_St_Standby;
        ns_St_Standby_1 = false;
        v_146 = ns_St_Standby_1;
        ns_St_Standby_2 = true;
        v_147 = ns_St_Standby_2;
        ns_St_Standby_3 = true;
        v_148 = ns_St_Standby_3;
      } else {
        p_St_Washing = 250;
        i_St_Washing = 2;
        nr_St_Washing = false;
        ns_St_Washing_1 = false;
        ns_St_Washing_2 = true;
        ns_St_Washing_3 = false;
        v_131 = p_St_Washing;
        v_137 = i_St_Washing;
        v_161 = nr_St_Washing;
        v_146 = ns_St_Washing_1;
        v_147 = ns_St_Washing_2;
        v_148 = ns_St_Washing_3;
      };
      v_133 = v_131;
      v_139 = v_137;
      v_155 = v_146;
      v_156 = v_147;
      v_157 = v_148;
      v_163 = v_161;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_132 = 0;
        v_138 = 0;
        v_162 = true;
        v_149 = true;
        v_150 = true;
        v_151 = true;
      } else {
        p_St_Waterfill = 15;
        v_132 = p_St_Waterfill;
        i_St_Waterfill = 1;
        v_138 = i_St_Waterfill;
        nr_St_Waterfill = false;
        v_162 = nr_St_Waterfill;
        ns_St_Waterfill_1 = false;
        v_149 = ns_St_Waterfill_1;
        ns_St_Waterfill_2 = false;
        v_150 = ns_St_Waterfill_2;
        ns_St_Waterfill_3 = false;
        v_151 = ns_St_Waterfill_3;
        if (ns_St_Waterfill_1) {
          ns_St_Waterfill_2_1 = ns_St_Waterfill_2;
          if (ns_St_Waterfill_2_1) {
            ns_St_Waterfill_3_1_1 = ns_St_Waterfill_3;
          } else {
            ns_St_Waterfill_3_1_0 = ns_St_Waterfill_3;
          };
        } else {
          ns_St_Waterfill_2_0 = ns_St_Waterfill_2;
          if (ns_St_Waterfill_2_0) {
            ns_St_Waterfill_3_0_1 = ns_St_Waterfill_3;
          } else {
            ns_St_Waterfill_3_0_0 = ns_St_Waterfill_3;
          };
        };
      };
      v_133 = v_132;
      v_139 = v_138;
      v_155 = v_149;
      v_156 = v_150;
      v_157 = v_151;
      v_163 = v_162;
    };
    _out->p = v_133;
    _out->i = v_139;
    ns_1 = v_155;
    ns_2 = v_156;
    ns_3 = v_157;
    nr = v_163;
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
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ck_1_3_0_1) {
        if (ns_St_Standby_1) {
          ns_St_Standby_2_1 = ns_St_Standby_2;
          if (ns_St_Standby_2_1) {
            ns_St_Standby_3_1_1 = ns_St_Standby_3;
          } else {
            ns_St_Standby_3_1_0 = ns_St_Standby_3;
          };
        } else {
          ns_St_Standby_2_0 = ns_St_Standby_2;
          if (ns_St_Standby_2_0) {
            ns_St_Standby_3_0_1 = ns_St_Standby_3;
          } else {
            ns_St_Standby_3_0_0 = ns_St_Standby_3;
          };
        };
      } else {
        if (ns_St_Washing_1) {
          ns_St_Washing_2_1 = ns_St_Washing_2;
          if (ns_St_Washing_2_1) {
            ns_St_Washing_3_1_1 = ns_St_Washing_3;
          } else {
            ns_St_Washing_3_1_0 = ns_St_Washing_3;
          };
        } else {
          ns_St_Washing_2_0 = ns_St_Washing_2;
          if (ns_St_Washing_2_0) {
            ns_St_Washing_3_0_1 = ns_St_Washing_3;
          } else {
            ns_St_Washing_3_0_0 = ns_St_Washing_3;
          };
        };
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
    if (s_4_2_1) {
      s_4_3_1_1 = s_4_3;
    } else {
      s_4_3_1_0 = s_4_3;
    };
  } else {
    s_4_2_0 = s_4_2;
    if (s_4_2_0) {
      s_4_3_0_1 = s_4_3;
    } else {
      s_4_3_0_0 = s_4_3;
    };
  };
  if (!(ck_1_4)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (s_4_St_Standby_1) {
          s_4_St_Standby_2_1 = s_4_St_Standby_2;
          if (s_4_St_Standby_2_1) {
            s_4_St_Standby_3_1_1 = s_4_St_Standby_3;
          } else {
            s_4_St_Standby_3_1_0 = s_4_St_Standby_3;
          };
        } else {
          s_4_St_Standby_2_0 = s_4_St_Standby_2;
          if (s_4_St_Standby_2_0) {
            s_4_St_Standby_3_0_1 = s_4_St_Standby_3;
          } else {
            s_4_St_Standby_3_0_0 = s_4_St_Standby_3;
          };
        };
      } else {
        if (s_4_St_Washing_1) {
          s_4_St_Washing_2_1 = s_4_St_Washing_2;
          if (s_4_St_Washing_2_1) {
            s_4_St_Washing_3_1_1 = s_4_St_Washing_3;
          } else {
            s_4_St_Washing_3_1_0 = s_4_St_Washing_3;
          };
        } else {
          s_4_St_Washing_2_0 = s_4_St_Washing_2;
          if (s_4_St_Washing_2_0) {
            s_4_St_Washing_3_0_1 = s_4_St_Washing_3;
          } else {
            s_4_St_Washing_3_0_0 = s_4_St_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_164 = ns_1;
  self->v_165 = ns_2;
  self->v_166 = ns_3;;
}

void P3_joao__oven_reset(P3_joao__oven_mem* self) {
  self->pnr = false;
  self->v_221 = true;
  self->v_222 = false;
  self->v_223 = false;
}

void P3_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P3_joao__oven_out* _out, P3_joao__oven_mem* self) {
  
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
  int ns_St_1_Standby_2_0;
  int ns_St_1_Standby_3_0_0;
  int ns_St_1_Standby_3_0_1;
  int ns_St_1_Standby_2_1;
  int ns_St_1_Standby_3_1_0;
  int ns_St_1_Standby_3_1_1;
  int ns_St_1_Reheat_2_0;
  int ns_St_1_Reheat_3_0_0;
  int ns_St_1_Reheat_3_0_1;
  int ns_St_1_Reheat_2_1;
  int ns_St_1_Reheat_3_1_0;
  int ns_St_1_Reheat_3_1_1;
  int ns_St_1_Maintain_2_0;
  int ns_St_1_Maintain_3_0_0;
  int ns_St_1_Maintain_3_0_1;
  int ns_St_1_Maintain_2_1;
  int ns_St_1_Maintain_3_1_0;
  int ns_St_1_Maintain_3_1_1;
  int ns_St_1_Heat_2_0;
  int ns_St_1_Heat_3_0_0;
  int ns_St_1_Heat_3_0_1;
  int ns_St_1_Heat_2_1;
  int ns_St_1_Heat_3_1_0;
  int ns_St_1_Heat_3_1_1;
  int ns_St_1_Off_2_0;
  int ns_St_1_Off_3_0_0;
  int ns_St_1_Off_3_0_1;
  int ns_St_1_Off_2_1;
  int ns_St_1_Off_3_1_0;
  int ns_St_1_Off_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_Standby;
  int ns_St_1_Standby_3;
  int ns_St_1_Standby_2;
  int ns_St_1_Standby_1;
  int i_St_1_Standby;
  int p_St_1_Standby;
  int nr_St_1_Reheat;
  int ns_St_1_Reheat_3;
  int ns_St_1_Reheat_2;
  int ns_St_1_Reheat_1;
  int i_St_1_Reheat;
  int p_St_1_Reheat;
  int nr_St_1_Maintain;
  int ns_St_1_Maintain_3;
  int ns_St_1_Maintain_2;
  int ns_St_1_Maintain_1;
  int i_St_1_Maintain;
  int p_St_1_Maintain;
  int nr_St_1_Heat;
  int ns_St_1_Heat_3;
  int ns_St_1_Heat_2;
  int ns_St_1_Heat_1;
  int i_St_1_Heat;
  int p_St_1_Heat;
  int nr_St_1_Off;
  int ns_St_1_Off_3;
  int ns_St_1_Off_2;
  int ns_St_1_Off_1;
  int i_St_1_Off;
  int p_St_1_Off;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_14_2_0;
  int v_14_3_0_0;
  int v_14_3_0_1;
  int v_14_2_1;
  int v_14_3_1_0;
  int v_14_3_1_1;
  int v_15;
  int v_14_3;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_3_0_0;
  int v_9_3_0_1;
  int v_9_2_1;
  int v_9_3_1_0;
  int v_9_3_1_1;
  int v_10;
  int v_9_3;
  int v_9_2;
  int v_9_1;
  int v_7_2_0;
  int v_7_3_0_0;
  int v_7_3_0_1;
  int v_7_2_1;
  int v_7_3_1_0;
  int v_7_3_1_1;
  int v_8;
  int v_7_3;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_5;
  int v_3;
  int v_2;
  int v_1;
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
  int s_5_St_1_Standby_2_0;
  int s_5_St_1_Standby_3_0_0;
  int s_5_St_1_Standby_3_0_1;
  int s_5_St_1_Standby_2_1;
  int s_5_St_1_Standby_3_1_0;
  int s_5_St_1_Standby_3_1_1;
  int s_5_St_1_Reheat_2_0;
  int s_5_St_1_Reheat_3_0_0;
  int s_5_St_1_Reheat_3_0_1;
  int s_5_St_1_Reheat_2_1;
  int s_5_St_1_Reheat_3_1_0;
  int s_5_St_1_Reheat_3_1_1;
  int s_5_St_1_Maintain_2_0;
  int s_5_St_1_Maintain_3_0_0;
  int s_5_St_1_Maintain_3_0_1;
  int s_5_St_1_Maintain_2_1;
  int s_5_St_1_Maintain_3_1_0;
  int s_5_St_1_Maintain_3_1_1;
  int s_5_St_1_Heat_2_0;
  int s_5_St_1_Heat_3_0_0;
  int s_5_St_1_Heat_3_0_1;
  int s_5_St_1_Heat_2_1;
  int s_5_St_1_Heat_3_1_0;
  int s_5_St_1_Heat_3_1_1;
  int s_5_St_1_Off_2_0;
  int s_5_St_1_Off_3_0_0;
  int s_5_St_1_Off_3_0_1;
  int s_5_St_1_Off_2_1;
  int s_5_St_1_Off_3_1_0;
  int s_5_St_1_Off_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Standby;
  int s_5_St_1_Standby_3;
  int s_5_St_1_Standby_2;
  int s_5_St_1_Standby_1;
  int r_St_1_Reheat;
  int s_5_St_1_Reheat_3;
  int s_5_St_1_Reheat_2;
  int s_5_St_1_Reheat_1;
  int r_St_1_Maintain;
  int s_5_St_1_Maintain_3;
  int s_5_St_1_Maintain_2;
  int s_5_St_1_Maintain_1;
  int r_St_1_Heat;
  int s_5_St_1_Heat_3;
  int s_5_St_1_Heat_2;
  int s_5_St_1_Heat_1;
  int r_St_1_Off;
  int s_5_St_1_Off_3;
  int s_5_St_1_Off_2;
  int s_5_St_1_Off_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_221;
  ck_2_4 = self->v_222;
  ck_3 = self->v_223;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (f) {
          v_10 = true;
        } else {
          v_10 = self->pnr;
        };
        if (tok) {
          r_St_1_Heat = true;
        } else {
          r_St_1_Heat = v_10;
        };
        if (f) {
          v_9_1 = true;
        } else {
          v_9_1 = true;
        };
        if (tok) {
          s_5_St_1_Heat_1 = true;
        } else {
          s_5_St_1_Heat_1 = v_9_1;
        };
        if (f) {
          v_9_2 = false;
        } else {
          v_9_2 = true;
        };
        if (tok) {
          s_5_St_1_Heat_2 = true;
        } else {
          s_5_St_1_Heat_2 = v_9_2;
        };
        if (f) {
          v_9_3 = false;
        } else {
          v_9_3 = true;
        };
        if (tok) {
          s_5_St_1_Heat_3 = false;
        } else {
          s_5_St_1_Heat_3 = v_9_3;
        };
        v_239 = r_St_1_Heat;
        v_224 = s_5_St_1_Heat_1;
        v_225 = s_5_St_1_Heat_2;
        v_226 = s_5_St_1_Heat_3;
      } else {
        if (f) {
          v_8 = true;
          v_7_1 = true;
          v_7_2 = false;
          v_7_3 = false;
        } else {
          v_8 = self->pnr;
          v_7_1 = true;
          v_7_2 = true;
          v_7_3 = false;
        };
        v_6 = (cold&&c);
        if (v_6) {
          r_St_1_Maintain = true;
        } else {
          r_St_1_Maintain = v_8;
        };
        v_239 = r_St_1_Maintain;
        if (v_6) {
          s_5_St_1_Maintain_1 = false;
        } else {
          s_5_St_1_Maintain_1 = v_7_1;
        };
        v_224 = s_5_St_1_Maintain_1;
        if (v_6) {
          s_5_St_1_Maintain_2 = false;
        } else {
          s_5_St_1_Maintain_2 = v_7_2;
        };
        v_225 = s_5_St_1_Maintain_2;
        if (v_6) {
          s_5_St_1_Maintain_3 = true;
        } else {
          s_5_St_1_Maintain_3 = v_7_3;
        };
        v_226 = s_5_St_1_Maintain_3;
      };
      v_233 = v_224;
      v_234 = v_225;
      v_235 = v_226;
      v_241 = v_239;
      if (ck_3_1_1) {
        if (v_9_1) {
          v_9_2_1 = v_9_2;
          if (v_9_2_1) {
            v_9_3_1_1 = v_9_3;
          } else {
            v_9_3_1_0 = v_9_3;
          };
        } else {
          v_9_2_0 = v_9_2;
          if (v_9_2_0) {
            v_9_3_0_1 = v_9_3;
          } else {
            v_9_3_0_0 = v_9_3;
          };
        };
        if (s_5_St_1_Heat_1) {
          s_5_St_1_Heat_2_1 = s_5_St_1_Heat_2;
          if (s_5_St_1_Heat_2_1) {
            s_5_St_1_Heat_3_1_1 = s_5_St_1_Heat_3;
          } else {
            s_5_St_1_Heat_3_1_0 = s_5_St_1_Heat_3;
          };
        } else {
          s_5_St_1_Heat_2_0 = s_5_St_1_Heat_2;
          if (s_5_St_1_Heat_2_0) {
            s_5_St_1_Heat_3_0_1 = s_5_St_1_Heat_3;
          } else {
            s_5_St_1_Heat_3_0_0 = s_5_St_1_Heat_3;
          };
        };
      } else {
        if (v_7_1) {
          v_7_2_1 = v_7_2;
          if (v_7_2_1) {
            v_7_3_1_1 = v_7_3;
          } else {
            v_7_3_1_0 = v_7_3;
          };
        } else {
          v_7_2_0 = v_7_2;
          if (v_7_2_0) {
            v_7_3_0_1 = v_7_3;
          } else {
            v_7_3_0_0 = v_7_3;
          };
        };
        if (s_5_St_1_Maintain_1) {
          s_5_St_1_Maintain_2_1 = s_5_St_1_Maintain_2;
          if (s_5_St_1_Maintain_2_1) {
            s_5_St_1_Maintain_3_1_1 = s_5_St_1_Maintain_3;
          } else {
            s_5_St_1_Maintain_3_1_0 = s_5_St_1_Maintain_3;
          };
        } else {
          s_5_St_1_Maintain_2_0 = s_5_St_1_Maintain_2;
          if (s_5_St_1_Maintain_2_0) {
            s_5_St_1_Maintain_3_0_1 = s_5_St_1_Maintain_3;
          } else {
            s_5_St_1_Maintain_3_0_0 = s_5_St_1_Maintain_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_240 = true;
        v_227 = true;
        v_228 = true;
        v_229 = true;
      } else {
        v_12 = !(c);
        v_13 = (s&&v_12);
        if (v_13) {
          v_15 = true;
          v_14_1 = false;
          v_14_2 = false;
          v_14_3 = false;
        } else {
          v_15 = self->pnr;
          v_14_1 = true;
          v_14_2 = false;
          v_14_3 = false;
        };
        v_11 = (s&&c);
        if (v_11) {
          r_St_1_Off = true;
        } else {
          r_St_1_Off = v_15;
        };
        v_240 = r_St_1_Off;
        if (v_11) {
          s_5_St_1_Off_1 = true;
        } else {
          s_5_St_1_Off_1 = v_14_1;
        };
        v_227 = s_5_St_1_Off_1;
        if (v_11) {
          s_5_St_1_Off_2 = true;
        } else {
          s_5_St_1_Off_2 = v_14_2;
        };
        v_228 = s_5_St_1_Off_2;
        if (v_11) {
          s_5_St_1_Off_3 = true;
        } else {
          s_5_St_1_Off_3 = v_14_3;
        };
        v_229 = s_5_St_1_Off_3;
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
        if (s_5_St_1_Off_1) {
          s_5_St_1_Off_2_1 = s_5_St_1_Off_2;
          if (s_5_St_1_Off_2_1) {
            s_5_St_1_Off_3_1_1 = s_5_St_1_Off_3;
          } else {
            s_5_St_1_Off_3_1_0 = s_5_St_1_Off_3;
          };
        } else {
          s_5_St_1_Off_2_0 = s_5_St_1_Off_2;
          if (s_5_St_1_Off_2_0) {
            s_5_St_1_Off_3_0_1 = s_5_St_1_Off_3;
          } else {
            s_5_St_1_Off_3_0_0 = s_5_St_1_Off_3;
          };
        };
      };
      v_233 = v_227;
      v_234 = v_228;
      v_235 = v_229;
      v_241 = v_240;
    };
    s_5_1 = v_233;
    s_5_2 = v_234;
    s_5_3 = v_235;
    r = v_241;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_236 = true;
      v_237 = true;
      v_238 = true;
      v_243 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (f) {
          v_5 = true;
        } else {
          v_5 = self->pnr;
        };
        if (tok) {
          r_St_1_Reheat = true;
        } else {
          r_St_1_Reheat = v_5;
        };
        if (f) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (tok) {
          s_5_St_1_Reheat_1 = true;
        } else {
          s_5_St_1_Reheat_1 = v_1;
        };
        if (f) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (tok) {
          s_5_St_1_Reheat_2 = true;
        } else {
          s_5_St_1_Reheat_2 = v_2;
        };
        if (f) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (tok) {
          s_5_St_1_Reheat_3 = false;
        } else {
          s_5_St_1_Reheat_3 = v_3;
        };
        v_242 = r_St_1_Reheat;
        v_230 = s_5_St_1_Reheat_1;
        v_231 = s_5_St_1_Reheat_2;
        v_232 = s_5_St_1_Reheat_3;
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
      } else {
        if (c) {
          r_St_1_Standby = true;
        } else {
          r_St_1_Standby = self->pnr;
        };
        v_242 = r_St_1_Standby;
        if (c) {
          s_5_St_1_Standby_1 = true;
        } else {
          s_5_St_1_Standby_1 = false;
        };
        v_230 = s_5_St_1_Standby_1;
        if (c) {
          s_5_St_1_Standby_2 = true;
        } else {
          s_5_St_1_Standby_2 = false;
        };
        v_231 = s_5_St_1_Standby_2;
        if (c) {
          s_5_St_1_Standby_3 = true;
        } else {
          s_5_St_1_Standby_3 = false;
        };
        v_232 = s_5_St_1_Standby_3;
      };
      v_236 = v_230;
      v_237 = v_231;
      v_238 = v_232;
      v_243 = v_242;
    };
    s_5_1 = v_236;
    s_5_2 = v_237;
    s_5_3 = v_238;
    r = v_243;
  };
  ck_2_1 = s_5_1;
  ck_2_2 = s_5_2;
  ck_2_3 = s_5_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        p_St_1_Heat = 1500;
        i_St_1_Heat = 1;
        nr_St_1_Heat = false;
        ns_St_1_Heat_1 = true;
        ns_St_1_Heat_2 = true;
        ns_St_1_Heat_3 = true;
        v_191 = p_St_1_Heat;
        v_196 = i_St_1_Heat;
        v_216 = nr_St_1_Heat;
        v_201 = ns_St_1_Heat_1;
        v_202 = ns_St_1_Heat_2;
        v_203 = ns_St_1_Heat_3;
      } else {
        p_St_1_Maintain = 300;
        v_191 = p_St_1_Maintain;
        i_St_1_Maintain = 2;
        v_196 = i_St_1_Maintain;
        nr_St_1_Maintain = false;
        v_216 = nr_St_1_Maintain;
        ns_St_1_Maintain_1 = true;
        v_201 = ns_St_1_Maintain_1;
        ns_St_1_Maintain_2 = true;
        v_202 = ns_St_1_Maintain_2;
        ns_St_1_Maintain_3 = false;
        v_203 = ns_St_1_Maintain_3;
      };
      v_193 = v_191;
      v_198 = v_196;
      v_210 = v_201;
      v_211 = v_202;
      v_212 = v_203;
      v_218 = v_216;
      if (ck_2_3_1_1) {
        if (ns_St_1_Heat_1) {
          ns_St_1_Heat_2_1 = ns_St_1_Heat_2;
          if (ns_St_1_Heat_2_1) {
            ns_St_1_Heat_3_1_1 = ns_St_1_Heat_3;
          } else {
            ns_St_1_Heat_3_1_0 = ns_St_1_Heat_3;
          };
        } else {
          ns_St_1_Heat_2_0 = ns_St_1_Heat_2;
          if (ns_St_1_Heat_2_0) {
            ns_St_1_Heat_3_0_1 = ns_St_1_Heat_3;
          } else {
            ns_St_1_Heat_3_0_0 = ns_St_1_Heat_3;
          };
        };
      } else {
        if (ns_St_1_Maintain_1) {
          ns_St_1_Maintain_2_1 = ns_St_1_Maintain_2;
          if (ns_St_1_Maintain_2_1) {
            ns_St_1_Maintain_3_1_1 = ns_St_1_Maintain_3;
          } else {
            ns_St_1_Maintain_3_1_0 = ns_St_1_Maintain_3;
          };
        } else {
          ns_St_1_Maintain_2_0 = ns_St_1_Maintain_2;
          if (ns_St_1_Maintain_2_0) {
            ns_St_1_Maintain_3_0_1 = ns_St_1_Maintain_3;
          } else {
            ns_St_1_Maintain_3_0_0 = ns_St_1_Maintain_3;
          };
        };
      };
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_192 = 0;
        v_197 = 0;
        v_217 = true;
        v_204 = true;
        v_205 = true;
        v_206 = true;
      } else {
        p_St_1_Off = 0;
        v_192 = p_St_1_Off;
        i_St_1_Off = 0;
        v_197 = i_St_1_Off;
        nr_St_1_Off = false;
        v_217 = nr_St_1_Off;
        ns_St_1_Off_1 = true;
        v_204 = ns_St_1_Off_1;
        ns_St_1_Off_2 = false;
        v_205 = ns_St_1_Off_2;
        ns_St_1_Off_3 = false;
        v_206 = ns_St_1_Off_3;
        if (ns_St_1_Off_1) {
          ns_St_1_Off_2_1 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_1) {
            ns_St_1_Off_3_1_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_1_0 = ns_St_1_Off_3;
          };
        } else {
          ns_St_1_Off_2_0 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_0) {
            ns_St_1_Off_3_0_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_0_0 = ns_St_1_Off_3;
          };
        };
      };
      v_193 = v_192;
      v_198 = v_197;
      v_210 = v_204;
      v_211 = v_205;
      v_212 = v_206;
      v_218 = v_217;
    };
    _out->p = v_193;
    _out->i = v_198;
    ns_1 = v_210;
    ns_2 = v_211;
    ns_3 = v_212;
    nr = v_218;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_195 = 0;
      v_200 = 0;
      v_213 = true;
      v_214 = true;
      v_215 = true;
      v_220 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        p_St_1_Reheat = 1000;
        i_St_1_Reheat = 3;
        nr_St_1_Reheat = false;
        ns_St_1_Reheat_1 = false;
        ns_St_1_Reheat_2 = false;
        ns_St_1_Reheat_3 = true;
        v_194 = p_St_1_Reheat;
        v_199 = i_St_1_Reheat;
        v_219 = nr_St_1_Reheat;
        v_207 = ns_St_1_Reheat_1;
        v_208 = ns_St_1_Reheat_2;
        v_209 = ns_St_1_Reheat_3;
      } else {
        p_St_1_Standby = 0;
        v_194 = p_St_1_Standby;
        i_St_1_Standby = 4;
        v_199 = i_St_1_Standby;
        nr_St_1_Standby = false;
        v_219 = nr_St_1_Standby;
        ns_St_1_Standby_1 = false;
        v_207 = ns_St_1_Standby_1;
        ns_St_1_Standby_2 = false;
        v_208 = ns_St_1_Standby_2;
        ns_St_1_Standby_3 = false;
        v_209 = ns_St_1_Standby_3;
      };
      v_195 = v_194;
      v_200 = v_199;
      v_213 = v_207;
      v_214 = v_208;
      v_215 = v_209;
      v_220 = v_219;
    };
    _out->p = v_195;
    _out->i = v_200;
    ns_1 = v_213;
    ns_2 = v_214;
    ns_3 = v_215;
    nr = v_220;
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
  if (!(ck_2_1)) {
    if (!(ck_2_2_0)) {
      if (ck_2_3_0_0) {
        if (ns_St_1_Reheat_1) {
          ns_St_1_Reheat_2_1 = ns_St_1_Reheat_2;
          if (ns_St_1_Reheat_2_1) {
            ns_St_1_Reheat_3_1_1 = ns_St_1_Reheat_3;
          } else {
            ns_St_1_Reheat_3_1_0 = ns_St_1_Reheat_3;
          };
        } else {
          ns_St_1_Reheat_2_0 = ns_St_1_Reheat_2;
          if (ns_St_1_Reheat_2_0) {
            ns_St_1_Reheat_3_0_1 = ns_St_1_Reheat_3;
          } else {
            ns_St_1_Reheat_3_0_0 = ns_St_1_Reheat_3;
          };
        };
      } else {
        if (ns_St_1_Standby_1) {
          ns_St_1_Standby_2_1 = ns_St_1_Standby_2;
          if (ns_St_1_Standby_2_1) {
            ns_St_1_Standby_3_1_1 = ns_St_1_Standby_3;
          } else {
            ns_St_1_Standby_3_1_0 = ns_St_1_Standby_3;
          };
        } else {
          ns_St_1_Standby_2_0 = ns_St_1_Standby_2;
          if (ns_St_1_Standby_2_0) {
            ns_St_1_Standby_3_0_1 = ns_St_1_Standby_3;
          } else {
            ns_St_1_Standby_3_0_0 = ns_St_1_Standby_3;
          };
        };
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
    if (s_5_2_1) {
      s_5_3_1_1 = s_5_3;
    } else {
      s_5_3_1_0 = s_5_3;
    };
  } else {
    s_5_2_0 = s_5_2;
    if (s_5_2_0) {
      s_5_3_0_1 = s_5_3;
    } else {
      s_5_3_0_0 = s_5_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_4_0)) {
      if (ck_3_0_0) {
        if (s_5_St_1_Reheat_1) {
          s_5_St_1_Reheat_2_1 = s_5_St_1_Reheat_2;
          if (s_5_St_1_Reheat_2_1) {
            s_5_St_1_Reheat_3_1_1 = s_5_St_1_Reheat_3;
          } else {
            s_5_St_1_Reheat_3_1_0 = s_5_St_1_Reheat_3;
          };
        } else {
          s_5_St_1_Reheat_2_0 = s_5_St_1_Reheat_2;
          if (s_5_St_1_Reheat_2_0) {
            s_5_St_1_Reheat_3_0_1 = s_5_St_1_Reheat_3;
          } else {
            s_5_St_1_Reheat_3_0_0 = s_5_St_1_Reheat_3;
          };
        };
      } else {
        if (s_5_St_1_Standby_1) {
          s_5_St_1_Standby_2_1 = s_5_St_1_Standby_2;
          if (s_5_St_1_Standby_2_1) {
            s_5_St_1_Standby_3_1_1 = s_5_St_1_Standby_3;
          } else {
            s_5_St_1_Standby_3_1_0 = s_5_St_1_Standby_3;
          };
        } else {
          s_5_St_1_Standby_2_0 = s_5_St_1_Standby_2;
          if (s_5_St_1_Standby_2_0) {
            s_5_St_1_Standby_3_0_1 = s_5_St_1_Standby_3;
          } else {
            s_5_St_1_Standby_3_0_0 = s_5_St_1_Standby_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_221 = ns_1;
  self->v_222 = ns_2;
  self->v_223 = ns_3;;
}

void P3_joao__rad_reset(P3_joao__rad_mem* self) {
  self->pnr = false;
  self->v_254 = false;
  self->v_255 = false;
}

void P3_joao__rad_step(int up1, int down1, int up2, int down2, int c1,
                       int c2, P3_joao__rad_out* _out, P3_joao__rad_mem* self) {
  
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
  int ns_St_2_High_2_0;
  int ns_St_2_High_2_1;
  int ns_St_2_Eco_2_0;
  int ns_St_2_Eco_2_1;
  int ns_St_2_Frostprotection_2_0;
  int ns_St_2_Frostprotection_2_1;
  int ns_St_2_Off_2_0;
  int ns_St_2_Off_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int nr_St_2_High;
  int ns_St_2_High_2;
  int ns_St_2_High_1;
  int i_St_2_High;
  int p_St_2_High;
  int nr_St_2_Eco;
  int ns_St_2_Eco_2;
  int ns_St_2_Eco_1;
  int i_St_2_Eco;
  int p_St_2_Eco;
  int nr_St_2_Frostprotection;
  int ns_St_2_Frostprotection_2;
  int ns_St_2_Frostprotection_1;
  int i_St_2_Frostprotection;
  int p_St_2_Frostprotection;
  int nr_St_2_Off;
  int ns_St_2_Off_2;
  int ns_St_2_Off_1;
  int i_St_2_Off;
  int p_St_2_Off;
  int ck_3_2;
  int ck_3_1;
  int v_35;
  int v_34;
  int v_32_2_0;
  int v_32_2_1;
  int v_30_2_0;
  int v_30_2_1;
  int v_33;
  int v_32_2;
  int v_32_1;
  int v_31;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_24_2_0;
  int v_24_2_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_22;
  int v_21;
  int v_19_2_0;
  int v_19_2_1;
  int v_20;
  int v_19_2;
  int v_19_1;
  int v_18;
  int v_17;
  int v_16;
  int v;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int s_St_2_High_2_0;
  int s_St_2_High_2_1;
  int s_St_2_Eco_2_0;
  int s_St_2_Eco_2_1;
  int s_St_2_Frostprotection_2_0;
  int s_St_2_Frostprotection_2_1;
  int s_St_2_Off_2_0;
  int s_St_2_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_2_High;
  int s_St_2_High_2;
  int s_St_2_High_1;
  int r_St_2_Eco;
  int s_St_2_Eco_2;
  int s_St_2_Eco_1;
  int r_St_2_Frostprotection;
  int s_St_2_Frostprotection_2;
  int s_St_2_Frostprotection_1;
  int r_St_2_Off;
  int s_St_2_Off_2;
  int s_St_2_Off_1;
  int ck_2;
  int ck_1;
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
  ck_1 = self->v_254;
  ck_2 = self->v_255;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_23 = (up2&&c2);
      if (v_23) {
        v_25 = true;
        v_24_1 = false;
        v_24_2 = true;
      } else {
        v_25 = self->pnr;
        v_24_1 = true;
        v_24_2 = true;
      };
      v_21 = !(c1);
      v_22 = (down1||v_21);
      if (v_22) {
        r_St_2_Eco = true;
      } else {
        r_St_2_Eco = v_25;
      };
      v_260 = r_St_2_Eco;
      if (v_22) {
        s_St_2_Eco_1 = true;
      } else {
        s_St_2_Eco_1 = v_24_1;
      };
      v_256 = s_St_2_Eco_1;
      if (v_22) {
        s_St_2_Eco_2 = false;
      } else {
        s_St_2_Eco_2 = v_24_2;
      };
      v_257 = s_St_2_Eco_2;
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (s_St_2_Eco_1) {
        s_St_2_Eco_2_1 = s_St_2_Eco_2;
      } else {
        s_St_2_Eco_2_0 = s_St_2_Eco_2;
      };
    } else {
      v_28 = !(c1);
      v_29 = (down1||v_28);
      if (v_29) {
        v_31 = true;
        v_30_1 = false;
        v_30_2 = false;
      } else {
        v_31 = self->pnr;
        v_30_1 = true;
        v_30_2 = false;
      };
      v_27 = (up2&&c2);
      if (v_27) {
        v_33 = true;
        v_32_1 = false;
        v_32_2 = true;
      } else {
        v_33 = v_31;
        v_32_1 = v_30_1;
        v_32_2 = v_30_2;
      };
      v_26 = (up1&&c1);
      if (v_26) {
        r_St_2_Frostprotection = true;
        s_St_2_Frostprotection_1 = true;
        s_St_2_Frostprotection_2 = true;
      } else {
        r_St_2_Frostprotection = v_33;
        s_St_2_Frostprotection_1 = v_32_1;
        s_St_2_Frostprotection_2 = v_32_2;
      };
      v_260 = r_St_2_Frostprotection;
      v_256 = s_St_2_Frostprotection_1;
      v_257 = s_St_2_Frostprotection_2;
      if (v_30_1) {
        v_30_2_1 = v_30_2;
      } else {
        v_30_2_0 = v_30_2;
      };
      if (v_32_1) {
        v_32_2_1 = v_32_2;
      } else {
        v_32_2_0 = v_32_2;
      };
      if (s_St_2_Frostprotection_1) {
        s_St_2_Frostprotection_2_1 = s_St_2_Frostprotection_2;
      } else {
        s_St_2_Frostprotection_2_0 = s_St_2_Frostprotection_2;
      };
    };
    s_1 = v_256;
    s_2 = v_257;
    r = v_260;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_17 = !(c2);
      v_18 = (down2||v_17);
      if (v_18) {
        v_20 = true;
        v_19_1 = true;
        v_19_2 = false;
      } else {
        v_20 = self->pnr;
        v_19_1 = false;
        v_19_2 = true;
      };
      v = !(c1);
      v_16 = (down1||v);
      if (v_16) {
        r_St_2_High = true;
      } else {
        r_St_2_High = v_20;
      };
      v_261 = r_St_2_High;
      if (v_16) {
        s_St_2_High_1 = true;
      } else {
        s_St_2_High_1 = v_19_1;
      };
      v_258 = s_St_2_High_1;
      if (v_16) {
        s_St_2_High_2 = true;
      } else {
        s_St_2_High_2 = v_19_2;
      };
      v_259 = s_St_2_High_2;
    } else {
      v_34 = !(c1);
      v_35 = (up1||v_34);
      if (v_35) {
        r_St_2_Off = true;
        s_St_2_Off_1 = true;
        s_St_2_Off_2 = false;
      } else {
        r_St_2_Off = self->pnr;
        s_St_2_Off_1 = false;
        s_St_2_Off_2 = false;
      };
      v_261 = r_St_2_Off;
      v_258 = s_St_2_Off_1;
      v_259 = s_St_2_Off_2;
    };
    s_1 = v_258;
    s_2 = v_259;
    r = v_261;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      p_St_2_Eco = 1500;
      v_244 = p_St_2_Eco;
      i_St_2_Eco = 2;
      v_246 = i_St_2_Eco;
      nr_St_2_Eco = false;
      v_252 = nr_St_2_Eco;
      ns_St_2_Eco_1 = true;
      v_248 = ns_St_2_Eco_1;
      ns_St_2_Eco_2 = true;
      v_249 = ns_St_2_Eco_2;
      if (ns_St_2_Eco_1) {
        ns_St_2_Eco_2_1 = ns_St_2_Eco_2;
      } else {
        ns_St_2_Eco_2_0 = ns_St_2_Eco_2;
      };
    } else {
      p_St_2_Frostprotection = 300;
      i_St_2_Frostprotection = 1;
      nr_St_2_Frostprotection = false;
      ns_St_2_Frostprotection_1 = true;
      ns_St_2_Frostprotection_2 = false;
      v_244 = p_St_2_Frostprotection;
      v_246 = i_St_2_Frostprotection;
      v_252 = nr_St_2_Frostprotection;
      v_248 = ns_St_2_Frostprotection_1;
      v_249 = ns_St_2_Frostprotection_2;
      if (ns_St_2_Frostprotection_1) {
        ns_St_2_Frostprotection_2_1 = ns_St_2_Frostprotection_2;
      } else {
        ns_St_2_Frostprotection_2_0 = ns_St_2_Frostprotection_2;
      };
    };
    _out->p = v_244;
    _out->i = v_246;
    ns_1 = v_248;
    ns_2 = v_249;
    nr = v_252;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      p_St_2_High = 2000;
      v_245 = p_St_2_High;
      i_St_2_High = 3;
      v_247 = i_St_2_High;
      nr_St_2_High = false;
      v_253 = nr_St_2_High;
      ns_St_2_High_1 = false;
      v_250 = ns_St_2_High_1;
      ns_St_2_High_2 = true;
      v_251 = ns_St_2_High_2;
    } else {
      p_St_2_Off = 0;
      i_St_2_Off = 0;
      nr_St_2_Off = false;
      ns_St_2_Off_1 = false;
      ns_St_2_Off_2 = false;
      v_245 = p_St_2_Off;
      v_247 = i_St_2_Off;
      v_253 = nr_St_2_Off;
      v_250 = ns_St_2_Off_1;
      v_251 = ns_St_2_Off_2;
    };
    _out->p = v_245;
    _out->i = v_247;
    ns_1 = v_250;
    ns_2 = v_251;
    nr = v_253;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ns_St_2_High_1) {
        ns_St_2_High_2_1 = ns_St_2_High_2;
      } else {
        ns_St_2_High_2_0 = ns_St_2_High_2;
      };
    } else {
      if (ns_St_2_Off_1) {
        ns_St_2_Off_2_1 = ns_St_2_Off_2;
      } else {
        ns_St_2_Off_2_0 = ns_St_2_Off_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_19_1) {
        v_19_2_1 = v_19_2;
      } else {
        v_19_2_0 = v_19_2;
      };
      if (s_St_2_High_1) {
        s_St_2_High_2_1 = s_St_2_High_2;
      } else {
        s_St_2_High_2_0 = s_St_2_High_2;
      };
    } else {
      if (s_St_2_Off_1) {
        s_St_2_Off_2_1 = s_St_2_Off_2;
      } else {
        s_St_2_Off_2_0 = s_St_2_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->v_254 = ns_1;
  self->v_255 = ns_2;;
}

void P3_joao__door_reset(P3_joao__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P3_joao__door_step(int push, int c_door, P3_joao__door_out* _out,
                        P3_joao__door_mem* self) {
  
  int nr_St_3_Open;
  int ns_St_3_Open_1;
  int door_open_St_3_Open;
  int nr_St_3_Closed;
  int ns_St_3_Closed_1;
  int door_open_St_3_Closed;
  int ck_4_1;
  int v_37;
  int v_36;
  int v;
  int r_St_3_Open;
  int s_St_3_Open_1;
  int r_St_3_Closed;
  int s_St_3_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_37 = (push&&c_door);
    if (v_37) {
      r_St_3_Closed = true;
      s_St_3_Closed_1 = false;
    } else {
      r_St_3_Closed = self->pnr;
      s_St_3_Closed_1 = true;
    };
    r = r_St_3_Closed;
    s_1 = s_St_3_Closed_1;
  } else {
    v = !(c_door);
    v_36 = (push||v);
    if (v_36) {
      r_St_3_Open = true;
    } else {
      r_St_3_Open = self->pnr;
    };
    r = r_St_3_Open;
    if (v_36) {
      s_St_3_Open_1 = true;
    } else {
      s_St_3_Open_1 = false;
    };
    s_1 = s_St_3_Open_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    door_open_St_3_Closed = false;
    nr_St_3_Closed = false;
    ns_St_3_Closed_1 = true;
    _out->door_open = door_open_St_3_Closed;
    nr = nr_St_3_Closed;
    ns_1 = ns_St_3_Closed_1;
  } else {
    door_open_St_3_Open = true;
    _out->door_open = door_open_St_3_Open;
    nr_St_3_Open = false;
    nr = nr_St_3_Open;
    ns_St_3_Open_1 = false;
    ns_1 = ns_St_3_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void P3_joao__room_reset(P3_joao__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P3_joao__room_step(int presence, P3_joao__room_out* _out,
                        P3_joao__room_mem* self) {
  
  int nr_St_4_Ocupied;
  int ns_St_4_Ocupied_1;
  int room_oc_St_4_Ocupied;
  int nr_St_4_Empty;
  int ns_St_4_Empty_1;
  int room_oc_St_4_Empty;
  int ck_5_1;
  int v;
  int r_St_4_Ocupied;
  int s_St_4_Ocupied_1;
  int r_St_4_Empty;
  int s_St_4_Empty_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (presence) {
      r_St_4_Empty = true;
      s_St_4_Empty_1 = false;
    } else {
      r_St_4_Empty = self->pnr;
      s_St_4_Empty_1 = true;
    };
    r = r_St_4_Empty;
    s_1 = s_St_4_Empty_1;
  } else {
    v = !(presence);
    if (v) {
      r_St_4_Ocupied = true;
    } else {
      r_St_4_Ocupied = self->pnr;
    };
    r = r_St_4_Ocupied;
    if (v) {
      s_St_4_Ocupied_1 = true;
    } else {
      s_St_4_Ocupied_1 = false;
    };
    s_1 = s_St_4_Ocupied_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    room_oc_St_4_Empty = false;
    nr_St_4_Empty = false;
    ns_St_4_Empty_1 = true;
    _out->room_oc = room_oc_St_4_Empty;
    nr = nr_St_4_Empty;
    ns_1 = ns_St_4_Empty_1;
  } else {
    room_oc_St_4_Ocupied = true;
    _out->room_oc = room_oc_St_4_Ocupied;
    nr_St_4_Ocupied = false;
    nr = nr_St_4_Ocupied;
    ns_St_4_Ocupied_1 = false;
    ns_1 = ns_St_4_Ocupied_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void P3_joao__light_source_reset(P3_joao__light_source_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P3_joao__light_source_step(int botao, int c1, int c2,
                                P3_joao__light_source_out* _out,
                                P3_joao__light_source_mem* self) {
  
  int nr_St_5_Ligado;
  int ns_St_5_Ligado_1;
  int s_St_5_Ligado;
  int nr_St_5_Desligado;
  int ns_St_5_Desligado_1;
  int s_St_5_Desligado;
  int ck_6_1;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v;
  int r_St_5_Ligado;
  int s_6_St_5_Ligado_1;
  int r_St_5_Desligado;
  int s_6_St_5_Desligado_1;
  int s_6_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_40 = !(c2);
    v_41 = (botao&&v_40);
    v_42 = (v_41||c1);
    if (v_42) {
      r_St_5_Desligado = true;
      s_6_St_5_Desligado_1 = false;
    } else {
      r_St_5_Desligado = self->pnr;
      s_6_St_5_Desligado_1 = true;
    };
    r = r_St_5_Desligado;
    s_6_1 = s_6_St_5_Desligado_1;
  } else {
    v = !(c1);
    v_38 = (botao&&v);
    v_39 = (v_38||c2);
    if (v_39) {
      r_St_5_Ligado = true;
    } else {
      r_St_5_Ligado = self->pnr;
    };
    r = r_St_5_Ligado;
    if (v_39) {
      s_6_St_5_Ligado_1 = true;
    } else {
      s_6_St_5_Ligado_1 = false;
    };
    s_6_1 = s_6_St_5_Ligado_1;
  };
  ck_6_1 = s_6_1;
  if (ck_6_1) {
    s_St_5_Desligado = false;
    nr_St_5_Desligado = false;
    ns_St_5_Desligado_1 = true;
    _out->s = s_St_5_Desligado;
    nr = nr_St_5_Desligado;
    ns_1 = ns_St_5_Desligado_1;
  } else {
    s_St_5_Ligado = true;
    _out->s = s_St_5_Ligado;
    nr_St_5_Ligado = false;
    nr = nr_St_5_Ligado;
    ns_St_5_Ligado_1 = false;
    ns_1 = ns_St_5_Ligado_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void P3_joao__management_policy_reset(P3_joao__management_policy_mem* self) {
  self->pnr = false;
  self->v_272 = false;
  self->v_273 = false;
}

void P3_joao__management_policy_step(int eco_input, int comfort_input,
                                     P3_joao__management_policy_out* _out,
                                     P3_joao__management_policy_mem* self) {
  
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
  int ns_St_6_Comfort_2_0;
  int ns_St_6_Comfort_2_1;
  int pl_state_St_6_Comfort_2_0;
  int pl_state_St_6_Comfort_2_1;
  int ns_St_6_Eco_2_0;
  int ns_St_6_Eco_2_1;
  int pl_state_St_6_Eco_2_0;
  int pl_state_St_6_Eco_2_1;
  int ns_St_6_Minimal_safety_2_0;
  int ns_St_6_Minimal_safety_2_1;
  int pl_state_St_6_Minimal_safety_2_0;
  int pl_state_St_6_Minimal_safety_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_St_6_Comfort;
  int ns_St_6_Comfort_2;
  int ns_St_6_Comfort_1;
  int pl_state_St_6_Comfort_2;
  int pl_state_St_6_Comfort_1;
  int nr_St_6_Eco;
  int ns_St_6_Eco_2;
  int ns_St_6_Eco_1;
  int pl_state_St_6_Eco_2;
  int pl_state_St_6_Eco_1;
  int nr_St_6_Minimal_safety;
  int ns_St_6_Minimal_safety_2;
  int ns_St_6_Minimal_safety_1;
  int pl_state_St_6_Minimal_safety_2;
  int pl_state_St_6_Minimal_safety_1;
  int ck_7_2;
  int ck_7_1;
  int v_48_2_0;
  int v_48_2_1;
  int v_49;
  int v_48_2;
  int v_48_1;
  int v_46_2_0;
  int v_46_2_1;
  int v_47;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_43_2_0;
  int v_43_2_1;
  int v_44;
  int v_43_2;
  int v_43_1;
  int v;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int s_St_6_Comfort_2_0;
  int s_St_6_Comfort_2_1;
  int s_St_6_Eco_2_0;
  int s_St_6_Eco_2_1;
  int s_St_6_Minimal_safety_2_0;
  int s_St_6_Minimal_safety_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_6_Comfort;
  int s_St_6_Comfort_2;
  int s_St_6_Comfort_1;
  int r_St_6_Eco;
  int s_St_6_Eco_2;
  int s_St_6_Eco_1;
  int r_St_6_Minimal_safety;
  int s_St_6_Minimal_safety_2;
  int s_St_6_Minimal_safety_1;
  int ck_2;
  int ck_1;
  int pl_state_2_0;
  int pl_state_2_1;
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
  ck_1 = self->v_272;
  ck_2 = self->v_273;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v = !(comfort_input);
      if (v) {
        v_44 = true;
      } else {
        v_44 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Comfort = true;
      } else {
        r_St_6_Comfort = v_44;
      };
      v_278 = r_St_6_Comfort;
      if (v) {
        v_43_1 = false;
      } else {
        v_43_1 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_1 = true;
      } else {
        s_St_6_Comfort_1 = v_43_1;
      };
      v_274 = s_St_6_Comfort_1;
      if (v) {
        v_43_2 = false;
      } else {
        v_43_2 = true;
      };
      if (eco_input) {
        s_St_6_Comfort_2 = false;
      } else {
        s_St_6_Comfort_2 = v_43_2;
      };
      v_275 = s_St_6_Comfort_2;
    } else {
      if (comfort_input) {
        v_47 = true;
        v_46_1 = true;
        v_46_2 = true;
      } else {
        v_47 = self->pnr;
        v_46_1 = true;
        v_46_2 = false;
      };
      v_45 = !(eco_input);
      if (v_45) {
        r_St_6_Eco = true;
        s_St_6_Eco_1 = false;
        s_St_6_Eco_2 = false;
      } else {
        r_St_6_Eco = v_47;
        s_St_6_Eco_1 = v_46_1;
        s_St_6_Eco_2 = v_46_2;
      };
      v_278 = r_St_6_Eco;
      v_274 = s_St_6_Eco_1;
      v_275 = s_St_6_Eco_2;
    };
    s_1 = v_274;
    s_2 = v_275;
    r = v_278;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_279 = true;
      v_276 = true;
      v_277 = true;
    } else {
      if (comfort_input) {
        v_49 = true;
      } else {
        v_49 = self->pnr;
      };
      if (eco_input) {
        r_St_6_Minimal_safety = true;
      } else {
        r_St_6_Minimal_safety = v_49;
      };
      v_279 = r_St_6_Minimal_safety;
      if (comfort_input) {
        v_48_1 = true;
      } else {
        v_48_1 = false;
      };
      if (eco_input) {
        s_St_6_Minimal_safety_1 = true;
      } else {
        s_St_6_Minimal_safety_1 = v_48_1;
      };
      v_276 = s_St_6_Minimal_safety_1;
      if (comfort_input) {
        v_48_2 = true;
      } else {
        v_48_2 = false;
      };
      if (eco_input) {
        s_St_6_Minimal_safety_2 = false;
      } else {
        s_St_6_Minimal_safety_2 = v_48_2;
      };
      v_277 = s_St_6_Minimal_safety_2;
      if (v_48_1) {
        v_48_2_1 = v_48_2;
      } else {
        v_48_2_0 = v_48_2;
      };
      if (s_St_6_Minimal_safety_1) {
        s_St_6_Minimal_safety_2_1 = s_St_6_Minimal_safety_2;
      } else {
        s_St_6_Minimal_safety_2_0 = s_St_6_Minimal_safety_2;
      };
    };
    s_1 = v_276;
    s_2 = v_277;
    r = v_279;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      pl_state_St_6_Comfort_1 = true;
      v_262 = pl_state_St_6_Comfort_1;
      pl_state_St_6_Comfort_2 = true;
      v_263 = pl_state_St_6_Comfort_2;
      nr_St_6_Comfort = false;
      v_270 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_266 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_267 = ns_St_6_Comfort_2;
    } else {
      pl_state_St_6_Eco_1 = true;
      pl_state_St_6_Eco_2 = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_262 = pl_state_St_6_Eco_1;
      v_263 = pl_state_St_6_Eco_2;
      v_270 = nr_St_6_Eco;
      v_266 = ns_St_6_Eco_1;
      v_267 = ns_St_6_Eco_2;
    };
    _out->pl_state_1 = v_262;
    _out->pl_state_2 = v_263;
    ns_1 = v_266;
    ns_2 = v_267;
    nr = v_270;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_264 = true;
      v_265 = true;
      v_271 = true;
      v_268 = true;
      v_269 = true;
    } else {
      pl_state_St_6_Minimal_safety_1 = false;
      v_264 = pl_state_St_6_Minimal_safety_1;
      pl_state_St_6_Minimal_safety_2 = false;
      v_265 = pl_state_St_6_Minimal_safety_2;
      nr_St_6_Minimal_safety = false;
      v_271 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_268 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_269 = ns_St_6_Minimal_safety_2;
      if (pl_state_St_6_Minimal_safety_1) {
        pl_state_St_6_Minimal_safety_2_1 = pl_state_St_6_Minimal_safety_2;
      } else {
        pl_state_St_6_Minimal_safety_2_0 = pl_state_St_6_Minimal_safety_2;
      };
      if (ns_St_6_Minimal_safety_1) {
        ns_St_6_Minimal_safety_2_1 = ns_St_6_Minimal_safety_2;
      } else {
        ns_St_6_Minimal_safety_2_0 = ns_St_6_Minimal_safety_2;
      };
    };
    _out->pl_state_1 = v_264;
    _out->pl_state_2 = v_265;
    ns_1 = v_268;
    ns_2 = v_269;
    nr = v_271;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->pl_state_1) {
    pl_state_2_1 = _out->pl_state_2;
  } else {
    pl_state_2_0 = _out->pl_state_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (pl_state_St_6_Comfort_1) {
        pl_state_St_6_Comfort_2_1 = pl_state_St_6_Comfort_2;
      } else {
        pl_state_St_6_Comfort_2_0 = pl_state_St_6_Comfort_2;
      };
      if (ns_St_6_Comfort_1) {
        ns_St_6_Comfort_2_1 = ns_St_6_Comfort_2;
      } else {
        ns_St_6_Comfort_2_0 = ns_St_6_Comfort_2;
      };
    } else {
      if (pl_state_St_6_Eco_1) {
        pl_state_St_6_Eco_2_1 = pl_state_St_6_Eco_2;
      } else {
        pl_state_St_6_Eco_2_0 = pl_state_St_6_Eco_2;
      };
      if (ns_St_6_Eco_1) {
        ns_St_6_Eco_2_1 = ns_St_6_Eco_2;
      } else {
        ns_St_6_Eco_2_0 = ns_St_6_Eco_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1) {
    if (ck_2_1) {
      if (v_43_1) {
        v_43_2_1 = v_43_2;
      } else {
        v_43_2_0 = v_43_2;
      };
      if (s_St_6_Comfort_1) {
        s_St_6_Comfort_2_1 = s_St_6_Comfort_2;
      } else {
        s_St_6_Comfort_2_0 = s_St_6_Comfort_2;
      };
    } else {
      if (v_46_1) {
        v_46_2_1 = v_46_2;
      } else {
        v_46_2_0 = v_46_2;
      };
      if (s_St_6_Eco_1) {
        s_St_6_Eco_2_1 = s_St_6_Eco_2;
      } else {
        s_St_6_Eco_2_0 = s_St_6_Eco_2;
      };
    };
  };
  self->pnr = nr;
  self->v_272 = ns_1;
  self->v_273 = ns_2;;
}

void P3_joao__contrato_reset(P3_joao__contrato_mem* self) {
  self->v_288 = false;
  self->v_289 = false;
  self->pnr = false;
  self->pnr_1 = false;
  self->v_330 = true;
  self->v_331 = false;
  self->v_332 = false;
  self->pnr_2 = false;
  self->v_389 = true;
  self->v_390 = true;
  self->v_391 = true;
  self->pnr_3 = false;
  self->ck_20_1 = true;
  self->pnr_4 = false;
  self->ck_18_1 = true;
  self->pnr_5 = false;
  self->ck_16_1 = true;
  self->pnr_6 = false;
  self->ck_14_1 = true;
  self->pnr_7 = false;
  self->ck_12_1 = true;
  self->pnr_8 = false;
  self->v_426 = false;
  self->v_427 = false;
}

void P3_joao__contrato_step(int eco_input, int comfort_input, int end_wash,
                            int start_wash, int finish_oven, int start_oven,
                            int tok, int cold, int push_porta,
                            int push_janela, int rad_up1, int rad_down1,
                            int rad_up2, int rad_down2, int presenca,
                            int botao_lamp, int botao_tv,
                            P3_joao__contrato_out* _out,
                            P3_joao__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int ns_1_St_8_Standby_2_0;
  int ns_1_St_8_Standby_3_0_0;
  int ns_1_St_8_Standby_3_0_1;
  int ns_1_St_8_Standby_2_1;
  int ns_1_St_8_Standby_3_1_0;
  int ns_1_St_8_Standby_3_1_1;
  int ns_1_St_8_Reheat_2_0;
  int ns_1_St_8_Reheat_3_0_0;
  int ns_1_St_8_Reheat_3_0_1;
  int ns_1_St_8_Reheat_2_1;
  int ns_1_St_8_Reheat_3_1_0;
  int ns_1_St_8_Reheat_3_1_1;
  int ns_1_St_8_Maintain_2_0;
  int ns_1_St_8_Maintain_3_0_0;
  int ns_1_St_8_Maintain_3_0_1;
  int ns_1_St_8_Maintain_2_1;
  int ns_1_St_8_Maintain_3_1_0;
  int ns_1_St_8_Maintain_3_1_1;
  int ns_1_St_8_Heat_2_0;
  int ns_1_St_8_Heat_3_0_0;
  int ns_1_St_8_Heat_3_0_1;
  int ns_1_St_8_Heat_2_1;
  int ns_1_St_8_Heat_3_1_0;
  int ns_1_St_8_Heat_3_1_1;
  int ns_1_St_8_Off_2_0;
  int ns_1_St_8_Off_3_0_0;
  int ns_1_St_8_Off_3_0_1;
  int ns_1_St_8_Off_2_1;
  int ns_1_St_8_Off_3_1_0;
  int ns_1_St_8_Off_3_1_1;
  int ck_25_2_0;
  int ck_25_3_0_0;
  int ck_25_3_0_1;
  int ck_25_2_1;
  int ck_25_3_1_0;
  int ck_25_3_1_1;
  int nr_1_St_8_Standby;
  int ns_1_St_8_Standby_3;
  int ns_1_St_8_Standby_2;
  int ns_1_St_8_Standby_1;
  int i_2_St_8_Standby;
  int p_2_St_8_Standby;
  int nr_1_St_8_Reheat;
  int ns_1_St_8_Reheat_3;
  int ns_1_St_8_Reheat_2;
  int ns_1_St_8_Reheat_1;
  int i_2_St_8_Reheat;
  int p_2_St_8_Reheat;
  int nr_1_St_8_Maintain;
  int ns_1_St_8_Maintain_3;
  int ns_1_St_8_Maintain_2;
  int ns_1_St_8_Maintain_1;
  int i_2_St_8_Maintain;
  int p_2_St_8_Maintain;
  int nr_1_St_8_Heat;
  int ns_1_St_8_Heat_3;
  int ns_1_St_8_Heat_2;
  int ns_1_St_8_Heat_1;
  int i_2_St_8_Heat;
  int p_2_St_8_Heat;
  int nr_1_St_8_Off;
  int ns_1_St_8_Off_3;
  int ns_1_St_8_Off_2;
  int ns_1_St_8_Off_1;
  int i_2_St_8_Off;
  int p_2_St_8_Off;
  int ck_25_3;
  int ck_25_2;
  int ck_25_1;
  int v_126_2_0;
  int v_126_3_0_0;
  int v_126_3_0_1;
  int v_126_2_1;
  int v_126_3_1_0;
  int v_126_3_1_1;
  int v_127;
  int v_126_3;
  int v_126_2;
  int v_126_1;
  int v_125;
  int v_124;
  int v_123;
  int v_121_2_0;
  int v_121_3_0_0;
  int v_121_3_0_1;
  int v_121_2_1;
  int v_121_3_1_0;
  int v_121_3_1_1;
  int v_122;
  int v_121_3;
  int v_121_2;
  int v_121_1;
  int v_119_2_0;
  int v_119_3_0_0;
  int v_119_3_0_1;
  int v_119_2_1;
  int v_119_3_1_0;
  int v_119_3_1_1;
  int v_120;
  int v_119_3;
  int v_119_2;
  int v_119_1;
  int v_118;
  int v_116_2_0;
  int v_116_3_0_0;
  int v_116_3_0_1;
  int v_116_2_1;
  int v_116_3_1_0;
  int v_116_3_1_1;
  int v_117;
  int v_116_3;
  int v_116_2;
  int v_116_1;
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
  int s_8_St_8_Standby_2_0;
  int s_8_St_8_Standby_3_0_0;
  int s_8_St_8_Standby_3_0_1;
  int s_8_St_8_Standby_2_1;
  int s_8_St_8_Standby_3_1_0;
  int s_8_St_8_Standby_3_1_1;
  int s_8_St_8_Reheat_2_0;
  int s_8_St_8_Reheat_3_0_0;
  int s_8_St_8_Reheat_3_0_1;
  int s_8_St_8_Reheat_2_1;
  int s_8_St_8_Reheat_3_1_0;
  int s_8_St_8_Reheat_3_1_1;
  int s_8_St_8_Maintain_2_0;
  int s_8_St_8_Maintain_3_0_0;
  int s_8_St_8_Maintain_3_0_1;
  int s_8_St_8_Maintain_2_1;
  int s_8_St_8_Maintain_3_1_0;
  int s_8_St_8_Maintain_3_1_1;
  int s_8_St_8_Heat_2_0;
  int s_8_St_8_Heat_3_0_0;
  int s_8_St_8_Heat_3_0_1;
  int s_8_St_8_Heat_2_1;
  int s_8_St_8_Heat_3_1_0;
  int s_8_St_8_Heat_3_1_1;
  int s_8_St_8_Off_2_0;
  int s_8_St_8_Off_3_0_0;
  int s_8_St_8_Off_3_0_1;
  int s_8_St_8_Off_2_1;
  int s_8_St_8_Off_3_1_0;
  int s_8_St_8_Off_3_1_1;
  int ck_24_2_0;
  int ck_24_3_0_0;
  int ck_24_3_0_1;
  int ck_24_2_1;
  int ck_24_3_1_0;
  int ck_24_3_1_1;
  int r_1_St_8_Standby;
  int s_8_St_8_Standby_3;
  int s_8_St_8_Standby_2;
  int s_8_St_8_Standby_1;
  int r_1_St_8_Reheat;
  int s_8_St_8_Reheat_3;
  int s_8_St_8_Reheat_2;
  int s_8_St_8_Reheat_1;
  int r_1_St_8_Maintain;
  int s_8_St_8_Maintain_3;
  int s_8_St_8_Maintain_2;
  int s_8_St_8_Maintain_1;
  int r_1_St_8_Heat;
  int s_8_St_8_Heat_3;
  int s_8_St_8_Heat_2;
  int s_8_St_8_Heat_1;
  int r_1_St_8_Off;
  int s_8_St_8_Off_3;
  int s_8_St_8_Off_2;
  int s_8_St_8_Off_1;
  int ck_24_3;
  int ck_24_2;
  int ck_24_1;
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
  int ns_2_St_9_Standby_2_0;
  int ns_2_St_9_Standby_3_0_0;
  int ns_2_St_9_Standby_3_0_1;
  int ns_2_St_9_Standby_2_1;
  int ns_2_St_9_Standby_3_1_0;
  int ns_2_St_9_Standby_3_1_1;
  int ns_2_St_9_Spin_2_0;
  int ns_2_St_9_Spin_3_0_0;
  int ns_2_St_9_Spin_3_0_1;
  int ns_2_St_9_Spin_2_1;
  int ns_2_St_9_Spin_3_1_0;
  int ns_2_St_9_Spin_3_1_1;
  int ns_2_St_9_Rinse_2_0;
  int ns_2_St_9_Rinse_3_0_0;
  int ns_2_St_9_Rinse_3_0_1;
  int ns_2_St_9_Rinse_2_1;
  int ns_2_St_9_Rinse_3_1_0;
  int ns_2_St_9_Rinse_3_1_1;
  int ns_2_St_9_Washing_2_0;
  int ns_2_St_9_Washing_3_0_0;
  int ns_2_St_9_Washing_3_0_1;
  int ns_2_St_9_Washing_2_1;
  int ns_2_St_9_Washing_3_1_0;
  int ns_2_St_9_Washing_3_1_1;
  int ns_2_St_9_Waterfill_2_0;
  int ns_2_St_9_Waterfill_3_0_0;
  int ns_2_St_9_Waterfill_3_0_1;
  int ns_2_St_9_Waterfill_2_1;
  int ns_2_St_9_Waterfill_3_1_0;
  int ns_2_St_9_Waterfill_3_1_1;
  int ns_2_St_9_Off_2_0;
  int ns_2_St_9_Off_3_0_0;
  int ns_2_St_9_Off_3_0_1;
  int ns_2_St_9_Off_2_1;
  int ns_2_St_9_Off_3_1_0;
  int ns_2_St_9_Off_3_1_1;
  int ck_23_2_0;
  int ck_23_3_0_0;
  int ck_23_3_0_1;
  int ck_23_2_1;
  int ck_23_3_1_0;
  int ck_23_3_1_1;
  int nr_2_St_9_Standby;
  int ns_2_St_9_Standby_3;
  int ns_2_St_9_Standby_2;
  int ns_2_St_9_Standby_1;
  int i_1_St_9_Standby;
  int p_1_St_9_Standby;
  int nr_2_St_9_Spin;
  int ns_2_St_9_Spin_3;
  int ns_2_St_9_Spin_2;
  int ns_2_St_9_Spin_1;
  int i_1_St_9_Spin;
  int p_1_St_9_Spin;
  int nr_2_St_9_Rinse;
  int ns_2_St_9_Rinse_3;
  int ns_2_St_9_Rinse_2;
  int ns_2_St_9_Rinse_1;
  int i_1_St_9_Rinse;
  int p_1_St_9_Rinse;
  int nr_2_St_9_Washing;
  int ns_2_St_9_Washing_3;
  int ns_2_St_9_Washing_2;
  int ns_2_St_9_Washing_1;
  int i_1_St_9_Washing;
  int p_1_St_9_Washing;
  int nr_2_St_9_Waterfill;
  int ns_2_St_9_Waterfill_3;
  int ns_2_St_9_Waterfill_2;
  int ns_2_St_9_Waterfill_1;
  int i_1_St_9_Waterfill;
  int p_1_St_9_Waterfill;
  int nr_2_St_9_Off;
  int ns_2_St_9_Off_3;
  int ns_2_St_9_Off_2;
  int ns_2_St_9_Off_1;
  int i_1_St_9_Off;
  int p_1_St_9_Off;
  int ck_23_3;
  int ck_23_2;
  int ck_23_1;
  int v_114_2_0;
  int v_114_3_0_0;
  int v_114_3_0_1;
  int v_114_2_1;
  int v_114_3_1_0;
  int v_114_3_1_1;
  int v_115;
  int v_114_3;
  int v_114_2;
  int v_114_1;
  int v_113;
  int v_112;
  int v_111;
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
  int s_9_St_9_Standby_2_0;
  int s_9_St_9_Standby_3_0_0;
  int s_9_St_9_Standby_3_0_1;
  int s_9_St_9_Standby_2_1;
  int s_9_St_9_Standby_3_1_0;
  int s_9_St_9_Standby_3_1_1;
  int s_9_St_9_Spin_2_0;
  int s_9_St_9_Spin_3_0_0;
  int s_9_St_9_Spin_3_0_1;
  int s_9_St_9_Spin_2_1;
  int s_9_St_9_Spin_3_1_0;
  int s_9_St_9_Spin_3_1_1;
  int s_9_St_9_Rinse_2_0;
  int s_9_St_9_Rinse_3_0_0;
  int s_9_St_9_Rinse_3_0_1;
  int s_9_St_9_Rinse_2_1;
  int s_9_St_9_Rinse_3_1_0;
  int s_9_St_9_Rinse_3_1_1;
  int s_9_St_9_Washing_2_0;
  int s_9_St_9_Washing_3_0_0;
  int s_9_St_9_Washing_3_0_1;
  int s_9_St_9_Washing_2_1;
  int s_9_St_9_Washing_3_1_0;
  int s_9_St_9_Washing_3_1_1;
  int s_9_St_9_Waterfill_2_0;
  int s_9_St_9_Waterfill_3_0_0;
  int s_9_St_9_Waterfill_3_0_1;
  int s_9_St_9_Waterfill_2_1;
  int s_9_St_9_Waterfill_3_1_0;
  int s_9_St_9_Waterfill_3_1_1;
  int s_9_St_9_Off_2_0;
  int s_9_St_9_Off_3_0_0;
  int s_9_St_9_Off_3_0_1;
  int s_9_St_9_Off_2_1;
  int s_9_St_9_Off_3_1_0;
  int s_9_St_9_Off_3_1_1;
  int ck_22_2_0;
  int ck_22_3_0_0;
  int ck_22_3_0_1;
  int ck_22_2_1;
  int ck_22_3_1_0;
  int ck_22_3_1_1;
  int r_2_St_9_Standby;
  int s_9_St_9_Standby_3;
  int s_9_St_9_Standby_2;
  int s_9_St_9_Standby_1;
  int r_2_St_9_Spin;
  int s_9_St_9_Spin_3;
  int s_9_St_9_Spin_2;
  int s_9_St_9_Spin_1;
  int r_2_St_9_Rinse;
  int s_9_St_9_Rinse_3;
  int s_9_St_9_Rinse_2;
  int s_9_St_9_Rinse_1;
  int r_2_St_9_Washing;
  int s_9_St_9_Washing_3;
  int s_9_St_9_Washing_2;
  int s_9_St_9_Washing_1;
  int r_2_St_9_Waterfill;
  int s_9_St_9_Waterfill_3;
  int s_9_St_9_Waterfill_2;
  int s_9_St_9_Waterfill_1;
  int r_2_St_9_Off;
  int s_9_St_9_Off_3;
  int s_9_St_9_Off_2;
  int s_9_St_9_Off_1;
  int ck_22_3;
  int ck_22_2;
  int ck_22_1;
  int nr_3_St_10_Ocupied;
  int ns_3_St_10_Ocupied_1;
  int room_oc_St_10_Ocupied;
  int nr_3_St_10_Empty;
  int ns_3_St_10_Empty_1;
  int room_oc_St_10_Empty;
  int ck_21_1;
  int v_110;
  int r_3_St_10_Ocupied;
  int s_10_St_10_Ocupied_1;
  int r_3_St_10_Empty;
  int s_10_St_10_Empty_1;
  int nr_4_St_11_Ligado;
  int ns_4_St_11_Ligado_1;
  int s_1_St_11_Ligado;
  int nr_4_St_11_Desligado;
  int ns_4_St_11_Desligado_1;
  int s_1_St_11_Desligado;
  int ck_19_1;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int r_4_St_11_Ligado;
  int s_11_St_11_Ligado_1;
  int r_4_St_11_Desligado;
  int s_11_St_11_Desligado_1;
  int nr_5_St_12_Ligado;
  int ns_5_St_12_Ligado_1;
  int s_St_12_Ligado;
  int nr_5_St_12_Desligado;
  int ns_5_St_12_Desligado_1;
  int s_St_12_Desligado;
  int ck_17_1;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int r_5_St_12_Ligado;
  int s_12_St_12_Ligado_1;
  int r_5_St_12_Desligado;
  int s_12_St_12_Desligado_1;
  int nr_6_St_13_Open;
  int ns_6_St_13_Open_1;
  int door_open_1_St_13_Open;
  int nr_6_St_13_Closed;
  int ns_6_St_13_Closed_1;
  int door_open_1_St_13_Closed;
  int ck_15_1;
  int v_97;
  int v_96;
  int v_95;
  int r_6_St_13_Open;
  int s_13_St_13_Open_1;
  int r_6_St_13_Closed;
  int s_13_St_13_Closed_1;
  int nr_7_St_14_Open;
  int ns_7_St_14_Open_1;
  int door_open_St_14_Open;
  int nr_7_St_14_Closed;
  int ns_7_St_14_Closed_1;
  int door_open_St_14_Closed;
  int ck_13_1;
  int v_94;
  int v_93;
  int v_92;
  int r_7_St_14_Open;
  int s_14_St_14_Open_1;
  int r_7_St_14_Closed;
  int s_14_St_14_Closed_1;
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
  int ns_8_St_15_High_2_0;
  int ns_8_St_15_High_2_1;
  int ns_8_St_15_Eco_2_0;
  int ns_8_St_15_Eco_2_1;
  int ns_8_St_15_Frostprotection_2_0;
  int ns_8_St_15_Frostprotection_2_1;
  int ns_8_St_15_Off_2_0;
  int ns_8_St_15_Off_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int nr_8_St_15_High;
  int ns_8_St_15_High_2;
  int ns_8_St_15_High_1;
  int i_St_15_High;
  int p_St_15_High;
  int nr_8_St_15_Eco;
  int ns_8_St_15_Eco_2;
  int ns_8_St_15_Eco_1;
  int i_St_15_Eco;
  int p_St_15_Eco;
  int nr_8_St_15_Frostprotection;
  int ns_8_St_15_Frostprotection_2;
  int ns_8_St_15_Frostprotection_1;
  int i_St_15_Frostprotection;
  int p_St_15_Frostprotection;
  int nr_8_St_15_Off;
  int ns_8_St_15_Off_2;
  int ns_8_St_15_Off_1;
  int i_St_15_Off;
  int p_St_15_Off;
  int ck_11_2;
  int ck_11_1;
  int v_91;
  int v_90;
  int v_88_2_0;
  int v_88_2_1;
  int v_86_2_0;
  int v_86_2_1;
  int v_89;
  int v_88_2;
  int v_88_1;
  int v_87;
  int v_86_2;
  int v_86_1;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_80_2_0;
  int v_80_2_1;
  int v_81;
  int v_80_2;
  int v_80_1;
  int v_79;
  int v_78;
  int v_77;
  int v_75_2_0;
  int v_75_2_1;
  int v_76;
  int v_75_2;
  int v_75_1;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int s_15_St_15_High_2_0;
  int s_15_St_15_High_2_1;
  int s_15_St_15_Eco_2_0;
  int s_15_St_15_Eco_2_1;
  int s_15_St_15_Frostprotection_2_0;
  int s_15_St_15_Frostprotection_2_1;
  int s_15_St_15_Off_2_0;
  int s_15_St_15_Off_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int r_8_St_15_High;
  int s_15_St_15_High_2;
  int s_15_St_15_High_1;
  int r_8_St_15_Eco;
  int s_15_St_15_Eco_2;
  int s_15_St_15_Eco_1;
  int r_8_St_15_Frostprotection;
  int s_15_St_15_Frostprotection_2;
  int s_15_St_15_Frostprotection_1;
  int r_8_St_15_Off;
  int s_15_St_15_Off_2;
  int s_15_St_15_Off_1;
  int ck_10_2;
  int ck_10_1;
  int s_15_2_0;
  int s_15_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_9_2_0;
  int s_9_3_0_0;
  int s_9_3_0_1;
  int s_9_2_1;
  int s_9_3_1_0;
  int s_9_3_1_1;
  int ns_2_2_0;
  int ns_2_3_0_0;
  int ns_2_3_0_1;
  int ns_2_2_1;
  int ns_2_3_1_0;
  int ns_2_3_1_1;
  int s_8_2_0;
  int s_8_3_0_0;
  int s_8_3_0_1;
  int s_8_2_1;
  int s_8_3_1_0;
  int s_8_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
  int s_15_2;
  int s_15_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_14_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_13_1;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_12_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_11_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_10_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_9_3;
  int s_9_2;
  int s_9_1;
  int ns_2_3;
  int ns_2_2;
  int ns_2_1_2;
  int r_2;
  int nr_2;
  int s_8_3;
  int s_8_2;
  int s_8_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1_1;
  int r_1;
  int nr_1;
  int f;
  int s_3;
  int c_1;
  int tok_1;
  int cold_1;
  int p_2;
  int i_2;
  int e;
  int s_2;
  int c;
  int p_1;
  int i_1;
  int presence;
  int room_oc;
  int botao_1;
  int c1_2;
  int c2_2;
  int s_1;
  int botao;
  int c1_1;
  int c2_1;
  int s;
  int push_1;
  int c_door_1;
  int door_open_1;
  int push;
  int c_door;
  int door_open;
  int up1;
  int down1;
  int up2;
  int down2;
  int c1;
  int c2;
  int p;
  int i;
  int v_281;
  int v_280;
  int ck_1;
  int ck_2;
  int r5_MIN;
  int r5_ECO;
  int r5_COM;
  int ck_2_1;
  int ck_2_0;
  int v_59;
  int v_60_1;
  int v_60_2;
  int v_61;
  int v_60_2_1;
  int v_60_2_0;
  int v_62;
  int v_63_1;
  int v_63_2;
  int v_64;
  int v_63_2_1;
  int v_63_2_0;
  int v_65_1;
  int v_65_2;
  int v_66;
  int v_65_2_1;
  int v_65_2_0;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int ck_8_1;
  int ck_8_2;
  int s_7_St_7_Minimal_safety_1;
  int s_7_St_7_Minimal_safety_2;
  int r_St_7_Minimal_safety;
  int s_7_St_7_Eco_1;
  int s_7_St_7_Eco_2;
  int r_St_7_Eco;
  int s_7_St_7_Comfort_1;
  int s_7_St_7_Comfort_2;
  int r_St_7_Comfort;
  int ck_8_2_1;
  int ck_8_2_0;
  int s_7_St_7_Minimal_safety_2_1;
  int s_7_St_7_Minimal_safety_2_0;
  int s_7_St_7_Eco_2_1;
  int s_7_St_7_Eco_2_0;
  int s_7_St_7_Comfort_2_1;
  int s_7_St_7_Comfort_2_0;
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
  int ck_9_1;
  int ck_9_2;
  int pl_state_St_7_Minimal_safety_1;
  int pl_state_St_7_Minimal_safety_2;
  int ns_St_7_Minimal_safety_1;
  int ns_St_7_Minimal_safety_2;
  int nr_St_7_Minimal_safety;
  int pl_state_St_7_Eco_1;
  int pl_state_St_7_Eco_2;
  int ns_St_7_Eco_1;
  int ns_St_7_Eco_2;
  int nr_St_7_Eco;
  int pl_state_St_7_Comfort_1;
  int pl_state_St_7_Comfort_2;
  int ns_St_7_Comfort_1;
  int ns_St_7_Comfort_2;
  int nr_St_7_Comfort;
  int ck_9_2_1;
  int ck_9_2_0;
  int pl_state_St_7_Minimal_safety_2_1;
  int pl_state_St_7_Minimal_safety_2_0;
  int ns_St_7_Minimal_safety_2_1;
  int ns_St_7_Minimal_safety_2_0;
  int pl_state_St_7_Eco_2_1;
  int pl_state_St_7_Eco_2_0;
  int ns_St_7_Eco_2_1;
  int ns_St_7_Eco_2_0;
  int pl_state_St_7_Comfort_2_1;
  int pl_state_St_7_Comfort_2_0;
  int ns_St_7_Comfort_2_1;
  int ns_St_7_Comfort_2_0;
  int pol_lim_1;
  int pol_lim_2;
  int total;
  int off_frost;
  int r5;
  int r4;
  int r3;
  int r2;
  int r1;
  int pl_state_1;
  int pl_state_2;
  int comfort_input_1;
  int eco_input_1;
  int nr;
  int r;
  int ns_1_1;
  int ns_2_1;
  int s_7_1;
  int s_7_2;
  int v;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int pol_lim_2_1;
  int pol_lim_2_0;
  int pl_state_2_1;
  int pl_state_2_0;
  int ns_2_1_1;
  int ns_2_1_0;
  int s_7_2_1;
  int s_7_2_0;
  int ct2;
  int ct1;
  int cl2;
  int cl1;
  int rc2;
  int rc1;
  int co;
  int cws;
  int cp;
  int cj;
  ck_8_1 = self->v_288;
  ck_8_2 = self->v_289;
  comfort_input_1 = comfort_input;
  eco_input_1 = eco_input;
  f = finish_oven;
  s_3 = start_oven;
  tok_1 = tok;
  cold_1 = cold;
  ck_24_1 = self->v_330;
  ck_24_2 = self->v_331;
  ck_24_3 = self->v_332;
  e = end_wash;
  s_2 = start_wash;
  ck_22_1 = self->v_389;
  ck_22_2 = self->v_390;
  ck_22_3 = self->v_391;
  presence = presenca;
  botao_1 = botao_tv;
  botao = botao_lamp;
  push_1 = push_janela;
  push = push_porta;
  up1 = rad_up1;
  down1 = rad_down1;
  up2 = rad_up2;
  down2 = rad_down2;
  ck_10_1 = self->v_426;
  ck_10_2 = self->v_427;
  Contrato_controller__contrato_controller_step(eco_input, comfort_input,
                                                end_wash, start_wash,
                                                finish_oven, start_oven, tok,
                                                cold, push_porta,
                                                push_janela, rad_up1,
                                                rad_down1, rad_up2,
                                                rad_down2, presenca,
                                                botao_lamp, botao_tv,
                                                self->v_427, self->v_426,
                                                self->pnr_8, self->ck_12_1,
                                                self->pnr_7, self->ck_14_1,
                                                self->pnr_6, self->ck_16_1,
                                                self->pnr_5, self->ck_18_1,
                                                self->pnr_4, self->ck_20_1,
                                                self->pnr_3, self->v_391,
                                                self->v_390, self->v_389,
                                                self->pnr_2, self->v_332,
                                                self->v_331, self->v_330,
                                                self->pnr_1, self->pnr,
                                                self->v_289, self->v_288,
                                                true, true, true, true, true,
                                                true, true, true, true, true,
                                                &Contrato_controller__contrato_controller_out_st);
  ct2 = Contrato_controller__contrato_controller_out_st.contrato_ct2;
  ct1 = Contrato_controller__contrato_controller_out_st.contrato_ct1;
  cl2 = Contrato_controller__contrato_controller_out_st.contrato_cl2;
  cl1 = Contrato_controller__contrato_controller_out_st.contrato_cl1;
  rc2 = Contrato_controller__contrato_controller_out_st.contrato_rc2;
  rc1 = Contrato_controller__contrato_controller_out_st.contrato_rc1;
  co = Contrato_controller__contrato_controller_out_st.contrato_co;
  cws = Contrato_controller__contrato_controller_out_st.contrato_cws;
  cp = Contrato_controller__contrato_controller_out_st.contrato_cp;
  cj = Contrato_controller__contrato_controller_out_st.contrato_cj;
  c_1 = co;
  c = cws;
  c1_2 = ct1;
  c2_2 = ct2;
  c1_1 = cl1;
  c2_1 = cl2;
  c_door_1 = cj;
  c_door = cp;
  c1 = rc1;
  c2 = rc2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      v_59 = !(comfort_input_1);
      if (v_59) {
        v_60_1 = false;
      } else {
        v_60_1 = true;
      };
      if (eco_input_1) {
        s_7_St_7_Comfort_1 = true;
      } else {
        s_7_St_7_Comfort_1 = v_60_1;
      };
      if (v_59) {
        v_60_2 = false;
      } else {
        v_60_2 = true;
      };
      if (eco_input_1) {
        s_7_St_7_Comfort_2 = false;
      } else {
        s_7_St_7_Comfort_2 = v_60_2;
      };
      if (v_59) {
        v_61 = true;
      } else {
        v_61 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_Comfort = true;
      } else {
        r_St_7_Comfort = v_61;
      };
      v_286 = s_7_St_7_Comfort_1;
      v_287 = s_7_St_7_Comfort_2;
      v_283 = r_St_7_Comfort;
      if (s_7_St_7_Comfort_1) {
        s_7_St_7_Comfort_2_1 = s_7_St_7_Comfort_2;
      } else {
        s_7_St_7_Comfort_2_0 = s_7_St_7_Comfort_2;
      };
      if (v_60_1) {
        v_60_2_1 = v_60_2;
      } else {
        v_60_2_0 = v_60_2;
      };
    } else {
      v_62 = !(eco_input_1);
      if (comfort_input_1) {
        v_63_1 = true;
      } else {
        v_63_1 = true;
      };
      if (v_62) {
        s_7_St_7_Eco_1 = false;
      } else {
        s_7_St_7_Eco_1 = v_63_1;
      };
      v_286 = s_7_St_7_Eco_1;
      if (comfort_input_1) {
        v_63_2 = true;
      } else {
        v_63_2 = false;
      };
      if (v_62) {
        s_7_St_7_Eco_2 = false;
      } else {
        s_7_St_7_Eco_2 = v_63_2;
      };
      v_287 = s_7_St_7_Eco_2;
      if (comfort_input_1) {
        v_64 = true;
      } else {
        v_64 = self->pnr;
      };
      if (v_62) {
        r_St_7_Eco = true;
      } else {
        r_St_7_Eco = v_64;
      };
      v_283 = r_St_7_Eco;
      if (s_7_St_7_Eco_1) {
        s_7_St_7_Eco_2_1 = s_7_St_7_Eco_2;
      } else {
        s_7_St_7_Eco_2_0 = s_7_St_7_Eco_2;
      };
      if (v_63_1) {
        v_63_2_1 = v_63_2;
      } else {
        v_63_2_0 = v_63_2;
      };
    };
    r = v_283;
    s_7_1 = v_286;
    s_7_2 = v_287;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      v_284 = true;
      v_285 = true;
      v_282 = true;
    } else {
      if (comfort_input_1) {
        v_65_1 = true;
      } else {
        v_65_1 = false;
      };
      if (eco_input_1) {
        s_7_St_7_Minimal_safety_1 = true;
      } else {
        s_7_St_7_Minimal_safety_1 = v_65_1;
      };
      v_284 = s_7_St_7_Minimal_safety_1;
      if (comfort_input_1) {
        v_65_2 = true;
      } else {
        v_65_2 = false;
      };
      if (eco_input_1) {
        s_7_St_7_Minimal_safety_2 = false;
      } else {
        s_7_St_7_Minimal_safety_2 = v_65_2;
      };
      v_285 = s_7_St_7_Minimal_safety_2;
      if (comfort_input_1) {
        v_66 = true;
      } else {
        v_66 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_Minimal_safety = true;
      } else {
        r_St_7_Minimal_safety = v_66;
      };
      v_282 = r_St_7_Minimal_safety;
      if (s_7_St_7_Minimal_safety_1) {
        s_7_St_7_Minimal_safety_2_1 = s_7_St_7_Minimal_safety_2;
      } else {
        s_7_St_7_Minimal_safety_2_0 = s_7_St_7_Minimal_safety_2;
      };
    };
    r = v_282;
    s_7_1 = v_284;
    s_7_2 = v_285;
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  ck_9_1 = s_7_1;
  ck_9_2 = s_7_2;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      ns_St_7_Comfort_1 = true;
      ns_St_7_Comfort_2 = true;
      nr_St_7_Comfort = false;
      pl_state_St_7_Comfort_1 = true;
      pl_state_St_7_Comfort_2 = true;
      v_294 = ns_St_7_Comfort_1;
      v_295 = ns_St_7_Comfort_2;
      v_291 = nr_St_7_Comfort;
      v_298 = pl_state_St_7_Comfort_1;
      v_299 = pl_state_St_7_Comfort_2;
      if (ns_St_7_Comfort_1) {
        ns_St_7_Comfort_2_1 = ns_St_7_Comfort_2;
      } else {
        ns_St_7_Comfort_2_0 = ns_St_7_Comfort_2;
      };
      if (pl_state_St_7_Comfort_1) {
        pl_state_St_7_Comfort_2_1 = pl_state_St_7_Comfort_2;
      } else {
        pl_state_St_7_Comfort_2_0 = pl_state_St_7_Comfort_2;
      };
    } else {
      ns_St_7_Eco_1 = true;
      v_294 = ns_St_7_Eco_1;
      ns_St_7_Eco_2 = false;
      v_295 = ns_St_7_Eco_2;
      nr_St_7_Eco = false;
      v_291 = nr_St_7_Eco;
      pl_state_St_7_Eco_1 = true;
      v_298 = pl_state_St_7_Eco_1;
      pl_state_St_7_Eco_2 = false;
      v_299 = pl_state_St_7_Eco_2;
      if (ns_St_7_Eco_1) {
        ns_St_7_Eco_2_1 = ns_St_7_Eco_2;
      } else {
        ns_St_7_Eco_2_0 = ns_St_7_Eco_2;
      };
      if (pl_state_St_7_Eco_1) {
        pl_state_St_7_Eco_2_1 = pl_state_St_7_Eco_2;
      } else {
        pl_state_St_7_Eco_2_0 = pl_state_St_7_Eco_2;
      };
    };
    nr = v_291;
    ns_1_1 = v_294;
    ns_2_1 = v_295;
    pl_state_1 = v_298;
    pl_state_2 = v_299;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_292 = true;
      v_293 = true;
      v_290 = true;
      v_296 = true;
      v_297 = true;
    } else {
      ns_St_7_Minimal_safety_1 = false;
      v_292 = ns_St_7_Minimal_safety_1;
      ns_St_7_Minimal_safety_2 = false;
      v_293 = ns_St_7_Minimal_safety_2;
      nr_St_7_Minimal_safety = false;
      v_290 = nr_St_7_Minimal_safety;
      pl_state_St_7_Minimal_safety_1 = false;
      v_296 = pl_state_St_7_Minimal_safety_1;
      pl_state_St_7_Minimal_safety_2 = false;
      v_297 = pl_state_St_7_Minimal_safety_2;
      if (ns_St_7_Minimal_safety_1) {
        ns_St_7_Minimal_safety_2_1 = ns_St_7_Minimal_safety_2;
      } else {
        ns_St_7_Minimal_safety_2_0 = ns_St_7_Minimal_safety_2;
      };
      if (pl_state_St_7_Minimal_safety_1) {
        pl_state_St_7_Minimal_safety_2_1 = pl_state_St_7_Minimal_safety_2;
      } else {
        pl_state_St_7_Minimal_safety_2_0 = pl_state_St_7_Minimal_safety_2;
      };
    };
    nr = v_290;
    ns_1_1 = v_292;
    ns_2_1 = v_293;
    pl_state_1 = v_296;
    pl_state_2 = v_297;
  };
  if (ns_1_1) {
    ns_2_1_1 = ns_2_1;
  } else {
    ns_2_1_0 = ns_2_1;
  };
  if (pl_state_1) {
    pl_state_2_1 = pl_state_2;
  } else {
    pl_state_2_0 = pl_state_2;
  };
  pol_lim_1 = pl_state_1;
  ck_1 = pol_lim_1;
  pol_lim_2 = pl_state_2;
  ck_2 = pol_lim_2;
  if (pol_lim_1) {
    pol_lim_2_1 = pol_lim_2;
  } else {
    pol_lim_2_0 = pol_lim_2;
  };
  if (ck_1) {
    ck_2_1 = ck_2;
  } else {
    ck_2_0 = ck_2;
  };
  if (!(ck_8_1)) {
    if (!(ck_8_2_0)) {
      if (v_65_1) {
        v_65_2_1 = v_65_2;
      } else {
        v_65_2_0 = v_65_2;
      };
    };
  };
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      ck_24_3_1_1 = ck_24_3;
      if (ck_24_3_1_1) {
        if (f) {
          v_122 = true;
        } else {
          v_122 = self->pnr_1;
        };
        if (tok_1) {
          r_1_St_8_Heat = true;
        } else {
          r_1_St_8_Heat = v_122;
        };
        if (f) {
          v_121_1 = true;
        } else {
          v_121_1 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_1 = true;
        } else {
          s_8_St_8_Heat_1 = v_121_1;
        };
        if (f) {
          v_121_2 = false;
        } else {
          v_121_2 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_2 = true;
        } else {
          s_8_St_8_Heat_2 = v_121_2;
        };
        if (f) {
          v_121_3 = false;
        } else {
          v_121_3 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_3 = false;
        } else {
          s_8_St_8_Heat_3 = v_121_3;
        };
        v_348 = r_1_St_8_Heat;
        v_333 = s_8_St_8_Heat_1;
        v_334 = s_8_St_8_Heat_2;
        v_335 = s_8_St_8_Heat_3;
      } else {
        if (f) {
          v_120 = true;
          v_119_1 = true;
          v_119_2 = false;
          v_119_3 = false;
        } else {
          v_120 = self->pnr_1;
          v_119_1 = true;
          v_119_2 = true;
          v_119_3 = false;
        };
        v_118 = (cold_1&&c_1);
        if (v_118) {
          r_1_St_8_Maintain = true;
        } else {
          r_1_St_8_Maintain = v_120;
        };
        v_348 = r_1_St_8_Maintain;
        if (v_118) {
          s_8_St_8_Maintain_1 = false;
        } else {
          s_8_St_8_Maintain_1 = v_119_1;
        };
        v_333 = s_8_St_8_Maintain_1;
        if (v_118) {
          s_8_St_8_Maintain_2 = false;
        } else {
          s_8_St_8_Maintain_2 = v_119_2;
        };
        v_334 = s_8_St_8_Maintain_2;
        if (v_118) {
          s_8_St_8_Maintain_3 = true;
        } else {
          s_8_St_8_Maintain_3 = v_119_3;
        };
        v_335 = s_8_St_8_Maintain_3;
      };
      v_342 = v_333;
      v_343 = v_334;
      v_344 = v_335;
      v_350 = v_348;
      if (ck_24_3_1_1) {
        if (v_121_1) {
          v_121_2_1 = v_121_2;
          if (v_121_2_1) {
            v_121_3_1_1 = v_121_3;
          } else {
            v_121_3_1_0 = v_121_3;
          };
        } else {
          v_121_2_0 = v_121_2;
          if (v_121_2_0) {
            v_121_3_0_1 = v_121_3;
          } else {
            v_121_3_0_0 = v_121_3;
          };
        };
        if (s_8_St_8_Heat_1) {
          s_8_St_8_Heat_2_1 = s_8_St_8_Heat_2;
          if (s_8_St_8_Heat_2_1) {
            s_8_St_8_Heat_3_1_1 = s_8_St_8_Heat_3;
          } else {
            s_8_St_8_Heat_3_1_0 = s_8_St_8_Heat_3;
          };
        } else {
          s_8_St_8_Heat_2_0 = s_8_St_8_Heat_2;
          if (s_8_St_8_Heat_2_0) {
            s_8_St_8_Heat_3_0_1 = s_8_St_8_Heat_3;
          } else {
            s_8_St_8_Heat_3_0_0 = s_8_St_8_Heat_3;
          };
        };
      } else {
        if (v_119_1) {
          v_119_2_1 = v_119_2;
          if (v_119_2_1) {
            v_119_3_1_1 = v_119_3;
          } else {
            v_119_3_1_0 = v_119_3;
          };
        } else {
          v_119_2_0 = v_119_2;
          if (v_119_2_0) {
            v_119_3_0_1 = v_119_3;
          } else {
            v_119_3_0_0 = v_119_3;
          };
        };
        if (s_8_St_8_Maintain_1) {
          s_8_St_8_Maintain_2_1 = s_8_St_8_Maintain_2;
          if (s_8_St_8_Maintain_2_1) {
            s_8_St_8_Maintain_3_1_1 = s_8_St_8_Maintain_3;
          } else {
            s_8_St_8_Maintain_3_1_0 = s_8_St_8_Maintain_3;
          };
        } else {
          s_8_St_8_Maintain_2_0 = s_8_St_8_Maintain_2;
          if (s_8_St_8_Maintain_2_0) {
            s_8_St_8_Maintain_3_0_1 = s_8_St_8_Maintain_3;
          } else {
            s_8_St_8_Maintain_3_0_0 = s_8_St_8_Maintain_3;
          };
        };
      };
    } else {
      ck_24_3_1_0 = ck_24_3;
      if (ck_24_3_1_0) {
        v_349 = true;
        v_336 = true;
        v_337 = true;
        v_338 = true;
      } else {
        v_124 = !(c_1);
        v_125 = (s_3&&v_124);
        if (v_125) {
          v_127 = true;
          v_126_1 = false;
          v_126_2 = false;
          v_126_3 = false;
        } else {
          v_127 = self->pnr_1;
          v_126_1 = true;
          v_126_2 = false;
          v_126_3 = false;
        };
        v_123 = (s_3&&c_1);
        if (v_123) {
          r_1_St_8_Off = true;
        } else {
          r_1_St_8_Off = v_127;
        };
        v_349 = r_1_St_8_Off;
        if (v_123) {
          s_8_St_8_Off_1 = true;
        } else {
          s_8_St_8_Off_1 = v_126_1;
        };
        v_336 = s_8_St_8_Off_1;
        if (v_123) {
          s_8_St_8_Off_2 = true;
        } else {
          s_8_St_8_Off_2 = v_126_2;
        };
        v_337 = s_8_St_8_Off_2;
        if (v_123) {
          s_8_St_8_Off_3 = true;
        } else {
          s_8_St_8_Off_3 = v_126_3;
        };
        v_338 = s_8_St_8_Off_3;
        if (v_126_1) {
          v_126_2_1 = v_126_2;
          if (v_126_2_1) {
            v_126_3_1_1 = v_126_3;
          } else {
            v_126_3_1_0 = v_126_3;
          };
        } else {
          v_126_2_0 = v_126_2;
          if (v_126_2_0) {
            v_126_3_0_1 = v_126_3;
          } else {
            v_126_3_0_0 = v_126_3;
          };
        };
        if (s_8_St_8_Off_1) {
          s_8_St_8_Off_2_1 = s_8_St_8_Off_2;
          if (s_8_St_8_Off_2_1) {
            s_8_St_8_Off_3_1_1 = s_8_St_8_Off_3;
          } else {
            s_8_St_8_Off_3_1_0 = s_8_St_8_Off_3;
          };
        } else {
          s_8_St_8_Off_2_0 = s_8_St_8_Off_2;
          if (s_8_St_8_Off_2_0) {
            s_8_St_8_Off_3_0_1 = s_8_St_8_Off_3;
          } else {
            s_8_St_8_Off_3_0_0 = s_8_St_8_Off_3;
          };
        };
      };
      v_342 = v_336;
      v_343 = v_337;
      v_344 = v_338;
      v_350 = v_349;
    };
    s_8_1 = v_342;
    s_8_2 = v_343;
    s_8_3 = v_344;
    r_1 = v_350;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      ck_24_3_0_1 = ck_24_3;
      v_345 = true;
      v_346 = true;
      v_347 = true;
      v_352 = true;
    } else {
      ck_24_3_0_0 = ck_24_3;
      if (ck_24_3_0_0) {
        if (f) {
          v_117 = true;
        } else {
          v_117 = self->pnr_1;
        };
        if (tok_1) {
          r_1_St_8_Reheat = true;
        } else {
          r_1_St_8_Reheat = v_117;
        };
        if (f) {
          v_116_1 = true;
        } else {
          v_116_1 = false;
        };
        if (tok_1) {
          s_8_St_8_Reheat_1 = true;
        } else {
          s_8_St_8_Reheat_1 = v_116_1;
        };
        if (f) {
          v_116_2 = false;
        } else {
          v_116_2 = false;
        };
        if (tok_1) {
          s_8_St_8_Reheat_2 = true;
        } else {
          s_8_St_8_Reheat_2 = v_116_2;
        };
        if (f) {
          v_116_3 = false;
        } else {
          v_116_3 = true;
        };
        if (tok_1) {
          s_8_St_8_Reheat_3 = false;
        } else {
          s_8_St_8_Reheat_3 = v_116_3;
        };
        v_351 = r_1_St_8_Reheat;
        v_339 = s_8_St_8_Reheat_1;
        v_340 = s_8_St_8_Reheat_2;
        v_341 = s_8_St_8_Reheat_3;
        if (v_116_1) {
          v_116_2_1 = v_116_2;
          if (v_116_2_1) {
            v_116_3_1_1 = v_116_3;
          } else {
            v_116_3_1_0 = v_116_3;
          };
        } else {
          v_116_2_0 = v_116_2;
          if (v_116_2_0) {
            v_116_3_0_1 = v_116_3;
          } else {
            v_116_3_0_0 = v_116_3;
          };
        };
      } else {
        if (c_1) {
          r_1_St_8_Standby = true;
        } else {
          r_1_St_8_Standby = self->pnr_1;
        };
        v_351 = r_1_St_8_Standby;
        if (c_1) {
          s_8_St_8_Standby_1 = true;
        } else {
          s_8_St_8_Standby_1 = false;
        };
        v_339 = s_8_St_8_Standby_1;
        if (c_1) {
          s_8_St_8_Standby_2 = true;
        } else {
          s_8_St_8_Standby_2 = false;
        };
        v_340 = s_8_St_8_Standby_2;
        if (c_1) {
          s_8_St_8_Standby_3 = true;
        } else {
          s_8_St_8_Standby_3 = false;
        };
        v_341 = s_8_St_8_Standby_3;
      };
      v_345 = v_339;
      v_346 = v_340;
      v_347 = v_341;
      v_352 = v_351;
    };
    s_8_1 = v_345;
    s_8_2 = v_346;
    s_8_3 = v_347;
    r_1 = v_352;
  };
  ck_25_1 = s_8_1;
  ck_25_2 = s_8_2;
  ck_25_3 = s_8_3;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      ck_25_3_1_1 = ck_25_3;
      if (ck_25_3_1_1) {
        p_2_St_8_Heat = 1500;
        i_2_St_8_Heat = 1;
        nr_1_St_8_Heat = false;
        ns_1_St_8_Heat_1 = true;
        ns_1_St_8_Heat_2 = true;
        ns_1_St_8_Heat_3 = true;
        v_300 = p_2_St_8_Heat;
        v_305 = i_2_St_8_Heat;
        v_325 = nr_1_St_8_Heat;
        v_310 = ns_1_St_8_Heat_1;
        v_311 = ns_1_St_8_Heat_2;
        v_312 = ns_1_St_8_Heat_3;
      } else {
        p_2_St_8_Maintain = 300;
        v_300 = p_2_St_8_Maintain;
        i_2_St_8_Maintain = 2;
        v_305 = i_2_St_8_Maintain;
        nr_1_St_8_Maintain = false;
        v_325 = nr_1_St_8_Maintain;
        ns_1_St_8_Maintain_1 = true;
        v_310 = ns_1_St_8_Maintain_1;
        ns_1_St_8_Maintain_2 = true;
        v_311 = ns_1_St_8_Maintain_2;
        ns_1_St_8_Maintain_3 = false;
        v_312 = ns_1_St_8_Maintain_3;
      };
      v_302 = v_300;
      v_307 = v_305;
      v_319 = v_310;
      v_320 = v_311;
      v_321 = v_312;
      v_327 = v_325;
      if (ck_25_3_1_1) {
        if (ns_1_St_8_Heat_1) {
          ns_1_St_8_Heat_2_1 = ns_1_St_8_Heat_2;
          if (ns_1_St_8_Heat_2_1) {
            ns_1_St_8_Heat_3_1_1 = ns_1_St_8_Heat_3;
          } else {
            ns_1_St_8_Heat_3_1_0 = ns_1_St_8_Heat_3;
          };
        } else {
          ns_1_St_8_Heat_2_0 = ns_1_St_8_Heat_2;
          if (ns_1_St_8_Heat_2_0) {
            ns_1_St_8_Heat_3_0_1 = ns_1_St_8_Heat_3;
          } else {
            ns_1_St_8_Heat_3_0_0 = ns_1_St_8_Heat_3;
          };
        };
      } else {
        if (ns_1_St_8_Maintain_1) {
          ns_1_St_8_Maintain_2_1 = ns_1_St_8_Maintain_2;
          if (ns_1_St_8_Maintain_2_1) {
            ns_1_St_8_Maintain_3_1_1 = ns_1_St_8_Maintain_3;
          } else {
            ns_1_St_8_Maintain_3_1_0 = ns_1_St_8_Maintain_3;
          };
        } else {
          ns_1_St_8_Maintain_2_0 = ns_1_St_8_Maintain_2;
          if (ns_1_St_8_Maintain_2_0) {
            ns_1_St_8_Maintain_3_0_1 = ns_1_St_8_Maintain_3;
          } else {
            ns_1_St_8_Maintain_3_0_0 = ns_1_St_8_Maintain_3;
          };
        };
      };
    } else {
      ck_25_3_1_0 = ck_25_3;
      if (ck_25_3_1_0) {
        v_301 = 0;
        v_306 = 0;
        v_326 = true;
        v_313 = true;
        v_314 = true;
        v_315 = true;
      } else {
        p_2_St_8_Off = 0;
        v_301 = p_2_St_8_Off;
        i_2_St_8_Off = 0;
        v_306 = i_2_St_8_Off;
        nr_1_St_8_Off = false;
        v_326 = nr_1_St_8_Off;
        ns_1_St_8_Off_1 = true;
        v_313 = ns_1_St_8_Off_1;
        ns_1_St_8_Off_2 = false;
        v_314 = ns_1_St_8_Off_2;
        ns_1_St_8_Off_3 = false;
        v_315 = ns_1_St_8_Off_3;
        if (ns_1_St_8_Off_1) {
          ns_1_St_8_Off_2_1 = ns_1_St_8_Off_2;
          if (ns_1_St_8_Off_2_1) {
            ns_1_St_8_Off_3_1_1 = ns_1_St_8_Off_3;
          } else {
            ns_1_St_8_Off_3_1_0 = ns_1_St_8_Off_3;
          };
        } else {
          ns_1_St_8_Off_2_0 = ns_1_St_8_Off_2;
          if (ns_1_St_8_Off_2_0) {
            ns_1_St_8_Off_3_0_1 = ns_1_St_8_Off_3;
          } else {
            ns_1_St_8_Off_3_0_0 = ns_1_St_8_Off_3;
          };
        };
      };
      v_302 = v_301;
      v_307 = v_306;
      v_319 = v_313;
      v_320 = v_314;
      v_321 = v_315;
      v_327 = v_326;
    };
    p_2 = v_302;
    i_2 = v_307;
    ns_1_1_1 = v_319;
    ns_1_2 = v_320;
    ns_1_3 = v_321;
    nr_1 = v_327;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      ck_25_3_0_1 = ck_25_3;
      v_304 = 0;
      v_309 = 0;
      v_322 = true;
      v_323 = true;
      v_324 = true;
      v_329 = true;
    } else {
      ck_25_3_0_0 = ck_25_3;
      if (ck_25_3_0_0) {
        p_2_St_8_Reheat = 1000;
        i_2_St_8_Reheat = 3;
        nr_1_St_8_Reheat = false;
        ns_1_St_8_Reheat_1 = false;
        ns_1_St_8_Reheat_2 = false;
        ns_1_St_8_Reheat_3 = true;
        v_303 = p_2_St_8_Reheat;
        v_308 = i_2_St_8_Reheat;
        v_328 = nr_1_St_8_Reheat;
        v_316 = ns_1_St_8_Reheat_1;
        v_317 = ns_1_St_8_Reheat_2;
        v_318 = ns_1_St_8_Reheat_3;
      } else {
        p_2_St_8_Standby = 0;
        v_303 = p_2_St_8_Standby;
        i_2_St_8_Standby = 4;
        v_308 = i_2_St_8_Standby;
        nr_1_St_8_Standby = false;
        v_328 = nr_1_St_8_Standby;
        ns_1_St_8_Standby_1 = false;
        v_316 = ns_1_St_8_Standby_1;
        ns_1_St_8_Standby_2 = false;
        v_317 = ns_1_St_8_Standby_2;
        ns_1_St_8_Standby_3 = false;
        v_318 = ns_1_St_8_Standby_3;
      };
      v_304 = v_303;
      v_309 = v_308;
      v_322 = v_316;
      v_323 = v_317;
      v_324 = v_318;
      v_329 = v_328;
    };
    p_2 = v_304;
    i_2 = v_309;
    ns_1_1_1 = v_322;
    ns_1_2 = v_323;
    ns_1_3 = v_324;
    nr_1 = v_329;
  };
  _out->io = i_2;
  _out->p_oven = p_2;
  if (ns_1_1_1) {
    ns_1_2_1 = ns_1_2;
    if (ns_1_2_1) {
      ns_1_3_1_1 = ns_1_3;
    } else {
      ns_1_3_1_0 = ns_1_3;
    };
  } else {
    ns_1_2_0 = ns_1_2;
    if (ns_1_2_0) {
      ns_1_3_0_1 = ns_1_3;
    } else {
      ns_1_3_0_0 = ns_1_3;
    };
  };
  if (!(ck_25_1)) {
    if (!(ck_25_2_0)) {
      if (ck_25_3_0_0) {
        if (ns_1_St_8_Reheat_1) {
          ns_1_St_8_Reheat_2_1 = ns_1_St_8_Reheat_2;
          if (ns_1_St_8_Reheat_2_1) {
            ns_1_St_8_Reheat_3_1_1 = ns_1_St_8_Reheat_3;
          } else {
            ns_1_St_8_Reheat_3_1_0 = ns_1_St_8_Reheat_3;
          };
        } else {
          ns_1_St_8_Reheat_2_0 = ns_1_St_8_Reheat_2;
          if (ns_1_St_8_Reheat_2_0) {
            ns_1_St_8_Reheat_3_0_1 = ns_1_St_8_Reheat_3;
          } else {
            ns_1_St_8_Reheat_3_0_0 = ns_1_St_8_Reheat_3;
          };
        };
      } else {
        if (ns_1_St_8_Standby_1) {
          ns_1_St_8_Standby_2_1 = ns_1_St_8_Standby_2;
          if (ns_1_St_8_Standby_2_1) {
            ns_1_St_8_Standby_3_1_1 = ns_1_St_8_Standby_3;
          } else {
            ns_1_St_8_Standby_3_1_0 = ns_1_St_8_Standby_3;
          };
        } else {
          ns_1_St_8_Standby_2_0 = ns_1_St_8_Standby_2;
          if (ns_1_St_8_Standby_2_0) {
            ns_1_St_8_Standby_3_0_1 = ns_1_St_8_Standby_3;
          } else {
            ns_1_St_8_Standby_3_0_0 = ns_1_St_8_Standby_3;
          };
        };
      };
    };
  };
  if (s_8_1) {
    s_8_2_1 = s_8_2;
    if (s_8_2_1) {
      s_8_3_1_1 = s_8_3;
    } else {
      s_8_3_1_0 = s_8_3;
    };
  } else {
    s_8_2_0 = s_8_2;
    if (s_8_2_0) {
      s_8_3_0_1 = s_8_3;
    } else {
      s_8_3_0_0 = s_8_3;
    };
  };
  if (!(ck_24_1)) {
    if (!(ck_24_2_0)) {
      if (ck_24_3_0_0) {
        if (s_8_St_8_Reheat_1) {
          s_8_St_8_Reheat_2_1 = s_8_St_8_Reheat_2;
          if (s_8_St_8_Reheat_2_1) {
            s_8_St_8_Reheat_3_1_1 = s_8_St_8_Reheat_3;
          } else {
            s_8_St_8_Reheat_3_1_0 = s_8_St_8_Reheat_3;
          };
        } else {
          s_8_St_8_Reheat_2_0 = s_8_St_8_Reheat_2;
          if (s_8_St_8_Reheat_2_0) {
            s_8_St_8_Reheat_3_0_1 = s_8_St_8_Reheat_3;
          } else {
            s_8_St_8_Reheat_3_0_0 = s_8_St_8_Reheat_3;
          };
        };
      } else {
        if (s_8_St_8_Standby_1) {
          s_8_St_8_Standby_2_1 = s_8_St_8_Standby_2;
          if (s_8_St_8_Standby_2_1) {
            s_8_St_8_Standby_3_1_1 = s_8_St_8_Standby_3;
          } else {
            s_8_St_8_Standby_3_1_0 = s_8_St_8_Standby_3;
          };
        } else {
          s_8_St_8_Standby_2_0 = s_8_St_8_Standby_2;
          if (s_8_St_8_Standby_2_0) {
            s_8_St_8_Standby_3_0_1 = s_8_St_8_Standby_3;
          } else {
            s_8_St_8_Standby_3_0_0 = s_8_St_8_Standby_3;
          };
        };
      };
    };
  };
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      ck_22_3_1_1 = ck_22_3;
      if (ck_22_3_1_1) {
        if (s_2) {
          r_2_St_9_Off = true;
          s_9_St_9_Off_1 = false;
          s_9_St_9_Off_2 = false;
          s_9_St_9_Off_3 = false;
        } else {
          r_2_St_9_Off = self->pnr_2;
          s_9_St_9_Off_1 = true;
          s_9_St_9_Off_2 = true;
          s_9_St_9_Off_3 = true;
        };
        v_410 = r_2_St_9_Off;
        v_392 = s_9_St_9_Off_1;
        v_393 = s_9_St_9_Off_2;
        v_394 = s_9_St_9_Off_3;
        if (s_9_St_9_Off_1) {
          s_9_St_9_Off_2_1 = s_9_St_9_Off_2;
          if (s_9_St_9_Off_2_1) {
            s_9_St_9_Off_3_1_1 = s_9_St_9_Off_3;
          } else {
            s_9_St_9_Off_3_1_0 = s_9_St_9_Off_3;
          };
        } else {
          s_9_St_9_Off_2_0 = s_9_St_9_Off_2;
          if (s_9_St_9_Off_2_0) {
            s_9_St_9_Off_3_0_1 = s_9_St_9_Off_3;
          } else {
            s_9_St_9_Off_3_0_0 = s_9_St_9_Off_3;
          };
        };
      } else {
        if (e) {
          r_2_St_9_Rinse = true;
        } else {
          r_2_St_9_Rinse = self->pnr_2;
        };
        v_410 = r_2_St_9_Rinse;
        if (e) {
          s_9_St_9_Rinse_1 = true;
        } else {
          s_9_St_9_Rinse_1 = true;
        };
        v_392 = s_9_St_9_Rinse_1;
        if (e) {
          s_9_St_9_Rinse_2 = false;
        } else {
          s_9_St_9_Rinse_2 = true;
        };
        v_393 = s_9_St_9_Rinse_2;
        if (e) {
          s_9_St_9_Rinse_3 = false;
        } else {
          s_9_St_9_Rinse_3 = false;
        };
        v_394 = s_9_St_9_Rinse_3;
        if (s_9_St_9_Rinse_1) {
          s_9_St_9_Rinse_2_1 = s_9_St_9_Rinse_2;
          if (s_9_St_9_Rinse_2_1) {
            s_9_St_9_Rinse_3_1_1 = s_9_St_9_Rinse_3;
          } else {
            s_9_St_9_Rinse_3_1_0 = s_9_St_9_Rinse_3;
          };
        } else {
          s_9_St_9_Rinse_2_0 = s_9_St_9_Rinse_2;
          if (s_9_St_9_Rinse_2_0) {
            s_9_St_9_Rinse_3_0_1 = s_9_St_9_Rinse_3;
          } else {
            s_9_St_9_Rinse_3_0_0 = s_9_St_9_Rinse_3;
          };
        };
      };
      v_404 = v_392;
      v_405 = v_393;
      v_406 = v_394;
      v_412 = v_410;
    } else {
      ck_22_3_1_0 = ck_22_3;
      if (ck_22_3_1_0) {
        v_411 = true;
        v_395 = true;
        v_396 = true;
        v_397 = true;
      } else {
        if (e) {
          r_2_St_9_Spin = true;
        } else {
          r_2_St_9_Spin = self->pnr_2;
        };
        v_411 = r_2_St_9_Spin;
        if (e) {
          s_9_St_9_Spin_1 = true;
        } else {
          s_9_St_9_Spin_1 = true;
        };
        v_395 = s_9_St_9_Spin_1;
        if (e) {
          s_9_St_9_Spin_2 = true;
        } else {
          s_9_St_9_Spin_2 = false;
        };
        v_396 = s_9_St_9_Spin_2;
        if (e) {
          s_9_St_9_Spin_3 = true;
        } else {
          s_9_St_9_Spin_3 = false;
        };
        v_397 = s_9_St_9_Spin_3;
      };
      v_404 = v_395;
      v_405 = v_396;
      v_406 = v_397;
      v_412 = v_411;
      if (!(ck_22_3_1_0)) {
        if (s_9_St_9_Spin_1) {
          s_9_St_9_Spin_2_1 = s_9_St_9_Spin_2;
          if (s_9_St_9_Spin_2_1) {
            s_9_St_9_Spin_3_1_1 = s_9_St_9_Spin_3;
          } else {
            s_9_St_9_Spin_3_1_0 = s_9_St_9_Spin_3;
          };
        } else {
          s_9_St_9_Spin_2_0 = s_9_St_9_Spin_2;
          if (s_9_St_9_Spin_2_0) {
            s_9_St_9_Spin_3_0_1 = s_9_St_9_Spin_3;
          } else {
            s_9_St_9_Spin_3_0_0 = s_9_St_9_Spin_3;
          };
        };
      };
    };
    s_9_1 = v_404;
    s_9_2 = v_405;
    s_9_3 = v_406;
    r_2 = v_412;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      ck_22_3_0_1 = ck_22_3;
      if (ck_22_3_0_1) {
        if (c) {
          r_2_St_9_Standby = true;
        } else {
          r_2_St_9_Standby = self->pnr_2;
        };
        v_413 = r_2_St_9_Standby;
        if (c) {
          s_9_St_9_Standby_1 = false;
        } else {
          s_9_St_9_Standby_1 = false;
        };
        v_398 = s_9_St_9_Standby_1;
        if (c) {
          s_9_St_9_Standby_2 = true;
        } else {
          s_9_St_9_Standby_2 = true;
        };
        v_399 = s_9_St_9_Standby_2;
        if (c) {
          s_9_St_9_Standby_3 = false;
        } else {
          s_9_St_9_Standby_3 = true;
        };
        v_400 = s_9_St_9_Standby_3;
      } else {
        if (e) {
          r_2_St_9_Washing = true;
          s_9_St_9_Washing_1 = true;
          s_9_St_9_Washing_2 = true;
          s_9_St_9_Washing_3 = false;
        } else {
          r_2_St_9_Washing = self->pnr_2;
          s_9_St_9_Washing_1 = false;
          s_9_St_9_Washing_2 = true;
          s_9_St_9_Washing_3 = false;
        };
        v_413 = r_2_St_9_Washing;
        v_398 = s_9_St_9_Washing_1;
        v_399 = s_9_St_9_Washing_2;
        v_400 = s_9_St_9_Washing_3;
      };
      v_407 = v_398;
      v_408 = v_399;
      v_409 = v_400;
      v_415 = v_413;
    } else {
      ck_22_3_0_0 = ck_22_3;
      if (ck_22_3_0_0) {
        v_414 = true;
        v_401 = true;
        v_402 = true;
        v_403 = true;
      } else {
        v_113 = (e&&c);
        if (v_113) {
          v_115 = true;
          v_114_1 = false;
          v_114_2 = true;
          v_114_3 = false;
        } else {
          v_115 = self->pnr_2;
          v_114_1 = false;
          v_114_2 = false;
          v_114_3 = false;
        };
        v_111 = !(c);
        v_112 = (e&&v_111);
        if (v_112) {
          r_2_St_9_Waterfill = true;
        } else {
          r_2_St_9_Waterfill = v_115;
        };
        v_414 = r_2_St_9_Waterfill;
        if (v_112) {
          s_9_St_9_Waterfill_1 = false;
        } else {
          s_9_St_9_Waterfill_1 = v_114_1;
        };
        v_401 = s_9_St_9_Waterfill_1;
        if (v_112) {
          s_9_St_9_Waterfill_2 = true;
        } else {
          s_9_St_9_Waterfill_2 = v_114_2;
        };
        v_402 = s_9_St_9_Waterfill_2;
        if (v_112) {
          s_9_St_9_Waterfill_3 = true;
        } else {
          s_9_St_9_Waterfill_3 = v_114_3;
        };
        v_403 = s_9_St_9_Waterfill_3;
        if (v_114_1) {
          v_114_2_1 = v_114_2;
          if (v_114_2_1) {
            v_114_3_1_1 = v_114_3;
          } else {
            v_114_3_1_0 = v_114_3;
          };
        } else {
          v_114_2_0 = v_114_2;
          if (v_114_2_0) {
            v_114_3_0_1 = v_114_3;
          } else {
            v_114_3_0_0 = v_114_3;
          };
        };
        if (s_9_St_9_Waterfill_1) {
          s_9_St_9_Waterfill_2_1 = s_9_St_9_Waterfill_2;
          if (s_9_St_9_Waterfill_2_1) {
            s_9_St_9_Waterfill_3_1_1 = s_9_St_9_Waterfill_3;
          } else {
            s_9_St_9_Waterfill_3_1_0 = s_9_St_9_Waterfill_3;
          };
        } else {
          s_9_St_9_Waterfill_2_0 = s_9_St_9_Waterfill_2;
          if (s_9_St_9_Waterfill_2_0) {
            s_9_St_9_Waterfill_3_0_1 = s_9_St_9_Waterfill_3;
          } else {
            s_9_St_9_Waterfill_3_0_0 = s_9_St_9_Waterfill_3;
          };
        };
      };
      v_407 = v_401;
      v_408 = v_402;
      v_409 = v_403;
      v_415 = v_414;
    };
    s_9_1 = v_407;
    s_9_2 = v_408;
    s_9_3 = v_409;
    r_2 = v_415;
  };
  ck_23_1 = s_9_1;
  ck_23_2 = s_9_2;
  ck_23_3 = s_9_3;
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      ck_23_3_1_1 = ck_23_3;
      if (ck_23_3_1_1) {
        p_1_St_9_Off = 0;
        i_1_St_9_Off = 0;
        nr_2_St_9_Off = false;
        ns_2_St_9_Off_1 = true;
        ns_2_St_9_Off_2 = true;
        ns_2_St_9_Off_3 = true;
        v_353 = p_1_St_9_Off;
        v_359 = i_1_St_9_Off;
        v_383 = nr_2_St_9_Off;
        v_365 = ns_2_St_9_Off_1;
        v_366 = ns_2_St_9_Off_2;
        v_367 = ns_2_St_9_Off_3;
        if (ns_2_St_9_Off_1) {
          ns_2_St_9_Off_2_1 = ns_2_St_9_Off_2;
          if (ns_2_St_9_Off_2_1) {
            ns_2_St_9_Off_3_1_1 = ns_2_St_9_Off_3;
          } else {
            ns_2_St_9_Off_3_1_0 = ns_2_St_9_Off_3;
          };
        } else {
          ns_2_St_9_Off_2_0 = ns_2_St_9_Off_2;
          if (ns_2_St_9_Off_2_0) {
            ns_2_St_9_Off_3_0_1 = ns_2_St_9_Off_3;
          } else {
            ns_2_St_9_Off_3_0_0 = ns_2_St_9_Off_3;
          };
        };
      } else {
        p_1_St_9_Rinse = 200;
        v_353 = p_1_St_9_Rinse;
        i_1_St_9_Rinse = 3;
        v_359 = i_1_St_9_Rinse;
        nr_2_St_9_Rinse = false;
        v_383 = nr_2_St_9_Rinse;
        ns_2_St_9_Rinse_1 = true;
        v_365 = ns_2_St_9_Rinse_1;
        ns_2_St_9_Rinse_2 = true;
        v_366 = ns_2_St_9_Rinse_2;
        ns_2_St_9_Rinse_3 = false;
        v_367 = ns_2_St_9_Rinse_3;
        if (ns_2_St_9_Rinse_1) {
          ns_2_St_9_Rinse_2_1 = ns_2_St_9_Rinse_2;
          if (ns_2_St_9_Rinse_2_1) {
            ns_2_St_9_Rinse_3_1_1 = ns_2_St_9_Rinse_3;
          } else {
            ns_2_St_9_Rinse_3_1_0 = ns_2_St_9_Rinse_3;
          };
        } else {
          ns_2_St_9_Rinse_2_0 = ns_2_St_9_Rinse_2;
          if (ns_2_St_9_Rinse_2_0) {
            ns_2_St_9_Rinse_3_0_1 = ns_2_St_9_Rinse_3;
          } else {
            ns_2_St_9_Rinse_3_0_0 = ns_2_St_9_Rinse_3;
          };
        };
      };
      v_355 = v_353;
      v_361 = v_359;
      v_377 = v_365;
      v_378 = v_366;
      v_379 = v_367;
      v_385 = v_383;
    } else {
      ck_23_3_1_0 = ck_23_3;
      if (ck_23_3_1_0) {
        v_354 = 0;
        v_360 = 0;
        v_384 = true;
        v_368 = true;
        v_369 = true;
        v_370 = true;
      } else {
        p_1_St_9_Spin = 800;
        v_354 = p_1_St_9_Spin;
        i_1_St_9_Spin = 4;
        v_360 = i_1_St_9_Spin;
        nr_2_St_9_Spin = false;
        v_384 = nr_2_St_9_Spin;
        ns_2_St_9_Spin_1 = true;
        v_368 = ns_2_St_9_Spin_1;
        ns_2_St_9_Spin_2 = false;
        v_369 = ns_2_St_9_Spin_2;
        ns_2_St_9_Spin_3 = false;
        v_370 = ns_2_St_9_Spin_3;
      };
      v_355 = v_354;
      v_361 = v_360;
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_384;
      if (!(ck_23_3_1_0)) {
        if (ns_2_St_9_Spin_1) {
          ns_2_St_9_Spin_2_1 = ns_2_St_9_Spin_2;
          if (ns_2_St_9_Spin_2_1) {
            ns_2_St_9_Spin_3_1_1 = ns_2_St_9_Spin_3;
          } else {
            ns_2_St_9_Spin_3_1_0 = ns_2_St_9_Spin_3;
          };
        } else {
          ns_2_St_9_Spin_2_0 = ns_2_St_9_Spin_2;
          if (ns_2_St_9_Spin_2_0) {
            ns_2_St_9_Spin_3_0_1 = ns_2_St_9_Spin_3;
          } else {
            ns_2_St_9_Spin_3_0_0 = ns_2_St_9_Spin_3;
          };
        };
      };
    };
    p_1 = v_355;
    i_1 = v_361;
    ns_2_1_2 = v_377;
    ns_2_2 = v_378;
    ns_2_3 = v_379;
    nr_2 = v_385;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      ck_23_3_0_1 = ck_23_3;
      if (ck_23_3_0_1) {
        p_1_St_9_Standby = 0;
        v_356 = p_1_St_9_Standby;
        i_1_St_9_Standby = 5;
        v_362 = i_1_St_9_Standby;
        nr_2_St_9_Standby = false;
        v_386 = nr_2_St_9_Standby;
        ns_2_St_9_Standby_1 = false;
        v_371 = ns_2_St_9_Standby_1;
        ns_2_St_9_Standby_2 = true;
        v_372 = ns_2_St_9_Standby_2;
        ns_2_St_9_Standby_3 = true;
        v_373 = ns_2_St_9_Standby_3;
      } else {
        p_1_St_9_Washing = 250;
        i_1_St_9_Washing = 2;
        nr_2_St_9_Washing = false;
        ns_2_St_9_Washing_1 = false;
        ns_2_St_9_Washing_2 = true;
        ns_2_St_9_Washing_3 = false;
        v_356 = p_1_St_9_Washing;
        v_362 = i_1_St_9_Washing;
        v_386 = nr_2_St_9_Washing;
        v_371 = ns_2_St_9_Washing_1;
        v_372 = ns_2_St_9_Washing_2;
        v_373 = ns_2_St_9_Washing_3;
      };
      v_358 = v_356;
      v_364 = v_362;
      v_380 = v_371;
      v_381 = v_372;
      v_382 = v_373;
      v_388 = v_386;
    } else {
      ck_23_3_0_0 = ck_23_3;
      if (ck_23_3_0_0) {
        v_357 = 0;
        v_363 = 0;
        v_387 = true;
        v_374 = true;
        v_375 = true;
        v_376 = true;
      } else {
        p_1_St_9_Waterfill = 15;
        v_357 = p_1_St_9_Waterfill;
        i_1_St_9_Waterfill = 1;
        v_363 = i_1_St_9_Waterfill;
        nr_2_St_9_Waterfill = false;
        v_387 = nr_2_St_9_Waterfill;
        ns_2_St_9_Waterfill_1 = false;
        v_374 = ns_2_St_9_Waterfill_1;
        ns_2_St_9_Waterfill_2 = false;
        v_375 = ns_2_St_9_Waterfill_2;
        ns_2_St_9_Waterfill_3 = false;
        v_376 = ns_2_St_9_Waterfill_3;
        if (ns_2_St_9_Waterfill_1) {
          ns_2_St_9_Waterfill_2_1 = ns_2_St_9_Waterfill_2;
          if (ns_2_St_9_Waterfill_2_1) {
            ns_2_St_9_Waterfill_3_1_1 = ns_2_St_9_Waterfill_3;
          } else {
            ns_2_St_9_Waterfill_3_1_0 = ns_2_St_9_Waterfill_3;
          };
        } else {
          ns_2_St_9_Waterfill_2_0 = ns_2_St_9_Waterfill_2;
          if (ns_2_St_9_Waterfill_2_0) {
            ns_2_St_9_Waterfill_3_0_1 = ns_2_St_9_Waterfill_3;
          } else {
            ns_2_St_9_Waterfill_3_0_0 = ns_2_St_9_Waterfill_3;
          };
        };
      };
      v_358 = v_357;
      v_364 = v_363;
      v_380 = v_374;
      v_381 = v_375;
      v_382 = v_376;
      v_388 = v_387;
    };
    p_1 = v_358;
    i_1 = v_364;
    ns_2_1_2 = v_380;
    ns_2_2 = v_381;
    ns_2_3 = v_382;
    nr_2 = v_388;
  };
  _out->iws = i_1;
  _out->p_wash = p_1;
  v_58 = (_out->p_wash+_out->p_oven);
  if (ns_2_1_2) {
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
  if (!(ck_23_1)) {
    if (ck_23_2_0) {
      if (ck_23_3_0_1) {
        if (ns_2_St_9_Standby_1) {
          ns_2_St_9_Standby_2_1 = ns_2_St_9_Standby_2;
          if (ns_2_St_9_Standby_2_1) {
            ns_2_St_9_Standby_3_1_1 = ns_2_St_9_Standby_3;
          } else {
            ns_2_St_9_Standby_3_1_0 = ns_2_St_9_Standby_3;
          };
        } else {
          ns_2_St_9_Standby_2_0 = ns_2_St_9_Standby_2;
          if (ns_2_St_9_Standby_2_0) {
            ns_2_St_9_Standby_3_0_1 = ns_2_St_9_Standby_3;
          } else {
            ns_2_St_9_Standby_3_0_0 = ns_2_St_9_Standby_3;
          };
        };
      } else {
        if (ns_2_St_9_Washing_1) {
          ns_2_St_9_Washing_2_1 = ns_2_St_9_Washing_2;
          if (ns_2_St_9_Washing_2_1) {
            ns_2_St_9_Washing_3_1_1 = ns_2_St_9_Washing_3;
          } else {
            ns_2_St_9_Washing_3_1_0 = ns_2_St_9_Washing_3;
          };
        } else {
          ns_2_St_9_Washing_2_0 = ns_2_St_9_Washing_2;
          if (ns_2_St_9_Washing_2_0) {
            ns_2_St_9_Washing_3_0_1 = ns_2_St_9_Washing_3;
          } else {
            ns_2_St_9_Washing_3_0_0 = ns_2_St_9_Washing_3;
          };
        };
      };
    };
  };
  if (s_9_1) {
    s_9_2_1 = s_9_2;
    if (s_9_2_1) {
      s_9_3_1_1 = s_9_3;
    } else {
      s_9_3_1_0 = s_9_3;
    };
  } else {
    s_9_2_0 = s_9_2;
    if (s_9_2_0) {
      s_9_3_0_1 = s_9_3;
    } else {
      s_9_3_0_0 = s_9_3;
    };
  };
  if (!(ck_22_1)) {
    if (ck_22_2_0) {
      if (ck_22_3_0_1) {
        if (s_9_St_9_Standby_1) {
          s_9_St_9_Standby_2_1 = s_9_St_9_Standby_2;
          if (s_9_St_9_Standby_2_1) {
            s_9_St_9_Standby_3_1_1 = s_9_St_9_Standby_3;
          } else {
            s_9_St_9_Standby_3_1_0 = s_9_St_9_Standby_3;
          };
        } else {
          s_9_St_9_Standby_2_0 = s_9_St_9_Standby_2;
          if (s_9_St_9_Standby_2_0) {
            s_9_St_9_Standby_3_0_1 = s_9_St_9_Standby_3;
          } else {
            s_9_St_9_Standby_3_0_0 = s_9_St_9_Standby_3;
          };
        };
      } else {
        if (s_9_St_9_Washing_1) {
          s_9_St_9_Washing_2_1 = s_9_St_9_Washing_2;
          if (s_9_St_9_Washing_2_1) {
            s_9_St_9_Washing_3_1_1 = s_9_St_9_Washing_3;
          } else {
            s_9_St_9_Washing_3_1_0 = s_9_St_9_Washing_3;
          };
        } else {
          s_9_St_9_Washing_2_0 = s_9_St_9_Washing_2;
          if (s_9_St_9_Washing_2_0) {
            s_9_St_9_Washing_3_0_1 = s_9_St_9_Washing_3;
          } else {
            s_9_St_9_Washing_3_0_0 = s_9_St_9_Washing_3;
          };
        };
      };
    };
  };
  if (self->ck_20_1) {
    if (presence) {
      r_3_St_10_Empty = true;
      s_10_St_10_Empty_1 = false;
    } else {
      r_3_St_10_Empty = self->pnr_3;
      s_10_St_10_Empty_1 = true;
    };
    r_3 = r_3_St_10_Empty;
    s_10_1 = s_10_St_10_Empty_1;
  } else {
    v_110 = !(presence);
    if (v_110) {
      r_3_St_10_Ocupied = true;
    } else {
      r_3_St_10_Ocupied = self->pnr_3;
    };
    r_3 = r_3_St_10_Ocupied;
    if (v_110) {
      s_10_St_10_Ocupied_1 = true;
    } else {
      s_10_St_10_Ocupied_1 = false;
    };
    s_10_1 = s_10_St_10_Ocupied_1;
  };
  ck_21_1 = s_10_1;
  if (ck_21_1) {
    room_oc_St_10_Empty = false;
    nr_3_St_10_Empty = false;
    ns_3_St_10_Empty_1 = true;
    room_oc = room_oc_St_10_Empty;
    nr_3 = nr_3_St_10_Empty;
    ns_3_1 = ns_3_St_10_Empty_1;
  } else {
    room_oc_St_10_Ocupied = true;
    room_oc = room_oc_St_10_Ocupied;
    nr_3_St_10_Ocupied = false;
    nr_3 = nr_3_St_10_Ocupied;
    ns_3_St_10_Ocupied_1 = false;
    ns_3_1 = ns_3_St_10_Ocupied_1;
  };
  _out->ocupado = room_oc;
  v_56 = !(_out->ocupado);
  if (self->ck_18_1) {
    v_107 = !(c2_2);
    v_108 = (botao_1&&v_107);
    v_109 = (v_108||c1_2);
    if (v_109) {
      r_4_St_11_Desligado = true;
      s_11_St_11_Desligado_1 = false;
    } else {
      r_4_St_11_Desligado = self->pnr_4;
      s_11_St_11_Desligado_1 = true;
    };
    r_4 = r_4_St_11_Desligado;
    s_11_1 = s_11_St_11_Desligado_1;
  } else {
    v_104 = !(c1_2);
    v_105 = (botao_1&&v_104);
    v_106 = (v_105||c2_2);
    if (v_106) {
      r_4_St_11_Ligado = true;
    } else {
      r_4_St_11_Ligado = self->pnr_4;
    };
    r_4 = r_4_St_11_Ligado;
    if (v_106) {
      s_11_St_11_Ligado_1 = true;
    } else {
      s_11_St_11_Ligado_1 = false;
    };
    s_11_1 = s_11_St_11_Ligado_1;
  };
  ck_19_1 = s_11_1;
  if (ck_19_1) {
    s_1_St_11_Desligado = false;
    nr_4_St_11_Desligado = false;
    ns_4_St_11_Desligado_1 = true;
    s_1 = s_1_St_11_Desligado;
    nr_4 = nr_4_St_11_Desligado;
    ns_4_1 = ns_4_St_11_Desligado_1;
  } else {
    s_1_St_11_Ligado = true;
    s_1 = s_1_St_11_Ligado;
    nr_4_St_11_Ligado = false;
    nr_4 = nr_4_St_11_Ligado;
    ns_4_St_11_Ligado_1 = false;
    ns_4_1 = ns_4_St_11_Ligado_1;
  };
  _out->tv = s_1;
  v_57 = (v_56||_out->tv);
  if (self->ck_16_1) {
    v_101 = !(c2_1);
    v_102 = (botao&&v_101);
    v_103 = (v_102||c1_1);
    if (v_103) {
      r_5_St_12_Desligado = true;
      s_12_St_12_Desligado_1 = false;
    } else {
      r_5_St_12_Desligado = self->pnr_5;
      s_12_St_12_Desligado_1 = true;
    };
    r_5 = r_5_St_12_Desligado;
    s_12_1 = s_12_St_12_Desligado_1;
  } else {
    v_98 = !(c1_1);
    v_99 = (botao&&v_98);
    v_100 = (v_99||c2_1);
    if (v_100) {
      r_5_St_12_Ligado = true;
    } else {
      r_5_St_12_Ligado = self->pnr_5;
    };
    r_5 = r_5_St_12_Ligado;
    if (v_100) {
      s_12_St_12_Ligado_1 = true;
    } else {
      s_12_St_12_Ligado_1 = false;
    };
    s_12_1 = s_12_St_12_Ligado_1;
  };
  ck_17_1 = s_12_1;
  if (ck_17_1) {
    s_St_12_Desligado = false;
    nr_5_St_12_Desligado = false;
    ns_5_St_12_Desligado_1 = true;
    s = s_St_12_Desligado;
    nr_5 = nr_5_St_12_Desligado;
    ns_5_1 = ns_5_St_12_Desligado_1;
  } else {
    s_St_12_Ligado = true;
    s = s_St_12_Ligado;
    nr_5_St_12_Ligado = false;
    nr_5 = nr_5_St_12_Ligado;
    ns_5_St_12_Ligado_1 = false;
    ns_5_1 = ns_5_St_12_Ligado_1;
  };
  _out->lamp = s;
  v = (_out->lamp||_out->tv);
  v_50 = !(v);
  r1 = (v_57||_out->lamp);
  if (self->ck_14_1) {
    v_97 = (push_1&&c_door_1);
    if (v_97) {
      r_6_St_13_Closed = true;
      s_13_St_13_Closed_1 = false;
    } else {
      r_6_St_13_Closed = self->pnr_6;
      s_13_St_13_Closed_1 = true;
    };
    r_6 = r_6_St_13_Closed;
    s_13_1 = s_13_St_13_Closed_1;
  } else {
    v_95 = !(c_door_1);
    v_96 = (push_1||v_95);
    if (v_96) {
      r_6_St_13_Open = true;
    } else {
      r_6_St_13_Open = self->pnr_6;
    };
    r_6 = r_6_St_13_Open;
    if (v_96) {
      s_13_St_13_Open_1 = true;
    } else {
      s_13_St_13_Open_1 = false;
    };
    s_13_1 = s_13_St_13_Open_1;
  };
  ck_15_1 = s_13_1;
  if (ck_15_1) {
    door_open_1_St_13_Closed = false;
    nr_6_St_13_Closed = false;
    ns_6_St_13_Closed_1 = true;
    door_open_1 = door_open_1_St_13_Closed;
    nr_6 = nr_6_St_13_Closed;
    ns_6_1 = ns_6_St_13_Closed_1;
  } else {
    door_open_1_St_13_Open = true;
    door_open_1 = door_open_1_St_13_Open;
    nr_6_St_13_Open = false;
    nr_6 = nr_6_St_13_Open;
    ns_6_St_13_Open_1 = false;
    ns_6_1 = ns_6_St_13_Open_1;
  };
  _out->janela = door_open_1;
  if (self->ck_12_1) {
    v_94 = (push&&c_door);
    if (v_94) {
      r_7_St_14_Closed = true;
      s_14_St_14_Closed_1 = false;
    } else {
      r_7_St_14_Closed = self->pnr_7;
      s_14_St_14_Closed_1 = true;
    };
    r_7 = r_7_St_14_Closed;
    s_14_1 = s_14_St_14_Closed_1;
  } else {
    v_92 = !(c_door);
    v_93 = (push||v_92);
    if (v_93) {
      r_7_St_14_Open = true;
    } else {
      r_7_St_14_Open = self->pnr_7;
    };
    r_7 = r_7_St_14_Open;
    if (v_93) {
      s_14_St_14_Open_1 = true;
    } else {
      s_14_St_14_Open_1 = false;
    };
    s_14_1 = s_14_St_14_Open_1;
  };
  ck_13_1 = s_14_1;
  if (ck_13_1) {
    door_open_St_14_Closed = false;
    nr_7_St_14_Closed = false;
    ns_7_St_14_Closed_1 = true;
    door_open = door_open_St_14_Closed;
    nr_7 = nr_7_St_14_Closed;
    ns_7_1 = ns_7_St_14_Closed_1;
  } else {
    door_open_St_14_Open = true;
    door_open = door_open_St_14_Open;
    nr_7_St_14_Open = false;
    nr_7 = nr_7_St_14_Open;
    ns_7_St_14_Open_1 = false;
    ns_7_1 = ns_7_St_14_Open_1;
  };
  _out->porta = door_open;
  v_52 = (_out->porta||_out->janela);
  v_53 = !(v_52);
  v_54 = (_out->porta||_out->janela);
  v_55 = !(v_54);
  r2 = (_out->ocupado||v_55);
  v_67 = (r1&&r2);
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      v_79 = (up2&&c2);
      if (v_79) {
        v_81 = true;
        v_80_1 = false;
        v_80_2 = true;
      } else {
        v_81 = self->pnr_8;
        v_80_1 = true;
        v_80_2 = true;
      };
      v_77 = !(c1);
      v_78 = (down1||v_77);
      if (v_78) {
        r_8_St_15_Eco = true;
      } else {
        r_8_St_15_Eco = v_81;
      };
      v_432 = r_8_St_15_Eco;
      if (v_78) {
        s_15_St_15_Eco_1 = true;
      } else {
        s_15_St_15_Eco_1 = v_80_1;
      };
      v_428 = s_15_St_15_Eco_1;
      if (v_78) {
        s_15_St_15_Eco_2 = false;
      } else {
        s_15_St_15_Eco_2 = v_80_2;
      };
      v_429 = s_15_St_15_Eco_2;
      if (v_80_1) {
        v_80_2_1 = v_80_2;
      } else {
        v_80_2_0 = v_80_2;
      };
      if (s_15_St_15_Eco_1) {
        s_15_St_15_Eco_2_1 = s_15_St_15_Eco_2;
      } else {
        s_15_St_15_Eco_2_0 = s_15_St_15_Eco_2;
      };
    } else {
      v_84 = !(c1);
      v_85 = (down1||v_84);
      if (v_85) {
        v_87 = true;
        v_86_1 = false;
        v_86_2 = false;
      } else {
        v_87 = self->pnr_8;
        v_86_1 = true;
        v_86_2 = false;
      };
      v_83 = (up2&&c2);
      if (v_83) {
        v_89 = true;
        v_88_1 = false;
        v_88_2 = true;
      } else {
        v_89 = v_87;
        v_88_1 = v_86_1;
        v_88_2 = v_86_2;
      };
      v_82 = (up1&&c1);
      if (v_82) {
        r_8_St_15_Frostprotection = true;
        s_15_St_15_Frostprotection_1 = true;
        s_15_St_15_Frostprotection_2 = true;
      } else {
        r_8_St_15_Frostprotection = v_89;
        s_15_St_15_Frostprotection_1 = v_88_1;
        s_15_St_15_Frostprotection_2 = v_88_2;
      };
      v_432 = r_8_St_15_Frostprotection;
      v_428 = s_15_St_15_Frostprotection_1;
      v_429 = s_15_St_15_Frostprotection_2;
      if (v_86_1) {
        v_86_2_1 = v_86_2;
      } else {
        v_86_2_0 = v_86_2;
      };
      if (v_88_1) {
        v_88_2_1 = v_88_2;
      } else {
        v_88_2_0 = v_88_2;
      };
      if (s_15_St_15_Frostprotection_1) {
        s_15_St_15_Frostprotection_2_1 = s_15_St_15_Frostprotection_2;
      } else {
        s_15_St_15_Frostprotection_2_0 = s_15_St_15_Frostprotection_2;
      };
    };
    s_15_1 = v_428;
    s_15_2 = v_429;
    r_8 = v_432;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      v_73 = !(c2);
      v_74 = (down2||v_73);
      if (v_74) {
        v_76 = true;
        v_75_1 = true;
        v_75_2 = false;
      } else {
        v_76 = self->pnr_8;
        v_75_1 = false;
        v_75_2 = true;
      };
      v_71 = !(c1);
      v_72 = (down1||v_71);
      if (v_72) {
        r_8_St_15_High = true;
      } else {
        r_8_St_15_High = v_76;
      };
      v_433 = r_8_St_15_High;
      if (v_72) {
        s_15_St_15_High_1 = true;
      } else {
        s_15_St_15_High_1 = v_75_1;
      };
      v_430 = s_15_St_15_High_1;
      if (v_72) {
        s_15_St_15_High_2 = true;
      } else {
        s_15_St_15_High_2 = v_75_2;
      };
      v_431 = s_15_St_15_High_2;
    } else {
      v_90 = !(c1);
      v_91 = (up1||v_90);
      if (v_91) {
        r_8_St_15_Off = true;
        s_15_St_15_Off_1 = true;
        s_15_St_15_Off_2 = false;
      } else {
        r_8_St_15_Off = self->pnr_8;
        s_15_St_15_Off_1 = false;
        s_15_St_15_Off_2 = false;
      };
      v_433 = r_8_St_15_Off;
      v_430 = s_15_St_15_Off_1;
      v_431 = s_15_St_15_Off_2;
    };
    s_15_1 = v_430;
    s_15_2 = v_431;
    r_8 = v_433;
  };
  ck_11_1 = s_15_1;
  ck_11_2 = s_15_2;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      p_St_15_Eco = 1500;
      v_416 = p_St_15_Eco;
      i_St_15_Eco = 2;
      v_418 = i_St_15_Eco;
      nr_8_St_15_Eco = false;
      v_424 = nr_8_St_15_Eco;
      ns_8_St_15_Eco_1 = true;
      v_420 = ns_8_St_15_Eco_1;
      ns_8_St_15_Eco_2 = true;
      v_421 = ns_8_St_15_Eco_2;
      if (ns_8_St_15_Eco_1) {
        ns_8_St_15_Eco_2_1 = ns_8_St_15_Eco_2;
      } else {
        ns_8_St_15_Eco_2_0 = ns_8_St_15_Eco_2;
      };
    } else {
      p_St_15_Frostprotection = 300;
      i_St_15_Frostprotection = 1;
      nr_8_St_15_Frostprotection = false;
      ns_8_St_15_Frostprotection_1 = true;
      ns_8_St_15_Frostprotection_2 = false;
      v_416 = p_St_15_Frostprotection;
      v_418 = i_St_15_Frostprotection;
      v_424 = nr_8_St_15_Frostprotection;
      v_420 = ns_8_St_15_Frostprotection_1;
      v_421 = ns_8_St_15_Frostprotection_2;
      if (ns_8_St_15_Frostprotection_1) {
        ns_8_St_15_Frostprotection_2_1 = ns_8_St_15_Frostprotection_2;
      } else {
        ns_8_St_15_Frostprotection_2_0 = ns_8_St_15_Frostprotection_2;
      };
    };
    p = v_416;
    i = v_418;
    ns_8_1 = v_420;
    ns_8_2 = v_421;
    nr_8 = v_424;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      p_St_15_High = 2000;
      v_417 = p_St_15_High;
      i_St_15_High = 3;
      v_419 = i_St_15_High;
      nr_8_St_15_High = false;
      v_425 = nr_8_St_15_High;
      ns_8_St_15_High_1 = false;
      v_422 = ns_8_St_15_High_1;
      ns_8_St_15_High_2 = true;
      v_423 = ns_8_St_15_High_2;
    } else {
      p_St_15_Off = 0;
      i_St_15_Off = 0;
      nr_8_St_15_Off = false;
      ns_8_St_15_Off_1 = false;
      ns_8_St_15_Off_2 = false;
      v_417 = p_St_15_Off;
      v_419 = i_St_15_Off;
      v_425 = nr_8_St_15_Off;
      v_422 = ns_8_St_15_Off_1;
      v_423 = ns_8_St_15_Off_2;
    };
    p = v_417;
    i = v_419;
    ns_8_1 = v_422;
    ns_8_2 = v_423;
    nr_8 = v_425;
  };
  _out->rad_state = i;
  off_frost = (_out->rad_state<=1);
  v_51 = (v_50&&off_frost);
  r4 = (_out->ocupado||v_51);
  r3 = (v_53||off_frost);
  v_68 = (v_67&&r3);
  v_69 = (v_68&&r4);
  _out->rad_pot = p;
  total = (v_58+_out->rad_pot);
  if (ck_1) {
    if (ck_2_1) {
      r5_COM = (total<=7000);
      v_281 = r5_COM;
    } else {
      r5_ECO = (total<=5000);
      v_281 = r5_ECO;
    };
    r5 = v_281;
  } else {
    if (ck_2_0) {
      v_280 = true;
    } else {
      r5_MIN = (total<=3000);
      v_280 = r5_MIN;
    };
    r5 = v_280;
  };
  v_70 = (v_69&&r5);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (!(ck_11_1)) {
    if (ck_11_2_0) {
      if (ns_8_St_15_High_1) {
        ns_8_St_15_High_2_1 = ns_8_St_15_High_2;
      } else {
        ns_8_St_15_High_2_0 = ns_8_St_15_High_2;
      };
    } else {
      if (ns_8_St_15_Off_1) {
        ns_8_St_15_Off_2_1 = ns_8_St_15_Off_2;
      } else {
        ns_8_St_15_Off_2_0 = ns_8_St_15_Off_2;
      };
    };
  };
  if (s_15_1) {
    s_15_2_1 = s_15_2;
  } else {
    s_15_2_0 = s_15_2;
  };
  if (!(ck_10_1)) {
    if (ck_10_2_0) {
      if (v_75_1) {
        v_75_2_1 = v_75_2;
      } else {
        v_75_2_0 = v_75_2;
      };
      if (s_15_St_15_High_1) {
        s_15_St_15_High_2_1 = s_15_St_15_High_2;
      } else {
        s_15_St_15_High_2_0 = s_15_St_15_High_2;
      };
    } else {
      if (s_15_St_15_Off_1) {
        s_15_St_15_Off_2_1 = s_15_St_15_Off_2;
      } else {
        s_15_St_15_Off_2_0 = s_15_St_15_Off_2;
      };
    };
  };
  self->v_288 = ns_1_1;
  self->v_289 = ns_2_1;
  self->pnr = nr;
  self->pnr_1 = nr_1;
  self->v_330 = ns_1_1_1;
  self->v_331 = ns_1_2;
  self->v_332 = ns_1_3;
  self->pnr_2 = nr_2;
  self->v_389 = ns_2_1_2;
  self->v_390 = ns_2_2;
  self->v_391 = ns_2_3;
  self->pnr_3 = nr_3;
  self->ck_20_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_18_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_16_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_14_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_12_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->v_426 = ns_8_1;
  self->v_427 = ns_8_2;;
}

