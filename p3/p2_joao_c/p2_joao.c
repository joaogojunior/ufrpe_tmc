/* --- Generated the 21/5/2018 at 10:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p2_joao.h"

void P2_joao__washingmachine_reset(P2_joao__washingmachine_mem* self) {
  self->pnr = false;
  self->v_134 = true;
  self->v_135 = true;
  self->v_136 = true;
}

void P2_joao__washingmachine_step(int e, int s, int c,
                                  P2_joao__washingmachine_out* _out,
                                  P2_joao__washingmachine_mem* self) {
  
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
  int s_2_St_Standby_2_0;
  int s_2_St_Standby_3_0_0;
  int s_2_St_Standby_3_0_1;
  int s_2_St_Standby_2_1;
  int s_2_St_Standby_3_1_0;
  int s_2_St_Standby_3_1_1;
  int s_2_St_Spin_2_0;
  int s_2_St_Spin_3_0_0;
  int s_2_St_Spin_3_0_1;
  int s_2_St_Spin_2_1;
  int s_2_St_Spin_3_1_0;
  int s_2_St_Spin_3_1_1;
  int s_2_St_Rinse_2_0;
  int s_2_St_Rinse_3_0_0;
  int s_2_St_Rinse_3_0_1;
  int s_2_St_Rinse_2_1;
  int s_2_St_Rinse_3_1_0;
  int s_2_St_Rinse_3_1_1;
  int s_2_St_Washing_2_0;
  int s_2_St_Washing_3_0_0;
  int s_2_St_Washing_3_0_1;
  int s_2_St_Washing_2_1;
  int s_2_St_Washing_3_1_0;
  int s_2_St_Washing_3_1_1;
  int s_2_St_Waterfill_2_0;
  int s_2_St_Waterfill_3_0_0;
  int s_2_St_Waterfill_3_0_1;
  int s_2_St_Waterfill_2_1;
  int s_2_St_Waterfill_3_1_0;
  int s_2_St_Waterfill_3_1_1;
  int s_2_St_Off_2_0;
  int s_2_St_Off_3_0_0;
  int s_2_St_Off_3_0_1;
  int s_2_St_Off_2_1;
  int s_2_St_Off_3_1_0;
  int s_2_St_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Standby;
  int s_2_St_Standby_3;
  int s_2_St_Standby_2;
  int s_2_St_Standby_1;
  int r_St_Spin;
  int s_2_St_Spin_3;
  int s_2_St_Spin_2;
  int s_2_St_Spin_1;
  int r_St_Rinse;
  int s_2_St_Rinse_3;
  int s_2_St_Rinse_2;
  int s_2_St_Rinse_1;
  int r_St_Washing;
  int s_2_St_Washing_3;
  int s_2_St_Washing_2;
  int s_2_St_Washing_1;
  int r_St_Waterfill;
  int s_2_St_Waterfill_3;
  int s_2_St_Waterfill_2;
  int s_2_St_Waterfill_1;
  int r_St_Off;
  int s_2_St_Off_3;
  int s_2_St_Off_2;
  int s_2_St_Off_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
  int s_2_2_0;
  int s_2_3_0_0;
  int s_2_3_0_1;
  int s_2_2_1;
  int s_2_3_1_0;
  int s_2_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_4 = self->v_134;
  ck_2 = self->v_135;
  ck_3 = self->v_136;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (s) {
          r_St_Off = true;
          s_2_St_Off_1 = false;
          s_2_St_Off_2 = false;
          s_2_St_Off_3 = false;
        } else {
          r_St_Off = self->pnr;
          s_2_St_Off_1 = true;
          s_2_St_Off_2 = true;
          s_2_St_Off_3 = true;
        };
        v_155 = r_St_Off;
        v_137 = s_2_St_Off_1;
        v_138 = s_2_St_Off_2;
        v_139 = s_2_St_Off_3;
        if (s_2_St_Off_1) {
          s_2_St_Off_2_1 = s_2_St_Off_2;
          if (s_2_St_Off_2_1) {
            s_2_St_Off_3_1_1 = s_2_St_Off_3;
          } else {
            s_2_St_Off_3_1_0 = s_2_St_Off_3;
          };
        } else {
          s_2_St_Off_2_0 = s_2_St_Off_2;
          if (s_2_St_Off_2_0) {
            s_2_St_Off_3_0_1 = s_2_St_Off_3;
          } else {
            s_2_St_Off_3_0_0 = s_2_St_Off_3;
          };
        };
      } else {
        if (e) {
          r_St_Rinse = true;
        } else {
          r_St_Rinse = self->pnr;
        };
        v_155 = r_St_Rinse;
        if (e) {
          s_2_St_Rinse_1 = true;
        } else {
          s_2_St_Rinse_1 = true;
        };
        v_137 = s_2_St_Rinse_1;
        if (e) {
          s_2_St_Rinse_2 = false;
        } else {
          s_2_St_Rinse_2 = true;
        };
        v_138 = s_2_St_Rinse_2;
        if (e) {
          s_2_St_Rinse_3 = false;
        } else {
          s_2_St_Rinse_3 = false;
        };
        v_139 = s_2_St_Rinse_3;
        if (s_2_St_Rinse_1) {
          s_2_St_Rinse_2_1 = s_2_St_Rinse_2;
          if (s_2_St_Rinse_2_1) {
            s_2_St_Rinse_3_1_1 = s_2_St_Rinse_3;
          } else {
            s_2_St_Rinse_3_1_0 = s_2_St_Rinse_3;
          };
        } else {
          s_2_St_Rinse_2_0 = s_2_St_Rinse_2;
          if (s_2_St_Rinse_2_0) {
            s_2_St_Rinse_3_0_1 = s_2_St_Rinse_3;
          } else {
            s_2_St_Rinse_3_0_0 = s_2_St_Rinse_3;
          };
        };
      };
      v_149 = v_137;
      v_150 = v_138;
      v_151 = v_139;
      v_157 = v_155;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_156 = true;
        v_140 = true;
        v_141 = true;
        v_142 = true;
      } else {
        if (e) {
          r_St_Spin = true;
        } else {
          r_St_Spin = self->pnr;
        };
        v_156 = r_St_Spin;
        if (e) {
          s_2_St_Spin_1 = true;
        } else {
          s_2_St_Spin_1 = true;
        };
        v_140 = s_2_St_Spin_1;
        if (e) {
          s_2_St_Spin_2 = true;
        } else {
          s_2_St_Spin_2 = false;
        };
        v_141 = s_2_St_Spin_2;
        if (e) {
          s_2_St_Spin_3 = true;
        } else {
          s_2_St_Spin_3 = false;
        };
        v_142 = s_2_St_Spin_3;
      };
      v_149 = v_140;
      v_150 = v_141;
      v_151 = v_142;
      v_157 = v_156;
      if (!(ck_3_1_0)) {
        if (s_2_St_Spin_1) {
          s_2_St_Spin_2_1 = s_2_St_Spin_2;
          if (s_2_St_Spin_2_1) {
            s_2_St_Spin_3_1_1 = s_2_St_Spin_3;
          } else {
            s_2_St_Spin_3_1_0 = s_2_St_Spin_3;
          };
        } else {
          s_2_St_Spin_2_0 = s_2_St_Spin_2;
          if (s_2_St_Spin_2_0) {
            s_2_St_Spin_3_0_1 = s_2_St_Spin_3;
          } else {
            s_2_St_Spin_3_0_0 = s_2_St_Spin_3;
          };
        };
      };
    };
    s_2_1 = v_149;
    s_2_2 = v_150;
    s_2_3 = v_151;
    r = v_157;
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
        v_158 = r_St_Standby;
        if (c) {
          s_2_St_Standby_1 = false;
        } else {
          s_2_St_Standby_1 = false;
        };
        v_143 = s_2_St_Standby_1;
        if (c) {
          s_2_St_Standby_2 = true;
        } else {
          s_2_St_Standby_2 = true;
        };
        v_144 = s_2_St_Standby_2;
        if (c) {
          s_2_St_Standby_3 = false;
        } else {
          s_2_St_Standby_3 = true;
        };
        v_145 = s_2_St_Standby_3;
      } else {
        if (e) {
          r_St_Washing = true;
          s_2_St_Washing_1 = true;
          s_2_St_Washing_2 = true;
          s_2_St_Washing_3 = false;
        } else {
          r_St_Washing = self->pnr;
          s_2_St_Washing_1 = false;
          s_2_St_Washing_2 = true;
          s_2_St_Washing_3 = false;
        };
        v_158 = r_St_Washing;
        v_143 = s_2_St_Washing_1;
        v_144 = s_2_St_Washing_2;
        v_145 = s_2_St_Washing_3;
      };
      v_152 = v_143;
      v_153 = v_144;
      v_154 = v_145;
      v_160 = v_158;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_159 = true;
        v_146 = true;
        v_147 = true;
        v_148 = true;
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
        v_159 = r_St_Waterfill;
        if (v_1) {
          s_2_St_Waterfill_1 = false;
        } else {
          s_2_St_Waterfill_1 = v_3_1;
        };
        v_146 = s_2_St_Waterfill_1;
        if (v_1) {
          s_2_St_Waterfill_2 = true;
        } else {
          s_2_St_Waterfill_2 = v_3_2;
        };
        v_147 = s_2_St_Waterfill_2;
        if (v_1) {
          s_2_St_Waterfill_3 = true;
        } else {
          s_2_St_Waterfill_3 = v_3_3;
        };
        v_148 = s_2_St_Waterfill_3;
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
        if (s_2_St_Waterfill_1) {
          s_2_St_Waterfill_2_1 = s_2_St_Waterfill_2;
          if (s_2_St_Waterfill_2_1) {
            s_2_St_Waterfill_3_1_1 = s_2_St_Waterfill_3;
          } else {
            s_2_St_Waterfill_3_1_0 = s_2_St_Waterfill_3;
          };
        } else {
          s_2_St_Waterfill_2_0 = s_2_St_Waterfill_2;
          if (s_2_St_Waterfill_2_0) {
            s_2_St_Waterfill_3_0_1 = s_2_St_Waterfill_3;
          } else {
            s_2_St_Waterfill_3_0_0 = s_2_St_Waterfill_3;
          };
        };
      };
      v_152 = v_146;
      v_153 = v_147;
      v_154 = v_148;
      v_160 = v_159;
    };
    s_2_1 = v_152;
    s_2_2 = v_153;
    s_2_3 = v_154;
    r = v_160;
  };
  ck_1_1 = s_2_1;
  ck_1_2 = s_2_2;
  ck_1_3 = s_2_3;
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
        v_98 = p_St_Off;
        v_104 = i_St_Off;
        v_128 = nr_St_Off;
        v_110 = ns_St_Off_1;
        v_111 = ns_St_Off_2;
        v_112 = ns_St_Off_3;
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
        v_98 = p_St_Rinse;
        i_St_Rinse = 3;
        v_104 = i_St_Rinse;
        nr_St_Rinse = false;
        v_128 = nr_St_Rinse;
        ns_St_Rinse_1 = true;
        v_110 = ns_St_Rinse_1;
        ns_St_Rinse_2 = true;
        v_111 = ns_St_Rinse_2;
        ns_St_Rinse_3 = false;
        v_112 = ns_St_Rinse_3;
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
      v_100 = v_98;
      v_106 = v_104;
      v_122 = v_110;
      v_123 = v_111;
      v_124 = v_112;
      v_130 = v_128;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_99 = 0;
        v_105 = 0;
        v_129 = true;
        v_113 = true;
        v_114 = true;
        v_115 = true;
      } else {
        p_St_Spin = 800;
        v_99 = p_St_Spin;
        i_St_Spin = 4;
        v_105 = i_St_Spin;
        nr_St_Spin = false;
        v_129 = nr_St_Spin;
        ns_St_Spin_1 = true;
        v_113 = ns_St_Spin_1;
        ns_St_Spin_2 = false;
        v_114 = ns_St_Spin_2;
        ns_St_Spin_3 = false;
        v_115 = ns_St_Spin_3;
      };
      v_100 = v_99;
      v_106 = v_105;
      v_122 = v_113;
      v_123 = v_114;
      v_124 = v_115;
      v_130 = v_129;
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
    _out->p = v_100;
    _out->i = v_106;
    ns_1 = v_122;
    ns_2 = v_123;
    ns_3 = v_124;
    nr = v_130;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        p_St_Standby = 0;
        v_101 = p_St_Standby;
        i_St_Standby = 5;
        v_107 = i_St_Standby;
        nr_St_Standby = false;
        v_131 = nr_St_Standby;
        ns_St_Standby_1 = false;
        v_116 = ns_St_Standby_1;
        ns_St_Standby_2 = true;
        v_117 = ns_St_Standby_2;
        ns_St_Standby_3 = true;
        v_118 = ns_St_Standby_3;
      } else {
        p_St_Washing = 250;
        i_St_Washing = 2;
        nr_St_Washing = false;
        ns_St_Washing_1 = false;
        ns_St_Washing_2 = true;
        ns_St_Washing_3 = false;
        v_101 = p_St_Washing;
        v_107 = i_St_Washing;
        v_131 = nr_St_Washing;
        v_116 = ns_St_Washing_1;
        v_117 = ns_St_Washing_2;
        v_118 = ns_St_Washing_3;
      };
      v_103 = v_101;
      v_109 = v_107;
      v_125 = v_116;
      v_126 = v_117;
      v_127 = v_118;
      v_133 = v_131;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_102 = 0;
        v_108 = 0;
        v_132 = true;
        v_119 = true;
        v_120 = true;
        v_121 = true;
      } else {
        p_St_Waterfill = 15;
        v_102 = p_St_Waterfill;
        i_St_Waterfill = 1;
        v_108 = i_St_Waterfill;
        nr_St_Waterfill = false;
        v_132 = nr_St_Waterfill;
        ns_St_Waterfill_1 = false;
        v_119 = ns_St_Waterfill_1;
        ns_St_Waterfill_2 = false;
        v_120 = ns_St_Waterfill_2;
        ns_St_Waterfill_3 = false;
        v_121 = ns_St_Waterfill_3;
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
      v_103 = v_102;
      v_109 = v_108;
      v_125 = v_119;
      v_126 = v_120;
      v_127 = v_121;
      v_133 = v_132;
    };
    _out->p = v_103;
    _out->i = v_109;
    ns_1 = v_125;
    ns_2 = v_126;
    ns_3 = v_127;
    nr = v_133;
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
  if (!(ck_1_4)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (s_2_St_Standby_1) {
          s_2_St_Standby_2_1 = s_2_St_Standby_2;
          if (s_2_St_Standby_2_1) {
            s_2_St_Standby_3_1_1 = s_2_St_Standby_3;
          } else {
            s_2_St_Standby_3_1_0 = s_2_St_Standby_3;
          };
        } else {
          s_2_St_Standby_2_0 = s_2_St_Standby_2;
          if (s_2_St_Standby_2_0) {
            s_2_St_Standby_3_0_1 = s_2_St_Standby_3;
          } else {
            s_2_St_Standby_3_0_0 = s_2_St_Standby_3;
          };
        };
      } else {
        if (s_2_St_Washing_1) {
          s_2_St_Washing_2_1 = s_2_St_Washing_2;
          if (s_2_St_Washing_2_1) {
            s_2_St_Washing_3_1_1 = s_2_St_Washing_3;
          } else {
            s_2_St_Washing_3_1_0 = s_2_St_Washing_3;
          };
        } else {
          s_2_St_Washing_2_0 = s_2_St_Washing_2;
          if (s_2_St_Washing_2_0) {
            s_2_St_Washing_3_0_1 = s_2_St_Washing_3;
          } else {
            s_2_St_Washing_3_0_0 = s_2_St_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_134 = ns_1;
  self->v_135 = ns_2;
  self->v_136 = ns_3;;
}

void P2_joao__oven_reset(P2_joao__oven_mem* self) {
  self->pnr = false;
  self->v_191 = true;
  self->v_192 = false;
  self->v_193 = false;
}

void P2_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P2_joao__oven_out* _out, P2_joao__oven_mem* self) {
  
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
  int s_3_St_1_Standby_2_0;
  int s_3_St_1_Standby_3_0_0;
  int s_3_St_1_Standby_3_0_1;
  int s_3_St_1_Standby_2_1;
  int s_3_St_1_Standby_3_1_0;
  int s_3_St_1_Standby_3_1_1;
  int s_3_St_1_Reheat_2_0;
  int s_3_St_1_Reheat_3_0_0;
  int s_3_St_1_Reheat_3_0_1;
  int s_3_St_1_Reheat_2_1;
  int s_3_St_1_Reheat_3_1_0;
  int s_3_St_1_Reheat_3_1_1;
  int s_3_St_1_Maintain_2_0;
  int s_3_St_1_Maintain_3_0_0;
  int s_3_St_1_Maintain_3_0_1;
  int s_3_St_1_Maintain_2_1;
  int s_3_St_1_Maintain_3_1_0;
  int s_3_St_1_Maintain_3_1_1;
  int s_3_St_1_Heat_2_0;
  int s_3_St_1_Heat_3_0_0;
  int s_3_St_1_Heat_3_0_1;
  int s_3_St_1_Heat_2_1;
  int s_3_St_1_Heat_3_1_0;
  int s_3_St_1_Heat_3_1_1;
  int s_3_St_1_Off_2_0;
  int s_3_St_1_Off_3_0_0;
  int s_3_St_1_Off_3_0_1;
  int s_3_St_1_Off_2_1;
  int s_3_St_1_Off_3_1_0;
  int s_3_St_1_Off_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Standby;
  int s_3_St_1_Standby_3;
  int s_3_St_1_Standby_2;
  int s_3_St_1_Standby_1;
  int r_St_1_Reheat;
  int s_3_St_1_Reheat_3;
  int s_3_St_1_Reheat_2;
  int s_3_St_1_Reheat_1;
  int r_St_1_Maintain;
  int s_3_St_1_Maintain_3;
  int s_3_St_1_Maintain_2;
  int s_3_St_1_Maintain_1;
  int r_St_1_Heat;
  int s_3_St_1_Heat_3;
  int s_3_St_1_Heat_2;
  int s_3_St_1_Heat_1;
  int r_St_1_Off;
  int s_3_St_1_Off_3;
  int s_3_St_1_Off_2;
  int s_3_St_1_Off_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int s_3_2_0;
  int s_3_3_0_0;
  int s_3_3_0_1;
  int s_3_2_1;
  int s_3_3_1_0;
  int s_3_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3_3;
  int s_3_2;
  int s_3_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_191;
  ck_2_4 = self->v_192;
  ck_3 = self->v_193;
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
          s_3_St_1_Heat_1 = true;
        } else {
          s_3_St_1_Heat_1 = v_9_1;
        };
        if (f) {
          v_9_2 = false;
        } else {
          v_9_2 = true;
        };
        if (tok) {
          s_3_St_1_Heat_2 = true;
        } else {
          s_3_St_1_Heat_2 = v_9_2;
        };
        if (f) {
          v_9_3 = false;
        } else {
          v_9_3 = true;
        };
        if (tok) {
          s_3_St_1_Heat_3 = false;
        } else {
          s_3_St_1_Heat_3 = v_9_3;
        };
        v_209 = r_St_1_Heat;
        v_194 = s_3_St_1_Heat_1;
        v_195 = s_3_St_1_Heat_2;
        v_196 = s_3_St_1_Heat_3;
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
        v_209 = r_St_1_Maintain;
        if (v_6) {
          s_3_St_1_Maintain_1 = false;
        } else {
          s_3_St_1_Maintain_1 = v_7_1;
        };
        v_194 = s_3_St_1_Maintain_1;
        if (v_6) {
          s_3_St_1_Maintain_2 = false;
        } else {
          s_3_St_1_Maintain_2 = v_7_2;
        };
        v_195 = s_3_St_1_Maintain_2;
        if (v_6) {
          s_3_St_1_Maintain_3 = true;
        } else {
          s_3_St_1_Maintain_3 = v_7_3;
        };
        v_196 = s_3_St_1_Maintain_3;
      };
      v_203 = v_194;
      v_204 = v_195;
      v_205 = v_196;
      v_211 = v_209;
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
        if (s_3_St_1_Heat_1) {
          s_3_St_1_Heat_2_1 = s_3_St_1_Heat_2;
          if (s_3_St_1_Heat_2_1) {
            s_3_St_1_Heat_3_1_1 = s_3_St_1_Heat_3;
          } else {
            s_3_St_1_Heat_3_1_0 = s_3_St_1_Heat_3;
          };
        } else {
          s_3_St_1_Heat_2_0 = s_3_St_1_Heat_2;
          if (s_3_St_1_Heat_2_0) {
            s_3_St_1_Heat_3_0_1 = s_3_St_1_Heat_3;
          } else {
            s_3_St_1_Heat_3_0_0 = s_3_St_1_Heat_3;
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
        if (s_3_St_1_Maintain_1) {
          s_3_St_1_Maintain_2_1 = s_3_St_1_Maintain_2;
          if (s_3_St_1_Maintain_2_1) {
            s_3_St_1_Maintain_3_1_1 = s_3_St_1_Maintain_3;
          } else {
            s_3_St_1_Maintain_3_1_0 = s_3_St_1_Maintain_3;
          };
        } else {
          s_3_St_1_Maintain_2_0 = s_3_St_1_Maintain_2;
          if (s_3_St_1_Maintain_2_0) {
            s_3_St_1_Maintain_3_0_1 = s_3_St_1_Maintain_3;
          } else {
            s_3_St_1_Maintain_3_0_0 = s_3_St_1_Maintain_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_210 = true;
        v_197 = true;
        v_198 = true;
        v_199 = true;
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
        v_210 = r_St_1_Off;
        if (v_11) {
          s_3_St_1_Off_1 = true;
        } else {
          s_3_St_1_Off_1 = v_14_1;
        };
        v_197 = s_3_St_1_Off_1;
        if (v_11) {
          s_3_St_1_Off_2 = true;
        } else {
          s_3_St_1_Off_2 = v_14_2;
        };
        v_198 = s_3_St_1_Off_2;
        if (v_11) {
          s_3_St_1_Off_3 = true;
        } else {
          s_3_St_1_Off_3 = v_14_3;
        };
        v_199 = s_3_St_1_Off_3;
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
        if (s_3_St_1_Off_1) {
          s_3_St_1_Off_2_1 = s_3_St_1_Off_2;
          if (s_3_St_1_Off_2_1) {
            s_3_St_1_Off_3_1_1 = s_3_St_1_Off_3;
          } else {
            s_3_St_1_Off_3_1_0 = s_3_St_1_Off_3;
          };
        } else {
          s_3_St_1_Off_2_0 = s_3_St_1_Off_2;
          if (s_3_St_1_Off_2_0) {
            s_3_St_1_Off_3_0_1 = s_3_St_1_Off_3;
          } else {
            s_3_St_1_Off_3_0_0 = s_3_St_1_Off_3;
          };
        };
      };
      v_203 = v_197;
      v_204 = v_198;
      v_205 = v_199;
      v_211 = v_210;
    };
    s_3_1 = v_203;
    s_3_2 = v_204;
    s_3_3 = v_205;
    r = v_211;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_206 = true;
      v_207 = true;
      v_208 = true;
      v_213 = true;
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
          s_3_St_1_Reheat_1 = true;
        } else {
          s_3_St_1_Reheat_1 = v_1;
        };
        if (f) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (tok) {
          s_3_St_1_Reheat_2 = true;
        } else {
          s_3_St_1_Reheat_2 = v_2;
        };
        if (f) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (tok) {
          s_3_St_1_Reheat_3 = false;
        } else {
          s_3_St_1_Reheat_3 = v_3;
        };
        v_212 = r_St_1_Reheat;
        v_200 = s_3_St_1_Reheat_1;
        v_201 = s_3_St_1_Reheat_2;
        v_202 = s_3_St_1_Reheat_3;
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
        v_212 = r_St_1_Standby;
        if (c) {
          s_3_St_1_Standby_1 = true;
        } else {
          s_3_St_1_Standby_1 = false;
        };
        v_200 = s_3_St_1_Standby_1;
        if (c) {
          s_3_St_1_Standby_2 = true;
        } else {
          s_3_St_1_Standby_2 = false;
        };
        v_201 = s_3_St_1_Standby_2;
        if (c) {
          s_3_St_1_Standby_3 = true;
        } else {
          s_3_St_1_Standby_3 = false;
        };
        v_202 = s_3_St_1_Standby_3;
      };
      v_206 = v_200;
      v_207 = v_201;
      v_208 = v_202;
      v_213 = v_212;
    };
    s_3_1 = v_206;
    s_3_2 = v_207;
    s_3_3 = v_208;
    r = v_213;
  };
  ck_2_1 = s_3_1;
  ck_2_2 = s_3_2;
  ck_2_3 = s_3_3;
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
        v_161 = p_St_1_Heat;
        v_166 = i_St_1_Heat;
        v_186 = nr_St_1_Heat;
        v_171 = ns_St_1_Heat_1;
        v_172 = ns_St_1_Heat_2;
        v_173 = ns_St_1_Heat_3;
      } else {
        p_St_1_Maintain = 300;
        v_161 = p_St_1_Maintain;
        i_St_1_Maintain = 2;
        v_166 = i_St_1_Maintain;
        nr_St_1_Maintain = false;
        v_186 = nr_St_1_Maintain;
        ns_St_1_Maintain_1 = true;
        v_171 = ns_St_1_Maintain_1;
        ns_St_1_Maintain_2 = true;
        v_172 = ns_St_1_Maintain_2;
        ns_St_1_Maintain_3 = false;
        v_173 = ns_St_1_Maintain_3;
      };
      v_163 = v_161;
      v_168 = v_166;
      v_180 = v_171;
      v_181 = v_172;
      v_182 = v_173;
      v_188 = v_186;
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
        v_162 = 0;
        v_167 = 0;
        v_187 = true;
        v_174 = true;
        v_175 = true;
        v_176 = true;
      } else {
        p_St_1_Off = 0;
        v_162 = p_St_1_Off;
        i_St_1_Off = 0;
        v_167 = i_St_1_Off;
        nr_St_1_Off = false;
        v_187 = nr_St_1_Off;
        ns_St_1_Off_1 = true;
        v_174 = ns_St_1_Off_1;
        ns_St_1_Off_2 = false;
        v_175 = ns_St_1_Off_2;
        ns_St_1_Off_3 = false;
        v_176 = ns_St_1_Off_3;
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
      v_163 = v_162;
      v_168 = v_167;
      v_180 = v_174;
      v_181 = v_175;
      v_182 = v_176;
      v_188 = v_187;
    };
    _out->p = v_163;
    _out->i = v_168;
    ns_1 = v_180;
    ns_2 = v_181;
    ns_3 = v_182;
    nr = v_188;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_165 = 0;
      v_170 = 0;
      v_183 = true;
      v_184 = true;
      v_185 = true;
      v_190 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        p_St_1_Reheat = 1000;
        i_St_1_Reheat = 3;
        nr_St_1_Reheat = false;
        ns_St_1_Reheat_1 = false;
        ns_St_1_Reheat_2 = false;
        ns_St_1_Reheat_3 = true;
        v_164 = p_St_1_Reheat;
        v_169 = i_St_1_Reheat;
        v_189 = nr_St_1_Reheat;
        v_177 = ns_St_1_Reheat_1;
        v_178 = ns_St_1_Reheat_2;
        v_179 = ns_St_1_Reheat_3;
      } else {
        p_St_1_Standby = 0;
        v_164 = p_St_1_Standby;
        i_St_1_Standby = 4;
        v_169 = i_St_1_Standby;
        nr_St_1_Standby = false;
        v_189 = nr_St_1_Standby;
        ns_St_1_Standby_1 = false;
        v_177 = ns_St_1_Standby_1;
        ns_St_1_Standby_2 = false;
        v_178 = ns_St_1_Standby_2;
        ns_St_1_Standby_3 = false;
        v_179 = ns_St_1_Standby_3;
      };
      v_165 = v_164;
      v_170 = v_169;
      v_183 = v_177;
      v_184 = v_178;
      v_185 = v_179;
      v_190 = v_189;
    };
    _out->p = v_165;
    _out->i = v_170;
    ns_1 = v_183;
    ns_2 = v_184;
    ns_3 = v_185;
    nr = v_190;
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
  if (s_3_1) {
    s_3_2_1 = s_3_2;
    if (s_3_2_1) {
      s_3_3_1_1 = s_3_3;
    } else {
      s_3_3_1_0 = s_3_3;
    };
  } else {
    s_3_2_0 = s_3_2;
    if (s_3_2_0) {
      s_3_3_0_1 = s_3_3;
    } else {
      s_3_3_0_0 = s_3_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_4_0)) {
      if (ck_3_0_0) {
        if (s_3_St_1_Reheat_1) {
          s_3_St_1_Reheat_2_1 = s_3_St_1_Reheat_2;
          if (s_3_St_1_Reheat_2_1) {
            s_3_St_1_Reheat_3_1_1 = s_3_St_1_Reheat_3;
          } else {
            s_3_St_1_Reheat_3_1_0 = s_3_St_1_Reheat_3;
          };
        } else {
          s_3_St_1_Reheat_2_0 = s_3_St_1_Reheat_2;
          if (s_3_St_1_Reheat_2_0) {
            s_3_St_1_Reheat_3_0_1 = s_3_St_1_Reheat_3;
          } else {
            s_3_St_1_Reheat_3_0_0 = s_3_St_1_Reheat_3;
          };
        };
      } else {
        if (s_3_St_1_Standby_1) {
          s_3_St_1_Standby_2_1 = s_3_St_1_Standby_2;
          if (s_3_St_1_Standby_2_1) {
            s_3_St_1_Standby_3_1_1 = s_3_St_1_Standby_3;
          } else {
            s_3_St_1_Standby_3_1_0 = s_3_St_1_Standby_3;
          };
        } else {
          s_3_St_1_Standby_2_0 = s_3_St_1_Standby_2;
          if (s_3_St_1_Standby_2_0) {
            s_3_St_1_Standby_3_0_1 = s_3_St_1_Standby_3;
          } else {
            s_3_St_1_Standby_3_0_0 = s_3_St_1_Standby_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_191 = ns_1;
  self->v_192 = ns_2;
  self->v_193 = ns_3;;
}

void P2_joao__rad_reset(P2_joao__rad_mem* self) {
  self->pnr = false;
  self->v_224 = false;
  self->v_225 = false;
}

void P2_joao__rad_step(int up1, int down1, int up2, int down2, int c1,
                       int c2, P2_joao__rad_out* _out, P2_joao__rad_mem* self) {
  
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
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
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
  ck_1 = self->v_224;
  ck_2 = self->v_225;
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
      v_230 = r_St_2_Eco;
      if (v_22) {
        s_St_2_Eco_1 = true;
      } else {
        s_St_2_Eco_1 = v_24_1;
      };
      v_226 = s_St_2_Eco_1;
      if (v_22) {
        s_St_2_Eco_2 = false;
      } else {
        s_St_2_Eco_2 = v_24_2;
      };
      v_227 = s_St_2_Eco_2;
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
      v_230 = r_St_2_Frostprotection;
      v_226 = s_St_2_Frostprotection_1;
      v_227 = s_St_2_Frostprotection_2;
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
    s_1 = v_226;
    s_2 = v_227;
    r = v_230;
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
      v_231 = r_St_2_High;
      if (v_16) {
        s_St_2_High_1 = true;
      } else {
        s_St_2_High_1 = v_19_1;
      };
      v_228 = s_St_2_High_1;
      if (v_16) {
        s_St_2_High_2 = true;
      } else {
        s_St_2_High_2 = v_19_2;
      };
      v_229 = s_St_2_High_2;
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
      v_231 = r_St_2_Off;
      v_228 = s_St_2_Off_1;
      v_229 = s_St_2_Off_2;
    };
    s_1 = v_228;
    s_2 = v_229;
    r = v_231;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      p_St_2_Eco = 1500;
      v_214 = p_St_2_Eco;
      i_St_2_Eco = 2;
      v_216 = i_St_2_Eco;
      nr_St_2_Eco = false;
      v_222 = nr_St_2_Eco;
      ns_St_2_Eco_1 = true;
      v_218 = ns_St_2_Eco_1;
      ns_St_2_Eco_2 = true;
      v_219 = ns_St_2_Eco_2;
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
      v_214 = p_St_2_Frostprotection;
      v_216 = i_St_2_Frostprotection;
      v_222 = nr_St_2_Frostprotection;
      v_218 = ns_St_2_Frostprotection_1;
      v_219 = ns_St_2_Frostprotection_2;
      if (ns_St_2_Frostprotection_1) {
        ns_St_2_Frostprotection_2_1 = ns_St_2_Frostprotection_2;
      } else {
        ns_St_2_Frostprotection_2_0 = ns_St_2_Frostprotection_2;
      };
    };
    _out->p = v_214;
    _out->i = v_216;
    ns_1 = v_218;
    ns_2 = v_219;
    nr = v_222;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      p_St_2_High = 2000;
      v_215 = p_St_2_High;
      i_St_2_High = 3;
      v_217 = i_St_2_High;
      nr_St_2_High = false;
      v_223 = nr_St_2_High;
      ns_St_2_High_1 = false;
      v_220 = ns_St_2_High_1;
      ns_St_2_High_2 = true;
      v_221 = ns_St_2_High_2;
    } else {
      p_St_2_Off = 0;
      i_St_2_Off = 0;
      nr_St_2_Off = false;
      ns_St_2_Off_1 = false;
      ns_St_2_Off_2 = false;
      v_215 = p_St_2_Off;
      v_217 = i_St_2_Off;
      v_223 = nr_St_2_Off;
      v_220 = ns_St_2_Off_1;
      v_221 = ns_St_2_Off_2;
    };
    _out->p = v_215;
    _out->i = v_217;
    ns_1 = v_220;
    ns_2 = v_221;
    nr = v_223;
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
  self->v_224 = ns_1;
  self->v_225 = ns_2;;
}

void P2_joao__door_reset(P2_joao__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P2_joao__door_step(int push, int c_door, P2_joao__door_out* _out,
                        P2_joao__door_mem* self) {
  
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

void P2_joao__room_reset(P2_joao__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P2_joao__room_step(int presence, P2_joao__room_out* _out,
                        P2_joao__room_mem* self) {
  
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

void P2_joao__light_source_reset(P2_joao__light_source_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void P2_joao__light_source_step(int botao, int c1, int c2,
                                P2_joao__light_source_out* _out,
                                P2_joao__light_source_mem* self) {
  
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
  int s_4_St_5_Ligado_1;
  int r_St_5_Desligado;
  int s_4_St_5_Desligado_1;
  int s_4_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_40 = !(c2);
    v_41 = (botao&&v_40);
    v_42 = (v_41||c1);
    if (v_42) {
      r_St_5_Desligado = true;
      s_4_St_5_Desligado_1 = false;
    } else {
      r_St_5_Desligado = self->pnr;
      s_4_St_5_Desligado_1 = true;
    };
    r = r_St_5_Desligado;
    s_4_1 = s_4_St_5_Desligado_1;
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
      s_4_St_5_Ligado_1 = true;
    } else {
      s_4_St_5_Ligado_1 = false;
    };
    s_4_1 = s_4_St_5_Ligado_1;
  };
  ck_6_1 = s_4_1;
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

void P2_joao__management_policy_reset(P2_joao__management_policy_mem* self) {
  self->pnr = false;
  self->v_244 = false;
  self->v_245 = false;
}

void P2_joao__management_policy_step(int eco_input, int comfort_input,
                                     P2_joao__management_policy_out* _out,
                                     P2_joao__management_policy_mem* self) {
  
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
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
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
  ck_1 = self->v_244;
  ck_2 = self->v_245;
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
      v_250 = r_St_6_Comfort;
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
      v_246 = s_St_6_Comfort_1;
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
      v_247 = s_St_6_Comfort_2;
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
      v_250 = r_St_6_Eco;
      v_246 = s_St_6_Eco_1;
      v_247 = s_St_6_Eco_2;
    };
    s_1 = v_246;
    s_2 = v_247;
    r = v_250;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_251 = true;
      v_248 = true;
      v_249 = true;
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
      v_251 = r_St_6_Minimal_safety;
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
      v_248 = s_St_6_Minimal_safety_1;
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
      v_249 = s_St_6_Minimal_safety_2;
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
    s_1 = v_248;
    s_2 = v_249;
    r = v_251;
  };
  ck_7_1 = s_1;
  ck_7_2 = s_2;
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      pl_St_6_Comfort = 7000;
      v_236 = pl_St_6_Comfort;
      eco_St_6_Comfort = false;
      v_232 = eco_St_6_Comfort;
      comfort_St_6_Comfort = true;
      v_234 = comfort_St_6_Comfort;
      nr_St_6_Comfort = false;
      v_242 = nr_St_6_Comfort;
      ns_St_6_Comfort_1 = true;
      v_238 = ns_St_6_Comfort_1;
      ns_St_6_Comfort_2 = true;
      v_239 = ns_St_6_Comfort_2;
    } else {
      pl_St_6_Eco = 5000;
      eco_St_6_Eco = true;
      comfort_St_6_Eco = false;
      nr_St_6_Eco = false;
      ns_St_6_Eco_1 = true;
      ns_St_6_Eco_2 = false;
      v_236 = pl_St_6_Eco;
      v_232 = eco_St_6_Eco;
      v_234 = comfort_St_6_Eco;
      v_242 = nr_St_6_Eco;
      v_238 = ns_St_6_Eco_1;
      v_239 = ns_St_6_Eco_2;
    };
    _out->eco = v_232;
    _out->comfort = v_234;
    _out->pl = v_236;
    ns_1 = v_238;
    ns_2 = v_239;
    nr = v_242;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      v_237 = 0;
      v_233 = true;
      v_235 = true;
      v_243 = true;
      v_240 = true;
      v_241 = true;
    } else {
      pl_St_6_Minimal_safety = 3000;
      v_237 = pl_St_6_Minimal_safety;
      eco_St_6_Minimal_safety = false;
      v_233 = eco_St_6_Minimal_safety;
      comfort_St_6_Minimal_safety = false;
      v_235 = comfort_St_6_Minimal_safety;
      nr_St_6_Minimal_safety = false;
      v_243 = nr_St_6_Minimal_safety;
      ns_St_6_Minimal_safety_1 = false;
      v_240 = ns_St_6_Minimal_safety_1;
      ns_St_6_Minimal_safety_2 = false;
      v_241 = ns_St_6_Minimal_safety_2;
      if (ns_St_6_Minimal_safety_1) {
        ns_St_6_Minimal_safety_2_1 = ns_St_6_Minimal_safety_2;
      } else {
        ns_St_6_Minimal_safety_2_0 = ns_St_6_Minimal_safety_2;
      };
    };
    _out->eco = v_233;
    _out->comfort = v_235;
    _out->pl = v_237;
    ns_1 = v_240;
    ns_2 = v_241;
    nr = v_243;
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
  self->v_244 = ns_1;
  self->v_245 = ns_2;;
}

void P2_joao__contrato_reset(P2_joao__contrato_mem* self) {
  self->pnr = false;
  self->ck_17_1 = true;
  self->pnr_1 = false;
  self->ck_15_1 = true;
  self->pnr_2 = false;
  self->ck_13_1 = true;
  self->pnr_3 = false;
  self->ck_11_1 = true;
  self->pnr_4 = false;
  self->ck_9_1 = true;
  self->pnr_5 = false;
  self->v_262 = false;
  self->v_263 = false;
}

void P2_joao__contrato_step(int cj, int cp, int pporta, int pjanela,
                            int rup1, int rdown1, int rup2, int rdown2,
                            int presenca, int bl, int bt,
                            P2_joao__contrato_out* _out,
                            P2_joao__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
  int nr_St_7_Ocupied;
  int ns_St_7_Ocupied_1;
  int room_oc_St_7_Ocupied;
  int nr_St_7_Empty;
  int ns_St_7_Empty_1;
  int room_oc_St_7_Empty;
  int ck_18_1;
  int v_97;
  int r_St_7_Ocupied;
  int s_5_St_7_Ocupied_1;
  int r_St_7_Empty;
  int s_5_St_7_Empty_1;
  int nr_1_St_8_Ligado;
  int ns_1_St_8_Ligado_1;
  int s_1_St_8_Ligado;
  int nr_1_St_8_Desligado;
  int ns_1_St_8_Desligado_1;
  int s_1_St_8_Desligado;
  int ck_16_1;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int r_1_St_8_Ligado;
  int s_6_St_8_Ligado_1;
  int r_1_St_8_Desligado;
  int s_6_St_8_Desligado_1;
  int nr_2_St_9_Ligado;
  int ns_2_St_9_Ligado_1;
  int s_St_9_Ligado;
  int nr_2_St_9_Desligado;
  int ns_2_St_9_Desligado_1;
  int s_St_9_Desligado;
  int ck_14_1;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int r_2_St_9_Ligado;
  int s_7_St_9_Ligado_1;
  int r_2_St_9_Desligado;
  int s_7_St_9_Desligado_1;
  int nr_3_St_10_Open;
  int ns_3_St_10_Open_1;
  int door_open_1_St_10_Open;
  int nr_3_St_10_Closed;
  int ns_3_St_10_Closed_1;
  int door_open_1_St_10_Closed;
  int ck_12_1;
  int v_84;
  int v_83;
  int v_82;
  int r_3_St_10_Open;
  int s_8_St_10_Open_1;
  int r_3_St_10_Closed;
  int s_8_St_10_Closed_1;
  int nr_4_St_11_Open;
  int ns_4_St_11_Open_1;
  int door_open_St_11_Open;
  int nr_4_St_11_Closed;
  int ns_4_St_11_Closed_1;
  int door_open_St_11_Closed;
  int ck_10_1;
  int v_81;
  int v_80;
  int v_79;
  int r_4_St_11_Open;
  int s_9_St_11_Open_1;
  int r_4_St_11_Closed;
  int s_9_St_11_Closed_1;
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
  int ns_5_St_12_High_2_0;
  int ns_5_St_12_High_2_1;
  int ns_5_St_12_Eco_2_0;
  int ns_5_St_12_Eco_2_1;
  int ns_5_St_12_Frostprotection_2_0;
  int ns_5_St_12_Frostprotection_2_1;
  int ns_5_St_12_Off_2_0;
  int ns_5_St_12_Off_2_1;
  int ck_8_2_0;
  int ck_8_2_1;
  int nr_5_St_12_High;
  int ns_5_St_12_High_2;
  int ns_5_St_12_High_1;
  int i_St_12_High;
  int p_St_12_High;
  int nr_5_St_12_Eco;
  int ns_5_St_12_Eco_2;
  int ns_5_St_12_Eco_1;
  int i_St_12_Eco;
  int p_St_12_Eco;
  int nr_5_St_12_Frostprotection;
  int ns_5_St_12_Frostprotection_2;
  int ns_5_St_12_Frostprotection_1;
  int i_St_12_Frostprotection;
  int p_St_12_Frostprotection;
  int nr_5_St_12_Off;
  int ns_5_St_12_Off_2;
  int ns_5_St_12_Off_1;
  int i_St_12_Off;
  int p_St_12_Off;
  int ck_8_2;
  int ck_8_1;
  int v_78;
  int v_77;
  int v_75_2_0;
  int v_75_2_1;
  int v_73_2_0;
  int v_73_2_1;
  int v_76;
  int v_75_2;
  int v_75_1;
  int v_74;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_67_2_0;
  int v_67_2_1;
  int v_68;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65;
  int v_64;
  int v_62_2_0;
  int v_62_2_1;
  int v_63;
  int v_62_2;
  int v_62_1;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int s_10_St_12_High_2_0;
  int s_10_St_12_High_2_1;
  int s_10_St_12_Eco_2_0;
  int s_10_St_12_Eco_2_1;
  int s_10_St_12_Frostprotection_2_0;
  int s_10_St_12_Frostprotection_2_1;
  int s_10_St_12_Off_2_0;
  int s_10_St_12_Off_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_5_St_12_High;
  int s_10_St_12_High_2;
  int s_10_St_12_High_1;
  int r_5_St_12_Eco;
  int s_10_St_12_Eco_2;
  int s_10_St_12_Eco_1;
  int r_5_St_12_Frostprotection;
  int s_10_St_12_Frostprotection_2;
  int s_10_St_12_Frostprotection_1;
  int r_5_St_12_Off;
  int s_10_St_12_Off_2;
  int s_10_St_12_Off_1;
  int ck_2;
  int ck_1;
  int s_10_2_0;
  int s_10_2_1;
  int ns_5_2_0;
  int ns_5_2_1;
  int s_10_2;
  int s_10_1;
  int ns_5_2;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_9_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_8_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_6_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_5_1;
  int ns_1_2;
  int r;
  int nr;
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
  int ct2;
  int ct1;
  int cl2;
  int cl1;
  int rc2;
  int rc1;
  presence = presenca;
  botao_1 = bt;
  botao = bl;
  push_1 = pjanela;
  c_door_1 = cj;
  push = pporta;
  c_door = cp;
  up1 = rup1;
  down1 = rdown1;
  up2 = rup2;
  down2 = rdown2;
  ck_1 = self->v_262;
  ck_2 = self->v_263;
  Contrato_controller__contrato_controller_step(cj, cp, pporta, pjanela,
                                                rup1, rdown1, rup2, rdown2,
                                                presenca, bl, bt,
                                                self->v_263, self->v_262,
                                                self->pnr_5, self->ck_9_1,
                                                self->pnr_4, self->ck_11_1,
                                                self->pnr_3, self->ck_13_1,
                                                self->pnr_2, self->ck_15_1,
                                                self->pnr_1, self->ck_17_1,
                                                self->pnr, true, true, true,
                                                true, true, true,
                                                &Contrato_controller__contrato_controller_out_st);
  ct2 = Contrato_controller__contrato_controller_out_st.contrato_ct2;
  ct1 = Contrato_controller__contrato_controller_out_st.contrato_ct1;
  cl2 = Contrato_controller__contrato_controller_out_st.contrato_cl2;
  cl1 = Contrato_controller__contrato_controller_out_st.contrato_cl1;
  rc2 = Contrato_controller__contrato_controller_out_st.contrato_rc2;
  rc1 = Contrato_controller__contrato_controller_out_st.contrato_rc1;
  c1_2 = ct1;
  c2_2 = ct2;
  c1_1 = cl1;
  c2_1 = cl2;
  c1 = rc1;
  c2 = rc2;
  if (self->ck_17_1) {
    if (presence) {
      r_St_7_Empty = true;
      s_5_St_7_Empty_1 = false;
    } else {
      r_St_7_Empty = self->pnr;
      s_5_St_7_Empty_1 = true;
    };
    r = r_St_7_Empty;
    s_5_1 = s_5_St_7_Empty_1;
  } else {
    v_97 = !(presence);
    if (v_97) {
      r_St_7_Ocupied = true;
    } else {
      r_St_7_Ocupied = self->pnr;
    };
    r = r_St_7_Ocupied;
    if (v_97) {
      s_5_St_7_Ocupied_1 = true;
    } else {
      s_5_St_7_Ocupied_1 = false;
    };
    s_5_1 = s_5_St_7_Ocupied_1;
  };
  ck_18_1 = s_5_1;
  if (ck_18_1) {
    room_oc_St_7_Empty = false;
    nr_St_7_Empty = false;
    ns_St_7_Empty_1 = true;
    room_oc = room_oc_St_7_Empty;
    nr = nr_St_7_Empty;
    ns_1_2 = ns_St_7_Empty_1;
  } else {
    room_oc_St_7_Ocupied = true;
    room_oc = room_oc_St_7_Ocupied;
    nr_St_7_Ocupied = false;
    nr = nr_St_7_Ocupied;
    ns_St_7_Ocupied_1 = false;
    ns_1_2 = ns_St_7_Ocupied_1;
  };
  _out->ocupado = room_oc;
  v_54 = !(_out->ocupado);
  if (self->ck_15_1) {
    v_94 = !(c2_2);
    v_95 = (botao_1&&v_94);
    v_96 = (v_95||c1_2);
    if (v_96) {
      r_1_St_8_Desligado = true;
      s_6_St_8_Desligado_1 = false;
    } else {
      r_1_St_8_Desligado = self->pnr_1;
      s_6_St_8_Desligado_1 = true;
    };
    r_1 = r_1_St_8_Desligado;
    s_6_1 = s_6_St_8_Desligado_1;
  } else {
    v_91 = !(c1_2);
    v_92 = (botao_1&&v_91);
    v_93 = (v_92||c2_2);
    if (v_93) {
      r_1_St_8_Ligado = true;
    } else {
      r_1_St_8_Ligado = self->pnr_1;
    };
    r_1 = r_1_St_8_Ligado;
    if (v_93) {
      s_6_St_8_Ligado_1 = true;
    } else {
      s_6_St_8_Ligado_1 = false;
    };
    s_6_1 = s_6_St_8_Ligado_1;
  };
  ck_16_1 = s_6_1;
  if (ck_16_1) {
    s_1_St_8_Desligado = false;
    nr_1_St_8_Desligado = false;
    ns_1_St_8_Desligado_1 = true;
    s_1 = s_1_St_8_Desligado;
    nr_1 = nr_1_St_8_Desligado;
    ns_1_1 = ns_1_St_8_Desligado_1;
  } else {
    s_1_St_8_Ligado = true;
    s_1 = s_1_St_8_Ligado;
    nr_1_St_8_Ligado = false;
    nr_1 = nr_1_St_8_Ligado;
    ns_1_St_8_Ligado_1 = false;
    ns_1_1 = ns_1_St_8_Ligado_1;
  };
  _out->tv = s_1;
  v_55 = (v_54||_out->tv);
  if (self->ck_13_1) {
    v_88 = !(c2_1);
    v_89 = (botao&&v_88);
    v_90 = (v_89||c1_1);
    if (v_90) {
      r_2_St_9_Desligado = true;
      s_7_St_9_Desligado_1 = false;
    } else {
      r_2_St_9_Desligado = self->pnr_2;
      s_7_St_9_Desligado_1 = true;
    };
    r_2 = r_2_St_9_Desligado;
    s_7_1 = s_7_St_9_Desligado_1;
  } else {
    v_85 = !(c1_1);
    v_86 = (botao&&v_85);
    v_87 = (v_86||c2_1);
    if (v_87) {
      r_2_St_9_Ligado = true;
    } else {
      r_2_St_9_Ligado = self->pnr_2;
    };
    r_2 = r_2_St_9_Ligado;
    if (v_87) {
      s_7_St_9_Ligado_1 = true;
    } else {
      s_7_St_9_Ligado_1 = false;
    };
    s_7_1 = s_7_St_9_Ligado_1;
  };
  ck_14_1 = s_7_1;
  if (ck_14_1) {
    s_St_9_Desligado = false;
    nr_2_St_9_Desligado = false;
    ns_2_St_9_Desligado_1 = true;
    s = s_St_9_Desligado;
    nr_2 = nr_2_St_9_Desligado;
    ns_2_1 = ns_2_St_9_Desligado_1;
  } else {
    s_St_9_Ligado = true;
    s = s_St_9_Ligado;
    nr_2_St_9_Ligado = false;
    nr_2 = nr_2_St_9_Ligado;
    ns_2_St_9_Ligado_1 = false;
    ns_2_1 = ns_2_St_9_Ligado_1;
  };
  _out->lamp = s;
  v = (_out->lamp||_out->tv);
  v_50 = !(v);
  r1 = (v_55||_out->lamp);
  if (self->ck_11_1) {
    v_84 = (push_1&&c_door_1);
    if (v_84) {
      r_3_St_10_Closed = true;
      s_8_St_10_Closed_1 = false;
    } else {
      r_3_St_10_Closed = self->pnr_3;
      s_8_St_10_Closed_1 = true;
    };
    r_3 = r_3_St_10_Closed;
    s_8_1 = s_8_St_10_Closed_1;
  } else {
    v_82 = !(c_door_1);
    v_83 = (push_1||v_82);
    if (v_83) {
      r_3_St_10_Open = true;
    } else {
      r_3_St_10_Open = self->pnr_3;
    };
    r_3 = r_3_St_10_Open;
    if (v_83) {
      s_8_St_10_Open_1 = true;
    } else {
      s_8_St_10_Open_1 = false;
    };
    s_8_1 = s_8_St_10_Open_1;
  };
  ck_12_1 = s_8_1;
  if (ck_12_1) {
    door_open_1_St_10_Closed = false;
    nr_3_St_10_Closed = false;
    ns_3_St_10_Closed_1 = true;
    door_open_1 = door_open_1_St_10_Closed;
    nr_3 = nr_3_St_10_Closed;
    ns_3_1 = ns_3_St_10_Closed_1;
  } else {
    door_open_1_St_10_Open = true;
    door_open_1 = door_open_1_St_10_Open;
    nr_3_St_10_Open = false;
    nr_3 = nr_3_St_10_Open;
    ns_3_St_10_Open_1 = false;
    ns_3_1 = ns_3_St_10_Open_1;
  };
  _out->janela = door_open_1;
  if (self->ck_9_1) {
    v_81 = (push&&c_door);
    if (v_81) {
      r_4_St_11_Closed = true;
      s_9_St_11_Closed_1 = false;
    } else {
      r_4_St_11_Closed = self->pnr_4;
      s_9_St_11_Closed_1 = true;
    };
    r_4 = r_4_St_11_Closed;
    s_9_1 = s_9_St_11_Closed_1;
  } else {
    v_79 = !(c_door);
    v_80 = (push||v_79);
    if (v_80) {
      r_4_St_11_Open = true;
    } else {
      r_4_St_11_Open = self->pnr_4;
    };
    r_4 = r_4_St_11_Open;
    if (v_80) {
      s_9_St_11_Open_1 = true;
    } else {
      s_9_St_11_Open_1 = false;
    };
    s_9_1 = s_9_St_11_Open_1;
  };
  ck_10_1 = s_9_1;
  if (ck_10_1) {
    door_open_St_11_Closed = false;
    nr_4_St_11_Closed = false;
    ns_4_St_11_Closed_1 = true;
    door_open = door_open_St_11_Closed;
    nr_4 = nr_4_St_11_Closed;
    ns_4_1 = ns_4_St_11_Closed_1;
  } else {
    door_open_St_11_Open = true;
    door_open = door_open_St_11_Open;
    nr_4_St_11_Open = false;
    nr_4 = nr_4_St_11_Open;
    ns_4_St_11_Open_1 = false;
    ns_4_1 = ns_4_St_11_Open_1;
  };
  _out->porta = door_open;
  v_52 = (_out->porta||_out->janela);
  v_53 = !(v_52);
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_66 = (up2&&c2);
      if (v_66) {
        v_68 = true;
        v_67_1 = false;
        v_67_2 = true;
      } else {
        v_68 = self->pnr_5;
        v_67_1 = true;
        v_67_2 = true;
      };
      v_64 = !(c1);
      v_65 = (down1||v_64);
      if (v_65) {
        r_5_St_12_Eco = true;
      } else {
        r_5_St_12_Eco = v_68;
      };
      v_268 = r_5_St_12_Eco;
      if (v_65) {
        s_10_St_12_Eco_1 = true;
      } else {
        s_10_St_12_Eco_1 = v_67_1;
      };
      v_264 = s_10_St_12_Eco_1;
      if (v_65) {
        s_10_St_12_Eco_2 = false;
      } else {
        s_10_St_12_Eco_2 = v_67_2;
      };
      v_265 = s_10_St_12_Eco_2;
      if (v_67_1) {
        v_67_2_1 = v_67_2;
      } else {
        v_67_2_0 = v_67_2;
      };
      if (s_10_St_12_Eco_1) {
        s_10_St_12_Eco_2_1 = s_10_St_12_Eco_2;
      } else {
        s_10_St_12_Eco_2_0 = s_10_St_12_Eco_2;
      };
    } else {
      v_71 = !(c1);
      v_72 = (down1||v_71);
      if (v_72) {
        v_74 = true;
        v_73_1 = false;
        v_73_2 = false;
      } else {
        v_74 = self->pnr_5;
        v_73_1 = true;
        v_73_2 = false;
      };
      v_70 = (up2&&c2);
      if (v_70) {
        v_76 = true;
        v_75_1 = false;
        v_75_2 = true;
      } else {
        v_76 = v_74;
        v_75_1 = v_73_1;
        v_75_2 = v_73_2;
      };
      v_69 = (up1&&c1);
      if (v_69) {
        r_5_St_12_Frostprotection = true;
        s_10_St_12_Frostprotection_1 = true;
        s_10_St_12_Frostprotection_2 = true;
      } else {
        r_5_St_12_Frostprotection = v_76;
        s_10_St_12_Frostprotection_1 = v_75_1;
        s_10_St_12_Frostprotection_2 = v_75_2;
      };
      v_268 = r_5_St_12_Frostprotection;
      v_264 = s_10_St_12_Frostprotection_1;
      v_265 = s_10_St_12_Frostprotection_2;
      if (v_73_1) {
        v_73_2_1 = v_73_2;
      } else {
        v_73_2_0 = v_73_2;
      };
      if (v_75_1) {
        v_75_2_1 = v_75_2;
      } else {
        v_75_2_0 = v_75_2;
      };
      if (s_10_St_12_Frostprotection_1) {
        s_10_St_12_Frostprotection_2_1 = s_10_St_12_Frostprotection_2;
      } else {
        s_10_St_12_Frostprotection_2_0 = s_10_St_12_Frostprotection_2;
      };
    };
    s_10_1 = v_264;
    s_10_2 = v_265;
    r_5 = v_268;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_60 = !(c2);
      v_61 = (down2||v_60);
      if (v_61) {
        v_63 = true;
        v_62_1 = true;
        v_62_2 = false;
      } else {
        v_63 = self->pnr_5;
        v_62_1 = false;
        v_62_2 = true;
      };
      v_58 = !(c1);
      v_59 = (down1||v_58);
      if (v_59) {
        r_5_St_12_High = true;
      } else {
        r_5_St_12_High = v_63;
      };
      v_269 = r_5_St_12_High;
      if (v_59) {
        s_10_St_12_High_1 = true;
      } else {
        s_10_St_12_High_1 = v_62_1;
      };
      v_266 = s_10_St_12_High_1;
      if (v_59) {
        s_10_St_12_High_2 = true;
      } else {
        s_10_St_12_High_2 = v_62_2;
      };
      v_267 = s_10_St_12_High_2;
    } else {
      v_77 = !(c1);
      v_78 = (up1||v_77);
      if (v_78) {
        r_5_St_12_Off = true;
        s_10_St_12_Off_1 = true;
        s_10_St_12_Off_2 = false;
      } else {
        r_5_St_12_Off = self->pnr_5;
        s_10_St_12_Off_1 = false;
        s_10_St_12_Off_2 = false;
      };
      v_269 = r_5_St_12_Off;
      v_266 = s_10_St_12_Off_1;
      v_267 = s_10_St_12_Off_2;
    };
    s_10_1 = v_266;
    s_10_2 = v_267;
    r_5 = v_269;
  };
  ck_8_1 = s_10_1;
  ck_8_2 = s_10_2;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      p_St_12_Eco = 1500;
      v_252 = p_St_12_Eco;
      i_St_12_Eco = 2;
      v_254 = i_St_12_Eco;
      nr_5_St_12_Eco = false;
      v_260 = nr_5_St_12_Eco;
      ns_5_St_12_Eco_1 = true;
      v_256 = ns_5_St_12_Eco_1;
      ns_5_St_12_Eco_2 = true;
      v_257 = ns_5_St_12_Eco_2;
      if (ns_5_St_12_Eco_1) {
        ns_5_St_12_Eco_2_1 = ns_5_St_12_Eco_2;
      } else {
        ns_5_St_12_Eco_2_0 = ns_5_St_12_Eco_2;
      };
    } else {
      p_St_12_Frostprotection = 300;
      i_St_12_Frostprotection = 1;
      nr_5_St_12_Frostprotection = false;
      ns_5_St_12_Frostprotection_1 = true;
      ns_5_St_12_Frostprotection_2 = false;
      v_252 = p_St_12_Frostprotection;
      v_254 = i_St_12_Frostprotection;
      v_260 = nr_5_St_12_Frostprotection;
      v_256 = ns_5_St_12_Frostprotection_1;
      v_257 = ns_5_St_12_Frostprotection_2;
      if (ns_5_St_12_Frostprotection_1) {
        ns_5_St_12_Frostprotection_2_1 = ns_5_St_12_Frostprotection_2;
      } else {
        ns_5_St_12_Frostprotection_2_0 = ns_5_St_12_Frostprotection_2;
      };
    };
    p = v_252;
    i = v_254;
    ns_5_1 = v_256;
    ns_5_2 = v_257;
    nr_5 = v_260;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      p_St_12_High = 2000;
      v_253 = p_St_12_High;
      i_St_12_High = 3;
      v_255 = i_St_12_High;
      nr_5_St_12_High = false;
      v_261 = nr_5_St_12_High;
      ns_5_St_12_High_1 = false;
      v_258 = ns_5_St_12_High_1;
      ns_5_St_12_High_2 = true;
      v_259 = ns_5_St_12_High_2;
    } else {
      p_St_12_Off = 0;
      i_St_12_Off = 0;
      nr_5_St_12_Off = false;
      ns_5_St_12_Off_1 = false;
      ns_5_St_12_Off_2 = false;
      v_253 = p_St_12_Off;
      v_255 = i_St_12_Off;
      v_261 = nr_5_St_12_Off;
      v_258 = ns_5_St_12_Off_1;
      v_259 = ns_5_St_12_Off_2;
    };
    p = v_253;
    i = v_255;
    ns_5_1 = v_258;
    ns_5_2 = v_259;
    nr_5 = v_261;
  };
  _out->rad_state = i;
  off_frost = (_out->rad_state<=1);
  v_51 = (v_50&&off_frost);
  r4 = (_out->ocupado||v_51);
  r3 = (v_53||off_frost);
  v_56 = (r1&&r3);
  v_57 = (v_56&&r4);
  _out->rad_pot = p;
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
  } else {
    ns_5_2_0 = ns_5_2;
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (ns_5_St_12_High_1) {
        ns_5_St_12_High_2_1 = ns_5_St_12_High_2;
      } else {
        ns_5_St_12_High_2_0 = ns_5_St_12_High_2;
      };
    } else {
      if (ns_5_St_12_Off_1) {
        ns_5_St_12_Off_2_1 = ns_5_St_12_Off_2;
      } else {
        ns_5_St_12_Off_2_0 = ns_5_St_12_Off_2;
      };
    };
  };
  if (s_10_1) {
    s_10_2_1 = s_10_2;
  } else {
    s_10_2_0 = s_10_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_62_1) {
        v_62_2_1 = v_62_2;
      } else {
        v_62_2_0 = v_62_2;
      };
      if (s_10_St_12_High_1) {
        s_10_St_12_High_2_1 = s_10_St_12_High_2;
      } else {
        s_10_St_12_High_2_0 = s_10_St_12_High_2;
      };
    } else {
      if (s_10_St_12_Off_1) {
        s_10_St_12_Off_2_1 = s_10_St_12_Off_2;
      } else {
        s_10_St_12_Off_2_0 = s_10_St_12_Off_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_17_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_15_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_13_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_11_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_9_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->v_262 = ns_5_1;
  self->v_263 = ns_5_2;;
}

