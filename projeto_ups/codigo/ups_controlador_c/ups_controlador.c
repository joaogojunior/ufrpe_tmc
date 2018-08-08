/* --- Generated the 8/8/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_333 = true;
  self->v_334 = true;
  self->v_335 = false;
}

void Ups_controlador__computador_step(int emerg_off, int c_atx, int off_atx,
                                      int ts, int cr1, int cr3, int cr4,
                                      int ba, int b1, int b3, int b4,
                                      int s_atx, int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int v_21_2_0;
  int v_21_3_0_0;
  int v_21_3_0_1;
  int v_21_2_1;
  int v_21_3_1_0;
  int v_21_3_1_1;
  int v_19_2_0;
  int v_19_3_0_0;
  int v_19_3_0_1;
  int v_19_2_1;
  int v_19_3_1_0;
  int v_19_3_1_1;
  int v_22;
  int v_21_3;
  int v_21_2;
  int v_21_1;
  int v_20;
  int v_19_3;
  int v_19_2;
  int v_19_1;
  int v_18;
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
  int v_12_2_0;
  int v_12_3_0_0;
  int v_12_3_0_1;
  int v_12_2_1;
  int v_12_3_1_0;
  int v_12_3_1_1;
  int v_17;
  int v_16_3;
  int v_16_2;
  int v_16_1;
  int v_15;
  int v_14_3;
  int v_14_2;
  int v_14_1;
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
  int v_6_2_0;
  int v_6_3_0_0;
  int v_6_3_0_1;
  int v_6_2_1;
  int v_6_3_1_0;
  int v_6_3_1_1;
  int v_11;
  int v_10_3;
  int v_10_2;
  int v_10_1;
  int v_9;
  int v_8_3;
  int v_8_2;
  int v_8_1;
  int v_7;
  int v_6_3;
  int v_6_2;
  int v_6_1;
  int v_4_2_0;
  int v_4_3_0_0;
  int v_4_3_0_1;
  int v_4_2_1;
  int v_4_3_1_0;
  int v_4_3_1_1;
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
  int v_5;
  int v_4_3;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2_3;
  int v_2_2;
  int v_2_1;
  int v_1;
  int v_3_1;
  int v_2_4;
  int v_1_1;
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
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
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
  v_30 = !(c_atx);
  v_29 = (ba&&s_atx);
  a = (v_29||v_30);
  v_28 = !(cr1);
  v_27 = (b1&&s1);
  r1 = (v_27||v_28);
  v_26 = !(cr3);
  v_25 = (b3&&s3);
  r3 = (v_25||v_26);
  v_24 = !(cr4);
  v_23 = (b4&&s4);
  r4 = (v_23||v_24);
  ck_1_4 = self->v_333;
  ck_2 = self->v_334;
  ck_3 = self->v_335;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (ts) {
          v_20 = true;
        } else {
          v_20 = self->pnr;
        };
        if (emerg_off) {
          v_22 = true;
        } else {
          v_22 = v_20;
        };
        if (ts) {
          v_19_1 = true;
        } else {
          v_19_1 = true;
        };
        if (emerg_off) {
          v_21_1 = true;
        } else {
          v_21_1 = v_19_1;
        };
        if (ts) {
          v_19_2 = false;
        } else {
          v_19_2 = true;
        };
        if (emerg_off) {
          v_21_2 = true;
        } else {
          v_21_2 = v_19_2;
        };
        if (ts) {
          v_19_3 = false;
        } else {
          v_19_3 = true;
        };
        if (emerg_off) {
          v_21_3 = false;
        } else {
          v_21_3 = v_19_3;
        };
        v_18 = !(off_atx);
        if (v_18) {
          r_St_Boot = true;
        } else {
          r_St_Boot = v_22;
        };
        v_351 = r_St_Boot;
        if (v_18) {
          s_St_Boot_1 = true;
        } else {
          s_St_Boot_1 = v_21_1;
        };
        v_336 = s_St_Boot_1;
        if (v_18) {
          s_St_Boot_2 = true;
        } else {
          s_St_Boot_2 = v_21_2;
        };
        v_337 = s_St_Boot_2;
        if (v_18) {
          s_St_Boot_3 = false;
        } else {
          s_St_Boot_3 = v_21_3;
        };
        v_338 = s_St_Boot_3;
        if (v_19_1) {
          v_19_2_1 = v_19_2;
          if (v_19_2_1) {
            v_19_3_1_1 = v_19_3;
          } else {
            v_19_3_1_0 = v_19_3;
          };
        } else {
          v_19_2_0 = v_19_2;
          if (v_19_2_0) {
            v_19_3_0_1 = v_19_3;
          } else {
            v_19_3_0_0 = v_19_3;
          };
        };
        if (v_21_1) {
          v_21_2_1 = v_21_2;
          if (v_21_2_1) {
            v_21_3_1_1 = v_21_3;
          } else {
            v_21_3_1_0 = v_21_3;
          };
        } else {
          v_21_2_0 = v_21_2;
          if (v_21_2_0) {
            v_21_3_0_1 = v_21_3;
          } else {
            v_21_3_0_0 = v_21_3;
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
        v_351 = r_St_Off;
        v_336 = s_St_Off_1;
        v_337 = s_St_Off_2;
        v_338 = s_St_Off_3;
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
      v_345 = v_336;
      v_346 = v_337;
      v_347 = v_338;
      v_353 = v_351;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_352 = true;
        v_339 = true;
        v_340 = true;
        v_341 = true;
      } else {
        if (r4) {
          v_13 = true;
        } else {
          v_13 = self->pnr;
        };
        if (r3) {
          v_15 = true;
        } else {
          v_15 = v_13;
        };
        if (emerg_off) {
          v_17 = true;
        } else {
          v_17 = v_15;
        };
        if (a) {
          r_St_Rlevel1 = true;
        } else {
          r_St_Rlevel1 = v_17;
        };
        v_352 = r_St_Rlevel1;
        if (r4) {
          v_12_1 = false;
        } else {
          v_12_1 = true;
        };
        if (r3) {
          v_14_1 = false;
        } else {
          v_14_1 = v_12_1;
        };
        if (emerg_off) {
          v_16_1 = true;
        } else {
          v_16_1 = v_14_1;
        };
        if (a) {
          s_St_Rlevel1_1 = true;
        } else {
          s_St_Rlevel1_1 = v_16_1;
        };
        v_339 = s_St_Rlevel1_1;
        if (r4) {
          v_12_2 = false;
        } else {
          v_12_2 = false;
        };
        if (r3) {
          v_14_2 = false;
        } else {
          v_14_2 = v_12_2;
        };
        if (emerg_off) {
          v_16_2 = true;
        } else {
          v_16_2 = v_14_2;
        };
        if (a) {
          s_St_Rlevel1_2 = true;
        } else {
          s_St_Rlevel1_2 = v_16_2;
        };
        v_340 = s_St_Rlevel1_2;
        if (r4) {
          v_12_3 = false;
        } else {
          v_12_3 = false;
        };
        if (r3) {
          v_14_3 = true;
        } else {
          v_14_3 = v_12_3;
        };
        if (emerg_off) {
          v_16_3 = false;
        } else {
          v_16_3 = v_14_3;
        };
        if (a) {
          s_St_Rlevel1_3 = false;
        } else {
          s_St_Rlevel1_3 = v_16_3;
        };
        v_341 = s_St_Rlevel1_3;
      };
      v_345 = v_339;
      v_346 = v_340;
      v_347 = v_341;
      v_353 = v_352;
      if (!(ck_3_1_0)) {
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
    s_1 = v_345;
    s_2 = v_346;
    s_3 = v_347;
    r = v_353;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_348 = true;
      v_349 = true;
      v_350 = true;
      v_355 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (r4) {
          v_7 = true;
        } else {
          v_7 = self->pnr;
        };
        if (r1) {
          v_9 = true;
        } else {
          v_9 = v_7;
        };
        if (emerg_off) {
          v_11 = true;
        } else {
          v_11 = v_9;
        };
        if (a) {
          r_St_Rlevel3 = true;
        } else {
          r_St_Rlevel3 = v_11;
        };
        if (r4) {
          v_6_1 = false;
        } else {
          v_6_1 = false;
        };
        if (r1) {
          v_8_1 = true;
        } else {
          v_8_1 = v_6_1;
        };
        if (emerg_off) {
          v_10_1 = true;
        } else {
          v_10_1 = v_8_1;
        };
        if (a) {
          s_St_Rlevel3_1 = true;
        } else {
          s_St_Rlevel3_1 = v_10_1;
        };
        if (r4) {
          v_6_2 = false;
        } else {
          v_6_2 = false;
        };
        if (r1) {
          v_8_2 = false;
        } else {
          v_8_2 = v_6_2;
        };
        if (emerg_off) {
          v_10_2 = true;
        } else {
          v_10_2 = v_8_2;
        };
        if (a) {
          s_St_Rlevel3_2 = true;
        } else {
          s_St_Rlevel3_2 = v_10_2;
        };
        if (r4) {
          v_6_3 = false;
        } else {
          v_6_3 = true;
        };
        if (r1) {
          v_8_3 = false;
        } else {
          v_8_3 = v_6_3;
        };
        if (emerg_off) {
          v_10_3 = false;
        } else {
          v_10_3 = v_8_3;
        };
        if (a) {
          s_St_Rlevel3_3 = false;
        } else {
          s_St_Rlevel3_3 = v_10_3;
        };
        v_354 = r_St_Rlevel3;
        v_342 = s_St_Rlevel3_1;
        v_343 = s_St_Rlevel3_2;
        v_344 = s_St_Rlevel3_3;
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
        if (emerg_off) {
          v_5 = true;
        } else {
          v_5 = v_3;
        };
        if (a) {
          r_St_Rlevel4 = true;
        } else {
          r_St_Rlevel4 = v_5;
        };
        v_354 = r_St_Rlevel4;
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
        if (emerg_off) {
          v_4_1 = true;
        } else {
          v_4_1 = v_2_1;
        };
        if (a) {
          s_St_Rlevel4_1 = true;
        } else {
          s_St_Rlevel4_1 = v_4_1;
        };
        v_342 = s_St_Rlevel4_1;
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
        if (emerg_off) {
          v_4_2 = true;
        } else {
          v_4_2 = v_2_2;
        };
        if (a) {
          s_St_Rlevel4_2 = true;
        } else {
          s_St_Rlevel4_2 = v_4_2;
        };
        v_343 = s_St_Rlevel4_2;
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
        if (emerg_off) {
          v_4_3 = false;
        } else {
          v_4_3 = v_2_3;
        };
        if (a) {
          s_St_Rlevel4_3 = false;
        } else {
          s_St_Rlevel4_3 = v_4_3;
        };
        v_344 = s_St_Rlevel4_3;
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
      };
      v_348 = v_342;
      v_349 = v_343;
      v_350 = v_344;
      v_355 = v_354;
    };
    s_1 = v_348;
    s_2 = v_349;
    s_3 = v_350;
    r = v_355;
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
        v_308 = estado_St_Boot;
        nr_St_Boot = false;
        v_328 = nr_St_Boot;
        ns_St_Boot_1 = true;
        v_313 = ns_St_Boot_1;
        ns_St_Boot_2 = true;
        v_314 = ns_St_Boot_2;
        ns_St_Boot_3 = true;
        v_315 = ns_St_Boot_3;
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
        v_308 = estado_St_Off;
        v_328 = nr_St_Off;
        v_313 = ns_St_Off_1;
        v_314 = ns_St_Off_2;
        v_315 = ns_St_Off_3;
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
      v_310 = v_308;
      v_322 = v_313;
      v_323 = v_314;
      v_324 = v_315;
      v_330 = v_328;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_309 = 0;
        v_329 = true;
        v_316 = true;
        v_317 = true;
        v_318 = true;
      } else {
        estado_St_Rlevel1 = 2;
        v_309 = estado_St_Rlevel1;
        nr_St_Rlevel1 = false;
        v_329 = nr_St_Rlevel1;
        ns_St_Rlevel1_1 = true;
        v_316 = ns_St_Rlevel1_1;
        ns_St_Rlevel1_2 = false;
        v_317 = ns_St_Rlevel1_2;
        ns_St_Rlevel1_3 = false;
        v_318 = ns_St_Rlevel1_3;
      };
      v_310 = v_309;
      v_322 = v_316;
      v_323 = v_317;
      v_324 = v_318;
      v_330 = v_329;
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
    _out->estado = v_310;
    ns_1 = v_322;
    ns_2 = v_323;
    ns_3 = v_324;
    nr = v_330;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_312 = 0;
      v_325 = true;
      v_326 = true;
      v_327 = true;
      v_332 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        estado_St_Rlevel3 = 3;
        nr_St_Rlevel3 = false;
        ns_St_Rlevel3_1 = false;
        ns_St_Rlevel3_2 = false;
        ns_St_Rlevel3_3 = true;
        v_311 = estado_St_Rlevel3;
        v_331 = nr_St_Rlevel3;
        v_319 = ns_St_Rlevel3_1;
        v_320 = ns_St_Rlevel3_2;
        v_321 = ns_St_Rlevel3_3;
      } else {
        estado_St_Rlevel4 = 4;
        v_311 = estado_St_Rlevel4;
        nr_St_Rlevel4 = false;
        v_331 = nr_St_Rlevel4;
        ns_St_Rlevel4_1 = false;
        v_319 = ns_St_Rlevel4_1;
        ns_St_Rlevel4_2 = false;
        v_320 = ns_St_Rlevel4_2;
        ns_St_Rlevel4_3 = false;
        v_321 = ns_St_Rlevel4_3;
      };
      v_312 = v_311;
      v_325 = v_319;
      v_326 = v_320;
      v_327 = v_321;
      v_332 = v_331;
    };
    _out->estado = v_312;
    ns_1 = v_325;
    ns_2 = v_326;
    ns_3 = v_327;
    nr = v_332;
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
  self->v_333 = ns_1;
  self->v_334 = ns_2;
  self->v_335 = ns_3;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_398 = false;
  self->v_399 = true;
  self->v_400 = true;
}

void Ups_controlador__bateria_step(int ac, int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int v_77_2_0;
  int v_77_3_0_0;
  int v_77_3_0_1;
  int v_77_2_1;
  int v_77_3_1_0;
  int v_77_3_1_1;
  int v_75_2_0;
  int v_75_3_0_0;
  int v_75_3_0_1;
  int v_75_2_1;
  int v_75_3_1_0;
  int v_75_3_1_1;
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
  int v_78;
  int v_77_3;
  int v_77_2;
  int v_77_1;
  int v_76;
  int v_75_3;
  int v_75_2;
  int v_75_1;
  int v_74;
  int v_73_3;
  int v_73_2;
  int v_73_1;
  int v_72;
  int v_71_3;
  int v_71_2;
  int v_71_1;
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
  int v_70;
  int v_69_3;
  int v_69_2;
  int v_69_1;
  int v_68;
  int v_67_3;
  int v_67_2;
  int v_67_1;
  int v_66;
  int v_65;
  int v_63_2_0;
  int v_63_3_0_0;
  int v_63_3_0_1;
  int v_63_2_1;
  int v_63_3_1_0;
  int v_63_3_1_1;
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
  int v_64;
  int v_63_3;
  int v_63_2;
  int v_63_1;
  int v_62;
  int v_61_3;
  int v_61_2;
  int v_61_1;
  int v_60;
  int v_59_3;
  int v_59_2;
  int v_59_1;
  int v_58;
  int v_56_2_0;
  int v_56_3_0_0;
  int v_56_3_0_1;
  int v_56_2_1;
  int v_56_3_1_0;
  int v_56_3_1_1;
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
  int v_57;
  int v_56_3;
  int v_56_2;
  int v_56_1;
  int v_55;
  int v_54_3;
  int v_54_2;
  int v_54_1;
  int v_53;
  int v_52_3;
  int v_52_2;
  int v_52_1;
  int v_51;
  int v_49_2_0;
  int v_49_3_0_0;
  int v_49_3_0_1;
  int v_49_2_1;
  int v_49_3_1_0;
  int v_49_3_1_1;
  int v_47_2_0;
  int v_47_3_0_0;
  int v_47_3_0_1;
  int v_47_2_1;
  int v_47_3_1_0;
  int v_47_3_1_1;
  int v_50;
  int v_49_3;
  int v_49_2;
  int v_49_1;
  int v_48;
  int v_47_3;
  int v_47_2;
  int v_47_1;
  int v_46;
  int v_45;
  int v_43_2_0;
  int v_43_3_0_0;
  int v_43_3_0_1;
  int v_43_2_1;
  int v_43_3_1_0;
  int v_43_3_1_1;
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
  int v_44;
  int v_43_3;
  int v_43_2;
  int v_43_1;
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
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
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
  v_96 = !(cp);
  v_97 = (v_96&&l1);
  v_98 = (v_97&&l2);
  a = (v_98&&v);
  v_79 = !(a);
  v_94 = (cp&&l1);
  v_95 = (v_94&&l2);
  b = (v_95&&v);
  v_80 = !(b);
  v_81 = (v_79&&v_80);
  v_91 = !(l1);
  v_90 = !(cp);
  v_92 = (v_90&&v_91);
  v_93 = (v_92&&l2);
  c = (v_93&&v);
  v_82 = !(c);
  v_83 = (v_81&&v_82);
  v_88 = !(l2);
  v_86 = !(l1);
  v_85 = !(cp);
  v_87 = (v_85&&v_86);
  v_89 = (v_87&&v_88);
  d = (v_89&&v);
  v_84 = !(d);
  e = (v_83&&v_84);
  ck_1 = self->v_398;
  ck_2_4 = self->v_399;
  ck_3 = self->v_400;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_45 = (e||a);
        v_46 = (v_45||b);
        if (v_46) {
          v_48 = true;
        } else {
          v_48 = self->pnr;
        };
        if (c) {
          v_50 = true;
        } else {
          v_50 = v_48;
        };
        if (ac) {
          r_St_1_Baixo = true;
        } else {
          r_St_1_Baixo = v_50;
        };
        if (v_46) {
          v_47_1 = false;
        } else {
          v_47_1 = true;
        };
        if (c) {
          v_49_1 = false;
        } else {
          v_49_1 = v_47_1;
        };
        if (ac) {
          s_St_1_Baixo_1 = true;
        } else {
          s_St_1_Baixo_1 = v_49_1;
        };
        if (v_46) {
          v_47_2 = true;
        } else {
          v_47_2 = true;
        };
        if (c) {
          v_49_2 = false;
        } else {
          v_49_2 = v_47_2;
        };
        if (ac) {
          s_St_1_Baixo_2 = true;
        } else {
          s_St_1_Baixo_2 = v_49_2;
        };
        if (v_46) {
          v_47_3 = true;
        } else {
          v_47_3 = true;
        };
        if (c) {
          v_49_3 = false;
        } else {
          v_49_3 = v_47_3;
        };
        if (ac) {
          s_St_1_Baixo_3 = false;
        } else {
          s_St_1_Baixo_3 = v_49_3;
        };
        v_419 = r_St_1_Baixo;
        v_401 = s_St_1_Baixo_1;
        v_402 = s_St_1_Baixo_2;
        v_403 = s_St_1_Baixo_3;
      } else {
        v_37 = !(ac);
        v_38 = (v_37&&d);
        if (v_38) {
          v_40 = true;
          v_39_1 = true;
          v_39_2 = true;
          v_39_3 = true;
        } else {
          v_40 = self->pnr;
          v_39_1 = true;
          v_39_2 = true;
          v_39_3 = false;
        };
        v_35 = !(ac);
        v_36 = (v_35&&c);
        if (v_36) {
          v_42 = true;
          v_41_1 = false;
          v_41_2 = false;
          v_41_3 = false;
        } else {
          v_42 = v_40;
          v_41_1 = v_39_1;
          v_41_2 = v_39_2;
          v_41_3 = v_39_3;
        };
        v_33 = !(ac);
        v_34 = (v_33&&a);
        if (v_34) {
          v_44 = true;
          v_43_1 = false;
          v_43_2 = true;
          v_43_3 = false;
        } else {
          v_44 = v_42;
          v_43_1 = v_41_1;
          v_43_2 = v_41_2;
          v_43_3 = v_41_3;
        };
        v_31 = !(ac);
        v_32 = (v_31&&b);
        if (v_32) {
          r_St_1_Carregando = true;
        } else {
          r_St_1_Carregando = v_44;
        };
        v_419 = r_St_1_Carregando;
        if (v_32) {
          s_St_1_Carregando_1 = true;
        } else {
          s_St_1_Carregando_1 = v_43_1;
        };
        v_401 = s_St_1_Carregando_1;
        if (v_32) {
          s_St_1_Carregando_2 = false;
        } else {
          s_St_1_Carregando_2 = v_43_2;
        };
        v_402 = s_St_1_Carregando_2;
        if (v_32) {
          s_St_1_Carregando_3 = false;
        } else {
          s_St_1_Carregando_3 = v_43_3;
        };
        v_403 = s_St_1_Carregando_3;
      };
      v_413 = v_401;
      v_414 = v_402;
      v_415 = v_403;
      v_421 = v_419;
      if (ck_3_1_1) {
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
        if (v_49_1) {
          v_49_2_1 = v_49_2;
          if (v_49_2_1) {
            v_49_3_1_1 = v_49_3;
          } else {
            v_49_3_1_0 = v_49_3;
          };
        } else {
          v_49_2_0 = v_49_2;
          if (v_49_2_0) {
            v_49_3_0_1 = v_49_3;
          } else {
            v_49_3_0_0 = v_49_3;
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
        v_420 = true;
        v_404 = true;
        v_405 = true;
        v_406 = true;
      } else {
        v_65 = (e||c);
        v_66 = (v_65||d);
        if (v_66) {
          v_68 = true;
        } else {
          v_68 = self->pnr;
        };
        if (a) {
          v_70 = true;
        } else {
          v_70 = v_68;
        };
        if (ac) {
          r_St_1_Cheio = true;
        } else {
          r_St_1_Cheio = v_70;
        };
        v_420 = r_St_1_Cheio;
        if (v_66) {
          v_67_1 = false;
        } else {
          v_67_1 = true;
        };
        if (a) {
          v_69_1 = false;
        } else {
          v_69_1 = v_67_1;
        };
        if (ac) {
          s_St_1_Cheio_1 = true;
        } else {
          s_St_1_Cheio_1 = v_69_1;
        };
        v_404 = s_St_1_Cheio_1;
        if (v_66) {
          v_67_2 = true;
        } else {
          v_67_2 = false;
        };
        if (a) {
          v_69_2 = true;
        } else {
          v_69_2 = v_67_2;
        };
        if (ac) {
          s_St_1_Cheio_2 = true;
        } else {
          s_St_1_Cheio_2 = v_69_2;
        };
        v_405 = s_St_1_Cheio_2;
        if (v_66) {
          v_67_3 = true;
        } else {
          v_67_3 = false;
        };
        if (a) {
          v_69_3 = false;
        } else {
          v_69_3 = v_67_3;
        };
        if (ac) {
          s_St_1_Cheio_3 = false;
        } else {
          s_St_1_Cheio_3 = v_69_3;
        };
        v_406 = s_St_1_Cheio_3;
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
      v_413 = v_404;
      v_414 = v_405;
      v_415 = v_406;
      v_421 = v_420;
    };
    s_1 = v_413;
    s_2 = v_414;
    s_3 = v_415;
    r = v_421;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (d) {
          v_72 = true;
        } else {
          v_72 = self->pnr;
        };
        if (c) {
          v_74 = true;
        } else {
          v_74 = v_72;
        };
        if (a) {
          v_76 = true;
        } else {
          v_76 = v_74;
        };
        if (b) {
          v_78 = true;
        } else {
          v_78 = v_76;
        };
        if (ac) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_78;
        };
        if (d) {
          v_71_1 = true;
        } else {
          v_71_1 = false;
        };
        if (c) {
          v_73_1 = false;
        } else {
          v_73_1 = v_71_1;
        };
        if (a) {
          v_75_1 = false;
        } else {
          v_75_1 = v_73_1;
        };
        if (b) {
          v_77_1 = true;
        } else {
          v_77_1 = v_75_1;
        };
        if (ac) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_77_1;
        };
        if (d) {
          v_71_2 = true;
        } else {
          v_71_2 = true;
        };
        if (c) {
          v_73_2 = false;
        } else {
          v_73_2 = v_71_2;
        };
        if (a) {
          v_75_2 = true;
        } else {
          v_75_2 = v_73_2;
        };
        if (b) {
          v_77_2 = false;
        } else {
          v_77_2 = v_75_2;
        };
        if (ac) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_77_2;
        };
        if (d) {
          v_71_3 = true;
        } else {
          v_71_3 = true;
        };
        if (c) {
          v_73_3 = false;
        } else {
          v_73_3 = v_71_3;
        };
        if (a) {
          v_75_3 = false;
        } else {
          v_75_3 = v_73_3;
        };
        if (b) {
          v_77_3 = false;
        } else {
          v_77_3 = v_75_3;
        };
        if (ac) {
          s_St_1_Erro_3 = false;
        } else {
          s_St_1_Erro_3 = v_77_3;
        };
        v_422 = r_St_1_Erro;
        v_407 = s_St_1_Erro_1;
        v_408 = s_St_1_Erro_2;
        v_409 = s_St_1_Erro_3;
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
        if (v_75_1) {
          v_75_2_1 = v_75_2;
          if (v_75_2_1) {
            v_75_3_1_1 = v_75_3;
          } else {
            v_75_3_1_0 = v_75_3;
          };
        } else {
          v_75_2_0 = v_75_2;
          if (v_75_2_0) {
            v_75_3_0_1 = v_75_3;
          } else {
            v_75_3_0_0 = v_75_3;
          };
        };
        if (v_77_1) {
          v_77_2_1 = v_77_2;
          if (v_77_2_1) {
            v_77_3_1_1 = v_77_3;
          } else {
            v_77_3_1_0 = v_77_3;
          };
        } else {
          v_77_2_0 = v_77_2;
          if (v_77_2_0) {
            v_77_3_0_1 = v_77_3;
          } else {
            v_77_3_0_0 = v_77_3;
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
        v_58 = (e||d);
        if (v_58) {
          v_60 = true;
        } else {
          v_60 = self->pnr;
        };
        if (c) {
          v_62 = true;
        } else {
          v_62 = v_60;
        };
        if (b) {
          v_64 = true;
        } else {
          v_64 = v_62;
        };
        if (ac) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_64;
        };
        v_422 = r_St_1_Limiar1;
        if (v_58) {
          v_59_1 = false;
        } else {
          v_59_1 = false;
        };
        if (c) {
          v_61_1 = false;
        } else {
          v_61_1 = v_59_1;
        };
        if (b) {
          v_63_1 = true;
        } else {
          v_63_1 = v_61_1;
        };
        if (ac) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_63_1;
        };
        v_407 = s_St_1_Limiar1_1;
        if (v_58) {
          v_59_2 = true;
        } else {
          v_59_2 = true;
        };
        if (c) {
          v_61_2 = false;
        } else {
          v_61_2 = v_59_2;
        };
        if (b) {
          v_63_2 = false;
        } else {
          v_63_2 = v_61_2;
        };
        if (ac) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_63_2;
        };
        v_408 = s_St_1_Limiar1_2;
        if (v_58) {
          v_59_3 = true;
        } else {
          v_59_3 = false;
        };
        if (c) {
          v_61_3 = false;
        } else {
          v_61_3 = v_59_3;
        };
        if (b) {
          v_63_3 = false;
        } else {
          v_63_3 = v_61_3;
        };
        if (ac) {
          s_St_1_Limiar1_3 = false;
        } else {
          s_St_1_Limiar1_3 = v_63_3;
        };
        v_409 = s_St_1_Limiar1_3;
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
      v_416 = v_407;
      v_417 = v_408;
      v_418 = v_409;
      v_424 = v_422;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_423 = true;
        v_410 = true;
        v_411 = true;
        v_412 = true;
      } else {
        v_51 = (e||b);
        if (v_51) {
          v_53 = true;
        } else {
          v_53 = self->pnr;
        };
        if (d) {
          v_55 = true;
        } else {
          v_55 = v_53;
        };
        if (a) {
          v_57 = true;
        } else {
          v_57 = v_55;
        };
        if (ac) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_57;
        };
        v_423 = r_St_1_Limiar2;
        if (v_51) {
          v_52_1 = false;
        } else {
          v_52_1 = false;
        };
        if (d) {
          v_54_1 = true;
        } else {
          v_54_1 = v_52_1;
        };
        if (a) {
          v_56_1 = false;
        } else {
          v_56_1 = v_54_1;
        };
        if (ac) {
          s_St_1_Limiar2_1 = true;
        } else {
          s_St_1_Limiar2_1 = v_56_1;
        };
        v_410 = s_St_1_Limiar2_1;
        if (v_51) {
          v_52_2 = true;
        } else {
          v_52_2 = false;
        };
        if (d) {
          v_54_2 = true;
        } else {
          v_54_2 = v_52_2;
        };
        if (a) {
          v_56_2 = true;
        } else {
          v_56_2 = v_54_2;
        };
        if (ac) {
          s_St_1_Limiar2_2 = true;
        } else {
          s_St_1_Limiar2_2 = v_56_2;
        };
        v_411 = s_St_1_Limiar2_2;
        if (v_51) {
          v_52_3 = true;
        } else {
          v_52_3 = false;
        };
        if (d) {
          v_54_3 = true;
        } else {
          v_54_3 = v_52_3;
        };
        if (a) {
          v_56_3 = false;
        } else {
          v_56_3 = v_54_3;
        };
        if (ac) {
          s_St_1_Limiar2_3 = false;
        } else {
          s_St_1_Limiar2_3 = v_56_3;
        };
        v_412 = s_St_1_Limiar2_3;
      };
      v_416 = v_410;
      v_417 = v_411;
      v_418 = v_412;
      v_424 = v_423;
    };
    s_1 = v_416;
    s_2 = v_417;
    s_3 = v_418;
    r = v_424;
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
        v_356 = estado_bat_St_1_Baixo_1;
        v_357 = estado_bat_St_1_Baixo_2;
        v_358 = estado_bat_St_1_Baixo_3;
        v_392 = nr_St_1_Baixo;
        v_374 = ns_St_1_Baixo_1;
        v_375 = ns_St_1_Baixo_2;
        v_376 = ns_St_1_Baixo_3;
      } else {
        estado_bat_St_1_Carregando_1 = true;
        v_356 = estado_bat_St_1_Carregando_1;
        estado_bat_St_1_Carregando_2 = true;
        v_357 = estado_bat_St_1_Carregando_2;
        estado_bat_St_1_Carregando_3 = true;
        v_358 = estado_bat_St_1_Carregando_3;
        nr_St_1_Carregando = false;
        v_392 = nr_St_1_Carregando;
        ns_St_1_Carregando_1 = true;
        v_374 = ns_St_1_Carregando_1;
        ns_St_1_Carregando_2 = true;
        v_375 = ns_St_1_Carregando_2;
        ns_St_1_Carregando_3 = false;
        v_376 = ns_St_1_Carregando_3;
      };
      v_368 = v_356;
      v_369 = v_357;
      v_370 = v_358;
      v_386 = v_374;
      v_387 = v_375;
      v_388 = v_376;
      v_394 = v_392;
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
        v_359 = true;
        v_360 = true;
        v_361 = true;
        v_393 = true;
        v_377 = true;
        v_378 = true;
        v_379 = true;
      } else {
        estado_bat_St_1_Cheio_1 = false;
        v_359 = estado_bat_St_1_Cheio_1;
        estado_bat_St_1_Cheio_2 = true;
        v_360 = estado_bat_St_1_Cheio_2;
        estado_bat_St_1_Cheio_3 = false;
        v_361 = estado_bat_St_1_Cheio_3;
        nr_St_1_Cheio = false;
        v_393 = nr_St_1_Cheio;
        ns_St_1_Cheio_1 = true;
        v_377 = ns_St_1_Cheio_1;
        ns_St_1_Cheio_2 = false;
        v_378 = ns_St_1_Cheio_2;
        ns_St_1_Cheio_3 = false;
        v_379 = ns_St_1_Cheio_3;
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
      v_368 = v_359;
      v_369 = v_360;
      v_370 = v_361;
      v_386 = v_377;
      v_387 = v_378;
      v_388 = v_379;
      v_394 = v_393;
    };
    _out->estado_bat_1 = v_368;
    _out->estado_bat_2 = v_369;
    _out->estado_bat_3 = v_370;
    ns_1 = v_386;
    ns_2 = v_387;
    ns_3 = v_388;
    nr = v_394;
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
        v_362 = estado_bat_St_1_Erro_1;
        v_363 = estado_bat_St_1_Erro_2;
        v_364 = estado_bat_St_1_Erro_3;
        v_395 = nr_St_1_Erro;
        v_380 = ns_St_1_Erro_1;
        v_381 = ns_St_1_Erro_2;
        v_382 = ns_St_1_Erro_3;
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
        v_362 = estado_bat_St_1_Limiar1_1;
        estado_bat_St_1_Limiar1_2 = true;
        v_363 = estado_bat_St_1_Limiar1_2;
        estado_bat_St_1_Limiar1_3 = true;
        v_364 = estado_bat_St_1_Limiar1_3;
        nr_St_1_Limiar1 = false;
        v_395 = nr_St_1_Limiar1;
        ns_St_1_Limiar1_1 = false;
        v_380 = ns_St_1_Limiar1_1;
        ns_St_1_Limiar1_2 = true;
        v_381 = ns_St_1_Limiar1_2;
        ns_St_1_Limiar1_3 = false;
        v_382 = ns_St_1_Limiar1_3;
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
      v_371 = v_362;
      v_372 = v_363;
      v_373 = v_364;
      v_389 = v_380;
      v_390 = v_381;
      v_391 = v_382;
      v_397 = v_395;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_365 = true;
        v_366 = true;
        v_367 = true;
        v_396 = true;
        v_383 = true;
        v_384 = true;
        v_385 = true;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_365 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = false;
        v_366 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_367 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_396 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_383 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_384 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_385 = ns_St_1_Limiar2_3;
      };
      v_371 = v_365;
      v_372 = v_366;
      v_373 = v_367;
      v_389 = v_383;
      v_390 = v_384;
      v_391 = v_385;
      v_397 = v_396;
    };
    _out->estado_bat_1 = v_371;
    _out->estado_bat_2 = v_372;
    _out->estado_bat_3 = v_373;
    ns_1 = v_389;
    ns_2 = v_390;
    ns_3 = v_391;
    nr = v_397;
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
  self->v_398 = ns_1;
  self->v_399 = ns_2;
  self->v_400 = ns_3;;
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
  self->v_455 = true;
  self->v_456 = true;
  self->v_457 = false;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int v_105_2_0;
  int v_105_3_0_0;
  int v_105_3_0_1;
  int v_105_2_1;
  int v_105_3_1_0;
  int v_105_3_1_1;
  int v_103_2_0;
  int v_103_3_0_0;
  int v_103_3_0_1;
  int v_103_2_1;
  int v_103_3_1_0;
  int v_103_3_1_1;
  int v_106;
  int v_105_3;
  int v_105_2;
  int v_105_1;
  int v_104;
  int v_103_3;
  int v_103_2;
  int v_103_1;
  int v_102;
  int v_100_2_0;
  int v_100_3_0_0;
  int v_100_3_0_1;
  int v_100_2_1;
  int v_100_3_1_0;
  int v_100_3_1_1;
  int v_101;
  int v_100_3;
  int v_100_2;
  int v_100_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_99;
  int v_3;
  int v_2;
  int v_1;
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
  ck_1 = self->v_455;
  ck_2 = self->v_456;
  ck_3 = self->v_457;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (t) {
          v_108 = true;
        } else {
          v_108 = self->pnr;
        };
        if (c) {
          r_St_4_Boot = true;
        } else {
          r_St_4_Boot = v_108;
        };
        v_473 = r_St_4_Boot;
        if (t) {
          v_107_1 = false;
        } else {
          v_107_1 = true;
        };
        if (c) {
          s_St_4_Boot_1 = true;
        } else {
          s_St_4_Boot_1 = v_107_1;
        };
        v_458 = s_St_4_Boot_1;
        if (t) {
          v_107_2 = false;
        } else {
          v_107_2 = true;
        };
        if (c) {
          s_St_4_Boot_2 = true;
        } else {
          s_St_4_Boot_2 = v_107_2;
        };
        v_459 = s_St_4_Boot_2;
        if (t) {
          v_107_3 = false;
        } else {
          v_107_3 = true;
        };
        if (c) {
          s_St_4_Boot_3 = false;
        } else {
          s_St_4_Boot_3 = v_107_3;
        };
        v_460 = s_St_4_Boot_3;
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
        v_473 = r_St_4_Off;
        v_458 = s_St_4_Off_1;
        v_459 = s_St_4_Off_2;
        v_460 = s_St_4_Off_3;
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
      v_467 = v_458;
      v_468 = v_459;
      v_469 = v_460;
      v_475 = v_473;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_474 = true;
        v_461 = true;
        v_462 = true;
        v_463 = true;
      } else {
        if (t) {
          v_101 = true;
        } else {
          v_101 = self->pnr;
        };
        if (c) {
          r_St_4_Online = true;
        } else {
          r_St_4_Online = v_101;
        };
        v_474 = r_St_4_Online;
        if (t) {
          v_100_1 = false;
        } else {
          v_100_1 = true;
        };
        if (c) {
          s_St_4_Online_1 = true;
        } else {
          s_St_4_Online_1 = v_100_1;
        };
        v_461 = s_St_4_Online_1;
        if (t) {
          v_100_2 = false;
        } else {
          v_100_2 = false;
        };
        if (c) {
          s_St_4_Online_2 = true;
        } else {
          s_St_4_Online_2 = v_100_2;
        };
        v_462 = s_St_4_Online_2;
        if (t) {
          v_100_3 = false;
        } else {
          v_100_3 = false;
        };
        if (c) {
          s_St_4_Online_3 = false;
        } else {
          s_St_4_Online_3 = v_100_3;
        };
        v_463 = s_St_4_Online_3;
      };
      v_467 = v_461;
      v_468 = v_462;
      v_469 = v_463;
      v_475 = v_474;
      if (!(ck_3_1_0)) {
        if (v_100_1) {
          v_100_2_1 = v_100_2;
          if (v_100_2_1) {
            v_100_3_1_1 = v_100_3;
          } else {
            v_100_3_1_0 = v_100_3;
          };
        } else {
          v_100_2_0 = v_100_2;
          if (v_100_2_0) {
            v_100_3_0_1 = v_100_3;
          } else {
            v_100_3_0_0 = v_100_3;
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
    s_1 = v_467;
    s_2 = v_468;
    s_3 = v_469;
    r = v_475;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_470 = true;
      v_471 = true;
      v_472 = true;
      v_477 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (t) {
          v_99 = true;
        } else {
          v_99 = self->pnr;
        };
        if (c) {
          r_St_4_Sleep = true;
        } else {
          r_St_4_Sleep = v_99;
        };
        v_476 = r_St_4_Sleep;
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
        v_464 = s_St_4_Sleep_1;
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
        v_465 = s_St_4_Sleep_2;
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
        v_466 = s_St_4_Sleep_3;
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
          v_104 = true;
          v_103_1 = true;
          v_103_2 = false;
          v_103_3 = false;
        } else {
          v_104 = self->pnr;
          v_103_1 = false;
          v_103_2 = false;
          v_103_3 = false;
        };
        v_102 = !(o);
        if (v_102) {
          v_106 = true;
        } else {
          v_106 = v_104;
        };
        if (c) {
          r_St_4_Teste = true;
        } else {
          r_St_4_Teste = v_106;
        };
        if (v_102) {
          v_105_1 = false;
        } else {
          v_105_1 = v_103_1;
        };
        if (c) {
          s_St_4_Teste_1 = true;
        } else {
          s_St_4_Teste_1 = v_105_1;
        };
        if (v_102) {
          v_105_2 = false;
        } else {
          v_105_2 = v_103_2;
        };
        if (c) {
          s_St_4_Teste_2 = true;
        } else {
          s_St_4_Teste_2 = v_105_2;
        };
        if (v_102) {
          v_105_3 = true;
        } else {
          v_105_3 = v_103_3;
        };
        if (c) {
          s_St_4_Teste_3 = false;
        } else {
          s_St_4_Teste_3 = v_105_3;
        };
        v_476 = r_St_4_Teste;
        v_464 = s_St_4_Teste_1;
        v_465 = s_St_4_Teste_2;
        v_466 = s_St_4_Teste_3;
        if (v_103_1) {
          v_103_2_1 = v_103_2;
          if (v_103_2_1) {
            v_103_3_1_1 = v_103_3;
          } else {
            v_103_3_1_0 = v_103_3;
          };
        } else {
          v_103_2_0 = v_103_2;
          if (v_103_2_0) {
            v_103_3_0_1 = v_103_3;
          } else {
            v_103_3_0_0 = v_103_3;
          };
        };
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
      };
      v_470 = v_464;
      v_471 = v_465;
      v_472 = v_466;
      v_477 = v_476;
    };
    s_1 = v_470;
    s_2 = v_471;
    s_3 = v_472;
    r = v_477;
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
        v_430 = estado_St_4_Boot;
        atuador_St_4_Boot = true;
        v_425 = atuador_St_4_Boot;
        nr_St_4_Boot = false;
        v_450 = nr_St_4_Boot;
        ns_St_4_Boot_1 = true;
        v_435 = ns_St_4_Boot_1;
        ns_St_4_Boot_2 = true;
        v_436 = ns_St_4_Boot_2;
        ns_St_4_Boot_3 = true;
        v_437 = ns_St_4_Boot_3;
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
        v_430 = estado_St_4_Off;
        v_425 = atuador_St_4_Off;
        v_450 = nr_St_4_Off;
        v_435 = ns_St_4_Off_1;
        v_436 = ns_St_4_Off_2;
        v_437 = ns_St_4_Off_3;
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
      v_427 = v_425;
      v_432 = v_430;
      v_444 = v_435;
      v_445 = v_436;
      v_446 = v_437;
      v_452 = v_450;
    } else {
      ck_5_3_1_0 = ck_5_3;
      if (ck_5_3_1_0) {
        v_431 = 0;
        v_426 = true;
        v_451 = true;
        v_438 = true;
        v_439 = true;
        v_440 = true;
      } else {
        estado_St_4_Online = 4;
        v_431 = estado_St_4_Online;
        atuador_St_4_Online = true;
        v_426 = atuador_St_4_Online;
        nr_St_4_Online = false;
        v_451 = nr_St_4_Online;
        ns_St_4_Online_1 = true;
        v_438 = ns_St_4_Online_1;
        ns_St_4_Online_2 = false;
        v_439 = ns_St_4_Online_2;
        ns_St_4_Online_3 = false;
        v_440 = ns_St_4_Online_3;
      };
      v_427 = v_426;
      v_432 = v_431;
      v_444 = v_438;
      v_445 = v_439;
      v_446 = v_440;
      v_452 = v_451;
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
    _out->atuador = v_427;
    _out->estado = v_432;
    ns_1 = v_444;
    ns_2 = v_445;
    ns_3 = v_446;
    nr = v_452;
  } else {
    ck_5_2_0 = ck_5_2;
    if (ck_5_2_0) {
      ck_5_3_0_1 = ck_5_3;
      v_429 = true;
      v_434 = 0;
      v_447 = true;
      v_448 = true;
      v_449 = true;
      v_454 = true;
    } else {
      ck_5_3_0_0 = ck_5_3;
      if (ck_5_3_0_0) {
        estado_St_4_Sleep = 1;
        v_433 = estado_St_4_Sleep;
        atuador_St_4_Sleep = false;
        v_428 = atuador_St_4_Sleep;
        nr_St_4_Sleep = false;
        v_453 = nr_St_4_Sleep;
        ns_St_4_Sleep_1 = false;
        v_441 = ns_St_4_Sleep_1;
        ns_St_4_Sleep_2 = false;
        v_442 = ns_St_4_Sleep_2;
        ns_St_4_Sleep_3 = true;
        v_443 = ns_St_4_Sleep_3;
      } else {
        estado_St_4_Teste = 3;
        atuador_St_4_Teste = true;
        nr_St_4_Teste = false;
        ns_St_4_Teste_1 = false;
        ns_St_4_Teste_2 = false;
        ns_St_4_Teste_3 = false;
        v_433 = estado_St_4_Teste;
        v_428 = atuador_St_4_Teste;
        v_453 = nr_St_4_Teste;
        v_441 = ns_St_4_Teste_1;
        v_442 = ns_St_4_Teste_2;
        v_443 = ns_St_4_Teste_3;
      };
      v_429 = v_428;
      v_434 = v_433;
      v_447 = v_441;
      v_448 = v_442;
      v_449 = v_443;
      v_454 = v_453;
    };
    _out->atuador = v_429;
    _out->estado = v_434;
    ns_1 = v_447;
    ns_2 = v_448;
    ns_3 = v_449;
    nr = v_454;
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
  self->v_455 = ns_1;
  self->v_456 = ns_2;
  self->v_457 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_520 = false;
  self->v_521 = true;
  self->v_522 = true;
  self->pnr_1 = false;
  self->ck_12_1 = true;
  self->pnr_2 = false;
  self->v_572 = true;
  self->v_573 = true;
  self->v_574 = false;
  self->pnr_3 = false;
  self->v_625 = true;
  self->v_626 = true;
  self->v_627 = false;
  self->pnr_4 = false;
  self->ck_6_1 = true;
}

void Ups_controlador__contrato_step(int adm_off, int ac, int cb, int l1b,
                                    int l2b, int vb, int td, int tm, int om,
                                    int ts, int swa, int swr1, int swr3,
                                    int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int v_286_2_0;
  int v_286_3_0_0;
  int v_286_3_0_1;
  int v_286_2_1;
  int v_286_3_1_0;
  int v_286_3_1_1;
  int v_284_2_0;
  int v_284_3_0_0;
  int v_284_3_0_1;
  int v_284_2_1;
  int v_284_3_1_0;
  int v_284_3_1_1;
  int v_282_2_0;
  int v_282_3_0_0;
  int v_282_3_0_1;
  int v_282_2_1;
  int v_282_3_1_0;
  int v_282_3_1_1;
  int v_280_2_0;
  int v_280_3_0_0;
  int v_280_3_0_1;
  int v_280_2_1;
  int v_280_3_1_0;
  int v_280_3_1_1;
  int v_287;
  int v_286_3;
  int v_286_2;
  int v_286_1;
  int v_285;
  int v_284_3;
  int v_284_2;
  int v_284_1;
  int v_283;
  int v_282_3;
  int v_282_2;
  int v_282_1;
  int v_281;
  int v_280_3;
  int v_280_2;
  int v_280_1;
  int v_278_2_0;
  int v_278_3_0_0;
  int v_278_3_0_1;
  int v_278_2_1;
  int v_278_3_1_0;
  int v_278_3_1_1;
  int v_276_2_0;
  int v_276_3_0_0;
  int v_276_3_0_1;
  int v_276_2_1;
  int v_276_3_1_0;
  int v_276_3_1_1;
  int v_279;
  int v_278_3;
  int v_278_2;
  int v_278_1;
  int v_277;
  int v_276_3;
  int v_276_2;
  int v_276_1;
  int v_275;
  int v_274;
  int v_272_2_0;
  int v_272_3_0_0;
  int v_272_3_0_1;
  int v_272_2_1;
  int v_272_3_1_0;
  int v_272_3_1_1;
  int v_270_2_0;
  int v_270_3_0_0;
  int v_270_3_0_1;
  int v_270_2_1;
  int v_270_3_1_0;
  int v_270_3_1_1;
  int v_268_2_0;
  int v_268_3_0_0;
  int v_268_3_0_1;
  int v_268_2_1;
  int v_268_3_1_0;
  int v_268_3_1_1;
  int v_273;
  int v_272_3;
  int v_272_2;
  int v_272_1;
  int v_271;
  int v_270_3;
  int v_270_2;
  int v_270_1;
  int v_269;
  int v_268_3;
  int v_268_2;
  int v_268_1;
  int v_267;
  int v_265_2_0;
  int v_265_3_0_0;
  int v_265_3_0_1;
  int v_265_2_1;
  int v_265_3_1_0;
  int v_265_3_1_1;
  int v_263_2_0;
  int v_263_3_0_0;
  int v_263_3_0_1;
  int v_263_2_1;
  int v_263_3_1_0;
  int v_263_3_1_1;
  int v_261_2_0;
  int v_261_3_0_0;
  int v_261_3_0_1;
  int v_261_2_1;
  int v_261_3_1_0;
  int v_261_3_1_1;
  int v_266;
  int v_265_3;
  int v_265_2;
  int v_265_1;
  int v_264;
  int v_263_3;
  int v_263_2;
  int v_263_1;
  int v_262;
  int v_261_3;
  int v_261_2;
  int v_261_1;
  int v_260;
  int v_258_2_0;
  int v_258_3_0_0;
  int v_258_3_0_1;
  int v_258_2_1;
  int v_258_3_1_0;
  int v_258_3_1_1;
  int v_256_2_0;
  int v_256_3_0_0;
  int v_256_3_0_1;
  int v_256_2_1;
  int v_256_3_1_0;
  int v_256_3_1_1;
  int v_259;
  int v_258_3;
  int v_258_2;
  int v_258_1;
  int v_257;
  int v_256_3;
  int v_256_2;
  int v_256_1;
  int v_255;
  int v_254;
  int v_252_2_0;
  int v_252_3_0_0;
  int v_252_3_0_1;
  int v_252_2_1;
  int v_252_3_1_0;
  int v_252_3_1_1;
  int v_250_2_0;
  int v_250_3_0_0;
  int v_250_3_0_1;
  int v_250_2_1;
  int v_250_3_1_0;
  int v_250_3_1_1;
  int v_248_2_0;
  int v_248_3_0_0;
  int v_248_3_0_1;
  int v_248_2_1;
  int v_248_3_1_0;
  int v_248_3_1_1;
  int v_253;
  int v_252_3;
  int v_252_2;
  int v_252_1;
  int v_251;
  int v_250_3;
  int v_250_2;
  int v_250_1;
  int v_249;
  int v_248_3;
  int v_248_2;
  int v_248_1;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
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
  int v_230_2_0;
  int v_230_3_0_0;
  int v_230_3_0_1;
  int v_230_2_1;
  int v_230_3_1_0;
  int v_230_3_1_1;
  int v_228_2_0;
  int v_228_3_0_0;
  int v_228_3_0_1;
  int v_228_2_1;
  int v_228_3_1_0;
  int v_228_3_1_1;
  int v_231;
  int v_230_3;
  int v_230_2;
  int v_230_1;
  int v_229;
  int v_228_3;
  int v_228_2;
  int v_228_1;
  int v_227;
  int v_225_2_0;
  int v_225_3_0_0;
  int v_225_3_0_1;
  int v_225_2_1;
  int v_225_3_1_0;
  int v_225_3_1_1;
  int v_223_2_0;
  int v_223_3_0_0;
  int v_223_3_0_1;
  int v_223_2_1;
  int v_223_3_1_0;
  int v_223_3_1_1;
  int v_221_2_0;
  int v_221_3_0_0;
  int v_221_3_0_1;
  int v_221_2_1;
  int v_221_3_1_0;
  int v_221_3_1_1;
  int v_226;
  int v_225_3;
  int v_225_2;
  int v_225_1;
  int v_224;
  int v_223_3;
  int v_223_2;
  int v_223_1;
  int v_222;
  int v_221_3;
  int v_221_2;
  int v_221_1;
  int v_219_2_0;
  int v_219_3_0_0;
  int v_219_3_0_1;
  int v_219_2_1;
  int v_219_3_1_0;
  int v_219_3_1_1;
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
  int v_220;
  int v_219_3;
  int v_219_2;
  int v_219_1;
  int v_218;
  int v_217_3;
  int v_217_2;
  int v_217_1;
  int v_216;
  int v_215_3;
  int v_215_2;
  int v_215_1;
  int v_213_2_0;
  int v_213_3_0_0;
  int v_213_3_0_1;
  int v_213_2_1;
  int v_213_3_1_0;
  int v_213_3_1_1;
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
  int v_214;
  int v_213_3;
  int v_213_2;
  int v_213_1;
  int v_212;
  int v_211_3;
  int v_211_2;
  int v_211_1;
  int v_210;
  int v_209_3;
  int v_209_2;
  int v_209_1;
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
  int v_207_2_0;
  int v_207_3_0_0;
  int v_207_3_0_1;
  int v_207_2_1;
  int v_207_3_1_0;
  int v_207_3_1_1;
  int v_208;
  int v_207_3;
  int v_207_2;
  int v_207_1;
  int v_205_2_0;
  int v_205_3_0_0;
  int v_205_3_0_1;
  int v_205_2_1;
  int v_205_3_1_0;
  int v_205_3_1_1;
  int v_203_2_0;
  int v_203_3_0_0;
  int v_203_3_0_1;
  int v_203_2_1;
  int v_203_3_1_0;
  int v_203_3_1_1;
  int v_206;
  int v_205_3;
  int v_205_2;
  int v_205_1;
  int v_204;
  int v_203_3;
  int v_203_2;
  int v_203_1;
  int v_202;
  int v_200_2_0;
  int v_200_3_0_0;
  int v_200_3_0_1;
  int v_200_2_1;
  int v_200_3_1_0;
  int v_200_3_1_1;
  int v_201;
  int v_200_3;
  int v_200_2;
  int v_200_1;
  int v_198_2_0;
  int v_198_3_0_0;
  int v_198_3_0_1;
  int v_198_2_1;
  int v_198_3_1_0;
  int v_198_3_1_1;
  int v_199;
  int v_198_3;
  int v_198_2;
  int v_198_1;
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
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
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
  int emerg_off;
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
  int v_109;
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
  v_305 = !(cp_1);
  v_299 = !(cp_1);
  v_294 = !(cp_1);
  l1 = l1b;
  v_306 = (v_305&&l1);
  v_303 = (cp_1&&l1);
  v_300 = !(l1);
  v_301 = (v_299&&v_300);
  v_295 = !(l1);
  v_296 = (v_294&&v_295);
  l2 = l2b;
  v_307 = (v_306&&l2);
  v_304 = (v_303&&l2);
  v_302 = (v_301&&l2);
  v_297 = !(l2);
  v_298 = (v_296&&v_297);
  v = vb;
  a_1 = (v_307&&v);
  v_288 = !(a_1);
  b = (v_304&&v);
  v_289 = !(b);
  v_290 = (v_288&&v_289);
  c_1 = (v_302&&v);
  v_291 = !(c_1);
  v_292 = (v_290&&v_291);
  d = (v_298&&v);
  v_293 = !(d);
  e = (v_292&&v_293);
  ck_14_1 = self->v_520;
  ck_14_2 = self->v_521;
  ck_14_3 = self->v_522;
  t_1 = td;
  emerg_off = adm_off;
  ts_1 = ts;
  s_atx = swa;
  s1 = swr1;
  s3 = swr3;
  s4 = swr4;
  ck_10_1 = self->v_572;
  ck_10_2 = self->v_573;
  ck_10_3 = self->v_574;
  t = tm;
  o = om;
  ck_8_1 = self->v_625;
  ck_8_2 = self->v_626;
  ck_8_3 = self->v_627;
  Contrato_controller__contrato_controller_step(adm_off, ac, cb, l1b, l2b,
                                                vb, td, tm, om, ts, swa,
                                                swr1, swr3, swr4,
                                                self->ck_6_1, self->pnr_4,
                                                self->v_627, self->v_626,
                                                self->v_625, self->pnr_3,
                                                self->v_574, self->v_573,
                                                self->v_572, self->pnr_2,
                                                self->ck_12_1, self->pnr_1,
                                                self->v_522, self->v_521,
                                                self->v_520, self->pnr, true,
                                                true, true, true, true, true,
                                                true, true, true, true, true,
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
  v_239 = !(c_atx);
  off_atx = co;
  cr1_1 = cr1;
  v_237 = !(cr1_1);
  cr3_1 = cr3;
  v_235 = !(cr3_1);
  cr4_1 = cr4;
  v_233 = !(cr4_1);
  ba_1 = ba;
  v_238 = (ba_1&&s_atx);
  a = (v_238||v_239);
  b1 = br1;
  v_236 = (b1&&s1);
  r1 = (v_236||v_237);
  b3 = br3;
  v_234 = (b3&&s3);
  r3 = (v_234||v_235);
  b4 = br4;
  v_232 = (b4&&s4);
  r4 = (v_232||v_233);
  c = cm;
  ca_1 = cp;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
      if (ck_14_3_1_1) {
        v_254 = (e||a_1);
        v_255 = (v_254||b);
        if (v_255) {
          v_257 = true;
        } else {
          v_257 = self->pnr;
        };
        if (c_1) {
          v_259 = true;
        } else {
          v_259 = v_257;
        };
        if (ac_1) {
          r_St_5_Baixo = true;
        } else {
          r_St_5_Baixo = v_259;
        };
        if (v_255) {
          v_256_1 = false;
        } else {
          v_256_1 = true;
        };
        if (c_1) {
          v_258_1 = false;
        } else {
          v_258_1 = v_256_1;
        };
        if (ac_1) {
          s_St_5_Baixo_1 = true;
        } else {
          s_St_5_Baixo_1 = v_258_1;
        };
        if (v_255) {
          v_256_2 = true;
        } else {
          v_256_2 = true;
        };
        if (c_1) {
          v_258_2 = false;
        } else {
          v_258_2 = v_256_2;
        };
        if (ac_1) {
          s_St_5_Baixo_2 = true;
        } else {
          s_St_5_Baixo_2 = v_258_2;
        };
        if (v_255) {
          v_256_3 = true;
        } else {
          v_256_3 = true;
        };
        if (c_1) {
          v_258_3 = false;
        } else {
          v_258_3 = v_256_3;
        };
        if (ac_1) {
          s_St_5_Baixo_3 = false;
        } else {
          s_St_5_Baixo_3 = v_258_3;
        };
        v_541 = r_St_5_Baixo;
        v_523 = s_St_5_Baixo_1;
        v_524 = s_St_5_Baixo_2;
        v_525 = s_St_5_Baixo_3;
      } else {
        v_246 = !(ac_1);
        v_247 = (v_246&&d);
        if (v_247) {
          v_249 = true;
          v_248_1 = true;
          v_248_2 = true;
          v_248_3 = true;
        } else {
          v_249 = self->pnr;
          v_248_1 = true;
          v_248_2 = true;
          v_248_3 = false;
        };
        v_244 = !(ac_1);
        v_245 = (v_244&&c_1);
        if (v_245) {
          v_251 = true;
          v_250_1 = false;
          v_250_2 = false;
          v_250_3 = false;
        } else {
          v_251 = v_249;
          v_250_1 = v_248_1;
          v_250_2 = v_248_2;
          v_250_3 = v_248_3;
        };
        v_242 = !(ac_1);
        v_243 = (v_242&&a_1);
        if (v_243) {
          v_253 = true;
          v_252_1 = false;
          v_252_2 = true;
          v_252_3 = false;
        } else {
          v_253 = v_251;
          v_252_1 = v_250_1;
          v_252_2 = v_250_2;
          v_252_3 = v_250_3;
        };
        v_240 = !(ac_1);
        v_241 = (v_240&&b);
        if (v_241) {
          r_St_5_Carregando = true;
        } else {
          r_St_5_Carregando = v_253;
        };
        v_541 = r_St_5_Carregando;
        if (v_241) {
          s_St_5_Carregando_1 = true;
        } else {
          s_St_5_Carregando_1 = v_252_1;
        };
        v_523 = s_St_5_Carregando_1;
        if (v_241) {
          s_St_5_Carregando_2 = false;
        } else {
          s_St_5_Carregando_2 = v_252_2;
        };
        v_524 = s_St_5_Carregando_2;
        if (v_241) {
          s_St_5_Carregando_3 = false;
        } else {
          s_St_5_Carregando_3 = v_252_3;
        };
        v_525 = s_St_5_Carregando_3;
      };
      v_535 = v_523;
      v_536 = v_524;
      v_537 = v_525;
      v_543 = v_541;
      if (ck_14_3_1_1) {
        if (v_256_1) {
          v_256_2_1 = v_256_2;
          if (v_256_2_1) {
            v_256_3_1_1 = v_256_3;
          } else {
            v_256_3_1_0 = v_256_3;
          };
        } else {
          v_256_2_0 = v_256_2;
          if (v_256_2_0) {
            v_256_3_0_1 = v_256_3;
          } else {
            v_256_3_0_0 = v_256_3;
          };
        };
        if (v_258_1) {
          v_258_2_1 = v_258_2;
          if (v_258_2_1) {
            v_258_3_1_1 = v_258_3;
          } else {
            v_258_3_1_0 = v_258_3;
          };
        } else {
          v_258_2_0 = v_258_2;
          if (v_258_2_0) {
            v_258_3_0_1 = v_258_3;
          } else {
            v_258_3_0_0 = v_258_3;
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
        if (v_248_1) {
          v_248_2_1 = v_248_2;
          if (v_248_2_1) {
            v_248_3_1_1 = v_248_3;
          } else {
            v_248_3_1_0 = v_248_3;
          };
        } else {
          v_248_2_0 = v_248_2;
          if (v_248_2_0) {
            v_248_3_0_1 = v_248_3;
          } else {
            v_248_3_0_0 = v_248_3;
          };
        };
        if (v_250_1) {
          v_250_2_1 = v_250_2;
          if (v_250_2_1) {
            v_250_3_1_1 = v_250_3;
          } else {
            v_250_3_1_0 = v_250_3;
          };
        } else {
          v_250_2_0 = v_250_2;
          if (v_250_2_0) {
            v_250_3_0_1 = v_250_3;
          } else {
            v_250_3_0_0 = v_250_3;
          };
        };
        if (v_252_1) {
          v_252_2_1 = v_252_2;
          if (v_252_2_1) {
            v_252_3_1_1 = v_252_3;
          } else {
            v_252_3_1_0 = v_252_3;
          };
        } else {
          v_252_2_0 = v_252_2;
          if (v_252_2_0) {
            v_252_3_0_1 = v_252_3;
          } else {
            v_252_3_0_0 = v_252_3;
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
        v_542 = true;
        v_526 = true;
        v_527 = true;
        v_528 = true;
      } else {
        v_274 = (e||c_1);
        v_275 = (v_274||d);
        if (v_275) {
          v_277 = true;
        } else {
          v_277 = self->pnr;
        };
        if (a_1) {
          v_279 = true;
        } else {
          v_279 = v_277;
        };
        if (ac_1) {
          r_St_5_Cheio = true;
        } else {
          r_St_5_Cheio = v_279;
        };
        v_542 = r_St_5_Cheio;
        if (v_275) {
          v_276_1 = false;
        } else {
          v_276_1 = true;
        };
        if (a_1) {
          v_278_1 = false;
        } else {
          v_278_1 = v_276_1;
        };
        if (ac_1) {
          s_St_5_Cheio_1 = true;
        } else {
          s_St_5_Cheio_1 = v_278_1;
        };
        v_526 = s_St_5_Cheio_1;
        if (v_275) {
          v_276_2 = true;
        } else {
          v_276_2 = false;
        };
        if (a_1) {
          v_278_2 = true;
        } else {
          v_278_2 = v_276_2;
        };
        if (ac_1) {
          s_St_5_Cheio_2 = true;
        } else {
          s_St_5_Cheio_2 = v_278_2;
        };
        v_527 = s_St_5_Cheio_2;
        if (v_275) {
          v_276_3 = true;
        } else {
          v_276_3 = false;
        };
        if (a_1) {
          v_278_3 = false;
        } else {
          v_278_3 = v_276_3;
        };
        if (ac_1) {
          s_St_5_Cheio_3 = false;
        } else {
          s_St_5_Cheio_3 = v_278_3;
        };
        v_528 = s_St_5_Cheio_3;
        if (v_276_1) {
          v_276_2_1 = v_276_2;
          if (v_276_2_1) {
            v_276_3_1_1 = v_276_3;
          } else {
            v_276_3_1_0 = v_276_3;
          };
        } else {
          v_276_2_0 = v_276_2;
          if (v_276_2_0) {
            v_276_3_0_1 = v_276_3;
          } else {
            v_276_3_0_0 = v_276_3;
          };
        };
        if (v_278_1) {
          v_278_2_1 = v_278_2;
          if (v_278_2_1) {
            v_278_3_1_1 = v_278_3;
          } else {
            v_278_3_1_0 = v_278_3;
          };
        } else {
          v_278_2_0 = v_278_2;
          if (v_278_2_0) {
            v_278_3_0_1 = v_278_3;
          } else {
            v_278_3_0_0 = v_278_3;
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
      v_535 = v_526;
      v_536 = v_527;
      v_537 = v_528;
      v_543 = v_542;
    };
    s_1_2 = v_535;
    s_2_4 = v_536;
    s_3_4 = v_537;
    r = v_543;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
      if (ck_14_3_0_1) {
        if (d) {
          v_281 = true;
        } else {
          v_281 = self->pnr;
        };
        if (c_1) {
          v_283 = true;
        } else {
          v_283 = v_281;
        };
        if (a_1) {
          v_285 = true;
        } else {
          v_285 = v_283;
        };
        if (b) {
          v_287 = true;
        } else {
          v_287 = v_285;
        };
        if (ac_1) {
          r_St_5_Erro = true;
        } else {
          r_St_5_Erro = v_287;
        };
        if (d) {
          v_280_1 = true;
        } else {
          v_280_1 = false;
        };
        if (c_1) {
          v_282_1 = false;
        } else {
          v_282_1 = v_280_1;
        };
        if (a_1) {
          v_284_1 = false;
        } else {
          v_284_1 = v_282_1;
        };
        if (b) {
          v_286_1 = true;
        } else {
          v_286_1 = v_284_1;
        };
        if (ac_1) {
          s_St_5_Erro_1 = true;
        } else {
          s_St_5_Erro_1 = v_286_1;
        };
        if (d) {
          v_280_2 = true;
        } else {
          v_280_2 = true;
        };
        if (c_1) {
          v_282_2 = false;
        } else {
          v_282_2 = v_280_2;
        };
        if (a_1) {
          v_284_2 = true;
        } else {
          v_284_2 = v_282_2;
        };
        if (b) {
          v_286_2 = false;
        } else {
          v_286_2 = v_284_2;
        };
        if (ac_1) {
          s_St_5_Erro_2 = true;
        } else {
          s_St_5_Erro_2 = v_286_2;
        };
        if (d) {
          v_280_3 = true;
        } else {
          v_280_3 = true;
        };
        if (c_1) {
          v_282_3 = false;
        } else {
          v_282_3 = v_280_3;
        };
        if (a_1) {
          v_284_3 = false;
        } else {
          v_284_3 = v_282_3;
        };
        if (b) {
          v_286_3 = false;
        } else {
          v_286_3 = v_284_3;
        };
        if (ac_1) {
          s_St_5_Erro_3 = false;
        } else {
          s_St_5_Erro_3 = v_286_3;
        };
        v_544 = r_St_5_Erro;
        v_529 = s_St_5_Erro_1;
        v_530 = s_St_5_Erro_2;
        v_531 = s_St_5_Erro_3;
        if (v_280_1) {
          v_280_2_1 = v_280_2;
          if (v_280_2_1) {
            v_280_3_1_1 = v_280_3;
          } else {
            v_280_3_1_0 = v_280_3;
          };
        } else {
          v_280_2_0 = v_280_2;
          if (v_280_2_0) {
            v_280_3_0_1 = v_280_3;
          } else {
            v_280_3_0_0 = v_280_3;
          };
        };
        if (v_282_1) {
          v_282_2_1 = v_282_2;
          if (v_282_2_1) {
            v_282_3_1_1 = v_282_3;
          } else {
            v_282_3_1_0 = v_282_3;
          };
        } else {
          v_282_2_0 = v_282_2;
          if (v_282_2_0) {
            v_282_3_0_1 = v_282_3;
          } else {
            v_282_3_0_0 = v_282_3;
          };
        };
        if (v_284_1) {
          v_284_2_1 = v_284_2;
          if (v_284_2_1) {
            v_284_3_1_1 = v_284_3;
          } else {
            v_284_3_1_0 = v_284_3;
          };
        } else {
          v_284_2_0 = v_284_2;
          if (v_284_2_0) {
            v_284_3_0_1 = v_284_3;
          } else {
            v_284_3_0_0 = v_284_3;
          };
        };
        if (v_286_1) {
          v_286_2_1 = v_286_2;
          if (v_286_2_1) {
            v_286_3_1_1 = v_286_3;
          } else {
            v_286_3_1_0 = v_286_3;
          };
        } else {
          v_286_2_0 = v_286_2;
          if (v_286_2_0) {
            v_286_3_0_1 = v_286_3;
          } else {
            v_286_3_0_0 = v_286_3;
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
        v_267 = (e||d);
        if (v_267) {
          v_269 = true;
        } else {
          v_269 = self->pnr;
        };
        if (c_1) {
          v_271 = true;
        } else {
          v_271 = v_269;
        };
        if (b) {
          v_273 = true;
        } else {
          v_273 = v_271;
        };
        if (ac_1) {
          r_St_5_Limiar1 = true;
        } else {
          r_St_5_Limiar1 = v_273;
        };
        v_544 = r_St_5_Limiar1;
        if (v_267) {
          v_268_1 = false;
        } else {
          v_268_1 = false;
        };
        if (c_1) {
          v_270_1 = false;
        } else {
          v_270_1 = v_268_1;
        };
        if (b) {
          v_272_1 = true;
        } else {
          v_272_1 = v_270_1;
        };
        if (ac_1) {
          s_St_5_Limiar1_1 = true;
        } else {
          s_St_5_Limiar1_1 = v_272_1;
        };
        v_529 = s_St_5_Limiar1_1;
        if (v_267) {
          v_268_2 = true;
        } else {
          v_268_2 = true;
        };
        if (c_1) {
          v_270_2 = false;
        } else {
          v_270_2 = v_268_2;
        };
        if (b) {
          v_272_2 = false;
        } else {
          v_272_2 = v_270_2;
        };
        if (ac_1) {
          s_St_5_Limiar1_2 = true;
        } else {
          s_St_5_Limiar1_2 = v_272_2;
        };
        v_530 = s_St_5_Limiar1_2;
        if (v_267) {
          v_268_3 = true;
        } else {
          v_268_3 = false;
        };
        if (c_1) {
          v_270_3 = false;
        } else {
          v_270_3 = v_268_3;
        };
        if (b) {
          v_272_3 = false;
        } else {
          v_272_3 = v_270_3;
        };
        if (ac_1) {
          s_St_5_Limiar1_3 = false;
        } else {
          s_St_5_Limiar1_3 = v_272_3;
        };
        v_531 = s_St_5_Limiar1_3;
        if (v_268_1) {
          v_268_2_1 = v_268_2;
          if (v_268_2_1) {
            v_268_3_1_1 = v_268_3;
          } else {
            v_268_3_1_0 = v_268_3;
          };
        } else {
          v_268_2_0 = v_268_2;
          if (v_268_2_0) {
            v_268_3_0_1 = v_268_3;
          } else {
            v_268_3_0_0 = v_268_3;
          };
        };
        if (v_270_1) {
          v_270_2_1 = v_270_2;
          if (v_270_2_1) {
            v_270_3_1_1 = v_270_3;
          } else {
            v_270_3_1_0 = v_270_3;
          };
        } else {
          v_270_2_0 = v_270_2;
          if (v_270_2_0) {
            v_270_3_0_1 = v_270_3;
          } else {
            v_270_3_0_0 = v_270_3;
          };
        };
        if (v_272_1) {
          v_272_2_1 = v_272_2;
          if (v_272_2_1) {
            v_272_3_1_1 = v_272_3;
          } else {
            v_272_3_1_0 = v_272_3;
          };
        } else {
          v_272_2_0 = v_272_2;
          if (v_272_2_0) {
            v_272_3_0_1 = v_272_3;
          } else {
            v_272_3_0_0 = v_272_3;
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
      v_538 = v_529;
      v_539 = v_530;
      v_540 = v_531;
      v_546 = v_544;
    } else {
      ck_14_3_0_0 = ck_14_3;
      if (ck_14_3_0_0) {
        v_545 = true;
        v_532 = true;
        v_533 = true;
        v_534 = true;
      } else {
        v_260 = (e||b);
        if (v_260) {
          v_262 = true;
        } else {
          v_262 = self->pnr;
        };
        if (d) {
          v_264 = true;
        } else {
          v_264 = v_262;
        };
        if (a_1) {
          v_266 = true;
        } else {
          v_266 = v_264;
        };
        if (ac_1) {
          r_St_5_Limiar2 = true;
        } else {
          r_St_5_Limiar2 = v_266;
        };
        v_545 = r_St_5_Limiar2;
        if (v_260) {
          v_261_1 = false;
        } else {
          v_261_1 = false;
        };
        if (d) {
          v_263_1 = true;
        } else {
          v_263_1 = v_261_1;
        };
        if (a_1) {
          v_265_1 = false;
        } else {
          v_265_1 = v_263_1;
        };
        if (ac_1) {
          s_St_5_Limiar2_1 = true;
        } else {
          s_St_5_Limiar2_1 = v_265_1;
        };
        v_532 = s_St_5_Limiar2_1;
        if (v_260) {
          v_261_2 = true;
        } else {
          v_261_2 = false;
        };
        if (d) {
          v_263_2 = true;
        } else {
          v_263_2 = v_261_2;
        };
        if (a_1) {
          v_265_2 = true;
        } else {
          v_265_2 = v_263_2;
        };
        if (ac_1) {
          s_St_5_Limiar2_2 = true;
        } else {
          s_St_5_Limiar2_2 = v_265_2;
        };
        v_533 = s_St_5_Limiar2_2;
        if (v_260) {
          v_261_3 = true;
        } else {
          v_261_3 = false;
        };
        if (d) {
          v_263_3 = true;
        } else {
          v_263_3 = v_261_3;
        };
        if (a_1) {
          v_265_3 = false;
        } else {
          v_265_3 = v_263_3;
        };
        if (ac_1) {
          s_St_5_Limiar2_3 = false;
        } else {
          s_St_5_Limiar2_3 = v_265_3;
        };
        v_534 = s_St_5_Limiar2_3;
      };
      v_538 = v_532;
      v_539 = v_533;
      v_540 = v_534;
      v_546 = v_545;
    };
    s_1_2 = v_538;
    s_2_4 = v_539;
    s_3_4 = v_540;
    r = v_546;
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
        v_478 = estado_bat_St_5_Baixo_1;
        v_479 = estado_bat_St_5_Baixo_2;
        v_480 = estado_bat_St_5_Baixo_3;
        v_514 = nr_St_5_Baixo;
        v_496 = ns_St_5_Baixo_1;
        v_497 = ns_St_5_Baixo_2;
        v_498 = ns_St_5_Baixo_3;
      } else {
        estado_bat_St_5_Carregando_1 = true;
        v_478 = estado_bat_St_5_Carregando_1;
        estado_bat_St_5_Carregando_2 = true;
        v_479 = estado_bat_St_5_Carregando_2;
        estado_bat_St_5_Carregando_3 = true;
        v_480 = estado_bat_St_5_Carregando_3;
        nr_St_5_Carregando = false;
        v_514 = nr_St_5_Carregando;
        ns_St_5_Carregando_1 = true;
        v_496 = ns_St_5_Carregando_1;
        ns_St_5_Carregando_2 = true;
        v_497 = ns_St_5_Carregando_2;
        ns_St_5_Carregando_3 = false;
        v_498 = ns_St_5_Carregando_3;
      };
      v_490 = v_478;
      v_491 = v_479;
      v_492 = v_480;
      v_508 = v_496;
      v_509 = v_497;
      v_510 = v_498;
      v_516 = v_514;
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
        v_481 = true;
        v_482 = true;
        v_483 = true;
        v_515 = true;
        v_499 = true;
        v_500 = true;
        v_501 = true;
      } else {
        estado_bat_St_5_Cheio_1 = false;
        v_481 = estado_bat_St_5_Cheio_1;
        estado_bat_St_5_Cheio_2 = true;
        v_482 = estado_bat_St_5_Cheio_2;
        estado_bat_St_5_Cheio_3 = false;
        v_483 = estado_bat_St_5_Cheio_3;
        nr_St_5_Cheio = false;
        v_515 = nr_St_5_Cheio;
        ns_St_5_Cheio_1 = true;
        v_499 = ns_St_5_Cheio_1;
        ns_St_5_Cheio_2 = false;
        v_500 = ns_St_5_Cheio_2;
        ns_St_5_Cheio_3 = false;
        v_501 = ns_St_5_Cheio_3;
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
      v_490 = v_481;
      v_491 = v_482;
      v_492 = v_483;
      v_508 = v_499;
      v_509 = v_500;
      v_510 = v_501;
      v_516 = v_515;
    };
    estado_bat_1 = v_490;
    estado_bat_2 = v_491;
    estado_bat_3 = v_492;
    ns_1_2 = v_508;
    ns_2_4 = v_509;
    ns_3_4 = v_510;
    nr = v_516;
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
        v_484 = estado_bat_St_5_Erro_1;
        v_485 = estado_bat_St_5_Erro_2;
        v_486 = estado_bat_St_5_Erro_3;
        v_517 = nr_St_5_Erro;
        v_502 = ns_St_5_Erro_1;
        v_503 = ns_St_5_Erro_2;
        v_504 = ns_St_5_Erro_3;
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
        v_484 = estado_bat_St_5_Limiar1_1;
        estado_bat_St_5_Limiar1_2 = true;
        v_485 = estado_bat_St_5_Limiar1_2;
        estado_bat_St_5_Limiar1_3 = true;
        v_486 = estado_bat_St_5_Limiar1_3;
        nr_St_5_Limiar1 = false;
        v_517 = nr_St_5_Limiar1;
        ns_St_5_Limiar1_1 = false;
        v_502 = ns_St_5_Limiar1_1;
        ns_St_5_Limiar1_2 = true;
        v_503 = ns_St_5_Limiar1_2;
        ns_St_5_Limiar1_3 = false;
        v_504 = ns_St_5_Limiar1_3;
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
      v_493 = v_484;
      v_494 = v_485;
      v_495 = v_486;
      v_511 = v_502;
      v_512 = v_503;
      v_513 = v_504;
      v_519 = v_517;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        v_487 = true;
        v_488 = true;
        v_489 = true;
        v_518 = true;
        v_505 = true;
        v_506 = true;
        v_507 = true;
      } else {
        estado_bat_St_5_Limiar2_1 = true;
        v_487 = estado_bat_St_5_Limiar2_1;
        estado_bat_St_5_Limiar2_2 = false;
        v_488 = estado_bat_St_5_Limiar2_2;
        estado_bat_St_5_Limiar2_3 = false;
        v_489 = estado_bat_St_5_Limiar2_3;
        nr_St_5_Limiar2 = false;
        v_518 = nr_St_5_Limiar2;
        ns_St_5_Limiar2_1 = false;
        v_505 = ns_St_5_Limiar2_1;
        ns_St_5_Limiar2_2 = false;
        v_506 = ns_St_5_Limiar2_2;
        ns_St_5_Limiar2_3 = false;
        v_507 = ns_St_5_Limiar2_3;
      };
      v_493 = v_487;
      v_494 = v_488;
      v_495 = v_489;
      v_511 = v_505;
      v_512 = v_506;
      v_513 = v_507;
      v_519 = v_518;
    };
    estado_bat_1 = v_493;
    estado_bat_2 = v_494;
    estado_bat_3 = v_495;
    ns_1_2 = v_511;
    ns_2_4 = v_512;
    ns_3_4 = v_513;
    nr = v_519;
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
        v_181 = !(adm_off);
        v_172 = !(adm_off);
        v_648 = erro_BCHR;
      } else {
        erro_B25 = false;
        v_648 = erro_B25;
      };
      v_650 = v_648;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_649 = true;
      } else {
        erro_B50 = false;
        v_649 = erro_B50;
      };
      v_650 = v_649;
    };
    _out->erro = v_650;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        erro_B75 = false;
        v_138 = !(adm_off);
        v_651 = erro_B75;
      } else {
        erro_B100 = false;
        v_651 = erro_B100;
        v_123 = !(adm_off);
        v_114 = !(adm_off);
      };
      v_653 = v_651;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_652 = true;
      } else {
        erro_BERR = true;
        v_652 = erro_BERR;
      };
      v_653 = v_652;
    };
    _out->erro = v_653;
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
        if (v_261_1) {
          v_261_2_1 = v_261_2;
          if (v_261_2_1) {
            v_261_3_1_1 = v_261_3;
          } else {
            v_261_3_1_0 = v_261_3;
          };
        } else {
          v_261_2_0 = v_261_2;
          if (v_261_2_0) {
            v_261_3_0_1 = v_261_3;
          } else {
            v_261_3_0_0 = v_261_3;
          };
        };
        if (v_263_1) {
          v_263_2_1 = v_263_2;
          if (v_263_2_1) {
            v_263_3_1_1 = v_263_3;
          } else {
            v_263_3_1_0 = v_263_3;
          };
        } else {
          v_263_2_0 = v_263_2;
          if (v_263_2_0) {
            v_263_3_0_1 = v_263_3;
          } else {
            v_263_3_0_0 = v_263_3;
          };
        };
        if (v_265_1) {
          v_265_2_1 = v_265_2;
          if (v_265_2_1) {
            v_265_3_1_1 = v_265_3;
          } else {
            v_265_3_1_0 = v_265_3;
          };
        } else {
          v_265_2_0 = v_265_2;
          if (v_265_2_0) {
            v_265_3_0_1 = v_265_3;
          } else {
            v_265_3_0_0 = v_265_3;
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
        v_168 = !(_out->dia);
      } else {
        v_157 = !(_out->dia);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_146 = !(_out->dia);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_129 = !(_out->dia);
      } else {
        v_110 = !(_out->dia);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_187 = !(_out->dia);
      };
    };
  };
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        if (ts_1) {
          v_229 = true;
        } else {
          v_229 = self->pnr_2;
        };
        if (emerg_off) {
          v_231 = true;
        } else {
          v_231 = v_229;
        };
        if (ts_1) {
          v_228_1 = true;
        } else {
          v_228_1 = true;
        };
        if (emerg_off) {
          v_230_1 = true;
        } else {
          v_230_1 = v_228_1;
        };
        if (ts_1) {
          v_228_2 = false;
        } else {
          v_228_2 = true;
        };
        if (emerg_off) {
          v_230_2 = true;
        } else {
          v_230_2 = v_228_2;
        };
        if (ts_1) {
          v_228_3 = false;
        } else {
          v_228_3 = true;
        };
        if (emerg_off) {
          v_230_3 = false;
        } else {
          v_230_3 = v_228_3;
        };
        v_227 = !(off_atx);
        if (v_227) {
          r_2_St_7_Boot = true;
        } else {
          r_2_St_7_Boot = v_231;
        };
        v_590 = r_2_St_7_Boot;
        if (v_227) {
          s_2_St_7_Boot_1 = true;
        } else {
          s_2_St_7_Boot_1 = v_230_1;
        };
        v_575 = s_2_St_7_Boot_1;
        if (v_227) {
          s_2_St_7_Boot_2 = true;
        } else {
          s_2_St_7_Boot_2 = v_230_2;
        };
        v_576 = s_2_St_7_Boot_2;
        if (v_227) {
          s_2_St_7_Boot_3 = false;
        } else {
          s_2_St_7_Boot_3 = v_230_3;
        };
        v_577 = s_2_St_7_Boot_3;
        if (v_228_1) {
          v_228_2_1 = v_228_2;
          if (v_228_2_1) {
            v_228_3_1_1 = v_228_3;
          } else {
            v_228_3_1_0 = v_228_3;
          };
        } else {
          v_228_2_0 = v_228_2;
          if (v_228_2_0) {
            v_228_3_0_1 = v_228_3;
          } else {
            v_228_3_0_0 = v_228_3;
          };
        };
        if (v_230_1) {
          v_230_2_1 = v_230_2;
          if (v_230_2_1) {
            v_230_3_1_1 = v_230_3;
          } else {
            v_230_3_1_0 = v_230_3;
          };
        } else {
          v_230_2_0 = v_230_2;
          if (v_230_2_0) {
            v_230_3_0_1 = v_230_3;
          } else {
            v_230_3_0_0 = v_230_3;
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
        v_590 = r_2_St_7_Off;
        v_575 = s_2_St_7_Off_1;
        v_576 = s_2_St_7_Off_2;
        v_577 = s_2_St_7_Off_3;
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
      v_584 = v_575;
      v_585 = v_576;
      v_586 = v_577;
      v_592 = v_590;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_591 = true;
        v_578 = true;
        v_579 = true;
        v_580 = true;
      } else {
        if (r4) {
          v_222 = true;
        } else {
          v_222 = self->pnr_2;
        };
        if (r3) {
          v_224 = true;
        } else {
          v_224 = v_222;
        };
        if (emerg_off) {
          v_226 = true;
        } else {
          v_226 = v_224;
        };
        if (a) {
          r_2_St_7_Rlevel1 = true;
        } else {
          r_2_St_7_Rlevel1 = v_226;
        };
        v_591 = r_2_St_7_Rlevel1;
        if (r4) {
          v_221_1 = false;
        } else {
          v_221_1 = true;
        };
        if (r3) {
          v_223_1 = false;
        } else {
          v_223_1 = v_221_1;
        };
        if (emerg_off) {
          v_225_1 = true;
        } else {
          v_225_1 = v_223_1;
        };
        if (a) {
          s_2_St_7_Rlevel1_1 = true;
        } else {
          s_2_St_7_Rlevel1_1 = v_225_1;
        };
        v_578 = s_2_St_7_Rlevel1_1;
        if (r4) {
          v_221_2 = false;
        } else {
          v_221_2 = false;
        };
        if (r3) {
          v_223_2 = false;
        } else {
          v_223_2 = v_221_2;
        };
        if (emerg_off) {
          v_225_2 = true;
        } else {
          v_225_2 = v_223_2;
        };
        if (a) {
          s_2_St_7_Rlevel1_2 = true;
        } else {
          s_2_St_7_Rlevel1_2 = v_225_2;
        };
        v_579 = s_2_St_7_Rlevel1_2;
        if (r4) {
          v_221_3 = false;
        } else {
          v_221_3 = false;
        };
        if (r3) {
          v_223_3 = true;
        } else {
          v_223_3 = v_221_3;
        };
        if (emerg_off) {
          v_225_3 = false;
        } else {
          v_225_3 = v_223_3;
        };
        if (a) {
          s_2_St_7_Rlevel1_3 = false;
        } else {
          s_2_St_7_Rlevel1_3 = v_225_3;
        };
        v_580 = s_2_St_7_Rlevel1_3;
      };
      v_584 = v_578;
      v_585 = v_579;
      v_586 = v_580;
      v_592 = v_591;
      if (!(ck_10_3_1_0)) {
        if (v_221_1) {
          v_221_2_1 = v_221_2;
          if (v_221_2_1) {
            v_221_3_1_1 = v_221_3;
          } else {
            v_221_3_1_0 = v_221_3;
          };
        } else {
          v_221_2_0 = v_221_2;
          if (v_221_2_0) {
            v_221_3_0_1 = v_221_3;
          } else {
            v_221_3_0_0 = v_221_3;
          };
        };
        if (v_223_1) {
          v_223_2_1 = v_223_2;
          if (v_223_2_1) {
            v_223_3_1_1 = v_223_3;
          } else {
            v_223_3_1_0 = v_223_3;
          };
        } else {
          v_223_2_0 = v_223_2;
          if (v_223_2_0) {
            v_223_3_0_1 = v_223_3;
          } else {
            v_223_3_0_0 = v_223_3;
          };
        };
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
    s_2_1 = v_584;
    s_2_2 = v_585;
    s_2_3 = v_586;
    r_2 = v_592;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      v_587 = true;
      v_588 = true;
      v_589 = true;
      v_594 = true;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        if (r4) {
          v_216 = true;
        } else {
          v_216 = self->pnr_2;
        };
        if (r1) {
          v_218 = true;
        } else {
          v_218 = v_216;
        };
        if (emerg_off) {
          v_220 = true;
        } else {
          v_220 = v_218;
        };
        if (a) {
          r_2_St_7_Rlevel3 = true;
        } else {
          r_2_St_7_Rlevel3 = v_220;
        };
        if (r4) {
          v_215_1 = false;
        } else {
          v_215_1 = false;
        };
        if (r1) {
          v_217_1 = true;
        } else {
          v_217_1 = v_215_1;
        };
        if (emerg_off) {
          v_219_1 = true;
        } else {
          v_219_1 = v_217_1;
        };
        if (a) {
          s_2_St_7_Rlevel3_1 = true;
        } else {
          s_2_St_7_Rlevel3_1 = v_219_1;
        };
        if (r4) {
          v_215_2 = false;
        } else {
          v_215_2 = false;
        };
        if (r1) {
          v_217_2 = false;
        } else {
          v_217_2 = v_215_2;
        };
        if (emerg_off) {
          v_219_2 = true;
        } else {
          v_219_2 = v_217_2;
        };
        if (a) {
          s_2_St_7_Rlevel3_2 = true;
        } else {
          s_2_St_7_Rlevel3_2 = v_219_2;
        };
        if (r4) {
          v_215_3 = false;
        } else {
          v_215_3 = true;
        };
        if (r1) {
          v_217_3 = false;
        } else {
          v_217_3 = v_215_3;
        };
        if (emerg_off) {
          v_219_3 = false;
        } else {
          v_219_3 = v_217_3;
        };
        if (a) {
          s_2_St_7_Rlevel3_3 = false;
        } else {
          s_2_St_7_Rlevel3_3 = v_219_3;
        };
        v_593 = r_2_St_7_Rlevel3;
        v_581 = s_2_St_7_Rlevel3_1;
        v_582 = s_2_St_7_Rlevel3_2;
        v_583 = s_2_St_7_Rlevel3_3;
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
        if (v_219_1) {
          v_219_2_1 = v_219_2;
          if (v_219_2_1) {
            v_219_3_1_1 = v_219_3;
          } else {
            v_219_3_1_0 = v_219_3;
          };
        } else {
          v_219_2_0 = v_219_2;
          if (v_219_2_0) {
            v_219_3_0_1 = v_219_3;
          } else {
            v_219_3_0_0 = v_219_3;
          };
        };
      } else {
        if (r3) {
          v_210 = true;
        } else {
          v_210 = self->pnr_2;
        };
        if (r1) {
          v_212 = true;
        } else {
          v_212 = v_210;
        };
        if (emerg_off) {
          v_214 = true;
        } else {
          v_214 = v_212;
        };
        if (a) {
          r_2_St_7_Rlevel4 = true;
        } else {
          r_2_St_7_Rlevel4 = v_214;
        };
        v_593 = r_2_St_7_Rlevel4;
        if (r3) {
          v_209_1 = false;
        } else {
          v_209_1 = false;
        };
        if (r1) {
          v_211_1 = true;
        } else {
          v_211_1 = v_209_1;
        };
        if (emerg_off) {
          v_213_1 = true;
        } else {
          v_213_1 = v_211_1;
        };
        if (a) {
          s_2_St_7_Rlevel4_1 = true;
        } else {
          s_2_St_7_Rlevel4_1 = v_213_1;
        };
        v_581 = s_2_St_7_Rlevel4_1;
        if (r3) {
          v_209_2 = false;
        } else {
          v_209_2 = false;
        };
        if (r1) {
          v_211_2 = false;
        } else {
          v_211_2 = v_209_2;
        };
        if (emerg_off) {
          v_213_2 = true;
        } else {
          v_213_2 = v_211_2;
        };
        if (a) {
          s_2_St_7_Rlevel4_2 = true;
        } else {
          s_2_St_7_Rlevel4_2 = v_213_2;
        };
        v_582 = s_2_St_7_Rlevel4_2;
        if (r3) {
          v_209_3 = true;
        } else {
          v_209_3 = false;
        };
        if (r1) {
          v_211_3 = false;
        } else {
          v_211_3 = v_209_3;
        };
        if (emerg_off) {
          v_213_3 = false;
        } else {
          v_213_3 = v_211_3;
        };
        if (a) {
          s_2_St_7_Rlevel4_3 = false;
        } else {
          s_2_St_7_Rlevel4_3 = v_213_3;
        };
        v_583 = s_2_St_7_Rlevel4_3;
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
      };
      v_587 = v_581;
      v_588 = v_582;
      v_589 = v_583;
      v_594 = v_593;
    };
    s_2_1 = v_587;
    s_2_2 = v_588;
    s_2_3 = v_589;
    r_2 = v_594;
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
        v_547 = estado_2_St_7_Boot;
        nr_2_St_7_Boot = false;
        v_567 = nr_2_St_7_Boot;
        ns_2_St_7_Boot_1 = true;
        v_552 = ns_2_St_7_Boot_1;
        ns_2_St_7_Boot_2 = true;
        v_553 = ns_2_St_7_Boot_2;
        ns_2_St_7_Boot_3 = true;
        v_554 = ns_2_St_7_Boot_3;
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
        v_547 = estado_2_St_7_Off;
        v_567 = nr_2_St_7_Off;
        v_552 = ns_2_St_7_Off_1;
        v_553 = ns_2_St_7_Off_2;
        v_554 = ns_2_St_7_Off_3;
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
      v_549 = v_547;
      v_561 = v_552;
      v_562 = v_553;
      v_563 = v_554;
      v_569 = v_567;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_548 = 0;
        v_568 = true;
        v_555 = true;
        v_556 = true;
        v_557 = true;
      } else {
        estado_2_St_7_Rlevel1 = 2;
        v_548 = estado_2_St_7_Rlevel1;
        nr_2_St_7_Rlevel1 = false;
        v_568 = nr_2_St_7_Rlevel1;
        ns_2_St_7_Rlevel1_1 = true;
        v_555 = ns_2_St_7_Rlevel1_1;
        ns_2_St_7_Rlevel1_2 = false;
        v_556 = ns_2_St_7_Rlevel1_2;
        ns_2_St_7_Rlevel1_3 = false;
        v_557 = ns_2_St_7_Rlevel1_3;
      };
      v_549 = v_548;
      v_561 = v_555;
      v_562 = v_556;
      v_563 = v_557;
      v_569 = v_568;
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
    estado_2 = v_549;
    ns_2_1 = v_561;
    ns_2_2 = v_562;
    ns_2_3 = v_563;
    nr_2 = v_569;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_551 = 0;
      v_564 = true;
      v_565 = true;
      v_566 = true;
      v_571 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        estado_2_St_7_Rlevel3 = 3;
        nr_2_St_7_Rlevel3 = false;
        ns_2_St_7_Rlevel3_1 = false;
        ns_2_St_7_Rlevel3_2 = false;
        ns_2_St_7_Rlevel3_3 = true;
        v_550 = estado_2_St_7_Rlevel3;
        v_570 = nr_2_St_7_Rlevel3;
        v_558 = ns_2_St_7_Rlevel3_1;
        v_559 = ns_2_St_7_Rlevel3_2;
        v_560 = ns_2_St_7_Rlevel3_3;
      } else {
        estado_2_St_7_Rlevel4 = 4;
        v_550 = estado_2_St_7_Rlevel4;
        nr_2_St_7_Rlevel4 = false;
        v_570 = nr_2_St_7_Rlevel4;
        ns_2_St_7_Rlevel4_1 = false;
        v_558 = ns_2_St_7_Rlevel4_1;
        ns_2_St_7_Rlevel4_2 = false;
        v_559 = ns_2_St_7_Rlevel4_2;
        ns_2_St_7_Rlevel4_3 = false;
        v_560 = ns_2_St_7_Rlevel4_3;
      };
      v_551 = v_550;
      v_564 = v_558;
      v_565 = v_559;
      v_566 = v_560;
      v_571 = v_570;
    };
    estado_2 = v_551;
    ns_2_1 = v_564;
    ns_2_2 = v_565;
    ns_2_3 = v_566;
    nr_2 = v_571;
  };
  _out->serv_estado = estado_2;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_184 = (_out->serv_estado==0);
        v_185 = (adm_off&&v_184);
        v_182 = (_out->serv_estado>0);
        v_183 = (v_181&&v_182);
        v_186 = (v_183||v_185);
        v_175 = (_out->serv_estado==0);
        v_176 = (adm_off&&v_175);
        v_173 = (_out->serv_estado>0);
        v_174 = (v_172&&v_173);
        v_177 = (v_174||v_176);
      } else {
        v_167 = (_out->serv_estado==0);
        v_162 = (_out->serv_estado==0);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_156 = (_out->serv_estado<3);
        v_151 = (_out->serv_estado==0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_143 = (_out->serv_estado==0);
        v_144 = (adm_off&&v_143);
        v_140 = (_out->serv_estado<4);
        v_139 = (_out->serv_estado>0);
        v_141 = (v_139&&v_140);
        v_142 = (v_138&&v_141);
        v_145 = (v_142||v_144);
        v_134 = (_out->serv_estado==0);
      } else {
        v_126 = (_out->serv_estado==0);
        v_127 = (adm_off&&v_126);
        v_124 = (_out->serv_estado>0);
        v_125 = (v_123&&v_124);
        v_128 = (v_125||v_127);
        v_117 = (_out->serv_estado==0);
        v_118 = (adm_off&&v_117);
        v_115 = (_out->serv_estado>0);
        v_116 = (v_114&&v_115);
        v_119 = (v_116||v_118);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_197 = (_out->serv_estado==0);
        v_192 = (_out->serv_estado==0);
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
          v_208 = true;
        } else {
          v_208 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Boot = true;
        } else {
          r_3_St_8_Boot = v_208;
        };
        v_643 = r_3_St_8_Boot;
        if (t) {
          v_207_1 = false;
        } else {
          v_207_1 = true;
        };
        if (c) {
          s_3_St_8_Boot_1 = true;
        } else {
          s_3_St_8_Boot_1 = v_207_1;
        };
        v_628 = s_3_St_8_Boot_1;
        if (t) {
          v_207_2 = false;
        } else {
          v_207_2 = true;
        };
        if (c) {
          s_3_St_8_Boot_2 = true;
        } else {
          s_3_St_8_Boot_2 = v_207_2;
        };
        v_629 = s_3_St_8_Boot_2;
        if (t) {
          v_207_3 = false;
        } else {
          v_207_3 = true;
        };
        if (c) {
          s_3_St_8_Boot_3 = false;
        } else {
          s_3_St_8_Boot_3 = v_207_3;
        };
        v_630 = s_3_St_8_Boot_3;
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
        v_643 = r_3_St_8_Off;
        v_628 = s_3_St_8_Off_1;
        v_629 = s_3_St_8_Off_2;
        v_630 = s_3_St_8_Off_3;
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
      v_637 = v_628;
      v_638 = v_629;
      v_639 = v_630;
      v_645 = v_643;
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_644 = true;
        v_631 = true;
        v_632 = true;
        v_633 = true;
      } else {
        if (t) {
          v_201 = true;
        } else {
          v_201 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Online = true;
        } else {
          r_3_St_8_Online = v_201;
        };
        v_644 = r_3_St_8_Online;
        if (t) {
          v_200_1 = false;
        } else {
          v_200_1 = true;
        };
        if (c) {
          s_3_St_8_Online_1 = true;
        } else {
          s_3_St_8_Online_1 = v_200_1;
        };
        v_631 = s_3_St_8_Online_1;
        if (t) {
          v_200_2 = false;
        } else {
          v_200_2 = false;
        };
        if (c) {
          s_3_St_8_Online_2 = true;
        } else {
          s_3_St_8_Online_2 = v_200_2;
        };
        v_632 = s_3_St_8_Online_2;
        if (t) {
          v_200_3 = false;
        } else {
          v_200_3 = false;
        };
        if (c) {
          s_3_St_8_Online_3 = false;
        } else {
          s_3_St_8_Online_3 = v_200_3;
        };
        v_633 = s_3_St_8_Online_3;
      };
      v_637 = v_631;
      v_638 = v_632;
      v_639 = v_633;
      v_645 = v_644;
      if (!(ck_8_3_1_0)) {
        if (v_200_1) {
          v_200_2_1 = v_200_2;
          if (v_200_2_1) {
            v_200_3_1_1 = v_200_3;
          } else {
            v_200_3_1_0 = v_200_3;
          };
        } else {
          v_200_2_0 = v_200_2;
          if (v_200_2_0) {
            v_200_3_0_1 = v_200_3;
          } else {
            v_200_3_0_0 = v_200_3;
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
    s_3_1 = v_637;
    s_3_2 = v_638;
    s_3_3 = v_639;
    r_3 = v_645;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      v_640 = true;
      v_641 = true;
      v_642 = true;
      v_647 = true;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        if (t) {
          v_199 = true;
        } else {
          v_199 = self->pnr_3;
        };
        if (c) {
          r_3_St_8_Sleep = true;
        } else {
          r_3_St_8_Sleep = v_199;
        };
        v_646 = r_3_St_8_Sleep;
        if (t) {
          v_198_1 = true;
        } else {
          v_198_1 = false;
        };
        if (c) {
          s_3_St_8_Sleep_1 = true;
        } else {
          s_3_St_8_Sleep_1 = v_198_1;
        };
        v_634 = s_3_St_8_Sleep_1;
        if (t) {
          v_198_2 = true;
        } else {
          v_198_2 = false;
        };
        if (c) {
          s_3_St_8_Sleep_2 = true;
        } else {
          s_3_St_8_Sleep_2 = v_198_2;
        };
        v_635 = s_3_St_8_Sleep_2;
        if (t) {
          v_198_3 = true;
        } else {
          v_198_3 = true;
        };
        if (c) {
          s_3_St_8_Sleep_3 = false;
        } else {
          s_3_St_8_Sleep_3 = v_198_3;
        };
        v_636 = s_3_St_8_Sleep_3;
        if (v_198_1) {
          v_198_2_1 = v_198_2;
          if (v_198_2_1) {
            v_198_3_1_1 = v_198_3;
          } else {
            v_198_3_1_0 = v_198_3;
          };
        } else {
          v_198_2_0 = v_198_2;
          if (v_198_2_0) {
            v_198_3_0_1 = v_198_3;
          } else {
            v_198_3_0_0 = v_198_3;
          };
        };
      } else {
        if (o) {
          v_204 = true;
          v_203_1 = true;
          v_203_2 = false;
          v_203_3 = false;
        } else {
          v_204 = self->pnr_3;
          v_203_1 = false;
          v_203_2 = false;
          v_203_3 = false;
        };
        v_202 = !(o);
        if (v_202) {
          v_206 = true;
        } else {
          v_206 = v_204;
        };
        if (c) {
          r_3_St_8_Teste = true;
        } else {
          r_3_St_8_Teste = v_206;
        };
        if (v_202) {
          v_205_1 = false;
        } else {
          v_205_1 = v_203_1;
        };
        if (c) {
          s_3_St_8_Teste_1 = true;
        } else {
          s_3_St_8_Teste_1 = v_205_1;
        };
        if (v_202) {
          v_205_2 = false;
        } else {
          v_205_2 = v_203_2;
        };
        if (c) {
          s_3_St_8_Teste_2 = true;
        } else {
          s_3_St_8_Teste_2 = v_205_2;
        };
        if (v_202) {
          v_205_3 = true;
        } else {
          v_205_3 = v_203_3;
        };
        if (c) {
          s_3_St_8_Teste_3 = false;
        } else {
          s_3_St_8_Teste_3 = v_205_3;
        };
        v_646 = r_3_St_8_Teste;
        v_634 = s_3_St_8_Teste_1;
        v_635 = s_3_St_8_Teste_2;
        v_636 = s_3_St_8_Teste_3;
        if (v_203_1) {
          v_203_2_1 = v_203_2;
          if (v_203_2_1) {
            v_203_3_1_1 = v_203_3;
          } else {
            v_203_3_1_0 = v_203_3;
          };
        } else {
          v_203_2_0 = v_203_2;
          if (v_203_2_0) {
            v_203_3_0_1 = v_203_3;
          } else {
            v_203_3_0_0 = v_203_3;
          };
        };
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
      };
      v_640 = v_634;
      v_641 = v_635;
      v_642 = v_636;
      v_647 = v_646;
    };
    s_3_1 = v_640;
    s_3_2 = v_641;
    s_3_3 = v_642;
    r_3 = v_647;
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
        v_600 = estado_1_St_8_Boot;
        atuador_St_8_Boot = true;
        v_595 = atuador_St_8_Boot;
        nr_3_St_8_Boot = false;
        v_620 = nr_3_St_8_Boot;
        ns_3_St_8_Boot_1 = true;
        v_605 = ns_3_St_8_Boot_1;
        ns_3_St_8_Boot_2 = true;
        v_606 = ns_3_St_8_Boot_2;
        ns_3_St_8_Boot_3 = true;
        v_607 = ns_3_St_8_Boot_3;
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
        v_600 = estado_1_St_8_Off;
        v_595 = atuador_St_8_Off;
        v_620 = nr_3_St_8_Off;
        v_605 = ns_3_St_8_Off_1;
        v_606 = ns_3_St_8_Off_2;
        v_607 = ns_3_St_8_Off_3;
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
      v_597 = v_595;
      v_602 = v_600;
      v_614 = v_605;
      v_615 = v_606;
      v_616 = v_607;
      v_622 = v_620;
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_601 = 0;
        v_596 = true;
        v_621 = true;
        v_608 = true;
        v_609 = true;
        v_610 = true;
      } else {
        estado_1_St_8_Online = 4;
        v_601 = estado_1_St_8_Online;
        atuador_St_8_Online = true;
        v_596 = atuador_St_8_Online;
        nr_3_St_8_Online = false;
        v_621 = nr_3_St_8_Online;
        ns_3_St_8_Online_1 = true;
        v_608 = ns_3_St_8_Online_1;
        ns_3_St_8_Online_2 = false;
        v_609 = ns_3_St_8_Online_2;
        ns_3_St_8_Online_3 = false;
        v_610 = ns_3_St_8_Online_3;
      };
      v_597 = v_596;
      v_602 = v_601;
      v_614 = v_608;
      v_615 = v_609;
      v_616 = v_610;
      v_622 = v_621;
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
    atuador = v_597;
    estado_1 = v_602;
    ns_3_1 = v_614;
    ns_3_2 = v_615;
    ns_3_3 = v_616;
    nr_3 = v_622;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      v_599 = true;
      v_604 = 0;
      v_617 = true;
      v_618 = true;
      v_619 = true;
      v_624 = true;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        estado_1_St_8_Sleep = 1;
        v_603 = estado_1_St_8_Sleep;
        atuador_St_8_Sleep = false;
        v_598 = atuador_St_8_Sleep;
        nr_3_St_8_Sleep = false;
        v_623 = nr_3_St_8_Sleep;
        ns_3_St_8_Sleep_1 = false;
        v_611 = ns_3_St_8_Sleep_1;
        ns_3_St_8_Sleep_2 = false;
        v_612 = ns_3_St_8_Sleep_2;
        ns_3_St_8_Sleep_3 = true;
        v_613 = ns_3_St_8_Sleep_3;
      } else {
        estado_1_St_8_Teste = 3;
        atuador_St_8_Teste = true;
        nr_3_St_8_Teste = false;
        ns_3_St_8_Teste_1 = false;
        ns_3_St_8_Teste_2 = false;
        ns_3_St_8_Teste_3 = false;
        v_603 = estado_1_St_8_Teste;
        v_598 = atuador_St_8_Teste;
        v_623 = nr_3_St_8_Teste;
        v_611 = ns_3_St_8_Teste_1;
        v_612 = ns_3_St_8_Teste_2;
        v_613 = ns_3_St_8_Teste_3;
      };
      v_599 = v_598;
      v_604 = v_603;
      v_617 = v_611;
      v_618 = v_612;
      v_619 = v_613;
      v_624 = v_623;
    };
    atuador = v_599;
    estado_1 = v_604;
    ns_3_1 = v_617;
    ns_3_2 = v_618;
    ns_3_3 = v_619;
    nr_3 = v_624;
  };
  _out->modem_estado = estado_1;
  _out->modem_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_179 = (_out->modem_estado>0);
        v_170 = (_out->modem_estado>0);
      } else {
        v_165 = !(_out->modem_atuador);
        v_160 = !(_out->modem_atuador);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_154 = (_out->modem_estado>0);
        v_149 = (_out->modem_estado>0);
      };
    };
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_136 = (_out->modem_estado>0);
        v_132 = (_out->modem_estado>0);
      } else {
        v_121 = (_out->modem_estado>0);
        v_112 = (_out->modem_estado>0);
      };
    } else {
      if (!(ck_3_0_0)) {
        v_195 = !(_out->modem_atuador);
        v_190 = !(_out->modem_atuador);
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
        v_178 = (_out->dia&&_out->pabx_atuador);
        v_180 = (v_178&&v_179);
        r_dia_BCHR = (v_180&&v_186);
        v_169 = (v_168&&_out->pabx_atuador);
        v_171 = (v_169&&v_170);
        r_noite_BCHR = (v_171&&v_177);
        v_654 = r_dia_BCHR;
        v_660 = r_noite_BCHR;
      } else {
        v_163 = !(_out->pabx_atuador);
        v_164 = (_out->dia&&v_163);
        v_166 = (v_164&&v_165);
        r_dia_B25 = (v_166&&v_167);
        v_654 = r_dia_B25;
        v_158 = !(_out->pabx_atuador);
        v_159 = (v_157&&v_158);
        v_161 = (v_159&&v_160);
        r_noite_B25 = (v_161&&v_162);
        v_660 = r_noite_B25;
      };
      v_656 = v_654;
      v_662 = v_660;
    } else {
      if (ck_3_1_0) {
        v_655 = true;
        v_661 = true;
      } else {
        v_152 = !(_out->pabx_atuador);
        v_153 = (_out->dia&&v_152);
        v_155 = (v_153&&v_154);
        r_dia_B50 = (v_155&&v_156);
        v_655 = r_dia_B50;
        v_147 = !(_out->pabx_atuador);
        v_148 = (v_146&&v_147);
        v_150 = (v_148&&v_149);
        r_noite_B50 = (v_150&&v_151);
        v_661 = r_noite_B50;
      };
      v_656 = v_655;
      v_662 = v_661;
    };
    _out->r_dia = v_656;
    _out->r_noite = v_662;
  } else {
    if (ck_2_0) {
      if (ck_3_0_1) {
        v_135 = (_out->dia&&_out->pabx_atuador);
        v_137 = (v_135&&v_136);
        r_dia_B75 = (v_137&&v_145);
        v_130 = !(_out->pabx_atuador);
        v_131 = (v_129&&v_130);
        v_133 = (v_131&&v_132);
        r_noite_B75 = (v_133&&v_134);
        v_657 = r_dia_B75;
        v_663 = r_noite_B75;
      } else {
        v_120 = (_out->dia&&_out->pabx_atuador);
        v_122 = (v_120&&v_121);
        r_dia_B100 = (v_122&&v_128);
        v_657 = r_dia_B100;
        v_111 = (v_110&&_out->pabx_atuador);
        v_113 = (v_111&&v_112);
        r_noite_B100 = (v_113&&v_119);
        v_663 = r_noite_B100;
      };
      v_659 = v_657;
      v_665 = v_663;
    } else {
      if (ck_3_0_0) {
        v_658 = true;
        v_664 = true;
      } else {
        v_193 = !(_out->pabx_atuador);
        v_194 = (_out->dia&&v_193);
        v_196 = (v_194&&v_195);
        r_dia_BERR = (v_196&&v_197);
        v_658 = r_dia_BERR;
        v_188 = !(_out->pabx_atuador);
        v_189 = (v_187&&v_188);
        v_191 = (v_189&&v_190);
        r_noite_BERR = (v_191&&v_192);
        v_664 = r_noite_BERR;
      };
      v_659 = v_658;
      v_665 = v_664;
    };
    _out->r_dia = v_659;
    _out->r_noite = v_665;
  };
  v_109 = (_out->r_dia||_out->r_noite);
  self->pnr = nr;
  self->v_520 = ns_1_2;
  self->v_521 = ns_2_4;
  self->v_522 = ns_3_4;
  self->pnr_1 = nr_1;
  self->ck_12_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->v_572 = ns_2_1;
  self->v_573 = ns_2_2;
  self->v_574 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_625 = ns_3_1;
  self->v_626 = ns_3_2;
  self->v_627 = ns_3_3;
  self->pnr_4 = nr_4;
  self->ck_6_1 = ns_4_1;;
}

