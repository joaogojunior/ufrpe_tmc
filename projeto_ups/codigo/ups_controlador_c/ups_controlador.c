/* --- Generated the 28/7/2018 at 7:48 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_290 = true;
  self->v_291 = true;
  self->v_292 = false;
}

void Ups_controlador__computador_step(int c_atx, int off_atx, int ts,
                                      int cr1, int cr3, int cr4, int ba,
                                      int b1, int b3, int b4, int s_atx,
                                      int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
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
  v_21 = !(c_atx);
  v_20 = (ba&&s_atx);
  a = (v_20||v_21);
  v_19 = !(cr1);
  v_18 = (b1&&s1);
  r1 = (v_18||v_19);
  v_17 = !(cr3);
  v_16 = (b3&&s3);
  r3 = (v_16||v_17);
  v_15 = !(cr4);
  v_14 = (b4&&s4);
  r4 = (v_14||v_15);
  ck_1_4 = self->v_290;
  ck_2 = self->v_291;
  ck_3 = self->v_292;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (ts) {
          v_13 = true;
        } else {
          v_13 = self->pnr;
        };
        if (off_atx) {
          r_St_Boot = true;
        } else {
          r_St_Boot = v_13;
        };
        v_308 = r_St_Boot;
        if (ts) {
          v_12_1 = true;
        } else {
          v_12_1 = true;
        };
        if (off_atx) {
          s_St_Boot_1 = true;
        } else {
          s_St_Boot_1 = v_12_1;
        };
        v_293 = s_St_Boot_1;
        if (ts) {
          v_12_2 = false;
        } else {
          v_12_2 = true;
        };
        if (off_atx) {
          s_St_Boot_2 = true;
        } else {
          s_St_Boot_2 = v_12_2;
        };
        v_294 = s_St_Boot_2;
        if (ts) {
          v_12_3 = false;
        } else {
          v_12_3 = true;
        };
        if (off_atx) {
          s_St_Boot_3 = false;
        } else {
          s_St_Boot_3 = v_12_3;
        };
        v_295 = s_St_Boot_3;
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
        v_308 = r_St_Off;
        v_293 = s_St_Off_1;
        v_294 = s_St_Off_2;
        v_295 = s_St_Off_3;
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
      v_302 = v_293;
      v_303 = v_294;
      v_304 = v_295;
      v_310 = v_308;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_309 = true;
        v_296 = true;
        v_297 = true;
        v_298 = true;
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
        v_309 = r_St_Rlevel1;
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
        v_296 = s_St_Rlevel1_1;
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
        v_297 = s_St_Rlevel1_2;
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
        v_298 = s_St_Rlevel1_3;
      };
      v_302 = v_296;
      v_303 = v_297;
      v_304 = v_298;
      v_310 = v_309;
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
    s_1 = v_302;
    s_2 = v_303;
    s_3 = v_304;
    r = v_310;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_305 = true;
      v_306 = true;
      v_307 = true;
      v_312 = true;
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
        v_311 = r_St_Rlevel3;
        v_299 = s_St_Rlevel3_1;
        v_300 = s_St_Rlevel3_2;
        v_301 = s_St_Rlevel3_3;
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
        v_311 = r_St_Rlevel4;
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
        v_299 = s_St_Rlevel4_1;
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
        v_300 = s_St_Rlevel4_2;
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
        v_301 = s_St_Rlevel4_3;
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
      v_305 = v_299;
      v_306 = v_300;
      v_307 = v_301;
      v_312 = v_311;
    };
    s_1 = v_305;
    s_2 = v_306;
    s_3 = v_307;
    r = v_312;
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
        v_265 = estado_St_Boot;
        nr_St_Boot = false;
        v_285 = nr_St_Boot;
        ns_St_Boot_1 = true;
        v_270 = ns_St_Boot_1;
        ns_St_Boot_2 = true;
        v_271 = ns_St_Boot_2;
        ns_St_Boot_3 = true;
        v_272 = ns_St_Boot_3;
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
        v_265 = estado_St_Off;
        v_285 = nr_St_Off;
        v_270 = ns_St_Off_1;
        v_271 = ns_St_Off_2;
        v_272 = ns_St_Off_3;
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
      v_267 = v_265;
      v_279 = v_270;
      v_280 = v_271;
      v_281 = v_272;
      v_287 = v_285;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_266 = 0;
        v_286 = true;
        v_273 = true;
        v_274 = true;
        v_275 = true;
      } else {
        estado_St_Rlevel1 = 2;
        v_266 = estado_St_Rlevel1;
        nr_St_Rlevel1 = false;
        v_286 = nr_St_Rlevel1;
        ns_St_Rlevel1_1 = true;
        v_273 = ns_St_Rlevel1_1;
        ns_St_Rlevel1_2 = false;
        v_274 = ns_St_Rlevel1_2;
        ns_St_Rlevel1_3 = false;
        v_275 = ns_St_Rlevel1_3;
      };
      v_267 = v_266;
      v_279 = v_273;
      v_280 = v_274;
      v_281 = v_275;
      v_287 = v_286;
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
    _out->estado = v_267;
    ns_1 = v_279;
    ns_2 = v_280;
    ns_3 = v_281;
    nr = v_287;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_269 = 0;
      v_282 = true;
      v_283 = true;
      v_284 = true;
      v_289 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        estado_St_Rlevel3 = 3;
        nr_St_Rlevel3 = false;
        ns_St_Rlevel3_1 = false;
        ns_St_Rlevel3_2 = false;
        ns_St_Rlevel3_3 = true;
        v_268 = estado_St_Rlevel3;
        v_288 = nr_St_Rlevel3;
        v_276 = ns_St_Rlevel3_1;
        v_277 = ns_St_Rlevel3_2;
        v_278 = ns_St_Rlevel3_3;
      } else {
        estado_St_Rlevel4 = 4;
        v_268 = estado_St_Rlevel4;
        nr_St_Rlevel4 = false;
        v_288 = nr_St_Rlevel4;
        ns_St_Rlevel4_1 = false;
        v_276 = ns_St_Rlevel4_1;
        ns_St_Rlevel4_2 = false;
        v_277 = ns_St_Rlevel4_2;
        ns_St_Rlevel4_3 = false;
        v_278 = ns_St_Rlevel4_3;
      };
      v_269 = v_268;
      v_282 = v_276;
      v_283 = v_277;
      v_284 = v_278;
      v_289 = v_288;
    };
    _out->estado = v_269;
    ns_1 = v_282;
    ns_2 = v_283;
    ns_3 = v_284;
    nr = v_289;
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
  self->v_290 = ns_1;
  self->v_291 = ns_2;
  self->v_292 = ns_3;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_355 = false;
  self->v_356 = true;
  self->v_357 = true;
}

void Ups_controlador__bateria_step(int ac, int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int v_64_2_0;
  int v_64_3_0_0;
  int v_64_3_0_1;
  int v_64_2_1;
  int v_64_3_1_0;
  int v_64_3_1_1;
  int v_62_2_0;
  int v_62_3_0_0;
  int v_62_3_0_1;
  int v_62_2_1;
  int v_62_3_1_0;
  int v_62_3_1_1;
  int v_69;
  int v_68_3;
  int v_68_2;
  int v_68_1;
  int v_67;
  int v_66_3;
  int v_66_2;
  int v_66_1;
  int v_65;
  int v_64_3;
  int v_64_2;
  int v_64_1;
  int v_63;
  int v_62_3;
  int v_62_2;
  int v_62_1;
  int v_60_2_0;
  int v_60_3_0_0;
  int v_60_3_0_1;
  int v_60_2_1;
  int v_60_3_1_0;
  int v_60_3_1_1;
  int v_58_2_0;
  int v_58_3_0_0;
  int v_58_3_0_1;
  int v_58_2_1;
  int v_58_3_1_0;
  int v_58_3_1_1;
  int v_61;
  int v_60_3;
  int v_60_2;
  int v_60_1;
  int v_59;
  int v_58_3;
  int v_58_2;
  int v_58_1;
  int v_57;
  int v_56;
  int v_54_2_0;
  int v_54_3_0_0;
  int v_54_3_0_1;
  int v_54_2_1;
  int v_54_3_1_0;
  int v_54_3_1_1;
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
  int v_55;
  int v_54_3;
  int v_54_2;
  int v_54_1;
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
  int v_45_2_0;
  int v_45_3_0_0;
  int v_45_3_0_1;
  int v_45_2_1;
  int v_45_3_1_0;
  int v_45_3_1_1;
  int v_43_2_0;
  int v_43_3_0_0;
  int v_43_3_0_1;
  int v_43_2_1;
  int v_43_3_1_0;
  int v_43_3_1_1;
  int v_48;
  int v_47_3;
  int v_47_2;
  int v_47_1;
  int v_46;
  int v_45_3;
  int v_45_2;
  int v_45_1;
  int v_44;
  int v_43_3;
  int v_43_2;
  int v_43_1;
  int v_42;
  int v_40_2_0;
  int v_40_3_0_0;
  int v_40_3_0_1;
  int v_40_2_1;
  int v_40_3_1_0;
  int v_40_3_1_1;
  int v_38_2_0;
  int v_38_3_0_0;
  int v_38_3_0_1;
  int v_38_2_1;
  int v_38_3_1_0;
  int v_38_3_1_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_39;
  int v_38_3;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_32_2_0;
  int v_32_3_0_0;
  int v_32_3_0_1;
  int v_32_2_1;
  int v_32_3_1_0;
  int v_32_3_1_1;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_32_3;
  int v_32_2;
  int v_32_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
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
  v_87 = !(cp);
  v_88 = (v_87&&l1);
  v_89 = (v_88&&l2);
  a = (v_89&&v);
  v_70 = !(a);
  v_85 = (cp&&l1);
  v_86 = (v_85&&l2);
  b = (v_86&&v);
  v_71 = !(b);
  v_72 = (v_70&&v_71);
  v_82 = !(l1);
  v_81 = !(cp);
  v_83 = (v_81&&v_82);
  v_84 = (v_83&&l2);
  c = (v_84&&v);
  v_73 = !(c);
  v_74 = (v_72&&v_73);
  v_79 = !(l2);
  v_77 = !(l1);
  v_76 = !(cp);
  v_78 = (v_76&&v_77);
  v_80 = (v_78&&v_79);
  d = (v_80&&v);
  v_75 = !(d);
  e = (v_74&&v_75);
  ck_1 = self->v_355;
  ck_2_4 = self->v_356;
  ck_3 = self->v_357;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_36 = (e||a);
        v_37 = (v_36||b);
        if (v_37) {
          v_39 = true;
        } else {
          v_39 = self->pnr;
        };
        if (c) {
          v_41 = true;
        } else {
          v_41 = v_39;
        };
        if (ac) {
          r_St_1_Baixo = true;
        } else {
          r_St_1_Baixo = v_41;
        };
        if (v_37) {
          v_38_1 = false;
        } else {
          v_38_1 = true;
        };
        if (c) {
          v_40_1 = false;
        } else {
          v_40_1 = v_38_1;
        };
        if (ac) {
          s_St_1_Baixo_1 = true;
        } else {
          s_St_1_Baixo_1 = v_40_1;
        };
        if (v_37) {
          v_38_2 = true;
        } else {
          v_38_2 = true;
        };
        if (c) {
          v_40_2 = false;
        } else {
          v_40_2 = v_38_2;
        };
        if (ac) {
          s_St_1_Baixo_2 = true;
        } else {
          s_St_1_Baixo_2 = v_40_2;
        };
        if (v_37) {
          v_38_3 = true;
        } else {
          v_38_3 = true;
        };
        if (c) {
          v_40_3 = false;
        } else {
          v_40_3 = v_38_3;
        };
        if (ac) {
          s_St_1_Baixo_3 = false;
        } else {
          s_St_1_Baixo_3 = v_40_3;
        };
        v_376 = r_St_1_Baixo;
        v_358 = s_St_1_Baixo_1;
        v_359 = s_St_1_Baixo_2;
        v_360 = s_St_1_Baixo_3;
      } else {
        v_28 = !(ac);
        v_29 = (v_28&&d);
        if (v_29) {
          v_31 = true;
          v_30_1 = true;
          v_30_2 = true;
          v_30_3 = true;
        } else {
          v_31 = self->pnr;
          v_30_1 = true;
          v_30_2 = true;
          v_30_3 = false;
        };
        v_26 = !(ac);
        v_27 = (v_26&&c);
        if (v_27) {
          v_33 = true;
          v_32_1 = false;
          v_32_2 = false;
          v_32_3 = false;
        } else {
          v_33 = v_31;
          v_32_1 = v_30_1;
          v_32_2 = v_30_2;
          v_32_3 = v_30_3;
        };
        v_24 = !(ac);
        v_25 = (v_24&&a);
        if (v_25) {
          v_35 = true;
          v_34_1 = false;
          v_34_2 = true;
          v_34_3 = false;
        } else {
          v_35 = v_33;
          v_34_1 = v_32_1;
          v_34_2 = v_32_2;
          v_34_3 = v_32_3;
        };
        v_22 = !(ac);
        v_23 = (v_22&&b);
        if (v_23) {
          r_St_1_Carregando = true;
        } else {
          r_St_1_Carregando = v_35;
        };
        v_376 = r_St_1_Carregando;
        if (v_23) {
          s_St_1_Carregando_1 = true;
        } else {
          s_St_1_Carregando_1 = v_34_1;
        };
        v_358 = s_St_1_Carregando_1;
        if (v_23) {
          s_St_1_Carregando_2 = false;
        } else {
          s_St_1_Carregando_2 = v_34_2;
        };
        v_359 = s_St_1_Carregando_2;
        if (v_23) {
          s_St_1_Carregando_3 = false;
        } else {
          s_St_1_Carregando_3 = v_34_3;
        };
        v_360 = s_St_1_Carregando_3;
      };
      v_370 = v_358;
      v_371 = v_359;
      v_372 = v_360;
      v_378 = v_376;
      if (ck_3_1_1) {
        if (v_38_1) {
          v_38_2_1 = v_38_2;
          if (v_38_2_1) {
            v_38_3_1_1 = v_38_3;
          } else {
            v_38_3_1_0 = v_38_3;
          };
        } else {
          v_38_2_0 = v_38_2;
          if (v_38_2_0) {
            v_38_3_0_1 = v_38_3;
          } else {
            v_38_3_0_0 = v_38_3;
          };
        };
        if (v_40_1) {
          v_40_2_1 = v_40_2;
          if (v_40_2_1) {
            v_40_3_1_1 = v_40_3;
          } else {
            v_40_3_1_0 = v_40_3;
          };
        } else {
          v_40_2_0 = v_40_2;
          if (v_40_2_0) {
            v_40_3_0_1 = v_40_3;
          } else {
            v_40_3_0_0 = v_40_3;
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
        if (v_30_1) {
          v_30_2_1 = v_30_2;
          if (v_30_2_1) {
            v_30_3_1_1 = v_30_3;
          } else {
            v_30_3_1_0 = v_30_3;
          };
        } else {
          v_30_2_0 = v_30_2;
          if (v_30_2_0) {
            v_30_3_0_1 = v_30_3;
          } else {
            v_30_3_0_0 = v_30_3;
          };
        };
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
        if (v_34_1) {
          v_34_2_1 = v_34_2;
          if (v_34_2_1) {
            v_34_3_1_1 = v_34_3;
          } else {
            v_34_3_1_0 = v_34_3;
          };
        } else {
          v_34_2_0 = v_34_2;
          if (v_34_2_0) {
            v_34_3_0_1 = v_34_3;
          } else {
            v_34_3_0_0 = v_34_3;
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
        v_377 = true;
        v_361 = true;
        v_362 = true;
        v_363 = true;
      } else {
        v_56 = (e||c);
        v_57 = (v_56||d);
        if (v_57) {
          v_59 = true;
        } else {
          v_59 = self->pnr;
        };
        if (a) {
          v_61 = true;
        } else {
          v_61 = v_59;
        };
        if (ac) {
          r_St_1_Cheio = true;
        } else {
          r_St_1_Cheio = v_61;
        };
        v_377 = r_St_1_Cheio;
        if (v_57) {
          v_58_1 = false;
        } else {
          v_58_1 = true;
        };
        if (a) {
          v_60_1 = false;
        } else {
          v_60_1 = v_58_1;
        };
        if (ac) {
          s_St_1_Cheio_1 = true;
        } else {
          s_St_1_Cheio_1 = v_60_1;
        };
        v_361 = s_St_1_Cheio_1;
        if (v_57) {
          v_58_2 = true;
        } else {
          v_58_2 = false;
        };
        if (a) {
          v_60_2 = true;
        } else {
          v_60_2 = v_58_2;
        };
        if (ac) {
          s_St_1_Cheio_2 = true;
        } else {
          s_St_1_Cheio_2 = v_60_2;
        };
        v_362 = s_St_1_Cheio_2;
        if (v_57) {
          v_58_3 = true;
        } else {
          v_58_3 = false;
        };
        if (a) {
          v_60_3 = false;
        } else {
          v_60_3 = v_58_3;
        };
        if (ac) {
          s_St_1_Cheio_3 = false;
        } else {
          s_St_1_Cheio_3 = v_60_3;
        };
        v_363 = s_St_1_Cheio_3;
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
      v_370 = v_361;
      v_371 = v_362;
      v_372 = v_363;
      v_378 = v_377;
    };
    s_1 = v_370;
    s_2 = v_371;
    s_3 = v_372;
    r = v_378;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (d) {
          v_63 = true;
        } else {
          v_63 = self->pnr;
        };
        if (c) {
          v_65 = true;
        } else {
          v_65 = v_63;
        };
        if (a) {
          v_67 = true;
        } else {
          v_67 = v_65;
        };
        if (b) {
          v_69 = true;
        } else {
          v_69 = v_67;
        };
        if (ac) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_69;
        };
        if (d) {
          v_62_1 = true;
        } else {
          v_62_1 = false;
        };
        if (c) {
          v_64_1 = false;
        } else {
          v_64_1 = v_62_1;
        };
        if (a) {
          v_66_1 = false;
        } else {
          v_66_1 = v_64_1;
        };
        if (b) {
          v_68_1 = true;
        } else {
          v_68_1 = v_66_1;
        };
        if (ac) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_68_1;
        };
        if (d) {
          v_62_2 = true;
        } else {
          v_62_2 = true;
        };
        if (c) {
          v_64_2 = false;
        } else {
          v_64_2 = v_62_2;
        };
        if (a) {
          v_66_2 = true;
        } else {
          v_66_2 = v_64_2;
        };
        if (b) {
          v_68_2 = false;
        } else {
          v_68_2 = v_66_2;
        };
        if (ac) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_68_2;
        };
        if (d) {
          v_62_3 = true;
        } else {
          v_62_3 = true;
        };
        if (c) {
          v_64_3 = false;
        } else {
          v_64_3 = v_62_3;
        };
        if (a) {
          v_66_3 = false;
        } else {
          v_66_3 = v_64_3;
        };
        if (b) {
          v_68_3 = false;
        } else {
          v_68_3 = v_66_3;
        };
        if (ac) {
          s_St_1_Erro_3 = false;
        } else {
          s_St_1_Erro_3 = v_68_3;
        };
        v_379 = r_St_1_Erro;
        v_364 = s_St_1_Erro_1;
        v_365 = s_St_1_Erro_2;
        v_366 = s_St_1_Erro_3;
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
        v_49 = (e||d);
        if (v_49) {
          v_51 = true;
        } else {
          v_51 = self->pnr;
        };
        if (c) {
          v_53 = true;
        } else {
          v_53 = v_51;
        };
        if (b) {
          v_55 = true;
        } else {
          v_55 = v_53;
        };
        if (ac) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_55;
        };
        v_379 = r_St_1_Limiar1;
        if (v_49) {
          v_50_1 = false;
        } else {
          v_50_1 = false;
        };
        if (c) {
          v_52_1 = false;
        } else {
          v_52_1 = v_50_1;
        };
        if (b) {
          v_54_1 = true;
        } else {
          v_54_1 = v_52_1;
        };
        if (ac) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_54_1;
        };
        v_364 = s_St_1_Limiar1_1;
        if (v_49) {
          v_50_2 = true;
        } else {
          v_50_2 = true;
        };
        if (c) {
          v_52_2 = false;
        } else {
          v_52_2 = v_50_2;
        };
        if (b) {
          v_54_2 = false;
        } else {
          v_54_2 = v_52_2;
        };
        if (ac) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_54_2;
        };
        v_365 = s_St_1_Limiar1_2;
        if (v_49) {
          v_50_3 = true;
        } else {
          v_50_3 = false;
        };
        if (c) {
          v_52_3 = false;
        } else {
          v_52_3 = v_50_3;
        };
        if (b) {
          v_54_3 = false;
        } else {
          v_54_3 = v_52_3;
        };
        if (ac) {
          s_St_1_Limiar1_3 = false;
        } else {
          s_St_1_Limiar1_3 = v_54_3;
        };
        v_366 = s_St_1_Limiar1_3;
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
      v_373 = v_364;
      v_374 = v_365;
      v_375 = v_366;
      v_381 = v_379;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_380 = true;
        v_367 = true;
        v_368 = true;
        v_369 = true;
      } else {
        v_42 = (e||b);
        if (v_42) {
          v_44 = true;
        } else {
          v_44 = self->pnr;
        };
        if (d) {
          v_46 = true;
        } else {
          v_46 = v_44;
        };
        if (a) {
          v_48 = true;
        } else {
          v_48 = v_46;
        };
        if (ac) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_48;
        };
        v_380 = r_St_1_Limiar2;
        if (v_42) {
          v_43_1 = false;
        } else {
          v_43_1 = false;
        };
        if (d) {
          v_45_1 = true;
        } else {
          v_45_1 = v_43_1;
        };
        if (a) {
          v_47_1 = false;
        } else {
          v_47_1 = v_45_1;
        };
        if (ac) {
          s_St_1_Limiar2_1 = true;
        } else {
          s_St_1_Limiar2_1 = v_47_1;
        };
        v_367 = s_St_1_Limiar2_1;
        if (v_42) {
          v_43_2 = true;
        } else {
          v_43_2 = false;
        };
        if (d) {
          v_45_2 = true;
        } else {
          v_45_2 = v_43_2;
        };
        if (a) {
          v_47_2 = true;
        } else {
          v_47_2 = v_45_2;
        };
        if (ac) {
          s_St_1_Limiar2_2 = true;
        } else {
          s_St_1_Limiar2_2 = v_47_2;
        };
        v_368 = s_St_1_Limiar2_2;
        if (v_42) {
          v_43_3 = true;
        } else {
          v_43_3 = false;
        };
        if (d) {
          v_45_3 = true;
        } else {
          v_45_3 = v_43_3;
        };
        if (a) {
          v_47_3 = false;
        } else {
          v_47_3 = v_45_3;
        };
        if (ac) {
          s_St_1_Limiar2_3 = false;
        } else {
          s_St_1_Limiar2_3 = v_47_3;
        };
        v_369 = s_St_1_Limiar2_3;
      };
      v_373 = v_367;
      v_374 = v_368;
      v_375 = v_369;
      v_381 = v_380;
    };
    s_1 = v_373;
    s_2 = v_374;
    s_3 = v_375;
    r = v_381;
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
        v_313 = estado_bat_St_1_Baixo_1;
        v_314 = estado_bat_St_1_Baixo_2;
        v_315 = estado_bat_St_1_Baixo_3;
        v_349 = nr_St_1_Baixo;
        v_331 = ns_St_1_Baixo_1;
        v_332 = ns_St_1_Baixo_2;
        v_333 = ns_St_1_Baixo_3;
      } else {
        estado_bat_St_1_Carregando_1 = true;
        v_313 = estado_bat_St_1_Carregando_1;
        estado_bat_St_1_Carregando_2 = true;
        v_314 = estado_bat_St_1_Carregando_2;
        estado_bat_St_1_Carregando_3 = true;
        v_315 = estado_bat_St_1_Carregando_3;
        nr_St_1_Carregando = false;
        v_349 = nr_St_1_Carregando;
        ns_St_1_Carregando_1 = true;
        v_331 = ns_St_1_Carregando_1;
        ns_St_1_Carregando_2 = true;
        v_332 = ns_St_1_Carregando_2;
        ns_St_1_Carregando_3 = false;
        v_333 = ns_St_1_Carregando_3;
      };
      v_325 = v_313;
      v_326 = v_314;
      v_327 = v_315;
      v_343 = v_331;
      v_344 = v_332;
      v_345 = v_333;
      v_351 = v_349;
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
        v_316 = true;
        v_317 = true;
        v_318 = true;
        v_350 = true;
        v_334 = true;
        v_335 = true;
        v_336 = true;
      } else {
        estado_bat_St_1_Cheio_1 = false;
        v_316 = estado_bat_St_1_Cheio_1;
        estado_bat_St_1_Cheio_2 = true;
        v_317 = estado_bat_St_1_Cheio_2;
        estado_bat_St_1_Cheio_3 = false;
        v_318 = estado_bat_St_1_Cheio_3;
        nr_St_1_Cheio = false;
        v_350 = nr_St_1_Cheio;
        ns_St_1_Cheio_1 = true;
        v_334 = ns_St_1_Cheio_1;
        ns_St_1_Cheio_2 = false;
        v_335 = ns_St_1_Cheio_2;
        ns_St_1_Cheio_3 = false;
        v_336 = ns_St_1_Cheio_3;
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
      v_325 = v_316;
      v_326 = v_317;
      v_327 = v_318;
      v_343 = v_334;
      v_344 = v_335;
      v_345 = v_336;
      v_351 = v_350;
    };
    _out->estado_bat_1 = v_325;
    _out->estado_bat_2 = v_326;
    _out->estado_bat_3 = v_327;
    ns_1 = v_343;
    ns_2 = v_344;
    ns_3 = v_345;
    nr = v_351;
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
        v_319 = estado_bat_St_1_Erro_1;
        v_320 = estado_bat_St_1_Erro_2;
        v_321 = estado_bat_St_1_Erro_3;
        v_352 = nr_St_1_Erro;
        v_337 = ns_St_1_Erro_1;
        v_338 = ns_St_1_Erro_2;
        v_339 = ns_St_1_Erro_3;
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
        v_319 = estado_bat_St_1_Limiar1_1;
        estado_bat_St_1_Limiar1_2 = true;
        v_320 = estado_bat_St_1_Limiar1_2;
        estado_bat_St_1_Limiar1_3 = true;
        v_321 = estado_bat_St_1_Limiar1_3;
        nr_St_1_Limiar1 = false;
        v_352 = nr_St_1_Limiar1;
        ns_St_1_Limiar1_1 = false;
        v_337 = ns_St_1_Limiar1_1;
        ns_St_1_Limiar1_2 = true;
        v_338 = ns_St_1_Limiar1_2;
        ns_St_1_Limiar1_3 = false;
        v_339 = ns_St_1_Limiar1_3;
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
      v_328 = v_319;
      v_329 = v_320;
      v_330 = v_321;
      v_346 = v_337;
      v_347 = v_338;
      v_348 = v_339;
      v_354 = v_352;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_322 = true;
        v_323 = true;
        v_324 = true;
        v_353 = true;
        v_340 = true;
        v_341 = true;
        v_342 = true;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_322 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = false;
        v_323 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_324 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_353 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_340 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_341 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_342 = ns_St_1_Limiar2_3;
      };
      v_328 = v_322;
      v_329 = v_323;
      v_330 = v_324;
      v_346 = v_340;
      v_347 = v_341;
      v_348 = v_342;
      v_354 = v_353;
    };
    _out->estado_bat_1 = v_328;
    _out->estado_bat_2 = v_329;
    _out->estado_bat_3 = v_330;
    ns_1 = v_346;
    ns_2 = v_347;
    ns_3 = v_348;
    nr = v_354;
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
        if (v_43_1) {
          v_43_2_1 = v_43_2;
          if (v_43_2_1) {
            v_43_3_1_1 = v_43_3;
          } else {
            v_43_3_1_0 = v_43_3;
          };
        } else {
          v_43_2_0 = v_43_2;
          if (v_43_2_0) {
            v_43_3_0_1 = v_43_3;
          } else {
            v_43_3_0_0 = v_43_3;
          };
        };
        if (v_45_1) {
          v_45_2_1 = v_45_2;
          if (v_45_2_1) {
            v_45_3_1_1 = v_45_3;
          } else {
            v_45_3_1_0 = v_45_3;
          };
        } else {
          v_45_2_0 = v_45_2;
          if (v_45_2_0) {
            v_45_3_0_1 = v_45_3;
          } else {
            v_45_3_0_0 = v_45_3;
          };
        };
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
  self->v_355 = ns_1;
  self->v_356 = ns_2;
  self->v_357 = ns_3;;
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
  self->v_412 = true;
  self->v_413 = true;
  self->v_414 = false;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int v_98_2_0;
  int v_98_3_0_0;
  int v_98_3_0_1;
  int v_98_2_1;
  int v_98_3_1_0;
  int v_98_3_1_1;
  int v_99;
  int v_98_3;
  int v_98_2;
  int v_98_1;
  int v_96_2_0;
  int v_96_3_0_0;
  int v_96_3_0_1;
  int v_96_2_1;
  int v_96_3_1_0;
  int v_96_3_1_1;
  int v_94_2_0;
  int v_94_3_0_0;
  int v_94_3_0_1;
  int v_94_2_1;
  int v_94_3_1_0;
  int v_94_3_1_1;
  int v_97;
  int v_96_3;
  int v_96_2;
  int v_96_1;
  int v_95;
  int v_94_3;
  int v_94_2;
  int v_94_1;
  int v_93;
  int v_91_2_0;
  int v_91_3_0_0;
  int v_91_3_0_1;
  int v_91_2_1;
  int v_91_3_1_0;
  int v_91_3_1_1;
  int v_92;
  int v_91_3;
  int v_91_2;
  int v_91_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_90;
  int v_3;
  int v_2;
  int v_1;
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
  ck_1 = self->v_412;
  ck_2 = self->v_413;
  ck_3 = self->v_414;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (t) {
          v_99 = true;
        } else {
          v_99 = self->pnr;
        };
        if (c) {
          r_St_4_Boot = true;
        } else {
          r_St_4_Boot = v_99;
        };
        v_430 = r_St_4_Boot;
        if (t) {
          v_98_1 = false;
        } else {
          v_98_1 = true;
        };
        if (c) {
          s_St_4_Boot_1 = true;
        } else {
          s_St_4_Boot_1 = v_98_1;
        };
        v_415 = s_St_4_Boot_1;
        if (t) {
          v_98_2 = false;
        } else {
          v_98_2 = true;
        };
        if (c) {
          s_St_4_Boot_2 = true;
        } else {
          s_St_4_Boot_2 = v_98_2;
        };
        v_416 = s_St_4_Boot_2;
        if (t) {
          v_98_3 = false;
        } else {
          v_98_3 = true;
        };
        if (c) {
          s_St_4_Boot_3 = false;
        } else {
          s_St_4_Boot_3 = v_98_3;
        };
        v_417 = s_St_4_Boot_3;
        if (v_98_1) {
          v_98_2_1 = v_98_2;
          if (v_98_2_1) {
            v_98_3_1_1 = v_98_3;
          } else {
            v_98_3_1_0 = v_98_3;
          };
        } else {
          v_98_2_0 = v_98_2;
          if (v_98_2_0) {
            v_98_3_0_1 = v_98_3;
          } else {
            v_98_3_0_0 = v_98_3;
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
        v_430 = r_St_4_Off;
        v_415 = s_St_4_Off_1;
        v_416 = s_St_4_Off_2;
        v_417 = s_St_4_Off_3;
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
      v_424 = v_415;
      v_425 = v_416;
      v_426 = v_417;
      v_432 = v_430;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_431 = true;
        v_418 = true;
        v_419 = true;
        v_420 = true;
      } else {
        if (t) {
          v_92 = true;
        } else {
          v_92 = self->pnr;
        };
        if (c) {
          r_St_4_Online = true;
        } else {
          r_St_4_Online = v_92;
        };
        v_431 = r_St_4_Online;
        if (t) {
          v_91_1 = false;
        } else {
          v_91_1 = true;
        };
        if (c) {
          s_St_4_Online_1 = true;
        } else {
          s_St_4_Online_1 = v_91_1;
        };
        v_418 = s_St_4_Online_1;
        if (t) {
          v_91_2 = false;
        } else {
          v_91_2 = false;
        };
        if (c) {
          s_St_4_Online_2 = true;
        } else {
          s_St_4_Online_2 = v_91_2;
        };
        v_419 = s_St_4_Online_2;
        if (t) {
          v_91_3 = false;
        } else {
          v_91_3 = false;
        };
        if (c) {
          s_St_4_Online_3 = false;
        } else {
          s_St_4_Online_3 = v_91_3;
        };
        v_420 = s_St_4_Online_3;
      };
      v_424 = v_418;
      v_425 = v_419;
      v_426 = v_420;
      v_432 = v_431;
      if (!(ck_3_1_0)) {
        if (v_91_1) {
          v_91_2_1 = v_91_2;
          if (v_91_2_1) {
            v_91_3_1_1 = v_91_3;
          } else {
            v_91_3_1_0 = v_91_3;
          };
        } else {
          v_91_2_0 = v_91_2;
          if (v_91_2_0) {
            v_91_3_0_1 = v_91_3;
          } else {
            v_91_3_0_0 = v_91_3;
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
    s_1 = v_424;
    s_2 = v_425;
    s_3 = v_426;
    r = v_432;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_427 = true;
      v_428 = true;
      v_429 = true;
      v_434 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (t) {
          v_90 = true;
        } else {
          v_90 = self->pnr;
        };
        if (c) {
          r_St_4_Sleep = true;
        } else {
          r_St_4_Sleep = v_90;
        };
        v_433 = r_St_4_Sleep;
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
        v_421 = s_St_4_Sleep_1;
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
        v_422 = s_St_4_Sleep_2;
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
        v_423 = s_St_4_Sleep_3;
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
          v_95 = true;
          v_94_1 = true;
          v_94_2 = false;
          v_94_3 = false;
        } else {
          v_95 = self->pnr;
          v_94_1 = false;
          v_94_2 = false;
          v_94_3 = false;
        };
        v_93 = !(o);
        if (v_93) {
          v_97 = true;
        } else {
          v_97 = v_95;
        };
        if (c) {
          r_St_4_Teste = true;
        } else {
          r_St_4_Teste = v_97;
        };
        if (v_93) {
          v_96_1 = false;
        } else {
          v_96_1 = v_94_1;
        };
        if (c) {
          s_St_4_Teste_1 = true;
        } else {
          s_St_4_Teste_1 = v_96_1;
        };
        if (v_93) {
          v_96_2 = false;
        } else {
          v_96_2 = v_94_2;
        };
        if (c) {
          s_St_4_Teste_2 = true;
        } else {
          s_St_4_Teste_2 = v_96_2;
        };
        if (v_93) {
          v_96_3 = true;
        } else {
          v_96_3 = v_94_3;
        };
        if (c) {
          s_St_4_Teste_3 = false;
        } else {
          s_St_4_Teste_3 = v_96_3;
        };
        v_433 = r_St_4_Teste;
        v_421 = s_St_4_Teste_1;
        v_422 = s_St_4_Teste_2;
        v_423 = s_St_4_Teste_3;
        if (v_94_1) {
          v_94_2_1 = v_94_2;
          if (v_94_2_1) {
            v_94_3_1_1 = v_94_3;
          } else {
            v_94_3_1_0 = v_94_3;
          };
        } else {
          v_94_2_0 = v_94_2;
          if (v_94_2_0) {
            v_94_3_0_1 = v_94_3;
          } else {
            v_94_3_0_0 = v_94_3;
          };
        };
        if (v_96_1) {
          v_96_2_1 = v_96_2;
          if (v_96_2_1) {
            v_96_3_1_1 = v_96_3;
          } else {
            v_96_3_1_0 = v_96_3;
          };
        } else {
          v_96_2_0 = v_96_2;
          if (v_96_2_0) {
            v_96_3_0_1 = v_96_3;
          } else {
            v_96_3_0_0 = v_96_3;
          };
        };
      };
      v_427 = v_421;
      v_428 = v_422;
      v_429 = v_423;
      v_434 = v_433;
    };
    s_1 = v_427;
    s_2 = v_428;
    s_3 = v_429;
    r = v_434;
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
        v_387 = estado_St_4_Boot;
        atuador_St_4_Boot = true;
        v_382 = atuador_St_4_Boot;
        nr_St_4_Boot = false;
        v_407 = nr_St_4_Boot;
        ns_St_4_Boot_1 = true;
        v_392 = ns_St_4_Boot_1;
        ns_St_4_Boot_2 = true;
        v_393 = ns_St_4_Boot_2;
        ns_St_4_Boot_3 = true;
        v_394 = ns_St_4_Boot_3;
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
        v_387 = estado_St_4_Off;
        v_382 = atuador_St_4_Off;
        v_407 = nr_St_4_Off;
        v_392 = ns_St_4_Off_1;
        v_393 = ns_St_4_Off_2;
        v_394 = ns_St_4_Off_3;
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
      v_384 = v_382;
      v_389 = v_387;
      v_401 = v_392;
      v_402 = v_393;
      v_403 = v_394;
      v_409 = v_407;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_388 = 0;
        v_383 = true;
        v_408 = true;
        v_395 = true;
        v_396 = true;
        v_397 = true;
      } else {
        estado_St_4_Online = 4;
        v_388 = estado_St_4_Online;
        atuador_St_4_Online = true;
        v_383 = atuador_St_4_Online;
        nr_St_4_Online = false;
        v_408 = nr_St_4_Online;
        ns_St_4_Online_1 = true;
        v_395 = ns_St_4_Online_1;
        ns_St_4_Online_2 = false;
        v_396 = ns_St_4_Online_2;
        ns_St_4_Online_3 = false;
        v_397 = ns_St_4_Online_3;
      };
      v_384 = v_383;
      v_389 = v_388;
      v_401 = v_395;
      v_402 = v_396;
      v_403 = v_397;
      v_409 = v_408;
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
    _out->atuador = v_384;
    _out->estado = v_389;
    ns_1 = v_401;
    ns_2 = v_402;
    ns_3 = v_403;
    nr = v_409;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_386 = true;
      v_391 = 0;
      v_404 = true;
      v_405 = true;
      v_406 = true;
      v_411 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        estado_St_4_Sleep = 1;
        v_390 = estado_St_4_Sleep;
        atuador_St_4_Sleep = false;
        v_385 = atuador_St_4_Sleep;
        nr_St_4_Sleep = false;
        v_410 = nr_St_4_Sleep;
        ns_St_4_Sleep_1 = false;
        v_398 = ns_St_4_Sleep_1;
        ns_St_4_Sleep_2 = false;
        v_399 = ns_St_4_Sleep_2;
        ns_St_4_Sleep_3 = true;
        v_400 = ns_St_4_Sleep_3;
      } else {
        estado_St_4_Teste = 3;
        atuador_St_4_Teste = true;
        nr_St_4_Teste = false;
        ns_St_4_Teste_1 = false;
        ns_St_4_Teste_2 = false;
        ns_St_4_Teste_3 = false;
        v_390 = estado_St_4_Teste;
        v_385 = atuador_St_4_Teste;
        v_410 = nr_St_4_Teste;
        v_398 = ns_St_4_Teste_1;
        v_399 = ns_St_4_Teste_2;
        v_400 = ns_St_4_Teste_3;
      };
      v_386 = v_385;
      v_391 = v_390;
      v_404 = v_398;
      v_405 = v_399;
      v_406 = v_400;
      v_411 = v_410;
    };
    _out->atuador = v_386;
    _out->estado = v_391;
    ns_1 = v_404;
    ns_2 = v_405;
    ns_3 = v_406;
    nr = v_411;
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
  self->v_412 = ns_1;
  self->v_413 = ns_2;
  self->v_414 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_477 = false;
  self->v_478 = true;
  self->v_479 = true;
  self->pnr_1 = false;
  self->ck_12_1 = true;
  self->pnr_2 = false;
  self->v_529 = true;
  self->v_530 = true;
  self->v_531 = false;
  self->pnr_3 = false;
  self->v_582 = true;
  self->v_583 = true;
  self->v_584 = false;
  self->pnr_4 = false;
  self->ck_6_1 = true;
}

void Ups_controlador__contrato_step(int ac, int cb, int l1b, int l2b, int vb,
                                    int td, int tm, int om, int ts, int swa,
                                    int swr1, int swr3, int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int v_237_2_0;
  int v_237_3_0_0;
  int v_237_3_0_1;
  int v_237_2_1;
  int v_237_3_1_0;
  int v_237_3_1_1;
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
  int v_238;
  int v_237_3;
  int v_237_2;
  int v_237_1;
  int v_235_2_0;
  int v_235_3_0_0;
  int v_235_3_0_1;
  int v_235_2_1;
  int v_235_3_1_0;
  int v_235_3_1_1;
  int v_233_2_0;
  int v_233_3_0_0;
  int v_233_3_0_1;
  int v_233_2_1;
  int v_233_3_1_0;
  int v_233_3_1_1;
  int v_236;
  int v_235_3;
  int v_235_2;
  int v_235_1;
  int v_234;
  int v_233_3;
  int v_233_2;
  int v_233_1;
  int v_232;
  int v_231;
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
  int v_225_2_0;
  int v_225_3_0_0;
  int v_225_3_0_1;
  int v_225_2_1;
  int v_225_3_1_0;
  int v_225_3_1_1;
  int v_230;
  int v_229_3;
  int v_229_2;
  int v_229_1;
  int v_228;
  int v_227_3;
  int v_227_2;
  int v_227_1;
  int v_226;
  int v_225_3;
  int v_225_2;
  int v_225_1;
  int v_224;
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
  int v_218_2_0;
  int v_218_3_0_0;
  int v_218_3_0_1;
  int v_218_2_1;
  int v_218_3_1_0;
  int v_218_3_1_1;
  int v_223;
  int v_222_3;
  int v_222_2;
  int v_222_1;
  int v_221;
  int v_220_3;
  int v_220_2;
  int v_220_1;
  int v_219;
  int v_218_3;
  int v_218_2;
  int v_218_1;
  int v_217;
  int v_215_2_0;
  int v_215_3_0_0;
  int v_215_3_0_1;
  int v_215_2_1;
  int v_215_3_1_0;
  int v_215_3_1_1;
  int v_213_2_0;
  int v_213_3_0_0;
  int v_213_3_0_1;
  int v_213_2_1;
  int v_213_3_1_0;
  int v_213_3_1_1;
  int v_216;
  int v_215_3;
  int v_215_2;
  int v_215_1;
  int v_214;
  int v_213_3;
  int v_213_2;
  int v_213_1;
  int v_212;
  int v_211;
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
  int v_205_2_0;
  int v_205_3_0_0;
  int v_205_3_0_1;
  int v_205_2_1;
  int v_205_3_1_0;
  int v_205_3_1_1;
  int v_210;
  int v_209_3;
  int v_209_2;
  int v_209_1;
  int v_208;
  int v_207_3;
  int v_207_2;
  int v_207_1;
  int v_206;
  int v_205_3;
  int v_205_2;
  int v_205_1;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
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
  int v_187_2_0;
  int v_187_3_0_0;
  int v_187_3_0_1;
  int v_187_2_1;
  int v_187_3_1_0;
  int v_187_3_1_1;
  int v_188;
  int v_187_3;
  int v_187_2;
  int v_187_1;
  int v_185_2_0;
  int v_185_3_0_0;
  int v_185_3_0_1;
  int v_185_2_1;
  int v_185_3_1_0;
  int v_185_3_1_1;
  int v_183_2_0;
  int v_183_3_0_0;
  int v_183_3_0_1;
  int v_183_2_1;
  int v_183_3_1_0;
  int v_183_3_1_1;
  int v_186;
  int v_185_3;
  int v_185_2;
  int v_185_1;
  int v_184;
  int v_183_3;
  int v_183_2;
  int v_183_1;
  int v_181_2_0;
  int v_181_3_0_0;
  int v_181_3_0_1;
  int v_181_2_1;
  int v_181_3_1_0;
  int v_181_3_1_1;
  int v_179_2_0;
  int v_179_3_0_0;
  int v_179_3_0_1;
  int v_179_2_1;
  int v_179_3_1_0;
  int v_179_3_1_1;
  int v_182;
  int v_181_3;
  int v_181_2;
  int v_181_1;
  int v_180;
  int v_179_3;
  int v_179_2;
  int v_179_1;
  int v_177_2_0;
  int v_177_3_0_0;
  int v_177_3_0_1;
  int v_177_2_1;
  int v_177_3_1_0;
  int v_177_3_1_1;
  int v_175_2_0;
  int v_175_3_0_0;
  int v_175_3_0_1;
  int v_175_2_1;
  int v_175_3_1_0;
  int v_175_3_1_1;
  int v_178;
  int v_177_3;
  int v_177_2;
  int v_177_1;
  int v_176;
  int v_175_3;
  int v_175_2;
  int v_175_1;
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
  int v_173_2_0;
  int v_173_3_0_0;
  int v_173_3_0_1;
  int v_173_2_1;
  int v_173_3_1_0;
  int v_173_3_1_1;
  int v_174;
  int v_173_3;
  int v_173_2;
  int v_173_1;
  int v_171_2_0;
  int v_171_3_0_0;
  int v_171_3_0_1;
  int v_171_2_1;
  int v_171_3_1_0;
  int v_171_3_1_1;
  int v_169_2_0;
  int v_169_3_0_0;
  int v_169_3_0_1;
  int v_169_2_1;
  int v_169_3_1_0;
  int v_169_3_1_1;
  int v_172;
  int v_171_3;
  int v_171_2;
  int v_171_1;
  int v_170;
  int v_169_3;
  int v_169_2;
  int v_169_1;
  int v_168;
  int v_166_2_0;
  int v_166_3_0_0;
  int v_166_3_0_1;
  int v_166_2_1;
  int v_166_3_1_0;
  int v_166_3_1_1;
  int v_167;
  int v_166_3;
  int v_166_2;
  int v_166_1;
  int v_164_2_0;
  int v_164_3_0_0;
  int v_164_3_0_1;
  int v_164_2_1;
  int v_164_3_1_0;
  int v_164_3_1_1;
  int v_165;
  int v_164_3;
  int v_164_2;
  int v_164_1;
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
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
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
  int v_100;
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
  v_262 = !(cp_1);
  v_256 = !(cp_1);
  v_251 = !(cp_1);
  l1 = l1b;
  v_263 = (v_262&&l1);
  v_260 = (cp_1&&l1);
  v_257 = !(l1);
  v_258 = (v_256&&v_257);
  v_252 = !(l1);
  v_253 = (v_251&&v_252);
  l2 = l2b;
  v_264 = (v_263&&l2);
  v_261 = (v_260&&l2);
  v_259 = (v_258&&l2);
  v_254 = !(l2);
  v_255 = (v_253&&v_254);
  v = vb;
  a_1 = (v_264&&v);
  v_245 = !(a_1);
  b = (v_261&&v);
  v_246 = !(b);
  v_247 = (v_245&&v_246);
  c_1 = (v_259&&v);
  v_248 = !(c_1);
  v_249 = (v_247&&v_248);
  d = (v_255&&v);
  v_250 = !(d);
  e = (v_249&&v_250);
  ck_14_1 = self->v_477;
  ck_14_2 = self->v_478;
  ck_14_3 = self->v_479;
  t_1 = td;
  ts_1 = ts;
  s_atx = swa;
  s1 = swr1;
  s3 = swr3;
  s4 = swr4;
  ck_10_1 = self->v_529;
  ck_10_2 = self->v_530;
  ck_10_3 = self->v_531;
  t = tm;
  o = om;
  ck_8_1 = self->v_582;
  ck_8_2 = self->v_583;
  ck_8_3 = self->v_584;
  Contrato_controller__contrato_controller_step(ac, cb, l1b, l2b, vb, td, tm,
                                                om, ts, swa, swr1, swr3,
                                                swr4, self->ck_6_1,
                                                self->pnr_4, self->v_584,
                                                self->v_583, self->v_582,
                                                self->pnr_3, self->v_531,
                                                self->v_530, self->v_529,
                                                self->pnr_2, self->ck_12_1,
                                                self->pnr_1, self->v_479,
                                                self->v_478, self->v_477,
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
  v_196 = !(c_atx);
  off_atx = co;
  cr1_1 = cr1;
  v_194 = !(cr1_1);
  cr3_1 = cr3;
  v_192 = !(cr3_1);
  cr4_1 = cr4;
  v_190 = !(cr4_1);
  ba_1 = ba;
  v_195 = (ba_1&&s_atx);
  a = (v_195||v_196);
  b1 = br1;
  v_193 = (b1&&s1);
  r1 = (v_193||v_194);
  b3 = br3;
  v_191 = (b3&&s3);
  r3 = (v_191||v_192);
  b4 = br4;
  v_189 = (b4&&s4);
  r4 = (v_189||v_190);
  c = cm;
  ca_1 = cp;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
      if (ck_14_3_1_1) {
        v_211 = (e||a_1);
        v_212 = (v_211||b);
        if (v_212) {
          v_214 = true;
        } else {
          v_214 = self->pnr;
        };
        if (c_1) {
          v_216 = true;
        } else {
          v_216 = v_214;
        };
        if (ac_1) {
          r_St_5_Baixo = true;
        } else {
          r_St_5_Baixo = v_216;
        };
        if (v_212) {
          v_213_1 = false;
        } else {
          v_213_1 = true;
        };
        if (c_1) {
          v_215_1 = false;
        } else {
          v_215_1 = v_213_1;
        };
        if (ac_1) {
          s_St_5_Baixo_1 = true;
        } else {
          s_St_5_Baixo_1 = v_215_1;
        };
        if (v_212) {
          v_213_2 = true;
        } else {
          v_213_2 = true;
        };
        if (c_1) {
          v_215_2 = false;
        } else {
          v_215_2 = v_213_2;
        };
        if (ac_1) {
          s_St_5_Baixo_2 = true;
        } else {
          s_St_5_Baixo_2 = v_215_2;
        };
        if (v_212) {
          v_213_3 = true;
        } else {
          v_213_3 = true;
        };
        if (c_1) {
          v_215_3 = false;
        } else {
          v_215_3 = v_213_3;
        };
        if (ac_1) {
          s_St_5_Baixo_3 = false;
        } else {
          s_St_5_Baixo_3 = v_215_3;
        };
        v_498 = r_St_5_Baixo;
        v_480 = s_St_5_Baixo_1;
        v_481 = s_St_5_Baixo_2;
        v_482 = s_St_5_Baixo_3;
      } else {
        v_203 = !(ac_1);
        v_204 = (v_203&&d);
        if (v_204) {
          v_206 = true;
          v_205_1 = true;
          v_205_2 = true;
          v_205_3 = true;
        } else {
          v_206 = self->pnr;
          v_205_1 = true;
          v_205_2 = true;
          v_205_3 = false;
        };
        v_201 = !(ac_1);
        v_202 = (v_201&&c_1);
        if (v_202) {
          v_208 = true;
          v_207_1 = false;
          v_207_2 = false;
          v_207_3 = false;
        } else {
          v_208 = v_206;
          v_207_1 = v_205_1;
          v_207_2 = v_205_2;
          v_207_3 = v_205_3;
        };
        v_199 = !(ac_1);
        v_200 = (v_199&&a_1);
        if (v_200) {
          v_210 = true;
          v_209_1 = false;
          v_209_2 = true;
          v_209_3 = false;
        } else {
          v_210 = v_208;
          v_209_1 = v_207_1;
          v_209_2 = v_207_2;
          v_209_3 = v_207_3;
        };
        v_197 = !(ac_1);
        v_198 = (v_197&&b);
        if (v_198) {
          r_St_5_Carregando = true;
        } else {
          r_St_5_Carregando = v_210;
        };
        v_498 = r_St_5_Carregando;
        if (v_198) {
          s_St_5_Carregando_1 = true;
        } else {
          s_St_5_Carregando_1 = v_209_1;
        };
        v_480 = s_St_5_Carregando_1;
        if (v_198) {
          s_St_5_Carregando_2 = false;
        } else {
          s_St_5_Carregando_2 = v_209_2;
        };
        v_481 = s_St_5_Carregando_2;
        if (v_198) {
          s_St_5_Carregando_3 = false;
        } else {
          s_St_5_Carregando_3 = v_209_3;
        };
        v_482 = s_St_5_Carregando_3;
      };
      v_492 = v_480;
      v_493 = v_481;
      v_494 = v_482;
      v_500 = v_498;
      if (ck_14_3_1_1) {
        if (v_213_1) {
          v_213_2_1 = v_213_2;
          if (v_213_2_1) {
            v_213_3_1_1 = v_213_3;
          } else {
            v_213_3_1_0 = v_213_3;
          };
        } else {
          v_213_2_0 = v_213_2;
          if (v_213_2_0) {
            v_213_3_0_1 = v_213_3;
          } else {
            v_213_3_0_0 = v_213_3;
          };
        };
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
        if (v_205_1) {
          v_205_2_1 = v_205_2;
          if (v_205_2_1) {
            v_205_3_1_1 = v_205_3;
          } else {
            v_205_3_1_0 = v_205_3;
          };
        } else {
          v_205_2_0 = v_205_2;
          if (v_205_2_0) {
            v_205_3_0_1 = v_205_3;
          } else {
            v_205_3_0_0 = v_205_3;
          };
        };
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
        v_499 = true;
        v_483 = true;
        v_484 = true;
        v_485 = true;
      } else {
        v_231 = (e||c_1);
        v_232 = (v_231||d);
        if (v_232) {
          v_234 = true;
        } else {
          v_234 = self->pnr;
        };
        if (a_1) {
          v_236 = true;
        } else {
          v_236 = v_234;
        };
        if (ac_1) {
          r_St_5_Cheio = true;
        } else {
          r_St_5_Cheio = v_236;
        };
        v_499 = r_St_5_Cheio;
        if (v_232) {
          v_233_1 = false;
        } else {
          v_233_1 = true;
        };
        if (a_1) {
          v_235_1 = false;
        } else {
          v_235_1 = v_233_1;
        };
        if (ac_1) {
          s_St_5_Cheio_1 = true;
        } else {
          s_St_5_Cheio_1 = v_235_1;
        };
        v_483 = s_St_5_Cheio_1;
        if (v_232) {
          v_233_2 = true;
        } else {
          v_233_2 = false;
        };
        if (a_1) {
          v_235_2 = true;
        } else {
          v_235_2 = v_233_2;
        };
        if (ac_1) {
          s_St_5_Cheio_2 = true;
        } else {
          s_St_5_Cheio_2 = v_235_2;
        };
        v_484 = s_St_5_Cheio_2;
        if (v_232) {
          v_233_3 = true;
        } else {
          v_233_3 = false;
        };
        if (a_1) {
          v_235_3 = false;
        } else {
          v_235_3 = v_233_3;
        };
        if (ac_1) {
          s_St_5_Cheio_3 = false;
        } else {
          s_St_5_Cheio_3 = v_235_3;
        };
        v_485 = s_St_5_Cheio_3;
        if (v_233_1) {
          v_233_2_1 = v_233_2;
          if (v_233_2_1) {
            v_233_3_1_1 = v_233_3;
          } else {
            v_233_3_1_0 = v_233_3;
          };
        } else {
          v_233_2_0 = v_233_2;
          if (v_233_2_0) {
            v_233_3_0_1 = v_233_3;
          } else {
            v_233_3_0_0 = v_233_3;
          };
        };
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
      v_492 = v_483;
      v_493 = v_484;
      v_494 = v_485;
      v_500 = v_499;
    };
    s_1_2 = v_492;
    s_2_4 = v_493;
    s_3_4 = v_494;
    r = v_500;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
      if (ck_14_3_0_1) {
        if (d) {
          v_238 = true;
        } else {
          v_238 = self->pnr;
        };
        if (c_1) {
          v_240 = true;
        } else {
          v_240 = v_238;
        };
        if (a_1) {
          v_242 = true;
        } else {
          v_242 = v_240;
        };
        if (b) {
          v_244 = true;
        } else {
          v_244 = v_242;
        };
        if (ac_1) {
          r_St_5_Erro = true;
        } else {
          r_St_5_Erro = v_244;
        };
        if (d) {
          v_237_1 = true;
        } else {
          v_237_1 = false;
        };
        if (c_1) {
          v_239_1 = false;
        } else {
          v_239_1 = v_237_1;
        };
        if (a_1) {
          v_241_1 = false;
        } else {
          v_241_1 = v_239_1;
        };
        if (b) {
          v_243_1 = true;
        } else {
          v_243_1 = v_241_1;
        };
        if (ac_1) {
          s_St_5_Erro_1 = true;
        } else {
          s_St_5_Erro_1 = v_243_1;
        };
        if (d) {
          v_237_2 = true;
        } else {
          v_237_2 = true;
        };
        if (c_1) {
          v_239_2 = false;
        } else {
          v_239_2 = v_237_2;
        };
        if (a_1) {
          v_241_2 = true;
        } else {
          v_241_2 = v_239_2;
        };
        if (b) {
          v_243_2 = false;
        } else {
          v_243_2 = v_241_2;
        };
        if (ac_1) {
          s_St_5_Erro_2 = true;
        } else {
          s_St_5_Erro_2 = v_243_2;
        };
        if (d) {
          v_237_3 = true;
        } else {
          v_237_3 = true;
        };
        if (c_1) {
          v_239_3 = false;
        } else {
          v_239_3 = v_237_3;
        };
        if (a_1) {
          v_241_3 = false;
        } else {
          v_241_3 = v_239_3;
        };
        if (b) {
          v_243_3 = false;
        } else {
          v_243_3 = v_241_3;
        };
        if (ac_1) {
          s_St_5_Erro_3 = false;
        } else {
          s_St_5_Erro_3 = v_243_3;
        };
        v_501 = r_St_5_Erro;
        v_486 = s_St_5_Erro_1;
        v_487 = s_St_5_Erro_2;
        v_488 = s_St_5_Erro_3;
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
        v_224 = (e||d);
        if (v_224) {
          v_226 = true;
        } else {
          v_226 = self->pnr;
        };
        if (c_1) {
          v_228 = true;
        } else {
          v_228 = v_226;
        };
        if (b) {
          v_230 = true;
        } else {
          v_230 = v_228;
        };
        if (ac_1) {
          r_St_5_Limiar1 = true;
        } else {
          r_St_5_Limiar1 = v_230;
        };
        v_501 = r_St_5_Limiar1;
        if (v_224) {
          v_225_1 = false;
        } else {
          v_225_1 = false;
        };
        if (c_1) {
          v_227_1 = false;
        } else {
          v_227_1 = v_225_1;
        };
        if (b) {
          v_229_1 = true;
        } else {
          v_229_1 = v_227_1;
        };
        if (ac_1) {
          s_St_5_Limiar1_1 = true;
        } else {
          s_St_5_Limiar1_1 = v_229_1;
        };
        v_486 = s_St_5_Limiar1_1;
        if (v_224) {
          v_225_2 = true;
        } else {
          v_225_2 = true;
        };
        if (c_1) {
          v_227_2 = false;
        } else {
          v_227_2 = v_225_2;
        };
        if (b) {
          v_229_2 = false;
        } else {
          v_229_2 = v_227_2;
        };
        if (ac_1) {
          s_St_5_Limiar1_2 = true;
        } else {
          s_St_5_Limiar1_2 = v_229_2;
        };
        v_487 = s_St_5_Limiar1_2;
        if (v_224) {
          v_225_3 = true;
        } else {
          v_225_3 = false;
        };
        if (c_1) {
          v_227_3 = false;
        } else {
          v_227_3 = v_225_3;
        };
        if (b) {
          v_229_3 = false;
        } else {
          v_229_3 = v_227_3;
        };
        if (ac_1) {
          s_St_5_Limiar1_3 = false;
        } else {
          s_St_5_Limiar1_3 = v_229_3;
        };
        v_488 = s_St_5_Limiar1_3;
        if (v_225_1) {
          v_225_2_1 = v_225_2;
          if (v_225_2_1) {
            v_225_3_1_1 = v_225_3;
          } else {
            v_225_3_1_0 = v_225_3;
          };
        } else {
          v_225_2_0 = v_225_2;
          if (v_225_2_0) {
            v_225_3_0_1 = v_225_3;
          } else {
            v_225_3_0_0 = v_225_3;
          };
        };
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
      v_495 = v_486;
      v_496 = v_487;
      v_497 = v_488;
      v_503 = v_501;
    } else {
      ck_14_3_0_0 = ck_14_3;
      if (ck_14_3_0_0) {
        v_502 = true;
        v_489 = true;
        v_490 = true;
        v_491 = true;
      } else {
        v_217 = (e||b);
        if (v_217) {
          v_219 = true;
        } else {
          v_219 = self->pnr;
        };
        if (d) {
          v_221 = true;
        } else {
          v_221 = v_219;
        };
        if (a_1) {
          v_223 = true;
        } else {
          v_223 = v_221;
        };
        if (ac_1) {
          r_St_5_Limiar2 = true;
        } else {
          r_St_5_Limiar2 = v_223;
        };
        v_502 = r_St_5_Limiar2;
        if (v_217) {
          v_218_1 = false;
        } else {
          v_218_1 = false;
        };
        if (d) {
          v_220_1 = true;
        } else {
          v_220_1 = v_218_1;
        };
        if (a_1) {
          v_222_1 = false;
        } else {
          v_222_1 = v_220_1;
        };
        if (ac_1) {
          s_St_5_Limiar2_1 = true;
        } else {
          s_St_5_Limiar2_1 = v_222_1;
        };
        v_489 = s_St_5_Limiar2_1;
        if (v_217) {
          v_218_2 = true;
        } else {
          v_218_2 = false;
        };
        if (d) {
          v_220_2 = true;
        } else {
          v_220_2 = v_218_2;
        };
        if (a_1) {
          v_222_2 = true;
        } else {
          v_222_2 = v_220_2;
        };
        if (ac_1) {
          s_St_5_Limiar2_2 = true;
        } else {
          s_St_5_Limiar2_2 = v_222_2;
        };
        v_490 = s_St_5_Limiar2_2;
        if (v_217) {
          v_218_3 = true;
        } else {
          v_218_3 = false;
        };
        if (d) {
          v_220_3 = true;
        } else {
          v_220_3 = v_218_3;
        };
        if (a_1) {
          v_222_3 = false;
        } else {
          v_222_3 = v_220_3;
        };
        if (ac_1) {
          s_St_5_Limiar2_3 = false;
        } else {
          s_St_5_Limiar2_3 = v_222_3;
        };
        v_491 = s_St_5_Limiar2_3;
      };
      v_495 = v_489;
      v_496 = v_490;
      v_497 = v_491;
      v_503 = v_502;
    };
    s_1_2 = v_495;
    s_2_4 = v_496;
    s_3_4 = v_497;
    r = v_503;
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
        v_435 = estado_bat_St_5_Baixo_1;
        v_436 = estado_bat_St_5_Baixo_2;
        v_437 = estado_bat_St_5_Baixo_3;
        v_471 = nr_St_5_Baixo;
        v_453 = ns_St_5_Baixo_1;
        v_454 = ns_St_5_Baixo_2;
        v_455 = ns_St_5_Baixo_3;
      } else {
        estado_bat_St_5_Carregando_1 = true;
        v_435 = estado_bat_St_5_Carregando_1;
        estado_bat_St_5_Carregando_2 = true;
        v_436 = estado_bat_St_5_Carregando_2;
        estado_bat_St_5_Carregando_3 = true;
        v_437 = estado_bat_St_5_Carregando_3;
        nr_St_5_Carregando = false;
        v_471 = nr_St_5_Carregando;
        ns_St_5_Carregando_1 = true;
        v_453 = ns_St_5_Carregando_1;
        ns_St_5_Carregando_2 = true;
        v_454 = ns_St_5_Carregando_2;
        ns_St_5_Carregando_3 = false;
        v_455 = ns_St_5_Carregando_3;
      };
      v_447 = v_435;
      v_448 = v_436;
      v_449 = v_437;
      v_465 = v_453;
      v_466 = v_454;
      v_467 = v_455;
      v_473 = v_471;
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
        v_438 = true;
        v_439 = true;
        v_440 = true;
        v_472 = true;
        v_456 = true;
        v_457 = true;
        v_458 = true;
      } else {
        estado_bat_St_5_Cheio_1 = false;
        v_438 = estado_bat_St_5_Cheio_1;
        estado_bat_St_5_Cheio_2 = true;
        v_439 = estado_bat_St_5_Cheio_2;
        estado_bat_St_5_Cheio_3 = false;
        v_440 = estado_bat_St_5_Cheio_3;
        nr_St_5_Cheio = false;
        v_472 = nr_St_5_Cheio;
        ns_St_5_Cheio_1 = true;
        v_456 = ns_St_5_Cheio_1;
        ns_St_5_Cheio_2 = false;
        v_457 = ns_St_5_Cheio_2;
        ns_St_5_Cheio_3 = false;
        v_458 = ns_St_5_Cheio_3;
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
      v_447 = v_438;
      v_448 = v_439;
      v_449 = v_440;
      v_465 = v_456;
      v_466 = v_457;
      v_467 = v_458;
      v_473 = v_472;
    };
    estado_bat_1 = v_447;
    estado_bat_2 = v_448;
    estado_bat_3 = v_449;
    ns_1_2 = v_465;
    ns_2_4 = v_466;
    ns_3_4 = v_467;
    nr = v_473;
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
        v_441 = estado_bat_St_5_Erro_1;
        v_442 = estado_bat_St_5_Erro_2;
        v_443 = estado_bat_St_5_Erro_3;
        v_474 = nr_St_5_Erro;
        v_459 = ns_St_5_Erro_1;
        v_460 = ns_St_5_Erro_2;
        v_461 = ns_St_5_Erro_3;
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
        v_441 = estado_bat_St_5_Limiar1_1;
        estado_bat_St_5_Limiar1_2 = true;
        v_442 = estado_bat_St_5_Limiar1_2;
        estado_bat_St_5_Limiar1_3 = true;
        v_443 = estado_bat_St_5_Limiar1_3;
        nr_St_5_Limiar1 = false;
        v_474 = nr_St_5_Limiar1;
        ns_St_5_Limiar1_1 = false;
        v_459 = ns_St_5_Limiar1_1;
        ns_St_5_Limiar1_2 = true;
        v_460 = ns_St_5_Limiar1_2;
        ns_St_5_Limiar1_3 = false;
        v_461 = ns_St_5_Limiar1_3;
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
      v_450 = v_441;
      v_451 = v_442;
      v_452 = v_443;
      v_468 = v_459;
      v_469 = v_460;
      v_470 = v_461;
      v_476 = v_474;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        v_444 = true;
        v_445 = true;
        v_446 = true;
        v_475 = true;
        v_462 = true;
        v_463 = true;
        v_464 = true;
      } else {
        estado_bat_St_5_Limiar2_1 = true;
        v_444 = estado_bat_St_5_Limiar2_1;
        estado_bat_St_5_Limiar2_2 = false;
        v_445 = estado_bat_St_5_Limiar2_2;
        estado_bat_St_5_Limiar2_3 = false;
        v_446 = estado_bat_St_5_Limiar2_3;
        nr_St_5_Limiar2 = false;
        v_475 = nr_St_5_Limiar2;
        ns_St_5_Limiar2_1 = false;
        v_462 = ns_St_5_Limiar2_1;
        ns_St_5_Limiar2_2 = false;
        v_463 = ns_St_5_Limiar2_2;
        ns_St_5_Limiar2_3 = false;
        v_464 = ns_St_5_Limiar2_3;
      };
      v_450 = v_444;
      v_451 = v_445;
      v_452 = v_446;
      v_468 = v_462;
      v_469 = v_463;
      v_470 = v_464;
      v_476 = v_475;
    };
    estado_bat_1 = v_450;
    estado_bat_2 = v_451;
    estado_bat_3 = v_452;
    ns_1_2 = v_468;
    ns_2_4 = v_469;
    ns_3_4 = v_470;
    nr = v_476;
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
        v_605 = erro_BCHR;
      } else {
        erro_B25 = false;
        v_605 = erro_B25;
      };
      v_607 = v_605;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_606 = true;
      } else {
        erro_B50 = false;
        v_606 = erro_B50;
      };
      v_607 = v_606;
    };
    _out->erro = v_607;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        erro_B75 = false;
        v_608 = erro_B75;
      } else {
        erro_B100 = false;
        v_608 = erro_B100;
      };
      v_610 = v_608;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_609 = true;
      } else {
        erro_BERR = true;
        v_609 = erro_BERR;
      };
      v_610 = v_609;
    };
    _out->erro = v_610;
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
        if (v_218_1) {
          v_218_2_1 = v_218_2;
          if (v_218_2_1) {
            v_218_3_1_1 = v_218_3;
          } else {
            v_218_3_1_0 = v_218_3;
          };
        } else {
          v_218_2_0 = v_218_2;
          if (v_218_2_0) {
            v_218_3_0_1 = v_218_3;
          } else {
            v_218_3_0_0 = v_218_3;
          };
        };
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
        v_144 = !(_out->dia);
      } else {
        v_133 = !(_out->dia);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_122 = !(_out->dia);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_110 = !(_out->dia);
      } else {
        v_101 = !(_out->dia);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_153 = !(_out->dia);
      };
    };
  };
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        if (ts_1) {
          v_188 = true;
        } else {
          v_188 = self->pnr_2;
        };
        if (off_atx) {
          r_2_St_7_Boot = true;
        } else {
          r_2_St_7_Boot = v_188;
        };
        v_547 = r_2_St_7_Boot;
        if (ts_1) {
          v_187_1 = true;
        } else {
          v_187_1 = true;
        };
        if (off_atx) {
          s_2_St_7_Boot_1 = true;
        } else {
          s_2_St_7_Boot_1 = v_187_1;
        };
        v_532 = s_2_St_7_Boot_1;
        if (ts_1) {
          v_187_2 = false;
        } else {
          v_187_2 = true;
        };
        if (off_atx) {
          s_2_St_7_Boot_2 = true;
        } else {
          s_2_St_7_Boot_2 = v_187_2;
        };
        v_533 = s_2_St_7_Boot_2;
        if (ts_1) {
          v_187_3 = false;
        } else {
          v_187_3 = true;
        };
        if (off_atx) {
          s_2_St_7_Boot_3 = false;
        } else {
          s_2_St_7_Boot_3 = v_187_3;
        };
        v_534 = s_2_St_7_Boot_3;
        if (v_187_1) {
          v_187_2_1 = v_187_2;
          if (v_187_2_1) {
            v_187_3_1_1 = v_187_3;
          } else {
            v_187_3_1_0 = v_187_3;
          };
        } else {
          v_187_2_0 = v_187_2;
          if (v_187_2_0) {
            v_187_3_0_1 = v_187_3;
          } else {
            v_187_3_0_0 = v_187_3;
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
        v_547 = r_2_St_7_Off;
        v_532 = s_2_St_7_Off_1;
        v_533 = s_2_St_7_Off_2;
        v_534 = s_2_St_7_Off_3;
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
      v_541 = v_532;
      v_542 = v_533;
      v_543 = v_534;
      v_549 = v_547;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_548 = true;
        v_535 = true;
        v_536 = true;
        v_537 = true;
      } else {
        if (r4) {
          v_184 = true;
        } else {
          v_184 = self->pnr_2;
        };
        if (r3) {
          v_186 = true;
        } else {
          v_186 = v_184;
        };
        if (a) {
          r_2_St_7_Rlevel1 = true;
        } else {
          r_2_St_7_Rlevel1 = v_186;
        };
        v_548 = r_2_St_7_Rlevel1;
        if (r4) {
          v_183_1 = false;
        } else {
          v_183_1 = true;
        };
        if (r3) {
          v_185_1 = false;
        } else {
          v_185_1 = v_183_1;
        };
        if (a) {
          s_2_St_7_Rlevel1_1 = true;
        } else {
          s_2_St_7_Rlevel1_1 = v_185_1;
        };
        v_535 = s_2_St_7_Rlevel1_1;
        if (r4) {
          v_183_2 = false;
        } else {
          v_183_2 = false;
        };
        if (r3) {
          v_185_2 = false;
        } else {
          v_185_2 = v_183_2;
        };
        if (a) {
          s_2_St_7_Rlevel1_2 = true;
        } else {
          s_2_St_7_Rlevel1_2 = v_185_2;
        };
        v_536 = s_2_St_7_Rlevel1_2;
        if (r4) {
          v_183_3 = false;
        } else {
          v_183_3 = false;
        };
        if (r3) {
          v_185_3 = true;
        } else {
          v_185_3 = v_183_3;
        };
        if (a) {
          s_2_St_7_Rlevel1_3 = false;
        } else {
          s_2_St_7_Rlevel1_3 = v_185_3;
        };
        v_537 = s_2_St_7_Rlevel1_3;
      };
      v_541 = v_535;
      v_542 = v_536;
      v_543 = v_537;
      v_549 = v_548;
      if (!(ck_10_3_1_0)) {
        if (v_183_1) {
          v_183_2_1 = v_183_2;
          if (v_183_2_1) {
            v_183_3_1_1 = v_183_3;
          } else {
            v_183_3_1_0 = v_183_3;
          };
        } else {
          v_183_2_0 = v_183_2;
          if (v_183_2_0) {
            v_183_3_0_1 = v_183_3;
          } else {
            v_183_3_0_0 = v_183_3;
          };
        };
        if (v_185_1) {
          v_185_2_1 = v_185_2;
          if (v_185_2_1) {
            v_185_3_1_1 = v_185_3;
          } else {
            v_185_3_1_0 = v_185_3;
          };
        } else {
          v_185_2_0 = v_185_2;
          if (v_185_2_0) {
            v_185_3_0_1 = v_185_3;
          } else {
            v_185_3_0_0 = v_185_3;
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
    s_2_1 = v_541;
    s_2_2 = v_542;
    s_2_3 = v_543;
    r_2 = v_549;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      v_544 = true;
      v_545 = true;
      v_546 = true;
      v_551 = true;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        if (r4) {
          v_180 = true;
        } else {
          v_180 = self->pnr_2;
        };
        if (r1) {
          v_182 = true;
        } else {
          v_182 = v_180;
        };
        if (a) {
          r_2_St_7_Rlevel3 = true;
        } else {
          r_2_St_7_Rlevel3 = v_182;
        };
        if (r4) {
          v_179_1 = false;
        } else {
          v_179_1 = false;
        };
        if (r1) {
          v_181_1 = true;
        } else {
          v_181_1 = v_179_1;
        };
        if (a) {
          s_2_St_7_Rlevel3_1 = true;
        } else {
          s_2_St_7_Rlevel3_1 = v_181_1;
        };
        if (r4) {
          v_179_2 = false;
        } else {
          v_179_2 = false;
        };
        if (r1) {
          v_181_2 = false;
        } else {
          v_181_2 = v_179_2;
        };
        if (a) {
          s_2_St_7_Rlevel3_2 = true;
        } else {
          s_2_St_7_Rlevel3_2 = v_181_2;
        };
        if (r4) {
          v_179_3 = false;
        } else {
          v_179_3 = true;
        };
        if (r1) {
          v_181_3 = false;
        } else {
          v_181_3 = v_179_3;
        };
        if (a) {
          s_2_St_7_Rlevel3_3 = false;
        } else {
          s_2_St_7_Rlevel3_3 = v_181_3;
        };
        v_550 = r_2_St_7_Rlevel3;
        v_538 = s_2_St_7_Rlevel3_1;
        v_539 = s_2_St_7_Rlevel3_2;
        v_540 = s_2_St_7_Rlevel3_3;
        if (v_179_1) {
          v_179_2_1 = v_179_2;
          if (v_179_2_1) {
            v_179_3_1_1 = v_179_3;
          } else {
            v_179_3_1_0 = v_179_3;
          };
        } else {
          v_179_2_0 = v_179_2;
          if (v_179_2_0) {
            v_179_3_0_1 = v_179_3;
          } else {
            v_179_3_0_0 = v_179_3;
          };
        };
        if (v_181_1) {
          v_181_2_1 = v_181_2;
          if (v_181_2_1) {
            v_181_3_1_1 = v_181_3;
          } else {
            v_181_3_1_0 = v_181_3;
          };
        } else {
          v_181_2_0 = v_181_2;
          if (v_181_2_0) {
            v_181_3_0_1 = v_181_3;
          } else {
            v_181_3_0_0 = v_181_3;
          };
        };
      } else {
        if (r3) {
          v_176 = true;
        } else {
          v_176 = self->pnr_2;
        };
        if (r1) {
          v_178 = true;
        } else {
          v_178 = v_176;
        };
        if (a) {
          r_2_St_7_Rlevel4 = true;
        } else {
          r_2_St_7_Rlevel4 = v_178;
        };
        v_550 = r_2_St_7_Rlevel4;
        if (r3) {
          v_175_1 = false;
        } else {
          v_175_1 = false;
        };
        if (r1) {
          v_177_1 = true;
        } else {
          v_177_1 = v_175_1;
        };
        if (a) {
          s_2_St_7_Rlevel4_1 = true;
        } else {
          s_2_St_7_Rlevel4_1 = v_177_1;
        };
        v_538 = s_2_St_7_Rlevel4_1;
        if (r3) {
          v_175_2 = false;
        } else {
          v_175_2 = false;
        };
        if (r1) {
          v_177_2 = false;
        } else {
          v_177_2 = v_175_2;
        };
        if (a) {
          s_2_St_7_Rlevel4_2 = true;
        } else {
          s_2_St_7_Rlevel4_2 = v_177_2;
        };
        v_539 = s_2_St_7_Rlevel4_2;
        if (r3) {
          v_175_3 = true;
        } else {
          v_175_3 = false;
        };
        if (r1) {
          v_177_3 = false;
        } else {
          v_177_3 = v_175_3;
        };
        if (a) {
          s_2_St_7_Rlevel4_3 = false;
        } else {
          s_2_St_7_Rlevel4_3 = v_177_3;
        };
        v_540 = s_2_St_7_Rlevel4_3;
        if (v_175_1) {
          v_175_2_1 = v_175_2;
          if (v_175_2_1) {
            v_175_3_1_1 = v_175_3;
          } else {
            v_175_3_1_0 = v_175_3;
          };
        } else {
          v_175_2_0 = v_175_2;
          if (v_175_2_0) {
            v_175_3_0_1 = v_175_3;
          } else {
            v_175_3_0_0 = v_175_3;
          };
        };
        if (v_177_1) {
          v_177_2_1 = v_177_2;
          if (v_177_2_1) {
            v_177_3_1_1 = v_177_3;
          } else {
            v_177_3_1_0 = v_177_3;
          };
        } else {
          v_177_2_0 = v_177_2;
          if (v_177_2_0) {
            v_177_3_0_1 = v_177_3;
          } else {
            v_177_3_0_0 = v_177_3;
          };
        };
      };
      v_544 = v_538;
      v_545 = v_539;
      v_546 = v_540;
      v_551 = v_550;
    };
    s_2_1 = v_544;
    s_2_2 = v_545;
    s_2_3 = v_546;
    r_2 = v_551;
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
        v_504 = estado_2_St_7_Boot;
        nr_2_St_7_Boot = false;
        v_524 = nr_2_St_7_Boot;
        ns_2_St_7_Boot_1 = true;
        v_509 = ns_2_St_7_Boot_1;
        ns_2_St_7_Boot_2 = true;
        v_510 = ns_2_St_7_Boot_2;
        ns_2_St_7_Boot_3 = true;
        v_511 = ns_2_St_7_Boot_3;
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
        v_504 = estado_2_St_7_Off;
        v_524 = nr_2_St_7_Off;
        v_509 = ns_2_St_7_Off_1;
        v_510 = ns_2_St_7_Off_2;
        v_511 = ns_2_St_7_Off_3;
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
      v_506 = v_504;
      v_518 = v_509;
      v_519 = v_510;
      v_520 = v_511;
      v_526 = v_524;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_505 = 0;
        v_525 = true;
        v_512 = true;
        v_513 = true;
        v_514 = true;
      } else {
        estado_2_St_7_Rlevel1 = 2;
        v_505 = estado_2_St_7_Rlevel1;
        nr_2_St_7_Rlevel1 = false;
        v_525 = nr_2_St_7_Rlevel1;
        ns_2_St_7_Rlevel1_1 = true;
        v_512 = ns_2_St_7_Rlevel1_1;
        ns_2_St_7_Rlevel1_2 = false;
        v_513 = ns_2_St_7_Rlevel1_2;
        ns_2_St_7_Rlevel1_3 = false;
        v_514 = ns_2_St_7_Rlevel1_3;
      };
      v_506 = v_505;
      v_518 = v_512;
      v_519 = v_513;
      v_520 = v_514;
      v_526 = v_525;
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
    estado_2 = v_506;
    ns_2_1 = v_518;
    ns_2_2 = v_519;
    ns_2_3 = v_520;
    nr_2 = v_526;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_508 = 0;
      v_521 = true;
      v_522 = true;
      v_523 = true;
      v_528 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        estado_2_St_7_Rlevel3 = 3;
        nr_2_St_7_Rlevel3 = false;
        ns_2_St_7_Rlevel3_1 = false;
        ns_2_St_7_Rlevel3_2 = false;
        ns_2_St_7_Rlevel3_3 = true;
        v_507 = estado_2_St_7_Rlevel3;
        v_527 = nr_2_St_7_Rlevel3;
        v_515 = ns_2_St_7_Rlevel3_1;
        v_516 = ns_2_St_7_Rlevel3_2;
        v_517 = ns_2_St_7_Rlevel3_3;
      } else {
        estado_2_St_7_Rlevel4 = 4;
        v_507 = estado_2_St_7_Rlevel4;
        nr_2_St_7_Rlevel4 = false;
        v_527 = nr_2_St_7_Rlevel4;
        ns_2_St_7_Rlevel4_1 = false;
        v_515 = ns_2_St_7_Rlevel4_1;
        ns_2_St_7_Rlevel4_2 = false;
        v_516 = ns_2_St_7_Rlevel4_2;
        ns_2_St_7_Rlevel4_3 = false;
        v_517 = ns_2_St_7_Rlevel4_3;
      };
      v_508 = v_507;
      v_521 = v_515;
      v_522 = v_516;
      v_523 = v_517;
      v_528 = v_527;
    };
    estado_2 = v_508;
    ns_2_1 = v_521;
    ns_2_2 = v_522;
    ns_2_3 = v_523;
    nr_2 = v_528;
  };
  _out->serv_estado = estado_2;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_152 = (_out->serv_estado>0);
        v_148 = (_out->serv_estado>0);
      } else {
        v_143 = (_out->serv_estado==0);
        v_138 = (_out->serv_estado==0);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_132 = (_out->serv_estado<3);
        v_127 = (_out->serv_estado==0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_120 = (_out->serv_estado<4);
        v_119 = (_out->serv_estado>0);
        v_121 = (v_119&&v_120);
        v_115 = (_out->serv_estado==0);
      } else {
        v_109 = (_out->serv_estado>0);
        v_105 = (_out->serv_estado>0);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_163 = (_out->serv_estado==0);
        v_158 = (_out->serv_estado==0);
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
          v_174 = true;
        } else {
          v_174 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Boot = true;
        } else {
          r_3_St_8_Boot = v_174;
        };
        v_600 = r_3_St_8_Boot;
        if (t) {
          v_173_1 = false;
        } else {
          v_173_1 = true;
        };
        if (c) {
          s_3_St_8_Boot_1 = true;
        } else {
          s_3_St_8_Boot_1 = v_173_1;
        };
        v_585 = s_3_St_8_Boot_1;
        if (t) {
          v_173_2 = false;
        } else {
          v_173_2 = true;
        };
        if (c) {
          s_3_St_8_Boot_2 = true;
        } else {
          s_3_St_8_Boot_2 = v_173_2;
        };
        v_586 = s_3_St_8_Boot_2;
        if (t) {
          v_173_3 = false;
        } else {
          v_173_3 = true;
        };
        if (c) {
          s_3_St_8_Boot_3 = false;
        } else {
          s_3_St_8_Boot_3 = v_173_3;
        };
        v_587 = s_3_St_8_Boot_3;
        if (v_173_1) {
          v_173_2_1 = v_173_2;
          if (v_173_2_1) {
            v_173_3_1_1 = v_173_3;
          } else {
            v_173_3_1_0 = v_173_3;
          };
        } else {
          v_173_2_0 = v_173_2;
          if (v_173_2_0) {
            v_173_3_0_1 = v_173_3;
          } else {
            v_173_3_0_0 = v_173_3;
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
        v_600 = r_3_St_8_Off;
        v_585 = s_3_St_8_Off_1;
        v_586 = s_3_St_8_Off_2;
        v_587 = s_3_St_8_Off_3;
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
      v_594 = v_585;
      v_595 = v_586;
      v_596 = v_587;
      v_602 = v_600;
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_601 = true;
        v_588 = true;
        v_589 = true;
        v_590 = true;
      } else {
        if (t) {
          v_167 = true;
        } else {
          v_167 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Online = true;
        } else {
          r_3_St_8_Online = v_167;
        };
        v_601 = r_3_St_8_Online;
        if (t) {
          v_166_1 = false;
        } else {
          v_166_1 = true;
        };
        if (c) {
          s_3_St_8_Online_1 = true;
        } else {
          s_3_St_8_Online_1 = v_166_1;
        };
        v_588 = s_3_St_8_Online_1;
        if (t) {
          v_166_2 = false;
        } else {
          v_166_2 = false;
        };
        if (c) {
          s_3_St_8_Online_2 = true;
        } else {
          s_3_St_8_Online_2 = v_166_2;
        };
        v_589 = s_3_St_8_Online_2;
        if (t) {
          v_166_3 = false;
        } else {
          v_166_3 = false;
        };
        if (c) {
          s_3_St_8_Online_3 = false;
        } else {
          s_3_St_8_Online_3 = v_166_3;
        };
        v_590 = s_3_St_8_Online_3;
      };
      v_594 = v_588;
      v_595 = v_589;
      v_596 = v_590;
      v_602 = v_601;
      if (!(ck_8_3_1_0)) {
        if (v_166_1) {
          v_166_2_1 = v_166_2;
          if (v_166_2_1) {
            v_166_3_1_1 = v_166_3;
          } else {
            v_166_3_1_0 = v_166_3;
          };
        } else {
          v_166_2_0 = v_166_2;
          if (v_166_2_0) {
            v_166_3_0_1 = v_166_3;
          } else {
            v_166_3_0_0 = v_166_3;
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
    s_3_1 = v_594;
    s_3_2 = v_595;
    s_3_3 = v_596;
    r_3 = v_602;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      v_597 = true;
      v_598 = true;
      v_599 = true;
      v_604 = true;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        if (t) {
          v_165 = true;
        } else {
          v_165 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Sleep = true;
        } else {
          r_3_St_8_Sleep = v_165;
        };
        v_603 = r_3_St_8_Sleep;
        if (t) {
          v_164_1 = true;
        } else {
          v_164_1 = false;
        };
        if (c) {
          s_3_St_8_Sleep_1 = true;
        } else {
          s_3_St_8_Sleep_1 = v_164_1;
        };
        v_591 = s_3_St_8_Sleep_1;
        if (t) {
          v_164_2 = true;
        } else {
          v_164_2 = false;
        };
        if (c) {
          s_3_St_8_Sleep_2 = true;
        } else {
          s_3_St_8_Sleep_2 = v_164_2;
        };
        v_592 = s_3_St_8_Sleep_2;
        if (t) {
          v_164_3 = true;
        } else {
          v_164_3 = true;
        };
        if (c) {
          s_3_St_8_Sleep_3 = false;
        } else {
          s_3_St_8_Sleep_3 = v_164_3;
        };
        v_593 = s_3_St_8_Sleep_3;
        if (v_164_1) {
          v_164_2_1 = v_164_2;
          if (v_164_2_1) {
            v_164_3_1_1 = v_164_3;
          } else {
            v_164_3_1_0 = v_164_3;
          };
        } else {
          v_164_2_0 = v_164_2;
          if (v_164_2_0) {
            v_164_3_0_1 = v_164_3;
          } else {
            v_164_3_0_0 = v_164_3;
          };
        };
      } else {
        if (o) {
          v_170 = true;
          v_169_1 = true;
          v_169_2 = false;
          v_169_3 = false;
        } else {
          v_170 = self->pnr_3;
          v_169_1 = false;
          v_169_2 = false;
          v_169_3 = false;
        };
        v_168 = !(o);
        if (v_168) {
          v_172 = true;
        } else {
          v_172 = v_170;
        };
        if (c) {
          r_3_St_8_Teste = true;
        } else {
          r_3_St_8_Teste = v_172;
        };
        if (v_168) {
          v_171_1 = false;
        } else {
          v_171_1 = v_169_1;
        };
        if (c) {
          s_3_St_8_Teste_1 = true;
        } else {
          s_3_St_8_Teste_1 = v_171_1;
        };
        if (v_168) {
          v_171_2 = false;
        } else {
          v_171_2 = v_169_2;
        };
        if (c) {
          s_3_St_8_Teste_2 = true;
        } else {
          s_3_St_8_Teste_2 = v_171_2;
        };
        if (v_168) {
          v_171_3 = true;
        } else {
          v_171_3 = v_169_3;
        };
        if (c) {
          s_3_St_8_Teste_3 = false;
        } else {
          s_3_St_8_Teste_3 = v_171_3;
        };
        v_603 = r_3_St_8_Teste;
        v_591 = s_3_St_8_Teste_1;
        v_592 = s_3_St_8_Teste_2;
        v_593 = s_3_St_8_Teste_3;
        if (v_169_1) {
          v_169_2_1 = v_169_2;
          if (v_169_2_1) {
            v_169_3_1_1 = v_169_3;
          } else {
            v_169_3_1_0 = v_169_3;
          };
        } else {
          v_169_2_0 = v_169_2;
          if (v_169_2_0) {
            v_169_3_0_1 = v_169_3;
          } else {
            v_169_3_0_0 = v_169_3;
          };
        };
        if (v_171_1) {
          v_171_2_1 = v_171_2;
          if (v_171_2_1) {
            v_171_3_1_1 = v_171_3;
          } else {
            v_171_3_1_0 = v_171_3;
          };
        } else {
          v_171_2_0 = v_171_2;
          if (v_171_2_0) {
            v_171_3_0_1 = v_171_3;
          } else {
            v_171_3_0_0 = v_171_3;
          };
        };
      };
      v_597 = v_591;
      v_598 = v_592;
      v_599 = v_593;
      v_604 = v_603;
    };
    s_3_1 = v_597;
    s_3_2 = v_598;
    s_3_3 = v_599;
    r_3 = v_604;
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
        v_557 = estado_1_St_8_Boot;
        atuador_St_8_Boot = true;
        v_552 = atuador_St_8_Boot;
        nr_3_St_8_Boot = false;
        v_577 = nr_3_St_8_Boot;
        ns_3_St_8_Boot_1 = true;
        v_562 = ns_3_St_8_Boot_1;
        ns_3_St_8_Boot_2 = true;
        v_563 = ns_3_St_8_Boot_2;
        ns_3_St_8_Boot_3 = true;
        v_564 = ns_3_St_8_Boot_3;
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
        v_557 = estado_1_St_8_Off;
        v_552 = atuador_St_8_Off;
        v_577 = nr_3_St_8_Off;
        v_562 = ns_3_St_8_Off_1;
        v_563 = ns_3_St_8_Off_2;
        v_564 = ns_3_St_8_Off_3;
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
      v_554 = v_552;
      v_559 = v_557;
      v_571 = v_562;
      v_572 = v_563;
      v_573 = v_564;
      v_579 = v_577;
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_558 = 0;
        v_553 = true;
        v_578 = true;
        v_565 = true;
        v_566 = true;
        v_567 = true;
      } else {
        estado_1_St_8_Online = 4;
        v_558 = estado_1_St_8_Online;
        atuador_St_8_Online = true;
        v_553 = atuador_St_8_Online;
        nr_3_St_8_Online = false;
        v_578 = nr_3_St_8_Online;
        ns_3_St_8_Online_1 = true;
        v_565 = ns_3_St_8_Online_1;
        ns_3_St_8_Online_2 = false;
        v_566 = ns_3_St_8_Online_2;
        ns_3_St_8_Online_3 = false;
        v_567 = ns_3_St_8_Online_3;
      };
      v_554 = v_553;
      v_559 = v_558;
      v_571 = v_565;
      v_572 = v_566;
      v_573 = v_567;
      v_579 = v_578;
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
    atuador = v_554;
    estado_1 = v_559;
    ns_3_1 = v_571;
    ns_3_2 = v_572;
    ns_3_3 = v_573;
    nr_3 = v_579;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      v_556 = true;
      v_561 = 0;
      v_574 = true;
      v_575 = true;
      v_576 = true;
      v_581 = true;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        estado_1_St_8_Sleep = 1;
        v_560 = estado_1_St_8_Sleep;
        atuador_St_8_Sleep = false;
        v_555 = atuador_St_8_Sleep;
        nr_3_St_8_Sleep = false;
        v_580 = nr_3_St_8_Sleep;
        ns_3_St_8_Sleep_1 = false;
        v_568 = ns_3_St_8_Sleep_1;
        ns_3_St_8_Sleep_2 = false;
        v_569 = ns_3_St_8_Sleep_2;
        ns_3_St_8_Sleep_3 = true;
        v_570 = ns_3_St_8_Sleep_3;
      } else {
        estado_1_St_8_Teste = 3;
        atuador_St_8_Teste = true;
        nr_3_St_8_Teste = false;
        ns_3_St_8_Teste_1 = false;
        ns_3_St_8_Teste_2 = false;
        ns_3_St_8_Teste_3 = false;
        v_560 = estado_1_St_8_Teste;
        v_555 = atuador_St_8_Teste;
        v_580 = nr_3_St_8_Teste;
        v_568 = ns_3_St_8_Teste_1;
        v_569 = ns_3_St_8_Teste_2;
        v_570 = ns_3_St_8_Teste_3;
      };
      v_556 = v_555;
      v_561 = v_560;
      v_574 = v_568;
      v_575 = v_569;
      v_576 = v_570;
      v_581 = v_580;
    };
    atuador = v_556;
    estado_1 = v_561;
    ns_3_1 = v_574;
    ns_3_2 = v_575;
    ns_3_3 = v_576;
    nr_3 = v_581;
  };
  _out->modem_estado = estado_1;
  _out->modem_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_150 = (_out->modem_estado>0);
        v_146 = (_out->modem_estado>0);
      } else {
        v_141 = !(_out->modem_atuador);
        v_136 = !(_out->modem_atuador);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_130 = (_out->modem_estado>0);
        v_125 = (_out->modem_estado>0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_117 = (_out->modem_estado>0);
        v_113 = (_out->modem_estado>0);
      } else {
        v_107 = (_out->modem_estado>0);
        v_103 = (_out->modem_estado>0);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_161 = !(_out->modem_atuador);
        v_156 = !(_out->modem_atuador);
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
        v_149 = (_out->dia&&_out->pabx_atuador);
        v_151 = (v_149&&v_150);
        r_dia_BCHR = (v_151&&v_152);
        v_145 = (v_144&&_out->pabx_atuador);
        v_147 = (v_145&&v_146);
        r_noite_BCHR = (v_147&&v_148);
        v_611 = r_dia_BCHR;
        v_617 = r_noite_BCHR;
      } else {
        v_139 = !(_out->pabx_atuador);
        v_140 = (_out->dia&&v_139);
        v_142 = (v_140&&v_141);
        r_dia_B25 = (v_142&&v_143);
        v_611 = r_dia_B25;
        v_134 = !(_out->pabx_atuador);
        v_135 = (v_133&&v_134);
        v_137 = (v_135&&v_136);
        r_noite_B25 = (v_137&&v_138);
        v_617 = r_noite_B25;
      };
      v_613 = v_611;
      v_619 = v_617;
    } else {
      if (ck_3_1_0) {
        v_612 = true;
        v_618 = true;
      } else {
        v_128 = !(_out->pabx_atuador);
        v_129 = (_out->dia&&v_128);
        v_131 = (v_129&&v_130);
        r_dia_B50 = (v_131&&v_132);
        v_612 = r_dia_B50;
        v_123 = !(_out->pabx_atuador);
        v_124 = (v_122&&v_123);
        v_126 = (v_124&&v_125);
        r_noite_B50 = (v_126&&v_127);
        v_618 = r_noite_B50;
      };
      v_613 = v_612;
      v_619 = v_618;
    };
    _out->r_dia = v_613;
    _out->r_noite = v_619;
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_116 = (_out->dia&&_out->pabx_atuador);
        v_118 = (v_116&&v_117);
        r_dia_B75 = (v_118&&v_121);
        v_111 = !(_out->pabx_atuador);
        v_112 = (v_110&&v_111);
        v_114 = (v_112&&v_113);
        r_noite_B75 = (v_114&&v_115);
        v_614 = r_dia_B75;
        v_620 = r_noite_B75;
      } else {
        v_106 = (_out->dia&&_out->pabx_atuador);
        v_108 = (v_106&&v_107);
        r_dia_B100 = (v_108&&v_109);
        v_614 = r_dia_B100;
        v_102 = (v_101&&_out->pabx_atuador);
        v_104 = (v_102&&v_103);
        r_noite_B100 = (v_104&&v_105);
        v_620 = r_noite_B100;
      };
      v_616 = v_614;
      v_622 = v_620;
    } else {
      if (ck_3_0_0) {
        v_615 = true;
        v_621 = true;
      } else {
        v_159 = !(_out->pabx_atuador);
        v_160 = (_out->dia&&v_159);
        v_162 = (v_160&&v_161);
        r_dia_BERR = (v_162&&v_163);
        v_615 = r_dia_BERR;
        v_154 = !(_out->pabx_atuador);
        v_155 = (v_153&&v_154);
        v_157 = (v_155&&v_156);
        r_noite_BERR = (v_157&&v_158);
        v_621 = r_noite_BERR;
      };
      v_616 = v_615;
      v_622 = v_621;
    };
    _out->r_dia = v_616;
    _out->r_noite = v_622;
  };
  v_100 = (_out->r_dia||_out->r_noite);
  self->pnr = nr;
  self->v_477 = ns_1_2;
  self->v_478 = ns_2_4;
  self->v_479 = ns_3_4;
  self->pnr_1 = nr_1;
  self->ck_12_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_529 = ns_2_1;
  self->v_530 = ns_2_2;
  self->v_531 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_582 = ns_3_1;
  self->v_583 = ns_3_2;
  self->v_584 = ns_3_3;
  self->pnr_4 = nr_4;
  self->ck_6_1 = ns_4_1;;
}

