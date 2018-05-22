/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p2_joao.h"

void P2_joao__washingmachine_reset(P2_joao__washingmachine_mem* self) {
  self->pnr = false;
  self->v_70 = true;
  self->v_71 = true;
  self->v_72 = true;
}

void P2_joao__washingmachine_step(int e, int s, int c,
                                  P2_joao__washingmachine_out* _out,
                                  P2_joao__washingmachine_mem* self) {
  
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
  ck_1_4 = self->v_70;
  ck_2 = self->v_71;
  ck_3 = self->v_72;
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
        v_91 = r_St_Off;
        v_73 = s_2_St_Off_1;
        v_74 = s_2_St_Off_2;
        v_75 = s_2_St_Off_3;
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
        v_91 = r_St_Rinse;
        if (e) {
          s_2_St_Rinse_1 = true;
        } else {
          s_2_St_Rinse_1 = true;
        };
        v_73 = s_2_St_Rinse_1;
        if (e) {
          s_2_St_Rinse_2 = false;
        } else {
          s_2_St_Rinse_2 = true;
        };
        v_74 = s_2_St_Rinse_2;
        if (e) {
          s_2_St_Rinse_3 = false;
        } else {
          s_2_St_Rinse_3 = false;
        };
        v_75 = s_2_St_Rinse_3;
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
      v_85 = v_73;
      v_86 = v_74;
      v_87 = v_75;
      v_93 = v_91;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_92 = true;
        v_76 = true;
        v_77 = true;
        v_78 = true;
      } else {
        if (e) {
          r_St_Spin = true;
        } else {
          r_St_Spin = self->pnr;
        };
        v_92 = r_St_Spin;
        if (e) {
          s_2_St_Spin_1 = true;
        } else {
          s_2_St_Spin_1 = true;
        };
        v_76 = s_2_St_Spin_1;
        if (e) {
          s_2_St_Spin_2 = true;
        } else {
          s_2_St_Spin_2 = false;
        };
        v_77 = s_2_St_Spin_2;
        if (e) {
          s_2_St_Spin_3 = true;
        } else {
          s_2_St_Spin_3 = false;
        };
        v_78 = s_2_St_Spin_3;
      };
      v_85 = v_76;
      v_86 = v_77;
      v_87 = v_78;
      v_93 = v_92;
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
    s_2_1 = v_85;
    s_2_2 = v_86;
    s_2_3 = v_87;
    r = v_93;
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
        v_94 = r_St_Standby;
        if (c) {
          s_2_St_Standby_1 = false;
        } else {
          s_2_St_Standby_1 = false;
        };
        v_79 = s_2_St_Standby_1;
        if (c) {
          s_2_St_Standby_2 = true;
        } else {
          s_2_St_Standby_2 = true;
        };
        v_80 = s_2_St_Standby_2;
        if (c) {
          s_2_St_Standby_3 = false;
        } else {
          s_2_St_Standby_3 = true;
        };
        v_81 = s_2_St_Standby_3;
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
        v_94 = r_St_Washing;
        v_79 = s_2_St_Washing_1;
        v_80 = s_2_St_Washing_2;
        v_81 = s_2_St_Washing_3;
      };
      v_88 = v_79;
      v_89 = v_80;
      v_90 = v_81;
      v_96 = v_94;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_95 = true;
        v_82 = true;
        v_83 = true;
        v_84 = true;
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
        v_95 = r_St_Waterfill;
        if (v_1) {
          s_2_St_Waterfill_1 = false;
        } else {
          s_2_St_Waterfill_1 = v_3_1;
        };
        v_82 = s_2_St_Waterfill_1;
        if (v_1) {
          s_2_St_Waterfill_2 = true;
        } else {
          s_2_St_Waterfill_2 = v_3_2;
        };
        v_83 = s_2_St_Waterfill_2;
        if (v_1) {
          s_2_St_Waterfill_3 = true;
        } else {
          s_2_St_Waterfill_3 = v_3_3;
        };
        v_84 = s_2_St_Waterfill_3;
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
      v_88 = v_82;
      v_89 = v_83;
      v_90 = v_84;
      v_96 = v_95;
    };
    s_2_1 = v_88;
    s_2_2 = v_89;
    s_2_3 = v_90;
    r = v_96;
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
        v_34 = p_St_Off;
        v_40 = i_St_Off;
        v_64 = nr_St_Off;
        v_46 = ns_St_Off_1;
        v_47 = ns_St_Off_2;
        v_48 = ns_St_Off_3;
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
        v_34 = p_St_Rinse;
        i_St_Rinse = 3;
        v_40 = i_St_Rinse;
        nr_St_Rinse = false;
        v_64 = nr_St_Rinse;
        ns_St_Rinse_1 = true;
        v_46 = ns_St_Rinse_1;
        ns_St_Rinse_2 = true;
        v_47 = ns_St_Rinse_2;
        ns_St_Rinse_3 = false;
        v_48 = ns_St_Rinse_3;
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
      v_36 = v_34;
      v_42 = v_40;
      v_58 = v_46;
      v_59 = v_47;
      v_60 = v_48;
      v_66 = v_64;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_35 = 0;
        v_41 = 0;
        v_65 = true;
        v_49 = true;
        v_50 = true;
        v_51 = true;
      } else {
        p_St_Spin = 800;
        v_35 = p_St_Spin;
        i_St_Spin = 4;
        v_41 = i_St_Spin;
        nr_St_Spin = false;
        v_65 = nr_St_Spin;
        ns_St_Spin_1 = true;
        v_49 = ns_St_Spin_1;
        ns_St_Spin_2 = false;
        v_50 = ns_St_Spin_2;
        ns_St_Spin_3 = false;
        v_51 = ns_St_Spin_3;
      };
      v_36 = v_35;
      v_42 = v_41;
      v_58 = v_49;
      v_59 = v_50;
      v_60 = v_51;
      v_66 = v_65;
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
    _out->p = v_36;
    _out->i = v_42;
    ns_1 = v_58;
    ns_2 = v_59;
    ns_3 = v_60;
    nr = v_66;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        p_St_Standby = 0;
        v_37 = p_St_Standby;
        i_St_Standby = 5;
        v_43 = i_St_Standby;
        nr_St_Standby = false;
        v_67 = nr_St_Standby;
        ns_St_Standby_1 = false;
        v_52 = ns_St_Standby_1;
        ns_St_Standby_2 = true;
        v_53 = ns_St_Standby_2;
        ns_St_Standby_3 = true;
        v_54 = ns_St_Standby_3;
      } else {
        p_St_Washing = 250;
        i_St_Washing = 2;
        nr_St_Washing = false;
        ns_St_Washing_1 = false;
        ns_St_Washing_2 = true;
        ns_St_Washing_3 = false;
        v_37 = p_St_Washing;
        v_43 = i_St_Washing;
        v_67 = nr_St_Washing;
        v_52 = ns_St_Washing_1;
        v_53 = ns_St_Washing_2;
        v_54 = ns_St_Washing_3;
      };
      v_39 = v_37;
      v_45 = v_43;
      v_61 = v_52;
      v_62 = v_53;
      v_63 = v_54;
      v_69 = v_67;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_38 = 0;
        v_44 = 0;
        v_68 = true;
        v_55 = true;
        v_56 = true;
        v_57 = true;
      } else {
        p_St_Waterfill = 15;
        v_38 = p_St_Waterfill;
        i_St_Waterfill = 1;
        v_44 = i_St_Waterfill;
        nr_St_Waterfill = false;
        v_68 = nr_St_Waterfill;
        ns_St_Waterfill_1 = false;
        v_55 = ns_St_Waterfill_1;
        ns_St_Waterfill_2 = false;
        v_56 = ns_St_Waterfill_2;
        ns_St_Waterfill_3 = false;
        v_57 = ns_St_Waterfill_3;
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
      v_39 = v_38;
      v_45 = v_44;
      v_61 = v_55;
      v_62 = v_56;
      v_63 = v_57;
      v_69 = v_68;
    };
    _out->p = v_39;
    _out->i = v_45;
    ns_1 = v_61;
    ns_2 = v_62;
    ns_3 = v_63;
    nr = v_69;
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
  self->v_70 = ns_1;
  self->v_71 = ns_2;
  self->v_72 = ns_3;;
}

void P2_joao__oven_reset(P2_joao__oven_mem* self) {
  self->pnr = false;
  self->v_127 = true;
  self->v_128 = false;
  self->v_129 = false;
}

