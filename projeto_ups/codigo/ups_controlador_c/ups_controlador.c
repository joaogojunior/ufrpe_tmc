/* --- Generated the 4/7/2018 at 7:13 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_231 = true;
  self->v_232 = true;
  self->v_233 = false;
}

void Ups_controlador__computador_step(int c_atx, int off_atx, int ts,
                                      int cr1, int cr3, int cr4, int ba,
                                      int b1, int b3, int b4, int s_atx,
                                      int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int v_202;
  int v_201;
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
  int atuador_St_Rlevel4;
  int nr_St_Rlevel3;
  int ns_St_Rlevel3_3;
  int ns_St_Rlevel3_2;
  int ns_St_Rlevel3_1;
  int estado_St_Rlevel3;
  int atuador_St_Rlevel3;
  int nr_St_Rlevel1;
  int ns_St_Rlevel1_3;
  int ns_St_Rlevel1_2;
  int ns_St_Rlevel1_1;
  int estado_St_Rlevel1;
  int atuador_St_Rlevel1;
  int nr_St_Boot;
  int ns_St_Boot_3;
  int ns_St_Boot_2;
  int ns_St_Boot_1;
  int estado_St_Boot;
  int atuador_St_Boot;
  int nr_St_Off;
  int ns_St_Off_3;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int estado_St_Off;
  int atuador_St_Off;
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
  v_17 = (ba&&s_atx);
  a = (v_17||c_atx);
  v_16 = (b1&&s1);
  r1 = (v_16||cr1);
  v_15 = (b3&&s3);
  r3 = (v_15||cr3);
  v_14 = (b4&&s4);
  r4 = (v_14||cr4);
  ck_1_4 = self->v_231;
  ck_2 = self->v_232;
  ck_3 = self->v_233;
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
        v_249 = r_St_Boot;
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
        v_234 = s_St_Boot_1;
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
        v_235 = s_St_Boot_2;
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
        v_236 = s_St_Boot_3;
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
        v_249 = r_St_Off;
        v_234 = s_St_Off_1;
        v_235 = s_St_Off_2;
        v_236 = s_St_Off_3;
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
      v_243 = v_234;
      v_244 = v_235;
      v_245 = v_236;
      v_251 = v_249;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_250 = true;
        v_237 = true;
        v_238 = true;
        v_239 = true;
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
        v_250 = r_St_Rlevel1;
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
        v_237 = s_St_Rlevel1_1;
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
        v_238 = s_St_Rlevel1_2;
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
        v_239 = s_St_Rlevel1_3;
      };
      v_243 = v_237;
      v_244 = v_238;
      v_245 = v_239;
      v_251 = v_250;
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
    s_1 = v_243;
    s_2 = v_244;
    s_3 = v_245;
    r = v_251;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_246 = true;
      v_247 = true;
      v_248 = true;
      v_253 = true;
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
        v_252 = r_St_Rlevel3;
        v_240 = s_St_Rlevel3_1;
        v_241 = s_St_Rlevel3_2;
        v_242 = s_St_Rlevel3_3;
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
        v_252 = r_St_Rlevel4;
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
        v_240 = s_St_Rlevel4_1;
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
        v_241 = s_St_Rlevel4_2;
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
        v_242 = s_St_Rlevel4_3;
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
      v_246 = v_240;
      v_247 = v_241;
      v_248 = v_242;
      v_253 = v_252;
    };
    s_1 = v_246;
    s_2 = v_247;
    s_3 = v_248;
    r = v_253;
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
        v_206 = estado_St_Boot;
        atuador_St_Boot = true;
        v_201 = atuador_St_Boot;
        nr_St_Boot = false;
        v_226 = nr_St_Boot;
        ns_St_Boot_1 = true;
        v_211 = ns_St_Boot_1;
        ns_St_Boot_2 = true;
        v_212 = ns_St_Boot_2;
        ns_St_Boot_3 = true;
        v_213 = ns_St_Boot_3;
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
        atuador_St_Off = false;
        nr_St_Off = false;
        ns_St_Off_1 = true;
        ns_St_Off_2 = true;
        ns_St_Off_3 = false;
        v_206 = estado_St_Off;
        v_201 = atuador_St_Off;
        v_226 = nr_St_Off;
        v_211 = ns_St_Off_1;
        v_212 = ns_St_Off_2;
        v_213 = ns_St_Off_3;
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
      v_203 = v_201;
      v_208 = v_206;
      v_220 = v_211;
      v_221 = v_212;
      v_222 = v_213;
      v_228 = v_226;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_207 = 0;
        v_202 = true;
        v_227 = true;
        v_214 = true;
        v_215 = true;
        v_216 = true;
      } else {
        estado_St_Rlevel1 = 2;
        v_207 = estado_St_Rlevel1;
        atuador_St_Rlevel1 = true;
        v_202 = atuador_St_Rlevel1;
        nr_St_Rlevel1 = false;
        v_227 = nr_St_Rlevel1;
        ns_St_Rlevel1_1 = true;
        v_214 = ns_St_Rlevel1_1;
        ns_St_Rlevel1_2 = false;
        v_215 = ns_St_Rlevel1_2;
        ns_St_Rlevel1_3 = false;
        v_216 = ns_St_Rlevel1_3;
      };
      v_203 = v_202;
      v_208 = v_207;
      v_220 = v_214;
      v_221 = v_215;
      v_222 = v_216;
      v_228 = v_227;
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
    _out->atuador = v_203;
    _out->estado = v_208;
    ns_1 = v_220;
    ns_2 = v_221;
    ns_3 = v_222;
    nr = v_228;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_205 = true;
      v_210 = 0;
      v_223 = true;
      v_224 = true;
      v_225 = true;
      v_230 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        estado_St_Rlevel3 = 3;
        atuador_St_Rlevel3 = true;
        nr_St_Rlevel3 = false;
        ns_St_Rlevel3_1 = false;
        ns_St_Rlevel3_2 = false;
        ns_St_Rlevel3_3 = true;
        v_209 = estado_St_Rlevel3;
        v_204 = atuador_St_Rlevel3;
        v_229 = nr_St_Rlevel3;
        v_217 = ns_St_Rlevel3_1;
        v_218 = ns_St_Rlevel3_2;
        v_219 = ns_St_Rlevel3_3;
      } else {
        estado_St_Rlevel4 = 4;
        v_209 = estado_St_Rlevel4;
        atuador_St_Rlevel4 = true;
        v_204 = atuador_St_Rlevel4;
        nr_St_Rlevel4 = false;
        v_229 = nr_St_Rlevel4;
        ns_St_Rlevel4_1 = false;
        v_217 = ns_St_Rlevel4_1;
        ns_St_Rlevel4_2 = false;
        v_218 = ns_St_Rlevel4_2;
        ns_St_Rlevel4_3 = false;
        v_219 = ns_St_Rlevel4_3;
      };
      v_205 = v_204;
      v_210 = v_209;
      v_223 = v_217;
      v_224 = v_218;
      v_225 = v_219;
      v_230 = v_229;
    };
    _out->atuador = v_205;
    _out->estado = v_210;
    ns_1 = v_223;
    ns_2 = v_224;
    ns_3 = v_225;
    nr = v_230;
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
  self->v_231 = ns_1;
  self->v_232 = ns_2;
  self->v_233 = ns_3;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_289 = true;
  self->v_290 = false;
  self->v_291 = false;
}

void Ups_controlador__bateria_step(int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_39;
  int v_38_3;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_32;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_28_2_0;
  int v_28_3_0_0;
  int v_28_3_0_1;
  int v_28_2_1;
  int v_28_3_1_0;
  int v_28_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28_3;
  int v_28_2;
  int v_28_1;
  int v_27;
  int v_25_2_0;
  int v_25_3_0_0;
  int v_25_3_0_1;
  int v_25_2_1;
  int v_25_3_1_0;
  int v_25_3_1_1;
  int v_23_2_0;
  int v_23_3_0_0;
  int v_23_3_0_1;
  int v_23_2_1;
  int v_23_3_1_0;
  int v_23_3_1_1;
  int v_26;
  int v_25_3;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23_3;
  int v_23_2;
  int v_23_1;
  int v_22;
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
  v_59 = !(cp);
  v_60 = (v_59&&l1);
  v_61 = (v_60&&l2);
  a = (v_61&&v);
  v_42 = !(a);
  v_57 = (cp&&l1);
  v_58 = (v_57&&l2);
  b = (v_58&&v);
  v_43 = !(b);
  v_44 = (v_42&&v_43);
  v_54 = !(l1);
  v_53 = !(cp);
  v_55 = (v_53&&v_54);
  v_56 = (v_55&&l2);
  c = (v_56&&v);
  v_45 = !(c);
  v_46 = (v_44&&v_45);
  v_51 = !(l2);
  v_49 = !(l1);
  v_48 = !(cp);
  v_50 = (v_48&&v_49);
  v_52 = (v_50&&v_51);
  d = (v_52&&v);
  v_47 = !(d);
  e = (v_46&&v_47);
  ck_1 = self->v_289;
  ck_2_4 = self->v_290;
  ck_3 = self->v_291;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_32 = (e||c);
        v_33 = (v_32||d);
        if (v_33) {
          v_35 = true;
        } else {
          v_35 = self->pnr;
        };
        if (a) {
          r_St_1_Carregado = true;
        } else {
          r_St_1_Carregado = v_35;
        };
        if (v_33) {
          v_34_1 = true;
        } else {
          v_34_1 = true;
        };
        if (a) {
          s_St_1_Carregado_1 = false;
        } else {
          s_St_1_Carregado_1 = v_34_1;
        };
        if (v_33) {
          v_34_2 = false;
        } else {
          v_34_2 = true;
        };
        if (a) {
          s_St_1_Carregado_2 = false;
        } else {
          s_St_1_Carregado_2 = v_34_2;
        };
        if (v_33) {
          v_34_3 = false;
        } else {
          v_34_3 = true;
        };
        if (a) {
          s_St_1_Carregado_3 = true;
        } else {
          s_St_1_Carregado_3 = v_34_3;
        };
        v_307 = r_St_1_Carregado;
        v_292 = s_St_1_Carregado_1;
        v_293 = s_St_1_Carregado_2;
        v_294 = s_St_1_Carregado_3;
      } else {
        v_18 = (e||a);
        v_19 = (v_18||b);
        if (v_19) {
          v_21 = true;
        } else {
          v_21 = self->pnr;
        };
        if (c) {
          r_St_1_Descarregado = true;
        } else {
          r_St_1_Descarregado = v_21;
        };
        v_307 = r_St_1_Descarregado;
        if (v_19) {
          v_20_1 = true;
        } else {
          v_20_1 = true;
        };
        if (c) {
          s_St_1_Descarregado_1 = false;
        } else {
          s_St_1_Descarregado_1 = v_20_1;
        };
        v_292 = s_St_1_Descarregado_1;
        if (v_19) {
          v_20_2 = false;
        } else {
          v_20_2 = true;
        };
        if (c) {
          s_St_1_Descarregado_2 = false;
        } else {
          s_St_1_Descarregado_2 = v_20_2;
        };
        v_293 = s_St_1_Descarregado_2;
        if (v_19) {
          v_20_3 = false;
        } else {
          v_20_3 = false;
        };
        if (c) {
          s_St_1_Descarregado_3 = false;
        } else {
          s_St_1_Descarregado_3 = v_20_3;
        };
        v_294 = s_St_1_Descarregado_3;
      };
      v_301 = v_292;
      v_302 = v_293;
      v_303 = v_294;
      v_309 = v_307;
      if (ck_3_1_1) {
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
        v_308 = true;
        v_295 = true;
        v_296 = true;
        v_297 = true;
      } else {
        if (d) {
          v_37 = true;
        } else {
          v_37 = self->pnr;
        };
        if (c) {
          v_39 = true;
        } else {
          v_39 = v_37;
        };
        if (a) {
          v_41 = true;
        } else {
          v_41 = v_39;
        };
        if (b) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_41;
        };
        v_308 = r_St_1_Erro;
        if (d) {
          v_36_1 = true;
        } else {
          v_36_1 = true;
        };
        if (c) {
          v_38_1 = false;
        } else {
          v_38_1 = v_36_1;
        };
        if (a) {
          v_40_1 = false;
        } else {
          v_40_1 = v_38_1;
        };
        if (b) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_40_1;
        };
        v_295 = s_St_1_Erro_1;
        if (d) {
          v_36_2 = true;
        } else {
          v_36_2 = false;
        };
        if (c) {
          v_38_2 = false;
        } else {
          v_38_2 = v_36_2;
        };
        if (a) {
          v_40_2 = false;
        } else {
          v_40_2 = v_38_2;
        };
        if (b) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_40_2;
        };
        v_296 = s_St_1_Erro_2;
        if (d) {
          v_36_3 = false;
        } else {
          v_36_3 = false;
        };
        if (c) {
          v_38_3 = false;
        } else {
          v_38_3 = v_36_3;
        };
        if (a) {
          v_40_3 = true;
        } else {
          v_40_3 = v_38_3;
        };
        if (b) {
          s_St_1_Erro_3 = true;
        } else {
          s_St_1_Erro_3 = v_40_3;
        };
        v_297 = s_St_1_Erro_3;
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
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
      v_301 = v_295;
      v_302 = v_296;
      v_303 = v_297;
      v_309 = v_308;
    };
    s_1 = v_301;
    s_2 = v_302;
    s_3 = v_303;
    r = v_309;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_304 = true;
      v_305 = true;
      v_306 = true;
      v_311 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_27 = (e||d);
        if (v_27) {
          v_29 = true;
        } else {
          v_29 = self->pnr;
        };
        if (c) {
          v_31 = true;
        } else {
          v_31 = v_29;
        };
        if (b) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_31;
        };
        if (v_27) {
          v_28_1 = true;
        } else {
          v_28_1 = false;
        };
        if (c) {
          v_30_1 = false;
        } else {
          v_30_1 = v_28_1;
        };
        if (b) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_30_1;
        };
        if (v_27) {
          v_28_2 = false;
        } else {
          v_28_2 = false;
        };
        if (c) {
          v_30_2 = false;
        } else {
          v_30_2 = v_28_2;
        };
        if (b) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_30_2;
        };
        if (v_27) {
          v_28_3 = false;
        } else {
          v_28_3 = true;
        };
        if (c) {
          v_30_3 = false;
        } else {
          v_30_3 = v_28_3;
        };
        if (b) {
          s_St_1_Limiar1_3 = true;
        } else {
          s_St_1_Limiar1_3 = v_30_3;
        };
        v_310 = r_St_1_Limiar1;
        v_298 = s_St_1_Limiar1_1;
        v_299 = s_St_1_Limiar1_2;
        v_300 = s_St_1_Limiar1_3;
        if (v_28_1) {
          v_28_2_1 = v_28_2;
          if (v_28_2_1) {
            v_28_3_1_1 = v_28_3;
          } else {
            v_28_3_1_0 = v_28_3;
          };
        } else {
          v_28_2_0 = v_28_2;
          if (v_28_2_0) {
            v_28_3_0_1 = v_28_3;
          } else {
            v_28_3_0_0 = v_28_3;
          };
        };
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
      } else {
        v_22 = (e||b);
        if (v_22) {
          v_24 = true;
        } else {
          v_24 = self->pnr;
        };
        if (d) {
          v_26 = true;
        } else {
          v_26 = v_24;
        };
        if (a) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_26;
        };
        v_310 = r_St_1_Limiar2;
        if (v_22) {
          v_23_1 = true;
        } else {
          v_23_1 = false;
        };
        if (d) {
          v_25_1 = true;
        } else {
          v_25_1 = v_23_1;
        };
        if (a) {
          s_St_1_Limiar2_1 = false;
        } else {
          s_St_1_Limiar2_1 = v_25_1;
        };
        v_298 = s_St_1_Limiar2_1;
        if (v_22) {
          v_23_2 = false;
        } else {
          v_23_2 = false;
        };
        if (d) {
          v_25_2 = true;
        } else {
          v_25_2 = v_23_2;
        };
        if (a) {
          s_St_1_Limiar2_2 = false;
        } else {
          s_St_1_Limiar2_2 = v_25_2;
        };
        v_299 = s_St_1_Limiar2_2;
        if (v_22) {
          v_23_3 = false;
        } else {
          v_23_3 = false;
        };
        if (d) {
          v_25_3 = false;
        } else {
          v_25_3 = v_23_3;
        };
        if (a) {
          s_St_1_Limiar2_3 = true;
        } else {
          s_St_1_Limiar2_3 = v_25_3;
        };
        v_300 = s_St_1_Limiar2_3;
        if (v_23_1) {
          v_23_2_1 = v_23_2;
          if (v_23_2_1) {
            v_23_3_1_1 = v_23_3;
          } else {
            v_23_3_1_0 = v_23_3;
          };
        } else {
          v_23_2_0 = v_23_2;
          if (v_23_2_0) {
            v_23_3_0_1 = v_23_3;
          } else {
            v_23_3_0_0 = v_23_3;
          };
        };
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
      };
      v_304 = v_298;
      v_305 = v_299;
      v_306 = v_300;
      v_311 = v_310;
    };
    s_1 = v_304;
    s_2 = v_305;
    s_3 = v_306;
    r = v_311;
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
        v_254 = estado_bat_St_1_Carregado_1;
        v_255 = estado_bat_St_1_Carregado_2;
        v_256 = estado_bat_St_1_Carregado_3;
        v_284 = nr_St_1_Carregado;
        v_269 = ns_St_1_Carregado_1;
        v_270 = ns_St_1_Carregado_2;
        v_271 = ns_St_1_Carregado_3;
      } else {
        estado_bat_St_1_Descarregado_1 = true;
        v_254 = estado_bat_St_1_Descarregado_1;
        estado_bat_St_1_Descarregado_2 = true;
        v_255 = estado_bat_St_1_Descarregado_2;
        estado_bat_St_1_Descarregado_3 = true;
        v_256 = estado_bat_St_1_Descarregado_3;
        nr_St_1_Descarregado = false;
        v_284 = nr_St_1_Descarregado;
        ns_St_1_Descarregado_1 = true;
        v_269 = ns_St_1_Descarregado_1;
        ns_St_1_Descarregado_2 = true;
        v_270 = ns_St_1_Descarregado_2;
        ns_St_1_Descarregado_3 = false;
        v_271 = ns_St_1_Descarregado_3;
      };
      v_263 = v_254;
      v_264 = v_255;
      v_265 = v_256;
      v_278 = v_269;
      v_279 = v_270;
      v_280 = v_271;
      v_286 = v_284;
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
        v_257 = true;
        v_258 = true;
        v_259 = true;
        v_285 = true;
        v_272 = true;
        v_273 = true;
        v_274 = true;
      } else {
        estado_bat_St_1_Erro_1 = false;
        v_257 = estado_bat_St_1_Erro_1;
        estado_bat_St_1_Erro_2 = false;
        v_258 = estado_bat_St_1_Erro_2;
        estado_bat_St_1_Erro_3 = false;
        v_259 = estado_bat_St_1_Erro_3;
        nr_St_1_Erro = false;
        v_285 = nr_St_1_Erro;
        ns_St_1_Erro_1 = true;
        v_272 = ns_St_1_Erro_1;
        ns_St_1_Erro_2 = false;
        v_273 = ns_St_1_Erro_2;
        ns_St_1_Erro_3 = false;
        v_274 = ns_St_1_Erro_3;
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
      v_263 = v_257;
      v_264 = v_258;
      v_265 = v_259;
      v_278 = v_272;
      v_279 = v_273;
      v_280 = v_274;
      v_286 = v_285;
    };
    _out->estado_bat_1 = v_263;
    _out->estado_bat_2 = v_264;
    _out->estado_bat_3 = v_265;
    ns_1 = v_278;
    ns_2 = v_279;
    ns_3 = v_280;
    nr = v_286;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_266 = true;
      v_267 = true;
      v_268 = true;
      v_281 = true;
      v_282 = true;
      v_283 = true;
      v_288 = true;
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
        v_260 = estado_bat_St_1_Limiar1_1;
        v_261 = estado_bat_St_1_Limiar1_2;
        v_262 = estado_bat_St_1_Limiar1_3;
        v_287 = nr_St_1_Limiar1;
        v_275 = ns_St_1_Limiar1_1;
        v_276 = ns_St_1_Limiar1_2;
        v_277 = ns_St_1_Limiar1_3;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_260 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = true;
        v_261 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_262 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_287 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_275 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_276 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_277 = ns_St_1_Limiar2_3;
      };
      v_266 = v_260;
      v_267 = v_261;
      v_268 = v_262;
      v_281 = v_275;
      v_282 = v_276;
      v_283 = v_277;
      v_288 = v_287;
    };
    _out->estado_bat_1 = v_266;
    _out->estado_bat_2 = v_267;
    _out->estado_bat_3 = v_268;
    ns_1 = v_281;
    ns_2 = v_282;
    ns_3 = v_283;
    nr = v_288;
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
  self->v_289 = ns_1;
  self->v_290 = ns_2;
  self->v_291 = ns_3;;
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

void Ups_controlador__led_reset(Ups_controlador__led_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Ups_controlador__led_step(int s, Ups_controlador__led_out* _out,
                               Ups_controlador__led_mem* self) {
  
  int nr_St_4_On;
  int ns_St_4_On_1;
  int enabled_St_4_On;
  int nr_St_4_Off;
  int ns_St_4_Off_1;
  int enabled_St_4_Off;
  int ck_5_1;
  int v;
  int r_St_4_On;
  int s_1_St_4_On_1;
  int r_St_4_Off;
  int s_1_St_4_Off_1;
  int s_1_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (s) {
      r_St_4_Off = true;
      s_1_St_4_Off_1 = false;
    } else {
      r_St_4_Off = self->pnr;
      s_1_St_4_Off_1 = true;
    };
    r = r_St_4_Off;
    s_1_1 = s_1_St_4_Off_1;
  } else {
    v = !(s);
    if (v) {
      r_St_4_On = true;
    } else {
      r_St_4_On = self->pnr;
    };
    r = r_St_4_On;
    if (v) {
      s_1_St_4_On_1 = true;
    } else {
      s_1_St_4_On_1 = false;
    };
    s_1_1 = s_1_St_4_On_1;
  };
  ck_5_1 = s_1_1;
  if (ck_5_1) {
    enabled_St_4_Off = false;
    nr_St_4_Off = false;
    ns_St_4_Off_1 = true;
    _out->enabled = enabled_St_4_Off;
    nr = nr_St_4_Off;
    ns_1 = ns_St_4_Off_1;
  } else {
    enabled_St_4_On = true;
    _out->enabled = enabled_St_4_On;
    nr_St_4_On = false;
    nr = nr_St_4_On;
    ns_St_4_On_1 = false;
    ns_1 = ns_St_4_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Ups_controlador__modem_adsl_reset(Ups_controlador__modem_adsl_mem* self) {
  self->pnr = false;
  self->v_342 = true;
  self->v_343 = true;
  self->v_344 = false;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int ns_St_5_Sleep_2_0;
  int ns_St_5_Sleep_3_0_0;
  int ns_St_5_Sleep_3_0_1;
  int ns_St_5_Sleep_2_1;
  int ns_St_5_Sleep_3_1_0;
  int ns_St_5_Sleep_3_1_1;
  int ns_St_5_Online_2_0;
  int ns_St_5_Online_3_0_0;
  int ns_St_5_Online_3_0_1;
  int ns_St_5_Online_2_1;
  int ns_St_5_Online_3_1_0;
  int ns_St_5_Online_3_1_1;
  int ns_St_5_Teste_2_0;
  int ns_St_5_Teste_3_0_0;
  int ns_St_5_Teste_3_0_1;
  int ns_St_5_Teste_2_1;
  int ns_St_5_Teste_3_1_0;
  int ns_St_5_Teste_3_1_1;
  int ns_St_5_Boot_2_0;
  int ns_St_5_Boot_3_0_0;
  int ns_St_5_Boot_3_0_1;
  int ns_St_5_Boot_2_1;
  int ns_St_5_Boot_3_1_0;
  int ns_St_5_Boot_3_1_1;
  int ns_St_5_Off_2_0;
  int ns_St_5_Off_3_0_0;
  int ns_St_5_Off_3_0_1;
  int ns_St_5_Off_2_1;
  int ns_St_5_Off_3_1_0;
  int ns_St_5_Off_3_1_1;
  int ck_6_2_0;
  int ck_6_3_0_0;
  int ck_6_3_0_1;
  int ck_6_2_1;
  int ck_6_3_1_0;
  int ck_6_3_1_1;
  int nr_St_5_Sleep;
  int ns_St_5_Sleep_3;
  int ns_St_5_Sleep_2;
  int ns_St_5_Sleep_1;
  int estado_St_5_Sleep;
  int atuador_St_5_Sleep;
  int nr_St_5_Online;
  int ns_St_5_Online_3;
  int ns_St_5_Online_2;
  int ns_St_5_Online_1;
  int estado_St_5_Online;
  int atuador_St_5_Online;
  int nr_St_5_Teste;
  int ns_St_5_Teste_3;
  int ns_St_5_Teste_2;
  int ns_St_5_Teste_1;
  int estado_St_5_Teste;
  int atuador_St_5_Teste;
  int nr_St_5_Boot;
  int ns_St_5_Boot_3;
  int ns_St_5_Boot_2;
  int ns_St_5_Boot_1;
  int estado_St_5_Boot;
  int atuador_St_5_Boot;
  int nr_St_5_Off;
  int ns_St_5_Off_3;
  int ns_St_5_Off_2;
  int ns_St_5_Off_1;
  int estado_St_5_Off;
  int atuador_St_5_Off;
  int ck_6_3;
  int ck_6_2;
  int ck_6_1;
  int v_70_2_0;
  int v_70_3_0_0;
  int v_70_3_0_1;
  int v_70_2_1;
  int v_70_3_1_0;
  int v_70_3_1_1;
  int v_71;
  int v_70_3;
  int v_70_2;
  int v_70_1;
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
  int v_69;
  int v_68_3;
  int v_68_2;
  int v_68_1;
  int v_67;
  int v_66_3;
  int v_66_2;
  int v_66_1;
  int v_65;
  int v_63_2_0;
  int v_63_3_0_0;
  int v_63_3_0_1;
  int v_63_2_1;
  int v_63_3_1_0;
  int v_63_3_1_1;
  int v_64;
  int v_63_3;
  int v_63_2;
  int v_63_1;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_62;
  int v_3;
  int v_2;
  int v_1;
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
  int s_St_5_Sleep_2_0;
  int s_St_5_Sleep_3_0_0;
  int s_St_5_Sleep_3_0_1;
  int s_St_5_Sleep_2_1;
  int s_St_5_Sleep_3_1_0;
  int s_St_5_Sleep_3_1_1;
  int s_St_5_Online_2_0;
  int s_St_5_Online_3_0_0;
  int s_St_5_Online_3_0_1;
  int s_St_5_Online_2_1;
  int s_St_5_Online_3_1_0;
  int s_St_5_Online_3_1_1;
  int s_St_5_Teste_2_0;
  int s_St_5_Teste_3_0_0;
  int s_St_5_Teste_3_0_1;
  int s_St_5_Teste_2_1;
  int s_St_5_Teste_3_1_0;
  int s_St_5_Teste_3_1_1;
  int s_St_5_Boot_2_0;
  int s_St_5_Boot_3_0_0;
  int s_St_5_Boot_3_0_1;
  int s_St_5_Boot_2_1;
  int s_St_5_Boot_3_1_0;
  int s_St_5_Boot_3_1_1;
  int s_St_5_Off_2_0;
  int s_St_5_Off_3_0_0;
  int s_St_5_Off_3_0_1;
  int s_St_5_Off_2_1;
  int s_St_5_Off_3_1_0;
  int s_St_5_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_5_Sleep;
  int s_St_5_Sleep_3;
  int s_St_5_Sleep_2;
  int s_St_5_Sleep_1;
  int r_St_5_Online;
  int s_St_5_Online_3;
  int s_St_5_Online_2;
  int s_St_5_Online_1;
  int r_St_5_Teste;
  int s_St_5_Teste_3;
  int s_St_5_Teste_2;
  int s_St_5_Teste_1;
  int r_St_5_Boot;
  int s_St_5_Boot_3;
  int s_St_5_Boot_2;
  int s_St_5_Boot_1;
  int r_St_5_Off;
  int s_St_5_Off_3;
  int s_St_5_Off_2;
  int s_St_5_Off_1;
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
  ck_1 = self->v_342;
  ck_2 = self->v_343;
  ck_3 = self->v_344;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (t) {
          v_71 = true;
        } else {
          v_71 = self->pnr;
        };
        if (c) {
          r_St_5_Boot = true;
        } else {
          r_St_5_Boot = v_71;
        };
        v_360 = r_St_5_Boot;
        if (t) {
          v_70_1 = false;
        } else {
          v_70_1 = true;
        };
        if (c) {
          s_St_5_Boot_1 = true;
        } else {
          s_St_5_Boot_1 = v_70_1;
        };
        v_345 = s_St_5_Boot_1;
        if (t) {
          v_70_2 = false;
        } else {
          v_70_2 = true;
        };
        if (c) {
          s_St_5_Boot_2 = true;
        } else {
          s_St_5_Boot_2 = v_70_2;
        };
        v_346 = s_St_5_Boot_2;
        if (t) {
          v_70_3 = false;
        } else {
          v_70_3 = true;
        };
        if (c) {
          s_St_5_Boot_3 = false;
        } else {
          s_St_5_Boot_3 = v_70_3;
        };
        v_347 = s_St_5_Boot_3;
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
        if (s_St_5_Boot_1) {
          s_St_5_Boot_2_1 = s_St_5_Boot_2;
          if (s_St_5_Boot_2_1) {
            s_St_5_Boot_3_1_1 = s_St_5_Boot_3;
          } else {
            s_St_5_Boot_3_1_0 = s_St_5_Boot_3;
          };
        } else {
          s_St_5_Boot_2_0 = s_St_5_Boot_2;
          if (s_St_5_Boot_2_0) {
            s_St_5_Boot_3_0_1 = s_St_5_Boot_3;
          } else {
            s_St_5_Boot_3_0_0 = s_St_5_Boot_3;
          };
        };
      } else {
        if (c) {
          r_St_5_Off = true;
          s_St_5_Off_1 = true;
          s_St_5_Off_2 = true;
          s_St_5_Off_3 = true;
        } else {
          r_St_5_Off = self->pnr;
          s_St_5_Off_1 = true;
          s_St_5_Off_2 = true;
          s_St_5_Off_3 = false;
        };
        v_360 = r_St_5_Off;
        v_345 = s_St_5_Off_1;
        v_346 = s_St_5_Off_2;
        v_347 = s_St_5_Off_3;
        if (s_St_5_Off_1) {
          s_St_5_Off_2_1 = s_St_5_Off_2;
          if (s_St_5_Off_2_1) {
            s_St_5_Off_3_1_1 = s_St_5_Off_3;
          } else {
            s_St_5_Off_3_1_0 = s_St_5_Off_3;
          };
        } else {
          s_St_5_Off_2_0 = s_St_5_Off_2;
          if (s_St_5_Off_2_0) {
            s_St_5_Off_3_0_1 = s_St_5_Off_3;
          } else {
            s_St_5_Off_3_0_0 = s_St_5_Off_3;
          };
        };
      };
      v_354 = v_345;
      v_355 = v_346;
      v_356 = v_347;
      v_362 = v_360;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_361 = true;
        v_348 = true;
        v_349 = true;
        v_350 = true;
      } else {
        if (t) {
          v_64 = true;
        } else {
          v_64 = self->pnr;
        };
        if (c) {
          r_St_5_Online = true;
        } else {
          r_St_5_Online = v_64;
        };
        v_361 = r_St_5_Online;
        if (t) {
          v_63_1 = false;
        } else {
          v_63_1 = true;
        };
        if (c) {
          s_St_5_Online_1 = true;
        } else {
          s_St_5_Online_1 = v_63_1;
        };
        v_348 = s_St_5_Online_1;
        if (t) {
          v_63_2 = false;
        } else {
          v_63_2 = false;
        };
        if (c) {
          s_St_5_Online_2 = true;
        } else {
          s_St_5_Online_2 = v_63_2;
        };
        v_349 = s_St_5_Online_2;
        if (t) {
          v_63_3 = false;
        } else {
          v_63_3 = false;
        };
        if (c) {
          s_St_5_Online_3 = false;
        } else {
          s_St_5_Online_3 = v_63_3;
        };
        v_350 = s_St_5_Online_3;
      };
      v_354 = v_348;
      v_355 = v_349;
      v_356 = v_350;
      v_362 = v_361;
      if (!(ck_3_1_0)) {
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
        if (s_St_5_Online_1) {
          s_St_5_Online_2_1 = s_St_5_Online_2;
          if (s_St_5_Online_2_1) {
            s_St_5_Online_3_1_1 = s_St_5_Online_3;
          } else {
            s_St_5_Online_3_1_0 = s_St_5_Online_3;
          };
        } else {
          s_St_5_Online_2_0 = s_St_5_Online_2;
          if (s_St_5_Online_2_0) {
            s_St_5_Online_3_0_1 = s_St_5_Online_3;
          } else {
            s_St_5_Online_3_0_0 = s_St_5_Online_3;
          };
        };
      };
    };
    s_1 = v_354;
    s_2 = v_355;
    s_3 = v_356;
    r = v_362;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_357 = true;
      v_358 = true;
      v_359 = true;
      v_364 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (t) {
          v_62 = true;
        } else {
          v_62 = self->pnr;
        };
        if (c) {
          r_St_5_Sleep = true;
        } else {
          r_St_5_Sleep = v_62;
        };
        v_363 = r_St_5_Sleep;
        if (t) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (c) {
          s_St_5_Sleep_1 = true;
        } else {
          s_St_5_Sleep_1 = v_1;
        };
        v_351 = s_St_5_Sleep_1;
        if (t) {
          v_2 = true;
        } else {
          v_2 = false;
        };
        if (c) {
          s_St_5_Sleep_2 = true;
        } else {
          s_St_5_Sleep_2 = v_2;
        };
        v_352 = s_St_5_Sleep_2;
        if (t) {
          v_3 = true;
        } else {
          v_3 = true;
        };
        if (c) {
          s_St_5_Sleep_3 = false;
        } else {
          s_St_5_Sleep_3 = v_3;
        };
        v_353 = s_St_5_Sleep_3;
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
          v_67 = true;
          v_66_1 = true;
          v_66_2 = false;
          v_66_3 = false;
        } else {
          v_67 = self->pnr;
          v_66_1 = false;
          v_66_2 = false;
          v_66_3 = false;
        };
        v_65 = !(o);
        if (v_65) {
          v_69 = true;
        } else {
          v_69 = v_67;
        };
        if (c) {
          r_St_5_Teste = true;
        } else {
          r_St_5_Teste = v_69;
        };
        if (v_65) {
          v_68_1 = false;
        } else {
          v_68_1 = v_66_1;
        };
        if (c) {
          s_St_5_Teste_1 = true;
        } else {
          s_St_5_Teste_1 = v_68_1;
        };
        if (v_65) {
          v_68_2 = false;
        } else {
          v_68_2 = v_66_2;
        };
        if (c) {
          s_St_5_Teste_2 = true;
        } else {
          s_St_5_Teste_2 = v_68_2;
        };
        if (v_65) {
          v_68_3 = true;
        } else {
          v_68_3 = v_66_3;
        };
        if (c) {
          s_St_5_Teste_3 = false;
        } else {
          s_St_5_Teste_3 = v_68_3;
        };
        v_363 = r_St_5_Teste;
        v_351 = s_St_5_Teste_1;
        v_352 = s_St_5_Teste_2;
        v_353 = s_St_5_Teste_3;
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
      };
      v_357 = v_351;
      v_358 = v_352;
      v_359 = v_353;
      v_364 = v_363;
    };
    s_1 = v_357;
    s_2 = v_358;
    s_3 = v_359;
    r = v_364;
  };
  ck_6_1 = s_1;
  ck_6_2 = s_2;
  ck_6_3 = s_3;
  if (ck_6_1) {
    ck_6_2_1 = ck_6_2;
    if (ck_6_2_1) {
      ck_6_3_1_1 = ck_6_3;
      if (ck_6_3_1_1) {
        estado_St_5_Boot = 2;
        v_317 = estado_St_5_Boot;
        atuador_St_5_Boot = true;
        v_312 = atuador_St_5_Boot;
        nr_St_5_Boot = false;
        v_337 = nr_St_5_Boot;
        ns_St_5_Boot_1 = true;
        v_322 = ns_St_5_Boot_1;
        ns_St_5_Boot_2 = true;
        v_323 = ns_St_5_Boot_2;
        ns_St_5_Boot_3 = true;
        v_324 = ns_St_5_Boot_3;
        if (ns_St_5_Boot_1) {
          ns_St_5_Boot_2_1 = ns_St_5_Boot_2;
          if (ns_St_5_Boot_2_1) {
            ns_St_5_Boot_3_1_1 = ns_St_5_Boot_3;
          } else {
            ns_St_5_Boot_3_1_0 = ns_St_5_Boot_3;
          };
        } else {
          ns_St_5_Boot_2_0 = ns_St_5_Boot_2;
          if (ns_St_5_Boot_2_0) {
            ns_St_5_Boot_3_0_1 = ns_St_5_Boot_3;
          } else {
            ns_St_5_Boot_3_0_0 = ns_St_5_Boot_3;
          };
        };
      } else {
        estado_St_5_Off = 0;
        atuador_St_5_Off = false;
        nr_St_5_Off = false;
        ns_St_5_Off_1 = true;
        ns_St_5_Off_2 = true;
        ns_St_5_Off_3 = false;
        v_317 = estado_St_5_Off;
        v_312 = atuador_St_5_Off;
        v_337 = nr_St_5_Off;
        v_322 = ns_St_5_Off_1;
        v_323 = ns_St_5_Off_2;
        v_324 = ns_St_5_Off_3;
        if (ns_St_5_Off_1) {
          ns_St_5_Off_2_1 = ns_St_5_Off_2;
          if (ns_St_5_Off_2_1) {
            ns_St_5_Off_3_1_1 = ns_St_5_Off_3;
          } else {
            ns_St_5_Off_3_1_0 = ns_St_5_Off_3;
          };
        } else {
          ns_St_5_Off_2_0 = ns_St_5_Off_2;
          if (ns_St_5_Off_2_0) {
            ns_St_5_Off_3_0_1 = ns_St_5_Off_3;
          } else {
            ns_St_5_Off_3_0_0 = ns_St_5_Off_3;
          };
        };
      };
      v_314 = v_312;
      v_319 = v_317;
      v_331 = v_322;
      v_332 = v_323;
      v_333 = v_324;
      v_339 = v_337;
    } else {
      ck_6_3_1_0 = ck_6_3;
      if (ck_6_3_1_0) {
        v_318 = 0;
        v_313 = true;
        v_338 = true;
        v_325 = true;
        v_326 = true;
        v_327 = true;
      } else {
        estado_St_5_Online = 4;
        v_318 = estado_St_5_Online;
        atuador_St_5_Online = true;
        v_313 = atuador_St_5_Online;
        nr_St_5_Online = false;
        v_338 = nr_St_5_Online;
        ns_St_5_Online_1 = true;
        v_325 = ns_St_5_Online_1;
        ns_St_5_Online_2 = false;
        v_326 = ns_St_5_Online_2;
        ns_St_5_Online_3 = false;
        v_327 = ns_St_5_Online_3;
      };
      v_314 = v_313;
      v_319 = v_318;
      v_331 = v_325;
      v_332 = v_326;
      v_333 = v_327;
      v_339 = v_338;
      if (!(ck_6_3_1_0)) {
        if (ns_St_5_Online_1) {
          ns_St_5_Online_2_1 = ns_St_5_Online_2;
          if (ns_St_5_Online_2_1) {
            ns_St_5_Online_3_1_1 = ns_St_5_Online_3;
          } else {
            ns_St_5_Online_3_1_0 = ns_St_5_Online_3;
          };
        } else {
          ns_St_5_Online_2_0 = ns_St_5_Online_2;
          if (ns_St_5_Online_2_0) {
            ns_St_5_Online_3_0_1 = ns_St_5_Online_3;
          } else {
            ns_St_5_Online_3_0_0 = ns_St_5_Online_3;
          };
        };
      };
    };
    _out->atuador = v_314;
    _out->estado = v_319;
    ns_1 = v_331;
    ns_2 = v_332;
    ns_3 = v_333;
    nr = v_339;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      v_316 = true;
      v_321 = 0;
      v_334 = true;
      v_335 = true;
      v_336 = true;
      v_341 = true;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        estado_St_5_Sleep = 1;
        v_320 = estado_St_5_Sleep;
        atuador_St_5_Sleep = false;
        v_315 = atuador_St_5_Sleep;
        nr_St_5_Sleep = false;
        v_340 = nr_St_5_Sleep;
        ns_St_5_Sleep_1 = false;
        v_328 = ns_St_5_Sleep_1;
        ns_St_5_Sleep_2 = false;
        v_329 = ns_St_5_Sleep_2;
        ns_St_5_Sleep_3 = true;
        v_330 = ns_St_5_Sleep_3;
      } else {
        estado_St_5_Teste = 3;
        atuador_St_5_Teste = true;
        nr_St_5_Teste = false;
        ns_St_5_Teste_1 = false;
        ns_St_5_Teste_2 = false;
        ns_St_5_Teste_3 = false;
        v_320 = estado_St_5_Teste;
        v_315 = atuador_St_5_Teste;
        v_340 = nr_St_5_Teste;
        v_328 = ns_St_5_Teste_1;
        v_329 = ns_St_5_Teste_2;
        v_330 = ns_St_5_Teste_3;
      };
      v_316 = v_315;
      v_321 = v_320;
      v_334 = v_328;
      v_335 = v_329;
      v_336 = v_330;
      v_341 = v_340;
    };
    _out->atuador = v_316;
    _out->estado = v_321;
    ns_1 = v_334;
    ns_2 = v_335;
    ns_3 = v_336;
    nr = v_341;
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
  if (!(ck_6_1)) {
    if (!(ck_6_2_0)) {
      if (ck_6_3_0_0) {
        if (ns_St_5_Sleep_1) {
          ns_St_5_Sleep_2_1 = ns_St_5_Sleep_2;
          if (ns_St_5_Sleep_2_1) {
            ns_St_5_Sleep_3_1_1 = ns_St_5_Sleep_3;
          } else {
            ns_St_5_Sleep_3_1_0 = ns_St_5_Sleep_3;
          };
        } else {
          ns_St_5_Sleep_2_0 = ns_St_5_Sleep_2;
          if (ns_St_5_Sleep_2_0) {
            ns_St_5_Sleep_3_0_1 = ns_St_5_Sleep_3;
          } else {
            ns_St_5_Sleep_3_0_0 = ns_St_5_Sleep_3;
          };
        };
      } else {
        if (ns_St_5_Teste_1) {
          ns_St_5_Teste_2_1 = ns_St_5_Teste_2;
          if (ns_St_5_Teste_2_1) {
            ns_St_5_Teste_3_1_1 = ns_St_5_Teste_3;
          } else {
            ns_St_5_Teste_3_1_0 = ns_St_5_Teste_3;
          };
        } else {
          ns_St_5_Teste_2_0 = ns_St_5_Teste_2;
          if (ns_St_5_Teste_2_0) {
            ns_St_5_Teste_3_0_1 = ns_St_5_Teste_3;
          } else {
            ns_St_5_Teste_3_0_0 = ns_St_5_Teste_3;
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
        if (s_St_5_Sleep_1) {
          s_St_5_Sleep_2_1 = s_St_5_Sleep_2;
          if (s_St_5_Sleep_2_1) {
            s_St_5_Sleep_3_1_1 = s_St_5_Sleep_3;
          } else {
            s_St_5_Sleep_3_1_0 = s_St_5_Sleep_3;
          };
        } else {
          s_St_5_Sleep_2_0 = s_St_5_Sleep_2;
          if (s_St_5_Sleep_2_0) {
            s_St_5_Sleep_3_0_1 = s_St_5_Sleep_3;
          } else {
            s_St_5_Sleep_3_0_0 = s_St_5_Sleep_3;
          };
        };
      } else {
        if (s_St_5_Teste_1) {
          s_St_5_Teste_2_1 = s_St_5_Teste_2;
          if (s_St_5_Teste_2_1) {
            s_St_5_Teste_3_1_1 = s_St_5_Teste_3;
          } else {
            s_St_5_Teste_3_1_0 = s_St_5_Teste_3;
          };
        } else {
          s_St_5_Teste_2_0 = s_St_5_Teste_2;
          if (s_St_5_Teste_2_0) {
            s_St_5_Teste_3_0_1 = s_St_5_Teste_3;
          } else {
            s_St_5_Teste_3_0_0 = s_St_5_Teste_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_342 = ns_1;
  self->v_343 = ns_2;
  self->v_344 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_400 = true;
  self->v_401 = false;
  self->v_402 = false;
  self->pnr_1 = false;
  self->ck_15_1 = true;
  self->pnr_2 = false;
  self->ck_13_1 = true;
  self->pnr_3 = false;
  self->v_453 = true;
  self->v_454 = true;
  self->v_455 = false;
  self->pnr_4 = false;
  self->v_506 = true;
  self->v_507 = true;
  self->v_508 = false;
  self->pnr_5 = false;
  self->ck_7_1 = true;
}

void Ups_controlador__contrato_step(int cb, int l1b, int l2b, int vb, int td,
                                    int tm, int om, int ts, int swa,
                                    int swr1, int swr3, int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int ns_St_6_Descarregado_2_0;
  int ns_St_6_Descarregado_3_0_0;
  int ns_St_6_Descarregado_3_0_1;
  int ns_St_6_Descarregado_2_1;
  int ns_St_6_Descarregado_3_1_0;
  int ns_St_6_Descarregado_3_1_1;
  int estado_bat_St_6_Descarregado_2_0;
  int estado_bat_St_6_Descarregado_3_0_0;
  int estado_bat_St_6_Descarregado_3_0_1;
  int estado_bat_St_6_Descarregado_2_1;
  int estado_bat_St_6_Descarregado_3_1_0;
  int estado_bat_St_6_Descarregado_3_1_1;
  int ns_St_6_Limiar2_2_0;
  int ns_St_6_Limiar2_3_0_0;
  int ns_St_6_Limiar2_3_0_1;
  int ns_St_6_Limiar2_2_1;
  int ns_St_6_Limiar2_3_1_0;
  int ns_St_6_Limiar2_3_1_1;
  int estado_bat_St_6_Limiar2_2_0;
  int estado_bat_St_6_Limiar2_3_0_0;
  int estado_bat_St_6_Limiar2_3_0_1;
  int estado_bat_St_6_Limiar2_2_1;
  int estado_bat_St_6_Limiar2_3_1_0;
  int estado_bat_St_6_Limiar2_3_1_1;
  int ns_St_6_Limiar1_2_0;
  int ns_St_6_Limiar1_3_0_0;
  int ns_St_6_Limiar1_3_0_1;
  int ns_St_6_Limiar1_2_1;
  int ns_St_6_Limiar1_3_1_0;
  int ns_St_6_Limiar1_3_1_1;
  int estado_bat_St_6_Limiar1_2_0;
  int estado_bat_St_6_Limiar1_3_0_0;
  int estado_bat_St_6_Limiar1_3_0_1;
  int estado_bat_St_6_Limiar1_2_1;
  int estado_bat_St_6_Limiar1_3_1_0;
  int estado_bat_St_6_Limiar1_3_1_1;
  int ns_St_6_Carregado_2_0;
  int ns_St_6_Carregado_3_0_0;
  int ns_St_6_Carregado_3_0_1;
  int ns_St_6_Carregado_2_1;
  int ns_St_6_Carregado_3_1_0;
  int ns_St_6_Carregado_3_1_1;
  int estado_bat_St_6_Carregado_2_0;
  int estado_bat_St_6_Carregado_3_0_0;
  int estado_bat_St_6_Carregado_3_0_1;
  int estado_bat_St_6_Carregado_2_1;
  int estado_bat_St_6_Carregado_3_1_0;
  int estado_bat_St_6_Carregado_3_1_1;
  int ns_St_6_Erro_2_0;
  int ns_St_6_Erro_3_0_0;
  int ns_St_6_Erro_3_0_1;
  int ns_St_6_Erro_2_1;
  int ns_St_6_Erro_3_1_0;
  int ns_St_6_Erro_3_1_1;
  int estado_bat_St_6_Erro_2_0;
  int estado_bat_St_6_Erro_3_0_0;
  int estado_bat_St_6_Erro_3_0_1;
  int estado_bat_St_6_Erro_2_1;
  int estado_bat_St_6_Erro_3_1_0;
  int estado_bat_St_6_Erro_3_1_1;
  int ck_18_2_0;
  int ck_18_3_0_0;
  int ck_18_3_0_1;
  int ck_18_2_1;
  int ck_18_3_1_0;
  int ck_18_3_1_1;
  int nr_St_6_Descarregado;
  int ns_St_6_Descarregado_3;
  int ns_St_6_Descarregado_2;
  int ns_St_6_Descarregado_1;
  int estado_bat_St_6_Descarregado_3;
  int estado_bat_St_6_Descarregado_2;
  int estado_bat_St_6_Descarregado_1;
  int nr_St_6_Limiar2;
  int ns_St_6_Limiar2_3;
  int ns_St_6_Limiar2_2;
  int ns_St_6_Limiar2_1;
  int estado_bat_St_6_Limiar2_3;
  int estado_bat_St_6_Limiar2_2;
  int estado_bat_St_6_Limiar2_1;
  int nr_St_6_Limiar1;
  int ns_St_6_Limiar1_3;
  int ns_St_6_Limiar1_2;
  int ns_St_6_Limiar1_1;
  int estado_bat_St_6_Limiar1_3;
  int estado_bat_St_6_Limiar1_2;
  int estado_bat_St_6_Limiar1_1;
  int nr_St_6_Carregado;
  int ns_St_6_Carregado_3;
  int ns_St_6_Carregado_2;
  int ns_St_6_Carregado_1;
  int estado_bat_St_6_Carregado_3;
  int estado_bat_St_6_Carregado_2;
  int estado_bat_St_6_Carregado_1;
  int nr_St_6_Erro;
  int ns_St_6_Erro_3;
  int ns_St_6_Erro_2;
  int ns_St_6_Erro_1;
  int estado_bat_St_6_Erro_3;
  int estado_bat_St_6_Erro_2;
  int estado_bat_St_6_Erro_1;
  int ck_18_3;
  int ck_18_2;
  int ck_18_1;
  int v_179_2_0;
  int v_179_3_0_0;
  int v_179_3_0_1;
  int v_179_2_1;
  int v_179_3_1_0;
  int v_179_3_1_1;
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
  int v_180;
  int v_179_3;
  int v_179_2;
  int v_179_1;
  int v_178;
  int v_177_3;
  int v_177_2;
  int v_177_1;
  int v_176;
  int v_175_3;
  int v_175_2;
  int v_175_1;
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
  int v_172;
  int v_171;
  int v_169_2_0;
  int v_169_3_0_0;
  int v_169_3_0_1;
  int v_169_2_1;
  int v_169_3_1_0;
  int v_169_3_1_1;
  int v_167_2_0;
  int v_167_3_0_0;
  int v_167_3_0_1;
  int v_167_2_1;
  int v_167_3_1_0;
  int v_167_3_1_1;
  int v_170;
  int v_169_3;
  int v_169_2;
  int v_169_1;
  int v_168;
  int v_167_3;
  int v_167_2;
  int v_167_1;
  int v_166;
  int v_164_2_0;
  int v_164_3_0_0;
  int v_164_3_0_1;
  int v_164_2_1;
  int v_164_3_1_0;
  int v_164_3_1_1;
  int v_162_2_0;
  int v_162_3_0_0;
  int v_162_3_0_1;
  int v_162_2_1;
  int v_162_3_1_0;
  int v_162_3_1_1;
  int v_165;
  int v_164_3;
  int v_164_2;
  int v_164_1;
  int v_163;
  int v_162_3;
  int v_162_2;
  int v_162_1;
  int v_161;
  int v_159_2_0;
  int v_159_3_0_0;
  int v_159_3_0_1;
  int v_159_2_1;
  int v_159_3_1_0;
  int v_159_3_1_1;
  int v_160;
  int v_159_3;
  int v_159_2;
  int v_159_1;
  int v_158;
  int v_157;
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
  int s_2_St_6_Descarregado_2_0;
  int s_2_St_6_Descarregado_3_0_0;
  int s_2_St_6_Descarregado_3_0_1;
  int s_2_St_6_Descarregado_2_1;
  int s_2_St_6_Descarregado_3_1_0;
  int s_2_St_6_Descarregado_3_1_1;
  int s_2_St_6_Limiar2_2_0;
  int s_2_St_6_Limiar2_3_0_0;
  int s_2_St_6_Limiar2_3_0_1;
  int s_2_St_6_Limiar2_2_1;
  int s_2_St_6_Limiar2_3_1_0;
  int s_2_St_6_Limiar2_3_1_1;
  int s_2_St_6_Limiar1_2_0;
  int s_2_St_6_Limiar1_3_0_0;
  int s_2_St_6_Limiar1_3_0_1;
  int s_2_St_6_Limiar1_2_1;
  int s_2_St_6_Limiar1_3_1_0;
  int s_2_St_6_Limiar1_3_1_1;
  int s_2_St_6_Carregado_2_0;
  int s_2_St_6_Carregado_3_0_0;
  int s_2_St_6_Carregado_3_0_1;
  int s_2_St_6_Carregado_2_1;
  int s_2_St_6_Carregado_3_1_0;
  int s_2_St_6_Carregado_3_1_1;
  int s_2_St_6_Erro_2_0;
  int s_2_St_6_Erro_3_0_0;
  int s_2_St_6_Erro_3_0_1;
  int s_2_St_6_Erro_2_1;
  int s_2_St_6_Erro_3_1_0;
  int s_2_St_6_Erro_3_1_1;
  int ck_17_2_0;
  int ck_17_3_0_0;
  int ck_17_3_0_1;
  int ck_17_2_1;
  int ck_17_3_1_0;
  int ck_17_3_1_1;
  int r_St_6_Descarregado;
  int s_2_St_6_Descarregado_3;
  int s_2_St_6_Descarregado_2;
  int s_2_St_6_Descarregado_1;
  int r_St_6_Limiar2;
  int s_2_St_6_Limiar2_3;
  int s_2_St_6_Limiar2_2;
  int s_2_St_6_Limiar2_1;
  int r_St_6_Limiar1;
  int s_2_St_6_Limiar1_3;
  int s_2_St_6_Limiar1_2;
  int s_2_St_6_Limiar1_1;
  int r_St_6_Carregado;
  int s_2_St_6_Carregado_3;
  int s_2_St_6_Carregado_2;
  int s_2_St_6_Carregado_1;
  int r_St_6_Erro;
  int s_2_St_6_Erro_3;
  int s_2_St_6_Erro_2;
  int s_2_St_6_Erro_1;
  int ck_17_3;
  int ck_17_2;
  int ck_17_1;
  int nr_1_St_7_Noite;
  int ns_1_St_7_Noite_1;
  int isday_St_7_Noite;
  int nr_1_St_7_Dia;
  int ns_1_St_7_Dia_1;
  int isday_St_7_Dia;
  int ck_16_1;
  int r_1_St_7_Noite;
  int s_3_St_7_Noite_1;
  int r_1_St_7_Dia;
  int s_3_St_7_Dia_1;
  int nr_2_St_8_On;
  int ns_2_St_8_On_1;
  int enabled_St_8_On;
  int nr_2_St_8_Off;
  int ns_2_St_8_Off_1;
  int enabled_St_8_Off;
  int ck_14_1;
  int v_156;
  int r_2_St_8_On;
  int s_4_St_8_On_1;
  int r_2_St_8_Off;
  int s_4_St_8_Off_1;
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
  int ns_3_St_9_Rlevel4_2_0;
  int ns_3_St_9_Rlevel4_3_0_0;
  int ns_3_St_9_Rlevel4_3_0_1;
  int ns_3_St_9_Rlevel4_2_1;
  int ns_3_St_9_Rlevel4_3_1_0;
  int ns_3_St_9_Rlevel4_3_1_1;
  int ns_3_St_9_Rlevel3_2_0;
  int ns_3_St_9_Rlevel3_3_0_0;
  int ns_3_St_9_Rlevel3_3_0_1;
  int ns_3_St_9_Rlevel3_2_1;
  int ns_3_St_9_Rlevel3_3_1_0;
  int ns_3_St_9_Rlevel3_3_1_1;
  int ns_3_St_9_Rlevel1_2_0;
  int ns_3_St_9_Rlevel1_3_0_0;
  int ns_3_St_9_Rlevel1_3_0_1;
  int ns_3_St_9_Rlevel1_2_1;
  int ns_3_St_9_Rlevel1_3_1_0;
  int ns_3_St_9_Rlevel1_3_1_1;
  int ns_3_St_9_Boot_2_0;
  int ns_3_St_9_Boot_3_0_0;
  int ns_3_St_9_Boot_3_0_1;
  int ns_3_St_9_Boot_2_1;
  int ns_3_St_9_Boot_3_1_0;
  int ns_3_St_9_Boot_3_1_1;
  int ns_3_St_9_Off_2_0;
  int ns_3_St_9_Off_3_0_0;
  int ns_3_St_9_Off_3_0_1;
  int ns_3_St_9_Off_2_1;
  int ns_3_St_9_Off_3_1_0;
  int ns_3_St_9_Off_3_1_1;
  int ck_12_2_0;
  int ck_12_3_0_0;
  int ck_12_3_0_1;
  int ck_12_2_1;
  int ck_12_3_1_0;
  int ck_12_3_1_1;
  int nr_3_St_9_Rlevel4;
  int ns_3_St_9_Rlevel4_3;
  int ns_3_St_9_Rlevel4_2;
  int ns_3_St_9_Rlevel4_1;
  int estado_2_St_9_Rlevel4;
  int atuador_1_St_9_Rlevel4;
  int nr_3_St_9_Rlevel3;
  int ns_3_St_9_Rlevel3_3;
  int ns_3_St_9_Rlevel3_2;
  int ns_3_St_9_Rlevel3_1;
  int estado_2_St_9_Rlevel3;
  int atuador_1_St_9_Rlevel3;
  int nr_3_St_9_Rlevel1;
  int ns_3_St_9_Rlevel1_3;
  int ns_3_St_9_Rlevel1_2;
  int ns_3_St_9_Rlevel1_1;
  int estado_2_St_9_Rlevel1;
  int atuador_1_St_9_Rlevel1;
  int nr_3_St_9_Boot;
  int ns_3_St_9_Boot_3;
  int ns_3_St_9_Boot_2;
  int ns_3_St_9_Boot_1;
  int estado_2_St_9_Boot;
  int atuador_1_St_9_Boot;
  int nr_3_St_9_Off;
  int ns_3_St_9_Off_3;
  int ns_3_St_9_Off_2;
  int ns_3_St_9_Off_1;
  int estado_2_St_9_Off;
  int atuador_1_St_9_Off;
  int ck_12_3;
  int ck_12_2;
  int ck_12_1;
  int v_150_2_0;
  int v_150_3_0_0;
  int v_150_3_0_1;
  int v_150_2_1;
  int v_150_3_1_0;
  int v_150_3_1_1;
  int v_151;
  int v_150_3;
  int v_150_2;
  int v_150_1;
  int v_148_2_0;
  int v_148_3_0_0;
  int v_148_3_0_1;
  int v_148_2_1;
  int v_148_3_1_0;
  int v_148_3_1_1;
  int v_146_2_0;
  int v_146_3_0_0;
  int v_146_3_0_1;
  int v_146_2_1;
  int v_146_3_1_0;
  int v_146_3_1_1;
  int v_149;
  int v_148_3;
  int v_148_2;
  int v_148_1;
  int v_147;
  int v_146_3;
  int v_146_2;
  int v_146_1;
  int v_144_2_0;
  int v_144_3_0_0;
  int v_144_3_0_1;
  int v_144_2_1;
  int v_144_3_1_0;
  int v_144_3_1_1;
  int v_142_2_0;
  int v_142_3_0_0;
  int v_142_3_0_1;
  int v_142_2_1;
  int v_142_3_1_0;
  int v_142_3_1_1;
  int v_145;
  int v_144_3;
  int v_144_2;
  int v_144_1;
  int v_143;
  int v_142_3;
  int v_142_2;
  int v_142_1;
  int v_140_2_0;
  int v_140_3_0_0;
  int v_140_3_0_1;
  int v_140_2_1;
  int v_140_3_1_0;
  int v_140_3_1_1;
  int v_138_2_0;
  int v_138_3_0_0;
  int v_138_3_0_1;
  int v_138_2_1;
  int v_138_3_1_0;
  int v_138_3_1_1;
  int v_141;
  int v_140_3;
  int v_140_2;
  int v_140_1;
  int v_139;
  int v_138_3;
  int v_138_2;
  int v_138_1;
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
  int s_5_St_9_Rlevel4_2_0;
  int s_5_St_9_Rlevel4_3_0_0;
  int s_5_St_9_Rlevel4_3_0_1;
  int s_5_St_9_Rlevel4_2_1;
  int s_5_St_9_Rlevel4_3_1_0;
  int s_5_St_9_Rlevel4_3_1_1;
  int s_5_St_9_Rlevel3_2_0;
  int s_5_St_9_Rlevel3_3_0_0;
  int s_5_St_9_Rlevel3_3_0_1;
  int s_5_St_9_Rlevel3_2_1;
  int s_5_St_9_Rlevel3_3_1_0;
  int s_5_St_9_Rlevel3_3_1_1;
  int s_5_St_9_Rlevel1_2_0;
  int s_5_St_9_Rlevel1_3_0_0;
  int s_5_St_9_Rlevel1_3_0_1;
  int s_5_St_9_Rlevel1_2_1;
  int s_5_St_9_Rlevel1_3_1_0;
  int s_5_St_9_Rlevel1_3_1_1;
  int s_5_St_9_Boot_2_0;
  int s_5_St_9_Boot_3_0_0;
  int s_5_St_9_Boot_3_0_1;
  int s_5_St_9_Boot_2_1;
  int s_5_St_9_Boot_3_1_0;
  int s_5_St_9_Boot_3_1_1;
  int s_5_St_9_Off_2_0;
  int s_5_St_9_Off_3_0_0;
  int s_5_St_9_Off_3_0_1;
  int s_5_St_9_Off_2_1;
  int s_5_St_9_Off_3_1_0;
  int s_5_St_9_Off_3_1_1;
  int ck_11_2_0;
  int ck_11_3_0_0;
  int ck_11_3_0_1;
  int ck_11_2_1;
  int ck_11_3_1_0;
  int ck_11_3_1_1;
  int r_3_St_9_Rlevel4;
  int s_5_St_9_Rlevel4_3;
  int s_5_St_9_Rlevel4_2;
  int s_5_St_9_Rlevel4_1;
  int r_3_St_9_Rlevel3;
  int s_5_St_9_Rlevel3_3;
  int s_5_St_9_Rlevel3_2;
  int s_5_St_9_Rlevel3_1;
  int r_3_St_9_Rlevel1;
  int s_5_St_9_Rlevel1_3;
  int s_5_St_9_Rlevel1_2;
  int s_5_St_9_Rlevel1_1;
  int r_3_St_9_Boot;
  int s_5_St_9_Boot_3;
  int s_5_St_9_Boot_2;
  int s_5_St_9_Boot_1;
  int r_3_St_9_Off;
  int s_5_St_9_Off_3;
  int s_5_St_9_Off_2;
  int s_5_St_9_Off_1;
  int ck_11_3;
  int ck_11_2;
  int ck_11_1;
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
  int v_477;
  int v_476;
  int ns_4_St_10_Sleep_2_0;
  int ns_4_St_10_Sleep_3_0_0;
  int ns_4_St_10_Sleep_3_0_1;
  int ns_4_St_10_Sleep_2_1;
  int ns_4_St_10_Sleep_3_1_0;
  int ns_4_St_10_Sleep_3_1_1;
  int ns_4_St_10_Online_2_0;
  int ns_4_St_10_Online_3_0_0;
  int ns_4_St_10_Online_3_0_1;
  int ns_4_St_10_Online_2_1;
  int ns_4_St_10_Online_3_1_0;
  int ns_4_St_10_Online_3_1_1;
  int ns_4_St_10_Teste_2_0;
  int ns_4_St_10_Teste_3_0_0;
  int ns_4_St_10_Teste_3_0_1;
  int ns_4_St_10_Teste_2_1;
  int ns_4_St_10_Teste_3_1_0;
  int ns_4_St_10_Teste_3_1_1;
  int ns_4_St_10_Boot_2_0;
  int ns_4_St_10_Boot_3_0_0;
  int ns_4_St_10_Boot_3_0_1;
  int ns_4_St_10_Boot_2_1;
  int ns_4_St_10_Boot_3_1_0;
  int ns_4_St_10_Boot_3_1_1;
  int ns_4_St_10_Off_2_0;
  int ns_4_St_10_Off_3_0_0;
  int ns_4_St_10_Off_3_0_1;
  int ns_4_St_10_Off_2_1;
  int ns_4_St_10_Off_3_1_0;
  int ns_4_St_10_Off_3_1_1;
  int ck_10_2_0;
  int ck_10_3_0_0;
  int ck_10_3_0_1;
  int ck_10_2_1;
  int ck_10_3_1_0;
  int ck_10_3_1_1;
  int nr_4_St_10_Sleep;
  int ns_4_St_10_Sleep_3;
  int ns_4_St_10_Sleep_2;
  int ns_4_St_10_Sleep_1;
  int estado_1_St_10_Sleep;
  int atuador_St_10_Sleep;
  int nr_4_St_10_Online;
  int ns_4_St_10_Online_3;
  int ns_4_St_10_Online_2;
  int ns_4_St_10_Online_1;
  int estado_1_St_10_Online;
  int atuador_St_10_Online;
  int nr_4_St_10_Teste;
  int ns_4_St_10_Teste_3;
  int ns_4_St_10_Teste_2;
  int ns_4_St_10_Teste_1;
  int estado_1_St_10_Teste;
  int atuador_St_10_Teste;
  int nr_4_St_10_Boot;
  int ns_4_St_10_Boot_3;
  int ns_4_St_10_Boot_2;
  int ns_4_St_10_Boot_1;
  int estado_1_St_10_Boot;
  int atuador_St_10_Boot;
  int nr_4_St_10_Off;
  int ns_4_St_10_Off_3;
  int ns_4_St_10_Off_2;
  int ns_4_St_10_Off_1;
  int estado_1_St_10_Off;
  int atuador_St_10_Off;
  int ck_10_3;
  int ck_10_2;
  int ck_10_1;
  int v_136_2_0;
  int v_136_3_0_0;
  int v_136_3_0_1;
  int v_136_2_1;
  int v_136_3_1_0;
  int v_136_3_1_1;
  int v_137;
  int v_136_3;
  int v_136_2;
  int v_136_1;
  int v_134_2_0;
  int v_134_3_0_0;
  int v_134_3_0_1;
  int v_134_2_1;
  int v_134_3_1_0;
  int v_134_3_1_1;
  int v_132_2_0;
  int v_132_3_0_0;
  int v_132_3_0_1;
  int v_132_2_1;
  int v_132_3_1_0;
  int v_132_3_1_1;
  int v_135;
  int v_134_3;
  int v_134_2;
  int v_134_1;
  int v_133;
  int v_132_3;
  int v_132_2;
  int v_132_1;
  int v_131;
  int v_129_2_0;
  int v_129_3_0_0;
  int v_129_3_0_1;
  int v_129_2_1;
  int v_129_3_1_0;
  int v_129_3_1_1;
  int v_130;
  int v_129_3;
  int v_129_2;
  int v_129_1;
  int v_127_2_0;
  int v_127_3_0_0;
  int v_127_3_0_1;
  int v_127_2_1;
  int v_127_3_1_0;
  int v_127_3_1_1;
  int v_128;
  int v_127_3;
  int v_127_2;
  int v_127_1;
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
  int s_6_St_10_Sleep_2_0;
  int s_6_St_10_Sleep_3_0_0;
  int s_6_St_10_Sleep_3_0_1;
  int s_6_St_10_Sleep_2_1;
  int s_6_St_10_Sleep_3_1_0;
  int s_6_St_10_Sleep_3_1_1;
  int s_6_St_10_Online_2_0;
  int s_6_St_10_Online_3_0_0;
  int s_6_St_10_Online_3_0_1;
  int s_6_St_10_Online_2_1;
  int s_6_St_10_Online_3_1_0;
  int s_6_St_10_Online_3_1_1;
  int s_6_St_10_Teste_2_0;
  int s_6_St_10_Teste_3_0_0;
  int s_6_St_10_Teste_3_0_1;
  int s_6_St_10_Teste_2_1;
  int s_6_St_10_Teste_3_1_0;
  int s_6_St_10_Teste_3_1_1;
  int s_6_St_10_Boot_2_0;
  int s_6_St_10_Boot_3_0_0;
  int s_6_St_10_Boot_3_0_1;
  int s_6_St_10_Boot_2_1;
  int s_6_St_10_Boot_3_1_0;
  int s_6_St_10_Boot_3_1_1;
  int s_6_St_10_Off_2_0;
  int s_6_St_10_Off_3_0_0;
  int s_6_St_10_Off_3_0_1;
  int s_6_St_10_Off_2_1;
  int s_6_St_10_Off_3_1_0;
  int s_6_St_10_Off_3_1_1;
  int ck_9_2_0;
  int ck_9_3_0_0;
  int ck_9_3_0_1;
  int ck_9_2_1;
  int ck_9_3_1_0;
  int ck_9_3_1_1;
  int r_4_St_10_Sleep;
  int s_6_St_10_Sleep_3;
  int s_6_St_10_Sleep_2;
  int s_6_St_10_Sleep_1;
  int r_4_St_10_Online;
  int s_6_St_10_Online_3;
  int s_6_St_10_Online_2;
  int s_6_St_10_Online_1;
  int r_4_St_10_Teste;
  int s_6_St_10_Teste_3;
  int s_6_St_10_Teste_2;
  int s_6_St_10_Teste_1;
  int r_4_St_10_Boot;
  int s_6_St_10_Boot_3;
  int s_6_St_10_Boot_2;
  int s_6_St_10_Boot_1;
  int r_4_St_10_Off;
  int s_6_St_10_Off_3;
  int s_6_St_10_Off_2;
  int s_6_St_10_Off_1;
  int ck_9_3;
  int ck_9_2;
  int ck_9_1;
  int nr_5_St_11_Lig;
  int ns_5_St_11_Lig_1;
  int estado_St_11_Lig;
  int nr_5_St_11_Des;
  int ns_5_St_11_Des_1;
  int estado_St_11_Des;
  int ck_8_1;
  int r_5_St_11_Lig;
  int s_7_St_11_Lig_1;
  int r_5_St_11_Des;
  int s_7_St_11_Des_1;
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
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_4_2_0;
  int ns_4_3_0_0;
  int ns_4_3_0_1;
  int ns_4_2_1;
  int ns_4_3_1_0;
  int ns_4_3_1_1;
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
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
  int ns_3_4_0_0;
  int ns_3_4_0_1;
  int ns_2_2_1;
  int ns_3_4_1_0;
  int ns_3_4_1_1;
  int estado_bat_2_0;
  int estado_bat_3_0_0;
  int estado_bat_3_0_1;
  int estado_bat_2_1;
  int estado_bat_3_1_0;
  int estado_bat_3_1_1;
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
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int s_7_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_4_3;
  int ns_4_2;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_3_3;
  int ns_3_2;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_4_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_3_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_3_4;
  int ns_2_2;
  int ns_1_2;
  int r;
  int nr;
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
  int s;
  int enabled;
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
  int atuador_1;
  int estado_2;
  int c;
  int t;
  int o;
  int atuador;
  int estado_1;
  int ca_1;
  int estado;
  int v_72;
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
  cp_1 = cb;
  v_198 = !(cp_1);
  v_192 = !(cp_1);
  v_187 = !(cp_1);
  l1 = l1b;
  v_199 = (v_198&&l1);
  v_196 = (cp_1&&l1);
  v_193 = !(l1);
  v_194 = (v_192&&v_193);
  v_188 = !(l1);
  v_189 = (v_187&&v_188);
  l2 = l2b;
  v_200 = (v_199&&l2);
  v_197 = (v_196&&l2);
  v_195 = (v_194&&l2);
  v_190 = !(l2);
  v_191 = (v_189&&v_190);
  v = vb;
  a_1 = (v_200&&v);
  v_181 = !(a_1);
  b = (v_197&&v);
  v_182 = !(b);
  v_183 = (v_181&&v_182);
  c_1 = (v_195&&v);
  v_184 = !(c_1);
  v_185 = (v_183&&v_184);
  d = (v_191&&v);
  v_186 = !(d);
  e = (v_185&&v_186);
  ck_17_1 = self->v_400;
  ck_17_2 = self->v_401;
  ck_17_3 = self->v_402;
  t_1 = td;
  ts_1 = ts;
  s_atx = swa;
  s1 = swr1;
  s3 = swr3;
  s4 = swr4;
  ck_11_1 = self->v_453;
  ck_11_2 = self->v_454;
  ck_11_3 = self->v_455;
  t = tm;
  o = om;
  ck_9_1 = self->v_506;
  ck_9_2 = self->v_507;
  ck_9_3 = self->v_508;
  Contrato_controller__contrato_controller_step(cb, l1b, l2b, vb, td, tm, om,
                                                ts, swa, swr1, swr3, swr4,
                                                self->ck_7_1, self->pnr_5,
                                                self->v_508, self->v_507,
                                                self->v_506, self->pnr_4,
                                                self->v_455, self->v_454,
                                                self->v_453, self->pnr_3,
                                                self->ck_13_1, self->pnr_2,
                                                self->ck_15_1, self->pnr_1,
                                                self->v_402, self->v_401,
                                                self->v_400, self->pnr, true,
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
  off_atx = co;
  cr1_1 = cr1;
  cr3_1 = cr3;
  cr4_1 = cr4;
  ba_1 = ba;
  v_155 = (ba_1&&s_atx);
  a = (v_155||c_atx);
  b1 = br1;
  v_154 = (b1&&s1);
  r1 = (v_154||cr1_1);
  b3 = br3;
  v_153 = (b3&&s3);
  r3 = (v_153||cr3_1);
  b4 = br4;
  v_152 = (b4&&s4);
  r4 = (v_152||cr4_1);
  c = cm;
  ca_1 = cp;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      ck_17_3_1_1 = ck_17_3;
      if (ck_17_3_1_1) {
        v_171 = (e||c_1);
        v_172 = (v_171||d);
        if (v_172) {
          v_174 = true;
        } else {
          v_174 = self->pnr;
        };
        if (a_1) {
          r_St_6_Carregado = true;
        } else {
          r_St_6_Carregado = v_174;
        };
        if (v_172) {
          v_173_1 = true;
        } else {
          v_173_1 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_1 = false;
        } else {
          s_2_St_6_Carregado_1 = v_173_1;
        };
        if (v_172) {
          v_173_2 = false;
        } else {
          v_173_2 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_2 = false;
        } else {
          s_2_St_6_Carregado_2 = v_173_2;
        };
        if (v_172) {
          v_173_3 = false;
        } else {
          v_173_3 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_3 = true;
        } else {
          s_2_St_6_Carregado_3 = v_173_3;
        };
        v_418 = r_St_6_Carregado;
        v_403 = s_2_St_6_Carregado_1;
        v_404 = s_2_St_6_Carregado_2;
        v_405 = s_2_St_6_Carregado_3;
      } else {
        v_157 = (e||a_1);
        v_158 = (v_157||b);
        if (v_158) {
          v_160 = true;
        } else {
          v_160 = self->pnr;
        };
        if (c_1) {
          r_St_6_Descarregado = true;
        } else {
          r_St_6_Descarregado = v_160;
        };
        v_418 = r_St_6_Descarregado;
        if (v_158) {
          v_159_1 = true;
        } else {
          v_159_1 = true;
        };
        if (c_1) {
          s_2_St_6_Descarregado_1 = false;
        } else {
          s_2_St_6_Descarregado_1 = v_159_1;
        };
        v_403 = s_2_St_6_Descarregado_1;
        if (v_158) {
          v_159_2 = false;
        } else {
          v_159_2 = true;
        };
        if (c_1) {
          s_2_St_6_Descarregado_2 = false;
        } else {
          s_2_St_6_Descarregado_2 = v_159_2;
        };
        v_404 = s_2_St_6_Descarregado_2;
        if (v_158) {
          v_159_3 = false;
        } else {
          v_159_3 = false;
        };
        if (c_1) {
          s_2_St_6_Descarregado_3 = false;
        } else {
          s_2_St_6_Descarregado_3 = v_159_3;
        };
        v_405 = s_2_St_6_Descarregado_3;
      };
      v_412 = v_403;
      v_413 = v_404;
      v_414 = v_405;
      v_420 = v_418;
      if (ck_17_3_1_1) {
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
        if (s_2_St_6_Carregado_1) {
          s_2_St_6_Carregado_2_1 = s_2_St_6_Carregado_2;
          if (s_2_St_6_Carregado_2_1) {
            s_2_St_6_Carregado_3_1_1 = s_2_St_6_Carregado_3;
          } else {
            s_2_St_6_Carregado_3_1_0 = s_2_St_6_Carregado_3;
          };
        } else {
          s_2_St_6_Carregado_2_0 = s_2_St_6_Carregado_2;
          if (s_2_St_6_Carregado_2_0) {
            s_2_St_6_Carregado_3_0_1 = s_2_St_6_Carregado_3;
          } else {
            s_2_St_6_Carregado_3_0_0 = s_2_St_6_Carregado_3;
          };
        };
      } else {
        if (v_159_1) {
          v_159_2_1 = v_159_2;
          if (v_159_2_1) {
            v_159_3_1_1 = v_159_3;
          } else {
            v_159_3_1_0 = v_159_3;
          };
        } else {
          v_159_2_0 = v_159_2;
          if (v_159_2_0) {
            v_159_3_0_1 = v_159_3;
          } else {
            v_159_3_0_0 = v_159_3;
          };
        };
        if (s_2_St_6_Descarregado_1) {
          s_2_St_6_Descarregado_2_1 = s_2_St_6_Descarregado_2;
          if (s_2_St_6_Descarregado_2_1) {
            s_2_St_6_Descarregado_3_1_1 = s_2_St_6_Descarregado_3;
          } else {
            s_2_St_6_Descarregado_3_1_0 = s_2_St_6_Descarregado_3;
          };
        } else {
          s_2_St_6_Descarregado_2_0 = s_2_St_6_Descarregado_2;
          if (s_2_St_6_Descarregado_2_0) {
            s_2_St_6_Descarregado_3_0_1 = s_2_St_6_Descarregado_3;
          } else {
            s_2_St_6_Descarregado_3_0_0 = s_2_St_6_Descarregado_3;
          };
        };
      };
    } else {
      ck_17_3_1_0 = ck_17_3;
      if (ck_17_3_1_0) {
        v_419 = true;
        v_406 = true;
        v_407 = true;
        v_408 = true;
      } else {
        if (d) {
          v_176 = true;
        } else {
          v_176 = self->pnr;
        };
        if (c_1) {
          v_178 = true;
        } else {
          v_178 = v_176;
        };
        if (a_1) {
          v_180 = true;
        } else {
          v_180 = v_178;
        };
        if (b) {
          r_St_6_Erro = true;
        } else {
          r_St_6_Erro = v_180;
        };
        v_419 = r_St_6_Erro;
        if (d) {
          v_175_1 = true;
        } else {
          v_175_1 = true;
        };
        if (c_1) {
          v_177_1 = false;
        } else {
          v_177_1 = v_175_1;
        };
        if (a_1) {
          v_179_1 = false;
        } else {
          v_179_1 = v_177_1;
        };
        if (b) {
          s_2_St_6_Erro_1 = true;
        } else {
          s_2_St_6_Erro_1 = v_179_1;
        };
        v_406 = s_2_St_6_Erro_1;
        if (d) {
          v_175_2 = true;
        } else {
          v_175_2 = false;
        };
        if (c_1) {
          v_177_2 = false;
        } else {
          v_177_2 = v_175_2;
        };
        if (a_1) {
          v_179_2 = false;
        } else {
          v_179_2 = v_177_2;
        };
        if (b) {
          s_2_St_6_Erro_2 = true;
        } else {
          s_2_St_6_Erro_2 = v_179_2;
        };
        v_407 = s_2_St_6_Erro_2;
        if (d) {
          v_175_3 = false;
        } else {
          v_175_3 = false;
        };
        if (c_1) {
          v_177_3 = false;
        } else {
          v_177_3 = v_175_3;
        };
        if (a_1) {
          v_179_3 = true;
        } else {
          v_179_3 = v_177_3;
        };
        if (b) {
          s_2_St_6_Erro_3 = true;
        } else {
          s_2_St_6_Erro_3 = v_179_3;
        };
        v_408 = s_2_St_6_Erro_3;
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
        if (s_2_St_6_Erro_1) {
          s_2_St_6_Erro_2_1 = s_2_St_6_Erro_2;
          if (s_2_St_6_Erro_2_1) {
            s_2_St_6_Erro_3_1_1 = s_2_St_6_Erro_3;
          } else {
            s_2_St_6_Erro_3_1_0 = s_2_St_6_Erro_3;
          };
        } else {
          s_2_St_6_Erro_2_0 = s_2_St_6_Erro_2;
          if (s_2_St_6_Erro_2_0) {
            s_2_St_6_Erro_3_0_1 = s_2_St_6_Erro_3;
          } else {
            s_2_St_6_Erro_3_0_0 = s_2_St_6_Erro_3;
          };
        };
      };
      v_412 = v_406;
      v_413 = v_407;
      v_414 = v_408;
      v_420 = v_419;
    };
    s_2_1 = v_412;
    s_2_2 = v_413;
    s_2_3 = v_414;
    r = v_420;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      ck_17_3_0_1 = ck_17_3;
      v_415 = true;
      v_416 = true;
      v_417 = true;
      v_422 = true;
    } else {
      ck_17_3_0_0 = ck_17_3;
      if (ck_17_3_0_0) {
        v_166 = (e||d);
        if (v_166) {
          v_168 = true;
        } else {
          v_168 = self->pnr;
        };
        if (c_1) {
          v_170 = true;
        } else {
          v_170 = v_168;
        };
        if (b) {
          r_St_6_Limiar1 = true;
        } else {
          r_St_6_Limiar1 = v_170;
        };
        if (v_166) {
          v_167_1 = true;
        } else {
          v_167_1 = false;
        };
        if (c_1) {
          v_169_1 = false;
        } else {
          v_169_1 = v_167_1;
        };
        if (b) {
          s_2_St_6_Limiar1_1 = true;
        } else {
          s_2_St_6_Limiar1_1 = v_169_1;
        };
        if (v_166) {
          v_167_2 = false;
        } else {
          v_167_2 = false;
        };
        if (c_1) {
          v_169_2 = false;
        } else {
          v_169_2 = v_167_2;
        };
        if (b) {
          s_2_St_6_Limiar1_2 = true;
        } else {
          s_2_St_6_Limiar1_2 = v_169_2;
        };
        if (v_166) {
          v_167_3 = false;
        } else {
          v_167_3 = true;
        };
        if (c_1) {
          v_169_3 = false;
        } else {
          v_169_3 = v_167_3;
        };
        if (b) {
          s_2_St_6_Limiar1_3 = true;
        } else {
          s_2_St_6_Limiar1_3 = v_169_3;
        };
        v_421 = r_St_6_Limiar1;
        v_409 = s_2_St_6_Limiar1_1;
        v_410 = s_2_St_6_Limiar1_2;
        v_411 = s_2_St_6_Limiar1_3;
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
      } else {
        v_161 = (e||b);
        if (v_161) {
          v_163 = true;
        } else {
          v_163 = self->pnr;
        };
        if (d) {
          v_165 = true;
        } else {
          v_165 = v_163;
        };
        if (a_1) {
          r_St_6_Limiar2 = true;
        } else {
          r_St_6_Limiar2 = v_165;
        };
        v_421 = r_St_6_Limiar2;
        if (v_161) {
          v_162_1 = true;
        } else {
          v_162_1 = false;
        };
        if (d) {
          v_164_1 = true;
        } else {
          v_164_1 = v_162_1;
        };
        if (a_1) {
          s_2_St_6_Limiar2_1 = false;
        } else {
          s_2_St_6_Limiar2_1 = v_164_1;
        };
        v_409 = s_2_St_6_Limiar2_1;
        if (v_161) {
          v_162_2 = false;
        } else {
          v_162_2 = false;
        };
        if (d) {
          v_164_2 = true;
        } else {
          v_164_2 = v_162_2;
        };
        if (a_1) {
          s_2_St_6_Limiar2_2 = false;
        } else {
          s_2_St_6_Limiar2_2 = v_164_2;
        };
        v_410 = s_2_St_6_Limiar2_2;
        if (v_161) {
          v_162_3 = false;
        } else {
          v_162_3 = false;
        };
        if (d) {
          v_164_3 = false;
        } else {
          v_164_3 = v_162_3;
        };
        if (a_1) {
          s_2_St_6_Limiar2_3 = true;
        } else {
          s_2_St_6_Limiar2_3 = v_164_3;
        };
        v_411 = s_2_St_6_Limiar2_3;
        if (v_162_1) {
          v_162_2_1 = v_162_2;
          if (v_162_2_1) {
            v_162_3_1_1 = v_162_3;
          } else {
            v_162_3_1_0 = v_162_3;
          };
        } else {
          v_162_2_0 = v_162_2;
          if (v_162_2_0) {
            v_162_3_0_1 = v_162_3;
          } else {
            v_162_3_0_0 = v_162_3;
          };
        };
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
      };
      v_415 = v_409;
      v_416 = v_410;
      v_417 = v_411;
      v_422 = v_421;
    };
    s_2_1 = v_415;
    s_2_2 = v_416;
    s_2_3 = v_417;
    r = v_422;
  };
  ck_18_1 = s_2_1;
  ck_18_2 = s_2_2;
  ck_18_3 = s_2_3;
  if (ck_18_1) {
    ck_18_2_1 = ck_18_2;
    if (ck_18_2_1) {
      ck_18_3_1_1 = ck_18_3;
      if (ck_18_3_1_1) {
        estado_bat_St_6_Carregado_1 = false;
        estado_bat_St_6_Carregado_2 = false;
        estado_bat_St_6_Carregado_3 = true;
        nr_St_6_Carregado = false;
        ns_St_6_Carregado_1 = true;
        ns_St_6_Carregado_2 = true;
        ns_St_6_Carregado_3 = true;
        v_365 = estado_bat_St_6_Carregado_1;
        v_366 = estado_bat_St_6_Carregado_2;
        v_367 = estado_bat_St_6_Carregado_3;
        v_395 = nr_St_6_Carregado;
        v_380 = ns_St_6_Carregado_1;
        v_381 = ns_St_6_Carregado_2;
        v_382 = ns_St_6_Carregado_3;
      } else {
        estado_bat_St_6_Descarregado_1 = true;
        v_365 = estado_bat_St_6_Descarregado_1;
        estado_bat_St_6_Descarregado_2 = true;
        v_366 = estado_bat_St_6_Descarregado_2;
        estado_bat_St_6_Descarregado_3 = true;
        v_367 = estado_bat_St_6_Descarregado_3;
        nr_St_6_Descarregado = false;
        v_395 = nr_St_6_Descarregado;
        ns_St_6_Descarregado_1 = true;
        v_380 = ns_St_6_Descarregado_1;
        ns_St_6_Descarregado_2 = true;
        v_381 = ns_St_6_Descarregado_2;
        ns_St_6_Descarregado_3 = false;
        v_382 = ns_St_6_Descarregado_3;
      };
      v_374 = v_365;
      v_375 = v_366;
      v_376 = v_367;
      v_389 = v_380;
      v_390 = v_381;
      v_391 = v_382;
      v_397 = v_395;
      if (ck_18_3_1_1) {
        if (estado_bat_St_6_Carregado_1) {
          estado_bat_St_6_Carregado_2_1 = estado_bat_St_6_Carregado_2;
          if (estado_bat_St_6_Carregado_2_1) {
            estado_bat_St_6_Carregado_3_1_1 = estado_bat_St_6_Carregado_3;
          } else {
            estado_bat_St_6_Carregado_3_1_0 = estado_bat_St_6_Carregado_3;
          };
        } else {
          estado_bat_St_6_Carregado_2_0 = estado_bat_St_6_Carregado_2;
          if (estado_bat_St_6_Carregado_2_0) {
            estado_bat_St_6_Carregado_3_0_1 = estado_bat_St_6_Carregado_3;
          } else {
            estado_bat_St_6_Carregado_3_0_0 = estado_bat_St_6_Carregado_3;
          };
        };
        if (ns_St_6_Carregado_1) {
          ns_St_6_Carregado_2_1 = ns_St_6_Carregado_2;
          if (ns_St_6_Carregado_2_1) {
            ns_St_6_Carregado_3_1_1 = ns_St_6_Carregado_3;
          } else {
            ns_St_6_Carregado_3_1_0 = ns_St_6_Carregado_3;
          };
        } else {
          ns_St_6_Carregado_2_0 = ns_St_6_Carregado_2;
          if (ns_St_6_Carregado_2_0) {
            ns_St_6_Carregado_3_0_1 = ns_St_6_Carregado_3;
          } else {
            ns_St_6_Carregado_3_0_0 = ns_St_6_Carregado_3;
          };
        };
      } else {
        if (estado_bat_St_6_Descarregado_1) {
          estado_bat_St_6_Descarregado_2_1 = estado_bat_St_6_Descarregado_2;
          if (estado_bat_St_6_Descarregado_2_1) {
            estado_bat_St_6_Descarregado_3_1_1 = estado_bat_St_6_Descarregado_3;
          } else {
            estado_bat_St_6_Descarregado_3_1_0 = estado_bat_St_6_Descarregado_3;
          };
        } else {
          estado_bat_St_6_Descarregado_2_0 = estado_bat_St_6_Descarregado_2;
          if (estado_bat_St_6_Descarregado_2_0) {
            estado_bat_St_6_Descarregado_3_0_1 = estado_bat_St_6_Descarregado_3;
          } else {
            estado_bat_St_6_Descarregado_3_0_0 = estado_bat_St_6_Descarregado_3;
          };
        };
        if (ns_St_6_Descarregado_1) {
          ns_St_6_Descarregado_2_1 = ns_St_6_Descarregado_2;
          if (ns_St_6_Descarregado_2_1) {
            ns_St_6_Descarregado_3_1_1 = ns_St_6_Descarregado_3;
          } else {
            ns_St_6_Descarregado_3_1_0 = ns_St_6_Descarregado_3;
          };
        } else {
          ns_St_6_Descarregado_2_0 = ns_St_6_Descarregado_2;
          if (ns_St_6_Descarregado_2_0) {
            ns_St_6_Descarregado_3_0_1 = ns_St_6_Descarregado_3;
          } else {
            ns_St_6_Descarregado_3_0_0 = ns_St_6_Descarregado_3;
          };
        };
      };
    } else {
      ck_18_3_1_0 = ck_18_3;
      if (ck_18_3_1_0) {
        v_368 = true;
        v_369 = true;
        v_370 = true;
        v_396 = true;
        v_383 = true;
        v_384 = true;
        v_385 = true;
      } else {
        estado_bat_St_6_Erro_1 = false;
        v_368 = estado_bat_St_6_Erro_1;
        estado_bat_St_6_Erro_2 = false;
        v_369 = estado_bat_St_6_Erro_2;
        estado_bat_St_6_Erro_3 = false;
        v_370 = estado_bat_St_6_Erro_3;
        nr_St_6_Erro = false;
        v_396 = nr_St_6_Erro;
        ns_St_6_Erro_1 = true;
        v_383 = ns_St_6_Erro_1;
        ns_St_6_Erro_2 = false;
        v_384 = ns_St_6_Erro_2;
        ns_St_6_Erro_3 = false;
        v_385 = ns_St_6_Erro_3;
        if (estado_bat_St_6_Erro_1) {
          estado_bat_St_6_Erro_2_1 = estado_bat_St_6_Erro_2;
          if (estado_bat_St_6_Erro_2_1) {
            estado_bat_St_6_Erro_3_1_1 = estado_bat_St_6_Erro_3;
          } else {
            estado_bat_St_6_Erro_3_1_0 = estado_bat_St_6_Erro_3;
          };
        } else {
          estado_bat_St_6_Erro_2_0 = estado_bat_St_6_Erro_2;
          if (estado_bat_St_6_Erro_2_0) {
            estado_bat_St_6_Erro_3_0_1 = estado_bat_St_6_Erro_3;
          } else {
            estado_bat_St_6_Erro_3_0_0 = estado_bat_St_6_Erro_3;
          };
        };
        if (ns_St_6_Erro_1) {
          ns_St_6_Erro_2_1 = ns_St_6_Erro_2;
          if (ns_St_6_Erro_2_1) {
            ns_St_6_Erro_3_1_1 = ns_St_6_Erro_3;
          } else {
            ns_St_6_Erro_3_1_0 = ns_St_6_Erro_3;
          };
        } else {
          ns_St_6_Erro_2_0 = ns_St_6_Erro_2;
          if (ns_St_6_Erro_2_0) {
            ns_St_6_Erro_3_0_1 = ns_St_6_Erro_3;
          } else {
            ns_St_6_Erro_3_0_0 = ns_St_6_Erro_3;
          };
        };
      };
      v_374 = v_368;
      v_375 = v_369;
      v_376 = v_370;
      v_389 = v_383;
      v_390 = v_384;
      v_391 = v_385;
      v_397 = v_396;
    };
    estado_bat_1 = v_374;
    estado_bat_2 = v_375;
    estado_bat_3 = v_376;
    ns_1_2 = v_389;
    ns_2_2 = v_390;
    ns_3_4 = v_391;
    nr = v_397;
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      ck_18_3_0_1 = ck_18_3;
      v_377 = true;
      v_378 = true;
      v_379 = true;
      v_392 = true;
      v_393 = true;
      v_394 = true;
      v_399 = true;
    } else {
      ck_18_3_0_0 = ck_18_3;
      if (ck_18_3_0_0) {
        estado_bat_St_6_Limiar1_1 = true;
        estado_bat_St_6_Limiar1_2 = false;
        estado_bat_St_6_Limiar1_3 = false;
        nr_St_6_Limiar1 = false;
        ns_St_6_Limiar1_1 = false;
        ns_St_6_Limiar1_2 = false;
        ns_St_6_Limiar1_3 = true;
        v_371 = estado_bat_St_6_Limiar1_1;
        v_372 = estado_bat_St_6_Limiar1_2;
        v_373 = estado_bat_St_6_Limiar1_3;
        v_398 = nr_St_6_Limiar1;
        v_386 = ns_St_6_Limiar1_1;
        v_387 = ns_St_6_Limiar1_2;
        v_388 = ns_St_6_Limiar1_3;
      } else {
        estado_bat_St_6_Limiar2_1 = true;
        v_371 = estado_bat_St_6_Limiar2_1;
        estado_bat_St_6_Limiar2_2 = true;
        v_372 = estado_bat_St_6_Limiar2_2;
        estado_bat_St_6_Limiar2_3 = false;
        v_373 = estado_bat_St_6_Limiar2_3;
        nr_St_6_Limiar2 = false;
        v_398 = nr_St_6_Limiar2;
        ns_St_6_Limiar2_1 = false;
        v_386 = ns_St_6_Limiar2_1;
        ns_St_6_Limiar2_2 = false;
        v_387 = ns_St_6_Limiar2_2;
        ns_St_6_Limiar2_3 = false;
        v_388 = ns_St_6_Limiar2_3;
      };
      v_377 = v_371;
      v_378 = v_372;
      v_379 = v_373;
      v_392 = v_386;
      v_393 = v_387;
      v_394 = v_388;
      v_399 = v_398;
    };
    estado_bat_1 = v_377;
    estado_bat_2 = v_378;
    estado_bat_3 = v_379;
    ns_1_2 = v_392;
    ns_2_2 = v_393;
    ns_3_4 = v_394;
    nr = v_399;
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
        erro_B25 = false;
        v_529 = erro_B25;
      } else {
        erro_B50 = false;
        v_529 = erro_B50;
      };
      v_531 = v_529;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_530 = true;
      } else {
        erro_B75 = false;
        v_530 = erro_B75;
      };
      v_531 = v_530;
    };
    _out->erro = v_531;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_533 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        erro_B100 = false;
        v_532 = erro_B100;
      } else {
        erro_BERR = true;
        v_532 = erro_BERR;
      };
      v_533 = v_532;
    };
    _out->erro = v_533;
  };
  s = _out->erro;
  if (self->ck_13_1) {
    if (s) {
      r_2_St_8_Off = true;
      s_4_St_8_Off_1 = false;
    } else {
      r_2_St_8_Off = self->pnr_2;
      s_4_St_8_Off_1 = true;
    };
    r_2 = r_2_St_8_Off;
    s_4_1 = s_4_St_8_Off_1;
  } else {
    v_156 = !(s);
    if (v_156) {
      r_2_St_8_On = true;
    } else {
      r_2_St_8_On = self->pnr_2;
    };
    r_2 = r_2_St_8_On;
    if (v_156) {
      s_4_St_8_On_1 = true;
    } else {
      s_4_St_8_On_1 = false;
    };
    s_4_1 = s_4_St_8_On_1;
  };
  ck_14_1 = s_4_1;
  if (ck_14_1) {
    enabled_St_8_Off = false;
    nr_2_St_8_Off = false;
    ns_2_St_8_Off_1 = true;
    enabled = enabled_St_8_Off;
    nr_2 = nr_2_St_8_Off;
    ns_2_1 = ns_2_St_8_Off_1;
  } else {
    enabled_St_8_On = true;
    enabled = enabled_St_8_On;
    nr_2_St_8_On = false;
    nr_2 = nr_2_St_8_On;
    ns_2_St_8_On_1 = false;
    ns_2_1 = ns_2_St_8_On_1;
  };
  _out->led_erro = enabled;
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
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_3_4_1_1 = ns_3_4;
    } else {
      ns_3_4_1_0 = ns_3_4;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_3_4_0_1 = ns_3_4;
    } else {
      ns_3_4_0_0 = ns_3_4;
    };
  };
  if (!(ck_18_1)) {
    if (!(ck_18_2_0)) {
      if (ck_18_3_0_0) {
        if (estado_bat_St_6_Limiar1_1) {
          estado_bat_St_6_Limiar1_2_1 = estado_bat_St_6_Limiar1_2;
          if (estado_bat_St_6_Limiar1_2_1) {
            estado_bat_St_6_Limiar1_3_1_1 = estado_bat_St_6_Limiar1_3;
          } else {
            estado_bat_St_6_Limiar1_3_1_0 = estado_bat_St_6_Limiar1_3;
          };
        } else {
          estado_bat_St_6_Limiar1_2_0 = estado_bat_St_6_Limiar1_2;
          if (estado_bat_St_6_Limiar1_2_0) {
            estado_bat_St_6_Limiar1_3_0_1 = estado_bat_St_6_Limiar1_3;
          } else {
            estado_bat_St_6_Limiar1_3_0_0 = estado_bat_St_6_Limiar1_3;
          };
        };
        if (ns_St_6_Limiar1_1) {
          ns_St_6_Limiar1_2_1 = ns_St_6_Limiar1_2;
          if (ns_St_6_Limiar1_2_1) {
            ns_St_6_Limiar1_3_1_1 = ns_St_6_Limiar1_3;
          } else {
            ns_St_6_Limiar1_3_1_0 = ns_St_6_Limiar1_3;
          };
        } else {
          ns_St_6_Limiar1_2_0 = ns_St_6_Limiar1_2;
          if (ns_St_6_Limiar1_2_0) {
            ns_St_6_Limiar1_3_0_1 = ns_St_6_Limiar1_3;
          } else {
            ns_St_6_Limiar1_3_0_0 = ns_St_6_Limiar1_3;
          };
        };
      } else {
        if (estado_bat_St_6_Limiar2_1) {
          estado_bat_St_6_Limiar2_2_1 = estado_bat_St_6_Limiar2_2;
          if (estado_bat_St_6_Limiar2_2_1) {
            estado_bat_St_6_Limiar2_3_1_1 = estado_bat_St_6_Limiar2_3;
          } else {
            estado_bat_St_6_Limiar2_3_1_0 = estado_bat_St_6_Limiar2_3;
          };
        } else {
          estado_bat_St_6_Limiar2_2_0 = estado_bat_St_6_Limiar2_2;
          if (estado_bat_St_6_Limiar2_2_0) {
            estado_bat_St_6_Limiar2_3_0_1 = estado_bat_St_6_Limiar2_3;
          } else {
            estado_bat_St_6_Limiar2_3_0_0 = estado_bat_St_6_Limiar2_3;
          };
        };
        if (ns_St_6_Limiar2_1) {
          ns_St_6_Limiar2_2_1 = ns_St_6_Limiar2_2;
          if (ns_St_6_Limiar2_2_1) {
            ns_St_6_Limiar2_3_1_1 = ns_St_6_Limiar2_3;
          } else {
            ns_St_6_Limiar2_3_1_0 = ns_St_6_Limiar2_3;
          };
        } else {
          ns_St_6_Limiar2_2_0 = ns_St_6_Limiar2_2;
          if (ns_St_6_Limiar2_2_0) {
            ns_St_6_Limiar2_3_0_1 = ns_St_6_Limiar2_3;
          } else {
            ns_St_6_Limiar2_3_0_0 = ns_St_6_Limiar2_3;
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
  if (!(ck_17_1)) {
    if (!(ck_17_2_0)) {
      if (ck_17_3_0_0) {
        if (s_2_St_6_Limiar1_1) {
          s_2_St_6_Limiar1_2_1 = s_2_St_6_Limiar1_2;
          if (s_2_St_6_Limiar1_2_1) {
            s_2_St_6_Limiar1_3_1_1 = s_2_St_6_Limiar1_3;
          } else {
            s_2_St_6_Limiar1_3_1_0 = s_2_St_6_Limiar1_3;
          };
        } else {
          s_2_St_6_Limiar1_2_0 = s_2_St_6_Limiar1_2;
          if (s_2_St_6_Limiar1_2_0) {
            s_2_St_6_Limiar1_3_0_1 = s_2_St_6_Limiar1_3;
          } else {
            s_2_St_6_Limiar1_3_0_0 = s_2_St_6_Limiar1_3;
          };
        };
      } else {
        if (s_2_St_6_Limiar2_1) {
          s_2_St_6_Limiar2_2_1 = s_2_St_6_Limiar2_2;
          if (s_2_St_6_Limiar2_2_1) {
            s_2_St_6_Limiar2_3_1_1 = s_2_St_6_Limiar2_3;
          } else {
            s_2_St_6_Limiar2_3_1_0 = s_2_St_6_Limiar2_3;
          };
        } else {
          s_2_St_6_Limiar2_2_0 = s_2_St_6_Limiar2_2;
          if (s_2_St_6_Limiar2_2_0) {
            s_2_St_6_Limiar2_3_0_1 = s_2_St_6_Limiar2_3;
          } else {
            s_2_St_6_Limiar2_3_0_0 = s_2_St_6_Limiar2_3;
          };
        };
      };
    };
  };
  if (self->ck_15_1) {
    if (t_1) {
      r_1_St_7_Dia = true;
      s_3_St_7_Dia_1 = false;
    } else {
      r_1_St_7_Dia = self->pnr_1;
      s_3_St_7_Dia_1 = true;
    };
    r_1 = r_1_St_7_Dia;
    s_3_1 = s_3_St_7_Dia_1;
  } else {
    if (t_1) {
      r_1_St_7_Noite = true;
    } else {
      r_1_St_7_Noite = self->pnr_1;
    };
    r_1 = r_1_St_7_Noite;
    if (t_1) {
      s_3_St_7_Noite_1 = true;
    } else {
      s_3_St_7_Noite_1 = false;
    };
    s_3_1 = s_3_St_7_Noite_1;
  };
  ck_16_1 = s_3_1;
  if (ck_16_1) {
    isday_St_7_Dia = true;
    nr_1_St_7_Dia = false;
    ns_1_St_7_Dia_1 = true;
    isday = isday_St_7_Dia;
    nr_1 = nr_1_St_7_Dia;
    ns_1_1 = ns_1_St_7_Dia_1;
  } else {
    isday_St_7_Noite = false;
    isday = isday_St_7_Noite;
    nr_1_St_7_Noite = false;
    nr_1 = nr_1_St_7_Noite;
    ns_1_St_7_Noite_1 = false;
    ns_1_1 = ns_1_St_7_Noite_1;
  };
  _out->dia = isday;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_105 = !(_out->dia);
      } else {
        v_94 = !(_out->dia);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_82 = !(_out->dia);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_73 = !(_out->dia);
      } else {
        v_116 = !(_out->dia);
      };
    };
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        if (ts_1) {
          v_151 = true;
        } else {
          v_151 = self->pnr_3;
        };
        if (off_atx) {
          r_3_St_9_Boot = true;
        } else {
          r_3_St_9_Boot = v_151;
        };
        v_471 = r_3_St_9_Boot;
        if (ts_1) {
          v_150_1 = true;
        } else {
          v_150_1 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_1 = true;
        } else {
          s_5_St_9_Boot_1 = v_150_1;
        };
        v_456 = s_5_St_9_Boot_1;
        if (ts_1) {
          v_150_2 = false;
        } else {
          v_150_2 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_2 = true;
        } else {
          s_5_St_9_Boot_2 = v_150_2;
        };
        v_457 = s_5_St_9_Boot_2;
        if (ts_1) {
          v_150_3 = false;
        } else {
          v_150_3 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_3 = false;
        } else {
          s_5_St_9_Boot_3 = v_150_3;
        };
        v_458 = s_5_St_9_Boot_3;
        if (v_150_1) {
          v_150_2_1 = v_150_2;
          if (v_150_2_1) {
            v_150_3_1_1 = v_150_3;
          } else {
            v_150_3_1_0 = v_150_3;
          };
        } else {
          v_150_2_0 = v_150_2;
          if (v_150_2_0) {
            v_150_3_0_1 = v_150_3;
          } else {
            v_150_3_0_0 = v_150_3;
          };
        };
        if (s_5_St_9_Boot_1) {
          s_5_St_9_Boot_2_1 = s_5_St_9_Boot_2;
          if (s_5_St_9_Boot_2_1) {
            s_5_St_9_Boot_3_1_1 = s_5_St_9_Boot_3;
          } else {
            s_5_St_9_Boot_3_1_0 = s_5_St_9_Boot_3;
          };
        } else {
          s_5_St_9_Boot_2_0 = s_5_St_9_Boot_2;
          if (s_5_St_9_Boot_2_0) {
            s_5_St_9_Boot_3_0_1 = s_5_St_9_Boot_3;
          } else {
            s_5_St_9_Boot_3_0_0 = s_5_St_9_Boot_3;
          };
        };
      } else {
        if (a) {
          r_3_St_9_Off = true;
          s_5_St_9_Off_1 = true;
          s_5_St_9_Off_2 = true;
          s_5_St_9_Off_3 = true;
        } else {
          r_3_St_9_Off = self->pnr_3;
          s_5_St_9_Off_1 = true;
          s_5_St_9_Off_2 = true;
          s_5_St_9_Off_3 = false;
        };
        v_471 = r_3_St_9_Off;
        v_456 = s_5_St_9_Off_1;
        v_457 = s_5_St_9_Off_2;
        v_458 = s_5_St_9_Off_3;
        if (s_5_St_9_Off_1) {
          s_5_St_9_Off_2_1 = s_5_St_9_Off_2;
          if (s_5_St_9_Off_2_1) {
            s_5_St_9_Off_3_1_1 = s_5_St_9_Off_3;
          } else {
            s_5_St_9_Off_3_1_0 = s_5_St_9_Off_3;
          };
        } else {
          s_5_St_9_Off_2_0 = s_5_St_9_Off_2;
          if (s_5_St_9_Off_2_0) {
            s_5_St_9_Off_3_0_1 = s_5_St_9_Off_3;
          } else {
            s_5_St_9_Off_3_0_0 = s_5_St_9_Off_3;
          };
        };
      };
      v_465 = v_456;
      v_466 = v_457;
      v_467 = v_458;
      v_473 = v_471;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_472 = true;
        v_459 = true;
        v_460 = true;
        v_461 = true;
      } else {
        if (r4) {
          v_147 = true;
        } else {
          v_147 = self->pnr_3;
        };
        if (r3) {
          v_149 = true;
        } else {
          v_149 = v_147;
        };
        if (a) {
          r_3_St_9_Rlevel1 = true;
        } else {
          r_3_St_9_Rlevel1 = v_149;
        };
        v_472 = r_3_St_9_Rlevel1;
        if (r4) {
          v_146_1 = false;
        } else {
          v_146_1 = true;
        };
        if (r3) {
          v_148_1 = false;
        } else {
          v_148_1 = v_146_1;
        };
        if (a) {
          s_5_St_9_Rlevel1_1 = true;
        } else {
          s_5_St_9_Rlevel1_1 = v_148_1;
        };
        v_459 = s_5_St_9_Rlevel1_1;
        if (r4) {
          v_146_2 = false;
        } else {
          v_146_2 = false;
        };
        if (r3) {
          v_148_2 = false;
        } else {
          v_148_2 = v_146_2;
        };
        if (a) {
          s_5_St_9_Rlevel1_2 = true;
        } else {
          s_5_St_9_Rlevel1_2 = v_148_2;
        };
        v_460 = s_5_St_9_Rlevel1_2;
        if (r4) {
          v_146_3 = false;
        } else {
          v_146_3 = false;
        };
        if (r3) {
          v_148_3 = true;
        } else {
          v_148_3 = v_146_3;
        };
        if (a) {
          s_5_St_9_Rlevel1_3 = false;
        } else {
          s_5_St_9_Rlevel1_3 = v_148_3;
        };
        v_461 = s_5_St_9_Rlevel1_3;
      };
      v_465 = v_459;
      v_466 = v_460;
      v_467 = v_461;
      v_473 = v_472;
      if (!(ck_11_3_1_0)) {
        if (v_146_1) {
          v_146_2_1 = v_146_2;
          if (v_146_2_1) {
            v_146_3_1_1 = v_146_3;
          } else {
            v_146_3_1_0 = v_146_3;
          };
        } else {
          v_146_2_0 = v_146_2;
          if (v_146_2_0) {
            v_146_3_0_1 = v_146_3;
          } else {
            v_146_3_0_0 = v_146_3;
          };
        };
        if (v_148_1) {
          v_148_2_1 = v_148_2;
          if (v_148_2_1) {
            v_148_3_1_1 = v_148_3;
          } else {
            v_148_3_1_0 = v_148_3;
          };
        } else {
          v_148_2_0 = v_148_2;
          if (v_148_2_0) {
            v_148_3_0_1 = v_148_3;
          } else {
            v_148_3_0_0 = v_148_3;
          };
        };
        if (s_5_St_9_Rlevel1_1) {
          s_5_St_9_Rlevel1_2_1 = s_5_St_9_Rlevel1_2;
          if (s_5_St_9_Rlevel1_2_1) {
            s_5_St_9_Rlevel1_3_1_1 = s_5_St_9_Rlevel1_3;
          } else {
            s_5_St_9_Rlevel1_3_1_0 = s_5_St_9_Rlevel1_3;
          };
        } else {
          s_5_St_9_Rlevel1_2_0 = s_5_St_9_Rlevel1_2;
          if (s_5_St_9_Rlevel1_2_0) {
            s_5_St_9_Rlevel1_3_0_1 = s_5_St_9_Rlevel1_3;
          } else {
            s_5_St_9_Rlevel1_3_0_0 = s_5_St_9_Rlevel1_3;
          };
        };
      };
    };
    s_5_1 = v_465;
    s_5_2 = v_466;
    s_5_3 = v_467;
    r_3 = v_473;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_468 = true;
      v_469 = true;
      v_470 = true;
      v_475 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        if (r4) {
          v_143 = true;
        } else {
          v_143 = self->pnr_3;
        };
        if (r1) {
          v_145 = true;
        } else {
          v_145 = v_143;
        };
        if (a) {
          r_3_St_9_Rlevel3 = true;
        } else {
          r_3_St_9_Rlevel3 = v_145;
        };
        if (r4) {
          v_142_1 = false;
        } else {
          v_142_1 = false;
        };
        if (r1) {
          v_144_1 = true;
        } else {
          v_144_1 = v_142_1;
        };
        if (a) {
          s_5_St_9_Rlevel3_1 = true;
        } else {
          s_5_St_9_Rlevel3_1 = v_144_1;
        };
        if (r4) {
          v_142_2 = false;
        } else {
          v_142_2 = false;
        };
        if (r1) {
          v_144_2 = false;
        } else {
          v_144_2 = v_142_2;
        };
        if (a) {
          s_5_St_9_Rlevel3_2 = true;
        } else {
          s_5_St_9_Rlevel3_2 = v_144_2;
        };
        if (r4) {
          v_142_3 = false;
        } else {
          v_142_3 = true;
        };
        if (r1) {
          v_144_3 = false;
        } else {
          v_144_3 = v_142_3;
        };
        if (a) {
          s_5_St_9_Rlevel3_3 = false;
        } else {
          s_5_St_9_Rlevel3_3 = v_144_3;
        };
        v_474 = r_3_St_9_Rlevel3;
        v_462 = s_5_St_9_Rlevel3_1;
        v_463 = s_5_St_9_Rlevel3_2;
        v_464 = s_5_St_9_Rlevel3_3;
        if (v_142_1) {
          v_142_2_1 = v_142_2;
          if (v_142_2_1) {
            v_142_3_1_1 = v_142_3;
          } else {
            v_142_3_1_0 = v_142_3;
          };
        } else {
          v_142_2_0 = v_142_2;
          if (v_142_2_0) {
            v_142_3_0_1 = v_142_3;
          } else {
            v_142_3_0_0 = v_142_3;
          };
        };
        if (v_144_1) {
          v_144_2_1 = v_144_2;
          if (v_144_2_1) {
            v_144_3_1_1 = v_144_3;
          } else {
            v_144_3_1_0 = v_144_3;
          };
        } else {
          v_144_2_0 = v_144_2;
          if (v_144_2_0) {
            v_144_3_0_1 = v_144_3;
          } else {
            v_144_3_0_0 = v_144_3;
          };
        };
      } else {
        if (r3) {
          v_139 = true;
        } else {
          v_139 = self->pnr_3;
        };
        if (r1) {
          v_141 = true;
        } else {
          v_141 = v_139;
        };
        if (a) {
          r_3_St_9_Rlevel4 = true;
        } else {
          r_3_St_9_Rlevel4 = v_141;
        };
        v_474 = r_3_St_9_Rlevel4;
        if (r3) {
          v_138_1 = false;
        } else {
          v_138_1 = false;
        };
        if (r1) {
          v_140_1 = true;
        } else {
          v_140_1 = v_138_1;
        };
        if (a) {
          s_5_St_9_Rlevel4_1 = true;
        } else {
          s_5_St_9_Rlevel4_1 = v_140_1;
        };
        v_462 = s_5_St_9_Rlevel4_1;
        if (r3) {
          v_138_2 = false;
        } else {
          v_138_2 = false;
        };
        if (r1) {
          v_140_2 = false;
        } else {
          v_140_2 = v_138_2;
        };
        if (a) {
          s_5_St_9_Rlevel4_2 = true;
        } else {
          s_5_St_9_Rlevel4_2 = v_140_2;
        };
        v_463 = s_5_St_9_Rlevel4_2;
        if (r3) {
          v_138_3 = true;
        } else {
          v_138_3 = false;
        };
        if (r1) {
          v_140_3 = false;
        } else {
          v_140_3 = v_138_3;
        };
        if (a) {
          s_5_St_9_Rlevel4_3 = false;
        } else {
          s_5_St_9_Rlevel4_3 = v_140_3;
        };
        v_464 = s_5_St_9_Rlevel4_3;
        if (v_138_1) {
          v_138_2_1 = v_138_2;
          if (v_138_2_1) {
            v_138_3_1_1 = v_138_3;
          } else {
            v_138_3_1_0 = v_138_3;
          };
        } else {
          v_138_2_0 = v_138_2;
          if (v_138_2_0) {
            v_138_3_0_1 = v_138_3;
          } else {
            v_138_3_0_0 = v_138_3;
          };
        };
        if (v_140_1) {
          v_140_2_1 = v_140_2;
          if (v_140_2_1) {
            v_140_3_1_1 = v_140_3;
          } else {
            v_140_3_1_0 = v_140_3;
          };
        } else {
          v_140_2_0 = v_140_2;
          if (v_140_2_0) {
            v_140_3_0_1 = v_140_3;
          } else {
            v_140_3_0_0 = v_140_3;
          };
        };
      };
      v_468 = v_462;
      v_469 = v_463;
      v_470 = v_464;
      v_475 = v_474;
    };
    s_5_1 = v_468;
    s_5_2 = v_469;
    s_5_3 = v_470;
    r_3 = v_475;
  };
  ck_12_1 = s_5_1;
  ck_12_2 = s_5_2;
  ck_12_3 = s_5_3;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      ck_12_3_1_1 = ck_12_3;
      if (ck_12_3_1_1) {
        estado_2_St_9_Boot = 1;
        v_428 = estado_2_St_9_Boot;
        atuador_1_St_9_Boot = true;
        v_423 = atuador_1_St_9_Boot;
        nr_3_St_9_Boot = false;
        v_448 = nr_3_St_9_Boot;
        ns_3_St_9_Boot_1 = true;
        v_433 = ns_3_St_9_Boot_1;
        ns_3_St_9_Boot_2 = true;
        v_434 = ns_3_St_9_Boot_2;
        ns_3_St_9_Boot_3 = true;
        v_435 = ns_3_St_9_Boot_3;
        if (ns_3_St_9_Boot_1) {
          ns_3_St_9_Boot_2_1 = ns_3_St_9_Boot_2;
          if (ns_3_St_9_Boot_2_1) {
            ns_3_St_9_Boot_3_1_1 = ns_3_St_9_Boot_3;
          } else {
            ns_3_St_9_Boot_3_1_0 = ns_3_St_9_Boot_3;
          };
        } else {
          ns_3_St_9_Boot_2_0 = ns_3_St_9_Boot_2;
          if (ns_3_St_9_Boot_2_0) {
            ns_3_St_9_Boot_3_0_1 = ns_3_St_9_Boot_3;
          } else {
            ns_3_St_9_Boot_3_0_0 = ns_3_St_9_Boot_3;
          };
        };
      } else {
        estado_2_St_9_Off = 0;
        atuador_1_St_9_Off = false;
        nr_3_St_9_Off = false;
        ns_3_St_9_Off_1 = true;
        ns_3_St_9_Off_2 = true;
        ns_3_St_9_Off_3 = false;
        v_428 = estado_2_St_9_Off;
        v_423 = atuador_1_St_9_Off;
        v_448 = nr_3_St_9_Off;
        v_433 = ns_3_St_9_Off_1;
        v_434 = ns_3_St_9_Off_2;
        v_435 = ns_3_St_9_Off_3;
        if (ns_3_St_9_Off_1) {
          ns_3_St_9_Off_2_1 = ns_3_St_9_Off_2;
          if (ns_3_St_9_Off_2_1) {
            ns_3_St_9_Off_3_1_1 = ns_3_St_9_Off_3;
          } else {
            ns_3_St_9_Off_3_1_0 = ns_3_St_9_Off_3;
          };
        } else {
          ns_3_St_9_Off_2_0 = ns_3_St_9_Off_2;
          if (ns_3_St_9_Off_2_0) {
            ns_3_St_9_Off_3_0_1 = ns_3_St_9_Off_3;
          } else {
            ns_3_St_9_Off_3_0_0 = ns_3_St_9_Off_3;
          };
        };
      };
      v_425 = v_423;
      v_430 = v_428;
      v_442 = v_433;
      v_443 = v_434;
      v_444 = v_435;
      v_450 = v_448;
    } else {
      ck_12_3_1_0 = ck_12_3;
      if (ck_12_3_1_0) {
        v_429 = 0;
        v_424 = true;
        v_449 = true;
        v_436 = true;
        v_437 = true;
        v_438 = true;
      } else {
        estado_2_St_9_Rlevel1 = 2;
        v_429 = estado_2_St_9_Rlevel1;
        atuador_1_St_9_Rlevel1 = true;
        v_424 = atuador_1_St_9_Rlevel1;
        nr_3_St_9_Rlevel1 = false;
        v_449 = nr_3_St_9_Rlevel1;
        ns_3_St_9_Rlevel1_1 = true;
        v_436 = ns_3_St_9_Rlevel1_1;
        ns_3_St_9_Rlevel1_2 = false;
        v_437 = ns_3_St_9_Rlevel1_2;
        ns_3_St_9_Rlevel1_3 = false;
        v_438 = ns_3_St_9_Rlevel1_3;
      };
      v_425 = v_424;
      v_430 = v_429;
      v_442 = v_436;
      v_443 = v_437;
      v_444 = v_438;
      v_450 = v_449;
      if (!(ck_12_3_1_0)) {
        if (ns_3_St_9_Rlevel1_1) {
          ns_3_St_9_Rlevel1_2_1 = ns_3_St_9_Rlevel1_2;
          if (ns_3_St_9_Rlevel1_2_1) {
            ns_3_St_9_Rlevel1_3_1_1 = ns_3_St_9_Rlevel1_3;
          } else {
            ns_3_St_9_Rlevel1_3_1_0 = ns_3_St_9_Rlevel1_3;
          };
        } else {
          ns_3_St_9_Rlevel1_2_0 = ns_3_St_9_Rlevel1_2;
          if (ns_3_St_9_Rlevel1_2_0) {
            ns_3_St_9_Rlevel1_3_0_1 = ns_3_St_9_Rlevel1_3;
          } else {
            ns_3_St_9_Rlevel1_3_0_0 = ns_3_St_9_Rlevel1_3;
          };
        };
      };
    };
    atuador_1 = v_425;
    estado_2 = v_430;
    ns_3_1 = v_442;
    ns_3_2 = v_443;
    ns_3_3 = v_444;
    nr_3 = v_450;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
      v_427 = true;
      v_432 = 0;
      v_445 = true;
      v_446 = true;
      v_447 = true;
      v_452 = true;
    } else {
      ck_12_3_0_0 = ck_12_3;
      if (ck_12_3_0_0) {
        estado_2_St_9_Rlevel3 = 3;
        atuador_1_St_9_Rlevel3 = true;
        nr_3_St_9_Rlevel3 = false;
        ns_3_St_9_Rlevel3_1 = false;
        ns_3_St_9_Rlevel3_2 = false;
        ns_3_St_9_Rlevel3_3 = true;
        v_431 = estado_2_St_9_Rlevel3;
        v_426 = atuador_1_St_9_Rlevel3;
        v_451 = nr_3_St_9_Rlevel3;
        v_439 = ns_3_St_9_Rlevel3_1;
        v_440 = ns_3_St_9_Rlevel3_2;
        v_441 = ns_3_St_9_Rlevel3_3;
      } else {
        estado_2_St_9_Rlevel4 = 4;
        v_431 = estado_2_St_9_Rlevel4;
        atuador_1_St_9_Rlevel4 = true;
        v_426 = atuador_1_St_9_Rlevel4;
        nr_3_St_9_Rlevel4 = false;
        v_451 = nr_3_St_9_Rlevel4;
        ns_3_St_9_Rlevel4_1 = false;
        v_439 = ns_3_St_9_Rlevel4_1;
        ns_3_St_9_Rlevel4_2 = false;
        v_440 = ns_3_St_9_Rlevel4_2;
        ns_3_St_9_Rlevel4_3 = false;
        v_441 = ns_3_St_9_Rlevel4_3;
      };
      v_427 = v_426;
      v_432 = v_431;
      v_445 = v_439;
      v_446 = v_440;
      v_447 = v_441;
      v_452 = v_451;
    };
    atuador_1 = v_427;
    estado_2 = v_432;
    ns_3_1 = v_445;
    ns_3_2 = v_446;
    ns_3_3 = v_447;
    nr_3 = v_452;
  };
  _out->serv_estado = estado_2;
  _out->serv_atuador = atuador_1;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_115 = !(_out->serv_atuador);
        v_110 = !(_out->serv_atuador);
      } else {
        v_104 = (_out->serv_estado<3);
        v_99 = !(_out->serv_atuador);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_92 = (_out->serv_estado<4);
        v_91 = (_out->serv_estado>0);
        v_93 = (v_91&&v_92);
        v_87 = !(_out->serv_atuador);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_81 = (_out->serv_estado>0);
        v_77 = (_out->serv_estado>0);
      } else {
        v_126 = !(_out->serv_atuador);
        v_121 = !(_out->serv_atuador);
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
  if (!(ck_12_1)) {
    if (!(ck_12_2_0)) {
      if (ck_12_3_0_0) {
        if (ns_3_St_9_Rlevel3_1) {
          ns_3_St_9_Rlevel3_2_1 = ns_3_St_9_Rlevel3_2;
          if (ns_3_St_9_Rlevel3_2_1) {
            ns_3_St_9_Rlevel3_3_1_1 = ns_3_St_9_Rlevel3_3;
          } else {
            ns_3_St_9_Rlevel3_3_1_0 = ns_3_St_9_Rlevel3_3;
          };
        } else {
          ns_3_St_9_Rlevel3_2_0 = ns_3_St_9_Rlevel3_2;
          if (ns_3_St_9_Rlevel3_2_0) {
            ns_3_St_9_Rlevel3_3_0_1 = ns_3_St_9_Rlevel3_3;
          } else {
            ns_3_St_9_Rlevel3_3_0_0 = ns_3_St_9_Rlevel3_3;
          };
        };
      } else {
        if (ns_3_St_9_Rlevel4_1) {
          ns_3_St_9_Rlevel4_2_1 = ns_3_St_9_Rlevel4_2;
          if (ns_3_St_9_Rlevel4_2_1) {
            ns_3_St_9_Rlevel4_3_1_1 = ns_3_St_9_Rlevel4_3;
          } else {
            ns_3_St_9_Rlevel4_3_1_0 = ns_3_St_9_Rlevel4_3;
          };
        } else {
          ns_3_St_9_Rlevel4_2_0 = ns_3_St_9_Rlevel4_2;
          if (ns_3_St_9_Rlevel4_2_0) {
            ns_3_St_9_Rlevel4_3_0_1 = ns_3_St_9_Rlevel4_3;
          } else {
            ns_3_St_9_Rlevel4_3_0_0 = ns_3_St_9_Rlevel4_3;
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
  if (!(ck_11_1)) {
    if (!(ck_11_2_0)) {
      if (ck_11_3_0_0) {
        if (s_5_St_9_Rlevel3_1) {
          s_5_St_9_Rlevel3_2_1 = s_5_St_9_Rlevel3_2;
          if (s_5_St_9_Rlevel3_2_1) {
            s_5_St_9_Rlevel3_3_1_1 = s_5_St_9_Rlevel3_3;
          } else {
            s_5_St_9_Rlevel3_3_1_0 = s_5_St_9_Rlevel3_3;
          };
        } else {
          s_5_St_9_Rlevel3_2_0 = s_5_St_9_Rlevel3_2;
          if (s_5_St_9_Rlevel3_2_0) {
            s_5_St_9_Rlevel3_3_0_1 = s_5_St_9_Rlevel3_3;
          } else {
            s_5_St_9_Rlevel3_3_0_0 = s_5_St_9_Rlevel3_3;
          };
        };
      } else {
        if (s_5_St_9_Rlevel4_1) {
          s_5_St_9_Rlevel4_2_1 = s_5_St_9_Rlevel4_2;
          if (s_5_St_9_Rlevel4_2_1) {
            s_5_St_9_Rlevel4_3_1_1 = s_5_St_9_Rlevel4_3;
          } else {
            s_5_St_9_Rlevel4_3_1_0 = s_5_St_9_Rlevel4_3;
          };
        } else {
          s_5_St_9_Rlevel4_2_0 = s_5_St_9_Rlevel4_2;
          if (s_5_St_9_Rlevel4_2_0) {
            s_5_St_9_Rlevel4_3_0_1 = s_5_St_9_Rlevel4_3;
          } else {
            s_5_St_9_Rlevel4_3_0_0 = s_5_St_9_Rlevel4_3;
          };
        };
      };
    };
  };
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      ck_9_3_1_1 = ck_9_3;
      if (ck_9_3_1_1) {
        if (t) {
          v_137 = true;
        } else {
          v_137 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Boot = true;
        } else {
          r_4_St_10_Boot = v_137;
        };
        v_524 = r_4_St_10_Boot;
        if (t) {
          v_136_1 = false;
        } else {
          v_136_1 = true;
        };
        if (c) {
          s_6_St_10_Boot_1 = true;
        } else {
          s_6_St_10_Boot_1 = v_136_1;
        };
        v_509 = s_6_St_10_Boot_1;
        if (t) {
          v_136_2 = false;
        } else {
          v_136_2 = true;
        };
        if (c) {
          s_6_St_10_Boot_2 = true;
        } else {
          s_6_St_10_Boot_2 = v_136_2;
        };
        v_510 = s_6_St_10_Boot_2;
        if (t) {
          v_136_3 = false;
        } else {
          v_136_3 = true;
        };
        if (c) {
          s_6_St_10_Boot_3 = false;
        } else {
          s_6_St_10_Boot_3 = v_136_3;
        };
        v_511 = s_6_St_10_Boot_3;
        if (v_136_1) {
          v_136_2_1 = v_136_2;
          if (v_136_2_1) {
            v_136_3_1_1 = v_136_3;
          } else {
            v_136_3_1_0 = v_136_3;
          };
        } else {
          v_136_2_0 = v_136_2;
          if (v_136_2_0) {
            v_136_3_0_1 = v_136_3;
          } else {
            v_136_3_0_0 = v_136_3;
          };
        };
        if (s_6_St_10_Boot_1) {
          s_6_St_10_Boot_2_1 = s_6_St_10_Boot_2;
          if (s_6_St_10_Boot_2_1) {
            s_6_St_10_Boot_3_1_1 = s_6_St_10_Boot_3;
          } else {
            s_6_St_10_Boot_3_1_0 = s_6_St_10_Boot_3;
          };
        } else {
          s_6_St_10_Boot_2_0 = s_6_St_10_Boot_2;
          if (s_6_St_10_Boot_2_0) {
            s_6_St_10_Boot_3_0_1 = s_6_St_10_Boot_3;
          } else {
            s_6_St_10_Boot_3_0_0 = s_6_St_10_Boot_3;
          };
        };
      } else {
        if (c) {
          r_4_St_10_Off = true;
          s_6_St_10_Off_1 = true;
          s_6_St_10_Off_2 = true;
          s_6_St_10_Off_3 = true;
        } else {
          r_4_St_10_Off = self->pnr_4;
          s_6_St_10_Off_1 = true;
          s_6_St_10_Off_2 = true;
          s_6_St_10_Off_3 = false;
        };
        v_524 = r_4_St_10_Off;
        v_509 = s_6_St_10_Off_1;
        v_510 = s_6_St_10_Off_2;
        v_511 = s_6_St_10_Off_3;
        if (s_6_St_10_Off_1) {
          s_6_St_10_Off_2_1 = s_6_St_10_Off_2;
          if (s_6_St_10_Off_2_1) {
            s_6_St_10_Off_3_1_1 = s_6_St_10_Off_3;
          } else {
            s_6_St_10_Off_3_1_0 = s_6_St_10_Off_3;
          };
        } else {
          s_6_St_10_Off_2_0 = s_6_St_10_Off_2;
          if (s_6_St_10_Off_2_0) {
            s_6_St_10_Off_3_0_1 = s_6_St_10_Off_3;
          } else {
            s_6_St_10_Off_3_0_0 = s_6_St_10_Off_3;
          };
        };
      };
      v_518 = v_509;
      v_519 = v_510;
      v_520 = v_511;
      v_526 = v_524;
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_525 = true;
        v_512 = true;
        v_513 = true;
        v_514 = true;
      } else {
        if (t) {
          v_130 = true;
        } else {
          v_130 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Online = true;
        } else {
          r_4_St_10_Online = v_130;
        };
        v_525 = r_4_St_10_Online;
        if (t) {
          v_129_1 = false;
        } else {
          v_129_1 = true;
        };
        if (c) {
          s_6_St_10_Online_1 = true;
        } else {
          s_6_St_10_Online_1 = v_129_1;
        };
        v_512 = s_6_St_10_Online_1;
        if (t) {
          v_129_2 = false;
        } else {
          v_129_2 = false;
        };
        if (c) {
          s_6_St_10_Online_2 = true;
        } else {
          s_6_St_10_Online_2 = v_129_2;
        };
        v_513 = s_6_St_10_Online_2;
        if (t) {
          v_129_3 = false;
        } else {
          v_129_3 = false;
        };
        if (c) {
          s_6_St_10_Online_3 = false;
        } else {
          s_6_St_10_Online_3 = v_129_3;
        };
        v_514 = s_6_St_10_Online_3;
      };
      v_518 = v_512;
      v_519 = v_513;
      v_520 = v_514;
      v_526 = v_525;
      if (!(ck_9_3_1_0)) {
        if (v_129_1) {
          v_129_2_1 = v_129_2;
          if (v_129_2_1) {
            v_129_3_1_1 = v_129_3;
          } else {
            v_129_3_1_0 = v_129_3;
          };
        } else {
          v_129_2_0 = v_129_2;
          if (v_129_2_0) {
            v_129_3_0_1 = v_129_3;
          } else {
            v_129_3_0_0 = v_129_3;
          };
        };
        if (s_6_St_10_Online_1) {
          s_6_St_10_Online_2_1 = s_6_St_10_Online_2;
          if (s_6_St_10_Online_2_1) {
            s_6_St_10_Online_3_1_1 = s_6_St_10_Online_3;
          } else {
            s_6_St_10_Online_3_1_0 = s_6_St_10_Online_3;
          };
        } else {
          s_6_St_10_Online_2_0 = s_6_St_10_Online_2;
          if (s_6_St_10_Online_2_0) {
            s_6_St_10_Online_3_0_1 = s_6_St_10_Online_3;
          } else {
            s_6_St_10_Online_3_0_0 = s_6_St_10_Online_3;
          };
        };
      };
    };
    s_6_1 = v_518;
    s_6_2 = v_519;
    s_6_3 = v_520;
    r_4 = v_526;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      v_521 = true;
      v_522 = true;
      v_523 = true;
      v_528 = true;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        if (t) {
          v_128 = true;
        } else {
          v_128 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Sleep = true;
        } else {
          r_4_St_10_Sleep = v_128;
        };
        v_527 = r_4_St_10_Sleep;
        if (t) {
          v_127_1 = true;
        } else {
          v_127_1 = false;
        };
        if (c) {
          s_6_St_10_Sleep_1 = true;
        } else {
          s_6_St_10_Sleep_1 = v_127_1;
        };
        v_515 = s_6_St_10_Sleep_1;
        if (t) {
          v_127_2 = true;
        } else {
          v_127_2 = false;
        };
        if (c) {
          s_6_St_10_Sleep_2 = true;
        } else {
          s_6_St_10_Sleep_2 = v_127_2;
        };
        v_516 = s_6_St_10_Sleep_2;
        if (t) {
          v_127_3 = true;
        } else {
          v_127_3 = true;
        };
        if (c) {
          s_6_St_10_Sleep_3 = false;
        } else {
          s_6_St_10_Sleep_3 = v_127_3;
        };
        v_517 = s_6_St_10_Sleep_3;
        if (v_127_1) {
          v_127_2_1 = v_127_2;
          if (v_127_2_1) {
            v_127_3_1_1 = v_127_3;
          } else {
            v_127_3_1_0 = v_127_3;
          };
        } else {
          v_127_2_0 = v_127_2;
          if (v_127_2_0) {
            v_127_3_0_1 = v_127_3;
          } else {
            v_127_3_0_0 = v_127_3;
          };
        };
      } else {
        if (o) {
          v_133 = true;
          v_132_1 = true;
          v_132_2 = false;
          v_132_3 = false;
        } else {
          v_133 = self->pnr_4;
          v_132_1 = false;
          v_132_2 = false;
          v_132_3 = false;
        };
        v_131 = !(o);
        if (v_131) {
          v_135 = true;
        } else {
          v_135 = v_133;
        };
        if (c) {
          r_4_St_10_Teste = true;
        } else {
          r_4_St_10_Teste = v_135;
        };
        if (v_131) {
          v_134_1 = false;
        } else {
          v_134_1 = v_132_1;
        };
        if (c) {
          s_6_St_10_Teste_1 = true;
        } else {
          s_6_St_10_Teste_1 = v_134_1;
        };
        if (v_131) {
          v_134_2 = false;
        } else {
          v_134_2 = v_132_2;
        };
        if (c) {
          s_6_St_10_Teste_2 = true;
        } else {
          s_6_St_10_Teste_2 = v_134_2;
        };
        if (v_131) {
          v_134_3 = true;
        } else {
          v_134_3 = v_132_3;
        };
        if (c) {
          s_6_St_10_Teste_3 = false;
        } else {
          s_6_St_10_Teste_3 = v_134_3;
        };
        v_527 = r_4_St_10_Teste;
        v_515 = s_6_St_10_Teste_1;
        v_516 = s_6_St_10_Teste_2;
        v_517 = s_6_St_10_Teste_3;
        if (v_132_1) {
          v_132_2_1 = v_132_2;
          if (v_132_2_1) {
            v_132_3_1_1 = v_132_3;
          } else {
            v_132_3_1_0 = v_132_3;
          };
        } else {
          v_132_2_0 = v_132_2;
          if (v_132_2_0) {
            v_132_3_0_1 = v_132_3;
          } else {
            v_132_3_0_0 = v_132_3;
          };
        };
        if (v_134_1) {
          v_134_2_1 = v_134_2;
          if (v_134_2_1) {
            v_134_3_1_1 = v_134_3;
          } else {
            v_134_3_1_0 = v_134_3;
          };
        } else {
          v_134_2_0 = v_134_2;
          if (v_134_2_0) {
            v_134_3_0_1 = v_134_3;
          } else {
            v_134_3_0_0 = v_134_3;
          };
        };
      };
      v_521 = v_515;
      v_522 = v_516;
      v_523 = v_517;
      v_528 = v_527;
    };
    s_6_1 = v_521;
    s_6_2 = v_522;
    s_6_3 = v_523;
    r_4 = v_528;
  };
  ck_10_1 = s_6_1;
  ck_10_2 = s_6_2;
  ck_10_3 = s_6_3;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      ck_10_3_1_1 = ck_10_3;
      if (ck_10_3_1_1) {
        estado_1_St_10_Boot = 2;
        v_481 = estado_1_St_10_Boot;
        atuador_St_10_Boot = true;
        v_476 = atuador_St_10_Boot;
        nr_4_St_10_Boot = false;
        v_501 = nr_4_St_10_Boot;
        ns_4_St_10_Boot_1 = true;
        v_486 = ns_4_St_10_Boot_1;
        ns_4_St_10_Boot_2 = true;
        v_487 = ns_4_St_10_Boot_2;
        ns_4_St_10_Boot_3 = true;
        v_488 = ns_4_St_10_Boot_3;
        if (ns_4_St_10_Boot_1) {
          ns_4_St_10_Boot_2_1 = ns_4_St_10_Boot_2;
          if (ns_4_St_10_Boot_2_1) {
            ns_4_St_10_Boot_3_1_1 = ns_4_St_10_Boot_3;
          } else {
            ns_4_St_10_Boot_3_1_0 = ns_4_St_10_Boot_3;
          };
        } else {
          ns_4_St_10_Boot_2_0 = ns_4_St_10_Boot_2;
          if (ns_4_St_10_Boot_2_0) {
            ns_4_St_10_Boot_3_0_1 = ns_4_St_10_Boot_3;
          } else {
            ns_4_St_10_Boot_3_0_0 = ns_4_St_10_Boot_3;
          };
        };
      } else {
        estado_1_St_10_Off = 0;
        atuador_St_10_Off = false;
        nr_4_St_10_Off = false;
        ns_4_St_10_Off_1 = true;
        ns_4_St_10_Off_2 = true;
        ns_4_St_10_Off_3 = false;
        v_481 = estado_1_St_10_Off;
        v_476 = atuador_St_10_Off;
        v_501 = nr_4_St_10_Off;
        v_486 = ns_4_St_10_Off_1;
        v_487 = ns_4_St_10_Off_2;
        v_488 = ns_4_St_10_Off_3;
        if (ns_4_St_10_Off_1) {
          ns_4_St_10_Off_2_1 = ns_4_St_10_Off_2;
          if (ns_4_St_10_Off_2_1) {
            ns_4_St_10_Off_3_1_1 = ns_4_St_10_Off_3;
          } else {
            ns_4_St_10_Off_3_1_0 = ns_4_St_10_Off_3;
          };
        } else {
          ns_4_St_10_Off_2_0 = ns_4_St_10_Off_2;
          if (ns_4_St_10_Off_2_0) {
            ns_4_St_10_Off_3_0_1 = ns_4_St_10_Off_3;
          } else {
            ns_4_St_10_Off_3_0_0 = ns_4_St_10_Off_3;
          };
        };
      };
      v_478 = v_476;
      v_483 = v_481;
      v_495 = v_486;
      v_496 = v_487;
      v_497 = v_488;
      v_503 = v_501;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_482 = 0;
        v_477 = true;
        v_502 = true;
        v_489 = true;
        v_490 = true;
        v_491 = true;
      } else {
        estado_1_St_10_Online = 4;
        v_482 = estado_1_St_10_Online;
        atuador_St_10_Online = true;
        v_477 = atuador_St_10_Online;
        nr_4_St_10_Online = false;
        v_502 = nr_4_St_10_Online;
        ns_4_St_10_Online_1 = true;
        v_489 = ns_4_St_10_Online_1;
        ns_4_St_10_Online_2 = false;
        v_490 = ns_4_St_10_Online_2;
        ns_4_St_10_Online_3 = false;
        v_491 = ns_4_St_10_Online_3;
      };
      v_478 = v_477;
      v_483 = v_482;
      v_495 = v_489;
      v_496 = v_490;
      v_497 = v_491;
      v_503 = v_502;
      if (!(ck_10_3_1_0)) {
        if (ns_4_St_10_Online_1) {
          ns_4_St_10_Online_2_1 = ns_4_St_10_Online_2;
          if (ns_4_St_10_Online_2_1) {
            ns_4_St_10_Online_3_1_1 = ns_4_St_10_Online_3;
          } else {
            ns_4_St_10_Online_3_1_0 = ns_4_St_10_Online_3;
          };
        } else {
          ns_4_St_10_Online_2_0 = ns_4_St_10_Online_2;
          if (ns_4_St_10_Online_2_0) {
            ns_4_St_10_Online_3_0_1 = ns_4_St_10_Online_3;
          } else {
            ns_4_St_10_Online_3_0_0 = ns_4_St_10_Online_3;
          };
        };
      };
    };
    atuador = v_478;
    estado_1 = v_483;
    ns_4_1 = v_495;
    ns_4_2 = v_496;
    ns_4_3 = v_497;
    nr_4 = v_503;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      v_480 = true;
      v_485 = 0;
      v_498 = true;
      v_499 = true;
      v_500 = true;
      v_505 = true;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        estado_1_St_10_Sleep = 1;
        v_484 = estado_1_St_10_Sleep;
        atuador_St_10_Sleep = false;
        v_479 = atuador_St_10_Sleep;
        nr_4_St_10_Sleep = false;
        v_504 = nr_4_St_10_Sleep;
        ns_4_St_10_Sleep_1 = false;
        v_492 = ns_4_St_10_Sleep_1;
        ns_4_St_10_Sleep_2 = false;
        v_493 = ns_4_St_10_Sleep_2;
        ns_4_St_10_Sleep_3 = true;
        v_494 = ns_4_St_10_Sleep_3;
      } else {
        estado_1_St_10_Teste = 3;
        atuador_St_10_Teste = true;
        nr_4_St_10_Teste = false;
        ns_4_St_10_Teste_1 = false;
        ns_4_St_10_Teste_2 = false;
        ns_4_St_10_Teste_3 = false;
        v_484 = estado_1_St_10_Teste;
        v_479 = atuador_St_10_Teste;
        v_504 = nr_4_St_10_Teste;
        v_492 = ns_4_St_10_Teste_1;
        v_493 = ns_4_St_10_Teste_2;
        v_494 = ns_4_St_10_Teste_3;
      };
      v_480 = v_479;
      v_485 = v_484;
      v_498 = v_492;
      v_499 = v_493;
      v_500 = v_494;
      v_505 = v_504;
    };
    atuador = v_480;
    estado_1 = v_485;
    ns_4_1 = v_498;
    ns_4_2 = v_499;
    ns_4_3 = v_500;
    nr_4 = v_505;
  };
  _out->modem_estado = estado_1;
  _out->modem_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_113 = !(_out->modem_atuador);
        v_108 = !(_out->modem_atuador);
      } else {
        v_102 = (_out->modem_estado>0);
        v_97 = (_out->modem_estado>0);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_89 = (_out->modem_estado>0);
        v_85 = (_out->modem_estado>0);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_79 = (_out->modem_estado>0);
        v_75 = (_out->modem_estado>0);
      } else {
        v_124 = !(_out->modem_atuador);
        v_119 = !(_out->modem_atuador);
      };
    };
  };
  if (ns_4_1) {
    ns_4_2_1 = ns_4_2;
    if (ns_4_2_1) {
      ns_4_3_1_1 = ns_4_3;
    } else {
      ns_4_3_1_0 = ns_4_3;
    };
  } else {
    ns_4_2_0 = ns_4_2;
    if (ns_4_2_0) {
      ns_4_3_0_1 = ns_4_3;
    } else {
      ns_4_3_0_0 = ns_4_3;
    };
  };
  if (!(ck_10_1)) {
    if (!(ck_10_2_0)) {
      if (ck_10_3_0_0) {
        if (ns_4_St_10_Sleep_1) {
          ns_4_St_10_Sleep_2_1 = ns_4_St_10_Sleep_2;
          if (ns_4_St_10_Sleep_2_1) {
            ns_4_St_10_Sleep_3_1_1 = ns_4_St_10_Sleep_3;
          } else {
            ns_4_St_10_Sleep_3_1_0 = ns_4_St_10_Sleep_3;
          };
        } else {
          ns_4_St_10_Sleep_2_0 = ns_4_St_10_Sleep_2;
          if (ns_4_St_10_Sleep_2_0) {
            ns_4_St_10_Sleep_3_0_1 = ns_4_St_10_Sleep_3;
          } else {
            ns_4_St_10_Sleep_3_0_0 = ns_4_St_10_Sleep_3;
          };
        };
      } else {
        if (ns_4_St_10_Teste_1) {
          ns_4_St_10_Teste_2_1 = ns_4_St_10_Teste_2;
          if (ns_4_St_10_Teste_2_1) {
            ns_4_St_10_Teste_3_1_1 = ns_4_St_10_Teste_3;
          } else {
            ns_4_St_10_Teste_3_1_0 = ns_4_St_10_Teste_3;
          };
        } else {
          ns_4_St_10_Teste_2_0 = ns_4_St_10_Teste_2;
          if (ns_4_St_10_Teste_2_0) {
            ns_4_St_10_Teste_3_0_1 = ns_4_St_10_Teste_3;
          } else {
            ns_4_St_10_Teste_3_0_0 = ns_4_St_10_Teste_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_9_1)) {
    if (!(ck_9_2_0)) {
      if (ck_9_3_0_0) {
        if (s_6_St_10_Sleep_1) {
          s_6_St_10_Sleep_2_1 = s_6_St_10_Sleep_2;
          if (s_6_St_10_Sleep_2_1) {
            s_6_St_10_Sleep_3_1_1 = s_6_St_10_Sleep_3;
          } else {
            s_6_St_10_Sleep_3_1_0 = s_6_St_10_Sleep_3;
          };
        } else {
          s_6_St_10_Sleep_2_0 = s_6_St_10_Sleep_2;
          if (s_6_St_10_Sleep_2_0) {
            s_6_St_10_Sleep_3_0_1 = s_6_St_10_Sleep_3;
          } else {
            s_6_St_10_Sleep_3_0_0 = s_6_St_10_Sleep_3;
          };
        };
      } else {
        if (s_6_St_10_Teste_1) {
          s_6_St_10_Teste_2_1 = s_6_St_10_Teste_2;
          if (s_6_St_10_Teste_2_1) {
            s_6_St_10_Teste_3_1_1 = s_6_St_10_Teste_3;
          } else {
            s_6_St_10_Teste_3_1_0 = s_6_St_10_Teste_3;
          };
        } else {
          s_6_St_10_Teste_2_0 = s_6_St_10_Teste_2;
          if (s_6_St_10_Teste_2_0) {
            s_6_St_10_Teste_3_0_1 = s_6_St_10_Teste_3;
          } else {
            s_6_St_10_Teste_3_0_0 = s_6_St_10_Teste_3;
          };
        };
      };
    };
  };
  if (self->ck_7_1) {
    if (ca_1) {
      r_5_St_11_Des = true;
      s_7_St_11_Des_1 = false;
    } else {
      r_5_St_11_Des = self->pnr_5;
      s_7_St_11_Des_1 = true;
    };
    r_5 = r_5_St_11_Des;
    s_7_1 = s_7_St_11_Des_1;
  } else {
    if (ca_1) {
      r_5_St_11_Lig = true;
    } else {
      r_5_St_11_Lig = self->pnr_5;
    };
    r_5 = r_5_St_11_Lig;
    if (ca_1) {
      s_7_St_11_Lig_1 = true;
    } else {
      s_7_St_11_Lig_1 = false;
    };
    s_7_1 = s_7_St_11_Lig_1;
  };
  ck_8_1 = s_7_1;
  if (ck_8_1) {
    estado_St_11_Des = false;
    nr_5_St_11_Des = false;
    ns_5_St_11_Des_1 = true;
    estado = estado_St_11_Des;
    nr_5 = nr_5_St_11_Des;
    ns_5_1 = ns_5_St_11_Des_1;
  } else {
    estado_St_11_Lig = true;
    estado = estado_St_11_Lig;
    nr_5_St_11_Lig = false;
    nr_5 = nr_5_St_11_Lig;
    ns_5_St_11_Lig_1 = false;
    ns_5_1 = ns_5_St_11_Lig_1;
  };
  _out->pabx_atuador = estado;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_111 = !(_out->pabx_atuador);
        v_112 = (_out->dia&&v_111);
        v_114 = (v_112&&v_113);
        r_dia_B25 = (v_114&&v_115);
        v_106 = !(_out->pabx_atuador);
        v_107 = (v_105&&v_106);
        v_109 = (v_107&&v_108);
        r_noite_B25 = (v_109&&v_110);
        v_534 = r_dia_B25;
        v_539 = r_noite_B25;
      } else {
        v_100 = !(_out->pabx_atuador);
        v_101 = (_out->dia&&v_100);
        v_103 = (v_101&&v_102);
        r_dia_B50 = (v_103&&v_104);
        v_534 = r_dia_B50;
        v_95 = !(_out->pabx_atuador);
        v_96 = (v_94&&v_95);
        v_98 = (v_96&&v_97);
        r_noite_B50 = (v_98&&v_99);
        v_539 = r_noite_B50;
      };
      v_536 = v_534;
      v_541 = v_539;
    } else {
      if (ck_3_1_0) {
        v_535 = true;
        v_540 = true;
      } else {
        v_88 = (_out->dia&&_out->pabx_atuador);
        v_90 = (v_88&&v_89);
        r_dia_B75 = (v_90&&v_93);
        v_535 = r_dia_B75;
        v_83 = !(_out->pabx_atuador);
        v_84 = (v_82&&v_83);
        v_86 = (v_84&&v_85);
        r_noite_B75 = (v_86&&v_87);
        v_540 = r_noite_B75;
      };
      v_536 = v_535;
      v_541 = v_540;
    };
    _out->r_dia = v_536;
    _out->r_noite = v_541;
  } else {
    if (ck_2_0) {
      v_538 = true;
      v_543 = true;
    } else {
      if (ck_3_0_0) {
        v_78 = (_out->dia&&_out->pabx_atuador);
        v_80 = (v_78&&v_79);
        r_dia_B100 = (v_80&&v_81);
        v_537 = r_dia_B100;
        v_74 = (v_73&&_out->pabx_atuador);
        v_76 = (v_74&&v_75);
        r_noite_B100 = (v_76&&v_77);
        v_542 = r_noite_B100;
      } else {
        v_122 = !(_out->pabx_atuador);
        v_123 = (_out->dia&&v_122);
        v_125 = (v_123&&v_124);
        r_dia_BERR = (v_125&&v_126);
        v_117 = !(_out->pabx_atuador);
        v_118 = (v_116&&v_117);
        v_120 = (v_118&&v_119);
        r_noite_BERR = (v_120&&v_121);
        v_537 = r_dia_BERR;
        v_542 = r_noite_BERR;
      };
      v_538 = v_537;
      v_543 = v_542;
    };
    _out->r_dia = v_538;
    _out->r_noite = v_543;
  };
  v_72 = (_out->r_dia||_out->r_noite);
  self->pnr = nr;
  self->v_400 = ns_1_2;
  self->v_401 = ns_2_2;
  self->v_402 = ns_3_4;
  self->pnr_1 = nr_1;
  self->ck_15_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_13_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->v_453 = ns_3_1;
  self->v_454 = ns_3_2;
  self->v_455 = ns_3_3;
  self->pnr_4 = nr_4;
  self->v_506 = ns_4_1;
  self->v_507 = ns_4_2;
  self->v_508 = ns_4_3;
  self->pnr_5 = nr_5;
  self->ck_7_1 = ns_5_1;;
}

