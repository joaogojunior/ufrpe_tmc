/* --- Generated the 3/6/2018 at 13:56 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p3_joao.h"

void P3_joao__washingmachine_reset(P3_joao__washingmachine_mem* self) {
  self->pnr = false;
  self->v_163 = true;
  self->v_164 = true;
  self->v_165 = true;
}

void P3_joao__washingmachine_step(int e, int s, int c,
                                  P3_joao__washingmachine_out* _out,
                                  P3_joao__washingmachine_mem* self) {
  
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
  ck_1_4 = self->v_163;
  ck_2 = self->v_164;
  ck_3 = self->v_165;
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
        v_184 = r_St_Off;
        v_166 = s_4_St_Off_1;
        v_167 = s_4_St_Off_2;
        v_168 = s_4_St_Off_3;
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
        v_184 = r_St_Rinse;
        if (e) {
          s_4_St_Rinse_1 = true;
        } else {
          s_4_St_Rinse_1 = true;
        };
        v_166 = s_4_St_Rinse_1;
        if (e) {
          s_4_St_Rinse_2 = false;
        } else {
          s_4_St_Rinse_2 = true;
        };
        v_167 = s_4_St_Rinse_2;
        if (e) {
          s_4_St_Rinse_3 = false;
        } else {
          s_4_St_Rinse_3 = false;
        };
        v_168 = s_4_St_Rinse_3;
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
      v_178 = v_166;
      v_179 = v_167;
      v_180 = v_168;
      v_186 = v_184;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_185 = true;
        v_169 = true;
        v_170 = true;
        v_171 = true;
      } else {
        if (e) {
          r_St_Spin = true;
        } else {
          r_St_Spin = self->pnr;
        };
        v_185 = r_St_Spin;
        if (e) {
          s_4_St_Spin_1 = true;
        } else {
          s_4_St_Spin_1 = true;
        };
        v_169 = s_4_St_Spin_1;
        if (e) {
          s_4_St_Spin_2 = true;
        } else {
          s_4_St_Spin_2 = false;
        };
        v_170 = s_4_St_Spin_2;
        if (e) {
          s_4_St_Spin_3 = true;
        } else {
          s_4_St_Spin_3 = false;
        };
        v_171 = s_4_St_Spin_3;
      };
      v_178 = v_169;
      v_179 = v_170;
      v_180 = v_171;
      v_186 = v_185;
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
    s_4_1 = v_178;
    s_4_2 = v_179;
    s_4_3 = v_180;
    r = v_186;
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
        v_187 = r_St_Standby;
        if (c) {
          s_4_St_Standby_1 = false;
        } else {
          s_4_St_Standby_1 = false;
        };
        v_172 = s_4_St_Standby_1;
        if (c) {
          s_4_St_Standby_2 = true;
        } else {
          s_4_St_Standby_2 = true;
        };
        v_173 = s_4_St_Standby_2;
        if (c) {
          s_4_St_Standby_3 = false;
        } else {
          s_4_St_Standby_3 = true;
        };
        v_174 = s_4_St_Standby_3;
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
        v_187 = r_St_Washing;
        v_172 = s_4_St_Washing_1;
        v_173 = s_4_St_Washing_2;
        v_174 = s_4_St_Washing_3;
      };
      v_181 = v_172;
      v_182 = v_173;
      v_183 = v_174;
      v_189 = v_187;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_188 = true;
        v_175 = true;
        v_176 = true;
        v_177 = true;
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
        v_188 = r_St_Waterfill;
        if (v_1) {
          s_4_St_Waterfill_1 = false;
        } else {
          s_4_St_Waterfill_1 = v_3_1;
        };
        v_175 = s_4_St_Waterfill_1;
        if (v_1) {
          s_4_St_Waterfill_2 = true;
        } else {
          s_4_St_Waterfill_2 = v_3_2;
        };
        v_176 = s_4_St_Waterfill_2;
        if (v_1) {
          s_4_St_Waterfill_3 = true;
        } else {
          s_4_St_Waterfill_3 = v_3_3;
        };
        v_177 = s_4_St_Waterfill_3;
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
      v_181 = v_175;
      v_182 = v_176;
      v_183 = v_177;
      v_189 = v_188;
    };
    s_4_1 = v_181;
    s_4_2 = v_182;
    s_4_3 = v_183;
    r = v_189;
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
        v_127 = p_St_Off;
        v_133 = i_St_Off;
        v_157 = nr_St_Off;
        v_139 = ns_St_Off_1;
        v_140 = ns_St_Off_2;
        v_141 = ns_St_Off_3;
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
        v_127 = p_St_Rinse;
        i_St_Rinse = 3;
        v_133 = i_St_Rinse;
        nr_St_Rinse = false;
        v_157 = nr_St_Rinse;
        ns_St_Rinse_1 = true;
        v_139 = ns_St_Rinse_1;
        ns_St_Rinse_2 = true;
        v_140 = ns_St_Rinse_2;
        ns_St_Rinse_3 = false;
        v_141 = ns_St_Rinse_3;
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
      v_129 = v_127;
      v_135 = v_133;
      v_151 = v_139;
      v_152 = v_140;
      v_153 = v_141;
      v_159 = v_157;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_128 = 0;
        v_134 = 0;
        v_158 = true;
        v_142 = true;
        v_143 = true;
        v_144 = true;
      } else {
        p_St_Spin = 800;
        v_128 = p_St_Spin;
        i_St_Spin = 4;
        v_134 = i_St_Spin;
        nr_St_Spin = false;
        v_158 = nr_St_Spin;
        ns_St_Spin_1 = true;
        v_142 = ns_St_Spin_1;
        ns_St_Spin_2 = false;
        v_143 = ns_St_Spin_2;
        ns_St_Spin_3 = false;
        v_144 = ns_St_Spin_3;
      };
      v_129 = v_128;
      v_135 = v_134;
      v_151 = v_142;
      v_152 = v_143;
      v_153 = v_144;
      v_159 = v_158;
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
    _out->p = v_129;
    _out->i = v_135;
    ns_1 = v_151;
    ns_2 = v_152;
    ns_3 = v_153;
    nr = v_159;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        p_St_Standby = 0;
        v_130 = p_St_Standby;
        i_St_Standby = 5;
        v_136 = i_St_Standby;
        nr_St_Standby = false;
        v_160 = nr_St_Standby;
        ns_St_Standby_1 = false;
        v_145 = ns_St_Standby_1;
        ns_St_Standby_2 = true;
        v_146 = ns_St_Standby_2;
        ns_St_Standby_3 = true;
        v_147 = ns_St_Standby_3;
      } else {
        p_St_Washing = 250;
        i_St_Washing = 2;
        nr_St_Washing = false;
        ns_St_Washing_1 = false;
        ns_St_Washing_2 = true;
        ns_St_Washing_3 = false;
        v_130 = p_St_Washing;
        v_136 = i_St_Washing;
        v_160 = nr_St_Washing;
        v_145 = ns_St_Washing_1;
        v_146 = ns_St_Washing_2;
        v_147 = ns_St_Washing_3;
      };
      v_132 = v_130;
      v_138 = v_136;
      v_154 = v_145;
      v_155 = v_146;
      v_156 = v_147;
      v_162 = v_160;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_131 = 0;
        v_137 = 0;
        v_161 = true;
        v_148 = true;
        v_149 = true;
        v_150 = true;
      } else {
        p_St_Waterfill = 15;
        v_131 = p_St_Waterfill;
        i_St_Waterfill = 1;
        v_137 = i_St_Waterfill;
        nr_St_Waterfill = false;
        v_161 = nr_St_Waterfill;
        ns_St_Waterfill_1 = false;
        v_148 = ns_St_Waterfill_1;
        ns_St_Waterfill_2 = false;
        v_149 = ns_St_Waterfill_2;
        ns_St_Waterfill_3 = false;
        v_150 = ns_St_Waterfill_3;
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
      v_132 = v_131;
      v_138 = v_137;
      v_154 = v_148;
      v_155 = v_149;
      v_156 = v_150;
      v_162 = v_161;
    };
    _out->p = v_132;
    _out->i = v_138;
    ns_1 = v_154;
    ns_2 = v_155;
    ns_3 = v_156;
    nr = v_162;
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
  self->v_163 = ns_1;
  self->v_164 = ns_2;
  self->v_165 = ns_3;;
}

void P3_joao__oven_reset(P3_joao__oven_mem* self) {
  self->pnr = false;
  self->v_220 = true;
  self->v_221 = false;
  self->v_222 = false;
}

void P3_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P3_joao__oven_out* _out, P3_joao__oven_mem* self) {
  
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
  ck_1 = self->v_220;
  ck_2_4 = self->v_221;
  ck_3 = self->v_222;
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
        v_238 = r_St_1_Heat;
        v_223 = s_5_St_1_Heat_1;
        v_224 = s_5_St_1_Heat_2;
        v_225 = s_5_St_1_Heat_3;
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
        v_238 = r_St_1_Maintain;
        if (v_6) {
          s_5_St_1_Maintain_1 = false;
        } else {
          s_5_St_1_Maintain_1 = v_7_1;
        };
        v_223 = s_5_St_1_Maintain_1;
        if (v_6) {
          s_5_St_1_Maintain_2 = false;
        } else {
          s_5_St_1_Maintain_2 = v_7_2;
        };
        v_224 = s_5_St_1_Maintain_2;
        if (v_6) {
          s_5_St_1_Maintain_3 = true;
        } else {
          s_5_St_1_Maintain_3 = v_7_3;
        };
        v_225 = s_5_St_1_Maintain_3;
      };
      v_232 = v_223;
      v_233 = v_224;
      v_234 = v_225;
      v_240 = v_238;
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
        v_239 = true;
        v_226 = true;
        v_227 = true;
        v_228 = true;
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
        v_239 = r_St_1_Off;
        if (v_11) {
          s_5_St_1_Off_1 = true;
        } else {
          s_5_St_1_Off_1 = v_14_1;
        };
        v_226 = s_5_St_1_Off_1;
        if (v_11) {
          s_5_St_1_Off_2 = true;
        } else {
          s_5_St_1_Off_2 = v_14_2;
        };
        v_227 = s_5_St_1_Off_2;
        if (v_11) {
          s_5_St_1_Off_3 = true;
        } else {
          s_5_St_1_Off_3 = v_14_3;
        };
        v_228 = s_5_St_1_Off_3;
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
      v_232 = v_226;
      v_233 = v_227;
      v_234 = v_228;
      v_240 = v_239;
    };
    s_5_1 = v_232;
    s_5_2 = v_233;
    s_5_3 = v_234;
    r = v_240;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_235 = true;
      v_236 = true;
      v_237 = true;
      v_242 = true;
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
        v_241 = r_St_1_Reheat;
        v_229 = s_5_St_1_Reheat_1;
        v_230 = s_5_St_1_Reheat_2;
        v_231 = s_5_St_1_Reheat_3;
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
        v_241 = r_St_1_Standby;
        if (c) {
          s_5_St_1_Standby_1 = true;
        } else {
          s_5_St_1_Standby_1 = false;
        };
        v_229 = s_5_St_1_Standby_1;
        if (c) {
          s_5_St_1_Standby_2 = true;
        } else {
          s_5_St_1_Standby_2 = false;
        };
        v_230 = s_5_St_1_Standby_2;
        if (c) {
          s_5_St_1_Standby_3 = true;
        } else {
          s_5_St_1_Standby_3 = false;
        };
        v_231 = s_5_St_1_Standby_3;
      };
      v_235 = v_229;
      v_236 = v_230;
      v_237 = v_231;
      v_242 = v_241;
    };
    s_5_1 = v_235;
    s_5_2 = v_236;
    s_5_3 = v_237;
    r = v_242;
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
        v_190 = p_St_1_Heat;
        v_195 = i_St_1_Heat;
        v_215 = nr_St_1_Heat;
        v_200 = ns_St_1_Heat_1;
        v_201 = ns_St_1_Heat_2;
        v_202 = ns_St_1_Heat_3;
      } else {
        p_St_1_Maintain = 300;
        v_190 = p_St_1_Maintain;
        i_St_1_Maintain = 2;
        v_195 = i_St_1_Maintain;
        nr_St_1_Maintain = false;
        v_215 = nr_St_1_Maintain;
        ns_St_1_Maintain_1 = true;
        v_200 = ns_St_1_Maintain_1;
        ns_St_1_Maintain_2 = true;
        v_201 = ns_St_1_Maintain_2;
        ns_St_1_Maintain_3 = false;
        v_202 = ns_St_1_Maintain_3;
      };
      v_192 = v_190;
      v_197 = v_195;
      v_209 = v_200;
      v_210 = v_201;
      v_211 = v_202;
      v_217 = v_215;
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
        v_191 = 0;
        v_196 = 0;
        v_216 = true;
        v_203 = true;
        v_204 = true;
        v_205 = true;
      } else {
        p_St_1_Off = 0;
        v_191 = p_St_1_Off;
        i_St_1_Off = 0;
        v_196 = i_St_1_Off;
        nr_St_1_Off = false;
        v_216 = nr_St_1_Off;
        ns_St_1_Off_1 = true;
        v_203 = ns_St_1_Off_1;
        ns_St_1_Off_2 = false;
        v_204 = ns_St_1_Off_2;
        ns_St_1_Off_3 = false;
        v_205 = ns_St_1_Off_3;
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
      v_192 = v_191;
      v_197 = v_196;
      v_209 = v_203;
      v_210 = v_204;
      v_211 = v_205;
      v_217 = v_216;
    };
    _out->p = v_192;
    _out->i = v_197;
    ns_1 = v_209;
    ns_2 = v_210;
    ns_3 = v_211;
    nr = v_217;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_194 = 0;
      v_199 = 0;
      v_212 = true;
      v_213 = true;
      v_214 = true;
      v_219 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        p_St_1_Reheat = 1000;
        i_St_1_Reheat = 3;
        nr_St_1_Reheat = false;
        ns_St_1_Reheat_1 = false;
        ns_St_1_Reheat_2 = false;
        ns_St_1_Reheat_3 = true;
        v_193 = p_St_1_Reheat;
        v_198 = i_St_1_Reheat;
        v_218 = nr_St_1_Reheat;
        v_206 = ns_St_1_Reheat_1;
        v_207 = ns_St_1_Reheat_2;
        v_208 = ns_St_1_Reheat_3;
      } else {
        p_St_1_Standby = 0;
        v_193 = p_St_1_Standby;
        i_St_1_Standby = 4;
        v_198 = i_St_1_Standby;
        nr_St_1_Standby = false;
        v_218 = nr_St_1_Standby;
        ns_St_1_Standby_1 = false;
        v_206 = ns_St_1_Standby_1;
        ns_St_1_Standby_2 = false;
        v_207 = ns_St_1_Standby_2;
        ns_St_1_Standby_3 = false;
        v_208 = ns_St_1_Standby_3;
      };
      v_194 = v_193;
      v_199 = v_198;
      v_212 = v_206;
      v_213 = v_207;
      v_214 = v_208;
      v_219 = v_218;
    };
    _out->p = v_194;
    _out->i = v_199;
    ns_1 = v_212;
    ns_2 = v_213;
    ns_3 = v_214;
    nr = v_219;
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
  self->v_220 = ns_1;
  self->v_221 = ns_2;
  self->v_222 = ns_3;;
}

void P3_joao__rad_reset(P3_joao__rad_mem* self) {
  self->pnr = false;
  self->v_253 = false;
  self->v_254 = false;
}

void P3_joao__rad_step(int up1, int down1, int up2, int down2, int c1,
                       int c2, P3_joao__rad_out* _out, P3_joao__rad_mem* self) {
  
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
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
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
  ck_1 = self->v_253;
  ck_2 = self->v_254;
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
      v_259 = r_St_2_Eco;
      if (v_22) {
        s_St_2_Eco_1 = true;
      } else {
        s_St_2_Eco_1 = v_24_1;
      };
      v_255 = s_St_2_Eco_1;
      if (v_22) {
        s_St_2_Eco_2 = false;
      } else {
        s_St_2_Eco_2 = v_24_2;
      };
      v_256 = s_St_2_Eco_2;
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
      v_259 = r_St_2_Frostprotection;
      v_255 = s_St_2_Frostprotection_1;
      v_256 = s_St_2_Frostprotection_2;
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
    s_1 = v_255;
    s_2 = v_256;
    r = v_259;
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
      v_260 = r_St_2_High;
      if (v_16) {
        s_St_2_High_1 = true;
      } else {
        s_St_2_High_1 = v_19_1;
      };
      v_257 = s_St_2_High_1;
      if (v_16) {
        s_St_2_High_2 = true;
      } else {
        s_St_2_High_2 = v_19_2;
      };
      v_258 = s_St_2_High_2;
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
      v_260 = r_St_2_Off;
      v_257 = s_St_2_Off_1;
      v_258 = s_St_2_Off_2;
    };
    s_1 = v_257;
    s_2 = v_258;
    r = v_260;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      p_St_2_Eco = 1500;
      v_243 = p_St_2_Eco;
      i_St_2_Eco = 2;
      v_245 = i_St_2_Eco;
      nr_St_2_Eco = false;
      v_251 = nr_St_2_Eco;
      ns_St_2_Eco_1 = true;
      v_247 = ns_St_2_Eco_1;
      ns_St_2_Eco_2 = true;
      v_248 = ns_St_2_Eco_2;
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
      v_243 = p_St_2_Frostprotection;
      v_245 = i_St_2_Frostprotection;
      v_251 = nr_St_2_Frostprotection;
      v_247 = ns_St_2_Frostprotection_1;
      v_248 = ns_St_2_Frostprotection_2;
      if (ns_St_2_Frostprotection_1) {
        ns_St_2_Frostprotection_2_1 = ns_St_2_Frostprotection_2;
      } else {
        ns_St_2_Frostprotection_2_0 = ns_St_2_Frostprotection_2;
      };
    };
    _out->p = v_243;
    _out->i = v_245;
    ns_1 = v_247;
    ns_2 = v_248;
    nr = v_251;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      p_St_2_High = 2000;
      v_244 = p_St_2_High;
      i_St_2_High = 3;
      v_246 = i_St_2_High;
      nr_St_2_High = false;
      v_252 = nr_St_2_High;
      ns_St_2_High_1 = false;
      v_249 = ns_St_2_High_1;
      ns_St_2_High_2 = true;
      v_250 = ns_St_2_High_2;
    } else {
      p_St_2_Off = 0;
      i_St_2_Off = 0;
      nr_St_2_Off = false;
      ns_St_2_Off_1 = false;
      ns_St_2_Off_2 = false;
      v_244 = p_St_2_Off;
      v_246 = i_St_2_Off;
      v_252 = nr_St_2_Off;
      v_249 = ns_St_2_Off_1;
      v_250 = ns_St_2_Off_2;
    };
    _out->p = v_244;
    _out->i = v_246;
    ns_1 = v_249;
    ns_2 = v_250;
    nr = v_252;
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
  self->v_253 = ns_1;
  self->v_254 = ns_2;;
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
  self->v_273 = false;
  self->v_274 = false;
}

void P3_joao__management_policy_step(int eco_input, int comfort_input,
                                     P3_joao__management_policy_out* _out,
                                     P3_joao__management_policy_mem* self) {
  
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
  int ns_St_6_Comfort_2_0;
  int ns_St_6_Comfort_2_1;
  int ns_St_6_Eco_2_0;
  int ns_St_6_Eco_2_1;
  int ns_St_6_Minimal_safety_2_0;
  int ns_St_6_Minimal_safety_2_1;
  int ck_7_2_0;
  int ck_7_2_1;
  int nr_St_6_Comfort;
  int ns_St_6_Comfort_2;
  int ns_St_6_Comfort_1;
  int pl_St_6_Comfort;
  int comfort_St_6_Comfort;
  int eco_St_6_Comfort;
  int nr_St_6_Eco;
  int ns_St_6_Eco_2;
  int ns_St_6_Eco_1;
  int pl_St_6_Eco;
  int comfort_St_6_Eco;
  int eco_St_6_Eco;
  int nr_St_6_Minimal_safety;
  int ns_St_6_Minimal_safety_2;
  int ns_St_6_Minimal_safety_1;
  int pl_St_6_Minimal_safety;
  int comfort_St_6_Minimal_safety;
  int eco_St_6_Minimal_safety;
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
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
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
  ck_1 = self->v_273;
  ck_2 = self->v_274;
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
      v_279 = r_St_6_Comfort;
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
      v_275 = s_St_6_Comfort_1;
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
      v_276 = s_St_6_Comfort_2;
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
      v_279 = r_St_6_Eco;
      v_275 = s_St_6_Eco_1;
      v_276 = s_St_6_Eco_2;
    };
    s_1 = v_275;
    s_2 = v_276;
    r = v_279;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_280 = true;
      v_277 = true;
      v_278 = true;
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
      v_280 = r_St_6_Minimal_safety;
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
      v_277 = s_St_6_Minimal_safety_1;
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
      v_278 = s_St_6_Minimal_safety_2;
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
    s_1 = v_277;
    s_2 = v_278;
    r = v_280;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      pl_St_6_Comfort = 7000;
      v_265 = pl_St_6_Comfort;
      eco_St_6_Comfort = false;
      v_261 = eco_St_6_Comfort;
      comfort_St_6_Comfort = true;
      v_263 = comfort_St_6_Comfort;
      nr_St_6_Comfort = false;
      v_271 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_267 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_268 = ns_St_6_Comfort_2;
    } else {
      pl_St_6_Eco = 5000;
      eco_St_6_Eco = true;
      comfort_St_6_Eco = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_265 = pl_St_6_Eco;
      v_261 = eco_St_6_Eco;
      v_263 = comfort_St_6_Eco;
      v_271 = nr_St_6_Eco;
      v_267 = ns_St_6_Eco_1;
      v_268 = ns_St_6_Eco_2;
    };
    _out->eco = v_261;
    _out->comfort = v_263;
    _out->pl = v_265;
    ns_1 = v_267;
    ns_2 = v_268;
    nr = v_271;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_266 = 0;
      v_262 = true;
      v_264 = true;
      v_272 = true;
      v_269 = true;
      v_270 = true;
    } else {
      pl_St_6_Minimal_safety = 3000;
      v_266 = pl_St_6_Minimal_safety;
      eco_St_6_Minimal_safety = false;
      v_262 = eco_St_6_Minimal_safety;
      comfort_St_6_Minimal_safety = false;
      v_264 = comfort_St_6_Minimal_safety;
      nr_St_6_Minimal_safety = false;
      v_272 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_269 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_270 = ns_St_6_Minimal_safety_2;
      if (ns_St_6_Minimal_safety_1) {
        ns_St_6_Minimal_safety_2_1 = ns_St_6_Minimal_safety_2;
      } else {
        ns_St_6_Minimal_safety_2_0 = ns_St_6_Minimal_safety_2;
      };
    };
    _out->eco = v_262;
    _out->comfort = v_264;
    _out->pl = v_266;
    ns_1 = v_269;
    ns_2 = v_270;
    nr = v_272;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (ck_7_1) {
    if (ck_7_2_1) {
      if (ns_St_6_Comfort_1) {
        ns_St_6_Comfort_2_1 = ns_St_6_Comfort_2;
      } else {
        ns_St_6_Comfort_2_0 = ns_St_6_Comfort_2;
      };
    } else {
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
  self->v_273 = ns_1;
  self->v_274 = ns_2;;
}

void P3_joao__contrato_reset(P3_joao__contrato_mem* self) {
  self->pnr = false;
  self->v_293 = false;
  self->v_294 = false;
  self->pnr_1 = false;
  self->v_331 = true;
  self->v_332 = false;
  self->v_333 = false;
  self->pnr_2 = false;
  self->v_390 = true;
  self->v_391 = true;
  self->v_392 = true;
  self->pnr_3 = false;
  self->ck_17_1 = true;
  self->pnr_4 = false;
  self->ck_15_1 = true;
  self->pnr_5 = false;
  self->ck_13_1 = true;
  self->pnr_6 = false;
  self->ck_11_1 = true;
  self->pnr_7 = false;
  self->ck_9_1 = true;
  self->pnr_8 = false;
  self->v_427 = false;
  self->v_428 = false;
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
  int ns_St_7_Comfort_2_0;
  int ns_St_7_Comfort_2_1;
  int ns_St_7_Eco_2_0;
  int ns_St_7_Eco_2_1;
  int ns_St_7_Minimal_safety_2_0;
  int ns_St_7_Minimal_safety_2_1;
  int ck_24_2_0;
  int ck_24_2_1;
  int nr_St_7_Comfort;
  int ns_St_7_Comfort_2;
  int ns_St_7_Comfort_1;
  int pl_St_7_Comfort;
  int comfort_1_St_7_Comfort;
  int eco_1_St_7_Comfort;
  int nr_St_7_Eco;
  int ns_St_7_Eco_2;
  int ns_St_7_Eco_1;
  int pl_St_7_Eco;
  int comfort_1_St_7_Eco;
  int eco_1_St_7_Eco;
  int nr_St_7_Minimal_safety;
  int ns_St_7_Minimal_safety_2;
  int ns_St_7_Minimal_safety_1;
  int pl_St_7_Minimal_safety;
  int comfort_1_St_7_Minimal_safety;
  int eco_1_St_7_Minimal_safety;
  int ck_24_2;
  int ck_24_1;
  int v_125_2_0;
  int v_125_2_1;
  int v_126;
  int v_125_2;
  int v_125_1;
  int v_123_2_0;
  int v_123_2_1;
  int v_124;
  int v_123_2;
  int v_123_1;
  int v_122;
  int v_120_2_0;
  int v_120_2_1;
  int v_121;
  int v_120_2;
  int v_120_1;
  int v_119;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int s_7_St_7_Comfort_2_0;
  int s_7_St_7_Comfort_2_1;
  int s_7_St_7_Eco_2_0;
  int s_7_St_7_Eco_2_1;
  int s_7_St_7_Minimal_safety_2_0;
  int s_7_St_7_Minimal_safety_2_1;
  int ck_23_2_0;
  int ck_23_2_1;
  int r_St_7_Comfort;
  int s_7_St_7_Comfort_2;
  int s_7_St_7_Comfort_1;
  int r_St_7_Eco;
  int s_7_St_7_Eco_2;
  int s_7_St_7_Eco_1;
  int r_St_7_Minimal_safety;
  int s_7_St_7_Minimal_safety_2;
  int s_7_St_7_Minimal_safety_1;
  int ck_23_2;
  int ck_23_1;
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
  int ck_22_2_0;
  int ck_22_3_0_0;
  int ck_22_3_0_1;
  int ck_22_2_1;
  int ck_22_3_1_0;
  int ck_22_3_1_1;
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
  int ck_22_3;
  int ck_22_2;
  int ck_22_1;
  int v_117_2_0;
  int v_117_3_0_0;
  int v_117_3_0_1;
  int v_117_2_1;
  int v_117_3_1_0;
  int v_117_3_1_1;
  int v_118;
  int v_117_3;
  int v_117_2;
  int v_117_1;
  int v_116;
  int v_115;
  int v_114;
  int v_112_2_0;
  int v_112_3_0_0;
  int v_112_3_0_1;
  int v_112_2_1;
  int v_112_3_1_0;
  int v_112_3_1_1;
  int v_113;
  int v_112_3;
  int v_112_2;
  int v_112_1;
  int v_110_2_0;
  int v_110_3_0_0;
  int v_110_3_0_1;
  int v_110_2_1;
  int v_110_3_1_0;
  int v_110_3_1_1;
  int v_111;
  int v_110_3;
  int v_110_2;
  int v_110_1;
  int v_109;
  int v_107_2_0;
  int v_107_3_0_0;
  int v_107_3_0_1;
  int v_107_2_1;
  int v_107_3_1_0;
  int v_107_3_1_1;
  int v_108;
  int v_107_3;
  int v_107_2;
  int v_107_1;
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
  int ck_21_2_0;
  int ck_21_3_0_0;
  int ck_21_3_0_1;
  int ck_21_2_1;
  int ck_21_3_1_0;
  int ck_21_3_1_1;
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
  int ck_21_3;
  int ck_21_2;
  int ck_21_1;
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
  int ck_20_2_0;
  int ck_20_3_0_0;
  int ck_20_3_0_1;
  int ck_20_2_1;
  int ck_20_3_1_0;
  int ck_20_3_1_1;
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
  int ck_20_3;
  int ck_20_2;
  int ck_20_1;
  int v_105_2_0;
  int v_105_3_0_0;
  int v_105_3_0_1;
  int v_105_2_1;
  int v_105_3_1_0;
  int v_105_3_1_1;
  int v_106;
  int v_105_3;
  int v_105_2;
  int v_105_1;
  int v_104;
  int v_103;
  int v_102;
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
  int ck_19_2_0;
  int ck_19_3_0_0;
  int ck_19_3_0_1;
  int ck_19_2_1;
  int ck_19_3_1_0;
  int ck_19_3_1_1;
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
  int ck_19_3;
  int ck_19_2;
  int ck_19_1;
  int nr_3_St_10_Ocupied;
  int ns_3_St_10_Ocupied_1;
  int room_oc_St_10_Ocupied;
  int nr_3_St_10_Empty;
  int ns_3_St_10_Empty_1;
  int room_oc_St_10_Empty;
  int ck_18_1;
  int v_101;
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
  int ck_16_1;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
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
  int ck_14_1;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
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
  int ck_12_1;
  int v_88;
  int v_87;
  int v_86;
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
  int ck_10_1;
  int v_85;
  int v_84;
  int v_83;
  int r_7_St_14_Open;
  int s_14_St_14_Open_1;
  int r_7_St_14_Closed;
  int s_14_St_14_Closed_1;
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
  int ns_8_St_15_High_2_0;
  int ns_8_St_15_High_2_1;
  int ns_8_St_15_Eco_2_0;
  int ns_8_St_15_Eco_2_1;
  int ns_8_St_15_Frostprotection_2_0;
  int ns_8_St_15_Frostprotection_2_1;
  int ns_8_St_15_Off_2_0;
  int ns_8_St_15_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
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
  int ck_8_2;
  int ck_8_1;
  int v_82;
  int v_81;
  int v_79_2_0;
  int v_79_2_1;
  int v_77_2_0;
  int v_77_2_1;
  int v_80;
  int v_79_2;
  int v_79_1;
  int v_78;
  int v_77_2;
  int v_77_1;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_71_2_0;
  int v_71_2_1;
  int v_72;
  int v_71_2;
  int v_71_1;
  int v_70;
  int v_69;
  int v_68;
  int v_66_2_0;
  int v_66_2_1;
  int v_67;
  int v_66_2;
  int v_66_1;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int s_15_St_15_High_2_0;
  int s_15_St_15_High_2_1;
  int s_15_St_15_Eco_2_0;
  int s_15_St_15_Eco_2_1;
  int s_15_St_15_Frostprotection_2_0;
  int s_15_St_15_Frostprotection_2_1;
  int s_15_St_15_Off_2_0;
  int s_15_St_15_Off_2_1;
  int ck_2_0;
  int ck_2_1;
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
  int ck_2;
  int ck_1;
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
  int s_7_2_0;
  int s_7_2_1;
  int ns_2_4_0;
  int ns_2_4_1;
  int v_61;
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
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_8_3;
  int s_8_2;
  int s_8_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_7_2;
  int s_7_1;
  int ns_2_4;
  int ns_1_4;
  int r;
  int nr;
  int eco_input_1;
  int comfort_input_1;
  int eco_1;
  int comfort_1;
  int pl;
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
  int off_frost;
  int r4;
  int r3;
  int r2;
  int r1;
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
  int v_59;
  int v_60;
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
  eco_input_1 = eco_input;
  comfort_input_1 = comfort_input;
  ck_23_1 = self->v_293;
  ck_23_2 = self->v_294;
  f = finish_oven;
  s_3 = start_oven;
  tok_1 = tok;
  cold_1 = cold;
  ck_21_1 = self->v_331;
  ck_21_2 = self->v_332;
  ck_21_3 = self->v_333;
  e = end_wash;
  s_2 = start_wash;
  ck_19_1 = self->v_390;
  ck_19_2 = self->v_391;
  ck_19_3 = self->v_392;
  presence = presenca;
  botao_1 = botao_tv;
  botao = botao_lamp;
  push_1 = push_janela;
  push = push_porta;
  up1 = rad_up1;
  down1 = rad_down1;
  up2 = rad_up2;
  down2 = rad_down2;
  ck_1 = self->v_427;
  ck_2 = self->v_428;
  Contrato_controller__contrato_controller_step(eco_input, comfort_input,
                                                end_wash, start_wash,
                                                finish_oven, start_oven, tok,
                                                cold, push_porta,
                                                push_janela, rad_up1,
                                                rad_down1, rad_up2,
                                                rad_down2, presenca,
                                                botao_lamp, botao_tv,
                                                self->v_428, self->v_427,
                                                self->pnr_8, self->ck_9_1,
                                                self->pnr_7, self->ck_11_1,
                                                self->pnr_6, self->ck_13_1,
                                                self->pnr_5, self->ck_15_1,
                                                self->pnr_4, self->ck_17_1,
                                                self->pnr_3, self->v_392,
                                                self->v_391, self->v_390,
                                                self->pnr_2, self->v_333,
                                                self->v_332, self->v_331,
                                                self->pnr_1, self->v_294,
                                                self->v_293, self->pnr, true,
                                                true, true, true, true, true,
                                                true, true, true, true,
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
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      v_119 = !(comfort_input_1);
      if (v_119) {
        v_121 = true;
      } else {
        v_121 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_Comfort = true;
      } else {
        r_St_7_Comfort = v_121;
      };
      v_299 = r_St_7_Comfort;
      if (v_119) {
        v_120_1 = false;
      } else {
        v_120_1 = true;
      };
      if (eco_input_1) {
        s_7_St_7_Comfort_1 = true;
      } else {
        s_7_St_7_Comfort_1 = v_120_1;
      };
      v_295 = s_7_St_7_Comfort_1;
      if (v_119) {
        v_120_2 = false;
      } else {
        v_120_2 = true;
      };
      if (eco_input_1) {
        s_7_St_7_Comfort_2 = false;
      } else {
        s_7_St_7_Comfort_2 = v_120_2;
      };
      v_296 = s_7_St_7_Comfort_2;
    } else {
      if (comfort_input_1) {
        v_124 = true;
        v_123_1 = true;
        v_123_2 = true;
      } else {
        v_124 = self->pnr;
        v_123_1 = true;
        v_123_2 = false;
      };
      v_122 = !(eco_input_1);
      if (v_122) {
        r_St_7_Eco = true;
        s_7_St_7_Eco_1 = false;
        s_7_St_7_Eco_2 = false;
      } else {
        r_St_7_Eco = v_124;
        s_7_St_7_Eco_1 = v_123_1;
        s_7_St_7_Eco_2 = v_123_2;
      };
      v_299 = r_St_7_Eco;
      v_295 = s_7_St_7_Eco_1;
      v_296 = s_7_St_7_Eco_2;
    };
    s_7_1 = v_295;
    s_7_2 = v_296;
    r = v_299;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      v_300 = true;
      v_297 = true;
      v_298 = true;
    } else {
      if (comfort_input_1) {
        v_126 = true;
      } else {
        v_126 = self->pnr;
      };
      if (eco_input_1) {
        r_St_7_Minimal_safety = true;
      } else {
        r_St_7_Minimal_safety = v_126;
      };
      v_300 = r_St_7_Minimal_safety;
      if (comfort_input_1) {
        v_125_1 = true;
      } else {
        v_125_1 = false;
      };
      if (eco_input_1) {
        s_7_St_7_Minimal_safety_1 = true;
      } else {
        s_7_St_7_Minimal_safety_1 = v_125_1;
      };
      v_297 = s_7_St_7_Minimal_safety_1;
      if (comfort_input_1) {
        v_125_2 = true;
      } else {
        v_125_2 = false;
      };
      if (eco_input_1) {
        s_7_St_7_Minimal_safety_2 = false;
      } else {
        s_7_St_7_Minimal_safety_2 = v_125_2;
      };
      v_298 = s_7_St_7_Minimal_safety_2;
      if (v_125_1) {
        v_125_2_1 = v_125_2;
      } else {
        v_125_2_0 = v_125_2;
      };
      if (s_7_St_7_Minimal_safety_1) {
        s_7_St_7_Minimal_safety_2_1 = s_7_St_7_Minimal_safety_2;
      } else {
        s_7_St_7_Minimal_safety_2_0 = s_7_St_7_Minimal_safety_2;
      };
    };
    s_7_1 = v_297;
    s_7_2 = v_298;
    r = v_300;
  };
  ck_24_1 = s_7_1;
  ck_24_2 = s_7_2;
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      pl_St_7_Comfort = 7000;
      v_285 = pl_St_7_Comfort;
      eco_1_St_7_Comfort = false;
      v_281 = eco_1_St_7_Comfort;
      comfort_1_St_7_Comfort = true;
      v_283 = comfort_1_St_7_Comfort;
      nr_St_7_Comfort = false;
      v_291 = nr_St_7_Comfort;
      ns_St_7_Comfort_1 = true;
      v_287 = ns_St_7_Comfort_1;
      ns_St_7_Comfort_2 = true;
      v_288 = ns_St_7_Comfort_2;
    } else {
      pl_St_7_Eco = 5000;
      eco_1_St_7_Eco = true;
      comfort_1_St_7_Eco = false;
      nr_St_7_Eco = false;
      ns_St_7_Eco_1 = true;
      ns_St_7_Eco_2 = false;
      v_285 = pl_St_7_Eco;
      v_281 = eco_1_St_7_Eco;
      v_283 = comfort_1_St_7_Eco;
      v_291 = nr_St_7_Eco;
      v_287 = ns_St_7_Eco_1;
      v_288 = ns_St_7_Eco_2;
    };
    eco_1 = v_281;
    comfort_1 = v_283;
    pl = v_285;
    ns_1_4 = v_287;
    ns_2_4 = v_288;
    nr = v_291;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      v_286 = 0;
      v_282 = true;
      v_284 = true;
      v_292 = true;
      v_289 = true;
      v_290 = true;
    } else {
      pl_St_7_Minimal_safety = 3000;
      v_286 = pl_St_7_Minimal_safety;
      eco_1_St_7_Minimal_safety = false;
      v_282 = eco_1_St_7_Minimal_safety;
      comfort_1_St_7_Minimal_safety = false;
      v_284 = comfort_1_St_7_Minimal_safety;
      nr_St_7_Minimal_safety = false;
      v_292 = nr_St_7_Minimal_safety;
      ns_St_7_Minimal_safety_1 = false;
      v_289 = ns_St_7_Minimal_safety_1;
      ns_St_7_Minimal_safety_2 = false;
      v_290 = ns_St_7_Minimal_safety_2;
      if (ns_St_7_Minimal_safety_1) {
        ns_St_7_Minimal_safety_2_1 = ns_St_7_Minimal_safety_2;
      } else {
        ns_St_7_Minimal_safety_2_0 = ns_St_7_Minimal_safety_2;
      };
    };
    eco_1 = v_282;
    comfort_1 = v_284;
    pl = v_286;
    ns_1_4 = v_289;
    ns_2_4 = v_290;
    nr = v_292;
  };
  _out->pol_lim = pl;
  _out->comfort = comfort_1;
  _out->eco = eco_1;
  if (ns_1_4) {
    ns_2_4_1 = ns_2_4;
  } else {
    ns_2_4_0 = ns_2_4;
  };
  if (ck_24_1) {
    if (ck_24_2_1) {
      if (ns_St_7_Comfort_1) {
        ns_St_7_Comfort_2_1 = ns_St_7_Comfort_2;
      } else {
        ns_St_7_Comfort_2_0 = ns_St_7_Comfort_2;
      };
    } else {
      if (ns_St_7_Eco_1) {
        ns_St_7_Eco_2_1 = ns_St_7_Eco_2;
      } else {
        ns_St_7_Eco_2_0 = ns_St_7_Eco_2;
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  if (ck_23_1) {
    if (ck_23_2_1) {
      if (v_120_1) {
        v_120_2_1 = v_120_2;
      } else {
        v_120_2_0 = v_120_2;
      };
      if (s_7_St_7_Comfort_1) {
        s_7_St_7_Comfort_2_1 = s_7_St_7_Comfort_2;
      } else {
        s_7_St_7_Comfort_2_0 = s_7_St_7_Comfort_2;
      };
    } else {
      if (v_123_1) {
        v_123_2_1 = v_123_2;
      } else {
        v_123_2_0 = v_123_2;
      };
      if (s_7_St_7_Eco_1) {
        s_7_St_7_Eco_2_1 = s_7_St_7_Eco_2;
      } else {
        s_7_St_7_Eco_2_0 = s_7_St_7_Eco_2;
      };
    };
  };
  if (ck_21_1) {
    ck_21_2_1 = ck_21_2;
    if (ck_21_2_1) {
      ck_21_3_1_1 = ck_21_3;
      if (ck_21_3_1_1) {
        if (f) {
          v_113 = true;
        } else {
          v_113 = self->pnr_1;
        };
        if (tok_1) {
          r_1_St_8_Heat = true;
        } else {
          r_1_St_8_Heat = v_113;
        };
        if (f) {
          v_112_1 = true;
        } else {
          v_112_1 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_1 = true;
        } else {
          s_8_St_8_Heat_1 = v_112_1;
        };
        if (f) {
          v_112_2 = false;
        } else {
          v_112_2 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_2 = true;
        } else {
          s_8_St_8_Heat_2 = v_112_2;
        };
        if (f) {
          v_112_3 = false;
        } else {
          v_112_3 = true;
        };
        if (tok_1) {
          s_8_St_8_Heat_3 = false;
        } else {
          s_8_St_8_Heat_3 = v_112_3;
        };
        v_349 = r_1_St_8_Heat;
        v_334 = s_8_St_8_Heat_1;
        v_335 = s_8_St_8_Heat_2;
        v_336 = s_8_St_8_Heat_3;
      } else {
        if (f) {
          v_111 = true;
          v_110_1 = true;
          v_110_2 = false;
          v_110_3 = false;
        } else {
          v_111 = self->pnr_1;
          v_110_1 = true;
          v_110_2 = true;
          v_110_3 = false;
        };
        v_109 = (cold_1&&c_1);
        if (v_109) {
          r_1_St_8_Maintain = true;
        } else {
          r_1_St_8_Maintain = v_111;
        };
        v_349 = r_1_St_8_Maintain;
        if (v_109) {
          s_8_St_8_Maintain_1 = false;
        } else {
          s_8_St_8_Maintain_1 = v_110_1;
        };
        v_334 = s_8_St_8_Maintain_1;
        if (v_109) {
          s_8_St_8_Maintain_2 = false;
        } else {
          s_8_St_8_Maintain_2 = v_110_2;
        };
        v_335 = s_8_St_8_Maintain_2;
        if (v_109) {
          s_8_St_8_Maintain_3 = true;
        } else {
          s_8_St_8_Maintain_3 = v_110_3;
        };
        v_336 = s_8_St_8_Maintain_3;
      };
      v_343 = v_334;
      v_344 = v_335;
      v_345 = v_336;
      v_351 = v_349;
      if (ck_21_3_1_1) {
        if (v_112_1) {
          v_112_2_1 = v_112_2;
          if (v_112_2_1) {
            v_112_3_1_1 = v_112_3;
          } else {
            v_112_3_1_0 = v_112_3;
          };
        } else {
          v_112_2_0 = v_112_2;
          if (v_112_2_0) {
            v_112_3_0_1 = v_112_3;
          } else {
            v_112_3_0_0 = v_112_3;
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
        if (v_110_1) {
          v_110_2_1 = v_110_2;
          if (v_110_2_1) {
            v_110_3_1_1 = v_110_3;
          } else {
            v_110_3_1_0 = v_110_3;
          };
        } else {
          v_110_2_0 = v_110_2;
          if (v_110_2_0) {
            v_110_3_0_1 = v_110_3;
          } else {
            v_110_3_0_0 = v_110_3;
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
      ck_21_3_1_0 = ck_21_3;
      if (ck_21_3_1_0) {
        v_350 = true;
        v_337 = true;
        v_338 = true;
        v_339 = true;
      } else {
        v_115 = !(c_1);
        v_116 = (s_3&&v_115);
        if (v_116) {
          v_118 = true;
          v_117_1 = false;
          v_117_2 = false;
          v_117_3 = false;
        } else {
          v_118 = self->pnr_1;
          v_117_1 = true;
          v_117_2 = false;
          v_117_3 = false;
        };
        v_114 = (s_3&&c_1);
        if (v_114) {
          r_1_St_8_Off = true;
        } else {
          r_1_St_8_Off = v_118;
        };
        v_350 = r_1_St_8_Off;
        if (v_114) {
          s_8_St_8_Off_1 = true;
        } else {
          s_8_St_8_Off_1 = v_117_1;
        };
        v_337 = s_8_St_8_Off_1;
        if (v_114) {
          s_8_St_8_Off_2 = true;
        } else {
          s_8_St_8_Off_2 = v_117_2;
        };
        v_338 = s_8_St_8_Off_2;
        if (v_114) {
          s_8_St_8_Off_3 = true;
        } else {
          s_8_St_8_Off_3 = v_117_3;
        };
        v_339 = s_8_St_8_Off_3;
        if (v_117_1) {
          v_117_2_1 = v_117_2;
          if (v_117_2_1) {
            v_117_3_1_1 = v_117_3;
          } else {
            v_117_3_1_0 = v_117_3;
          };
        } else {
          v_117_2_0 = v_117_2;
          if (v_117_2_0) {
            v_117_3_0_1 = v_117_3;
          } else {
            v_117_3_0_0 = v_117_3;
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
      v_343 = v_337;
      v_344 = v_338;
      v_345 = v_339;
      v_351 = v_350;
    };
    s_8_1 = v_343;
    s_8_2 = v_344;
    s_8_3 = v_345;
    r_1 = v_351;
  } else {
    ck_21_2_0 = ck_21_2;
    if (ck_21_2_0) {
      ck_21_3_0_1 = ck_21_3;
      v_346 = true;
      v_347 = true;
      v_348 = true;
      v_353 = true;
    } else {
      ck_21_3_0_0 = ck_21_3;
      if (ck_21_3_0_0) {
        if (f) {
          v_108 = true;
        } else {
          v_108 = self->pnr_1;
        };
        if (tok_1) {
          r_1_St_8_Reheat = true;
        } else {
          r_1_St_8_Reheat = v_108;
        };
        if (f) {
          v_107_1 = true;
        } else {
          v_107_1 = false;
        };
        if (tok_1) {
          s_8_St_8_Reheat_1 = true;
        } else {
          s_8_St_8_Reheat_1 = v_107_1;
        };
        if (f) {
          v_107_2 = false;
        } else {
          v_107_2 = false;
        };
        if (tok_1) {
          s_8_St_8_Reheat_2 = true;
        } else {
          s_8_St_8_Reheat_2 = v_107_2;
        };
        if (f) {
          v_107_3 = false;
        } else {
          v_107_3 = true;
        };
        if (tok_1) {
          s_8_St_8_Reheat_3 = false;
        } else {
          s_8_St_8_Reheat_3 = v_107_3;
        };
        v_352 = r_1_St_8_Reheat;
        v_340 = s_8_St_8_Reheat_1;
        v_341 = s_8_St_8_Reheat_2;
        v_342 = s_8_St_8_Reheat_3;
        if (v_107_1) {
          v_107_2_1 = v_107_2;
          if (v_107_2_1) {
            v_107_3_1_1 = v_107_3;
          } else {
            v_107_3_1_0 = v_107_3;
          };
        } else {
          v_107_2_0 = v_107_2;
          if (v_107_2_0) {
            v_107_3_0_1 = v_107_3;
          } else {
            v_107_3_0_0 = v_107_3;
          };
        };
      } else {
        if (c_1) {
          r_1_St_8_Standby = true;
        } else {
          r_1_St_8_Standby = self->pnr_1;
        };
        v_352 = r_1_St_8_Standby;
        if (c_1) {
          s_8_St_8_Standby_1 = true;
        } else {
          s_8_St_8_Standby_1 = false;
        };
        v_340 = s_8_St_8_Standby_1;
        if (c_1) {
          s_8_St_8_Standby_2 = true;
        } else {
          s_8_St_8_Standby_2 = false;
        };
        v_341 = s_8_St_8_Standby_2;
        if (c_1) {
          s_8_St_8_Standby_3 = true;
        } else {
          s_8_St_8_Standby_3 = false;
        };
        v_342 = s_8_St_8_Standby_3;
      };
      v_346 = v_340;
      v_347 = v_341;
      v_348 = v_342;
      v_353 = v_352;
    };
    s_8_1 = v_346;
    s_8_2 = v_347;
    s_8_3 = v_348;
    r_1 = v_353;
  };
  ck_22_1 = s_8_1;
  ck_22_2 = s_8_2;
  ck_22_3 = s_8_3;
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      ck_22_3_1_1 = ck_22_3;
      if (ck_22_3_1_1) {
        p_2_St_8_Heat = 1500;
        i_2_St_8_Heat = 1;
        nr_1_St_8_Heat = false;
        ns_1_St_8_Heat_1 = true;
        ns_1_St_8_Heat_2 = true;
        ns_1_St_8_Heat_3 = true;
        v_301 = p_2_St_8_Heat;
        v_306 = i_2_St_8_Heat;
        v_326 = nr_1_St_8_Heat;
        v_311 = ns_1_St_8_Heat_1;
        v_312 = ns_1_St_8_Heat_2;
        v_313 = ns_1_St_8_Heat_3;
      } else {
        p_2_St_8_Maintain = 300;
        v_301 = p_2_St_8_Maintain;
        i_2_St_8_Maintain = 2;
        v_306 = i_2_St_8_Maintain;
        nr_1_St_8_Maintain = false;
        v_326 = nr_1_St_8_Maintain;
        ns_1_St_8_Maintain_1 = true;
        v_311 = ns_1_St_8_Maintain_1;
        ns_1_St_8_Maintain_2 = true;
        v_312 = ns_1_St_8_Maintain_2;
        ns_1_St_8_Maintain_3 = false;
        v_313 = ns_1_St_8_Maintain_3;
      };
      v_303 = v_301;
      v_308 = v_306;
      v_320 = v_311;
      v_321 = v_312;
      v_322 = v_313;
      v_328 = v_326;
      if (ck_22_3_1_1) {
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
      ck_22_3_1_0 = ck_22_3;
      if (ck_22_3_1_0) {
        v_302 = 0;
        v_307 = 0;
        v_327 = true;
        v_314 = true;
        v_315 = true;
        v_316 = true;
      } else {
        p_2_St_8_Off = 0;
        v_302 = p_2_St_8_Off;
        i_2_St_8_Off = 0;
        v_307 = i_2_St_8_Off;
        nr_1_St_8_Off = false;
        v_327 = nr_1_St_8_Off;
        ns_1_St_8_Off_1 = true;
        v_314 = ns_1_St_8_Off_1;
        ns_1_St_8_Off_2 = false;
        v_315 = ns_1_St_8_Off_2;
        ns_1_St_8_Off_3 = false;
        v_316 = ns_1_St_8_Off_3;
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
      v_303 = v_302;
      v_308 = v_307;
      v_320 = v_314;
      v_321 = v_315;
      v_322 = v_316;
      v_328 = v_327;
    };
    p_2 = v_303;
    i_2 = v_308;
    ns_1_1 = v_320;
    ns_1_2 = v_321;
    ns_1_3 = v_322;
    nr_1 = v_328;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      ck_22_3_0_1 = ck_22_3;
      v_305 = 0;
      v_310 = 0;
      v_323 = true;
      v_324 = true;
      v_325 = true;
      v_330 = true;
    } else {
      ck_22_3_0_0 = ck_22_3;
      if (ck_22_3_0_0) {
        p_2_St_8_Reheat = 1000;
        i_2_St_8_Reheat = 3;
        nr_1_St_8_Reheat = false;
        ns_1_St_8_Reheat_1 = false;
        ns_1_St_8_Reheat_2 = false;
        ns_1_St_8_Reheat_3 = true;
        v_304 = p_2_St_8_Reheat;
        v_309 = i_2_St_8_Reheat;
        v_329 = nr_1_St_8_Reheat;
        v_317 = ns_1_St_8_Reheat_1;
        v_318 = ns_1_St_8_Reheat_2;
        v_319 = ns_1_St_8_Reheat_3;
      } else {
        p_2_St_8_Standby = 0;
        v_304 = p_2_St_8_Standby;
        i_2_St_8_Standby = 4;
        v_309 = i_2_St_8_Standby;
        nr_1_St_8_Standby = false;
        v_329 = nr_1_St_8_Standby;
        ns_1_St_8_Standby_1 = false;
        v_317 = ns_1_St_8_Standby_1;
        ns_1_St_8_Standby_2 = false;
        v_318 = ns_1_St_8_Standby_2;
        ns_1_St_8_Standby_3 = false;
        v_319 = ns_1_St_8_Standby_3;
      };
      v_305 = v_304;
      v_310 = v_309;
      v_323 = v_317;
      v_324 = v_318;
      v_325 = v_319;
      v_330 = v_329;
    };
    p_2 = v_305;
    i_2 = v_310;
    ns_1_1 = v_323;
    ns_1_2 = v_324;
    ns_1_3 = v_325;
    nr_1 = v_330;
  };
  _out->io = i_2;
  _out->p_oven = p_2;
  if (ns_1_1) {
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
  if (!(ck_22_1)) {
    if (!(ck_22_2_0)) {
      if (ck_22_3_0_0) {
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
  if (!(ck_21_1)) {
    if (!(ck_21_2_0)) {
      if (ck_21_3_0_0) {
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
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      ck_19_3_1_1 = ck_19_3;
      if (ck_19_3_1_1) {
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
        v_411 = r_2_St_9_Off;
        v_393 = s_9_St_9_Off_1;
        v_394 = s_9_St_9_Off_2;
        v_395 = s_9_St_9_Off_3;
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
        v_411 = r_2_St_9_Rinse;
        if (e) {
          s_9_St_9_Rinse_1 = true;
        } else {
          s_9_St_9_Rinse_1 = true;
        };
        v_393 = s_9_St_9_Rinse_1;
        if (e) {
          s_9_St_9_Rinse_2 = false;
        } else {
          s_9_St_9_Rinse_2 = true;
        };
        v_394 = s_9_St_9_Rinse_2;
        if (e) {
          s_9_St_9_Rinse_3 = false;
        } else {
          s_9_St_9_Rinse_3 = false;
        };
        v_395 = s_9_St_9_Rinse_3;
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
      v_405 = v_393;
      v_406 = v_394;
      v_407 = v_395;
      v_413 = v_411;
    } else {
      ck_19_3_1_0 = ck_19_3;
      if (ck_19_3_1_0) {
        v_412 = true;
        v_396 = true;
        v_397 = true;
        v_398 = true;
      } else {
        if (e) {
          r_2_St_9_Spin = true;
        } else {
          r_2_St_9_Spin = self->pnr_2;
        };
        v_412 = r_2_St_9_Spin;
        if (e) {
          s_9_St_9_Spin_1 = true;
        } else {
          s_9_St_9_Spin_1 = true;
        };
        v_396 = s_9_St_9_Spin_1;
        if (e) {
          s_9_St_9_Spin_2 = true;
        } else {
          s_9_St_9_Spin_2 = false;
        };
        v_397 = s_9_St_9_Spin_2;
        if (e) {
          s_9_St_9_Spin_3 = true;
        } else {
          s_9_St_9_Spin_3 = false;
        };
        v_398 = s_9_St_9_Spin_3;
      };
      v_405 = v_396;
      v_406 = v_397;
      v_407 = v_398;
      v_413 = v_412;
      if (!(ck_19_3_1_0)) {
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
    s_9_1 = v_405;
    s_9_2 = v_406;
    s_9_3 = v_407;
    r_2 = v_413;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      ck_19_3_0_1 = ck_19_3;
      if (ck_19_3_0_1) {
        if (c) {
          r_2_St_9_Standby = true;
        } else {
          r_2_St_9_Standby = self->pnr_2;
        };
        v_414 = r_2_St_9_Standby;
        if (c) {
          s_9_St_9_Standby_1 = false;
        } else {
          s_9_St_9_Standby_1 = false;
        };
        v_399 = s_9_St_9_Standby_1;
        if (c) {
          s_9_St_9_Standby_2 = true;
        } else {
          s_9_St_9_Standby_2 = true;
        };
        v_400 = s_9_St_9_Standby_2;
        if (c) {
          s_9_St_9_Standby_3 = false;
        } else {
          s_9_St_9_Standby_3 = true;
        };
        v_401 = s_9_St_9_Standby_3;
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
        v_414 = r_2_St_9_Washing;
        v_399 = s_9_St_9_Washing_1;
        v_400 = s_9_St_9_Washing_2;
        v_401 = s_9_St_9_Washing_3;
      };
      v_408 = v_399;
      v_409 = v_400;
      v_410 = v_401;
      v_416 = v_414;
    } else {
      ck_19_3_0_0 = ck_19_3;
      if (ck_19_3_0_0) {
        v_415 = true;
        v_402 = true;
        v_403 = true;
        v_404 = true;
      } else {
        v_104 = (e&&c);
        if (v_104) {
          v_106 = true;
          v_105_1 = false;
          v_105_2 = true;
          v_105_3 = false;
        } else {
          v_106 = self->pnr_2;
          v_105_1 = false;
          v_105_2 = false;
          v_105_3 = false;
        };
        v_102 = !(c);
        v_103 = (e&&v_102);
        if (v_103) {
          r_2_St_9_Waterfill = true;
        } else {
          r_2_St_9_Waterfill = v_106;
        };
        v_415 = r_2_St_9_Waterfill;
        if (v_103) {
          s_9_St_9_Waterfill_1 = false;
        } else {
          s_9_St_9_Waterfill_1 = v_105_1;
        };
        v_402 = s_9_St_9_Waterfill_1;
        if (v_103) {
          s_9_St_9_Waterfill_2 = true;
        } else {
          s_9_St_9_Waterfill_2 = v_105_2;
        };
        v_403 = s_9_St_9_Waterfill_2;
        if (v_103) {
          s_9_St_9_Waterfill_3 = true;
        } else {
          s_9_St_9_Waterfill_3 = v_105_3;
        };
        v_404 = s_9_St_9_Waterfill_3;
        if (v_105_1) {
          v_105_2_1 = v_105_2;
          if (v_105_2_1) {
            v_105_3_1_1 = v_105_3;
          } else {
            v_105_3_1_0 = v_105_3;
          };
        } else {
          v_105_2_0 = v_105_2;
          if (v_105_2_0) {
            v_105_3_0_1 = v_105_3;
          } else {
            v_105_3_0_0 = v_105_3;
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
      v_408 = v_402;
      v_409 = v_403;
      v_410 = v_404;
      v_416 = v_415;
    };
    s_9_1 = v_408;
    s_9_2 = v_409;
    s_9_3 = v_410;
    r_2 = v_416;
  };
  ck_20_1 = s_9_1;
  ck_20_2 = s_9_2;
  ck_20_3 = s_9_3;
  if (ck_20_1) {
    ck_20_2_1 = ck_20_2;
    if (ck_20_2_1) {
      ck_20_3_1_1 = ck_20_3;
      if (ck_20_3_1_1) {
        p_1_St_9_Off = 0;
        i_1_St_9_Off = 0;
        nr_2_St_9_Off = false;
        ns_2_St_9_Off_1 = true;
        ns_2_St_9_Off_2 = true;
        ns_2_St_9_Off_3 = true;
        v_354 = p_1_St_9_Off;
        v_360 = i_1_St_9_Off;
        v_384 = nr_2_St_9_Off;
        v_366 = ns_2_St_9_Off_1;
        v_367 = ns_2_St_9_Off_2;
        v_368 = ns_2_St_9_Off_3;
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
        v_354 = p_1_St_9_Rinse;
        i_1_St_9_Rinse = 3;
        v_360 = i_1_St_9_Rinse;
        nr_2_St_9_Rinse = false;
        v_384 = nr_2_St_9_Rinse;
        ns_2_St_9_Rinse_1 = true;
        v_366 = ns_2_St_9_Rinse_1;
        ns_2_St_9_Rinse_2 = true;
        v_367 = ns_2_St_9_Rinse_2;
        ns_2_St_9_Rinse_3 = false;
        v_368 = ns_2_St_9_Rinse_3;
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
      v_356 = v_354;
      v_362 = v_360;
      v_378 = v_366;
      v_379 = v_367;
      v_380 = v_368;
      v_386 = v_384;
    } else {
      ck_20_3_1_0 = ck_20_3;
      if (ck_20_3_1_0) {
        v_355 = 0;
        v_361 = 0;
        v_385 = true;
        v_369 = true;
        v_370 = true;
        v_371 = true;
      } else {
        p_1_St_9_Spin = 800;
        v_355 = p_1_St_9_Spin;
        i_1_St_9_Spin = 4;
        v_361 = i_1_St_9_Spin;
        nr_2_St_9_Spin = false;
        v_385 = nr_2_St_9_Spin;
        ns_2_St_9_Spin_1 = true;
        v_369 = ns_2_St_9_Spin_1;
        ns_2_St_9_Spin_2 = false;
        v_370 = ns_2_St_9_Spin_2;
        ns_2_St_9_Spin_3 = false;
        v_371 = ns_2_St_9_Spin_3;
      };
      v_356 = v_355;
      v_362 = v_361;
      v_378 = v_369;
      v_379 = v_370;
      v_380 = v_371;
      v_386 = v_385;
      if (!(ck_20_3_1_0)) {
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
    p_1 = v_356;
    i_1 = v_362;
    ns_2_1 = v_378;
    ns_2_2 = v_379;
    ns_2_3 = v_380;
    nr_2 = v_386;
  } else {
    ck_20_2_0 = ck_20_2;
    if (ck_20_2_0) {
      ck_20_3_0_1 = ck_20_3;
      if (ck_20_3_0_1) {
        p_1_St_9_Standby = 0;
        v_357 = p_1_St_9_Standby;
        i_1_St_9_Standby = 5;
        v_363 = i_1_St_9_Standby;
        nr_2_St_9_Standby = false;
        v_387 = nr_2_St_9_Standby;
        ns_2_St_9_Standby_1 = false;
        v_372 = ns_2_St_9_Standby_1;
        ns_2_St_9_Standby_2 = true;
        v_373 = ns_2_St_9_Standby_2;
        ns_2_St_9_Standby_3 = true;
        v_374 = ns_2_St_9_Standby_3;
      } else {
        p_1_St_9_Washing = 250;
        i_1_St_9_Washing = 2;
        nr_2_St_9_Washing = false;
        ns_2_St_9_Washing_1 = false;
        ns_2_St_9_Washing_2 = true;
        ns_2_St_9_Washing_3 = false;
        v_357 = p_1_St_9_Washing;
        v_363 = i_1_St_9_Washing;
        v_387 = nr_2_St_9_Washing;
        v_372 = ns_2_St_9_Washing_1;
        v_373 = ns_2_St_9_Washing_2;
        v_374 = ns_2_St_9_Washing_3;
      };
      v_359 = v_357;
      v_365 = v_363;
      v_381 = v_372;
      v_382 = v_373;
      v_383 = v_374;
      v_389 = v_387;
    } else {
      ck_20_3_0_0 = ck_20_3;
      if (ck_20_3_0_0) {
        v_358 = 0;
        v_364 = 0;
        v_388 = true;
        v_375 = true;
        v_376 = true;
        v_377 = true;
      } else {
        p_1_St_9_Waterfill = 15;
        v_358 = p_1_St_9_Waterfill;
        i_1_St_9_Waterfill = 1;
        v_364 = i_1_St_9_Waterfill;
        nr_2_St_9_Waterfill = false;
        v_388 = nr_2_St_9_Waterfill;
        ns_2_St_9_Waterfill_1 = false;
        v_375 = ns_2_St_9_Waterfill_1;
        ns_2_St_9_Waterfill_2 = false;
        v_376 = ns_2_St_9_Waterfill_2;
        ns_2_St_9_Waterfill_3 = false;
        v_377 = ns_2_St_9_Waterfill_3;
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
      v_359 = v_358;
      v_365 = v_364;
      v_381 = v_375;
      v_382 = v_376;
      v_383 = v_377;
      v_389 = v_388;
    };
    p_1 = v_359;
    i_1 = v_365;
    ns_2_1 = v_381;
    ns_2_2 = v_382;
    ns_2_3 = v_383;
    nr_2 = v_389;
  };
  _out->iws = i_1;
  _out->p_wash = p_1;
  v_61 = (_out->p_wash+_out->p_oven);
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
  if (!(ck_20_1)) {
    if (ck_20_2_0) {
      if (ck_20_3_0_1) {
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
  if (!(ck_19_1)) {
    if (ck_19_2_0) {
      if (ck_19_3_0_1) {
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
  if (self->ck_17_1) {
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
    v_101 = !(presence);
    if (v_101) {
      r_3_St_10_Ocupied = true;
    } else {
      r_3_St_10_Ocupied = self->pnr_3;
    };
    r_3 = r_3_St_10_Ocupied;
    if (v_101) {
      s_10_St_10_Ocupied_1 = true;
    } else {
      s_10_St_10_Ocupied_1 = false;
    };
    s_10_1 = s_10_St_10_Ocupied_1;
  };
  ck_18_1 = s_10_1;
  if (ck_18_1) {
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
  if (self->ck_15_1) {
    v_98 = !(c2_2);
    v_99 = (botao_1&&v_98);
    v_100 = (v_99||c1_2);
    if (v_100) {
      r_4_St_11_Desligado = true;
      s_11_St_11_Desligado_1 = false;
    } else {
      r_4_St_11_Desligado = self->pnr_4;
      s_11_St_11_Desligado_1 = true;
    };
    r_4 = r_4_St_11_Desligado;
    s_11_1 = s_11_St_11_Desligado_1;
  } else {
    v_95 = !(c1_2);
    v_96 = (botao_1&&v_95);
    v_97 = (v_96||c2_2);
    if (v_97) {
      r_4_St_11_Ligado = true;
    } else {
      r_4_St_11_Ligado = self->pnr_4;
    };
    r_4 = r_4_St_11_Ligado;
    if (v_97) {
      s_11_St_11_Ligado_1 = true;
    } else {
      s_11_St_11_Ligado_1 = false;
    };
    s_11_1 = s_11_St_11_Ligado_1;
  };
  ck_16_1 = s_11_1;
  if (ck_16_1) {
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
  if (self->ck_13_1) {
    v_92 = !(c2_1);
    v_93 = (botao&&v_92);
    v_94 = (v_93||c1_1);
    if (v_94) {
      r_5_St_12_Desligado = true;
      s_12_St_12_Desligado_1 = false;
    } else {
      r_5_St_12_Desligado = self->pnr_5;
      s_12_St_12_Desligado_1 = true;
    };
    r_5 = r_5_St_12_Desligado;
    s_12_1 = s_12_St_12_Desligado_1;
  } else {
    v_89 = !(c1_1);
    v_90 = (botao&&v_89);
    v_91 = (v_90||c2_1);
    if (v_91) {
      r_5_St_12_Ligado = true;
    } else {
      r_5_St_12_Ligado = self->pnr_5;
    };
    r_5 = r_5_St_12_Ligado;
    if (v_91) {
      s_12_St_12_Ligado_1 = true;
    } else {
      s_12_St_12_Ligado_1 = false;
    };
    s_12_1 = s_12_St_12_Ligado_1;
  };
  ck_14_1 = s_12_1;
  if (ck_14_1) {
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
  if (self->ck_11_1) {
    v_88 = (push_1&&c_door_1);
    if (v_88) {
      r_6_St_13_Closed = true;
      s_13_St_13_Closed_1 = false;
    } else {
      r_6_St_13_Closed = self->pnr_6;
      s_13_St_13_Closed_1 = true;
    };
    r_6 = r_6_St_13_Closed;
    s_13_1 = s_13_St_13_Closed_1;
  } else {
    v_86 = !(c_door_1);
    v_87 = (push_1||v_86);
    if (v_87) {
      r_6_St_13_Open = true;
    } else {
      r_6_St_13_Open = self->pnr_6;
    };
    r_6 = r_6_St_13_Open;
    if (v_87) {
      s_13_St_13_Open_1 = true;
    } else {
      s_13_St_13_Open_1 = false;
    };
    s_13_1 = s_13_St_13_Open_1;
  };
  ck_12_1 = s_13_1;
  if (ck_12_1) {
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
  if (self->ck_9_1) {
    v_85 = (push&&c_door);
    if (v_85) {
      r_7_St_14_Closed = true;
      s_14_St_14_Closed_1 = false;
    } else {
      r_7_St_14_Closed = self->pnr_7;
      s_14_St_14_Closed_1 = true;
    };
    r_7 = r_7_St_14_Closed;
    s_14_1 = s_14_St_14_Closed_1;
  } else {
    v_83 = !(c_door);
    v_84 = (push||v_83);
    if (v_84) {
      r_7_St_14_Open = true;
    } else {
      r_7_St_14_Open = self->pnr_7;
    };
    r_7 = r_7_St_14_Open;
    if (v_84) {
      s_14_St_14_Open_1 = true;
    } else {
      s_14_St_14_Open_1 = false;
    };
    s_14_1 = s_14_St_14_Open_1;
  };
  ck_10_1 = s_14_1;
  if (ck_10_1) {
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
  v_58 = (r1&&r2);
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_70 = (up2&&c2);
      if (v_70) {
        v_72 = true;
        v_71_1 = false;
        v_71_2 = true;
      } else {
        v_72 = self->pnr_8;
        v_71_1 = true;
        v_71_2 = true;
      };
      v_68 = !(c1);
      v_69 = (down1||v_68);
      if (v_69) {
        r_8_St_15_Eco = true;
      } else {
        r_8_St_15_Eco = v_72;
      };
      v_433 = r_8_St_15_Eco;
      if (v_69) {
        s_15_St_15_Eco_1 = true;
      } else {
        s_15_St_15_Eco_1 = v_71_1;
      };
      v_429 = s_15_St_15_Eco_1;
      if (v_69) {
        s_15_St_15_Eco_2 = false;
      } else {
        s_15_St_15_Eco_2 = v_71_2;
      };
      v_430 = s_15_St_15_Eco_2;
      if (v_71_1) {
        v_71_2_1 = v_71_2;
      } else {
        v_71_2_0 = v_71_2;
      };
      if (s_15_St_15_Eco_1) {
        s_15_St_15_Eco_2_1 = s_15_St_15_Eco_2;
      } else {
        s_15_St_15_Eco_2_0 = s_15_St_15_Eco_2;
      };
    } else {
      v_75 = !(c1);
      v_76 = (down1||v_75);
      if (v_76) {
        v_78 = true;
        v_77_1 = false;
        v_77_2 = false;
      } else {
        v_78 = self->pnr_8;
        v_77_1 = true;
        v_77_2 = false;
      };
      v_74 = (up2&&c2);
      if (v_74) {
        v_80 = true;
        v_79_1 = false;
        v_79_2 = true;
      } else {
        v_80 = v_78;
        v_79_1 = v_77_1;
        v_79_2 = v_77_2;
      };
      v_73 = (up1&&c1);
      if (v_73) {
        r_8_St_15_Frostprotection = true;
        s_15_St_15_Frostprotection_1 = true;
        s_15_St_15_Frostprotection_2 = true;
      } else {
        r_8_St_15_Frostprotection = v_80;
        s_15_St_15_Frostprotection_1 = v_79_1;
        s_15_St_15_Frostprotection_2 = v_79_2;
      };
      v_433 = r_8_St_15_Frostprotection;
      v_429 = s_15_St_15_Frostprotection_1;
      v_430 = s_15_St_15_Frostprotection_2;
      if (v_77_1) {
        v_77_2_1 = v_77_2;
      } else {
        v_77_2_0 = v_77_2;
      };
      if (v_79_1) {
        v_79_2_1 = v_79_2;
      } else {
        v_79_2_0 = v_79_2;
      };
      if (s_15_St_15_Frostprotection_1) {
        s_15_St_15_Frostprotection_2_1 = s_15_St_15_Frostprotection_2;
      } else {
        s_15_St_15_Frostprotection_2_0 = s_15_St_15_Frostprotection_2;
      };
    };
    s_15_1 = v_429;
    s_15_2 = v_430;
    r_8 = v_433;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_64 = !(c2);
      v_65 = (down2||v_64);
      if (v_65) {
        v_67 = true;
        v_66_1 = true;
        v_66_2 = false;
      } else {
        v_67 = self->pnr_8;
        v_66_1 = false;
        v_66_2 = true;
      };
      v_62 = !(c1);
      v_63 = (down1||v_62);
      if (v_63) {
        r_8_St_15_High = true;
      } else {
        r_8_St_15_High = v_67;
      };
      v_434 = r_8_St_15_High;
      if (v_63) {
        s_15_St_15_High_1 = true;
      } else {
        s_15_St_15_High_1 = v_66_1;
      };
      v_431 = s_15_St_15_High_1;
      if (v_63) {
        s_15_St_15_High_2 = true;
      } else {
        s_15_St_15_High_2 = v_66_2;
      };
      v_432 = s_15_St_15_High_2;
    } else {
      v_81 = !(c1);
      v_82 = (up1||v_81);
      if (v_82) {
        r_8_St_15_Off = true;
        s_15_St_15_Off_1 = true;
        s_15_St_15_Off_2 = false;
      } else {
        r_8_St_15_Off = self->pnr_8;
        s_15_St_15_Off_1 = false;
        s_15_St_15_Off_2 = false;
      };
      v_434 = r_8_St_15_Off;
      v_431 = s_15_St_15_Off_1;
      v_432 = s_15_St_15_Off_2;
    };
    s_15_1 = v_431;
    s_15_2 = v_432;
    r_8 = v_434;
  };
  ck_8_1 = s_15_1;
  ck_8_2 = s_15_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      p_St_15_Eco = 1500;
      v_417 = p_St_15_Eco;
      i_St_15_Eco = 2;
      v_419 = i_St_15_Eco;
      nr_8_St_15_Eco = false;
      v_425 = nr_8_St_15_Eco;
      ns_8_St_15_Eco_1 = true;
      v_421 = ns_8_St_15_Eco_1;
      ns_8_St_15_Eco_2 = true;
      v_422 = ns_8_St_15_Eco_2;
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
      v_417 = p_St_15_Frostprotection;
      v_419 = i_St_15_Frostprotection;
      v_425 = nr_8_St_15_Frostprotection;
      v_421 = ns_8_St_15_Frostprotection_1;
      v_422 = ns_8_St_15_Frostprotection_2;
      if (ns_8_St_15_Frostprotection_1) {
        ns_8_St_15_Frostprotection_2_1 = ns_8_St_15_Frostprotection_2;
      } else {
        ns_8_St_15_Frostprotection_2_0 = ns_8_St_15_Frostprotection_2;
      };
    };
    p = v_417;
    i = v_419;
    ns_8_1 = v_421;
    ns_8_2 = v_422;
    nr_8 = v_425;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      p_St_15_High = 2000;
      v_418 = p_St_15_High;
      i_St_15_High = 3;
      v_420 = i_St_15_High;
      nr_8_St_15_High = false;
      v_426 = nr_8_St_15_High;
      ns_8_St_15_High_1 = false;
      v_423 = ns_8_St_15_High_1;
      ns_8_St_15_High_2 = true;
      v_424 = ns_8_St_15_High_2;
    } else {
      p_St_15_Off = 0;
      i_St_15_Off = 0;
      nr_8_St_15_Off = false;
      ns_8_St_15_Off_1 = false;
      ns_8_St_15_Off_2 = false;
      v_418 = p_St_15_Off;
      v_420 = i_St_15_Off;
      v_426 = nr_8_St_15_Off;
      v_423 = ns_8_St_15_Off_1;
      v_424 = ns_8_St_15_Off_2;
    };
    p = v_418;
    i = v_420;
    ns_8_1 = v_423;
    ns_8_2 = v_424;
    nr_8 = v_426;
  };
  _out->rad_state = i;
  off_frost = (_out->rad_state<=1);
  v_51 = (v_50&&off_frost);
  r4 = (_out->ocupado||v_51);
  r3 = (v_53||off_frost);
  v_59 = (v_58&&r3);
  v_60 = (v_59&&r4);
  _out->rad_pot = p;
  _out->total = (v_61+_out->rad_pot);
  _out->r5 = (_out->total<=_out->pol_lim);
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
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
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_66_1) {
        v_66_2_1 = v_66_2;
      } else {
        v_66_2_0 = v_66_2;
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
  self->pnr = nr;
  self->v_293 = ns_1_4;
  self->v_294 = ns_2_4;
  self->pnr_1 = nr_1;
  self->v_331 = ns_1_1;
  self->v_332 = ns_1_2;
  self->v_333 = ns_1_3;
  self->pnr_2 = nr_2;
  self->v_390 = ns_2_1;
  self->v_391 = ns_2_2;
  self->v_392 = ns_2_3;
  self->pnr_3 = nr_3;
  self->ck_17_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_15_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_13_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_11_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_9_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->v_427 = ns_8_1;
  self->v_428 = ns_8_2;;
}