void P2_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P2_joao__oven_out* _out, P2_joao__oven_mem* self) {
  
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
  ck_1 = self->v_127;
  ck_2_4 = self->v_128;
  ck_3 = self->v_129;
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
        v_145 = r_St_1_Heat;
        v_130 = s_3_St_1_Heat_1;
        v_131 = s_3_St_1_Heat_2;
        v_132 = s_3_St_1_Heat_3;
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
        v_145 = r_St_1_Maintain;
        if (v_6) {
          s_3_St_1_Maintain_1 = false;
        } else {
          s_3_St_1_Maintain_1 = v_7_1;
        };
        v_130 = s_3_St_1_Maintain_1;
        if (v_6) {
          s_3_St_1_Maintain_2 = false;
        } else {
          s_3_St_1_Maintain_2 = v_7_2;
        };
        v_131 = s_3_St_1_Maintain_2;
        if (v_6) {
          s_3_St_1_Maintain_3 = true;
        } else {
          s_3_St_1_Maintain_3 = v_7_3;
        };
        v_132 = s_3_St_1_Maintain_3;
      };
      v_139 = v_130;
      v_140 = v_131;
      v_141 = v_132;
      v_147 = v_145;
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
        v_146 = true;
        v_133 = true;
        v_134 = true;
        v_135 = true;
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
        v_146 = r_St_1_Off;
        if (v_11) {
          s_3_St_1_Off_1 = true;
        } else {
          s_3_St_1_Off_1 = v_14_1;
        };
        v_133 = s_3_St_1_Off_1;
        if (v_11) {
          s_3_St_1_Off_2 = true;
        } else {
          s_3_St_1_Off_2 = v_14_2;
        };
        v_134 = s_3_St_1_Off_2;
        if (v_11) {
          s_3_St_1_Off_3 = true;
        } else {
          s_3_St_1_Off_3 = v_14_3;
        };
        v_135 = s_3_St_1_Off_3;
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
      v_139 = v_133;
      v_140 = v_134;
      v_141 = v_135;
      v_147 = v_146;
    };
    s_3_1 = v_139;
    s_3_2 = v_140;
    s_3_3 = v_141;
    r = v_147;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_142 = true;
      v_143 = true;
      v_144 = true;
      v_149 = true;
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
        v_148 = r_St_1_Reheat;
        v_136 = s_3_St_1_Reheat_1;
        v_137 = s_3_St_1_Reheat_2;
        v_138 = s_3_St_1_Reheat_3;
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
        v_148 = r_St_1_Standby;
        if (c) {
          s_3_St_1_Standby_1 = true;
        } else {
          s_3_St_1_Standby_1 = false;
        };
        v_136 = s_3_St_1_Standby_1;
        if (c) {
          s_3_St_1_Standby_2 = true;
        } else {
          s_3_St_1_Standby_2 = false;
        };
        v_137 = s_3_St_1_Standby_2;
        if (c) {
          s_3_St_1_Standby_3 = true;
        } else {
          s_3_St_1_Standby_3 = false;
        };
        v_138 = s_3_St_1_Standby_3;
      };
      v_142 = v_136;
      v_143 = v_137;
      v_144 = v_138;
      v_149 = v_148;
    };
    s_3_1 = v_142;
    s_3_2 = v_143;
    s_3_3 = v_144;
    r = v_149;
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
        v_97 = p_St_1_Heat;
        v_102 = i_St_1_Heat;
        v_122 = nr_St_1_Heat;
        v_107 = ns_St_1_Heat_1;
        v_108 = ns_St_1_Heat_2;
        v_109 = ns_St_1_Heat_3;
      } else {
        p_St_1_Maintain = 300;
        v_97 = p_St_1_Maintain;
        i_St_1_Maintain = 2;
        v_102 = i_St_1_Maintain;
        nr_St_1_Maintain = false;
        v_122 = nr_St_1_Maintain;
        ns_St_1_Maintain_1 = true;
        v_107 = ns_St_1_Maintain_1;
        ns_St_1_Maintain_2 = true;
        v_108 = ns_St_1_Maintain_2;
        ns_St_1_Maintain_3 = false;
        v_109 = ns_St_1_Maintain_3;
      };
      v_99 = v_97;
      v_104 = v_102;
      v_116 = v_107;
      v_117 = v_108;
      v_118 = v_109;
      v_124 = v_122;
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
        v_98 = 0;
        v_103 = 0;
        v_123 = true;
        v_110 = true;
        v_111 = true;
        v_112 = true;
      } else {
        p_St_1_Off = 0;
        v_98 = p_St_1_Off;
        i_St_1_Off = 0;
        v_103 = i_St_1_Off;
        nr_St_1_Off = false;
        v_123 = nr_St_1_Off;
        ns_St_1_Off_1 = true;
        v_110 = ns_St_1_Off_1;
        ns_St_1_Off_2 = false;
        v_111 = ns_St_1_Off_2;
        ns_St_1_Off_3 = false;
        v_112 = ns_St_1_Off_3;
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
      v_99 = v_98;
      v_104 = v_103;
      v_116 = v_110;
      v_117 = v_111;
      v_118 = v_112;
      v_124 = v_123;
    };
    _out->p = v_99;
    _out->i = v_104;
    ns_1 = v_116;
    ns_2 = v_117;
    ns_3 = v_118;
    nr = v_124;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_101 = 0;
      v_106 = 0;
      v_119 = true;
      v_120 = true;
      v_121 = true;
      v_126 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        p_St_1_Reheat = 1000;
        i_St_1_Reheat = 3;
        nr_St_1_Reheat = false;
        ns_St_1_Reheat_1 = false;
        ns_St_1_Reheat_2 = false;
        ns_St_1_Reheat_3 = true;
        v_100 = p_St_1_Reheat;
        v_105 = i_St_1_Reheat;
        v_125 = nr_St_1_Reheat;
        v_113 = ns_St_1_Reheat_1;
        v_114 = ns_St_1_Reheat_2;
        v_115 = ns_St_1_Reheat_3;
      } else {
        p_St_1_Standby = 0;
        v_100 = p_St_1_Standby;
        i_St_1_Standby = 4;
        v_105 = i_St_1_Standby;
        nr_St_1_Standby = false;
        v_125 = nr_St_1_Standby;
        ns_St_1_Standby_1 = false;
        v_113 = ns_St_1_Standby_1;
        ns_St_1_Standby_2 = false;
        v_114 = ns_St_1_Standby_2;
        ns_St_1_Standby_3 = false;
        v_115 = ns_St_1_Standby_3;
      };
      v_101 = v_100;
      v_106 = v_105;
      v_119 = v_113;
      v_120 = v_114;
      v_121 = v_115;
      v_126 = v_125;
    };
    _out->p = v_101;
    _out->i = v_106;
    ns_1 = v_119;
    ns_2 = v_120;
    ns_3 = v_121;
    nr = v_126;
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
  self->v_127 = ns_1;
  self->v_128 = ns_2;
  self->v_129 = ns_3;;
}

void P2_joao__contrato_reset(P2_joao__contrato_mem* self) {
  self->pnr = false;
  self->v_180 = true;
  self->v_181 = false;
  self->v_182 = false;
  self->pnr_1 = false;
  self->v_239 = true;
  self->v_240 = true;
  self->v_241 = true;
}

