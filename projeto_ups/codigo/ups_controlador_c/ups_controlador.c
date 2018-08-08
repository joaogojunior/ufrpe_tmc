/* --- Generated the 8/8/2018 at 10:32 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_292 = true;
  self->v_293 = true;
  self->v_294 = false;
}

void Ups_controlador__computador_step(int c_atx, int off_atx, int ts,
                                      int cr1, int cr3, int cr4, int ba,
                                      int b1, int b3, int b4, int s_atx,
                                      int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int ns_St_Rlevel4_2_0;
  int ns_St_Rlevel4_3_0_0;
  int ns_St_Rlevel4_3_0_1;
  int ns_St_Rlevel4_2_1;
  int ns_St_Rlevel4_3_1_0;
  int ns_St_Rlevel4_3_1_1;
  int ns_St_Rlevel3_2_0;
  int ns_St_Rlevel3_3_0_0;
  int ns_St_Rlevel3_3_0_1;
  int ns_St_Rlevel3_2_1;
  int ns_St_Rlevel3_3_1_0;
  int ns_St_Rlevel3_3_1_1;
  int ns_St_Rlevel1_2_0;
  int ns_St_Rlevel1_3_0_0;
  int ns_St_Rlevel1_3_0_1;
  int ns_St_Rlevel1_2_1;
  int ns_St_Rlevel1_3_1_0;
  int ns_St_Rlevel1_3_1_1;
  int ns_St_Boot_2_0;
  int ns_St_Boot_3_0_0;
  int ns_St_Boot_3_0_1;
  int ns_St_Boot_2_1;
  int ns_St_Boot_3_1_0;
  int ns_St_Boot_3_1_1;
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
  int nr_St_Rlevel4;
  int ns_St_Rlevel4_3;
  int ns_St_Rlevel4_2;
  int ns_St_Rlevel4_1;
  int estado_St_Rlevel4;
  int nr_St_Rlevel3;
  int ns_St_Rlevel3_3;
  int ns_St_Rlevel3_2;
  int ns_St_Rlevel3_1;
  int estado_St_Rlevel3;
  int nr_St_Rlevel1;
  int ns_St_Rlevel1_3;
  int ns_St_Rlevel1_2;
  int ns_St_Rlevel1_1;
  int estado_St_Rlevel1;
  int nr_St_Boot;
  int ns_St_Boot_3;
  int ns_St_Boot_2;
  int ns_St_Boot_1;
  int estado_St_Boot;
  int nr_St_Off;
  int ns_St_Off_3;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int estado_St_Off;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_13_2_0;
  int v_13_3_0_0;
  int v_13_3_0_1;
  int v_13_2_1;
  int v_13_3_1_0;
  int v_13_3_1_1;
  int v_14;
  int v_13_3;
  int v_13_2;
  int v_13_1;
  int v_12;
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
  int v_2_4_0;
  int v_3_1_0_0;
  int v_3_1_0_1;
  int v_2_4_1;
  int v_3_1_1_0;
  int v_3_1_1_1;
  int v_3;
  int v_2_3;
  int v_2_2;
  int v_2_1;
  int v_1;
  int v_3_1;
  int v_2_4;
  int v_1_1;
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
  int s_St_Rlevel4_2_0;
  int s_St_Rlevel4_3_0_0;
  int s_St_Rlevel4_3_0_1;
  int s_St_Rlevel4_2_1;
  int s_St_Rlevel4_3_1_0;
  int s_St_Rlevel4_3_1_1;
  int s_St_Rlevel3_2_0;
  int s_St_Rlevel3_3_0_0;
  int s_St_Rlevel3_3_0_1;
  int s_St_Rlevel3_2_1;
  int s_St_Rlevel3_3_1_0;
  int s_St_Rlevel3_3_1_1;
  int s_St_Rlevel1_2_0;
  int s_St_Rlevel1_3_0_0;
  int s_St_Rlevel1_3_0_1;
  int s_St_Rlevel1_2_1;
  int s_St_Rlevel1_3_1_0;
  int s_St_Rlevel1_3_1_1;
  int s_St_Boot_2_0;
  int s_St_Boot_3_0_0;
  int s_St_Boot_3_0_1;
  int s_St_Boot_2_1;
  int s_St_Boot_3_1_0;
  int s_St_Boot_3_1_1;
  int s_St_Off_2_0;
  int s_St_Off_3_0_0;
  int s_St_Off_3_0_1;
  int s_St_Off_2_1;
  int s_St_Off_3_1_0;
  int s_St_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Rlevel4;
  int s_St_Rlevel4_3;
  int s_St_Rlevel4_2;
  int s_St_Rlevel4_1;
  int r_St_Rlevel3;
  int s_St_Rlevel3_3;
  int s_St_Rlevel3_2;
  int s_St_Rlevel3_1;
  int r_St_Rlevel1;
  int s_St_Rlevel1_3;
  int s_St_Rlevel1_2;
  int s_St_Rlevel1_1;
  int r_St_Boot;
  int s_St_Boot_3;
  int s_St_Boot_2;
  int s_St_Boot_1;
  int r_St_Off;
  int s_St_Off_3;
  int s_St_Off_2;
  int s_St_Off_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
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
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int a;
  int r1;
  int r3;
  int r4;
  v_22 = !(c_atx);
  v_21 = (ba&&s_atx);
  a = (v_21||v_22);
  v_20 = !(cr1);
  v_19 = (b1&&s1);
  r1 = (v_19||v_20);
  v_18 = !(cr3);
  v_17 = (b3&&s3);
  r3 = (v_17||v_18);
  v_16 = !(cr4);
  v_15 = (b4&&s4);
  r4 = (v_15||v_16);
  ck_1_4 = self->v_292;
  ck_2 = self->v_293;
  ck_3 = self->v_294;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (ts) {
          v_14 = true;
          v_13_1 = true;
          v_13_2 = false;
          v_13_3 = false;
        } else {
          v_14 = self->pnr;
          v_13_1 = true;
          v_13_2 = true;
          v_13_3 = true;
        };
        v_12 = !(off_atx);
        if (v_12) {
          r_St_Boot = true;
        } else {
          r_St_Boot = v_14;
        };
        v_310 = r_St_Boot;
        if (v_12) {
          s_St_Boot_1 = true;
        } else {
          s_St_Boot_1 = v_13_1;
        };
        v_295 = s_St_Boot_1;
        if (v_12) {
          s_St_Boot_2 = true;
        } else {
          s_St_Boot_2 = v_13_2;
        };
        v_296 = s_St_Boot_2;
        if (v_12) {
          s_St_Boot_3 = false;
        } else {
          s_St_Boot_3 = v_13_3;
        };
        v_297 = s_St_Boot_3;
        if (v_13_1) {
          v_13_2_1 = v_13_2;
          if (v_13_2_1) {
            v_13_3_1_1 = v_13_3;
          } else {
            v_13_3_1_0 = v_13_3;
          };
        } else {
          v_13_2_0 = v_13_2;
          if (v_13_2_0) {
            v_13_3_0_1 = v_13_3;
          } else {
            v_13_3_0_0 = v_13_3;
          };
        };
        if (s_St_Boot_1) {
          s_St_Boot_2_1 = s_St_Boot_2;
          if (s_St_Boot_2_1) {
            s_St_Boot_3_1_1 = s_St_Boot_3;
          } else {
            s_St_Boot_3_1_0 = s_St_Boot_3;
          };
        } else {
          s_St_Boot_2_0 = s_St_Boot_2;
          if (s_St_Boot_2_0) {
            s_St_Boot_3_0_1 = s_St_Boot_3;
          } else {
            s_St_Boot_3_0_0 = s_St_Boot_3;
          };
        };
      } else {
        if (a) {
          r_St_Off = true;
          s_St_Off_1 = true;
          s_St_Off_2 = true;
          s_St_Off_3 = true;
        } else {
          r_St_Off = self->pnr;
          s_St_Off_1 = true;
          s_St_Off_2 = true;
          s_St_Off_3 = false;
        };
        v_310 = r_St_Off;
        v_295 = s_St_Off_1;
        v_296 = s_St_Off_2;
        v_297 = s_St_Off_3;
        if (s_St_Off_1) {
          s_St_Off_2_1 = s_St_Off_2;
          if (s_St_Off_2_1) {
            s_St_Off_3_1_1 = s_St_Off_3;
          } else {
            s_St_Off_3_1_0 = s_St_Off_3;
          };
        } else {
          s_St_Off_2_0 = s_St_Off_2;
          if (s_St_Off_2_0) {
            s_St_Off_3_0_1 = s_St_Off_3;
          } else {
            s_St_Off_3_0_0 = s_St_Off_3;
          };
        };
      };
      v_304 = v_295;
      v_305 = v_296;
      v_306 = v_297;
      v_312 = v_310;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_311 = true;
        v_298 = true;
        v_299 = true;
        v_300 = true;
      } else {
        if (r4) {
          v_9 = true;
        } else {
          v_9 = self->pnr;
        };
        if (r3) {
          v_11 = true;
        } else {
          v_11 = v_9;
        };
        if (a) {
          r_St_Rlevel1 = true;
        } else {
          r_St_Rlevel1 = v_11;
        };
        v_311 = r_St_Rlevel1;
        if (r4) {
          v_8_1 = false;
        } else {
          v_8_1 = true;
        };
        if (r3) {
          v_10_1 = false;
        } else {
          v_10_1 = v_8_1;
        };
        if (a) {
          s_St_Rlevel1_1 = true;
        } else {
          s_St_Rlevel1_1 = v_10_1;
        };
        v_298 = s_St_Rlevel1_1;
        if (r4) {
          v_8_2 = false;
        } else {
          v_8_2 = false;
        };
        if (r3) {
          v_10_2 = false;
        } else {
          v_10_2 = v_8_2;
        };
        if (a) {
          s_St_Rlevel1_2 = true;
        } else {
          s_St_Rlevel1_2 = v_10_2;
        };
        v_299 = s_St_Rlevel1_2;
        if (r4) {
          v_8_3 = false;
        } else {
          v_8_3 = false;
        };
        if (r3) {
          v_10_3 = true;
        } else {
          v_10_3 = v_8_3;
        };
        if (a) {
          s_St_Rlevel1_3 = false;
        } else {
          s_St_Rlevel1_3 = v_10_3;
        };
        v_300 = s_St_Rlevel1_3;
      };
      v_304 = v_298;
      v_305 = v_299;
      v_306 = v_300;
      v_312 = v_311;
      if (!(ck_3_1_0)) {
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
        if (s_St_Rlevel1_1) {
          s_St_Rlevel1_2_1 = s_St_Rlevel1_2;
          if (s_St_Rlevel1_2_1) {
            s_St_Rlevel1_3_1_1 = s_St_Rlevel1_3;
          } else {
            s_St_Rlevel1_3_1_0 = s_St_Rlevel1_3;
          };
        } else {
          s_St_Rlevel1_2_0 = s_St_Rlevel1_2;
          if (s_St_Rlevel1_2_0) {
            s_St_Rlevel1_3_0_1 = s_St_Rlevel1_3;
          } else {
            s_St_Rlevel1_3_0_0 = s_St_Rlevel1_3;
          };
        };
      };
    };
    s_1 = v_304;
    s_2 = v_305;
    s_3 = v_306;
    r = v_312;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_307 = true;
      v_308 = true;
      v_309 = true;
      v_314 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (r4) {
          v_5 = true;
        } else {
          v_5 = self->pnr;
        };
        if (r1) {
          v_7 = true;
        } else {
          v_7 = v_5;
        };
        if (a) {
          r_St_Rlevel3 = true;
        } else {
          r_St_Rlevel3 = v_7;
        };
        if (r4) {
          v_4_1 = false;
        } else {
          v_4_1 = false;
        };
        if (r1) {
          v_6_1 = true;
        } else {
          v_6_1 = v_4_1;
        };
        if (a) {
          s_St_Rlevel3_1 = true;
        } else {
          s_St_Rlevel3_1 = v_6_1;
        };
        if (r4) {
          v_4_2 = false;
        } else {
          v_4_2 = false;
        };
        if (r1) {
          v_6_2 = false;
        } else {
          v_6_2 = v_4_2;
        };
        if (a) {
          s_St_Rlevel3_2 = true;
        } else {
          s_St_Rlevel3_2 = v_6_2;
        };
        if (r4) {
          v_4_3 = false;
        } else {
          v_4_3 = true;
        };
        if (r1) {
          v_6_3 = false;
        } else {
          v_6_3 = v_4_3;
        };
        if (a) {
          s_St_Rlevel3_3 = false;
        } else {
          s_St_Rlevel3_3 = v_6_3;
        };
        v_313 = r_St_Rlevel3;
        v_301 = s_St_Rlevel3_1;
        v_302 = s_St_Rlevel3_2;
        v_303 = s_St_Rlevel3_3;
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
      } else {
        if (r3) {
          v_1 = true;
        } else {
          v_1 = self->pnr;
        };
        if (r1) {
          v_3 = true;
        } else {
          v_3 = v_1;
        };
        if (a) {
          r_St_Rlevel4 = true;
        } else {
          r_St_Rlevel4 = v_3;
        };
        v_313 = r_St_Rlevel4;
        if (r3) {
          v_1_1 = false;
        } else {
          v_1_1 = false;
        };
        if (r1) {
          v_2_1 = true;
        } else {
          v_2_1 = v_1_1;
        };
        if (a) {
          s_St_Rlevel4_1 = true;
        } else {
          s_St_Rlevel4_1 = v_2_1;
        };
        v_301 = s_St_Rlevel4_1;
        if (r3) {
          v_2_4 = false;
        } else {
          v_2_4 = false;
        };
        if (r1) {
          v_2_2 = false;
        } else {
          v_2_2 = v_2_4;
        };
        if (a) {
          s_St_Rlevel4_2 = true;
        } else {
          s_St_Rlevel4_2 = v_2_2;
        };
        v_302 = s_St_Rlevel4_2;
        if (r3) {
          v_3_1 = true;
        } else {
          v_3_1 = false;
        };
        if (r1) {
          v_2_3 = false;
        } else {
          v_2_3 = v_3_1;
        };
        if (a) {
          s_St_Rlevel4_3 = false;
        } else {
          s_St_Rlevel4_3 = v_2_3;
        };
        v_303 = s_St_Rlevel4_3;
        if (v_1_1) {
          v_2_4_1 = v_2_4;
          if (v_2_4_1) {
            v_3_1_1_1 = v_3_1;
          } else {
            v_3_1_1_0 = v_3_1;
          };
        } else {
          v_2_4_0 = v_2_4;
          if (v_2_4_0) {
            v_3_1_0_1 = v_3_1;
          } else {
            v_3_1_0_0 = v_3_1;
          };
        };
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
      };
      v_307 = v_301;
      v_308 = v_302;
      v_309 = v_303;
      v_314 = v_313;
    };
    s_1 = v_307;
    s_2 = v_308;
    s_3 = v_309;
    r = v_314;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        estado_St_Boot = 1;
        v_267 = estado_St_Boot;
        nr_St_Boot = false;
        v_287 = nr_St_Boot;
        ns_St_Boot_1 = true;
        v_272 = ns_St_Boot_1;
        ns_St_Boot_2 = true;
        v_273 = ns_St_Boot_2;
        ns_St_Boot_3 = true;
        v_274 = ns_St_Boot_3;
        if (ns_St_Boot_1) {
          ns_St_Boot_2_1 = ns_St_Boot_2;
          if (ns_St_Boot_2_1) {
            ns_St_Boot_3_1_1 = ns_St_Boot_3;
          } else {
            ns_St_Boot_3_1_0 = ns_St_Boot_3;
          };
        } else {
          ns_St_Boot_2_0 = ns_St_Boot_2;
          if (ns_St_Boot_2_0) {
            ns_St_Boot_3_0_1 = ns_St_Boot_3;
          } else {
            ns_St_Boot_3_0_0 = ns_St_Boot_3;
          };
        };
      } else {
        estado_St_Off = 0;
        nr_St_Off = false;
        ns_St_Off_1 = true;
        ns_St_Off_2 = true;
        ns_St_Off_3 = false;
        v_267 = estado_St_Off;
        v_287 = nr_St_Off;
        v_272 = ns_St_Off_1;
        v_273 = ns_St_Off_2;
        v_274 = ns_St_Off_3;
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
      };
      v_269 = v_267;
      v_281 = v_272;
      v_282 = v_273;
      v_283 = v_274;
      v_289 = v_287;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_268 = 0;
        v_288 = true;
        v_275 = true;
        v_276 = true;
        v_277 = true;
      } else {
        estado_St_Rlevel1 = 2;
        v_268 = estado_St_Rlevel1;
        nr_St_Rlevel1 = false;
        v_288 = nr_St_Rlevel1;
        ns_St_Rlevel1_1 = true;
        v_275 = ns_St_Rlevel1_1;
        ns_St_Rlevel1_2 = false;
        v_276 = ns_St_Rlevel1_2;
        ns_St_Rlevel1_3 = false;
        v_277 = ns_St_Rlevel1_3;
      };
      v_269 = v_268;
      v_281 = v_275;
      v_282 = v_276;
      v_283 = v_277;
      v_289 = v_288;
      if (!(ck_1_3_1_0)) {
        if (ns_St_Rlevel1_1) {
          ns_St_Rlevel1_2_1 = ns_St_Rlevel1_2;
          if (ns_St_Rlevel1_2_1) {
            ns_St_Rlevel1_3_1_1 = ns_St_Rlevel1_3;
          } else {
            ns_St_Rlevel1_3_1_0 = ns_St_Rlevel1_3;
          };
        } else {
          ns_St_Rlevel1_2_0 = ns_St_Rlevel1_2;
          if (ns_St_Rlevel1_2_0) {
            ns_St_Rlevel1_3_0_1 = ns_St_Rlevel1_3;
          } else {
            ns_St_Rlevel1_3_0_0 = ns_St_Rlevel1_3;
          };
        };
      };
    };
    _out->estado = v_269;
    ns_1 = v_281;
    ns_2 = v_282;
    ns_3 = v_283;
    nr = v_289;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_271 = 0;
      v_284 = true;
      v_285 = true;
      v_286 = true;
      v_291 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        estado_St_Rlevel3 = 3;
        nr_St_Rlevel3 = false;
        ns_St_Rlevel3_1 = false;
        ns_St_Rlevel3_2 = false;
        ns_St_Rlevel3_3 = true;
        v_270 = estado_St_Rlevel3;
        v_290 = nr_St_Rlevel3;
        v_278 = ns_St_Rlevel3_1;
        v_279 = ns_St_Rlevel3_2;
        v_280 = ns_St_Rlevel3_3;
      } else {
        estado_St_Rlevel4 = 4;
        v_270 = estado_St_Rlevel4;
        nr_St_Rlevel4 = false;
        v_290 = nr_St_Rlevel4;
        ns_St_Rlevel4_1 = false;
        v_278 = ns_St_Rlevel4_1;
        ns_St_Rlevel4_2 = false;
        v_279 = ns_St_Rlevel4_2;
        ns_St_Rlevel4_3 = false;
        v_280 = ns_St_Rlevel4_3;
      };
      v_271 = v_270;
      v_284 = v_278;
      v_285 = v_279;
      v_286 = v_280;
      v_291 = v_290;
    };
    _out->estado = v_271;
    ns_1 = v_284;
    ns_2 = v_285;
    ns_3 = v_286;
    nr = v_291;
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
    if (!(ck_1_2_0)) {
      if (ck_1_3_0_0) {
        if (ns_St_Rlevel3_1) {
          ns_St_Rlevel3_2_1 = ns_St_Rlevel3_2;
          if (ns_St_Rlevel3_2_1) {
            ns_St_Rlevel3_3_1_1 = ns_St_Rlevel3_3;
          } else {
            ns_St_Rlevel3_3_1_0 = ns_St_Rlevel3_3;
          };
        } else {
          ns_St_Rlevel3_2_0 = ns_St_Rlevel3_2;
          if (ns_St_Rlevel3_2_0) {
            ns_St_Rlevel3_3_0_1 = ns_St_Rlevel3_3;
          } else {
            ns_St_Rlevel3_3_0_0 = ns_St_Rlevel3_3;
          };
        };
      } else {
        if (ns_St_Rlevel4_1) {
          ns_St_Rlevel4_2_1 = ns_St_Rlevel4_2;
          if (ns_St_Rlevel4_2_1) {
            ns_St_Rlevel4_3_1_1 = ns_St_Rlevel4_3;
          } else {
            ns_St_Rlevel4_3_1_0 = ns_St_Rlevel4_3;
          };
        } else {
          ns_St_Rlevel4_2_0 = ns_St_Rlevel4_2;
          if (ns_St_Rlevel4_2_0) {
            ns_St_Rlevel4_3_0_1 = ns_St_Rlevel4_3;
          } else {
            ns_St_Rlevel4_3_0_0 = ns_St_Rlevel4_3;
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
  if (!(ck_1_4)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_Rlevel3_1) {
          s_St_Rlevel3_2_1 = s_St_Rlevel3_2;
          if (s_St_Rlevel3_2_1) {
            s_St_Rlevel3_3_1_1 = s_St_Rlevel3_3;
          } else {
            s_St_Rlevel3_3_1_0 = s_St_Rlevel3_3;
          };
        } else {
          s_St_Rlevel3_2_0 = s_St_Rlevel3_2;
          if (s_St_Rlevel3_2_0) {
            s_St_Rlevel3_3_0_1 = s_St_Rlevel3_3;
          } else {
            s_St_Rlevel3_3_0_0 = s_St_Rlevel3_3;
          };
        };
      } else {
        if (s_St_Rlevel4_1) {
          s_St_Rlevel4_2_1 = s_St_Rlevel4_2;
          if (s_St_Rlevel4_2_1) {
            s_St_Rlevel4_3_1_1 = s_St_Rlevel4_3;
          } else {
            s_St_Rlevel4_3_1_0 = s_St_Rlevel4_3;
          };
        } else {
          s_St_Rlevel4_2_0 = s_St_Rlevel4_2;
          if (s_St_Rlevel4_2_0) {
            s_St_Rlevel4_3_0_1 = s_St_Rlevel4_3;
          } else {
            s_St_Rlevel4_3_0_0 = s_St_Rlevel4_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_292 = ns_1;
  self->v_293 = ns_2;
  self->v_294 = ns_3;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_357 = false;
  self->v_358 = true;
  self->v_359 = true;
}

void Ups_controlador__bateria_step(int ac, int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int ns_St_1_Carregando_2_0;
  int ns_St_1_Carregando_3_0_0;
  int ns_St_1_Carregando_3_0_1;
  int ns_St_1_Carregando_2_1;
  int ns_St_1_Carregando_3_1_0;
  int ns_St_1_Carregando_3_1_1;
  int estado_bat_St_1_Carregando_2_0;
  int estado_bat_St_1_Carregando_3_0_0;
  int estado_bat_St_1_Carregando_3_0_1;
  int estado_bat_St_1_Carregando_2_1;
  int estado_bat_St_1_Carregando_3_1_0;
  int estado_bat_St_1_Carregando_3_1_1;
  int ns_St_1_Baixo_2_0;
  int ns_St_1_Baixo_3_0_0;
  int ns_St_1_Baixo_3_0_1;
  int ns_St_1_Baixo_2_1;
  int ns_St_1_Baixo_3_1_0;
  int ns_St_1_Baixo_3_1_1;
  int estado_bat_St_1_Baixo_2_0;
  int estado_bat_St_1_Baixo_3_0_0;
  int estado_bat_St_1_Baixo_3_0_1;
  int estado_bat_St_1_Baixo_2_1;
  int estado_bat_St_1_Baixo_3_1_0;
  int estado_bat_St_1_Baixo_3_1_1;
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
  int ns_St_1_Cheio_2_0;
  int ns_St_1_Cheio_3_0_0;
  int ns_St_1_Cheio_3_0_1;
  int ns_St_1_Cheio_2_1;
  int ns_St_1_Cheio_3_1_0;
  int ns_St_1_Cheio_3_1_1;
  int estado_bat_St_1_Cheio_2_0;
  int estado_bat_St_1_Cheio_3_0_0;
  int estado_bat_St_1_Cheio_3_0_1;
  int estado_bat_St_1_Cheio_2_1;
  int estado_bat_St_1_Cheio_3_1_0;
  int estado_bat_St_1_Cheio_3_1_1;
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
  int nr_St_1_Carregando;
  int ns_St_1_Carregando_3;
  int ns_St_1_Carregando_2;
  int ns_St_1_Carregando_1;
  int estado_bat_St_1_Carregando_3;
  int estado_bat_St_1_Carregando_2;
  int estado_bat_St_1_Carregando_1;
  int nr_St_1_Baixo;
  int ns_St_1_Baixo_3;
  int ns_St_1_Baixo_2;
  int ns_St_1_Baixo_1;
  int estado_bat_St_1_Baixo_3;
  int estado_bat_St_1_Baixo_2;
  int estado_bat_St_1_Baixo_1;
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
  int nr_St_1_Cheio;
  int ns_St_1_Cheio_3;
  int ns_St_1_Cheio_2;
  int ns_St_1_Cheio_1;
  int estado_bat_St_1_Cheio_3;
  int estado_bat_St_1_Cheio_2;
  int estado_bat_St_1_Cheio_1;
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
  int v_69_2_0;
  int v_69_3_0_0;
  int v_69_3_0_1;
  int v_69_2_1;
  int v_69_3_1_0;
  int v_69_3_1_1;
  int v_67_2_0;
  int v_67_3_0_0;
  int v_67_3_0_1;
  int v_67_2_1;
  int v_67_3_1_0;
  int v_67_3_1_1;
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
  int v_70;
  int v_69_3;
  int v_69_2;
  int v_69_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
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
  int v_58;
  int v_57;
  int v_55_2_0;
  int v_55_3_0_0;
  int v_55_3_0_1;
  int v_55_2_1;
  int v_55_3_1_0;
  int v_55_3_1_1;
  int v_53_2_0;
  int v_53_3_0_0;
  int v_53_3_0_1;
  int v_53_2_1;
  int v_53_3_1_0;
  int v_53_3_1_1;
  int v_51_2_0;
  int v_51_3_0_0;
  int v_51_3_0_1;
  int v_51_2_1;
  int v_51_3_1_0;
  int v_51_3_1_1;
  int v_56;
  int v_55_3;
  int v_55_2;
  int v_55_1;
  int v_54;
  int v_53_3;
  int v_53_2;
  int v_53_1;
  int v_52;
  int v_51_3;
  int v_51_2;
  int v_51_1;
  int v_50;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
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
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
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
  int v_39_2_0;
  int v_39_3_0_0;
  int v_39_3_0_1;
  int v_39_2_1;
  int v_39_3_1_0;
  int v_39_3_1_1;
  int v_42;
  int v_41_3;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_39_3;
  int v_39_2;
  int v_39_1;
  int v_38;
  int v_37;
  int v_35_2_0;
  int v_35_3_0_0;
  int v_35_3_0_1;
  int v_35_2_1;
  int v_35_3_1_0;
  int v_35_3_1_1;
  int v_33_2_0;
  int v_33_3_0_0;
  int v_33_3_0_1;
  int v_33_2_1;
  int v_33_3_1_0;
  int v_33_3_1_1;
  int v_31_2_0;
  int v_31_3_0_0;
  int v_31_3_0_1;
  int v_31_2_1;
  int v_31_3_1_0;
  int v_31_3_1_1;
  int v_36;
  int v_35_3;
  int v_35_2;
  int v_35_1;
  int v_34;
  int v_33_3;
  int v_33_2;
  int v_33_1;
  int v_32;
  int v_31_3;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
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
  int s_St_1_Carregando_2_0;
  int s_St_1_Carregando_3_0_0;
  int s_St_1_Carregando_3_0_1;
  int s_St_1_Carregando_2_1;
  int s_St_1_Carregando_3_1_0;
  int s_St_1_Carregando_3_1_1;
  int s_St_1_Baixo_2_0;
  int s_St_1_Baixo_3_0_0;
  int s_St_1_Baixo_3_0_1;
  int s_St_1_Baixo_2_1;
  int s_St_1_Baixo_3_1_0;
  int s_St_1_Baixo_3_1_1;
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
  int s_St_1_Cheio_2_0;
  int s_St_1_Cheio_3_0_0;
  int s_St_1_Cheio_3_0_1;
  int s_St_1_Cheio_2_1;
  int s_St_1_Cheio_3_1_0;
  int s_St_1_Cheio_3_1_1;
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
  int r_St_1_Carregando;
  int s_St_1_Carregando_3;
  int s_St_1_Carregando_2;
  int s_St_1_Carregando_1;
  int r_St_1_Baixo;
  int s_St_1_Baixo_3;
  int s_St_1_Baixo_2;
  int s_St_1_Baixo_1;
  int r_St_1_Limiar2;
  int s_St_1_Limiar2_3;
  int s_St_1_Limiar2_2;
  int s_St_1_Limiar2_1;
  int r_St_1_Limiar1;
  int s_St_1_Limiar1_3;
  int s_St_1_Limiar1_2;
  int s_St_1_Limiar1_1;
  int r_St_1_Cheio;
  int s_St_1_Cheio_3;
  int s_St_1_Cheio_2;
  int s_St_1_Cheio_1;
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
  v_88 = !(cp);
  v_89 = (v_88&&l1);
  v_90 = (v_89&&l2);
  a = (v_90&&v);
  v_71 = !(a);
  v_86 = (cp&&l1);
  v_87 = (v_86&&l2);
  b = (v_87&&v);
  v_72 = !(b);
  v_73 = (v_71&&v_72);
  v_83 = !(l1);
  v_82 = !(cp);
  v_84 = (v_82&&v_83);
  v_85 = (v_84&&l2);
  c = (v_85&&v);
  v_74 = !(c);
  v_75 = (v_73&&v_74);
  v_80 = !(l2);
  v_78 = !(l1);
  v_77 = !(cp);
  v_79 = (v_77&&v_78);
  v_81 = (v_79&&v_80);
  d = (v_81&&v);
  v_76 = !(d);
  e = (v_75&&v_76);
  ck_1 = self->v_357;
  ck_2_4 = self->v_358;
  ck_3 = self->v_359;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_37 = (e||a);
        v_38 = (v_37||b);
        if (v_38) {
          v_40 = true;
        } else {
          v_40 = self->pnr;
        };
        if (c) {
          v_42 = true;
        } else {
          v_42 = v_40;
        };
        if (ac) {
          r_St_1_Baixo = true;
        } else {
          r_St_1_Baixo = v_42;
        };
        if (v_38) {
          v_39_1 = false;
        } else {
          v_39_1 = true;
        };
        if (c) {
          v_41_1 = false;
        } else {
          v_41_1 = v_39_1;
        };
        if (ac) {
          s_St_1_Baixo_1 = true;
        } else {
          s_St_1_Baixo_1 = v_41_1;
        };
        if (v_38) {
          v_39_2 = true;
        } else {
          v_39_2 = true;
        };
        if (c) {
          v_41_2 = false;
        } else {
          v_41_2 = v_39_2;
        };
        if (ac) {
          s_St_1_Baixo_2 = true;
        } else {
          s_St_1_Baixo_2 = v_41_2;
        };
        if (v_38) {
          v_39_3 = true;
        } else {
          v_39_3 = true;
        };
        if (c) {
          v_41_3 = false;
        } else {
          v_41_3 = v_39_3;
        };
        if (ac) {
          s_St_1_Baixo_3 = false;
        } else {
          s_St_1_Baixo_3 = v_41_3;
        };
        v_378 = r_St_1_Baixo;
        v_360 = s_St_1_Baixo_1;
        v_361 = s_St_1_Baixo_2;
        v_362 = s_St_1_Baixo_3;
      } else {
        v_29 = !(ac);
        v_30 = (v_29&&d);
        if (v_30) {
          v_32 = true;
          v_31_1 = true;
          v_31_2 = true;
          v_31_3 = true;
        } else {
          v_32 = self->pnr;
          v_31_1 = true;
          v_31_2 = true;
          v_31_3 = false;
        };
        v_27 = !(ac);
        v_28 = (v_27&&c);
        if (v_28) {
          v_34 = true;
          v_33_1 = false;
          v_33_2 = false;
          v_33_3 = false;
        } else {
          v_34 = v_32;
          v_33_1 = v_31_1;
          v_33_2 = v_31_2;
          v_33_3 = v_31_3;
        };
        v_25 = !(ac);
        v_26 = (v_25&&a);
        if (v_26) {
          v_36 = true;
          v_35_1 = false;
          v_35_2 = true;
          v_35_3 = false;
        } else {
          v_36 = v_34;
          v_35_1 = v_33_1;
          v_35_2 = v_33_2;
          v_35_3 = v_33_3;
        };
        v_23 = !(ac);
        v_24 = (v_23&&b);
        if (v_24) {
          r_St_1_Carregando = true;
        } else {
          r_St_1_Carregando = v_36;
        };
        v_378 = r_St_1_Carregando;
        if (v_24) {
          s_St_1_Carregando_1 = true;
        } else {
          s_St_1_Carregando_1 = v_35_1;
        };
        v_360 = s_St_1_Carregando_1;
        if (v_24) {
          s_St_1_Carregando_2 = false;
        } else {
          s_St_1_Carregando_2 = v_35_2;
        };
        v_361 = s_St_1_Carregando_2;
        if (v_24) {
          s_St_1_Carregando_3 = false;
        } else {
          s_St_1_Carregando_3 = v_35_3;
        };
        v_362 = s_St_1_Carregando_3;
      };
      v_372 = v_360;
      v_373 = v_361;
      v_374 = v_362;
      v_380 = v_378;
      if (ck_3_1_1) {
        if (v_39_1) {
          v_39_2_1 = v_39_2;
          if (v_39_2_1) {
            v_39_3_1_1 = v_39_3;
          } else {
            v_39_3_1_0 = v_39_3;
          };
        } else {
          v_39_2_0 = v_39_2;
          if (v_39_2_0) {
            v_39_3_0_1 = v_39_3;
          } else {
            v_39_3_0_0 = v_39_3;
          };
        };
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
        if (s_St_1_Baixo_1) {
          s_St_1_Baixo_2_1 = s_St_1_Baixo_2;
          if (s_St_1_Baixo_2_1) {
            s_St_1_Baixo_3_1_1 = s_St_1_Baixo_3;
          } else {
            s_St_1_Baixo_3_1_0 = s_St_1_Baixo_3;
          };
        } else {
          s_St_1_Baixo_2_0 = s_St_1_Baixo_2;
          if (s_St_1_Baixo_2_0) {
            s_St_1_Baixo_3_0_1 = s_St_1_Baixo_3;
          } else {
            s_St_1_Baixo_3_0_0 = s_St_1_Baixo_3;
          };
        };
      } else {
        if (v_31_1) {
          v_31_2_1 = v_31_2;
          if (v_31_2_1) {
            v_31_3_1_1 = v_31_3;
          } else {
            v_31_3_1_0 = v_31_3;
          };
        } else {
          v_31_2_0 = v_31_2;
          if (v_31_2_0) {
            v_31_3_0_1 = v_31_3;
          } else {
            v_31_3_0_0 = v_31_3;
          };
        };
        if (v_33_1) {
          v_33_2_1 = v_33_2;
          if (v_33_2_1) {
            v_33_3_1_1 = v_33_3;
          } else {
            v_33_3_1_0 = v_33_3;
          };
        } else {
          v_33_2_0 = v_33_2;
          if (v_33_2_0) {
            v_33_3_0_1 = v_33_3;
          } else {
            v_33_3_0_0 = v_33_3;
          };
        };
        if (v_35_1) {
          v_35_2_1 = v_35_2;
          if (v_35_2_1) {
            v_35_3_1_1 = v_35_3;
          } else {
            v_35_3_1_0 = v_35_3;
          };
        } else {
          v_35_2_0 = v_35_2;
          if (v_35_2_0) {
            v_35_3_0_1 = v_35_3;
          } else {
            v_35_3_0_0 = v_35_3;
          };
        };
        if (s_St_1_Carregando_1) {
          s_St_1_Carregando_2_1 = s_St_1_Carregando_2;
          if (s_St_1_Carregando_2_1) {
            s_St_1_Carregando_3_1_1 = s_St_1_Carregando_3;
          } else {
            s_St_1_Carregando_3_1_0 = s_St_1_Carregando_3;
          };
        } else {
          s_St_1_Carregando_2_0 = s_St_1_Carregando_2;
          if (s_St_1_Carregando_2_0) {
            s_St_1_Carregando_3_0_1 = s_St_1_Carregando_3;
          } else {
            s_St_1_Carregando_3_0_0 = s_St_1_Carregando_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_379 = true;
        v_363 = true;
        v_364 = true;
        v_365 = true;
      } else {
        v_57 = (e||c);
        v_58 = (v_57||d);
        if (v_58) {
          v_60 = true;
        } else {
          v_60 = self->pnr;
        };
        if (a) {
          v_62 = true;
        } else {
          v_62 = v_60;
        };
        if (ac) {
          r_St_1_Cheio = true;
        } else {
          r_St_1_Cheio = v_62;
        };
        v_379 = r_St_1_Cheio;
        if (v_58) {
          v_59_1 = false;
        } else {
          v_59_1 = true;
        };
        if (a) {
          v_61_1 = false;
        } else {
          v_61_1 = v_59_1;
        };
        if (ac) {
          s_St_1_Cheio_1 = true;
        } else {
          s_St_1_Cheio_1 = v_61_1;
        };
        v_363 = s_St_1_Cheio_1;
        if (v_58) {
          v_59_2 = true;
        } else {
          v_59_2 = false;
        };
        if (a) {
          v_61_2 = true;
        } else {
          v_61_2 = v_59_2;
        };
        if (ac) {
          s_St_1_Cheio_2 = true;
        } else {
          s_St_1_Cheio_2 = v_61_2;
        };
        v_364 = s_St_1_Cheio_2;
        if (v_58) {
          v_59_3 = true;
        } else {
          v_59_3 = false;
        };
        if (a) {
          v_61_3 = false;
        } else {
          v_61_3 = v_59_3;
        };
        if (ac) {
          s_St_1_Cheio_3 = false;
        } else {
          s_St_1_Cheio_3 = v_61_3;
        };
        v_365 = s_St_1_Cheio_3;
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
        if (s_St_1_Cheio_1) {
          s_St_1_Cheio_2_1 = s_St_1_Cheio_2;
          if (s_St_1_Cheio_2_1) {
            s_St_1_Cheio_3_1_1 = s_St_1_Cheio_3;
          } else {
            s_St_1_Cheio_3_1_0 = s_St_1_Cheio_3;
          };
        } else {
          s_St_1_Cheio_2_0 = s_St_1_Cheio_2;
          if (s_St_1_Cheio_2_0) {
            s_St_1_Cheio_3_0_1 = s_St_1_Cheio_3;
          } else {
            s_St_1_Cheio_3_0_0 = s_St_1_Cheio_3;
          };
        };
      };
      v_372 = v_363;
      v_373 = v_364;
      v_374 = v_365;
      v_380 = v_379;
    };
    s_1 = v_372;
    s_2 = v_373;
    s_3 = v_374;
    r = v_380;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (d) {
          v_64 = true;
        } else {
          v_64 = self->pnr;
        };
        if (c) {
          v_66 = true;
        } else {
          v_66 = v_64;
        };
        if (a) {
          v_68 = true;
        } else {
          v_68 = v_66;
        };
        if (b) {
          v_70 = true;
        } else {
          v_70 = v_68;
        };
        if (ac) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_70;
        };
        if (d) {
          v_63_1 = true;
        } else {
          v_63_1 = false;
        };
        if (c) {
          v_65_1 = false;
        } else {
          v_65_1 = v_63_1;
        };
        if (a) {
          v_67_1 = false;
        } else {
          v_67_1 = v_65_1;
        };
        if (b) {
          v_69_1 = true;
        } else {
          v_69_1 = v_67_1;
        };
        if (ac) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_69_1;
        };
        if (d) {
          v_63_2 = true;
        } else {
          v_63_2 = true;
        };
        if (c) {
          v_65_2 = false;
        } else {
          v_65_2 = v_63_2;
        };
        if (a) {
          v_67_2 = true;
        } else {
          v_67_2 = v_65_2;
        };
        if (b) {
          v_69_2 = false;
        } else {
          v_69_2 = v_67_2;
        };
        if (ac) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_69_2;
        };
        if (d) {
          v_63_3 = true;
        } else {
          v_63_3 = true;
        };
        if (c) {
          v_65_3 = false;
        } else {
          v_65_3 = v_63_3;
        };
        if (a) {
          v_67_3 = false;
        } else {
          v_67_3 = v_65_3;
        };
        if (b) {
          v_69_3 = false;
        } else {
          v_69_3 = v_67_3;
        };
        if (ac) {
          s_St_1_Erro_3 = false;
        } else {
          s_St_1_Erro_3 = v_69_3;
        };
        v_381 = r_St_1_Erro;
        v_366 = s_St_1_Erro_1;
        v_367 = s_St_1_Erro_2;
        v_368 = s_St_1_Erro_3;
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
      } else {
        v_50 = (e||d);
        if (v_50) {
          v_52 = true;
        } else {
          v_52 = self->pnr;
        };
        if (c) {
          v_54 = true;
        } else {
          v_54 = v_52;
        };
        if (b) {
          v_56 = true;
        } else {
          v_56 = v_54;
        };
        if (ac) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_56;
        };
        v_381 = r_St_1_Limiar1;
        if (v_50) {
          v_51_1 = false;
        } else {
          v_51_1 = false;
        };
        if (c) {
          v_53_1 = false;
        } else {
          v_53_1 = v_51_1;
        };
        if (b) {
          v_55_1 = true;
        } else {
          v_55_1 = v_53_1;
        };
        if (ac) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_55_1;
        };
        v_366 = s_St_1_Limiar1_1;
        if (v_50) {
          v_51_2 = true;
        } else {
          v_51_2 = true;
        };
        if (c) {
          v_53_2 = false;
        } else {
          v_53_2 = v_51_2;
        };
        if (b) {
          v_55_2 = false;
        } else {
          v_55_2 = v_53_2;
        };
        if (ac) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_55_2;
        };
        v_367 = s_St_1_Limiar1_2;
        if (v_50) {
          v_51_3 = true;
        } else {
          v_51_3 = false;
        };
        if (c) {
          v_53_3 = false;
        } else {
          v_53_3 = v_51_3;
        };
        if (b) {
          v_55_3 = false;
        } else {
          v_55_3 = v_53_3;
        };
        if (ac) {
          s_St_1_Limiar1_3 = false;
        } else {
          s_St_1_Limiar1_3 = v_55_3;
        };
        v_368 = s_St_1_Limiar1_3;
        if (v_51_1) {
          v_51_2_1 = v_51_2;
          if (v_51_2_1) {
            v_51_3_1_1 = v_51_3;
          } else {
            v_51_3_1_0 = v_51_3;
          };
        } else {
          v_51_2_0 = v_51_2;
          if (v_51_2_0) {
            v_51_3_0_1 = v_51_3;
          } else {
            v_51_3_0_0 = v_51_3;
          };
        };
        if (v_53_1) {
          v_53_2_1 = v_53_2;
          if (v_53_2_1) {
            v_53_3_1_1 = v_53_3;
          } else {
            v_53_3_1_0 = v_53_3;
          };
        } else {
          v_53_2_0 = v_53_2;
          if (v_53_2_0) {
            v_53_3_0_1 = v_53_3;
          } else {
            v_53_3_0_0 = v_53_3;
          };
        };
        if (v_55_1) {
          v_55_2_1 = v_55_2;
          if (v_55_2_1) {
            v_55_3_1_1 = v_55_3;
          } else {
            v_55_3_1_0 = v_55_3;
          };
        } else {
          v_55_2_0 = v_55_2;
          if (v_55_2_0) {
            v_55_3_0_1 = v_55_3;
          } else {
            v_55_3_0_0 = v_55_3;
          };
        };
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
      };
      v_375 = v_366;
      v_376 = v_367;
      v_377 = v_368;
      v_383 = v_381;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_382 = true;
        v_369 = true;
        v_370 = true;
        v_371 = true;
      } else {
        v_43 = (e||b);
        if (v_43) {
          v_45 = true;
        } else {
          v_45 = self->pnr;
        };
        if (d) {
          v_47 = true;
        } else {
          v_47 = v_45;
        };
        if (a) {
          v_49 = true;
        } else {
          v_49 = v_47;
        };
        if (ac) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_49;
        };
        v_382 = r_St_1_Limiar2;
        if (v_43) {
          v_44_1 = false;
        } else {
          v_44_1 = false;
        };
        if (d) {
          v_46_1 = true;
        } else {
          v_46_1 = v_44_1;
        };
        if (a) {
          v_48_1 = false;
        } else {
          v_48_1 = v_46_1;
        };
        if (ac) {
          s_St_1_Limiar2_1 = true;
        } else {
          s_St_1_Limiar2_1 = v_48_1;
        };
        v_369 = s_St_1_Limiar2_1;
        if (v_43) {
          v_44_2 = true;
        } else {
          v_44_2 = false;
        };
        if (d) {
          v_46_2 = true;
        } else {
          v_46_2 = v_44_2;
        };
        if (a) {
          v_48_2 = true;
        } else {
          v_48_2 = v_46_2;
        };
        if (ac) {
          s_St_1_Limiar2_2 = true;
        } else {
          s_St_1_Limiar2_2 = v_48_2;
        };
        v_370 = s_St_1_Limiar2_2;
        if (v_43) {
          v_44_3 = true;
        } else {
          v_44_3 = false;
        };
        if (d) {
          v_46_3 = true;
        } else {
          v_46_3 = v_44_3;
        };
        if (a) {
          v_48_3 = false;
        } else {
          v_48_3 = v_46_3;
        };
        if (ac) {
          s_St_1_Limiar2_3 = false;
        } else {
          s_St_1_Limiar2_3 = v_48_3;
        };
        v_371 = s_St_1_Limiar2_3;
      };
      v_375 = v_369;
      v_376 = v_370;
      v_377 = v_371;
      v_383 = v_382;
    };
    s_1 = v_375;
    s_2 = v_376;
    s_3 = v_377;
    r = v_383;
  };
  ck_2_1 = s_1;
  ck_2_2 = s_2;
  ck_2_3 = s_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        estado_bat_St_1_Baixo_1 = true;
        estado_bat_St_1_Baixo_2 = true;
        estado_bat_St_1_Baixo_3 = false;
        nr_St_1_Baixo = false;
        ns_St_1_Baixo_1 = true;
        ns_St_1_Baixo_2 = true;
        ns_St_1_Baixo_3 = true;
        v_315 = estado_bat_St_1_Baixo_1;
        v_316 = estado_bat_St_1_Baixo_2;
        v_317 = estado_bat_St_1_Baixo_3;
        v_351 = nr_St_1_Baixo;
        v_333 = ns_St_1_Baixo_1;
        v_334 = ns_St_1_Baixo_2;
        v_335 = ns_St_1_Baixo_3;
      } else {
        estado_bat_St_1_Carregando_1 = true;
        v_315 = estado_bat_St_1_Carregando_1;
        estado_bat_St_1_Carregando_2 = true;
        v_316 = estado_bat_St_1_Carregando_2;
        estado_bat_St_1_Carregando_3 = true;
        v_317 = estado_bat_St_1_Carregando_3;
        nr_St_1_Carregando = false;
        v_351 = nr_St_1_Carregando;
        ns_St_1_Carregando_1 = true;
        v_333 = ns_St_1_Carregando_1;
        ns_St_1_Carregando_2 = true;
        v_334 = ns_St_1_Carregando_2;
        ns_St_1_Carregando_3 = false;
        v_335 = ns_St_1_Carregando_3;
      };
      v_327 = v_315;
      v_328 = v_316;
      v_329 = v_317;
      v_345 = v_333;
      v_346 = v_334;
      v_347 = v_335;
      v_353 = v_351;
      if (ck_2_3_1_1) {
        if (estado_bat_St_1_Baixo_1) {
          estado_bat_St_1_Baixo_2_1 = estado_bat_St_1_Baixo_2;
          if (estado_bat_St_1_Baixo_2_1) {
            estado_bat_St_1_Baixo_3_1_1 = estado_bat_St_1_Baixo_3;
          } else {
            estado_bat_St_1_Baixo_3_1_0 = estado_bat_St_1_Baixo_3;
          };
        } else {
          estado_bat_St_1_Baixo_2_0 = estado_bat_St_1_Baixo_2;
          if (estado_bat_St_1_Baixo_2_0) {
            estado_bat_St_1_Baixo_3_0_1 = estado_bat_St_1_Baixo_3;
          } else {
            estado_bat_St_1_Baixo_3_0_0 = estado_bat_St_1_Baixo_3;
          };
        };
        if (ns_St_1_Baixo_1) {
          ns_St_1_Baixo_2_1 = ns_St_1_Baixo_2;
          if (ns_St_1_Baixo_2_1) {
            ns_St_1_Baixo_3_1_1 = ns_St_1_Baixo_3;
          } else {
            ns_St_1_Baixo_3_1_0 = ns_St_1_Baixo_3;
          };
        } else {
          ns_St_1_Baixo_2_0 = ns_St_1_Baixo_2;
          if (ns_St_1_Baixo_2_0) {
            ns_St_1_Baixo_3_0_1 = ns_St_1_Baixo_3;
          } else {
            ns_St_1_Baixo_3_0_0 = ns_St_1_Baixo_3;
          };
        };
      } else {
        if (estado_bat_St_1_Carregando_1) {
          estado_bat_St_1_Carregando_2_1 = estado_bat_St_1_Carregando_2;
          if (estado_bat_St_1_Carregando_2_1) {
            estado_bat_St_1_Carregando_3_1_1 = estado_bat_St_1_Carregando_3;
          } else {
            estado_bat_St_1_Carregando_3_1_0 = estado_bat_St_1_Carregando_3;
          };
        } else {
          estado_bat_St_1_Carregando_2_0 = estado_bat_St_1_Carregando_2;
          if (estado_bat_St_1_Carregando_2_0) {
            estado_bat_St_1_Carregando_3_0_1 = estado_bat_St_1_Carregando_3;
          } else {
            estado_bat_St_1_Carregando_3_0_0 = estado_bat_St_1_Carregando_3;
          };
        };
        if (ns_St_1_Carregando_1) {
          ns_St_1_Carregando_2_1 = ns_St_1_Carregando_2;
          if (ns_St_1_Carregando_2_1) {
            ns_St_1_Carregando_3_1_1 = ns_St_1_Carregando_3;
          } else {
            ns_St_1_Carregando_3_1_0 = ns_St_1_Carregando_3;
          };
        } else {
          ns_St_1_Carregando_2_0 = ns_St_1_Carregando_2;
          if (ns_St_1_Carregando_2_0) {
            ns_St_1_Carregando_3_0_1 = ns_St_1_Carregando_3;
          } else {
            ns_St_1_Carregando_3_0_0 = ns_St_1_Carregando_3;
          };
        };
      };
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_318 = true;
        v_319 = true;
        v_320 = true;
        v_352 = true;
        v_336 = true;
        v_337 = true;
        v_338 = true;
      } else {
        estado_bat_St_1_Cheio_1 = false;
        v_318 = estado_bat_St_1_Cheio_1;
        estado_bat_St_1_Cheio_2 = true;
        v_319 = estado_bat_St_1_Cheio_2;
        estado_bat_St_1_Cheio_3 = false;
        v_320 = estado_bat_St_1_Cheio_3;
        nr_St_1_Cheio = false;
        v_352 = nr_St_1_Cheio;
        ns_St_1_Cheio_1 = true;
        v_336 = ns_St_1_Cheio_1;
        ns_St_1_Cheio_2 = false;
        v_337 = ns_St_1_Cheio_2;
        ns_St_1_Cheio_3 = false;
        v_338 = ns_St_1_Cheio_3;
        if (estado_bat_St_1_Cheio_1) {
          estado_bat_St_1_Cheio_2_1 = estado_bat_St_1_Cheio_2;
          if (estado_bat_St_1_Cheio_2_1) {
            estado_bat_St_1_Cheio_3_1_1 = estado_bat_St_1_Cheio_3;
          } else {
            estado_bat_St_1_Cheio_3_1_0 = estado_bat_St_1_Cheio_3;
          };
        } else {
          estado_bat_St_1_Cheio_2_0 = estado_bat_St_1_Cheio_2;
          if (estado_bat_St_1_Cheio_2_0) {
            estado_bat_St_1_Cheio_3_0_1 = estado_bat_St_1_Cheio_3;
          } else {
            estado_bat_St_1_Cheio_3_0_0 = estado_bat_St_1_Cheio_3;
          };
        };
        if (ns_St_1_Cheio_1) {
          ns_St_1_Cheio_2_1 = ns_St_1_Cheio_2;
          if (ns_St_1_Cheio_2_1) {
            ns_St_1_Cheio_3_1_1 = ns_St_1_Cheio_3;
          } else {
            ns_St_1_Cheio_3_1_0 = ns_St_1_Cheio_3;
          };
        } else {
          ns_St_1_Cheio_2_0 = ns_St_1_Cheio_2;
          if (ns_St_1_Cheio_2_0) {
            ns_St_1_Cheio_3_0_1 = ns_St_1_Cheio_3;
          } else {
            ns_St_1_Cheio_3_0_0 = ns_St_1_Cheio_3;
          };
        };
      };
      v_327 = v_318;
      v_328 = v_319;
      v_329 = v_320;
      v_345 = v_336;
      v_346 = v_337;
      v_347 = v_338;
      v_353 = v_352;
    };
    _out->estado_bat_1 = v_327;
    _out->estado_bat_2 = v_328;
    _out->estado_bat_3 = v_329;
    ns_1 = v_345;
    ns_2 = v_346;
    ns_3 = v_347;
    nr = v_353;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      if (ck_2_3_0_1) {
        estado_bat_St_1_Erro_1 = false;
        estado_bat_St_1_Erro_2 = false;
        estado_bat_St_1_Erro_3 = false;
        nr_St_1_Erro = false;
        ns_St_1_Erro_1 = false;
        ns_St_1_Erro_2 = true;
        ns_St_1_Erro_3 = true;
        v_321 = estado_bat_St_1_Erro_1;
        v_322 = estado_bat_St_1_Erro_2;
        v_323 = estado_bat_St_1_Erro_3;
        v_354 = nr_St_1_Erro;
        v_339 = ns_St_1_Erro_1;
        v_340 = ns_St_1_Erro_2;
        v_341 = ns_St_1_Erro_3;
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
      } else {
        estado_bat_St_1_Limiar1_1 = false;
        v_321 = estado_bat_St_1_Limiar1_1;
        estado_bat_St_1_Limiar1_2 = true;
        v_322 = estado_bat_St_1_Limiar1_2;
        estado_bat_St_1_Limiar1_3 = true;
        v_323 = estado_bat_St_1_Limiar1_3;
        nr_St_1_Limiar1 = false;
        v_354 = nr_St_1_Limiar1;
        ns_St_1_Limiar1_1 = false;
        v_339 = ns_St_1_Limiar1_1;
        ns_St_1_Limiar1_2 = true;
        v_340 = ns_St_1_Limiar1_2;
        ns_St_1_Limiar1_3 = false;
        v_341 = ns_St_1_Limiar1_3;
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
      };
      v_330 = v_321;
      v_331 = v_322;
      v_332 = v_323;
      v_348 = v_339;
      v_349 = v_340;
      v_350 = v_341;
      v_356 = v_354;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_324 = true;
        v_325 = true;
        v_326 = true;
        v_355 = true;
        v_342 = true;
        v_343 = true;
        v_344 = true;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_324 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = false;
        v_325 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_326 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_355 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_342 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_343 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_344 = ns_St_1_Limiar2_3;
      };
      v_330 = v_324;
      v_331 = v_325;
      v_332 = v_326;
      v_348 = v_342;
      v_349 = v_343;
      v_350 = v_344;
      v_356 = v_355;
    };
    _out->estado_bat_1 = v_330;
    _out->estado_bat_2 = v_331;
    _out->estado_bat_3 = v_332;
    ns_1 = v_348;
    ns_2 = v_349;
    ns_3 = v_350;
    nr = v_356;
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
      if (!(ck_2_3_0_0)) {
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
      if (!(ck_3_0_0)) {
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
  self->v_357 = ns_1;
  self->v_358 = ns_2;
  self->v_359 = ns_3;;
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
  self->v_414 = true;
  self->v_415 = true;
  self->v_416 = false;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int ns_St_4_Boot_2_0;
  int ns_St_4_Boot_3_0_0;
  int ns_St_4_Boot_3_0_1;
  int ns_St_4_Boot_2_1;
  int ns_St_4_Boot_3_1_0;
  int ns_St_4_Boot_3_1_1;
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
  int nr_St_4_Online;
  int ns_St_4_Online_3;
  int ns_St_4_Online_2;
  int ns_St_4_Online_1;
  int estado_St_4_Online;
  int atuador_St_4_Online;
  int nr_St_4_Teste;
  int ns_St_4_Teste_3;
  int ns_St_4_Teste_2;
  int ns_St_4_Teste_1;
  int estado_St_4_Teste;
  int atuador_St_4_Teste;
  int nr_St_4_Boot;
  int ns_St_4_Boot_3;
  int ns_St_4_Boot_2;
  int ns_St_4_Boot_1;
  int estado_St_4_Boot;
  int atuador_St_4_Boot;
  int nr_St_4_Off;
  int ns_St_4_Off_3;
  int ns_St_4_Off_2;
  int ns_St_4_Off_1;
  int estado_St_4_Off;
  int atuador_St_4_Off;
  int ck_5_3;
  int ck_5_2;
  int ck_5_1;
  int v_99_2_0;
  int v_99_3_0_0;
  int v_99_3_0_1;
  int v_99_2_1;
  int v_99_3_1_0;
  int v_99_3_1_1;
  int v_100;
  int v_99_3;
  int v_99_2;
  int v_99_1;
  int v_97_2_0;
  int v_97_3_0_0;
  int v_97_3_0_1;
  int v_97_2_1;
  int v_97_3_1_0;
  int v_97_3_1_1;
  int v_95_2_0;
  int v_95_3_0_0;
  int v_95_3_0_1;
  int v_95_2_1;
  int v_95_3_1_0;
  int v_95_3_1_1;
  int v_98;
  int v_97_3;
  int v_97_2;
  int v_97_1;
  int v_96;
  int v_95_3;
  int v_95_2;
  int v_95_1;
  int v_94;
  int v_92_2_0;
  int v_92_3_0_0;
  int v_92_3_0_1;
  int v_92_2_1;
  int v_92_3_1_0;
  int v_92_3_1_1;
  int v_93;
  int v_92_3;
  int v_92_2;
  int v_92_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_91;
  int v_3;
  int v_2;
  int v_1;
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
  int s_St_4_Boot_2_0;
  int s_St_4_Boot_3_0_0;
  int s_St_4_Boot_3_0_1;
  int s_St_4_Boot_2_1;
  int s_St_4_Boot_3_1_0;
  int s_St_4_Boot_3_1_1;
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
  int r_St_4_Boot;
  int s_St_4_Boot_3;
  int s_St_4_Boot_2;
  int s_St_4_Boot_1;
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
  ck_1 = self->v_414;
  ck_2 = self->v_415;
  ck_3 = self->v_416;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (t) {
          v_100 = true;
        } else {
          v_100 = self->pnr;
        };
        if (c) {
          r_St_4_Boot = true;
        } else {
          r_St_4_Boot = v_100;
        };
        v_432 = r_St_4_Boot;
        if (t) {
          v_99_1 = false;
        } else {
          v_99_1 = true;
        };
        if (c) {
          s_St_4_Boot_1 = true;
        } else {
          s_St_4_Boot_1 = v_99_1;
        };
        v_417 = s_St_4_Boot_1;
        if (t) {
          v_99_2 = false;
        } else {
          v_99_2 = true;
        };
        if (c) {
          s_St_4_Boot_2 = true;
        } else {
          s_St_4_Boot_2 = v_99_2;
        };
        v_418 = s_St_4_Boot_2;
        if (t) {
          v_99_3 = false;
        } else {
          v_99_3 = true;
        };
        if (c) {
          s_St_4_Boot_3 = false;
        } else {
          s_St_4_Boot_3 = v_99_3;
        };
        v_419 = s_St_4_Boot_3;
        if (v_99_1) {
          v_99_2_1 = v_99_2;
          if (v_99_2_1) {
            v_99_3_1_1 = v_99_3;
          } else {
            v_99_3_1_0 = v_99_3;
          };
        } else {
          v_99_2_0 = v_99_2;
          if (v_99_2_0) {
            v_99_3_0_1 = v_99_3;
          } else {
            v_99_3_0_0 = v_99_3;
          };
        };
        if (s_St_4_Boot_1) {
          s_St_4_Boot_2_1 = s_St_4_Boot_2;
          if (s_St_4_Boot_2_1) {
            s_St_4_Boot_3_1_1 = s_St_4_Boot_3;
          } else {
            s_St_4_Boot_3_1_0 = s_St_4_Boot_3;
          };
        } else {
          s_St_4_Boot_2_0 = s_St_4_Boot_2;
          if (s_St_4_Boot_2_0) {
            s_St_4_Boot_3_0_1 = s_St_4_Boot_3;
          } else {
            s_St_4_Boot_3_0_0 = s_St_4_Boot_3;
          };
        };
      } else {
        if (c) {
          r_St_4_Off = true;
          s_St_4_Off_1 = true;
          s_St_4_Off_2 = true;
          s_St_4_Off_3 = true;
        } else {
          r_St_4_Off = self->pnr;
          s_St_4_Off_1 = true;
          s_St_4_Off_2 = true;
          s_St_4_Off_3 = false;
        };
        v_432 = r_St_4_Off;
        v_417 = s_St_4_Off_1;
        v_418 = s_St_4_Off_2;
        v_419 = s_St_4_Off_3;
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
      };
      v_426 = v_417;
      v_427 = v_418;
      v_428 = v_419;
      v_434 = v_432;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_433 = true;
        v_420 = true;
        v_421 = true;
        v_422 = true;
      } else {
        if (t) {
          v_93 = true;
        } else {
          v_93 = self->pnr;
        };
        if (c) {
          r_St_4_Online = true;
        } else {
          r_St_4_Online = v_93;
        };
        v_433 = r_St_4_Online;
        if (t) {
          v_92_1 = false;
        } else {
          v_92_1 = true;
        };
        if (c) {
          s_St_4_Online_1 = true;
        } else {
          s_St_4_Online_1 = v_92_1;
        };
        v_420 = s_St_4_Online_1;
        if (t) {
          v_92_2 = false;
        } else {
          v_92_2 = false;
        };
        if (c) {
          s_St_4_Online_2 = true;
        } else {
          s_St_4_Online_2 = v_92_2;
        };
        v_421 = s_St_4_Online_2;
        if (t) {
          v_92_3 = false;
        } else {
          v_92_3 = false;
        };
        if (c) {
          s_St_4_Online_3 = false;
        } else {
          s_St_4_Online_3 = v_92_3;
        };
        v_422 = s_St_4_Online_3;
      };
      v_426 = v_420;
      v_427 = v_421;
      v_428 = v_422;
      v_434 = v_433;
      if (!(ck_3_1_0)) {
        if (v_92_1) {
          v_92_2_1 = v_92_2;
          if (v_92_2_1) {
            v_92_3_1_1 = v_92_3;
          } else {
            v_92_3_1_0 = v_92_3;
          };
        } else {
          v_92_2_0 = v_92_2;
          if (v_92_2_0) {
            v_92_3_0_1 = v_92_3;
          } else {
            v_92_3_0_0 = v_92_3;
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
    };
    s_1 = v_426;
    s_2 = v_427;
    s_3 = v_428;
    r = v_434;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_429 = true;
      v_430 = true;
      v_431 = true;
      v_436 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (t) {
          v_91 = true;
        } else {
          v_91 = self->pnr;
        };
        if (c) {
          r_St_4_Sleep = true;
        } else {
          r_St_4_Sleep = v_91;
        };
        v_435 = r_St_4_Sleep;
        if (t) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (c) {
          s_St_4_Sleep_1 = true;
        } else {
          s_St_4_Sleep_1 = v_1;
        };
        v_423 = s_St_4_Sleep_1;
        if (t) {
          v_2 = true;
        } else {
          v_2 = false;
        };
        if (c) {
          s_St_4_Sleep_2 = true;
        } else {
          s_St_4_Sleep_2 = v_2;
        };
        v_424 = s_St_4_Sleep_2;
        if (t) {
          v_3 = true;
        } else {
          v_3 = true;
        };
        if (c) {
          s_St_4_Sleep_3 = false;
        } else {
          s_St_4_Sleep_3 = v_3;
        };
        v_425 = s_St_4_Sleep_3;
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
        if (o) {
          v_96 = true;
          v_95_1 = true;
          v_95_2 = false;
          v_95_3 = false;
        } else {
          v_96 = self->pnr;
          v_95_1 = false;
          v_95_2 = false;
          v_95_3 = false;
        };
        v_94 = !(o);
        if (v_94) {
          v_98 = true;
        } else {
          v_98 = v_96;
        };
        if (c) {
          r_St_4_Teste = true;
        } else {
          r_St_4_Teste = v_98;
        };
        if (v_94) {
          v_97_1 = false;
        } else {
          v_97_1 = v_95_1;
        };
        if (c) {
          s_St_4_Teste_1 = true;
        } else {
          s_St_4_Teste_1 = v_97_1;
        };
        if (v_94) {
          v_97_2 = false;
        } else {
          v_97_2 = v_95_2;
        };
        if (c) {
          s_St_4_Teste_2 = true;
        } else {
          s_St_4_Teste_2 = v_97_2;
        };
        if (v_94) {
          v_97_3 = true;
        } else {
          v_97_3 = v_95_3;
        };
        if (c) {
          s_St_4_Teste_3 = false;
        } else {
          s_St_4_Teste_3 = v_97_3;
        };
        v_435 = r_St_4_Teste;
        v_423 = s_St_4_Teste_1;
        v_424 = s_St_4_Teste_2;
        v_425 = s_St_4_Teste_3;
        if (v_95_1) {
          v_95_2_1 = v_95_2;
          if (v_95_2_1) {
            v_95_3_1_1 = v_95_3;
          } else {
            v_95_3_1_0 = v_95_3;
          };
        } else {
          v_95_2_0 = v_95_2;
          if (v_95_2_0) {
            v_95_3_0_1 = v_95_3;
          } else {
            v_95_3_0_0 = v_95_3;
          };
        };
        if (v_97_1) {
          v_97_2_1 = v_97_2;
          if (v_97_2_1) {
            v_97_3_1_1 = v_97_3;
          } else {
            v_97_3_1_0 = v_97_3;
          };
        } else {
          v_97_2_0 = v_97_2;
          if (v_97_2_0) {
            v_97_3_0_1 = v_97_3;
          } else {
            v_97_3_0_0 = v_97_3;
          };
        };
      };
      v_429 = v_423;
      v_430 = v_424;
      v_431 = v_425;
      v_436 = v_435;
    };
    s_1 = v_429;
    s_2 = v_430;
    s_3 = v_431;
    r = v_436;
  };
  ck_5_1 = s_1;
  ck_5_2 = s_2;
  ck_5_3 = s_3;
  if (ck_5_1) {
    ck_5_2_1 = ck_5_2;
    if (ck_5_2_1) {
      ck_5_3_1_1 = ck_5_3;
      if (ck_5_3_1_1) {
        estado_St_4_Boot = 2;
        v_389 = estado_St_4_Boot;
        atuador_St_4_Boot = true;
        v_384 = atuador_St_4_Boot;
        nr_St_4_Boot = false;
        v_409 = nr_St_4_Boot;
        ns_St_4_Boot_1 = true;
        v_394 = ns_St_4_Boot_1;
        ns_St_4_Boot_2 = true;
        v_395 = ns_St_4_Boot_2;
        ns_St_4_Boot_3 = true;
        v_396 = ns_St_4_Boot_3;
        if (ns_St_4_Boot_1) {
          ns_St_4_Boot_2_1 = ns_St_4_Boot_2;
          if (ns_St_4_Boot_2_1) {
            ns_St_4_Boot_3_1_1 = ns_St_4_Boot_3;
          } else {
            ns_St_4_Boot_3_1_0 = ns_St_4_Boot_3;
          };
        } else {
          ns_St_4_Boot_2_0 = ns_St_4_Boot_2;
          if (ns_St_4_Boot_2_0) {
            ns_St_4_Boot_3_0_1 = ns_St_4_Boot_3;
          } else {
            ns_St_4_Boot_3_0_0 = ns_St_4_Boot_3;
          };
        };
      } else {
        estado_St_4_Off = 0;
        atuador_St_4_Off = false;
        nr_St_4_Off = false;
        ns_St_4_Off_1 = true;
        ns_St_4_Off_2 = true;
        ns_St_4_Off_3 = false;
        v_389 = estado_St_4_Off;
        v_384 = atuador_St_4_Off;
        v_409 = nr_St_4_Off;
        v_394 = ns_St_4_Off_1;
        v_395 = ns_St_4_Off_2;
        v_396 = ns_St_4_Off_3;
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
      };
      v_386 = v_384;
      v_391 = v_389;
      v_403 = v_394;
      v_404 = v_395;
      v_405 = v_396;
      v_411 = v_409;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_390 = 0;
        v_385 = true;
        v_410 = true;
        v_397 = true;
        v_398 = true;
        v_399 = true;
      } else {
        estado_St_4_Online = 4;
        v_390 = estado_St_4_Online;
        atuador_St_4_Online = true;
        v_385 = atuador_St_4_Online;
        nr_St_4_Online = false;
        v_410 = nr_St_4_Online;
        ns_St_4_Online_1 = true;
        v_397 = ns_St_4_Online_1;
        ns_St_4_Online_2 = false;
        v_398 = ns_St_4_Online_2;
        ns_St_4_Online_3 = false;
        v_399 = ns_St_4_Online_3;
      };
      v_386 = v_385;
      v_391 = v_390;
      v_403 = v_397;
      v_404 = v_398;
      v_405 = v_399;
      v_411 = v_410;
      if (!(ck_5_3_1_0)) {
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
    };
    _out->atuador = v_386;
    _out->estado = v_391;
    ns_1 = v_403;
    ns_2 = v_404;
    ns_3 = v_405;
    nr = v_411;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_388 = true;
      v_393 = 0;
      v_406 = true;
      v_407 = true;
      v_408 = true;
      v_413 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        estado_St_4_Sleep = 1;
        v_392 = estado_St_4_Sleep;
        atuador_St_4_Sleep = false;
        v_387 = atuador_St_4_Sleep;
        nr_St_4_Sleep = false;
        v_412 = nr_St_4_Sleep;
        ns_St_4_Sleep_1 = false;
        v_400 = ns_St_4_Sleep_1;
        ns_St_4_Sleep_2 = false;
        v_401 = ns_St_4_Sleep_2;
        ns_St_4_Sleep_3 = true;
        v_402 = ns_St_4_Sleep_3;
      } else {
        estado_St_4_Teste = 3;
        atuador_St_4_Teste = true;
        nr_St_4_Teste = false;
        ns_St_4_Teste_1 = false;
        ns_St_4_Teste_2 = false;
        ns_St_4_Teste_3 = false;
        v_392 = estado_St_4_Teste;
        v_387 = atuador_St_4_Teste;
        v_412 = nr_St_4_Teste;
        v_400 = ns_St_4_Teste_1;
        v_401 = ns_St_4_Teste_2;
        v_402 = ns_St_4_Teste_3;
      };
      v_388 = v_387;
      v_393 = v_392;
      v_406 = v_400;
      v_407 = v_401;
      v_408 = v_402;
      v_413 = v_412;
    };
    _out->atuador = v_388;
    _out->estado = v_393;
    ns_1 = v_406;
    ns_2 = v_407;
    ns_3 = v_408;
    nr = v_413;
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
      } else {
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
      } else {
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
      };
    };
  };
  self->pnr = nr;
  self->v_414 = ns_1;
  self->v_415 = ns_2;
  self->v_416 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_479 = false;
  self->v_480 = true;
  self->v_481 = true;
  self->pnr_1 = false;
  self->ck_12_1 = true;
  self->pnr_2 = false;
  self->v_531 = true;
  self->v_532 = true;
  self->v_533 = false;
  self->pnr_3 = false;
  self->v_584 = true;
  self->v_585 = true;
  self->v_586 = false;
  self->pnr_4 = false;
  self->ck_6_1 = true;
}

void Ups_controlador__contrato_step(int ac, int cb, int l1b, int l2b, int vb,
                                    int td, int tm, int om, int ts, int swa,
                                    int swr1, int swr3, int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int ns_St_5_Carregando_2_0;
  int ns_St_5_Carregando_3_0_0;
  int ns_St_5_Carregando_3_0_1;
  int ns_St_5_Carregando_2_1;
  int ns_St_5_Carregando_3_1_0;
  int ns_St_5_Carregando_3_1_1;
  int estado_bat_St_5_Carregando_2_0;
  int estado_bat_St_5_Carregando_3_0_0;
  int estado_bat_St_5_Carregando_3_0_1;
  int estado_bat_St_5_Carregando_2_1;
  int estado_bat_St_5_Carregando_3_1_0;
  int estado_bat_St_5_Carregando_3_1_1;
  int ns_St_5_Baixo_2_0;
  int ns_St_5_Baixo_3_0_0;
  int ns_St_5_Baixo_3_0_1;
  int ns_St_5_Baixo_2_1;
  int ns_St_5_Baixo_3_1_0;
  int ns_St_5_Baixo_3_1_1;
  int estado_bat_St_5_Baixo_2_0;
  int estado_bat_St_5_Baixo_3_0_0;
  int estado_bat_St_5_Baixo_3_0_1;
  int estado_bat_St_5_Baixo_2_1;
  int estado_bat_St_5_Baixo_3_1_0;
  int estado_bat_St_5_Baixo_3_1_1;
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
  int ns_St_5_Cheio_2_0;
  int ns_St_5_Cheio_3_0_0;
  int ns_St_5_Cheio_3_0_1;
  int ns_St_5_Cheio_2_1;
  int ns_St_5_Cheio_3_1_0;
  int ns_St_5_Cheio_3_1_1;
  int estado_bat_St_5_Cheio_2_0;
  int estado_bat_St_5_Cheio_3_0_0;
  int estado_bat_St_5_Cheio_3_0_1;
  int estado_bat_St_5_Cheio_2_1;
  int estado_bat_St_5_Cheio_3_1_0;
  int estado_bat_St_5_Cheio_3_1_1;
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
  int ck_15_2_0;
  int ck_15_3_0_0;
  int ck_15_3_0_1;
  int ck_15_2_1;
  int ck_15_3_1_0;
  int ck_15_3_1_1;
  int nr_St_5_Carregando;
  int ns_St_5_Carregando_3;
  int ns_St_5_Carregando_2;
  int ns_St_5_Carregando_1;
  int estado_bat_St_5_Carregando_3;
  int estado_bat_St_5_Carregando_2;
  int estado_bat_St_5_Carregando_1;
  int nr_St_5_Baixo;
  int ns_St_5_Baixo_3;
  int ns_St_5_Baixo_2;
  int ns_St_5_Baixo_1;
  int estado_bat_St_5_Baixo_3;
  int estado_bat_St_5_Baixo_2;
  int estado_bat_St_5_Baixo_1;
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
  int nr_St_5_Cheio;
  int ns_St_5_Cheio_3;
  int ns_St_5_Cheio_2;
  int ns_St_5_Cheio_1;
  int estado_bat_St_5_Cheio_3;
  int estado_bat_St_5_Cheio_2;
  int estado_bat_St_5_Cheio_1;
  int nr_St_5_Erro;
  int ns_St_5_Erro_3;
  int ns_St_5_Erro_2;
  int ns_St_5_Erro_1;
  int estado_bat_St_5_Erro_3;
  int estado_bat_St_5_Erro_2;
  int estado_bat_St_5_Erro_1;
  int ck_15_3;
  int ck_15_2;
  int ck_15_1;
  int v_245_2_0;
  int v_245_3_0_0;
  int v_245_3_0_1;
  int v_245_2_1;
  int v_245_3_1_0;
  int v_245_3_1_1;
  int v_243_2_0;
  int v_243_3_0_0;
  int v_243_3_0_1;
  int v_243_2_1;
  int v_243_3_1_0;
  int v_243_3_1_1;
  int v_241_2_0;
  int v_241_3_0_0;
  int v_241_3_0_1;
  int v_241_2_1;
  int v_241_3_1_0;
  int v_241_3_1_1;
  int v_239_2_0;
  int v_239_3_0_0;
  int v_239_3_0_1;
  int v_239_2_1;
  int v_239_3_1_0;
  int v_239_3_1_1;
  int v_246;
  int v_245_3;
  int v_245_2;
  int v_245_1;
  int v_244;
  int v_243_3;
  int v_243_2;
  int v_243_1;
  int v_242;
  int v_241_3;
  int v_241_2;
  int v_241_1;
  int v_240;
  int v_239_3;
  int v_239_2;
  int v_239_1;
  int v_237_2_0;
  int v_237_3_0_0;
  int v_237_3_0_1;
  int v_237_2_1;
  int v_237_3_1_0;
  int v_237_3_1_1;
  int v_235_2_0;
  int v_235_3_0_0;
  int v_235_3_0_1;
  int v_235_2_1;
  int v_235_3_1_0;
  int v_235_3_1_1;
  int v_238;
  int v_237_3;
  int v_237_2;
  int v_237_1;
  int v_236;
  int v_235_3;
  int v_235_2;
  int v_235_1;
  int v_234;
  int v_233;
  int v_231_2_0;
  int v_231_3_0_0;
  int v_231_3_0_1;
  int v_231_2_1;
  int v_231_3_1_0;
  int v_231_3_1_1;
  int v_229_2_0;
  int v_229_3_0_0;
  int v_229_3_0_1;
  int v_229_2_1;
  int v_229_3_1_0;
  int v_229_3_1_1;
  int v_227_2_0;
  int v_227_3_0_0;
  int v_227_3_0_1;
  int v_227_2_1;
  int v_227_3_1_0;
  int v_227_3_1_1;
  int v_232;
  int v_231_3;
  int v_231_2;
  int v_231_1;
  int v_230;
  int v_229_3;
  int v_229_2;
  int v_229_1;
  int v_228;
  int v_227_3;
  int v_227_2;
  int v_227_1;
  int v_226;
  int v_224_2_0;
  int v_224_3_0_0;
  int v_224_3_0_1;
  int v_224_2_1;
  int v_224_3_1_0;
  int v_224_3_1_1;
  int v_222_2_0;
  int v_222_3_0_0;
  int v_222_3_0_1;
  int v_222_2_1;
  int v_222_3_1_0;
  int v_222_3_1_1;
  int v_220_2_0;
  int v_220_3_0_0;
  int v_220_3_0_1;
  int v_220_2_1;
  int v_220_3_1_0;
  int v_220_3_1_1;
  int v_225;
  int v_224_3;
  int v_224_2;
  int v_224_1;
  int v_223;
  int v_222_3;
  int v_222_2;
  int v_222_1;
  int v_221;
  int v_220_3;
  int v_220_2;
  int v_220_1;
  int v_219;
  int v_217_2_0;
  int v_217_3_0_0;
  int v_217_3_0_1;
  int v_217_2_1;
  int v_217_3_1_0;
  int v_217_3_1_1;
  int v_215_2_0;
  int v_215_3_0_0;
  int v_215_3_0_1;
  int v_215_2_1;
  int v_215_3_1_0;
  int v_215_3_1_1;
  int v_218;
  int v_217_3;
  int v_217_2;
  int v_217_1;
  int v_216;
  int v_215_3;
  int v_215_2;
  int v_215_1;
  int v_214;
  int v_213;
  int v_211_2_0;
  int v_211_3_0_0;
  int v_211_3_0_1;
  int v_211_2_1;
  int v_211_3_1_0;
  int v_211_3_1_1;
  int v_209_2_0;
  int v_209_3_0_0;
  int v_209_3_0_1;
  int v_209_2_1;
  int v_209_3_1_0;
  int v_209_3_1_1;
  int v_207_2_0;
  int v_207_3_0_0;
  int v_207_3_0_1;
  int v_207_2_1;
  int v_207_3_1_0;
  int v_207_3_1_1;
  int v_212;
  int v_211_3;
  int v_211_2;
  int v_211_1;
  int v_210;
  int v_209_3;
  int v_209_2;
  int v_209_1;
  int v_208;
  int v_207_3;
  int v_207_2;
  int v_207_1;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
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
  int s_St_5_Carregando_2_0;
  int s_St_5_Carregando_3_0_0;
  int s_St_5_Carregando_3_0_1;
  int s_St_5_Carregando_2_1;
  int s_St_5_Carregando_3_1_0;
  int s_St_5_Carregando_3_1_1;
  int s_St_5_Baixo_2_0;
  int s_St_5_Baixo_3_0_0;
  int s_St_5_Baixo_3_0_1;
  int s_St_5_Baixo_2_1;
  int s_St_5_Baixo_3_1_0;
  int s_St_5_Baixo_3_1_1;
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
  int s_St_5_Cheio_2_0;
  int s_St_5_Cheio_3_0_0;
  int s_St_5_Cheio_3_0_1;
  int s_St_5_Cheio_2_1;
  int s_St_5_Cheio_3_1_0;
  int s_St_5_Cheio_3_1_1;
  int s_St_5_Erro_2_0;
  int s_St_5_Erro_3_0_0;
  int s_St_5_Erro_3_0_1;
  int s_St_5_Erro_2_1;
  int s_St_5_Erro_3_1_0;
  int s_St_5_Erro_3_1_1;
  int ck_14_2_0;
  int ck_14_3_0_0;
  int ck_14_3_0_1;
  int ck_14_2_1;
  int ck_14_3_1_0;
  int ck_14_3_1_1;
  int r_St_5_Carregando;
  int s_St_5_Carregando_3;
  int s_St_5_Carregando_2;
  int s_St_5_Carregando_1;
  int r_St_5_Baixo;
  int s_St_5_Baixo_3;
  int s_St_5_Baixo_2;
  int s_St_5_Baixo_1;
  int r_St_5_Limiar2;
  int s_St_5_Limiar2_3;
  int s_St_5_Limiar2_2;
  int s_St_5_Limiar2_1;
  int r_St_5_Limiar1;
  int s_St_5_Limiar1_3;
  int s_St_5_Limiar1_2;
  int s_St_5_Limiar1_1;
  int r_St_5_Cheio;
  int s_St_5_Cheio_3;
  int s_St_5_Cheio_2;
  int s_St_5_Cheio_1;
  int r_St_5_Erro;
  int s_St_5_Erro_3;
  int s_St_5_Erro_2;
  int s_St_5_Erro_1;
  int ck_14_3;
  int ck_14_2;
  int ck_14_1;
  int nr_1_St_6_Noite;
  int ns_1_St_6_Noite_1;
  int isday_St_6_Noite;
  int nr_1_St_6_Dia;
  int ns_1_St_6_Dia_1;
  int isday_St_6_Dia;
  int ck_13_1;
  int r_1_St_6_Noite;
  int s_1_St_6_Noite_1;
  int r_1_St_6_Dia;
  int s_1_St_6_Dia_1;
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
  int ns_2_St_7_Rlevel4_2_0;
  int ns_2_St_7_Rlevel4_3_0_0;
  int ns_2_St_7_Rlevel4_3_0_1;
  int ns_2_St_7_Rlevel4_2_1;
  int ns_2_St_7_Rlevel4_3_1_0;
  int ns_2_St_7_Rlevel4_3_1_1;
  int ns_2_St_7_Rlevel3_2_0;
  int ns_2_St_7_Rlevel3_3_0_0;
  int ns_2_St_7_Rlevel3_3_0_1;
  int ns_2_St_7_Rlevel3_2_1;
  int ns_2_St_7_Rlevel3_3_1_0;
  int ns_2_St_7_Rlevel3_3_1_1;
  int ns_2_St_7_Rlevel1_2_0;
  int ns_2_St_7_Rlevel1_3_0_0;
  int ns_2_St_7_Rlevel1_3_0_1;
  int ns_2_St_7_Rlevel1_2_1;
  int ns_2_St_7_Rlevel1_3_1_0;
  int ns_2_St_7_Rlevel1_3_1_1;
  int ns_2_St_7_Boot_2_0;
  int ns_2_St_7_Boot_3_0_0;
  int ns_2_St_7_Boot_3_0_1;
  int ns_2_St_7_Boot_2_1;
  int ns_2_St_7_Boot_3_1_0;
  int ns_2_St_7_Boot_3_1_1;
  int ns_2_St_7_Off_2_0;
  int ns_2_St_7_Off_3_0_0;
  int ns_2_St_7_Off_3_0_1;
  int ns_2_St_7_Off_2_1;
  int ns_2_St_7_Off_3_1_0;
  int ns_2_St_7_Off_3_1_1;
  int ck_11_2_0;
  int ck_11_3_0_0;
  int ck_11_3_0_1;
  int ck_11_2_1;
  int ck_11_3_1_0;
  int ck_11_3_1_1;
  int nr_2_St_7_Rlevel4;
  int ns_2_St_7_Rlevel4_3;
  int ns_2_St_7_Rlevel4_2;
  int ns_2_St_7_Rlevel4_1;
  int estado_2_St_7_Rlevel4;
  int nr_2_St_7_Rlevel3;
  int ns_2_St_7_Rlevel3_3;
  int ns_2_St_7_Rlevel3_2;
  int ns_2_St_7_Rlevel3_1;
  int estado_2_St_7_Rlevel3;
  int nr_2_St_7_Rlevel1;
  int ns_2_St_7_Rlevel1_3;
  int ns_2_St_7_Rlevel1_2;
  int ns_2_St_7_Rlevel1_1;
  int estado_2_St_7_Rlevel1;
  int nr_2_St_7_Boot;
  int ns_2_St_7_Boot_3;
  int ns_2_St_7_Boot_2;
  int ns_2_St_7_Boot_1;
  int estado_2_St_7_Boot;
  int nr_2_St_7_Off;
  int ns_2_St_7_Off_3;
  int ns_2_St_7_Off_2;
  int ns_2_St_7_Off_1;
  int estado_2_St_7_Off;
  int ck_11_3;
  int ck_11_2;
  int ck_11_1;
  int v_189_2_0;
  int v_189_3_0_0;
  int v_189_3_0_1;
  int v_189_2_1;
  int v_189_3_1_0;
  int v_189_3_1_1;
  int v_190;
  int v_189_3;
  int v_189_2;
  int v_189_1;
  int v_188;
  int v_186_2_0;
  int v_186_3_0_0;
  int v_186_3_0_1;
  int v_186_2_1;
  int v_186_3_1_0;
  int v_186_3_1_1;
  int v_184_2_0;
  int v_184_3_0_0;
  int v_184_3_0_1;
  int v_184_2_1;
  int v_184_3_1_0;
  int v_184_3_1_1;
  int v_187;
  int v_186_3;
  int v_186_2;
  int v_186_1;
  int v_185;
  int v_184_3;
  int v_184_2;
  int v_184_1;
  int v_182_2_0;
  int v_182_3_0_0;
  int v_182_3_0_1;
  int v_182_2_1;
  int v_182_3_1_0;
  int v_182_3_1_1;
  int v_180_2_0;
  int v_180_3_0_0;
  int v_180_3_0_1;
  int v_180_2_1;
  int v_180_3_1_0;
  int v_180_3_1_1;
  int v_183;
  int v_182_3;
  int v_182_2;
  int v_182_1;
  int v_181;
  int v_180_3;
  int v_180_2;
  int v_180_1;
  int v_178_2_0;
  int v_178_3_0_0;
  int v_178_3_0_1;
  int v_178_2_1;
  int v_178_3_1_0;
  int v_178_3_1_1;
  int v_176_2_0;
  int v_176_3_0_0;
  int v_176_3_0_1;
  int v_176_2_1;
  int v_176_3_1_0;
  int v_176_3_1_1;
  int v_179;
  int v_178_3;
  int v_178_2;
  int v_178_1;
  int v_177;
  int v_176_3;
  int v_176_2;
  int v_176_1;
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
  int s_2_St_7_Rlevel4_2_0;
  int s_2_St_7_Rlevel4_3_0_0;
  int s_2_St_7_Rlevel4_3_0_1;
  int s_2_St_7_Rlevel4_2_1;
  int s_2_St_7_Rlevel4_3_1_0;
  int s_2_St_7_Rlevel4_3_1_1;
  int s_2_St_7_Rlevel3_2_0;
  int s_2_St_7_Rlevel3_3_0_0;
  int s_2_St_7_Rlevel3_3_0_1;
  int s_2_St_7_Rlevel3_2_1;
  int s_2_St_7_Rlevel3_3_1_0;
  int s_2_St_7_Rlevel3_3_1_1;
  int s_2_St_7_Rlevel1_2_0;
  int s_2_St_7_Rlevel1_3_0_0;
  int s_2_St_7_Rlevel1_3_0_1;
  int s_2_St_7_Rlevel1_2_1;
  int s_2_St_7_Rlevel1_3_1_0;
  int s_2_St_7_Rlevel1_3_1_1;
  int s_2_St_7_Boot_2_0;
  int s_2_St_7_Boot_3_0_0;
  int s_2_St_7_Boot_3_0_1;
  int s_2_St_7_Boot_2_1;
  int s_2_St_7_Boot_3_1_0;
  int s_2_St_7_Boot_3_1_1;
  int s_2_St_7_Off_2_0;
  int s_2_St_7_Off_3_0_0;
  int s_2_St_7_Off_3_0_1;
  int s_2_St_7_Off_2_1;
  int s_2_St_7_Off_3_1_0;
  int s_2_St_7_Off_3_1_1;
  int ck_10_2_0;
  int ck_10_3_0_0;
  int ck_10_3_0_1;
  int ck_10_2_1;
  int ck_10_3_1_0;
  int ck_10_3_1_1;
  int r_2_St_7_Rlevel4;
  int s_2_St_7_Rlevel4_3;
  int s_2_St_7_Rlevel4_2;
  int s_2_St_7_Rlevel4_1;
  int r_2_St_7_Rlevel3;
  int s_2_St_7_Rlevel3_3;
  int s_2_St_7_Rlevel3_2;
  int s_2_St_7_Rlevel3_1;
  int r_2_St_7_Rlevel1;
  int s_2_St_7_Rlevel1_3;
  int s_2_St_7_Rlevel1_2;
  int s_2_St_7_Rlevel1_1;
  int r_2_St_7_Boot;
  int s_2_St_7_Boot_3;
  int s_2_St_7_Boot_2;
  int s_2_St_7_Boot_1;
  int r_2_St_7_Off;
  int s_2_St_7_Off_3;
  int s_2_St_7_Off_2;
  int s_2_St_7_Off_1;
  int ck_10_3;
  int ck_10_2;
  int ck_10_1;
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
  int ns_3_St_8_Sleep_2_0;
  int ns_3_St_8_Sleep_3_0_0;
  int ns_3_St_8_Sleep_3_0_1;
  int ns_3_St_8_Sleep_2_1;
  int ns_3_St_8_Sleep_3_1_0;
  int ns_3_St_8_Sleep_3_1_1;
  int ns_3_St_8_Online_2_0;
  int ns_3_St_8_Online_3_0_0;
  int ns_3_St_8_Online_3_0_1;
  int ns_3_St_8_Online_2_1;
  int ns_3_St_8_Online_3_1_0;
  int ns_3_St_8_Online_3_1_1;
  int ns_3_St_8_Teste_2_0;
  int ns_3_St_8_Teste_3_0_0;
  int ns_3_St_8_Teste_3_0_1;
  int ns_3_St_8_Teste_2_1;
  int ns_3_St_8_Teste_3_1_0;
  int ns_3_St_8_Teste_3_1_1;
  int ns_3_St_8_Boot_2_0;
  int ns_3_St_8_Boot_3_0_0;
  int ns_3_St_8_Boot_3_0_1;
  int ns_3_St_8_Boot_2_1;
  int ns_3_St_8_Boot_3_1_0;
  int ns_3_St_8_Boot_3_1_1;
  int ns_3_St_8_Off_2_0;
  int ns_3_St_8_Off_3_0_0;
  int ns_3_St_8_Off_3_0_1;
  int ns_3_St_8_Off_2_1;
  int ns_3_St_8_Off_3_1_0;
  int ns_3_St_8_Off_3_1_1;
  int ck_9_2_0;
  int ck_9_3_0_0;
  int ck_9_3_0_1;
  int ck_9_2_1;
  int ck_9_3_1_0;
  int ck_9_3_1_1;
  int nr_3_St_8_Sleep;
  int ns_3_St_8_Sleep_3;
  int ns_3_St_8_Sleep_2;
  int ns_3_St_8_Sleep_1;
  int estado_1_St_8_Sleep;
  int atuador_St_8_Sleep;
  int nr_3_St_8_Online;
  int ns_3_St_8_Online_3;
  int ns_3_St_8_Online_2;
  int ns_3_St_8_Online_1;
  int estado_1_St_8_Online;
  int atuador_St_8_Online;
  int nr_3_St_8_Teste;
  int ns_3_St_8_Teste_3;
  int ns_3_St_8_Teste_2;
  int ns_3_St_8_Teste_1;
  int estado_1_St_8_Teste;
  int atuador_St_8_Teste;
  int nr_3_St_8_Boot;
  int ns_3_St_8_Boot_3;
  int ns_3_St_8_Boot_2;
  int ns_3_St_8_Boot_1;
  int estado_1_St_8_Boot;
  int atuador_St_8_Boot;
  int nr_3_St_8_Off;
  int ns_3_St_8_Off_3;
  int ns_3_St_8_Off_2;
  int ns_3_St_8_Off_1;
  int estado_1_St_8_Off;
  int atuador_St_8_Off;
  int ck_9_3;
  int ck_9_2;
  int ck_9_1;
  int v_174_2_0;
  int v_174_3_0_0;
  int v_174_3_0_1;
  int v_174_2_1;
  int v_174_3_1_0;
  int v_174_3_1_1;
  int v_175;
  int v_174_3;
  int v_174_2;
  int v_174_1;
  int v_172_2_0;
  int v_172_3_0_0;
  int v_172_3_0_1;
  int v_172_2_1;
  int v_172_3_1_0;
  int v_172_3_1_1;
  int v_170_2_0;
  int v_170_3_0_0;
  int v_170_3_0_1;
  int v_170_2_1;
  int v_170_3_1_0;
  int v_170_3_1_1;
  int v_173;
  int v_172_3;
  int v_172_2;
  int v_172_1;
  int v_171;
  int v_170_3;
  int v_170_2;
  int v_170_1;
  int v_169;
  int v_167_2_0;
  int v_167_3_0_0;
  int v_167_3_0_1;
  int v_167_2_1;
  int v_167_3_1_0;
  int v_167_3_1_1;
  int v_168;
  int v_167_3;
  int v_167_2;
  int v_167_1;
  int v_165_2_0;
  int v_165_3_0_0;
  int v_165_3_0_1;
  int v_165_2_1;
  int v_165_3_1_0;
  int v_165_3_1_1;
  int v_166;
  int v_165_3;
  int v_165_2;
  int v_165_1;
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
  int s_3_St_8_Sleep_2_0;
  int s_3_St_8_Sleep_3_0_0;
  int s_3_St_8_Sleep_3_0_1;
  int s_3_St_8_Sleep_2_1;
  int s_3_St_8_Sleep_3_1_0;
  int s_3_St_8_Sleep_3_1_1;
  int s_3_St_8_Online_2_0;
  int s_3_St_8_Online_3_0_0;
  int s_3_St_8_Online_3_0_1;
  int s_3_St_8_Online_2_1;
  int s_3_St_8_Online_3_1_0;
  int s_3_St_8_Online_3_1_1;
  int s_3_St_8_Teste_2_0;
  int s_3_St_8_Teste_3_0_0;
  int s_3_St_8_Teste_3_0_1;
  int s_3_St_8_Teste_2_1;
  int s_3_St_8_Teste_3_1_0;
  int s_3_St_8_Teste_3_1_1;
  int s_3_St_8_Boot_2_0;
  int s_3_St_8_Boot_3_0_0;
  int s_3_St_8_Boot_3_0_1;
  int s_3_St_8_Boot_2_1;
  int s_3_St_8_Boot_3_1_0;
  int s_3_St_8_Boot_3_1_1;
  int s_3_St_8_Off_2_0;
  int s_3_St_8_Off_3_0_0;
  int s_3_St_8_Off_3_0_1;
  int s_3_St_8_Off_2_1;
  int s_3_St_8_Off_3_1_0;
  int s_3_St_8_Off_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int r_3_St_8_Sleep;
  int s_3_St_8_Sleep_3;
  int s_3_St_8_Sleep_2;
  int s_3_St_8_Sleep_1;
  int r_3_St_8_Online;
  int s_3_St_8_Online_3;
  int s_3_St_8_Online_2;
  int s_3_St_8_Online_1;
  int r_3_St_8_Teste;
  int s_3_St_8_Teste_3;
  int s_3_St_8_Teste_2;
  int s_3_St_8_Teste_1;
  int r_3_St_8_Boot;
  int s_3_St_8_Boot_3;
  int s_3_St_8_Boot_2;
  int s_3_St_8_Boot_1;
  int r_3_St_8_Off;
  int s_3_St_8_Off_3;
  int s_3_St_8_Off_2;
  int s_3_St_8_Off_1;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int nr_4_St_9_Lig;
  int ns_4_St_9_Lig_1;
  int estado_St_9_Lig;
  int nr_4_St_9_Des;
  int ns_4_St_9_Des_1;
  int estado_St_9_Des;
  int ck_7_1;
  int r_4_St_9_Lig;
  int s_4_St_9_Lig_1;
  int r_4_St_9_Des;
  int s_4_St_9_Des_1;
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
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_noite_B100;
  int r_dia_B100;
  int erro_B100;
  int r_noite_B75;
  int r_dia_B75;
  int erro_B75;
  int r_noite_B50;
  int r_dia_B50;
  int erro_B50;
  int r_noite_B25;
  int r_dia_B25;
  int erro_B25;
  int r_noite_BCHR;
  int r_dia_BCHR;
  int erro_BCHR;
  int r_noite_BERR;
  int r_dia_BERR;
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
  int s_3_2_0;
  int s_3_3_0_0;
  int s_3_3_0_1;
  int s_3_2_1;
  int s_3_3_1_0;
  int s_3_3_1_1;
  int ns_3_2_0;
  int ns_3_3_0_0;
  int ns_3_3_0_1;
  int ns_3_2_1;
  int ns_3_3_1_0;
  int ns_3_3_1_1;
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
  int s_2_4_0;
  int s_3_4_0_0;
  int s_3_4_0_1;
  int s_2_4_1;
  int s_3_4_1_0;
  int s_3_4_1_1;
  int ns_2_4_0;
  int ns_3_4_0_0;
  int ns_3_4_0_1;
  int ns_2_4_1;
  int ns_3_4_1_0;
  int ns_3_4_1_1;
  int estado_bat_2_0;
  int estado_bat_3_0_0;
  int estado_bat_3_0_1;
  int estado_bat_2_1;
  int estado_bat_3_1_0;
  int estado_bat_3_1_1;
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
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_3;
  int s_3_2;
  int s_3_1;
  int ns_3_3;
  int ns_3_2;
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
  int s_3_4;
  int s_2_4;
  int s_1_2;
  int ns_3_4;
  int ns_2_4;
  int ns_1_2;
  int r;
  int nr;
  int ac_1;
  int cp_1;
  int l1;
  int l2;
  int v;
  int a_1;
  int b;
  int c_1;
  int d;
  int e;
  int estado_bat_3;
  int estado_bat_2;
  int estado_bat_1;
  int t_1;
  int isday;
  int c_atx;
  int off_atx;
  int ts_1;
  int cr1_1;
  int cr3_1;
  int cr4_1;
  int ba_1;
  int b1;
  int b3;
  int b4;
  int s_atx;
  int s1;
  int s3;
  int s4;
  int a;
  int r1;
  int r3;
  int r4;
  int estado_2;
  int c;
  int t;
  int o;
  int atuador;
  int estado_1;
  int ca_1;
  int estado;
  int v_101;
  int br4;
  int br3;
  int br1;
  int ba;
  int cr4;
  int cr3;
  int cr1;
  int co;
  int ca;
  int cm;
  int cp;
  ac_1 = ac;
  cp_1 = cb;
  v_264 = !(cp_1);
  v_258 = !(cp_1);
  v_253 = !(cp_1);
  l1 = l1b;
  v_265 = (v_264&&l1);
  v_262 = (cp_1&&l1);
  v_259 = !(l1);
  v_260 = (v_258&&v_259);
  v_254 = !(l1);
  v_255 = (v_253&&v_254);
  l2 = l2b;
  v_266 = (v_265&&l2);
  v_263 = (v_262&&l2);
  v_261 = (v_260&&l2);
  v_256 = !(l2);
  v_257 = (v_255&&v_256);
  v = vb;
  a_1 = (v_266&&v);
  v_247 = !(a_1);
  b = (v_263&&v);
  v_248 = !(b);
  v_249 = (v_247&&v_248);
  c_1 = (v_261&&v);
  v_250 = !(c_1);
  v_251 = (v_249&&v_250);
  d = (v_257&&v);
  v_252 = !(d);
  e = (v_251&&v_252);
  ck_14_1 = self->v_479;
  ck_14_2 = self->v_480;
  ck_14_3 = self->v_481;
  t_1 = td;
  ts_1 = ts;
  s_atx = swa;
  s1 = swr1;
  s3 = swr3;
  s4 = swr4;
  ck_10_1 = self->v_531;
  ck_10_2 = self->v_532;
  ck_10_3 = self->v_533;
  t = tm;
  o = om;
  ck_8_1 = self->v_584;
  ck_8_2 = self->v_585;
  ck_8_3 = self->v_586;
  Contrato_controller__contrato_controller_step(ac, cb, l1b, l2b, vb, td, tm,
                                                om, ts, swa, swr1, swr3,
                                                swr4, self->ck_6_1,
                                                self->pnr_4, self->v_586,
                                                self->v_585, self->v_584,
                                                self->pnr_3, self->v_533,
                                                self->v_532, self->v_531,
                                                self->pnr_2, self->ck_12_1,
                                                self->pnr_1, self->v_481,
                                                self->v_480, self->v_479,
                                                self->pnr, true, true, true,
                                                true, true, true, true, true,
                                                true, true, true,
                                                &Contrato_controller__contrato_controller_out_st);
  br4 = Contrato_controller__contrato_controller_out_st.contrato_br4;
  br3 = Contrato_controller__contrato_controller_out_st.contrato_br3;
  br1 = Contrato_controller__contrato_controller_out_st.contrato_br1;
  ba = Contrato_controller__contrato_controller_out_st.contrato_ba;
  cr4 = Contrato_controller__contrato_controller_out_st.contrato_cr4;
  cr3 = Contrato_controller__contrato_controller_out_st.contrato_cr3;
  cr1 = Contrato_controller__contrato_controller_out_st.contrato_cr1;
  co = Contrato_controller__contrato_controller_out_st.contrato_co;
  ca = Contrato_controller__contrato_controller_out_st.contrato_ca;
  cm = Contrato_controller__contrato_controller_out_st.contrato_cm;
  cp = Contrato_controller__contrato_controller_out_st.contrato_cp;
  c_atx = ca;
  v_198 = !(c_atx);
  off_atx = co;
  cr1_1 = cr1;
  v_196 = !(cr1_1);
  cr3_1 = cr3;
  v_194 = !(cr3_1);
  cr4_1 = cr4;
  v_192 = !(cr4_1);
  ba_1 = ba;
  v_197 = (ba_1&&s_atx);
  a = (v_197||v_198);
  b1 = br1;
  v_195 = (b1&&s1);
  r1 = (v_195||v_196);
  b3 = br3;
  v_193 = (b3&&s3);
  r3 = (v_193||v_194);
  b4 = br4;
  v_191 = (b4&&s4);
  r4 = (v_191||v_192);
  c = cm;
  ca_1 = cp;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
      if (ck_14_3_1_1) {
        v_213 = (e||a_1);
        v_214 = (v_213||b);
        if (v_214) {
          v_216 = true;
        } else {
          v_216 = self->pnr;
        };
        if (c_1) {
          v_218 = true;
        } else {
          v_218 = v_216;
        };
        if (ac_1) {
          r_St_5_Baixo = true;
        } else {
          r_St_5_Baixo = v_218;
        };
        if (v_214) {
          v_215_1 = false;
        } else {
          v_215_1 = true;
        };
        if (c_1) {
          v_217_1 = false;
        } else {
          v_217_1 = v_215_1;
        };
        if (ac_1) {
          s_St_5_Baixo_1 = true;
        } else {
          s_St_5_Baixo_1 = v_217_1;
        };
        if (v_214) {
          v_215_2 = true;
        } else {
          v_215_2 = true;
        };
        if (c_1) {
          v_217_2 = false;
        } else {
          v_217_2 = v_215_2;
        };
        if (ac_1) {
          s_St_5_Baixo_2 = true;
        } else {
          s_St_5_Baixo_2 = v_217_2;
        };
        if (v_214) {
          v_215_3 = true;
        } else {
          v_215_3 = true;
        };
        if (c_1) {
          v_217_3 = false;
        } else {
          v_217_3 = v_215_3;
        };
        if (ac_1) {
          s_St_5_Baixo_3 = false;
        } else {
          s_St_5_Baixo_3 = v_217_3;
        };
        v_500 = r_St_5_Baixo;
        v_482 = s_St_5_Baixo_1;
        v_483 = s_St_5_Baixo_2;
        v_484 = s_St_5_Baixo_3;
      } else {
        v_205 = !(ac_1);
        v_206 = (v_205&&d);
        if (v_206) {
          v_208 = true;
          v_207_1 = true;
          v_207_2 = true;
          v_207_3 = true;
        } else {
          v_208 = self->pnr;
          v_207_1 = true;
          v_207_2 = true;
          v_207_3 = false;
        };
        v_203 = !(ac_1);
        v_204 = (v_203&&c_1);
        if (v_204) {
          v_210 = true;
          v_209_1 = false;
          v_209_2 = false;
          v_209_3 = false;
        } else {
          v_210 = v_208;
          v_209_1 = v_207_1;
          v_209_2 = v_207_2;
          v_209_3 = v_207_3;
        };
        v_201 = !(ac_1);
        v_202 = (v_201&&a_1);
        if (v_202) {
          v_212 = true;
          v_211_1 = false;
          v_211_2 = true;
          v_211_3 = false;
        } else {
          v_212 = v_210;
          v_211_1 = v_209_1;
          v_211_2 = v_209_2;
          v_211_3 = v_209_3;
        };
        v_199 = !(ac_1);
        v_200 = (v_199&&b);
        if (v_200) {
          r_St_5_Carregando = true;
        } else {
          r_St_5_Carregando = v_212;
        };
        v_500 = r_St_5_Carregando;
        if (v_200) {
          s_St_5_Carregando_1 = true;
        } else {
          s_St_5_Carregando_1 = v_211_1;
        };
        v_482 = s_St_5_Carregando_1;
        if (v_200) {
          s_St_5_Carregando_2 = false;
        } else {
          s_St_5_Carregando_2 = v_211_2;
        };
        v_483 = s_St_5_Carregando_2;
        if (v_200) {
          s_St_5_Carregando_3 = false;
        } else {
          s_St_5_Carregando_3 = v_211_3;
        };
        v_484 = s_St_5_Carregando_3;
      };
      v_494 = v_482;
      v_495 = v_483;
      v_496 = v_484;
      v_502 = v_500;
      if (ck_14_3_1_1) {
        if (v_215_1) {
          v_215_2_1 = v_215_2;
          if (v_215_2_1) {
            v_215_3_1_1 = v_215_3;
          } else {
            v_215_3_1_0 = v_215_3;
          };
        } else {
          v_215_2_0 = v_215_2;
          if (v_215_2_0) {
            v_215_3_0_1 = v_215_3;
          } else {
            v_215_3_0_0 = v_215_3;
          };
        };
        if (v_217_1) {
          v_217_2_1 = v_217_2;
          if (v_217_2_1) {
            v_217_3_1_1 = v_217_3;
          } else {
            v_217_3_1_0 = v_217_3;
          };
        } else {
          v_217_2_0 = v_217_2;
          if (v_217_2_0) {
            v_217_3_0_1 = v_217_3;
          } else {
            v_217_3_0_0 = v_217_3;
          };
        };
        if (s_St_5_Baixo_1) {
          s_St_5_Baixo_2_1 = s_St_5_Baixo_2;
          if (s_St_5_Baixo_2_1) {
            s_St_5_Baixo_3_1_1 = s_St_5_Baixo_3;
          } else {
            s_St_5_Baixo_3_1_0 = s_St_5_Baixo_3;
          };
        } else {
          s_St_5_Baixo_2_0 = s_St_5_Baixo_2;
          if (s_St_5_Baixo_2_0) {
            s_St_5_Baixo_3_0_1 = s_St_5_Baixo_3;
          } else {
            s_St_5_Baixo_3_0_0 = s_St_5_Baixo_3;
          };
        };
      } else {
        if (v_207_1) {
          v_207_2_1 = v_207_2;
          if (v_207_2_1) {
            v_207_3_1_1 = v_207_3;
          } else {
            v_207_3_1_0 = v_207_3;
          };
        } else {
          v_207_2_0 = v_207_2;
          if (v_207_2_0) {
            v_207_3_0_1 = v_207_3;
          } else {
            v_207_3_0_0 = v_207_3;
          };
        };
        if (v_209_1) {
          v_209_2_1 = v_209_2;
          if (v_209_2_1) {
            v_209_3_1_1 = v_209_3;
          } else {
            v_209_3_1_0 = v_209_3;
          };
        } else {
          v_209_2_0 = v_209_2;
          if (v_209_2_0) {
            v_209_3_0_1 = v_209_3;
          } else {
            v_209_3_0_0 = v_209_3;
          };
        };
        if (v_211_1) {
          v_211_2_1 = v_211_2;
          if (v_211_2_1) {
            v_211_3_1_1 = v_211_3;
          } else {
            v_211_3_1_0 = v_211_3;
          };
        } else {
          v_211_2_0 = v_211_2;
          if (v_211_2_0) {
            v_211_3_0_1 = v_211_3;
          } else {
            v_211_3_0_0 = v_211_3;
          };
        };
        if (s_St_5_Carregando_1) {
          s_St_5_Carregando_2_1 = s_St_5_Carregando_2;
          if (s_St_5_Carregando_2_1) {
            s_St_5_Carregando_3_1_1 = s_St_5_Carregando_3;
          } else {
            s_St_5_Carregando_3_1_0 = s_St_5_Carregando_3;
          };
        } else {
          s_St_5_Carregando_2_0 = s_St_5_Carregando_2;
          if (s_St_5_Carregando_2_0) {
            s_St_5_Carregando_3_0_1 = s_St_5_Carregando_3;
          } else {
            s_St_5_Carregando_3_0_0 = s_St_5_Carregando_3;
          };
        };
      };
    } else {
      ck_14_3_1_0 = ck_14_3;
      if (ck_14_3_1_0) {
        v_501 = true;
        v_485 = true;
        v_486 = true;
        v_487 = true;
      } else {
        v_233 = (e||c_1);
        v_234 = (v_233||d);
        if (v_234) {
          v_236 = true;
        } else {
          v_236 = self->pnr;
        };
        if (a_1) {
          v_238 = true;
        } else {
          v_238 = v_236;
        };
        if (ac_1) {
          r_St_5_Cheio = true;
        } else {
          r_St_5_Cheio = v_238;
        };
        v_501 = r_St_5_Cheio;
        if (v_234) {
          v_235_1 = false;
        } else {
          v_235_1 = true;
        };
        if (a_1) {
          v_237_1 = false;
        } else {
          v_237_1 = v_235_1;
        };
        if (ac_1) {
          s_St_5_Cheio_1 = true;
        } else {
          s_St_5_Cheio_1 = v_237_1;
        };
        v_485 = s_St_5_Cheio_1;
        if (v_234) {
          v_235_2 = true;
        } else {
          v_235_2 = false;
        };
        if (a_1) {
          v_237_2 = true;
        } else {
          v_237_2 = v_235_2;
        };
        if (ac_1) {
          s_St_5_Cheio_2 = true;
        } else {
          s_St_5_Cheio_2 = v_237_2;
        };
        v_486 = s_St_5_Cheio_2;
        if (v_234) {
          v_235_3 = true;
        } else {
          v_235_3 = false;
        };
        if (a_1) {
          v_237_3 = false;
        } else {
          v_237_3 = v_235_3;
        };
        if (ac_1) {
          s_St_5_Cheio_3 = false;
        } else {
          s_St_5_Cheio_3 = v_237_3;
        };
        v_487 = s_St_5_Cheio_3;
        if (v_235_1) {
          v_235_2_1 = v_235_2;
          if (v_235_2_1) {
            v_235_3_1_1 = v_235_3;
          } else {
            v_235_3_1_0 = v_235_3;
          };
        } else {
          v_235_2_0 = v_235_2;
          if (v_235_2_0) {
            v_235_3_0_1 = v_235_3;
          } else {
            v_235_3_0_0 = v_235_3;
          };
        };
        if (v_237_1) {
          v_237_2_1 = v_237_2;
          if (v_237_2_1) {
            v_237_3_1_1 = v_237_3;
          } else {
            v_237_3_1_0 = v_237_3;
          };
        } else {
          v_237_2_0 = v_237_2;
          if (v_237_2_0) {
            v_237_3_0_1 = v_237_3;
          } else {
            v_237_3_0_0 = v_237_3;
          };
        };
        if (s_St_5_Cheio_1) {
          s_St_5_Cheio_2_1 = s_St_5_Cheio_2;
          if (s_St_5_Cheio_2_1) {
            s_St_5_Cheio_3_1_1 = s_St_5_Cheio_3;
          } else {
            s_St_5_Cheio_3_1_0 = s_St_5_Cheio_3;
          };
        } else {
          s_St_5_Cheio_2_0 = s_St_5_Cheio_2;
          if (s_St_5_Cheio_2_0) {
            s_St_5_Cheio_3_0_1 = s_St_5_Cheio_3;
          } else {
            s_St_5_Cheio_3_0_0 = s_St_5_Cheio_3;
          };
        };
      };
      v_494 = v_485;
      v_495 = v_486;
      v_496 = v_487;
      v_502 = v_501;
    };
    s_1_2 = v_494;
    s_2_4 = v_495;
    s_3_4 = v_496;
    r = v_502;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
      if (ck_14_3_0_1) {
        if (d) {
          v_240 = true;
        } else {
          v_240 = self->pnr;
        };
        if (c_1) {
          v_242 = true;
        } else {
          v_242 = v_240;
        };
        if (a_1) {
          v_244 = true;
        } else {
          v_244 = v_242;
        };
        if (b) {
          v_246 = true;
        } else {
          v_246 = v_244;
        };
        if (ac_1) {
          r_St_5_Erro = true;
        } else {
          r_St_5_Erro = v_246;
        };
        if (d) {
          v_239_1 = true;
        } else {
          v_239_1 = false;
        };
        if (c_1) {
          v_241_1 = false;
        } else {
          v_241_1 = v_239_1;
        };
        if (a_1) {
          v_243_1 = false;
        } else {
          v_243_1 = v_241_1;
        };
        if (b) {
          v_245_1 = true;
        } else {
          v_245_1 = v_243_1;
        };
        if (ac_1) {
          s_St_5_Erro_1 = true;
        } else {
          s_St_5_Erro_1 = v_245_1;
        };
        if (d) {
          v_239_2 = true;
        } else {
          v_239_2 = true;
        };
        if (c_1) {
          v_241_2 = false;
        } else {
          v_241_2 = v_239_2;
        };
        if (a_1) {
          v_243_2 = true;
        } else {
          v_243_2 = v_241_2;
        };
        if (b) {
          v_245_2 = false;
        } else {
          v_245_2 = v_243_2;
        };
        if (ac_1) {
          s_St_5_Erro_2 = true;
        } else {
          s_St_5_Erro_2 = v_245_2;
        };
        if (d) {
          v_239_3 = true;
        } else {
          v_239_3 = true;
        };
        if (c_1) {
          v_241_3 = false;
        } else {
          v_241_3 = v_239_3;
        };
        if (a_1) {
          v_243_3 = false;
        } else {
          v_243_3 = v_241_3;
        };
        if (b) {
          v_245_3 = false;
        } else {
          v_245_3 = v_243_3;
        };
        if (ac_1) {
          s_St_5_Erro_3 = false;
        } else {
          s_St_5_Erro_3 = v_245_3;
        };
        v_503 = r_St_5_Erro;
        v_488 = s_St_5_Erro_1;
        v_489 = s_St_5_Erro_2;
        v_490 = s_St_5_Erro_3;
        if (v_239_1) {
          v_239_2_1 = v_239_2;
          if (v_239_2_1) {
            v_239_3_1_1 = v_239_3;
          } else {
            v_239_3_1_0 = v_239_3;
          };
        } else {
          v_239_2_0 = v_239_2;
          if (v_239_2_0) {
            v_239_3_0_1 = v_239_3;
          } else {
            v_239_3_0_0 = v_239_3;
          };
        };
        if (v_241_1) {
          v_241_2_1 = v_241_2;
          if (v_241_2_1) {
            v_241_3_1_1 = v_241_3;
          } else {
            v_241_3_1_0 = v_241_3;
          };
        } else {
          v_241_2_0 = v_241_2;
          if (v_241_2_0) {
            v_241_3_0_1 = v_241_3;
          } else {
            v_241_3_0_0 = v_241_3;
          };
        };
        if (v_243_1) {
          v_243_2_1 = v_243_2;
          if (v_243_2_1) {
            v_243_3_1_1 = v_243_3;
          } else {
            v_243_3_1_0 = v_243_3;
          };
        } else {
          v_243_2_0 = v_243_2;
          if (v_243_2_0) {
            v_243_3_0_1 = v_243_3;
          } else {
            v_243_3_0_0 = v_243_3;
          };
        };
        if (v_245_1) {
          v_245_2_1 = v_245_2;
          if (v_245_2_1) {
            v_245_3_1_1 = v_245_3;
          } else {
            v_245_3_1_0 = v_245_3;
          };
        } else {
          v_245_2_0 = v_245_2;
          if (v_245_2_0) {
            v_245_3_0_1 = v_245_3;
          } else {
            v_245_3_0_0 = v_245_3;
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
      } else {
        v_226 = (e||d);
        if (v_226) {
          v_228 = true;
        } else {
          v_228 = self->pnr;
        };
        if (c_1) {
          v_230 = true;
        } else {
          v_230 = v_228;
        };
        if (b) {
          v_232 = true;
        } else {
          v_232 = v_230;
        };
        if (ac_1) {
          r_St_5_Limiar1 = true;
        } else {
          r_St_5_Limiar1 = v_232;
        };
        v_503 = r_St_5_Limiar1;
        if (v_226) {
          v_227_1 = false;
        } else {
          v_227_1 = false;
        };
        if (c_1) {
          v_229_1 = false;
        } else {
          v_229_1 = v_227_1;
        };
        if (b) {
          v_231_1 = true;
        } else {
          v_231_1 = v_229_1;
        };
        if (ac_1) {
          s_St_5_Limiar1_1 = true;
        } else {
          s_St_5_Limiar1_1 = v_231_1;
        };
        v_488 = s_St_5_Limiar1_1;
        if (v_226) {
          v_227_2 = true;
        } else {
          v_227_2 = true;
        };
        if (c_1) {
          v_229_2 = false;
        } else {
          v_229_2 = v_227_2;
        };
        if (b) {
          v_231_2 = false;
        } else {
          v_231_2 = v_229_2;
        };
        if (ac_1) {
          s_St_5_Limiar1_2 = true;
        } else {
          s_St_5_Limiar1_2 = v_231_2;
        };
        v_489 = s_St_5_Limiar1_2;
        if (v_226) {
          v_227_3 = true;
        } else {
          v_227_3 = false;
        };
        if (c_1) {
          v_229_3 = false;
        } else {
          v_229_3 = v_227_3;
        };
        if (b) {
          v_231_3 = false;
        } else {
          v_231_3 = v_229_3;
        };
        if (ac_1) {
          s_St_5_Limiar1_3 = false;
        } else {
          s_St_5_Limiar1_3 = v_231_3;
        };
        v_490 = s_St_5_Limiar1_3;
        if (v_227_1) {
          v_227_2_1 = v_227_2;
          if (v_227_2_1) {
            v_227_3_1_1 = v_227_3;
          } else {
            v_227_3_1_0 = v_227_3;
          };
        } else {
          v_227_2_0 = v_227_2;
          if (v_227_2_0) {
            v_227_3_0_1 = v_227_3;
          } else {
            v_227_3_0_0 = v_227_3;
          };
        };
        if (v_229_1) {
          v_229_2_1 = v_229_2;
          if (v_229_2_1) {
            v_229_3_1_1 = v_229_3;
          } else {
            v_229_3_1_0 = v_229_3;
          };
        } else {
          v_229_2_0 = v_229_2;
          if (v_229_2_0) {
            v_229_3_0_1 = v_229_3;
          } else {
            v_229_3_0_0 = v_229_3;
          };
        };
        if (v_231_1) {
          v_231_2_1 = v_231_2;
          if (v_231_2_1) {
            v_231_3_1_1 = v_231_3;
          } else {
            v_231_3_1_0 = v_231_3;
          };
        } else {
          v_231_2_0 = v_231_2;
          if (v_231_2_0) {
            v_231_3_0_1 = v_231_3;
          } else {
            v_231_3_0_0 = v_231_3;
          };
        };
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
      };
      v_497 = v_488;
      v_498 = v_489;
      v_499 = v_490;
      v_505 = v_503;
    } else {
      ck_14_3_0_0 = ck_14_3;
      if (ck_14_3_0_0) {
        v_504 = true;
        v_491 = true;
        v_492 = true;
        v_493 = true;
      } else {
        v_219 = (e||b);
        if (v_219) {
          v_221 = true;
        } else {
          v_221 = self->pnr;
        };
        if (d) {
          v_223 = true;
        } else {
          v_223 = v_221;
        };
        if (a_1) {
          v_225 = true;
        } else {
          v_225 = v_223;
        };
        if (ac_1) {
          r_St_5_Limiar2 = true;
        } else {
          r_St_5_Limiar2 = v_225;
        };
        v_504 = r_St_5_Limiar2;
        if (v_219) {
          v_220_1 = false;
        } else {
          v_220_1 = false;
        };
        if (d) {
          v_222_1 = true;
        } else {
          v_222_1 = v_220_1;
        };
        if (a_1) {
          v_224_1 = false;
        } else {
          v_224_1 = v_222_1;
        };
        if (ac_1) {
          s_St_5_Limiar2_1 = true;
        } else {
          s_St_5_Limiar2_1 = v_224_1;
        };
        v_491 = s_St_5_Limiar2_1;
        if (v_219) {
          v_220_2 = true;
        } else {
          v_220_2 = false;
        };
        if (d) {
          v_222_2 = true;
        } else {
          v_222_2 = v_220_2;
        };
        if (a_1) {
          v_224_2 = true;
        } else {
          v_224_2 = v_222_2;
        };
        if (ac_1) {
          s_St_5_Limiar2_2 = true;
        } else {
          s_St_5_Limiar2_2 = v_224_2;
        };
        v_492 = s_St_5_Limiar2_2;
        if (v_219) {
          v_220_3 = true;
        } else {
          v_220_3 = false;
        };
        if (d) {
          v_222_3 = true;
        } else {
          v_222_3 = v_220_3;
        };
        if (a_1) {
          v_224_3 = false;
        } else {
          v_224_3 = v_222_3;
        };
        if (ac_1) {
          s_St_5_Limiar2_3 = false;
        } else {
          s_St_5_Limiar2_3 = v_224_3;
        };
        v_493 = s_St_5_Limiar2_3;
      };
      v_497 = v_491;
      v_498 = v_492;
      v_499 = v_493;
      v_505 = v_504;
    };
    s_1_2 = v_497;
    s_2_4 = v_498;
    s_3_4 = v_499;
    r = v_505;
  };
  ck_15_1 = s_1_2;
  ck_15_2 = s_2_4;
  ck_15_3 = s_3_4;
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      ck_15_3_1_1 = ck_15_3;
      if (ck_15_3_1_1) {
        estado_bat_St_5_Baixo_1 = true;
        estado_bat_St_5_Baixo_2 = true;
        estado_bat_St_5_Baixo_3 = false;
        nr_St_5_Baixo = false;
        ns_St_5_Baixo_1 = true;
        ns_St_5_Baixo_2 = true;
        ns_St_5_Baixo_3 = true;
        v_437 = estado_bat_St_5_Baixo_1;
        v_438 = estado_bat_St_5_Baixo_2;
        v_439 = estado_bat_St_5_Baixo_3;
        v_473 = nr_St_5_Baixo;
        v_455 = ns_St_5_Baixo_1;
        v_456 = ns_St_5_Baixo_2;
        v_457 = ns_St_5_Baixo_3;
      } else {
        estado_bat_St_5_Carregando_1 = true;
        v_437 = estado_bat_St_5_Carregando_1;
        estado_bat_St_5_Carregando_2 = true;
        v_438 = estado_bat_St_5_Carregando_2;
        estado_bat_St_5_Carregando_3 = true;
        v_439 = estado_bat_St_5_Carregando_3;
        nr_St_5_Carregando = false;
        v_473 = nr_St_5_Carregando;
        ns_St_5_Carregando_1 = true;
        v_455 = ns_St_5_Carregando_1;
        ns_St_5_Carregando_2 = true;
        v_456 = ns_St_5_Carregando_2;
        ns_St_5_Carregando_3 = false;
        v_457 = ns_St_5_Carregando_3;
      };
      v_449 = v_437;
      v_450 = v_438;
      v_451 = v_439;
      v_467 = v_455;
      v_468 = v_456;
      v_469 = v_457;
      v_475 = v_473;
      if (ck_15_3_1_1) {
        if (estado_bat_St_5_Baixo_1) {
          estado_bat_St_5_Baixo_2_1 = estado_bat_St_5_Baixo_2;
          if (estado_bat_St_5_Baixo_2_1) {
            estado_bat_St_5_Baixo_3_1_1 = estado_bat_St_5_Baixo_3;
          } else {
            estado_bat_St_5_Baixo_3_1_0 = estado_bat_St_5_Baixo_3;
          };
        } else {
          estado_bat_St_5_Baixo_2_0 = estado_bat_St_5_Baixo_2;
          if (estado_bat_St_5_Baixo_2_0) {
            estado_bat_St_5_Baixo_3_0_1 = estado_bat_St_5_Baixo_3;
          } else {
            estado_bat_St_5_Baixo_3_0_0 = estado_bat_St_5_Baixo_3;
          };
        };
        if (ns_St_5_Baixo_1) {
          ns_St_5_Baixo_2_1 = ns_St_5_Baixo_2;
          if (ns_St_5_Baixo_2_1) {
            ns_St_5_Baixo_3_1_1 = ns_St_5_Baixo_3;
          } else {
            ns_St_5_Baixo_3_1_0 = ns_St_5_Baixo_3;
          };
        } else {
          ns_St_5_Baixo_2_0 = ns_St_5_Baixo_2;
          if (ns_St_5_Baixo_2_0) {
            ns_St_5_Baixo_3_0_1 = ns_St_5_Baixo_3;
          } else {
            ns_St_5_Baixo_3_0_0 = ns_St_5_Baixo_3;
          };
        };
      } else {
        if (estado_bat_St_5_Carregando_1) {
          estado_bat_St_5_Carregando_2_1 = estado_bat_St_5_Carregando_2;
          if (estado_bat_St_5_Carregando_2_1) {
            estado_bat_St_5_Carregando_3_1_1 = estado_bat_St_5_Carregando_3;
          } else {
            estado_bat_St_5_Carregando_3_1_0 = estado_bat_St_5_Carregando_3;
          };
        } else {
          estado_bat_St_5_Carregando_2_0 = estado_bat_St_5_Carregando_2;
          if (estado_bat_St_5_Carregando_2_0) {
            estado_bat_St_5_Carregando_3_0_1 = estado_bat_St_5_Carregando_3;
          } else {
            estado_bat_St_5_Carregando_3_0_0 = estado_bat_St_5_Carregando_3;
          };
        };
        if (ns_St_5_Carregando_1) {
          ns_St_5_Carregando_2_1 = ns_St_5_Carregando_2;
          if (ns_St_5_Carregando_2_1) {
            ns_St_5_Carregando_3_1_1 = ns_St_5_Carregando_3;
          } else {
            ns_St_5_Carregando_3_1_0 = ns_St_5_Carregando_3;
          };
        } else {
          ns_St_5_Carregando_2_0 = ns_St_5_Carregando_2;
          if (ns_St_5_Carregando_2_0) {
            ns_St_5_Carregando_3_0_1 = ns_St_5_Carregando_3;
          } else {
            ns_St_5_Carregando_3_0_0 = ns_St_5_Carregando_3;
          };
        };
      };
    } else {
      ck_15_3_1_0 = ck_15_3;
      if (ck_15_3_1_0) {
        v_440 = true;
        v_441 = true;
        v_442 = true;
        v_474 = true;
        v_458 = true;
        v_459 = true;
        v_460 = true;
      } else {
        estado_bat_St_5_Cheio_1 = false;
        v_440 = estado_bat_St_5_Cheio_1;
        estado_bat_St_5_Cheio_2 = true;
        v_441 = estado_bat_St_5_Cheio_2;
        estado_bat_St_5_Cheio_3 = false;
        v_442 = estado_bat_St_5_Cheio_3;
        nr_St_5_Cheio = false;
        v_474 = nr_St_5_Cheio;
        ns_St_5_Cheio_1 = true;
        v_458 = ns_St_5_Cheio_1;
        ns_St_5_Cheio_2 = false;
        v_459 = ns_St_5_Cheio_2;
        ns_St_5_Cheio_3 = false;
        v_460 = ns_St_5_Cheio_3;
        if (estado_bat_St_5_Cheio_1) {
          estado_bat_St_5_Cheio_2_1 = estado_bat_St_5_Cheio_2;
          if (estado_bat_St_5_Cheio_2_1) {
            estado_bat_St_5_Cheio_3_1_1 = estado_bat_St_5_Cheio_3;
          } else {
            estado_bat_St_5_Cheio_3_1_0 = estado_bat_St_5_Cheio_3;
          };
        } else {
          estado_bat_St_5_Cheio_2_0 = estado_bat_St_5_Cheio_2;
          if (estado_bat_St_5_Cheio_2_0) {
            estado_bat_St_5_Cheio_3_0_1 = estado_bat_St_5_Cheio_3;
          } else {
            estado_bat_St_5_Cheio_3_0_0 = estado_bat_St_5_Cheio_3;
          };
        };
        if (ns_St_5_Cheio_1) {
          ns_St_5_Cheio_2_1 = ns_St_5_Cheio_2;
          if (ns_St_5_Cheio_2_1) {
            ns_St_5_Cheio_3_1_1 = ns_St_5_Cheio_3;
          } else {
            ns_St_5_Cheio_3_1_0 = ns_St_5_Cheio_3;
          };
        } else {
          ns_St_5_Cheio_2_0 = ns_St_5_Cheio_2;
          if (ns_St_5_Cheio_2_0) {
            ns_St_5_Cheio_3_0_1 = ns_St_5_Cheio_3;
          } else {
            ns_St_5_Cheio_3_0_0 = ns_St_5_Cheio_3;
          };
        };
      };
      v_449 = v_440;
      v_450 = v_441;
      v_451 = v_442;
      v_467 = v_458;
      v_468 = v_459;
      v_469 = v_460;
      v_475 = v_474;
    };
    estado_bat_1 = v_449;
    estado_bat_2 = v_450;
    estado_bat_3 = v_451;
    ns_1_2 = v_467;
    ns_2_4 = v_468;
    ns_3_4 = v_469;
    nr = v_475;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      ck_15_3_0_1 = ck_15_3;
      if (ck_15_3_0_1) {
        estado_bat_St_5_Erro_1 = false;
        estado_bat_St_5_Erro_2 = false;
        estado_bat_St_5_Erro_3 = false;
        nr_St_5_Erro = false;
        ns_St_5_Erro_1 = false;
        ns_St_5_Erro_2 = true;
        ns_St_5_Erro_3 = true;
        v_443 = estado_bat_St_5_Erro_1;
        v_444 = estado_bat_St_5_Erro_2;
        v_445 = estado_bat_St_5_Erro_3;
        v_476 = nr_St_5_Erro;
        v_461 = ns_St_5_Erro_1;
        v_462 = ns_St_5_Erro_2;
        v_463 = ns_St_5_Erro_3;
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
      } else {
        estado_bat_St_5_Limiar1_1 = false;
        v_443 = estado_bat_St_5_Limiar1_1;
        estado_bat_St_5_Limiar1_2 = true;
        v_444 = estado_bat_St_5_Limiar1_2;
        estado_bat_St_5_Limiar1_3 = true;
        v_445 = estado_bat_St_5_Limiar1_3;
        nr_St_5_Limiar1 = false;
        v_476 = nr_St_5_Limiar1;
        ns_St_5_Limiar1_1 = false;
        v_461 = ns_St_5_Limiar1_1;
        ns_St_5_Limiar1_2 = true;
        v_462 = ns_St_5_Limiar1_2;
        ns_St_5_Limiar1_3 = false;
        v_463 = ns_St_5_Limiar1_3;
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
      };
      v_452 = v_443;
      v_453 = v_444;
      v_454 = v_445;
      v_470 = v_461;
      v_471 = v_462;
      v_472 = v_463;
      v_478 = v_476;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        v_446 = true;
        v_447 = true;
        v_448 = true;
        v_477 = true;
        v_464 = true;
        v_465 = true;
        v_466 = true;
      } else {
        estado_bat_St_5_Limiar2_1 = true;
        v_446 = estado_bat_St_5_Limiar2_1;
        estado_bat_St_5_Limiar2_2 = false;
        v_447 = estado_bat_St_5_Limiar2_2;
        estado_bat_St_5_Limiar2_3 = false;
        v_448 = estado_bat_St_5_Limiar2_3;
        nr_St_5_Limiar2 = false;
        v_477 = nr_St_5_Limiar2;
        ns_St_5_Limiar2_1 = false;
        v_464 = ns_St_5_Limiar2_1;
        ns_St_5_Limiar2_2 = false;
        v_465 = ns_St_5_Limiar2_2;
        ns_St_5_Limiar2_3 = false;
        v_466 = ns_St_5_Limiar2_3;
      };
      v_452 = v_446;
      v_453 = v_447;
      v_454 = v_448;
      v_470 = v_464;
      v_471 = v_465;
      v_472 = v_466;
      v_478 = v_477;
    };
    estado_bat_1 = v_452;
    estado_bat_2 = v_453;
    estado_bat_3 = v_454;
    ns_1_2 = v_470;
    ns_2_4 = v_471;
    ns_3_4 = v_472;
    nr = v_478;
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
      if (ck_3_1_1) {
        erro_BCHR = false;
        v_607 = erro_BCHR;
      } else {
        erro_B25 = false;
        v_607 = erro_B25;
      };
      v_609 = v_607;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_608 = true;
      } else {
        erro_B50 = false;
        v_608 = erro_B50;
      };
      v_609 = v_608;
    };
    _out->erro = v_609;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        erro_B75 = false;
        v_610 = erro_B75;
      } else {
        erro_B100 = false;
        v_610 = erro_B100;
      };
      v_612 = v_610;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_611 = true;
      } else {
        erro_BERR = true;
        v_611 = erro_BERR;
      };
      v_612 = v_611;
    };
    _out->erro = v_612;
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
    ns_2_4_1 = ns_2_4;
    if (ns_2_4_1) {
      ns_3_4_1_1 = ns_3_4;
    } else {
      ns_3_4_1_0 = ns_3_4;
    };
  } else {
    ns_2_4_0 = ns_2_4;
    if (ns_2_4_0) {
      ns_3_4_0_1 = ns_3_4;
    } else {
      ns_3_4_0_0 = ns_3_4;
    };
  };
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (!(ck_15_3_0_0)) {
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
    s_2_4_1 = s_2_4;
    if (s_2_4_1) {
      s_3_4_1_1 = s_3_4;
    } else {
      s_3_4_1_0 = s_3_4;
    };
  } else {
    s_2_4_0 = s_2_4;
    if (s_2_4_0) {
      s_3_4_0_1 = s_3_4;
    } else {
      s_3_4_0_0 = s_3_4;
    };
  };
  if (!(ck_14_1)) {
    if (!(ck_14_2_0)) {
      if (!(ck_14_3_0_0)) {
        if (v_220_1) {
          v_220_2_1 = v_220_2;
          if (v_220_2_1) {
            v_220_3_1_1 = v_220_3;
          } else {
            v_220_3_1_0 = v_220_3;
          };
        } else {
          v_220_2_0 = v_220_2;
          if (v_220_2_0) {
            v_220_3_0_1 = v_220_3;
          } else {
            v_220_3_0_0 = v_220_3;
          };
        };
        if (v_222_1) {
          v_222_2_1 = v_222_2;
          if (v_222_2_1) {
            v_222_3_1_1 = v_222_3;
          } else {
            v_222_3_1_0 = v_222_3;
          };
        } else {
          v_222_2_0 = v_222_2;
          if (v_222_2_0) {
            v_222_3_0_1 = v_222_3;
          } else {
            v_222_3_0_0 = v_222_3;
          };
        };
        if (v_224_1) {
          v_224_2_1 = v_224_2;
          if (v_224_2_1) {
            v_224_3_1_1 = v_224_3;
          } else {
            v_224_3_1_0 = v_224_3;
          };
        } else {
          v_224_2_0 = v_224_2;
          if (v_224_2_0) {
            v_224_3_0_1 = v_224_3;
          } else {
            v_224_3_0_0 = v_224_3;
          };
        };
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
  if (self->ck_12_1) {
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
  ck_13_1 = s_1_1;
  if (ck_13_1) {
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
  _out->dia = isday;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_145 = !(_out->dia);
      } else {
        v_134 = !(_out->dia);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_123 = !(_out->dia);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_111 = !(_out->dia);
      } else {
        v_102 = !(_out->dia);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_154 = !(_out->dia);
      };
    };
  };
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        if (ts_1) {
          v_190 = true;
          v_189_1 = true;
          v_189_2 = false;
          v_189_3 = false;
        } else {
          v_190 = self->pnr_2;
          v_189_1 = true;
          v_189_2 = true;
          v_189_3 = true;
        };
        v_188 = !(off_atx);
        if (v_188) {
          r_2_St_7_Boot = true;
        } else {
          r_2_St_7_Boot = v_190;
        };
        v_549 = r_2_St_7_Boot;
        if (v_188) {
          s_2_St_7_Boot_1 = true;
        } else {
          s_2_St_7_Boot_1 = v_189_1;
        };
        v_534 = s_2_St_7_Boot_1;
        if (v_188) {
          s_2_St_7_Boot_2 = true;
        } else {
          s_2_St_7_Boot_2 = v_189_2;
        };
        v_535 = s_2_St_7_Boot_2;
        if (v_188) {
          s_2_St_7_Boot_3 = false;
        } else {
          s_2_St_7_Boot_3 = v_189_3;
        };
        v_536 = s_2_St_7_Boot_3;
        if (v_189_1) {
          v_189_2_1 = v_189_2;
          if (v_189_2_1) {
            v_189_3_1_1 = v_189_3;
          } else {
            v_189_3_1_0 = v_189_3;
          };
        } else {
          v_189_2_0 = v_189_2;
          if (v_189_2_0) {
            v_189_3_0_1 = v_189_3;
          } else {
            v_189_3_0_0 = v_189_3;
          };
        };
        if (s_2_St_7_Boot_1) {
          s_2_St_7_Boot_2_1 = s_2_St_7_Boot_2;
          if (s_2_St_7_Boot_2_1) {
            s_2_St_7_Boot_3_1_1 = s_2_St_7_Boot_3;
          } else {
            s_2_St_7_Boot_3_1_0 = s_2_St_7_Boot_3;
          };
        } else {
          s_2_St_7_Boot_2_0 = s_2_St_7_Boot_2;
          if (s_2_St_7_Boot_2_0) {
            s_2_St_7_Boot_3_0_1 = s_2_St_7_Boot_3;
          } else {
            s_2_St_7_Boot_3_0_0 = s_2_St_7_Boot_3;
          };
        };
      } else {
        if (a) {
          r_2_St_7_Off = true;
          s_2_St_7_Off_1 = true;
          s_2_St_7_Off_2 = true;
          s_2_St_7_Off_3 = true;
        } else {
          r_2_St_7_Off = self->pnr_2;
          s_2_St_7_Off_1 = true;
          s_2_St_7_Off_2 = true;
          s_2_St_7_Off_3 = false;
        };
        v_549 = r_2_St_7_Off;
        v_534 = s_2_St_7_Off_1;
        v_535 = s_2_St_7_Off_2;
        v_536 = s_2_St_7_Off_3;
        if (s_2_St_7_Off_1) {
          s_2_St_7_Off_2_1 = s_2_St_7_Off_2;
          if (s_2_St_7_Off_2_1) {
            s_2_St_7_Off_3_1_1 = s_2_St_7_Off_3;
          } else {
            s_2_St_7_Off_3_1_0 = s_2_St_7_Off_3;
          };
        } else {
          s_2_St_7_Off_2_0 = s_2_St_7_Off_2;
          if (s_2_St_7_Off_2_0) {
            s_2_St_7_Off_3_0_1 = s_2_St_7_Off_3;
          } else {
            s_2_St_7_Off_3_0_0 = s_2_St_7_Off_3;
          };
        };
      };
      v_543 = v_534;
      v_544 = v_535;
      v_545 = v_536;
      v_551 = v_549;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_550 = true;
        v_537 = true;
        v_538 = true;
        v_539 = true;
      } else {
        if (r4) {
          v_185 = true;
        } else {
          v_185 = self->pnr_2;
        };
        if (r3) {
          v_187 = true;
        } else {
          v_187 = v_185;
        };
        if (a) {
          r_2_St_7_Rlevel1 = true;
        } else {
          r_2_St_7_Rlevel1 = v_187;
        };
        v_550 = r_2_St_7_Rlevel1;
        if (r4) {
          v_184_1 = false;
        } else {
          v_184_1 = true;
        };
        if (r3) {
          v_186_1 = false;
        } else {
          v_186_1 = v_184_1;
        };
        if (a) {
          s_2_St_7_Rlevel1_1 = true;
        } else {
          s_2_St_7_Rlevel1_1 = v_186_1;
        };
        v_537 = s_2_St_7_Rlevel1_1;
        if (r4) {
          v_184_2 = false;
        } else {
          v_184_2 = false;
        };
        if (r3) {
          v_186_2 = false;
        } else {
          v_186_2 = v_184_2;
        };
        if (a) {
          s_2_St_7_Rlevel1_2 = true;
        } else {
          s_2_St_7_Rlevel1_2 = v_186_2;
        };
        v_538 = s_2_St_7_Rlevel1_2;
        if (r4) {
          v_184_3 = false;
        } else {
          v_184_3 = false;
        };
        if (r3) {
          v_186_3 = true;
        } else {
          v_186_3 = v_184_3;
        };
        if (a) {
          s_2_St_7_Rlevel1_3 = false;
        } else {
          s_2_St_7_Rlevel1_3 = v_186_3;
        };
        v_539 = s_2_St_7_Rlevel1_3;
      };
      v_543 = v_537;
      v_544 = v_538;
      v_545 = v_539;
      v_551 = v_550;
      if (!(ck_10_3_1_0)) {
        if (v_184_1) {
          v_184_2_1 = v_184_2;
          if (v_184_2_1) {
            v_184_3_1_1 = v_184_3;
          } else {
            v_184_3_1_0 = v_184_3;
          };
        } else {
          v_184_2_0 = v_184_2;
          if (v_184_2_0) {
            v_184_3_0_1 = v_184_3;
          } else {
            v_184_3_0_0 = v_184_3;
          };
        };
        if (v_186_1) {
          v_186_2_1 = v_186_2;
          if (v_186_2_1) {
            v_186_3_1_1 = v_186_3;
          } else {
            v_186_3_1_0 = v_186_3;
          };
        } else {
          v_186_2_0 = v_186_2;
          if (v_186_2_0) {
            v_186_3_0_1 = v_186_3;
          } else {
            v_186_3_0_0 = v_186_3;
          };
        };
        if (s_2_St_7_Rlevel1_1) {
          s_2_St_7_Rlevel1_2_1 = s_2_St_7_Rlevel1_2;
          if (s_2_St_7_Rlevel1_2_1) {
            s_2_St_7_Rlevel1_3_1_1 = s_2_St_7_Rlevel1_3;
          } else {
            s_2_St_7_Rlevel1_3_1_0 = s_2_St_7_Rlevel1_3;
          };
        } else {
          s_2_St_7_Rlevel1_2_0 = s_2_St_7_Rlevel1_2;
          if (s_2_St_7_Rlevel1_2_0) {
            s_2_St_7_Rlevel1_3_0_1 = s_2_St_7_Rlevel1_3;
          } else {
            s_2_St_7_Rlevel1_3_0_0 = s_2_St_7_Rlevel1_3;
          };
        };
      };
    };
    s_2_1 = v_543;
    s_2_2 = v_544;
    s_2_3 = v_545;
    r_2 = v_551;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      v_546 = true;
      v_547 = true;
      v_548 = true;
      v_553 = true;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        if (r4) {
          v_181 = true;
        } else {
          v_181 = self->pnr_2;
        };
        if (r1) {
          v_183 = true;
        } else {
          v_183 = v_181;
        };
        if (a) {
          r_2_St_7_Rlevel3 = true;
        } else {
          r_2_St_7_Rlevel3 = v_183;
        };
        if (r4) {
          v_180_1 = false;
        } else {
          v_180_1 = false;
        };
        if (r1) {
          v_182_1 = true;
        } else {
          v_182_1 = v_180_1;
        };
        if (a) {
          s_2_St_7_Rlevel3_1 = true;
        } else {
          s_2_St_7_Rlevel3_1 = v_182_1;
        };
        if (r4) {
          v_180_2 = false;
        } else {
          v_180_2 = false;
        };
        if (r1) {
          v_182_2 = false;
        } else {
          v_182_2 = v_180_2;
        };
        if (a) {
          s_2_St_7_Rlevel3_2 = true;
        } else {
          s_2_St_7_Rlevel3_2 = v_182_2;
        };
        if (r4) {
          v_180_3 = false;
        } else {
          v_180_3 = true;
        };
        if (r1) {
          v_182_3 = false;
        } else {
          v_182_3 = v_180_3;
        };
        if (a) {
          s_2_St_7_Rlevel3_3 = false;
        } else {
          s_2_St_7_Rlevel3_3 = v_182_3;
        };
        v_552 = r_2_St_7_Rlevel3;
        v_540 = s_2_St_7_Rlevel3_1;
        v_541 = s_2_St_7_Rlevel3_2;
        v_542 = s_2_St_7_Rlevel3_3;
        if (v_180_1) {
          v_180_2_1 = v_180_2;
          if (v_180_2_1) {
            v_180_3_1_1 = v_180_3;
          } else {
            v_180_3_1_0 = v_180_3;
          };
        } else {
          v_180_2_0 = v_180_2;
          if (v_180_2_0) {
            v_180_3_0_1 = v_180_3;
          } else {
            v_180_3_0_0 = v_180_3;
          };
        };
        if (v_182_1) {
          v_182_2_1 = v_182_2;
          if (v_182_2_1) {
            v_182_3_1_1 = v_182_3;
          } else {
            v_182_3_1_0 = v_182_3;
          };
        } else {
          v_182_2_0 = v_182_2;
          if (v_182_2_0) {
            v_182_3_0_1 = v_182_3;
          } else {
            v_182_3_0_0 = v_182_3;
          };
        };
      } else {
        if (r3) {
          v_177 = true;
        } else {
          v_177 = self->pnr_2;
        };
        if (r1) {
          v_179 = true;
        } else {
          v_179 = v_177;
        };
        if (a) {
          r_2_St_7_Rlevel4 = true;
        } else {
          r_2_St_7_Rlevel4 = v_179;
        };
        v_552 = r_2_St_7_Rlevel4;
        if (r3) {
          v_176_1 = false;
        } else {
          v_176_1 = false;
        };
        if (r1) {
          v_178_1 = true;
        } else {
          v_178_1 = v_176_1;
        };
        if (a) {
          s_2_St_7_Rlevel4_1 = true;
        } else {
          s_2_St_7_Rlevel4_1 = v_178_1;
        };
        v_540 = s_2_St_7_Rlevel4_1;
        if (r3) {
          v_176_2 = false;
        } else {
          v_176_2 = false;
        };
        if (r1) {
          v_178_2 = false;
        } else {
          v_178_2 = v_176_2;
        };
        if (a) {
          s_2_St_7_Rlevel4_2 = true;
        } else {
          s_2_St_7_Rlevel4_2 = v_178_2;
        };
        v_541 = s_2_St_7_Rlevel4_2;
        if (r3) {
          v_176_3 = true;
        } else {
          v_176_3 = false;
        };
        if (r1) {
          v_178_3 = false;
        } else {
          v_178_3 = v_176_3;
        };
        if (a) {
          s_2_St_7_Rlevel4_3 = false;
        } else {
          s_2_St_7_Rlevel4_3 = v_178_3;
        };
        v_542 = s_2_St_7_Rlevel4_3;
        if (v_176_1) {
          v_176_2_1 = v_176_2;
          if (v_176_2_1) {
            v_176_3_1_1 = v_176_3;
          } else {
            v_176_3_1_0 = v_176_3;
          };
        } else {
          v_176_2_0 = v_176_2;
          if (v_176_2_0) {
            v_176_3_0_1 = v_176_3;
          } else {
            v_176_3_0_0 = v_176_3;
          };
        };
        if (v_178_1) {
          v_178_2_1 = v_178_2;
          if (v_178_2_1) {
            v_178_3_1_1 = v_178_3;
          } else {
            v_178_3_1_0 = v_178_3;
          };
        } else {
          v_178_2_0 = v_178_2;
          if (v_178_2_0) {
            v_178_3_0_1 = v_178_3;
          } else {
            v_178_3_0_0 = v_178_3;
          };
        };
      };
      v_546 = v_540;
      v_547 = v_541;
      v_548 = v_542;
      v_553 = v_552;
    };
    s_2_1 = v_546;
    s_2_2 = v_547;
    s_2_3 = v_548;
    r_2 = v_553;
  };
  ck_11_1 = s_2_1;
  ck_11_2 = s_2_2;
  ck_11_3 = s_2_3;
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        estado_2_St_7_Boot = 1;
        v_506 = estado_2_St_7_Boot;
        nr_2_St_7_Boot = false;
        v_526 = nr_2_St_7_Boot;
        ns_2_St_7_Boot_1 = true;
        v_511 = ns_2_St_7_Boot_1;
        ns_2_St_7_Boot_2 = true;
        v_512 = ns_2_St_7_Boot_2;
        ns_2_St_7_Boot_3 = true;
        v_513 = ns_2_St_7_Boot_3;
        if (ns_2_St_7_Boot_1) {
          ns_2_St_7_Boot_2_1 = ns_2_St_7_Boot_2;
          if (ns_2_St_7_Boot_2_1) {
            ns_2_St_7_Boot_3_1_1 = ns_2_St_7_Boot_3;
          } else {
            ns_2_St_7_Boot_3_1_0 = ns_2_St_7_Boot_3;
          };
        } else {
          ns_2_St_7_Boot_2_0 = ns_2_St_7_Boot_2;
          if (ns_2_St_7_Boot_2_0) {
            ns_2_St_7_Boot_3_0_1 = ns_2_St_7_Boot_3;
          } else {
            ns_2_St_7_Boot_3_0_0 = ns_2_St_7_Boot_3;
          };
        };
      } else {
        estado_2_St_7_Off = 0;
        nr_2_St_7_Off = false;
        ns_2_St_7_Off_1 = true;
        ns_2_St_7_Off_2 = true;
        ns_2_St_7_Off_3 = false;
        v_506 = estado_2_St_7_Off;
        v_526 = nr_2_St_7_Off;
        v_511 = ns_2_St_7_Off_1;
        v_512 = ns_2_St_7_Off_2;
        v_513 = ns_2_St_7_Off_3;
        if (ns_2_St_7_Off_1) {
          ns_2_St_7_Off_2_1 = ns_2_St_7_Off_2;
          if (ns_2_St_7_Off_2_1) {
            ns_2_St_7_Off_3_1_1 = ns_2_St_7_Off_3;
          } else {
            ns_2_St_7_Off_3_1_0 = ns_2_St_7_Off_3;
          };
        } else {
          ns_2_St_7_Off_2_0 = ns_2_St_7_Off_2;
          if (ns_2_St_7_Off_2_0) {
            ns_2_St_7_Off_3_0_1 = ns_2_St_7_Off_3;
          } else {
            ns_2_St_7_Off_3_0_0 = ns_2_St_7_Off_3;
          };
        };
      };
      v_508 = v_506;
      v_520 = v_511;
      v_521 = v_512;
      v_522 = v_513;
      v_528 = v_526;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_507 = 0;
        v_527 = true;
        v_514 = true;
        v_515 = true;
        v_516 = true;
      } else {
        estado_2_St_7_Rlevel1 = 2;
        v_507 = estado_2_St_7_Rlevel1;
        nr_2_St_7_Rlevel1 = false;
        v_527 = nr_2_St_7_Rlevel1;
        ns_2_St_7_Rlevel1_1 = true;
        v_514 = ns_2_St_7_Rlevel1_1;
        ns_2_St_7_Rlevel1_2 = false;
        v_515 = ns_2_St_7_Rlevel1_2;
        ns_2_St_7_Rlevel1_3 = false;
        v_516 = ns_2_St_7_Rlevel1_3;
      };
      v_508 = v_507;
      v_520 = v_514;
      v_521 = v_515;
      v_522 = v_516;
      v_528 = v_527;
      if (!(ck_11_3_1_0)) {
        if (ns_2_St_7_Rlevel1_1) {
          ns_2_St_7_Rlevel1_2_1 = ns_2_St_7_Rlevel1_2;
          if (ns_2_St_7_Rlevel1_2_1) {
            ns_2_St_7_Rlevel1_3_1_1 = ns_2_St_7_Rlevel1_3;
          } else {
            ns_2_St_7_Rlevel1_3_1_0 = ns_2_St_7_Rlevel1_3;
          };
        } else {
          ns_2_St_7_Rlevel1_2_0 = ns_2_St_7_Rlevel1_2;
          if (ns_2_St_7_Rlevel1_2_0) {
            ns_2_St_7_Rlevel1_3_0_1 = ns_2_St_7_Rlevel1_3;
          } else {
            ns_2_St_7_Rlevel1_3_0_0 = ns_2_St_7_Rlevel1_3;
          };
        };
      };
    };
    estado_2 = v_508;
    ns_2_1 = v_520;
    ns_2_2 = v_521;
    ns_2_3 = v_522;
    nr_2 = v_528;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_510 = 0;
      v_523 = true;
      v_524 = true;
      v_525 = true;
      v_530 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        estado_2_St_7_Rlevel3 = 3;
        nr_2_St_7_Rlevel3 = false;
        ns_2_St_7_Rlevel3_1 = false;
        ns_2_St_7_Rlevel3_2 = false;
        ns_2_St_7_Rlevel3_3 = true;
        v_509 = estado_2_St_7_Rlevel3;
        v_529 = nr_2_St_7_Rlevel3;
        v_517 = ns_2_St_7_Rlevel3_1;
        v_518 = ns_2_St_7_Rlevel3_2;
        v_519 = ns_2_St_7_Rlevel3_3;
      } else {
        estado_2_St_7_Rlevel4 = 4;
        v_509 = estado_2_St_7_Rlevel4;
        nr_2_St_7_Rlevel4 = false;
        v_529 = nr_2_St_7_Rlevel4;
        ns_2_St_7_Rlevel4_1 = false;
        v_517 = ns_2_St_7_Rlevel4_1;
        ns_2_St_7_Rlevel4_2 = false;
        v_518 = ns_2_St_7_Rlevel4_2;
        ns_2_St_7_Rlevel4_3 = false;
        v_519 = ns_2_St_7_Rlevel4_3;
      };
      v_510 = v_509;
      v_523 = v_517;
      v_524 = v_518;
      v_525 = v_519;
      v_530 = v_529;
    };
    estado_2 = v_510;
    ns_2_1 = v_523;
    ns_2_2 = v_524;
    ns_2_3 = v_525;
    nr_2 = v_530;
  };
  _out->serv_estado = estado_2;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_153 = (_out->serv_estado>0);
        v_149 = (_out->serv_estado>0);
      } else {
        v_144 = (_out->serv_estado==0);
        v_139 = (_out->serv_estado==0);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_133 = (_out->serv_estado<3);
        v_128 = (_out->serv_estado==0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_121 = (_out->serv_estado<4);
        v_120 = (_out->serv_estado>0);
        v_122 = (v_120&&v_121);
        v_116 = (_out->serv_estado==0);
      } else {
        v_110 = (_out->serv_estado>0);
        v_106 = (_out->serv_estado>0);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_164 = (_out->serv_estado==0);
        v_159 = (_out->serv_estado==0);
      };
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
  if (!(ck_11_1)) {
    if (!(ck_11_2_0)) {
      if (ck_11_3_0_0) {
        if (ns_2_St_7_Rlevel3_1) {
          ns_2_St_7_Rlevel3_2_1 = ns_2_St_7_Rlevel3_2;
          if (ns_2_St_7_Rlevel3_2_1) {
            ns_2_St_7_Rlevel3_3_1_1 = ns_2_St_7_Rlevel3_3;
          } else {
            ns_2_St_7_Rlevel3_3_1_0 = ns_2_St_7_Rlevel3_3;
          };
        } else {
          ns_2_St_7_Rlevel3_2_0 = ns_2_St_7_Rlevel3_2;
          if (ns_2_St_7_Rlevel3_2_0) {
            ns_2_St_7_Rlevel3_3_0_1 = ns_2_St_7_Rlevel3_3;
          } else {
            ns_2_St_7_Rlevel3_3_0_0 = ns_2_St_7_Rlevel3_3;
          };
        };
      } else {
        if (ns_2_St_7_Rlevel4_1) {
          ns_2_St_7_Rlevel4_2_1 = ns_2_St_7_Rlevel4_2;
          if (ns_2_St_7_Rlevel4_2_1) {
            ns_2_St_7_Rlevel4_3_1_1 = ns_2_St_7_Rlevel4_3;
          } else {
            ns_2_St_7_Rlevel4_3_1_0 = ns_2_St_7_Rlevel4_3;
          };
        } else {
          ns_2_St_7_Rlevel4_2_0 = ns_2_St_7_Rlevel4_2;
          if (ns_2_St_7_Rlevel4_2_0) {
            ns_2_St_7_Rlevel4_3_0_1 = ns_2_St_7_Rlevel4_3;
          } else {
            ns_2_St_7_Rlevel4_3_0_0 = ns_2_St_7_Rlevel4_3;
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
  if (!(ck_10_1)) {
    if (!(ck_10_2_0)) {
      if (ck_10_3_0_0) {
        if (s_2_St_7_Rlevel3_1) {
          s_2_St_7_Rlevel3_2_1 = s_2_St_7_Rlevel3_2;
          if (s_2_St_7_Rlevel3_2_1) {
            s_2_St_7_Rlevel3_3_1_1 = s_2_St_7_Rlevel3_3;
          } else {
            s_2_St_7_Rlevel3_3_1_0 = s_2_St_7_Rlevel3_3;
          };
        } else {
          s_2_St_7_Rlevel3_2_0 = s_2_St_7_Rlevel3_2;
          if (s_2_St_7_Rlevel3_2_0) {
            s_2_St_7_Rlevel3_3_0_1 = s_2_St_7_Rlevel3_3;
          } else {
            s_2_St_7_Rlevel3_3_0_0 = s_2_St_7_Rlevel3_3;
          };
        };
      } else {
        if (s_2_St_7_Rlevel4_1) {
          s_2_St_7_Rlevel4_2_1 = s_2_St_7_Rlevel4_2;
          if (s_2_St_7_Rlevel4_2_1) {
            s_2_St_7_Rlevel4_3_1_1 = s_2_St_7_Rlevel4_3;
          } else {
            s_2_St_7_Rlevel4_3_1_0 = s_2_St_7_Rlevel4_3;
          };
        } else {
          s_2_St_7_Rlevel4_2_0 = s_2_St_7_Rlevel4_2;
          if (s_2_St_7_Rlevel4_2_0) {
            s_2_St_7_Rlevel4_3_0_1 = s_2_St_7_Rlevel4_3;
          } else {
            s_2_St_7_Rlevel4_3_0_0 = s_2_St_7_Rlevel4_3;
          };
        };
      };
    };
  };
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        if (t) {
          v_175 = true;
        } else {
          v_175 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Boot = true;
        } else {
          r_3_St_8_Boot = v_175;
        };
        v_602 = r_3_St_8_Boot;
        if (t) {
          v_174_1 = false;
        } else {
          v_174_1 = true;
        };
        if (c) {
          s_3_St_8_Boot_1 = true;
        } else {
          s_3_St_8_Boot_1 = v_174_1;
        };
        v_587 = s_3_St_8_Boot_1;
        if (t) {
          v_174_2 = false;
        } else {
          v_174_2 = true;
        };
        if (c) {
          s_3_St_8_Boot_2 = true;
        } else {
          s_3_St_8_Boot_2 = v_174_2;
        };
        v_588 = s_3_St_8_Boot_2;
        if (t) {
          v_174_3 = false;
        } else {
          v_174_3 = true;
        };
        if (c) {
          s_3_St_8_Boot_3 = false;
        } else {
          s_3_St_8_Boot_3 = v_174_3;
        };
        v_589 = s_3_St_8_Boot_3;
        if (v_174_1) {
          v_174_2_1 = v_174_2;
          if (v_174_2_1) {
            v_174_3_1_1 = v_174_3;
          } else {
            v_174_3_1_0 = v_174_3;
          };
        } else {
          v_174_2_0 = v_174_2;
          if (v_174_2_0) {
            v_174_3_0_1 = v_174_3;
          } else {
            v_174_3_0_0 = v_174_3;
          };
        };
        if (s_3_St_8_Boot_1) {
          s_3_St_8_Boot_2_1 = s_3_St_8_Boot_2;
          if (s_3_St_8_Boot_2_1) {
            s_3_St_8_Boot_3_1_1 = s_3_St_8_Boot_3;
          } else {
            s_3_St_8_Boot_3_1_0 = s_3_St_8_Boot_3;
          };
        } else {
          s_3_St_8_Boot_2_0 = s_3_St_8_Boot_2;
          if (s_3_St_8_Boot_2_0) {
            s_3_St_8_Boot_3_0_1 = s_3_St_8_Boot_3;
          } else {
            s_3_St_8_Boot_3_0_0 = s_3_St_8_Boot_3;
          };
        };
      } else {
        if (c) {
          r_3_St_8_Off = true;
          s_3_St_8_Off_1 = true;
          s_3_St_8_Off_2 = true;
          s_3_St_8_Off_3 = true;
        } else {
          r_3_St_8_Off = self->pnr_3;
          s_3_St_8_Off_1 = true;
          s_3_St_8_Off_2 = true;
          s_3_St_8_Off_3 = false;
        };
        v_602 = r_3_St_8_Off;
        v_587 = s_3_St_8_Off_1;
        v_588 = s_3_St_8_Off_2;
        v_589 = s_3_St_8_Off_3;
        if (s_3_St_8_Off_1) {
          s_3_St_8_Off_2_1 = s_3_St_8_Off_2;
          if (s_3_St_8_Off_2_1) {
            s_3_St_8_Off_3_1_1 = s_3_St_8_Off_3;
          } else {
            s_3_St_8_Off_3_1_0 = s_3_St_8_Off_3;
          };
        } else {
          s_3_St_8_Off_2_0 = s_3_St_8_Off_2;
          if (s_3_St_8_Off_2_0) {
            s_3_St_8_Off_3_0_1 = s_3_St_8_Off_3;
          } else {
            s_3_St_8_Off_3_0_0 = s_3_St_8_Off_3;
          };
        };
      };
      v_596 = v_587;
      v_597 = v_588;
      v_598 = v_589;
      v_604 = v_602;
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_603 = true;
        v_590 = true;
        v_591 = true;
        v_592 = true;
      } else {
        if (t) {
          v_168 = true;
        } else {
          v_168 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Online = true;
        } else {
          r_3_St_8_Online = v_168;
        };
        v_603 = r_3_St_8_Online;
        if (t) {
          v_167_1 = false;
        } else {
          v_167_1 = true;
        };
        if (c) {
          s_3_St_8_Online_1 = true;
        } else {
          s_3_St_8_Online_1 = v_167_1;
        };
        v_590 = s_3_St_8_Online_1;
        if (t) {
          v_167_2 = false;
        } else {
          v_167_2 = false;
        };
        if (c) {
          s_3_St_8_Online_2 = true;
        } else {
          s_3_St_8_Online_2 = v_167_2;
        };
        v_591 = s_3_St_8_Online_2;
        if (t) {
          v_167_3 = false;
        } else {
          v_167_3 = false;
        };
        if (c) {
          s_3_St_8_Online_3 = false;
        } else {
          s_3_St_8_Online_3 = v_167_3;
        };
        v_592 = s_3_St_8_Online_3;
      };
      v_596 = v_590;
      v_597 = v_591;
      v_598 = v_592;
      v_604 = v_603;
      if (!(ck_8_3_1_0)) {
        if (v_167_1) {
          v_167_2_1 = v_167_2;
          if (v_167_2_1) {
            v_167_3_1_1 = v_167_3;
          } else {
            v_167_3_1_0 = v_167_3;
          };
        } else {
          v_167_2_0 = v_167_2;
          if (v_167_2_0) {
            v_167_3_0_1 = v_167_3;
          } else {
            v_167_3_0_0 = v_167_3;
          };
        };
        if (s_3_St_8_Online_1) {
          s_3_St_8_Online_2_1 = s_3_St_8_Online_2;
          if (s_3_St_8_Online_2_1) {
            s_3_St_8_Online_3_1_1 = s_3_St_8_Online_3;
          } else {
            s_3_St_8_Online_3_1_0 = s_3_St_8_Online_3;
          };
        } else {
          s_3_St_8_Online_2_0 = s_3_St_8_Online_2;
          if (s_3_St_8_Online_2_0) {
            s_3_St_8_Online_3_0_1 = s_3_St_8_Online_3;
          } else {
            s_3_St_8_Online_3_0_0 = s_3_St_8_Online_3;
          };
        };
      };
    };
    s_3_1 = v_596;
    s_3_2 = v_597;
    s_3_3 = v_598;
    r_3 = v_604;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      v_599 = true;
      v_600 = true;
      v_601 = true;
      v_606 = true;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        if (t) {
          v_166 = true;
        } else {
          v_166 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Sleep = true;
        } else {
          r_3_St_8_Sleep = v_166;
        };
        v_605 = r_3_St_8_Sleep;
        if (t) {
          v_165_1 = true;
        } else {
          v_165_1 = false;
        };
        if (c) {
          s_3_St_8_Sleep_1 = true;
        } else {
          s_3_St_8_Sleep_1 = v_165_1;
        };
        v_593 = s_3_St_8_Sleep_1;
        if (t) {
          v_165_2 = true;
        } else {
          v_165_2 = false;
        };
        if (c) {
          s_3_St_8_Sleep_2 = true;
        } else {
          s_3_St_8_Sleep_2 = v_165_2;
        };
        v_594 = s_3_St_8_Sleep_2;
        if (t) {
          v_165_3 = true;
        } else {
          v_165_3 = true;
        };
        if (c) {
          s_3_St_8_Sleep_3 = false;
        } else {
          s_3_St_8_Sleep_3 = v_165_3;
        };
        v_595 = s_3_St_8_Sleep_3;
        if (v_165_1) {
          v_165_2_1 = v_165_2;
          if (v_165_2_1) {
            v_165_3_1_1 = v_165_3;
          } else {
            v_165_3_1_0 = v_165_3;
          };
        } else {
          v_165_2_0 = v_165_2;
          if (v_165_2_0) {
            v_165_3_0_1 = v_165_3;
          } else {
            v_165_3_0_0 = v_165_3;
          };
        };
      } else {
        if (o) {
          v_171 = true;
          v_170_1 = true;
          v_170_2 = false;
          v_170_3 = false;
        } else {
          v_171 = self->pnr_3;
          v_170_1 = false;
          v_170_2 = false;
          v_170_3 = false;
        };
        v_169 = !(o);
        if (v_169) {
          v_173 = true;
        } else {
          v_173 = v_171;
        };
        if (c) {
          r_3_St_8_Teste = true;
        } else {
          r_3_St_8_Teste = v_173;
        };
        if (v_169) {
          v_172_1 = false;
        } else {
          v_172_1 = v_170_1;
        };
        if (c) {
          s_3_St_8_Teste_1 = true;
        } else {
          s_3_St_8_Teste_1 = v_172_1;
        };
        if (v_169) {
          v_172_2 = false;
        } else {
          v_172_2 = v_170_2;
        };
        if (c) {
          s_3_St_8_Teste_2 = true;
        } else {
          s_3_St_8_Teste_2 = v_172_2;
        };
        if (v_169) {
          v_172_3 = true;
        } else {
          v_172_3 = v_170_3;
        };
        if (c) {
          s_3_St_8_Teste_3 = false;
        } else {
          s_3_St_8_Teste_3 = v_172_3;
        };
        v_605 = r_3_St_8_Teste;
        v_593 = s_3_St_8_Teste_1;
        v_594 = s_3_St_8_Teste_2;
        v_595 = s_3_St_8_Teste_3;
        if (v_170_1) {
          v_170_2_1 = v_170_2;
          if (v_170_2_1) {
            v_170_3_1_1 = v_170_3;
          } else {
            v_170_3_1_0 = v_170_3;
          };
        } else {
          v_170_2_0 = v_170_2;
          if (v_170_2_0) {
            v_170_3_0_1 = v_170_3;
          } else {
            v_170_3_0_0 = v_170_3;
          };
        };
        if (v_172_1) {
          v_172_2_1 = v_172_2;
          if (v_172_2_1) {
            v_172_3_1_1 = v_172_3;
          } else {
            v_172_3_1_0 = v_172_3;
          };
        } else {
          v_172_2_0 = v_172_2;
          if (v_172_2_0) {
            v_172_3_0_1 = v_172_3;
          } else {
            v_172_3_0_0 = v_172_3;
          };
        };
      };
      v_599 = v_593;
      v_600 = v_594;
      v_601 = v_595;
      v_606 = v_605;
    };
    s_3_1 = v_599;
    s_3_2 = v_600;
    s_3_3 = v_601;
    r_3 = v_606;
  };
  ck_9_1 = s_3_1;
  ck_9_2 = s_3_2;
  ck_9_3 = s_3_3;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      ck_9_3_1_1 = ck_9_3;
      if (ck_9_3_1_1) {
        estado_1_St_8_Boot = 2;
        v_559 = estado_1_St_8_Boot;
        atuador_St_8_Boot = true;
        v_554 = atuador_St_8_Boot;
        nr_3_St_8_Boot = false;
        v_579 = nr_3_St_8_Boot;
        ns_3_St_8_Boot_1 = true;
        v_564 = ns_3_St_8_Boot_1;
        ns_3_St_8_Boot_2 = true;
        v_565 = ns_3_St_8_Boot_2;
        ns_3_St_8_Boot_3 = true;
        v_566 = ns_3_St_8_Boot_3;
        if (ns_3_St_8_Boot_1) {
          ns_3_St_8_Boot_2_1 = ns_3_St_8_Boot_2;
          if (ns_3_St_8_Boot_2_1) {
            ns_3_St_8_Boot_3_1_1 = ns_3_St_8_Boot_3;
          } else {
            ns_3_St_8_Boot_3_1_0 = ns_3_St_8_Boot_3;
          };
        } else {
          ns_3_St_8_Boot_2_0 = ns_3_St_8_Boot_2;
          if (ns_3_St_8_Boot_2_0) {
            ns_3_St_8_Boot_3_0_1 = ns_3_St_8_Boot_3;
          } else {
            ns_3_St_8_Boot_3_0_0 = ns_3_St_8_Boot_3;
          };
        };
      } else {
        estado_1_St_8_Off = 0;
        atuador_St_8_Off = false;
        nr_3_St_8_Off = false;
        ns_3_St_8_Off_1 = true;
        ns_3_St_8_Off_2 = true;
        ns_3_St_8_Off_3 = false;
        v_559 = estado_1_St_8_Off;
        v_554 = atuador_St_8_Off;
        v_579 = nr_3_St_8_Off;
        v_564 = ns_3_St_8_Off_1;
        v_565 = ns_3_St_8_Off_2;
        v_566 = ns_3_St_8_Off_3;
        if (ns_3_St_8_Off_1) {
          ns_3_St_8_Off_2_1 = ns_3_St_8_Off_2;
          if (ns_3_St_8_Off_2_1) {
            ns_3_St_8_Off_3_1_1 = ns_3_St_8_Off_3;
          } else {
            ns_3_St_8_Off_3_1_0 = ns_3_St_8_Off_3;
          };
        } else {
          ns_3_St_8_Off_2_0 = ns_3_St_8_Off_2;
          if (ns_3_St_8_Off_2_0) {
            ns_3_St_8_Off_3_0_1 = ns_3_St_8_Off_3;
          } else {
            ns_3_St_8_Off_3_0_0 = ns_3_St_8_Off_3;
          };
        };
      };
      v_556 = v_554;
      v_561 = v_559;
      v_573 = v_564;
      v_574 = v_565;
      v_575 = v_566;
      v_581 = v_579;
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_560 = 0;
        v_555 = true;
        v_580 = true;
        v_567 = true;
        v_568 = true;
        v_569 = true;
      } else {
        estado_1_St_8_Online = 4;
        v_560 = estado_1_St_8_Online;
        atuador_St_8_Online = true;
        v_555 = atuador_St_8_Online;
        nr_3_St_8_Online = false;
        v_580 = nr_3_St_8_Online;
        ns_3_St_8_Online_1 = true;
        v_567 = ns_3_St_8_Online_1;
        ns_3_St_8_Online_2 = false;
        v_568 = ns_3_St_8_Online_2;
        ns_3_St_8_Online_3 = false;
        v_569 = ns_3_St_8_Online_3;
      };
      v_556 = v_555;
      v_561 = v_560;
      v_573 = v_567;
      v_574 = v_568;
      v_575 = v_569;
      v_581 = v_580;
      if (!(ck_9_3_1_0)) {
        if (ns_3_St_8_Online_1) {
          ns_3_St_8_Online_2_1 = ns_3_St_8_Online_2;
          if (ns_3_St_8_Online_2_1) {
            ns_3_St_8_Online_3_1_1 = ns_3_St_8_Online_3;
          } else {
            ns_3_St_8_Online_3_1_0 = ns_3_St_8_Online_3;
          };
        } else {
          ns_3_St_8_Online_2_0 = ns_3_St_8_Online_2;
          if (ns_3_St_8_Online_2_0) {
            ns_3_St_8_Online_3_0_1 = ns_3_St_8_Online_3;
          } else {
            ns_3_St_8_Online_3_0_0 = ns_3_St_8_Online_3;
          };
        };
      };
    };
    atuador = v_556;
    estado_1 = v_561;
    ns_3_1 = v_573;
    ns_3_2 = v_574;
    ns_3_3 = v_575;
    nr_3 = v_581;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      v_558 = true;
      v_563 = 0;
      v_576 = true;
      v_577 = true;
      v_578 = true;
      v_583 = true;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        estado_1_St_8_Sleep = 1;
        v_562 = estado_1_St_8_Sleep;
        atuador_St_8_Sleep = false;
        v_557 = atuador_St_8_Sleep;
        nr_3_St_8_Sleep = false;
        v_582 = nr_3_St_8_Sleep;
        ns_3_St_8_Sleep_1 = false;
        v_570 = ns_3_St_8_Sleep_1;
        ns_3_St_8_Sleep_2 = false;
        v_571 = ns_3_St_8_Sleep_2;
        ns_3_St_8_Sleep_3 = true;
        v_572 = ns_3_St_8_Sleep_3;
      } else {
        estado_1_St_8_Teste = 3;
        atuador_St_8_Teste = true;
        nr_3_St_8_Teste = false;
        ns_3_St_8_Teste_1 = false;
        ns_3_St_8_Teste_2 = false;
        ns_3_St_8_Teste_3 = false;
        v_562 = estado_1_St_8_Teste;
        v_557 = atuador_St_8_Teste;
        v_582 = nr_3_St_8_Teste;
        v_570 = ns_3_St_8_Teste_1;
        v_571 = ns_3_St_8_Teste_2;
        v_572 = ns_3_St_8_Teste_3;
      };
      v_558 = v_557;
      v_563 = v_562;
      v_576 = v_570;
      v_577 = v_571;
      v_578 = v_572;
      v_583 = v_582;
    };
    atuador = v_558;
    estado_1 = v_563;
    ns_3_1 = v_576;
    ns_3_2 = v_577;
    ns_3_3 = v_578;
    nr_3 = v_583;
  };
  _out->modem_estado = estado_1;
  _out->modem_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_151 = (_out->modem_estado>0);
        v_147 = (_out->modem_estado>0);
      } else {
        v_142 = !(_out->modem_atuador);
        v_137 = !(_out->modem_atuador);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_131 = (_out->modem_estado>0);
        v_126 = (_out->modem_estado>0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_118 = (_out->modem_estado>0);
        v_114 = (_out->modem_estado>0);
      } else {
        v_108 = (_out->modem_estado>0);
        v_104 = (_out->modem_estado>0);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_162 = !(_out->modem_atuador);
        v_157 = !(_out->modem_atuador);
      };
    };
  };
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
    if (ns_3_2_1) {
      ns_3_3_1_1 = ns_3_3;
    } else {
      ns_3_3_1_0 = ns_3_3;
    };
  } else {
    ns_3_2_0 = ns_3_2;
    if (ns_3_2_0) {
      ns_3_3_0_1 = ns_3_3;
    } else {
      ns_3_3_0_0 = ns_3_3;
    };
  };
  if (!(ck_9_1)) {
    if (!(ck_9_2_0)) {
      if (ck_9_3_0_0) {
        if (ns_3_St_8_Sleep_1) {
          ns_3_St_8_Sleep_2_1 = ns_3_St_8_Sleep_2;
          if (ns_3_St_8_Sleep_2_1) {
            ns_3_St_8_Sleep_3_1_1 = ns_3_St_8_Sleep_3;
          } else {
            ns_3_St_8_Sleep_3_1_0 = ns_3_St_8_Sleep_3;
          };
        } else {
          ns_3_St_8_Sleep_2_0 = ns_3_St_8_Sleep_2;
          if (ns_3_St_8_Sleep_2_0) {
            ns_3_St_8_Sleep_3_0_1 = ns_3_St_8_Sleep_3;
          } else {
            ns_3_St_8_Sleep_3_0_0 = ns_3_St_8_Sleep_3;
          };
        };
      } else {
        if (ns_3_St_8_Teste_1) {
          ns_3_St_8_Teste_2_1 = ns_3_St_8_Teste_2;
          if (ns_3_St_8_Teste_2_1) {
            ns_3_St_8_Teste_3_1_1 = ns_3_St_8_Teste_3;
          } else {
            ns_3_St_8_Teste_3_1_0 = ns_3_St_8_Teste_3;
          };
        } else {
          ns_3_St_8_Teste_2_0 = ns_3_St_8_Teste_2;
          if (ns_3_St_8_Teste_2_0) {
            ns_3_St_8_Teste_3_0_1 = ns_3_St_8_Teste_3;
          } else {
            ns_3_St_8_Teste_3_0_0 = ns_3_St_8_Teste_3;
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
  if (!(ck_8_1)) {
    if (!(ck_8_2_0)) {
      if (ck_8_3_0_0) {
        if (s_3_St_8_Sleep_1) {
          s_3_St_8_Sleep_2_1 = s_3_St_8_Sleep_2;
          if (s_3_St_8_Sleep_2_1) {
            s_3_St_8_Sleep_3_1_1 = s_3_St_8_Sleep_3;
          } else {
            s_3_St_8_Sleep_3_1_0 = s_3_St_8_Sleep_3;
          };
        } else {
          s_3_St_8_Sleep_2_0 = s_3_St_8_Sleep_2;
          if (s_3_St_8_Sleep_2_0) {
            s_3_St_8_Sleep_3_0_1 = s_3_St_8_Sleep_3;
          } else {
            s_3_St_8_Sleep_3_0_0 = s_3_St_8_Sleep_3;
          };
        };
      } else {
        if (s_3_St_8_Teste_1) {
          s_3_St_8_Teste_2_1 = s_3_St_8_Teste_2;
          if (s_3_St_8_Teste_2_1) {
            s_3_St_8_Teste_3_1_1 = s_3_St_8_Teste_3;
          } else {
            s_3_St_8_Teste_3_1_0 = s_3_St_8_Teste_3;
          };
        } else {
          s_3_St_8_Teste_2_0 = s_3_St_8_Teste_2;
          if (s_3_St_8_Teste_2_0) {
            s_3_St_8_Teste_3_0_1 = s_3_St_8_Teste_3;
          } else {
            s_3_St_8_Teste_3_0_0 = s_3_St_8_Teste_3;
          };
        };
      };
    };
  };
  if (self->ck_6_1) {
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
  ck_7_1 = s_4_1;
  if (ck_7_1) {
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
  _out->pabx_atuador = estado;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_150 = (_out->dia&&_out->pabx_atuador);
        v_152 = (v_150&&v_151);
        r_dia_BCHR = (v_152&&v_153);
        v_146 = (v_145&&_out->pabx_atuador);
        v_148 = (v_146&&v_147);
        r_noite_BCHR = (v_148&&v_149);
        v_613 = r_dia_BCHR;
        v_619 = r_noite_BCHR;
      } else {
        v_140 = !(_out->pabx_atuador);
        v_141 = (_out->dia&&v_140);
        v_143 = (v_141&&v_142);
        r_dia_B25 = (v_143&&v_144);
        v_613 = r_dia_B25;
        v_135 = !(_out->pabx_atuador);
        v_136 = (v_134&&v_135);
        v_138 = (v_136&&v_137);
        r_noite_B25 = (v_138&&v_139);
        v_619 = r_noite_B25;
      };
      v_615 = v_613;
      v_621 = v_619;
    } else {
      if (ck_3_1_0) {
        v_614 = true;
        v_620 = true;
      } else {
        v_129 = !(_out->pabx_atuador);
        v_130 = (_out->dia&&v_129);
        v_132 = (v_130&&v_131);
        r_dia_B50 = (v_132&&v_133);
        v_614 = r_dia_B50;
        v_124 = !(_out->pabx_atuador);
        v_125 = (v_123&&v_124);
        v_127 = (v_125&&v_126);
        r_noite_B50 = (v_127&&v_128);
        v_620 = r_noite_B50;
      };
      v_615 = v_614;
      v_621 = v_620;
    };
    _out->r_dia = v_615;
    _out->r_noite = v_621;
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_117 = (_out->dia&&_out->pabx_atuador);
        v_119 = (v_117&&v_118);
        r_dia_B75 = (v_119&&v_122);
        v_112 = !(_out->pabx_atuador);
        v_113 = (v_111&&v_112);
        v_115 = (v_113&&v_114);
        r_noite_B75 = (v_115&&v_116);
        v_616 = r_dia_B75;
        v_622 = r_noite_B75;
      } else {
        v_107 = (_out->dia&&_out->pabx_atuador);
        v_109 = (v_107&&v_108);
        r_dia_B100 = (v_109&&v_110);
        v_616 = r_dia_B100;
        v_103 = (v_102&&_out->pabx_atuador);
        v_105 = (v_103&&v_104);
        r_noite_B100 = (v_105&&v_106);
        v_622 = r_noite_B100;
      };
      v_618 = v_616;
      v_624 = v_622;
    } else {
      if (ck_3_0_0) {
        v_617 = true;
        v_623 = true;
      } else {
        v_160 = !(_out->pabx_atuador);
        v_161 = (_out->dia&&v_160);
        v_163 = (v_161&&v_162);
        r_dia_BERR = (v_163&&v_164);
        v_617 = r_dia_BERR;
        v_155 = !(_out->pabx_atuador);
        v_156 = (v_154&&v_155);
        v_158 = (v_156&&v_157);
        r_noite_BERR = (v_158&&v_159);
        v_623 = r_noite_BERR;
      };
      v_618 = v_617;
      v_624 = v_623;
    };
    _out->r_dia = v_618;
    _out->r_noite = v_624;
  };
  v_101 = (_out->r_dia||_out->r_noite);
  self->pnr = nr;
  self->v_479 = ns_1_2;
  self->v_480 = ns_2_4;
  self->v_481 = ns_3_4;
  self->pnr_1 = nr_1;
  self->ck_12_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_531 = ns_2_1;
  self->v_532 = ns_2_2;
  self->v_533 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_584 = ns_3_1;
  self->v_585 = ns_3_2;
  self->v_586 = ns_3_3;
  self->pnr_4 = nr_4;
  self->ck_6_1 = ns_4_1;;
}