void P2_joao__contrato_step(int ews, int sws, int fo, int so, int tok,
                            int cold, P2_joao__contrato_out* _out,
                            P2_joao__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int ns_St_2_Standby_2_0;
  int ns_St_2_Standby_3_0_0;
  int ns_St_2_Standby_3_0_1;
  int ns_St_2_Standby_2_1;
  int ns_St_2_Standby_3_1_0;
  int ns_St_2_Standby_3_1_1;
  int ns_St_2_Reheat_2_0;
  int ns_St_2_Reheat_3_0_0;
  int ns_St_2_Reheat_3_0_1;
  int ns_St_2_Reheat_2_1;
  int ns_St_2_Reheat_3_1_0;
  int ns_St_2_Reheat_3_1_1;
  int ns_St_2_Maintain_2_0;
  int ns_St_2_Maintain_3_0_0;
  int ns_St_2_Maintain_3_0_1;
  int ns_St_2_Maintain_2_1;
  int ns_St_2_Maintain_3_1_0;
  int ns_St_2_Maintain_3_1_1;
  int ns_St_2_Heat_2_0;
  int ns_St_2_Heat_3_0_0;
  int ns_St_2_Heat_3_0_1;
  int ns_St_2_Heat_2_1;
  int ns_St_2_Heat_3_1_0;
  int ns_St_2_Heat_3_1_1;
  int ns_St_2_Off_2_0;
  int ns_St_2_Off_3_0_0;
  int ns_St_2_Off_3_0_1;
  int ns_St_2_Off_2_1;
  int ns_St_2_Off_3_1_0;
  int ns_St_2_Off_3_1_1;
  int ck_5_2_0;
  int ck_5_3_0_0;
  int ck_5_3_0_1;
  int ck_5_2_1;
  int ck_5_3_1_0;
  int ck_5_3_1_1;
  int nr_St_2_Standby;
  int ns_St_2_Standby_3;
  int ns_St_2_Standby_2;
  int ns_St_2_Standby_1;
  int i_1_St_2_Standby;
  int p_1_St_2_Standby;
  int nr_St_2_Reheat;
  int ns_St_2_Reheat_3;
  int ns_St_2_Reheat_2;
  int ns_St_2_Reheat_1;
  int i_1_St_2_Reheat;
  int p_1_St_2_Reheat;
  int nr_St_2_Maintain;
  int ns_St_2_Maintain_3;
  int ns_St_2_Maintain_2;
  int ns_St_2_Maintain_1;
  int i_1_St_2_Maintain;
  int p_1_St_2_Maintain;
  int nr_St_2_Heat;
  int ns_St_2_Heat_3;
  int ns_St_2_Heat_2;
  int ns_St_2_Heat_1;
  int i_1_St_2_Heat;
  int p_1_St_2_Heat;
  int nr_St_2_Off;
  int ns_St_2_Off_3;
  int ns_St_2_Off_2;
  int ns_St_2_Off_1;
  int i_1_St_2_Off;
  int p_1_St_2_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_32_2_0;
  int v_32_3_0_0;
  int v_32_3_0_1;
  int v_32_2_1;
  int v_32_3_1_0;
  int v_32_3_1_1;
  int v_33;
  int v_32_3;
  int v_32_2;
  int v_32_1;
  int v_31;
  int v_30;
  int v_29;
  int v_27_2_0;
  int v_27_3_0_0;
  int v_27_3_0_1;
  int v_27_2_1;
  int v_27_3_1_0;
  int v_27_3_1_1;
  int v_28;
  int v_27_3;
  int v_27_2;
  int v_27_1;
  int v_25_2_0;
  int v_25_3_0_0;
  int v_25_3_0_1;
  int v_25_2_1;
  int v_25_3_1_0;
  int v_25_3_1_1;
  int v_26;
  int v_25_3;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_22_2_0;
  int v_22_3_0_0;
  int v_22_3_0_1;
  int v_22_2_1;
  int v_22_3_1_0;
  int v_22_3_1_1;
  int v_23;
  int v_22_3;
  int v_22_2;
  int v_22_1;
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
  int s_4_St_2_Standby_2_0;
  int s_4_St_2_Standby_3_0_0;
  int s_4_St_2_Standby_3_0_1;
  int s_4_St_2_Standby_2_1;
  int s_4_St_2_Standby_3_1_0;
  int s_4_St_2_Standby_3_1_1;
  int s_4_St_2_Reheat_2_0;
  int s_4_St_2_Reheat_3_0_0;
  int s_4_St_2_Reheat_3_0_1;
  int s_4_St_2_Reheat_2_1;
  int s_4_St_2_Reheat_3_1_0;
  int s_4_St_2_Reheat_3_1_1;
  int s_4_St_2_Maintain_2_0;
  int s_4_St_2_Maintain_3_0_0;
  int s_4_St_2_Maintain_3_0_1;
  int s_4_St_2_Maintain_2_1;
  int s_4_St_2_Maintain_3_1_0;
  int s_4_St_2_Maintain_3_1_1;
  int s_4_St_2_Heat_2_0;
  int s_4_St_2_Heat_3_0_0;
  int s_4_St_2_Heat_3_0_1;
  int s_4_St_2_Heat_2_1;
  int s_4_St_2_Heat_3_1_0;
  int s_4_St_2_Heat_3_1_1;
  int s_4_St_2_Off_2_0;
  int s_4_St_2_Off_3_0_0;
  int s_4_St_2_Off_3_0_1;
  int s_4_St_2_Off_2_1;
  int s_4_St_2_Off_3_1_0;
  int s_4_St_2_Off_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int r_St_2_Standby;
  int s_4_St_2_Standby_3;
  int s_4_St_2_Standby_2;
  int s_4_St_2_Standby_1;
  int r_St_2_Reheat;
  int s_4_St_2_Reheat_3;
  int s_4_St_2_Reheat_2;
  int s_4_St_2_Reheat_1;
  int r_St_2_Maintain;
  int s_4_St_2_Maintain_3;
  int s_4_St_2_Maintain_2;
  int s_4_St_2_Maintain_1;
  int r_St_2_Heat;
  int s_4_St_2_Heat_3;
  int s_4_St_2_Heat_2;
  int s_4_St_2_Heat_1;
  int r_St_2_Off;
  int s_4_St_2_Off_3;
  int s_4_St_2_Off_2;
  int s_4_St_2_Off_1;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
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
  int ns_1_St_3_Standby_2_0;
  int ns_1_St_3_Standby_3_0_0;
  int ns_1_St_3_Standby_3_0_1;
  int ns_1_St_3_Standby_2_1;
  int ns_1_St_3_Standby_3_1_0;
  int ns_1_St_3_Standby_3_1_1;
  int ns_1_St_3_Spin_2_0;
  int ns_1_St_3_Spin_3_0_0;
  int ns_1_St_3_Spin_3_0_1;
  int ns_1_St_3_Spin_2_1;
  int ns_1_St_3_Spin_3_1_0;
  int ns_1_St_3_Spin_3_1_1;
  int ns_1_St_3_Rinse_2_0;
  int ns_1_St_3_Rinse_3_0_0;
  int ns_1_St_3_Rinse_3_0_1;
  int ns_1_St_3_Rinse_2_1;
  int ns_1_St_3_Rinse_3_1_0;
  int ns_1_St_3_Rinse_3_1_1;
  int ns_1_St_3_Washing_2_0;
  int ns_1_St_3_Washing_3_0_0;
  int ns_1_St_3_Washing_3_0_1;
  int ns_1_St_3_Washing_2_1;
  int ns_1_St_3_Washing_3_1_0;
  int ns_1_St_3_Washing_3_1_1;
  int ns_1_St_3_Waterfill_2_0;
  int ns_1_St_3_Waterfill_3_0_0;
  int ns_1_St_3_Waterfill_3_0_1;
  int ns_1_St_3_Waterfill_2_1;
  int ns_1_St_3_Waterfill_3_1_0;
  int ns_1_St_3_Waterfill_3_1_1;
  int ns_1_St_3_Off_2_0;
  int ns_1_St_3_Off_3_0_0;
  int ns_1_St_3_Off_3_0_1;
  int ns_1_St_3_Off_2_1;
  int ns_1_St_3_Off_3_1_0;
  int ns_1_St_3_Off_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_1_St_3_Standby;
  int ns_1_St_3_Standby_3;
  int ns_1_St_3_Standby_2;
  int ns_1_St_3_Standby_1;
  int i_St_3_Standby;
  int p_St_3_Standby;
  int nr_1_St_3_Spin;
  int ns_1_St_3_Spin_3;
  int ns_1_St_3_Spin_2;
  int ns_1_St_3_Spin_1;
  int i_St_3_Spin;
  int p_St_3_Spin;
  int nr_1_St_3_Rinse;
  int ns_1_St_3_Rinse_3;
  int ns_1_St_3_Rinse_2;
  int ns_1_St_3_Rinse_1;
  int i_St_3_Rinse;
  int p_St_3_Rinse;
  int nr_1_St_3_Washing;
  int ns_1_St_3_Washing_3;
  int ns_1_St_3_Washing_2;
  int ns_1_St_3_Washing_1;
  int i_St_3_Washing;
  int p_St_3_Washing;
  int nr_1_St_3_Waterfill;
  int ns_1_St_3_Waterfill_3;
  int ns_1_St_3_Waterfill_2;
  int ns_1_St_3_Waterfill_1;
  int i_St_3_Waterfill;
  int p_St_3_Waterfill;
  int nr_1_St_3_Off;
  int ns_1_St_3_Off_3;
  int ns_1_St_3_Off_2;
  int ns_1_St_3_Off_1;
  int i_St_3_Off;
  int p_St_3_Off;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_20_2_0;
  int v_20_3_0_0;
  int v_20_3_0_1;
  int v_20_2_1;
  int v_20_3_1_0;
  int v_20_3_1_1;
  int v_21;
  int v_20_3;
  int v_20_2;
  int v_20_1;
  int v_19;
  int v_18;
  int v_17;
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
  int s_5_St_3_Standby_2_0;
  int s_5_St_3_Standby_3_0_0;
  int s_5_St_3_Standby_3_0_1;
  int s_5_St_3_Standby_2_1;
  int s_5_St_3_Standby_3_1_0;
  int s_5_St_3_Standby_3_1_1;
  int s_5_St_3_Spin_2_0;
  int s_5_St_3_Spin_3_0_0;
  int s_5_St_3_Spin_3_0_1;
  int s_5_St_3_Spin_2_1;
  int s_5_St_3_Spin_3_1_0;
  int s_5_St_3_Spin_3_1_1;
  int s_5_St_3_Rinse_2_0;
  int s_5_St_3_Rinse_3_0_0;
  int s_5_St_3_Rinse_3_0_1;
  int s_5_St_3_Rinse_2_1;
  int s_5_St_3_Rinse_3_1_0;
  int s_5_St_3_Rinse_3_1_1;
  int s_5_St_3_Washing_2_0;
  int s_5_St_3_Washing_3_0_0;
  int s_5_St_3_Washing_3_0_1;
  int s_5_St_3_Washing_2_1;
  int s_5_St_3_Washing_3_1_0;
  int s_5_St_3_Washing_3_1_1;
  int s_5_St_3_Waterfill_2_0;
  int s_5_St_3_Waterfill_3_0_0;
  int s_5_St_3_Waterfill_3_0_1;
  int s_5_St_3_Waterfill_2_1;
  int s_5_St_3_Waterfill_3_1_0;
  int s_5_St_3_Waterfill_3_1_1;
  int s_5_St_3_Off_2_0;
  int s_5_St_3_Off_3_0_0;
  int s_5_St_3_Off_3_0_1;
  int s_5_St_3_Off_2_1;
  int s_5_St_3_Off_3_1_0;
  int s_5_St_3_Off_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_1_St_3_Standby;
  int s_5_St_3_Standby_3;
  int s_5_St_3_Standby_2;
  int s_5_St_3_Standby_1;
  int r_1_St_3_Spin;
  int s_5_St_3_Spin_3;
  int s_5_St_3_Spin_2;
  int s_5_St_3_Spin_1;
  int r_1_St_3_Rinse;
  int s_5_St_3_Rinse_3;
  int s_5_St_3_Rinse_2;
  int s_5_St_3_Rinse_1;
  int r_1_St_3_Washing;
  int s_5_St_3_Washing_3;
  int s_5_St_3_Washing_2;
  int s_5_St_3_Washing_1;
  int r_1_St_3_Waterfill;
  int s_5_St_3_Waterfill_3;
  int s_5_St_3_Waterfill_2;
  int s_5_St_3_Waterfill_1;
  int r_1_St_3_Off;
  int s_5_St_3_Off_3;
  int s_5_St_3_Off_2;
  int s_5_St_3_Off_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
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
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_4_3;
  int s_4_2;
  int s_4_1;
  int ns_3;
  int ns_2;
  int ns_1_4;
  int r;
  int nr;
  int f;
  int s_1;
  int c_1;
  int tok_1;
  int cold_1;
  int p_1;
  int i_1;
  int e;
  int s;
  int c;
  int p;
  int i;
  int v;
  int v_16;
  int co;
  int cws;
  f = fo;
  s_1 = so;
  tok_1 = tok;
  cold_1 = cold;
  ck_4_1 = self->v_180;
  ck_4_2 = self->v_181;
  ck_4_3 = self->v_182;
  e = ews;
  s = sws;
  ck_1 = self->v_239;
  ck_2 = self->v_240;
  ck_3_4 = self->v_241;
  Contrato_controller__contrato_controller_step(ews, sws, fo, so, tok, cold,
                                                self->v_241, self->v_240,
                                                self->v_239, self->pnr_1,
                                                self->v_182, self->v_181,
                                                self->v_180, self->pnr, true,
                                                true,
                                                &Contrato_controller__contrato_controller_out_st);
  co = Contrato_controller__contrato_controller_out_st.contrato_co;
  cws = Contrato_controller__contrato_controller_out_st.contrato_cws;
  c_1 = co;
  c = cws;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        if (f) {
          v_28 = true;
        } else {
          v_28 = self->pnr;
        };
        if (tok_1) {
          r_St_2_Heat = true;
        } else {
          r_St_2_Heat = v_28;
        };
        if (f) {
          v_27_1 = true;
        } else {
          v_27_1 = true;
        };
        if (tok_1) {
          s_4_St_2_Heat_1 = true;
        } else {
          s_4_St_2_Heat_1 = v_27_1;
        };
        if (f) {
          v_27_2 = false;
        } else {
          v_27_2 = true;
        };
        if (tok_1) {
          s_4_St_2_Heat_2 = true;
        } else {
          s_4_St_2_Heat_2 = v_27_2;
        };
        if (f) {
          v_27_3 = false;
        } else {
          v_27_3 = true;
        };
        if (tok_1) {
          s_4_St_2_Heat_3 = false;
        } else {
          s_4_St_2_Heat_3 = v_27_3;
        };
        v_198 = r_St_2_Heat;
        v_183 = s_4_St_2_Heat_1;
        v_184 = s_4_St_2_Heat_2;
        v_185 = s_4_St_2_Heat_3;
      } else {
        if (f) {
          v_26 = true;
          v_25_1 = true;
          v_25_2 = false;
          v_25_3 = false;
        } else {
          v_26 = self->pnr;
          v_25_1 = true;
          v_25_2 = true;
          v_25_3 = false;
        };
        v_24 = (cold_1&&c_1);
        if (v_24) {
          r_St_2_Maintain = true;
        } else {
          r_St_2_Maintain = v_26;
        };
        v_198 = r_St_2_Maintain;
        if (v_24) {
          s_4_St_2_Maintain_1 = false;
        } else {
          s_4_St_2_Maintain_1 = v_25_1;
        };
        v_183 = s_4_St_2_Maintain_1;
        if (v_24) {
          s_4_St_2_Maintain_2 = false;
        } else {
          s_4_St_2_Maintain_2 = v_25_2;
        };
        v_184 = s_4_St_2_Maintain_2;
        if (v_24) {
          s_4_St_2_Maintain_3 = true;
        } else {
          s_4_St_2_Maintain_3 = v_25_3;
        };
        v_185 = s_4_St_2_Maintain_3;
      };
      v_192 = v_183;
      v_193 = v_184;
      v_194 = v_185;
      v_200 = v_198;
      if (ck_4_3_1_1) {
        if (v_27_1) {
          v_27_2_1 = v_27_2;
          if (v_27_2_1) {
            v_27_3_1_1 = v_27_3;
          } else {
            v_27_3_1_0 = v_27_3;
          };
        } else {
          v_27_2_0 = v_27_2;
          if (v_27_2_0) {
            v_27_3_0_1 = v_27_3;
          } else {
            v_27_3_0_0 = v_27_3;
          };
        };
        if (s_4_St_2_Heat_1) {
          s_4_St_2_Heat_2_1 = s_4_St_2_Heat_2;
          if (s_4_St_2_Heat_2_1) {
            s_4_St_2_Heat_3_1_1 = s_4_St_2_Heat_3;
          } else {
            s_4_St_2_Heat_3_1_0 = s_4_St_2_Heat_3;
          };
        } else {
          s_4_St_2_Heat_2_0 = s_4_St_2_Heat_2;
          if (s_4_St_2_Heat_2_0) {
            s_4_St_2_Heat_3_0_1 = s_4_St_2_Heat_3;
          } else {
            s_4_St_2_Heat_3_0_0 = s_4_St_2_Heat_3;
          };
        };
      } else {
        if (v_25_1) {
          v_25_2_1 = v_25_2;
          if (v_25_2_1) {
            v_25_3_1_1 = v_25_3;
          } else {
            v_25_3_1_0 = v_25_3;
          };
        } else {
          v_25_2_0 = v_25_2;
          if (v_25_2_0) {
            v_25_3_0_1 = v_25_3;
          } else {
            v_25_3_0_0 = v_25_3;
          };
        };
        if (s_4_St_2_Maintain_1) {
          s_4_St_2_Maintain_2_1 = s_4_St_2_Maintain_2;
          if (s_4_St_2_Maintain_2_1) {
            s_4_St_2_Maintain_3_1_1 = s_4_St_2_Maintain_3;
          } else {
            s_4_St_2_Maintain_3_1_0 = s_4_St_2_Maintain_3;
          };
        } else {
          s_4_St_2_Maintain_2_0 = s_4_St_2_Maintain_2;
          if (s_4_St_2_Maintain_2_0) {
            s_4_St_2_Maintain_3_0_1 = s_4_St_2_Maintain_3;
          } else {
            s_4_St_2_Maintain_3_0_0 = s_4_St_2_Maintain_3;
          };
        };
      };
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        v_199 = true;
        v_186 = true;
        v_187 = true;
        v_188 = true;
      } else {
        v_30 = !(c_1);
        v_31 = (s_1&&v_30);
        if (v_31) {
          v_33 = true;
          v_32_1 = false;
          v_32_2 = false;
          v_32_3 = false;
        } else {
          v_33 = self->pnr;
          v_32_1 = true;
          v_32_2 = false;
          v_32_3 = false;
        };
        v_29 = (s_1&&c_1);
        if (v_29) {
          r_St_2_Off = true;
        } else {
          r_St_2_Off = v_33;
        };
        v_199 = r_St_2_Off;
        if (v_29) {
          s_4_St_2_Off_1 = true;
        } else {
          s_4_St_2_Off_1 = v_32_1;
        };
        v_186 = s_4_St_2_Off_1;
        if (v_29) {
          s_4_St_2_Off_2 = true;
        } else {
          s_4_St_2_Off_2 = v_32_2;
        };
        v_187 = s_4_St_2_Off_2;
        if (v_29) {
          s_4_St_2_Off_3 = true;
        } else {
          s_4_St_2_Off_3 = v_32_3;
        };
        v_188 = s_4_St_2_Off_3;
        if (v_32_1) {
          v_32_2_1 = v_32_2;
          if (v_32_2_1) {
            v_32_3_1_1 = v_32_3;
          } else {
            v_32_3_1_0 = v_32_3;
          };
        } else {
          v_32_2_0 = v_32_2;
          if (v_32_2_0) {
            v_32_3_0_1 = v_32_3;
          } else {
            v_32_3_0_0 = v_32_3;
          };
        };
        if (s_4_St_2_Off_1) {
          s_4_St_2_Off_2_1 = s_4_St_2_Off_2;
          if (s_4_St_2_Off_2_1) {
            s_4_St_2_Off_3_1_1 = s_4_St_2_Off_3;
          } else {
            s_4_St_2_Off_3_1_0 = s_4_St_2_Off_3;
          };
        } else {
          s_4_St_2_Off_2_0 = s_4_St_2_Off_2;
          if (s_4_St_2_Off_2_0) {
            s_4_St_2_Off_3_0_1 = s_4_St_2_Off_3;
          } else {
            s_4_St_2_Off_3_0_0 = s_4_St_2_Off_3;
          };
        };
      };
      v_192 = v_186;
      v_193 = v_187;
      v_194 = v_188;
      v_200 = v_199;
    };
    s_4_1 = v_192;
    s_4_2 = v_193;
    s_4_3 = v_194;
    r = v_200;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      v_195 = true;
      v_196 = true;
      v_197 = true;
      v_202 = true;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        if (f) {
          v_23 = true;
        } else {
          v_23 = self->pnr;
        };
        if (tok_1) {
          r_St_2_Reheat = true;
        } else {
          r_St_2_Reheat = v_23;
        };
        if (f) {
          v_22_1 = true;
        } else {
          v_22_1 = false;
        };
        if (tok_1) {
          s_4_St_2_Reheat_1 = true;
        } else {
          s_4_St_2_Reheat_1 = v_22_1;
        };
        if (f) {
          v_22_2 = false;
        } else {
          v_22_2 = false;
        };
        if (tok_1) {
          s_4_St_2_Reheat_2 = true;
        } else {
          s_4_St_2_Reheat_2 = v_22_2;
        };
        if (f) {
          v_22_3 = false;
        } else {
          v_22_3 = true;
        };
        if (tok_1) {
          s_4_St_2_Reheat_3 = false;
        } else {
          s_4_St_2_Reheat_3 = v_22_3;
        };
        v_201 = r_St_2_Reheat;
        v_189 = s_4_St_2_Reheat_1;
        v_190 = s_4_St_2_Reheat_2;
        v_191 = s_4_St_2_Reheat_3;
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
      } else {
        if (c_1) {
          r_St_2_Standby = true;
        } else {
          r_St_2_Standby = self->pnr;
        };
        v_201 = r_St_2_Standby;
        if (c_1) {
          s_4_St_2_Standby_1 = true;
        } else {
          s_4_St_2_Standby_1 = false;
        };
        v_189 = s_4_St_2_Standby_1;
        if (c_1) {
          s_4_St_2_Standby_2 = true;
        } else {
          s_4_St_2_Standby_2 = false;
        };
        v_190 = s_4_St_2_Standby_2;
        if (c_1) {
          s_4_St_2_Standby_3 = true;
        } else {
          s_4_St_2_Standby_3 = false;
        };
        v_191 = s_4_St_2_Standby_3;
      };
      v_195 = v_189;
      v_196 = v_190;
      v_197 = v_191;
      v_202 = v_201;
    };
    s_4_1 = v_195;
    s_4_2 = v_196;
    s_4_3 = v_197;
    r = v_202;
  };
  ck_5_1 = s_4_1;
  ck_5_2 = s_4_2;
  ck_5_3 = s_4_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        p_1_St_2_Heat = 1500;
        i_1_St_2_Heat = 1;
        nr_St_2_Heat = false;
        ns_St_2_Heat_1 = true;
        ns_St_2_Heat_2 = true;
        ns_St_2_Heat_3 = true;
        v_150 = p_1_St_2_Heat;
        v_155 = i_1_St_2_Heat;
        v_175 = nr_St_2_Heat;
        v_160 = ns_St_2_Heat_1;
        v_161 = ns_St_2_Heat_2;
        v_162 = ns_St_2_Heat_3;
      } else {
        p_1_St_2_Maintain = 300;
        v_150 = p_1_St_2_Maintain;
        i_1_St_2_Maintain = 2;
        v_155 = i_1_St_2_Maintain;
        nr_St_2_Maintain = false;
        v_175 = nr_St_2_Maintain;
        ns_St_2_Maintain_1 = true;
        v_160 = ns_St_2_Maintain_1;
        ns_St_2_Maintain_2 = true;
        v_161 = ns_St_2_Maintain_2;
        ns_St_2_Maintain_3 = false;
        v_162 = ns_St_2_Maintain_3;
      };
      v_152 = v_150;
      v_157 = v_155;
      v_169 = v_160;
      v_170 = v_161;
      v_171 = v_162;
      v_177 = v_175;
      if (ck_5_3_1_1) {
        if (ns_St_2_Heat_1) {
          ns_St_2_Heat_2_1 = ns_St_2_Heat_2;
          if (ns_St_2_Heat_2_1) {
            ns_St_2_Heat_3_1_1 = ns_St_2_Heat_3;
          } else {
            ns_St_2_Heat_3_1_0 = ns_St_2_Heat_3;
          };
        } else {
          ns_St_2_Heat_2_0 = ns_St_2_Heat_2;
          if (ns_St_2_Heat_2_0) {
            ns_St_2_Heat_3_0_1 = ns_St_2_Heat_3;
          } else {
            ns_St_2_Heat_3_0_0 = ns_St_2_Heat_3;
          };
        };
      } else {
        if (ns_St_2_Maintain_1) {
          ns_St_2_Maintain_2_1 = ns_St_2_Maintain_2;
          if (ns_St_2_Maintain_2_1) {
            ns_St_2_Maintain_3_1_1 = ns_St_2_Maintain_3;
          } else {
            ns_St_2_Maintain_3_1_0 = ns_St_2_Maintain_3;
          };
        } else {
          ns_St_2_Maintain_2_0 = ns_St_2_Maintain_2;
          if (ns_St_2_Maintain_2_0) {
            ns_St_2_Maintain_3_0_1 = ns_St_2_Maintain_3;
          } else {
            ns_St_2_Maintain_3_0_0 = ns_St_2_Maintain_3;
          };
        };
      };
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_151 = 0;
        v_156 = 0;
        v_176 = true;
        v_163 = true;
        v_164 = true;
        v_165 = true;
      } else {
        p_1_St_2_Off = 0;
        v_151 = p_1_St_2_Off;
        i_1_St_2_Off = 0;
        v_156 = i_1_St_2_Off;
        nr_St_2_Off = false;
        v_176 = nr_St_2_Off;
        ns_St_2_Off_1 = true;
        v_163 = ns_St_2_Off_1;
        ns_St_2_Off_2 = false;
        v_164 = ns_St_2_Off_2;
        ns_St_2_Off_3 = false;
        v_165 = ns_St_2_Off_3;
        if (ns_St_2_Off_1) {
          ns_St_2_Off_2_1 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_1) {
            ns_St_2_Off_3_1_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_1_0 = ns_St_2_Off_3;
          };
        } else {
          ns_St_2_Off_2_0 = ns_St_2_Off_2;
          if (ns_St_2_Off_2_0) {
            ns_St_2_Off_3_0_1 = ns_St_2_Off_3;
          } else {
            ns_St_2_Off_3_0_0 = ns_St_2_Off_3;
          };
        };
      };
      v_152 = v_151;
      v_157 = v_156;
      v_169 = v_163;
      v_170 = v_164;
      v_171 = v_165;
      v_177 = v_176;
    };
    p_1 = v_152;
    i_1 = v_157;
    ns_1_4 = v_169;
    ns_2 = v_170;
    ns_3 = v_171;
    nr = v_177;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_154 = 0;
      v_159 = 0;
      v_172 = true;
      v_173 = true;
      v_174 = true;
      v_179 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        p_1_St_2_Reheat = 1000;
        i_1_St_2_Reheat = 3;
        nr_St_2_Reheat = false;
        ns_St_2_Reheat_1 = false;
        ns_St_2_Reheat_2 = false;
        ns_St_2_Reheat_3 = true;
        v_153 = p_1_St_2_Reheat;
        v_158 = i_1_St_2_Reheat;
        v_178 = nr_St_2_Reheat;
        v_166 = ns_St_2_Reheat_1;
        v_167 = ns_St_2_Reheat_2;
        v_168 = ns_St_2_Reheat_3;
      } else {
        p_1_St_2_Standby = 0;
        v_153 = p_1_St_2_Standby;
        i_1_St_2_Standby = 4;
        v_158 = i_1_St_2_Standby;
        nr_St_2_Standby = false;
        v_178 = nr_St_2_Standby;
        ns_St_2_Standby_1 = false;
        v_166 = ns_St_2_Standby_1;
        ns_St_2_Standby_2 = false;
        v_167 = ns_St_2_Standby_2;
        ns_St_2_Standby_3 = false;
        v_168 = ns_St_2_Standby_3;
      };
      v_154 = v_153;
      v_159 = v_158;
      v_172 = v_166;
      v_173 = v_167;
      v_174 = v_168;
      v_179 = v_178;
    };
    p_1 = v_154;
    i_1 = v_159;
    ns_1_4 = v_172;
    ns_2 = v_173;
    ns_3 = v_174;
    nr = v_179;
  };
  _out->io = i_1;
  _out->po = p_1;
  if (ns_1_4) {
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
        if (ns_St_2_Reheat_1) {
          ns_St_2_Reheat_2_1 = ns_St_2_Reheat_2;
          if (ns_St_2_Reheat_2_1) {
            ns_St_2_Reheat_3_1_1 = ns_St_2_Reheat_3;
          } else {
            ns_St_2_Reheat_3_1_0 = ns_St_2_Reheat_3;
          };
        } else {
          ns_St_2_Reheat_2_0 = ns_St_2_Reheat_2;
          if (ns_St_2_Reheat_2_0) {
            ns_St_2_Reheat_3_0_1 = ns_St_2_Reheat_3;
          } else {
            ns_St_2_Reheat_3_0_0 = ns_St_2_Reheat_3;
          };
        };
      } else {
        if (ns_St_2_Standby_1) {
          ns_St_2_Standby_2_1 = ns_St_2_Standby_2;
          if (ns_St_2_Standby_2_1) {
            ns_St_2_Standby_3_1_1 = ns_St_2_Standby_3;
          } else {
            ns_St_2_Standby_3_1_0 = ns_St_2_Standby_3;
          };
        } else {
          ns_St_2_Standby_2_0 = ns_St_2_Standby_2;
          if (ns_St_2_Standby_2_0) {
            ns_St_2_Standby_3_0_1 = ns_St_2_Standby_3;
          } else {
            ns_St_2_Standby_3_0_0 = ns_St_2_Standby_3;
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
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (ck_4_3_0_0) {
        if (s_4_St_2_Reheat_1) {
          s_4_St_2_Reheat_2_1 = s_4_St_2_Reheat_2;
          if (s_4_St_2_Reheat_2_1) {
            s_4_St_2_Reheat_3_1_1 = s_4_St_2_Reheat_3;
          } else {
            s_4_St_2_Reheat_3_1_0 = s_4_St_2_Reheat_3;
          };
        } else {
          s_4_St_2_Reheat_2_0 = s_4_St_2_Reheat_2;
          if (s_4_St_2_Reheat_2_0) {
            s_4_St_2_Reheat_3_0_1 = s_4_St_2_Reheat_3;
          } else {
            s_4_St_2_Reheat_3_0_0 = s_4_St_2_Reheat_3;
          };
        };
      } else {
        if (s_4_St_2_Standby_1) {
          s_4_St_2_Standby_2_1 = s_4_St_2_Standby_2;
          if (s_4_St_2_Standby_2_1) {
            s_4_St_2_Standby_3_1_1 = s_4_St_2_Standby_3;
          } else {
            s_4_St_2_Standby_3_1_0 = s_4_St_2_Standby_3;
          };
        } else {
          s_4_St_2_Standby_2_0 = s_4_St_2_Standby_2;
          if (s_4_St_2_Standby_2_0) {
            s_4_St_2_Standby_3_0_1 = s_4_St_2_Standby_3;
          } else {
            s_4_St_2_Standby_3_0_0 = s_4_St_2_Standby_3;
          };
        };
      };
    };
  };
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        if (s) {
          r_1_St_3_Off = true;
          s_5_St_3_Off_1 = false;
          s_5_St_3_Off_2 = false;
          s_5_St_3_Off_3 = false;
        } else {
          r_1_St_3_Off = self->pnr_1;
          s_5_St_3_Off_1 = true;
          s_5_St_3_Off_2 = true;
          s_5_St_3_Off_3 = true;
        };
        v_260 = r_1_St_3_Off;
        v_242 = s_5_St_3_Off_1;
        v_243 = s_5_St_3_Off_2;
        v_244 = s_5_St_3_Off_3;
        if (s_5_St_3_Off_1) {
          s_5_St_3_Off_2_1 = s_5_St_3_Off_2;
          if (s_5_St_3_Off_2_1) {
            s_5_St_3_Off_3_1_1 = s_5_St_3_Off_3;
          } else {
            s_5_St_3_Off_3_1_0 = s_5_St_3_Off_3;
          };
        } else {
          s_5_St_3_Off_2_0 = s_5_St_3_Off_2;
          if (s_5_St_3_Off_2_0) {
            s_5_St_3_Off_3_0_1 = s_5_St_3_Off_3;
          } else {
            s_5_St_3_Off_3_0_0 = s_5_St_3_Off_3;
          };
        };
      } else {
        if (e) {
          r_1_St_3_Rinse = true;
        } else {
          r_1_St_3_Rinse = self->pnr_1;
        };
        v_260 = r_1_St_3_Rinse;
        if (e) {
          s_5_St_3_Rinse_1 = true;
        } else {
          s_5_St_3_Rinse_1 = true;
        };
        v_242 = s_5_St_3_Rinse_1;
        if (e) {
          s_5_St_3_Rinse_2 = false;
        } else {
          s_5_St_3_Rinse_2 = true;
        };
        v_243 = s_5_St_3_Rinse_2;
        if (e) {
          s_5_St_3_Rinse_3 = false;
        } else {
          s_5_St_3_Rinse_3 = false;
        };
        v_244 = s_5_St_3_Rinse_3;
        if (s_5_St_3_Rinse_1) {
          s_5_St_3_Rinse_2_1 = s_5_St_3_Rinse_2;
          if (s_5_St_3_Rinse_2_1) {
            s_5_St_3_Rinse_3_1_1 = s_5_St_3_Rinse_3;
          } else {
            s_5_St_3_Rinse_3_1_0 = s_5_St_3_Rinse_3;
          };
        } else {
          s_5_St_3_Rinse_2_0 = s_5_St_3_Rinse_2;
          if (s_5_St_3_Rinse_2_0) {
            s_5_St_3_Rinse_3_0_1 = s_5_St_3_Rinse_3;
          } else {
            s_5_St_3_Rinse_3_0_0 = s_5_St_3_Rinse_3;
          };
        };
      };
      v_254 = v_242;
      v_255 = v_243;
      v_256 = v_244;
      v_262 = v_260;
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_261 = true;
        v_245 = true;
        v_246 = true;
        v_247 = true;
      } else {
        if (e) {
          r_1_St_3_Spin = true;
        } else {
          r_1_St_3_Spin = self->pnr_1;
        };
        v_261 = r_1_St_3_Spin;
        if (e) {
          s_5_St_3_Spin_1 = true;
        } else {
          s_5_St_3_Spin_1 = true;
        };
        v_245 = s_5_St_3_Spin_1;
        if (e) {
          s_5_St_3_Spin_2 = true;
        } else {
          s_5_St_3_Spin_2 = false;
        };
        v_246 = s_5_St_3_Spin_2;
        if (e) {
          s_5_St_3_Spin_3 = true;
        } else {
          s_5_St_3_Spin_3 = false;
        };
        v_247 = s_5_St_3_Spin_3;
      };
      v_254 = v_245;
      v_255 = v_246;
      v_256 = v_247;
      v_262 = v_261;
      if (!(ck_3_4_1_0)) {
        if (s_5_St_3_Spin_1) {
          s_5_St_3_Spin_2_1 = s_5_St_3_Spin_2;
          if (s_5_St_3_Spin_2_1) {
            s_5_St_3_Spin_3_1_1 = s_5_St_3_Spin_3;
          } else {
            s_5_St_3_Spin_3_1_0 = s_5_St_3_Spin_3;
          };
        } else {
          s_5_St_3_Spin_2_0 = s_5_St_3_Spin_2;
          if (s_5_St_3_Spin_2_0) {
            s_5_St_3_Spin_3_0_1 = s_5_St_3_Spin_3;
          } else {
            s_5_St_3_Spin_3_0_0 = s_5_St_3_Spin_3;
          };
        };
      };
    };
    s_5_1 = v_254;
    s_5_2 = v_255;
    s_5_3 = v_256;
    r_1 = v_262;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      if (ck_3_4_0_1) {
        if (c) {
          r_1_St_3_Standby = true;
        } else {
          r_1_St_3_Standby = self->pnr_1;
        };
        v_263 = r_1_St_3_Standby;
        if (c) {
          s_5_St_3_Standby_1 = false;
        } else {
          s_5_St_3_Standby_1 = false;
        };
        v_248 = s_5_St_3_Standby_1;
        if (c) {
          s_5_St_3_Standby_2 = true;
        } else {
          s_5_St_3_Standby_2 = true;
        };
        v_249 = s_5_St_3_Standby_2;
        if (c) {
          s_5_St_3_Standby_3 = false;
        } else {
          s_5_St_3_Standby_3 = true;
        };
        v_250 = s_5_St_3_Standby_3;
      } else {
        if (e) {
          r_1_St_3_Washing = true;
          s_5_St_3_Washing_1 = true;
          s_5_St_3_Washing_2 = true;
          s_5_St_3_Washing_3 = false;
        } else {
          r_1_St_3_Washing = self->pnr_1;
          s_5_St_3_Washing_1 = false;
          s_5_St_3_Washing_2 = true;
          s_5_St_3_Washing_3 = false;
        };
        v_263 = r_1_St_3_Washing;
        v_248 = s_5_St_3_Washing_1;
        v_249 = s_5_St_3_Washing_2;
        v_250 = s_5_St_3_Washing_3;
      };
      v_257 = v_248;
      v_258 = v_249;
      v_259 = v_250;
      v_265 = v_263;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        v_264 = true;
        v_251 = true;
        v_252 = true;
        v_253 = true;
      } else {
        v_19 = (e&&c);
        if (v_19) {
          v_21 = true;
          v_20_1 = false;
          v_20_2 = true;
          v_20_3 = false;
        } else {
          v_21 = self->pnr_1;
          v_20_1 = false;
          v_20_2 = false;
          v_20_3 = false;
        };
        v_17 = !(c);
        v_18 = (e&&v_17);
        if (v_18) {
          r_1_St_3_Waterfill = true;
        } else {
          r_1_St_3_Waterfill = v_21;
        };
        v_264 = r_1_St_3_Waterfill;
        if (v_18) {
          s_5_St_3_Waterfill_1 = false;
        } else {
          s_5_St_3_Waterfill_1 = v_20_1;
        };
        v_251 = s_5_St_3_Waterfill_1;
        if (v_18) {
          s_5_St_3_Waterfill_2 = true;
        } else {
          s_5_St_3_Waterfill_2 = v_20_2;
        };
        v_252 = s_5_St_3_Waterfill_2;
        if (v_18) {
          s_5_St_3_Waterfill_3 = true;
        } else {
          s_5_St_3_Waterfill_3 = v_20_3;
        };
        v_253 = s_5_St_3_Waterfill_3;
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
        if (s_5_St_3_Waterfill_1) {
          s_5_St_3_Waterfill_2_1 = s_5_St_3_Waterfill_2;
          if (s_5_St_3_Waterfill_2_1) {
            s_5_St_3_Waterfill_3_1_1 = s_5_St_3_Waterfill_3;
          } else {
            s_5_St_3_Waterfill_3_1_0 = s_5_St_3_Waterfill_3;
          };
        } else {
          s_5_St_3_Waterfill_2_0 = s_5_St_3_Waterfill_2;
          if (s_5_St_3_Waterfill_2_0) {
            s_5_St_3_Waterfill_3_0_1 = s_5_St_3_Waterfill_3;
          } else {
            s_5_St_3_Waterfill_3_0_0 = s_5_St_3_Waterfill_3;
          };
        };
      };
      v_257 = v_251;
      v_258 = v_252;
      v_259 = v_253;
      v_265 = v_264;
    };
    s_5_1 = v_257;
    s_5_2 = v_258;
    s_5_3 = v_259;
    r_1 = v_265;
  };
  ck_3_1 = s_5_1;
  ck_3_2 = s_5_2;
  ck_3_3 = s_5_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        p_St_3_Off = 0;
        i_St_3_Off = 0;
        nr_1_St_3_Off = false;
        ns_1_St_3_Off_1 = true;
        ns_1_St_3_Off_2 = true;
        ns_1_St_3_Off_3 = true;
        v_203 = p_St_3_Off;
        v_209 = i_St_3_Off;
        v_233 = nr_1_St_3_Off;
        v_215 = ns_1_St_3_Off_1;
        v_216 = ns_1_St_3_Off_2;
        v_217 = ns_1_St_3_Off_3;
        if (ns_1_St_3_Off_1) {
          ns_1_St_3_Off_2_1 = ns_1_St_3_Off_2;
          if (ns_1_St_3_Off_2_1) {
            ns_1_St_3_Off_3_1_1 = ns_1_St_3_Off_3;
          } else {
            ns_1_St_3_Off_3_1_0 = ns_1_St_3_Off_3;
          };
        } else {
          ns_1_St_3_Off_2_0 = ns_1_St_3_Off_2;
          if (ns_1_St_3_Off_2_0) {
            ns_1_St_3_Off_3_0_1 = ns_1_St_3_Off_3;
          } else {
            ns_1_St_3_Off_3_0_0 = ns_1_St_3_Off_3;
          };
        };
      } else {
        p_St_3_Rinse = 200;
        v_203 = p_St_3_Rinse;
        i_St_3_Rinse = 3;
        v_209 = i_St_3_Rinse;
        nr_1_St_3_Rinse = false;
        v_233 = nr_1_St_3_Rinse;
        ns_1_St_3_Rinse_1 = true;
        v_215 = ns_1_St_3_Rinse_1;
        ns_1_St_3_Rinse_2 = true;
        v_216 = ns_1_St_3_Rinse_2;
        ns_1_St_3_Rinse_3 = false;
        v_217 = ns_1_St_3_Rinse_3;
        if (ns_1_St_3_Rinse_1) {
          ns_1_St_3_Rinse_2_1 = ns_1_St_3_Rinse_2;
          if (ns_1_St_3_Rinse_2_1) {
            ns_1_St_3_Rinse_3_1_1 = ns_1_St_3_Rinse_3;
          } else {
            ns_1_St_3_Rinse_3_1_0 = ns_1_St_3_Rinse_3;
          };
        } else {
          ns_1_St_3_Rinse_2_0 = ns_1_St_3_Rinse_2;
          if (ns_1_St_3_Rinse_2_0) {
            ns_1_St_3_Rinse_3_0_1 = ns_1_St_3_Rinse_3;
          } else {
            ns_1_St_3_Rinse_3_0_0 = ns_1_St_3_Rinse_3;
          };
        };
      };
      v_205 = v_203;
      v_211 = v_209;
      v_227 = v_215;
      v_228 = v_216;
      v_229 = v_217;
      v_235 = v_233;
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_204 = 0;
        v_210 = 0;
        v_234 = true;
        v_218 = true;
        v_219 = true;
        v_220 = true;
      } else {
        p_St_3_Spin = 800;
        v_204 = p_St_3_Spin;
        i_St_3_Spin = 4;
        v_210 = i_St_3_Spin;
        nr_1_St_3_Spin = false;
        v_234 = nr_1_St_3_Spin;
        ns_1_St_3_Spin_1 = true;
        v_218 = ns_1_St_3_Spin_1;
        ns_1_St_3_Spin_2 = false;
        v_219 = ns_1_St_3_Spin_2;
        ns_1_St_3_Spin_3 = false;
        v_220 = ns_1_St_3_Spin_3;
      };
      v_205 = v_204;
      v_211 = v_210;
      v_227 = v_218;
      v_228 = v_219;
      v_229 = v_220;
      v_235 = v_234;
      if (!(ck_3_3_1_0)) {
        if (ns_1_St_3_Spin_1) {
          ns_1_St_3_Spin_2_1 = ns_1_St_3_Spin_2;
          if (ns_1_St_3_Spin_2_1) {
            ns_1_St_3_Spin_3_1_1 = ns_1_St_3_Spin_3;
          } else {
            ns_1_St_3_Spin_3_1_0 = ns_1_St_3_Spin_3;
          };
        } else {
          ns_1_St_3_Spin_2_0 = ns_1_St_3_Spin_2;
          if (ns_1_St_3_Spin_2_0) {
            ns_1_St_3_Spin_3_0_1 = ns_1_St_3_Spin_3;
          } else {
            ns_1_St_3_Spin_3_0_0 = ns_1_St_3_Spin_3;
          };
        };
      };
    };
    p = v_205;
    i = v_211;
    ns_1_1 = v_227;
    ns_1_2 = v_228;
    ns_1_3 = v_229;
    nr_1 = v_235;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      if (ck_3_3_0_1) {
        p_St_3_Standby = 0;
        v_206 = p_St_3_Standby;
        i_St_3_Standby = 5;
        v_212 = i_St_3_Standby;
        nr_1_St_3_Standby = false;
        v_236 = nr_1_St_3_Standby;
        ns_1_St_3_Standby_1 = false;
        v_221 = ns_1_St_3_Standby_1;
        ns_1_St_3_Standby_2 = true;
        v_222 = ns_1_St_3_Standby_2;
        ns_1_St_3_Standby_3 = true;
        v_223 = ns_1_St_3_Standby_3;
      } else {
        p_St_3_Washing = 250;
        i_St_3_Washing = 2;
        nr_1_St_3_Washing = false;
        ns_1_St_3_Washing_1 = false;
        ns_1_St_3_Washing_2 = true;
        ns_1_St_3_Washing_3 = false;
        v_206 = p_St_3_Washing;
        v_212 = i_St_3_Washing;
        v_236 = nr_1_St_3_Washing;
        v_221 = ns_1_St_3_Washing_1;
        v_222 = ns_1_St_3_Washing_2;
        v_223 = ns_1_St_3_Washing_3;
      };
      v_208 = v_206;
      v_214 = v_212;
      v_230 = v_221;
      v_231 = v_222;
      v_232 = v_223;
      v_238 = v_236;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        v_207 = 0;
        v_213 = 0;
        v_237 = true;
        v_224 = true;
        v_225 = true;
        v_226 = true;
      } else {
        p_St_3_Waterfill = 15;
        v_207 = p_St_3_Waterfill;
        i_St_3_Waterfill = 1;
        v_213 = i_St_3_Waterfill;
        nr_1_St_3_Waterfill = false;
        v_237 = nr_1_St_3_Waterfill;
        ns_1_St_3_Waterfill_1 = false;
        v_224 = ns_1_St_3_Waterfill_1;
        ns_1_St_3_Waterfill_2 = false;
        v_225 = ns_1_St_3_Waterfill_2;
        ns_1_St_3_Waterfill_3 = false;
        v_226 = ns_1_St_3_Waterfill_3;
        if (ns_1_St_3_Waterfill_1) {
          ns_1_St_3_Waterfill_2_1 = ns_1_St_3_Waterfill_2;
          if (ns_1_St_3_Waterfill_2_1) {
            ns_1_St_3_Waterfill_3_1_1 = ns_1_St_3_Waterfill_3;
          } else {
            ns_1_St_3_Waterfill_3_1_0 = ns_1_St_3_Waterfill_3;
          };
        } else {
          ns_1_St_3_Waterfill_2_0 = ns_1_St_3_Waterfill_2;
          if (ns_1_St_3_Waterfill_2_0) {
            ns_1_St_3_Waterfill_3_0_1 = ns_1_St_3_Waterfill_3;
          } else {
            ns_1_St_3_Waterfill_3_0_0 = ns_1_St_3_Waterfill_3;
          };
        };
      };
      v_208 = v_207;
      v_214 = v_213;
      v_230 = v_224;
      v_231 = v_225;
      v_232 = v_226;
      v_238 = v_237;
    };
    p = v_208;
    i = v_214;
    ns_1_1 = v_230;
    ns_1_2 = v_231;
    ns_1_3 = v_232;
    nr_1 = v_238;
  };
  _out->iws = i;
  _out->pws = p;
  v = (_out->pws+_out->po);
  v_16 = (v<=1750);
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
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ck_3_3_0_1) {
        if (ns_1_St_3_Standby_1) {
          ns_1_St_3_Standby_2_1 = ns_1_St_3_Standby_2;
          if (ns_1_St_3_Standby_2_1) {
            ns_1_St_3_Standby_3_1_1 = ns_1_St_3_Standby_3;
          } else {
            ns_1_St_3_Standby_3_1_0 = ns_1_St_3_Standby_3;
          };
        } else {
          ns_1_St_3_Standby_2_0 = ns_1_St_3_Standby_2;
          if (ns_1_St_3_Standby_2_0) {
            ns_1_St_3_Standby_3_0_1 = ns_1_St_3_Standby_3;
          } else {
            ns_1_St_3_Standby_3_0_0 = ns_1_St_3_Standby_3;
          };
        };
      } else {
        if (ns_1_St_3_Washing_1) {
          ns_1_St_3_Washing_2_1 = ns_1_St_3_Washing_2;
          if (ns_1_St_3_Washing_2_1) {
            ns_1_St_3_Washing_3_1_1 = ns_1_St_3_Washing_3;
          } else {
            ns_1_St_3_Washing_3_1_0 = ns_1_St_3_Washing_3;
          };
        } else {
          ns_1_St_3_Washing_2_0 = ns_1_St_3_Washing_2;
          if (ns_1_St_3_Washing_2_0) {
            ns_1_St_3_Washing_3_0_1 = ns_1_St_3_Washing_3;
          } else {
            ns_1_St_3_Washing_3_0_0 = ns_1_St_3_Washing_3;
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
    if (ck_2_0) {
      if (ck_3_4_0_1) {
        if (s_5_St_3_Standby_1) {
          s_5_St_3_Standby_2_1 = s_5_St_3_Standby_2;
          if (s_5_St_3_Standby_2_1) {
            s_5_St_3_Standby_3_1_1 = s_5_St_3_Standby_3;
          } else {
            s_5_St_3_Standby_3_1_0 = s_5_St_3_Standby_3;
          };
        } else {
          s_5_St_3_Standby_2_0 = s_5_St_3_Standby_2;
          if (s_5_St_3_Standby_2_0) {
            s_5_St_3_Standby_3_0_1 = s_5_St_3_Standby_3;
          } else {
            s_5_St_3_Standby_3_0_0 = s_5_St_3_Standby_3;
          };
        };
      } else {
        if (s_5_St_3_Washing_1) {
          s_5_St_3_Washing_2_1 = s_5_St_3_Washing_2;
          if (s_5_St_3_Washing_2_1) {
            s_5_St_3_Washing_3_1_1 = s_5_St_3_Washing_3;
          } else {
            s_5_St_3_Washing_3_1_0 = s_5_St_3_Washing_3;
          };
        } else {
          s_5_St_3_Washing_2_0 = s_5_St_3_Washing_2;
          if (s_5_St_3_Washing_2_0) {
            s_5_St_3_Washing_3_0_1 = s_5_St_3_Washing_3;
          } else {
            s_5_St_3_Washing_3_0_0 = s_5_St_3_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_180 = ns_1_4;
  self->v_181 = ns_2;
  self->v_182 = ns_3;
  self->pnr_1 = nr_1;
  self->v_239 = ns_1_1;
  self->v_240 = ns_1_2;
  self->v_241 = ns_1_3;;
}

