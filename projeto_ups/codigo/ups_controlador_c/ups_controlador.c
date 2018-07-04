/* --- Generated the 4/7/2018 at 6:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador.h"

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self) {
  self->pnr = false;
  self->v_241 = true;
  self->v_242 = true;
  self->v_243 = false;
}

void Ups_controlador__computador_step(int c_atx, int off_atx, int ts,
                                      int cr1, int cr3, int cr4, int ba,
                                      int b1, int b3, int b4, int s_atx,
                                      int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self) {
  
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
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
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
  ck_1_4 = self->v_241;
  ck_2 = self->v_242;
  ck_3 = self->v_243;
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
        v_259 = r_St_Boot;
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
        v_244 = s_St_Boot_1;
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
        v_245 = s_St_Boot_2;
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
        v_246 = s_St_Boot_3;
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
        v_259 = r_St_Off;
        v_244 = s_St_Off_1;
        v_245 = s_St_Off_2;
        v_246 = s_St_Off_3;
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
      v_253 = v_244;
      v_254 = v_245;
      v_255 = v_246;
      v_261 = v_259;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_260 = true;
        v_247 = true;
        v_248 = true;
        v_249 = true;
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
        v_260 = r_St_Rlevel1;
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
        v_247 = s_St_Rlevel1_1;
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
        v_248 = s_St_Rlevel1_2;
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
        v_249 = s_St_Rlevel1_3;
      };
      v_253 = v_247;
      v_254 = v_248;
      v_255 = v_249;
      v_261 = v_260;
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
    s_1 = v_253;
    s_2 = v_254;
    s_3 = v_255;
    r = v_261;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_256 = true;
      v_257 = true;
      v_258 = true;
      v_263 = true;
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
        v_262 = r_St_Rlevel3;
        v_250 = s_St_Rlevel3_1;
        v_251 = s_St_Rlevel3_2;
        v_252 = s_St_Rlevel3_3;
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
        v_262 = r_St_Rlevel4;
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
        v_250 = s_St_Rlevel4_1;
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
        v_251 = s_St_Rlevel4_2;
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
        v_252 = s_St_Rlevel4_3;
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
      v_256 = v_250;
      v_257 = v_251;
      v_258 = v_252;
      v_263 = v_262;
    };
    s_1 = v_256;
    s_2 = v_257;
    s_3 = v_258;
    r = v_263;
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
        v_216 = estado_St_Boot;
        atuador_St_Boot = true;
        v_211 = atuador_St_Boot;
        nr_St_Boot = false;
        v_236 = nr_St_Boot;
        ns_St_Boot_1 = true;
        v_221 = ns_St_Boot_1;
        ns_St_Boot_2 = true;
        v_222 = ns_St_Boot_2;
        ns_St_Boot_3 = true;
        v_223 = ns_St_Boot_3;
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
        v_216 = estado_St_Off;
        v_211 = atuador_St_Off;
        v_236 = nr_St_Off;
        v_221 = ns_St_Off_1;
        v_222 = ns_St_Off_2;
        v_223 = ns_St_Off_3;
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
      v_213 = v_211;
      v_218 = v_216;
      v_230 = v_221;
      v_231 = v_222;
      v_232 = v_223;
      v_238 = v_236;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_217 = 0;
        v_212 = true;
        v_237 = true;
        v_224 = true;
        v_225 = true;
        v_226 = true;
      } else {
        estado_St_Rlevel1 = 2;
        v_217 = estado_St_Rlevel1;
        atuador_St_Rlevel1 = true;
        v_212 = atuador_St_Rlevel1;
        nr_St_Rlevel1 = false;
        v_237 = nr_St_Rlevel1;
        ns_St_Rlevel1_1 = true;
        v_224 = ns_St_Rlevel1_1;
        ns_St_Rlevel1_2 = false;
        v_225 = ns_St_Rlevel1_2;
        ns_St_Rlevel1_3 = false;
        v_226 = ns_St_Rlevel1_3;
      };
      v_213 = v_212;
      v_218 = v_217;
      v_230 = v_224;
      v_231 = v_225;
      v_232 = v_226;
      v_238 = v_237;
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
    _out->atuador = v_213;
    _out->estado = v_218;
    ns_1 = v_230;
    ns_2 = v_231;
    ns_3 = v_232;
    nr = v_238;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      v_215 = true;
      v_220 = 0;
      v_233 = true;
      v_234 = true;
      v_235 = true;
      v_240 = true;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        estado_St_Rlevel3 = 3;
        atuador_St_Rlevel3 = true;
        nr_St_Rlevel3 = false;
        ns_St_Rlevel3_1 = false;
        ns_St_Rlevel3_2 = false;
        ns_St_Rlevel3_3 = true;
        v_219 = estado_St_Rlevel3;
        v_214 = atuador_St_Rlevel3;
        v_239 = nr_St_Rlevel3;
        v_227 = ns_St_Rlevel3_1;
        v_228 = ns_St_Rlevel3_2;
        v_229 = ns_St_Rlevel3_3;
      } else {
        estado_St_Rlevel4 = 4;
        v_219 = estado_St_Rlevel4;
        atuador_St_Rlevel4 = true;
        v_214 = atuador_St_Rlevel4;
        nr_St_Rlevel4 = false;
        v_239 = nr_St_Rlevel4;
        ns_St_Rlevel4_1 = false;
        v_227 = ns_St_Rlevel4_1;
        ns_St_Rlevel4_2 = false;
        v_228 = ns_St_Rlevel4_2;
        ns_St_Rlevel4_3 = false;
        v_229 = ns_St_Rlevel4_3;
      };
      v_215 = v_214;
      v_220 = v_219;
      v_233 = v_227;
      v_234 = v_228;
      v_235 = v_229;
      v_240 = v_239;
    };
    _out->atuador = v_215;
    _out->estado = v_220;
    ns_1 = v_233;
    ns_2 = v_234;
    ns_3 = v_235;
    nr = v_240;
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
  self->v_241 = ns_1;
  self->v_242 = ns_2;
  self->v_243 = ns_3;;
}

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self) {
  self->pnr = false;
  self->v_299 = true;
  self->v_300 = false;
  self->v_301 = false;
}

void Ups_controlador__bateria_step(int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self) {
  
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
  int v_44_2_0;
  int v_44_3_0_0;
  int v_44_3_0_1;
  int v_44_2_1;
  int v_44_3_1_0;
  int v_44_3_1_1;
  int v_42_2_0;
  int v_42_3_0_0;
  int v_42_3_0_1;
  int v_42_2_1;
  int v_42_3_1_0;
  int v_42_3_1_1;
  int v_40_2_0;
  int v_40_3_0_0;
  int v_40_3_0_1;
  int v_40_2_1;
  int v_40_3_1_0;
  int v_40_3_1_1;
  int v_45;
  int v_44_3;
  int v_44_2;
  int v_44_1;
  int v_43;
  int v_42_3;
  int v_42_2;
  int v_42_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_38_2_0;
  int v_38_3_0_0;
  int v_38_3_0_1;
  int v_38_2_1;
  int v_38_3_1_0;
  int v_38_3_1_1;
  int v_39;
  int v_38_3;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36;
  int v_35;
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
  int v_27_2_0;
  int v_27_3_0_0;
  int v_27_3_0_1;
  int v_27_2_1;
  int v_27_3_1_0;
  int v_27_3_1_1;
  int v_25_2_0;
  int v_25_3_0_0;
  int v_25_3_0_1;
  int v_25_2_1;
  int v_25_3_1_0;
  int v_25_3_1_1;
  int v_28;
  int v_27_3;
  int v_27_2;
  int v_27_1;
  int v_26;
  int v_25_3;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23;
  int v_21_2_0;
  int v_21_3_0_0;
  int v_21_3_0_1;
  int v_21_2_1;
  int v_21_3_1_0;
  int v_21_3_1_1;
  int v_22;
  int v_21_3;
  int v_21_2;
  int v_21_1;
  int v_20;
  int v_19;
  int v_18;
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
  v_63 = !(cp);
  v_64 = (v_63&&l1);
  v_65 = (v_64&&l2);
  a = (v_65&&v);
  v_46 = !(a);
  v_61 = (cp&&l1);
  v_62 = (v_61&&l2);
  b = (v_62&&v);
  v_47 = !(b);
  v_48 = (v_46&&v_47);
  v_58 = !(l1);
  v_57 = !(cp);
  v_59 = (v_57&&v_58);
  v_60 = (v_59&&l2);
  c = (v_60&&v);
  v_49 = !(c);
  v_50 = (v_48&&v_49);
  v_55 = !(l2);
  v_53 = !(l1);
  v_52 = !(cp);
  v_54 = (v_52&&v_53);
  v_56 = (v_54&&v_55);
  d = (v_56&&v);
  v_51 = !(d);
  e = (v_50&&v_51);
  ck_1 = self->v_299;
  ck_2_4 = self->v_300;
  ck_3 = self->v_301;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        v_35 = (e||b);
        v_36 = (v_35||c);
        v_37 = (v_36||d);
        if (v_37) {
          v_39 = true;
        } else {
          v_39 = self->pnr;
        };
        if (a) {
          r_St_1_Carregado = true;
        } else {
          r_St_1_Carregado = v_39;
        };
        if (v_37) {
          v_38_1 = true;
        } else {
          v_38_1 = true;
        };
        if (a) {
          s_St_1_Carregado_1 = false;
        } else {
          s_St_1_Carregado_1 = v_38_1;
        };
        if (v_37) {
          v_38_2 = false;
        } else {
          v_38_2 = true;
        };
        if (a) {
          s_St_1_Carregado_2 = false;
        } else {
          s_St_1_Carregado_2 = v_38_2;
        };
        if (v_37) {
          v_38_3 = false;
        } else {
          v_38_3 = true;
        };
        if (a) {
          s_St_1_Carregado_3 = true;
        } else {
          s_St_1_Carregado_3 = v_38_3;
        };
        v_317 = r_St_1_Carregado;
        v_302 = s_St_1_Carregado_1;
        v_303 = s_St_1_Carregado_2;
        v_304 = s_St_1_Carregado_3;
      } else {
        v_18 = (e||a);
        v_19 = (v_18||b);
        v_20 = (v_19||d);
        if (v_20) {
          v_22 = true;
        } else {
          v_22 = self->pnr;
        };
        if (c) {
          r_St_1_Descarregado = true;
        } else {
          r_St_1_Descarregado = v_22;
        };
        v_317 = r_St_1_Descarregado;
        if (v_20) {
          v_21_1 = true;
        } else {
          v_21_1 = true;
        };
        if (c) {
          s_St_1_Descarregado_1 = false;
        } else {
          s_St_1_Descarregado_1 = v_21_1;
        };
        v_302 = s_St_1_Descarregado_1;
        if (v_20) {
          v_21_2 = false;
        } else {
          v_21_2 = true;
        };
        if (c) {
          s_St_1_Descarregado_2 = false;
        } else {
          s_St_1_Descarregado_2 = v_21_2;
        };
        v_303 = s_St_1_Descarregado_2;
        if (v_20) {
          v_21_3 = false;
        } else {
          v_21_3 = false;
        };
        if (c) {
          s_St_1_Descarregado_3 = false;
        } else {
          s_St_1_Descarregado_3 = v_21_3;
        };
        v_304 = s_St_1_Descarregado_3;
      };
      v_311 = v_302;
      v_312 = v_303;
      v_313 = v_304;
      v_319 = v_317;
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
        v_318 = true;
        v_305 = true;
        v_306 = true;
        v_307 = true;
      } else {
        if (d) {
          v_41 = true;
        } else {
          v_41 = self->pnr;
        };
        if (c) {
          v_43 = true;
        } else {
          v_43 = v_41;
        };
        if (a) {
          v_45 = true;
        } else {
          v_45 = v_43;
        };
        if (b) {
          r_St_1_Erro = true;
        } else {
          r_St_1_Erro = v_45;
        };
        v_318 = r_St_1_Erro;
        if (d) {
          v_40_1 = true;
        } else {
          v_40_1 = true;
        };
        if (c) {
          v_42_1 = false;
        } else {
          v_42_1 = v_40_1;
        };
        if (a) {
          v_44_1 = false;
        } else {
          v_44_1 = v_42_1;
        };
        if (b) {
          s_St_1_Erro_1 = true;
        } else {
          s_St_1_Erro_1 = v_44_1;
        };
        v_305 = s_St_1_Erro_1;
        if (d) {
          v_40_2 = true;
        } else {
          v_40_2 = false;
        };
        if (c) {
          v_42_2 = false;
        } else {
          v_42_2 = v_40_2;
        };
        if (a) {
          v_44_2 = false;
        } else {
          v_44_2 = v_42_2;
        };
        if (b) {
          s_St_1_Erro_2 = true;
        } else {
          s_St_1_Erro_2 = v_44_2;
        };
        v_306 = s_St_1_Erro_2;
        if (d) {
          v_40_3 = false;
        } else {
          v_40_3 = false;
        };
        if (c) {
          v_42_3 = false;
        } else {
          v_42_3 = v_40_3;
        };
        if (a) {
          v_44_3 = true;
        } else {
          v_44_3 = v_42_3;
        };
        if (b) {
          s_St_1_Erro_3 = true;
        } else {
          s_St_1_Erro_3 = v_44_3;
        };
        v_307 = s_St_1_Erro_3;
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
        if (v_42_1) {
          v_42_2_1 = v_42_2;
          if (v_42_2_1) {
            v_42_3_1_1 = v_42_3;
          } else {
            v_42_3_1_0 = v_42_3;
          };
        } else {
          v_42_2_0 = v_42_2;
          if (v_42_2_0) {
            v_42_3_0_1 = v_42_3;
          } else {
            v_42_3_0_0 = v_42_3;
          };
        };
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
      v_311 = v_305;
      v_312 = v_306;
      v_313 = v_307;
      v_319 = v_318;
    };
    s_1 = v_311;
    s_2 = v_312;
    s_3 = v_313;
    r = v_319;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_314 = true;
      v_315 = true;
      v_316 = true;
      v_321 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_29 = (e||a);
        v_30 = (v_29||d);
        if (v_30) {
          v_32 = true;
        } else {
          v_32 = self->pnr;
        };
        if (c) {
          v_34 = true;
        } else {
          v_34 = v_32;
        };
        if (b) {
          r_St_1_Limiar1 = true;
        } else {
          r_St_1_Limiar1 = v_34;
        };
        if (v_30) {
          v_31_1 = true;
        } else {
          v_31_1 = false;
        };
        if (c) {
          v_33_1 = false;
        } else {
          v_33_1 = v_31_1;
        };
        if (b) {
          s_St_1_Limiar1_1 = true;
        } else {
          s_St_1_Limiar1_1 = v_33_1;
        };
        if (v_30) {
          v_31_2 = false;
        } else {
          v_31_2 = false;
        };
        if (c) {
          v_33_2 = false;
        } else {
          v_33_2 = v_31_2;
        };
        if (b) {
          s_St_1_Limiar1_2 = true;
        } else {
          s_St_1_Limiar1_2 = v_33_2;
        };
        if (v_30) {
          v_31_3 = false;
        } else {
          v_31_3 = true;
        };
        if (c) {
          v_33_3 = false;
        } else {
          v_33_3 = v_31_3;
        };
        if (b) {
          s_St_1_Limiar1_3 = true;
        } else {
          s_St_1_Limiar1_3 = v_33_3;
        };
        v_320 = r_St_1_Limiar1;
        v_308 = s_St_1_Limiar1_1;
        v_309 = s_St_1_Limiar1_2;
        v_310 = s_St_1_Limiar1_3;
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
      } else {
        v_23 = (e||b);
        v_24 = (v_23||c);
        if (v_24) {
          v_26 = true;
        } else {
          v_26 = self->pnr;
        };
        if (d) {
          v_28 = true;
        } else {
          v_28 = v_26;
        };
        if (a) {
          r_St_1_Limiar2 = true;
        } else {
          r_St_1_Limiar2 = v_28;
        };
        v_320 = r_St_1_Limiar2;
        if (v_24) {
          v_25_1 = true;
        } else {
          v_25_1 = false;
        };
        if (d) {
          v_27_1 = true;
        } else {
          v_27_1 = v_25_1;
        };
        if (a) {
          s_St_1_Limiar2_1 = false;
        } else {
          s_St_1_Limiar2_1 = v_27_1;
        };
        v_308 = s_St_1_Limiar2_1;
        if (v_24) {
          v_25_2 = false;
        } else {
          v_25_2 = false;
        };
        if (d) {
          v_27_2 = true;
        } else {
          v_27_2 = v_25_2;
        };
        if (a) {
          s_St_1_Limiar2_2 = false;
        } else {
          s_St_1_Limiar2_2 = v_27_2;
        };
        v_309 = s_St_1_Limiar2_2;
        if (v_24) {
          v_25_3 = false;
        } else {
          v_25_3 = false;
        };
        if (d) {
          v_27_3 = false;
        } else {
          v_27_3 = v_25_3;
        };
        if (a) {
          s_St_1_Limiar2_3 = true;
        } else {
          s_St_1_Limiar2_3 = v_27_3;
        };
        v_310 = s_St_1_Limiar2_3;
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
      };
      v_314 = v_308;
      v_315 = v_309;
      v_316 = v_310;
      v_321 = v_320;
    };
    s_1 = v_314;
    s_2 = v_315;
    s_3 = v_316;
    r = v_321;
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
        v_264 = estado_bat_St_1_Carregado_1;
        v_265 = estado_bat_St_1_Carregado_2;
        v_266 = estado_bat_St_1_Carregado_3;
        v_294 = nr_St_1_Carregado;
        v_279 = ns_St_1_Carregado_1;
        v_280 = ns_St_1_Carregado_2;
        v_281 = ns_St_1_Carregado_3;
      } else {
        estado_bat_St_1_Descarregado_1 = true;
        v_264 = estado_bat_St_1_Descarregado_1;
        estado_bat_St_1_Descarregado_2 = true;
        v_265 = estado_bat_St_1_Descarregado_2;
        estado_bat_St_1_Descarregado_3 = true;
        v_266 = estado_bat_St_1_Descarregado_3;
        nr_St_1_Descarregado = false;
        v_294 = nr_St_1_Descarregado;
        ns_St_1_Descarregado_1 = true;
        v_279 = ns_St_1_Descarregado_1;
        ns_St_1_Descarregado_2 = true;
        v_280 = ns_St_1_Descarregado_2;
        ns_St_1_Descarregado_3 = false;
        v_281 = ns_St_1_Descarregado_3;
      };
      v_273 = v_264;
      v_274 = v_265;
      v_275 = v_266;
      v_288 = v_279;
      v_289 = v_280;
      v_290 = v_281;
      v_296 = v_294;
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
        v_267 = true;
        v_268 = true;
        v_269 = true;
        v_295 = true;
        v_282 = true;
        v_283 = true;
        v_284 = true;
      } else {
        estado_bat_St_1_Erro_1 = false;
        v_267 = estado_bat_St_1_Erro_1;
        estado_bat_St_1_Erro_2 = false;
        v_268 = estado_bat_St_1_Erro_2;
        estado_bat_St_1_Erro_3 = false;
        v_269 = estado_bat_St_1_Erro_3;
        nr_St_1_Erro = false;
        v_295 = nr_St_1_Erro;
        ns_St_1_Erro_1 = true;
        v_282 = ns_St_1_Erro_1;
        ns_St_1_Erro_2 = false;
        v_283 = ns_St_1_Erro_2;
        ns_St_1_Erro_3 = false;
        v_284 = ns_St_1_Erro_3;
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
      v_273 = v_267;
      v_274 = v_268;
      v_275 = v_269;
      v_288 = v_282;
      v_289 = v_283;
      v_290 = v_284;
      v_296 = v_295;
    };
    _out->estado_bat_1 = v_273;
    _out->estado_bat_2 = v_274;
    _out->estado_bat_3 = v_275;
    ns_1 = v_288;
    ns_2 = v_289;
    ns_3 = v_290;
    nr = v_296;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_276 = true;
      v_277 = true;
      v_278 = true;
      v_291 = true;
      v_292 = true;
      v_293 = true;
      v_298 = true;
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
        v_270 = estado_bat_St_1_Limiar1_1;
        v_271 = estado_bat_St_1_Limiar1_2;
        v_272 = estado_bat_St_1_Limiar1_3;
        v_297 = nr_St_1_Limiar1;
        v_285 = ns_St_1_Limiar1_1;
        v_286 = ns_St_1_Limiar1_2;
        v_287 = ns_St_1_Limiar1_3;
      } else {
        estado_bat_St_1_Limiar2_1 = true;
        v_270 = estado_bat_St_1_Limiar2_1;
        estado_bat_St_1_Limiar2_2 = true;
        v_271 = estado_bat_St_1_Limiar2_2;
        estado_bat_St_1_Limiar2_3 = false;
        v_272 = estado_bat_St_1_Limiar2_3;
        nr_St_1_Limiar2 = false;
        v_297 = nr_St_1_Limiar2;
        ns_St_1_Limiar2_1 = false;
        v_285 = ns_St_1_Limiar2_1;
        ns_St_1_Limiar2_2 = false;
        v_286 = ns_St_1_Limiar2_2;
        ns_St_1_Limiar2_3 = false;
        v_287 = ns_St_1_Limiar2_3;
      };
      v_276 = v_270;
      v_277 = v_271;
      v_278 = v_272;
      v_291 = v_285;
      v_292 = v_286;
      v_293 = v_287;
      v_298 = v_297;
    };
    _out->estado_bat_1 = v_276;
    _out->estado_bat_2 = v_277;
    _out->estado_bat_3 = v_278;
    ns_1 = v_291;
    ns_2 = v_292;
    ns_3 = v_293;
    nr = v_298;
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
  self->v_299 = ns_1;
  self->v_300 = ns_2;
  self->v_301 = ns_3;;
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
  self->v_352 = true;
  self->v_353 = true;
  self->v_354 = false;
}

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self) {
  
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
  int v_74_2_0;
  int v_74_3_0_0;
  int v_74_3_0_1;
  int v_74_2_1;
  int v_74_3_1_0;
  int v_74_3_1_1;
  int v_75;
  int v_74_3;
  int v_74_2;
  int v_74_1;
  int v_72_2_0;
  int v_72_3_0_0;
  int v_72_3_0_1;
  int v_72_2_1;
  int v_72_3_1_0;
  int v_72_3_1_1;
  int v_70_2_0;
  int v_70_3_0_0;
  int v_70_3_0_1;
  int v_70_2_1;
  int v_70_3_1_0;
  int v_70_3_1_1;
  int v_73;
  int v_72_3;
  int v_72_2;
  int v_72_1;
  int v_71;
  int v_70_3;
  int v_70_2;
  int v_70_1;
  int v_69;
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
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_66;
  int v_3;
  int v_2;
  int v_1;
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
  ck_1 = self->v_352;
  ck_2 = self->v_353;
  ck_3 = self->v_354;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (t) {
          v_75 = true;
        } else {
          v_75 = self->pnr;
        };
        if (c) {
          r_St_5_Boot = true;
        } else {
          r_St_5_Boot = v_75;
        };
        v_370 = r_St_5_Boot;
        if (t) {
          v_74_1 = false;
        } else {
          v_74_1 = true;
        };
        if (c) {
          s_St_5_Boot_1 = true;
        } else {
          s_St_5_Boot_1 = v_74_1;
        };
        v_355 = s_St_5_Boot_1;
        if (t) {
          v_74_2 = false;
        } else {
          v_74_2 = true;
        };
        if (c) {
          s_St_5_Boot_2 = true;
        } else {
          s_St_5_Boot_2 = v_74_2;
        };
        v_356 = s_St_5_Boot_2;
        if (t) {
          v_74_3 = false;
        } else {
          v_74_3 = true;
        };
        if (c) {
          s_St_5_Boot_3 = false;
        } else {
          s_St_5_Boot_3 = v_74_3;
        };
        v_357 = s_St_5_Boot_3;
        if (v_74_1) {
          v_74_2_1 = v_74_2;
          if (v_74_2_1) {
            v_74_3_1_1 = v_74_3;
          } else {
            v_74_3_1_0 = v_74_3;
          };
        } else {
          v_74_2_0 = v_74_2;
          if (v_74_2_0) {
            v_74_3_0_1 = v_74_3;
          } else {
            v_74_3_0_0 = v_74_3;
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
        v_370 = r_St_5_Off;
        v_355 = s_St_5_Off_1;
        v_356 = s_St_5_Off_2;
        v_357 = s_St_5_Off_3;
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
      v_364 = v_355;
      v_365 = v_356;
      v_366 = v_357;
      v_372 = v_370;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_371 = true;
        v_358 = true;
        v_359 = true;
        v_360 = true;
      } else {
        if (t) {
          v_68 = true;
        } else {
          v_68 = self->pnr;
        };
        if (c) {
          r_St_5_Online = true;
        } else {
          r_St_5_Online = v_68;
        };
        v_371 = r_St_5_Online;
        if (t) {
          v_67_1 = false;
        } else {
          v_67_1 = true;
        };
        if (c) {
          s_St_5_Online_1 = true;
        } else {
          s_St_5_Online_1 = v_67_1;
        };
        v_358 = s_St_5_Online_1;
        if (t) {
          v_67_2 = false;
        } else {
          v_67_2 = false;
        };
        if (c) {
          s_St_5_Online_2 = true;
        } else {
          s_St_5_Online_2 = v_67_2;
        };
        v_359 = s_St_5_Online_2;
        if (t) {
          v_67_3 = false;
        } else {
          v_67_3 = false;
        };
        if (c) {
          s_St_5_Online_3 = false;
        } else {
          s_St_5_Online_3 = v_67_3;
        };
        v_360 = s_St_5_Online_3;
      };
      v_364 = v_358;
      v_365 = v_359;
      v_366 = v_360;
      v_372 = v_371;
      if (!(ck_3_1_0)) {
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
    s_1 = v_364;
    s_2 = v_365;
    s_3 = v_366;
    r = v_372;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_367 = true;
      v_368 = true;
      v_369 = true;
      v_374 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (t) {
          v_66 = true;
        } else {
          v_66 = self->pnr;
        };
        if (c) {
          r_St_5_Sleep = true;
        } else {
          r_St_5_Sleep = v_66;
        };
        v_373 = r_St_5_Sleep;
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
        v_361 = s_St_5_Sleep_1;
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
        v_362 = s_St_5_Sleep_2;
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
        v_363 = s_St_5_Sleep_3;
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
          v_71 = true;
          v_70_1 = true;
          v_70_2 = false;
          v_70_3 = false;
        } else {
          v_71 = self->pnr;
          v_70_1 = false;
          v_70_2 = false;
          v_70_3 = false;
        };
        v_69 = !(o);
        if (v_69) {
          v_73 = true;
        } else {
          v_73 = v_71;
        };
        if (c) {
          r_St_5_Teste = true;
        } else {
          r_St_5_Teste = v_73;
        };
        if (v_69) {
          v_72_1 = false;
        } else {
          v_72_1 = v_70_1;
        };
        if (c) {
          s_St_5_Teste_1 = true;
        } else {
          s_St_5_Teste_1 = v_72_1;
        };
        if (v_69) {
          v_72_2 = false;
        } else {
          v_72_2 = v_70_2;
        };
        if (c) {
          s_St_5_Teste_2 = true;
        } else {
          s_St_5_Teste_2 = v_72_2;
        };
        if (v_69) {
          v_72_3 = true;
        } else {
          v_72_3 = v_70_3;
        };
        if (c) {
          s_St_5_Teste_3 = false;
        } else {
          s_St_5_Teste_3 = v_72_3;
        };
        v_373 = r_St_5_Teste;
        v_361 = s_St_5_Teste_1;
        v_362 = s_St_5_Teste_2;
        v_363 = s_St_5_Teste_3;
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
        if (v_72_1) {
          v_72_2_1 = v_72_2;
          if (v_72_2_1) {
            v_72_3_1_1 = v_72_3;
          } else {
            v_72_3_1_0 = v_72_3;
          };
        } else {
          v_72_2_0 = v_72_2;
          if (v_72_2_0) {
            v_72_3_0_1 = v_72_3;
          } else {
            v_72_3_0_0 = v_72_3;
          };
        };
      };
      v_367 = v_361;
      v_368 = v_362;
      v_369 = v_363;
      v_374 = v_373;
    };
    s_1 = v_367;
    s_2 = v_368;
    s_3 = v_369;
    r = v_374;
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
        v_327 = estado_St_5_Boot;
        atuador_St_5_Boot = true;
        v_322 = atuador_St_5_Boot;
        nr_St_5_Boot = false;
        v_347 = nr_St_5_Boot;
        ns_St_5_Boot_1 = true;
        v_332 = ns_St_5_Boot_1;
        ns_St_5_Boot_2 = true;
        v_333 = ns_St_5_Boot_2;
        ns_St_5_Boot_3 = true;
        v_334 = ns_St_5_Boot_3;
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
        v_327 = estado_St_5_Off;
        v_322 = atuador_St_5_Off;
        v_347 = nr_St_5_Off;
        v_332 = ns_St_5_Off_1;
        v_333 = ns_St_5_Off_2;
        v_334 = ns_St_5_Off_3;
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
      v_324 = v_322;
      v_329 = v_327;
      v_341 = v_332;
      v_342 = v_333;
      v_343 = v_334;
      v_349 = v_347;
    } else {
      ck_6_3_1_0 = ck_6_3;
      if (ck_6_3_1_0) {
        v_328 = 0;
        v_323 = true;
        v_348 = true;
        v_335 = true;
        v_336 = true;
        v_337 = true;
      } else {
        estado_St_5_Online = 4;
        v_328 = estado_St_5_Online;
        atuador_St_5_Online = true;
        v_323 = atuador_St_5_Online;
        nr_St_5_Online = false;
        v_348 = nr_St_5_Online;
        ns_St_5_Online_1 = true;
        v_335 = ns_St_5_Online_1;
        ns_St_5_Online_2 = false;
        v_336 = ns_St_5_Online_2;
        ns_St_5_Online_3 = false;
        v_337 = ns_St_5_Online_3;
      };
      v_324 = v_323;
      v_329 = v_328;
      v_341 = v_335;
      v_342 = v_336;
      v_343 = v_337;
      v_349 = v_348;
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
    _out->atuador = v_324;
    _out->estado = v_329;
    ns_1 = v_341;
    ns_2 = v_342;
    ns_3 = v_343;
    nr = v_349;
  } else {
    ck_6_2_0 = ck_6_2;
    if (ck_6_2_0) {
      ck_6_3_0_1 = ck_6_3;
      v_326 = true;
      v_331 = 0;
      v_344 = true;
      v_345 = true;
      v_346 = true;
      v_351 = true;
    } else {
      ck_6_3_0_0 = ck_6_3;
      if (ck_6_3_0_0) {
        estado_St_5_Sleep = 1;
        v_330 = estado_St_5_Sleep;
        atuador_St_5_Sleep = false;
        v_325 = atuador_St_5_Sleep;
        nr_St_5_Sleep = false;
        v_350 = nr_St_5_Sleep;
        ns_St_5_Sleep_1 = false;
        v_338 = ns_St_5_Sleep_1;
        ns_St_5_Sleep_2 = false;
        v_339 = ns_St_5_Sleep_2;
        ns_St_5_Sleep_3 = true;
        v_340 = ns_St_5_Sleep_3;
      } else {
        estado_St_5_Teste = 3;
        atuador_St_5_Teste = true;
        nr_St_5_Teste = false;
        ns_St_5_Teste_1 = false;
        ns_St_5_Teste_2 = false;
        ns_St_5_Teste_3 = false;
        v_330 = estado_St_5_Teste;
        v_325 = atuador_St_5_Teste;
        v_350 = nr_St_5_Teste;
        v_338 = ns_St_5_Teste_1;
        v_339 = ns_St_5_Teste_2;
        v_340 = ns_St_5_Teste_3;
      };
      v_326 = v_325;
      v_331 = v_330;
      v_344 = v_338;
      v_345 = v_339;
      v_346 = v_340;
      v_351 = v_350;
    };
    _out->atuador = v_326;
    _out->estado = v_331;
    ns_1 = v_344;
    ns_2 = v_345;
    ns_3 = v_346;
    nr = v_351;
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
  self->v_352 = ns_1;
  self->v_353 = ns_2;
  self->v_354 = ns_3;;
}

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self) {
  self->pnr = false;
  self->v_410 = true;
  self->v_411 = false;
  self->v_412 = false;
  self->pnr_1 = false;
  self->ck_15_1 = true;
  self->pnr_2 = false;
  self->ck_13_1 = true;
  self->pnr_3 = false;
  self->v_463 = true;
  self->v_464 = true;
  self->v_465 = false;
  self->pnr_4 = false;
  self->v_516 = true;
  self->v_517 = true;
  self->v_518 = false;
  self->pnr_5 = false;
  self->ck_7_1 = true;
}

void Ups_controlador__contrato_step(int cb, int l1b, int l2b, int vb, int td,
                                    int tm, int om, int ts, int swa,
                                    int swr1, int swr3, int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self) {
  Contrato_controller__contrato_controller_out Contrato_controller__contrato_controller_out_st;
  
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
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
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
  int v_189_2_0;
  int v_189_3_0_0;
  int v_189_3_0_1;
  int v_189_2_1;
  int v_189_3_1_0;
  int v_189_3_1_1;
  int v_187_2_0;
  int v_187_3_0_0;
  int v_187_3_0_1;
  int v_187_2_1;
  int v_187_3_1_0;
  int v_187_3_1_1;
  int v_185_2_0;
  int v_185_3_0_0;
  int v_185_3_0_1;
  int v_185_2_1;
  int v_185_3_1_0;
  int v_185_3_1_1;
  int v_190;
  int v_189_3;
  int v_189_2;
  int v_189_1;
  int v_188;
  int v_187_3;
  int v_187_2;
  int v_187_1;
  int v_186;
  int v_185_3;
  int v_185_2;
  int v_185_1;
  int v_183_2_0;
  int v_183_3_0_0;
  int v_183_3_0_1;
  int v_183_2_1;
  int v_183_3_1_0;
  int v_183_3_1_1;
  int v_184;
  int v_183_3;
  int v_183_2;
  int v_183_1;
  int v_182;
  int v_181;
  int v_180;
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
  int v_175;
  int v_174;
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
  int v_165;
  int v_164;
  int v_163;
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
  int v_414;
  int v_413;
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
  int v_162;
  int r_2_St_8_On;
  int s_4_St_8_On_1;
  int r_2_St_8_Off;
  int s_4_St_8_Off_1;
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
  int v_434;
  int v_433;
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
  int v_156_2_0;
  int v_156_3_0_0;
  int v_156_3_0_1;
  int v_156_2_1;
  int v_156_3_1_0;
  int v_156_3_1_1;
  int v_157;
  int v_156_3;
  int v_156_2;
  int v_156_1;
  int v_154_2_0;
  int v_154_3_0_0;
  int v_154_3_0_1;
  int v_154_2_1;
  int v_154_3_1_0;
  int v_154_3_1_1;
  int v_152_2_0;
  int v_152_3_0_0;
  int v_152_3_0_1;
  int v_152_2_1;
  int v_152_3_1_0;
  int v_152_3_1_1;
  int v_155;
  int v_154_3;
  int v_154_2;
  int v_154_1;
  int v_153;
  int v_152_3;
  int v_152_2;
  int v_152_1;
  int v_150_2_0;
  int v_150_3_0_0;
  int v_150_3_0_1;
  int v_150_2_1;
  int v_150_3_1_0;
  int v_150_3_1_1;
  int v_148_2_0;
  int v_148_3_0_0;
  int v_148_3_0_1;
  int v_148_2_1;
  int v_148_3_1_0;
  int v_148_3_1_1;
  int v_151;
  int v_150_3;
  int v_150_2;
  int v_150_1;
  int v_149;
  int v_148_3;
  int v_148_2;
  int v_148_1;
  int v_146_2_0;
  int v_146_3_0_0;
  int v_146_3_0_1;
  int v_146_2_1;
  int v_146_3_1_0;
  int v_146_3_1_1;
  int v_144_2_0;
  int v_144_3_0_0;
  int v_144_3_0_1;
  int v_144_2_1;
  int v_144_3_1_0;
  int v_144_3_1_1;
  int v_147;
  int v_146_3;
  int v_146_2;
  int v_146_1;
  int v_145;
  int v_144_3;
  int v_144_2;
  int v_144_1;
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
  int v_142_2_0;
  int v_142_3_0_0;
  int v_142_3_0_1;
  int v_142_2_1;
  int v_142_3_1_0;
  int v_142_3_1_1;
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
  int v_137;
  int v_135_2_0;
  int v_135_3_0_0;
  int v_135_3_0_1;
  int v_135_2_1;
  int v_135_3_1_0;
  int v_135_3_1_1;
  int v_136;
  int v_135_3;
  int v_135_2;
  int v_135_1;
  int v_133_2_0;
  int v_133_3_0_0;
  int v_133_3_0_1;
  int v_133_2_1;
  int v_133_3_1_0;
  int v_133_3_1_1;
  int v_134;
  int v_133_3;
  int v_133_2;
  int v_133_1;
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
  int v_522;
  int v_521;
  int v_520;
  int v_519;
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
  int v_161;
  int v_160;
  int v_159;
  int v_158;
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
  int v_76;
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
  v_208 = !(cp_1);
  v_202 = !(cp_1);
  v_197 = !(cp_1);
  l1 = l1b;
  v_209 = (v_208&&l1);
  v_206 = (cp_1&&l1);
  v_203 = !(l1);
  v_204 = (v_202&&v_203);
  v_198 = !(l1);
  v_199 = (v_197&&v_198);
  l2 = l2b;
  v_210 = (v_209&&l2);
  v_207 = (v_206&&l2);
  v_205 = (v_204&&l2);
  v_200 = !(l2);
  v_201 = (v_199&&v_200);
  v = vb;
  a_1 = (v_210&&v);
  v_191 = !(a_1);
  b = (v_207&&v);
  v_192 = !(b);
  v_193 = (v_191&&v_192);
  c_1 = (v_205&&v);
  v_194 = !(c_1);
  v_195 = (v_193&&v_194);
  d = (v_201&&v);
  v_196 = !(d);
  e = (v_195&&v_196);
  ck_17_1 = self->v_410;
  ck_17_2 = self->v_411;
  ck_17_3 = self->v_412;
  t_1 = td;
  ts_1 = ts;
  s_atx = swa;
  s1 = swr1;
  s3 = swr3;
  s4 = swr4;
  ck_11_1 = self->v_463;
  ck_11_2 = self->v_464;
  ck_11_3 = self->v_465;
  t = tm;
  o = om;
  ck_9_1 = self->v_516;
  ck_9_2 = self->v_517;
  ck_9_3 = self->v_518;
  Contrato_controller__contrato_controller_step(cb, l1b, l2b, vb, td, tm, om,
                                                ts, swa, swr1, swr3, swr4,
                                                self->ck_7_1, self->pnr_5,
                                                self->v_518, self->v_517,
                                                self->v_516, self->pnr_4,
                                                self->v_465, self->v_464,
                                                self->v_463, self->pnr_3,
                                                self->ck_13_1, self->pnr_2,
                                                self->ck_15_1, self->pnr_1,
                                                self->v_412, self->v_411,
                                                self->v_410, self->pnr, true,
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
  v_161 = (ba_1&&s_atx);
  a = (v_161||c_atx);
  b1 = br1;
  v_160 = (b1&&s1);
  r1 = (v_160||cr1_1);
  b3 = br3;
  v_159 = (b3&&s3);
  r3 = (v_159||cr3_1);
  b4 = br4;
  v_158 = (b4&&s4);
  r4 = (v_158||cr4_1);
  c = cm;
  ca_1 = cp;
  if (ck_17_1) {
    ck_17_2_1 = ck_17_2;
    if (ck_17_2_1) {
      ck_17_3_1_1 = ck_17_3;
      if (ck_17_3_1_1) {
        v_180 = (e||b);
        v_181 = (v_180||c_1);
        v_182 = (v_181||d);
        if (v_182) {
          v_184 = true;
        } else {
          v_184 = self->pnr;
        };
        if (a_1) {
          r_St_6_Carregado = true;
        } else {
          r_St_6_Carregado = v_184;
        };
        if (v_182) {
          v_183_1 = true;
        } else {
          v_183_1 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_1 = false;
        } else {
          s_2_St_6_Carregado_1 = v_183_1;
        };
        if (v_182) {
          v_183_2 = false;
        } else {
          v_183_2 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_2 = false;
        } else {
          s_2_St_6_Carregado_2 = v_183_2;
        };
        if (v_182) {
          v_183_3 = false;
        } else {
          v_183_3 = true;
        };
        if (a_1) {
          s_2_St_6_Carregado_3 = true;
        } else {
          s_2_St_6_Carregado_3 = v_183_3;
        };
        v_428 = r_St_6_Carregado;
        v_413 = s_2_St_6_Carregado_1;
        v_414 = s_2_St_6_Carregado_2;
        v_415 = s_2_St_6_Carregado_3;
      } else {
        v_163 = (e||a_1);
        v_164 = (v_163||b);
        v_165 = (v_164||d);
        if (v_165) {
          v_167 = true;
        } else {
          v_167 = self->pnr;
        };
        if (c_1) {
          r_St_6_Descarregado = true;
        } else {
          r_St_6_Descarregado = v_167;
        };
        v_428 = r_St_6_Descarregado;
        if (v_165) {
          v_166_1 = true;
        } else {
          v_166_1 = true;
        };
        if (c_1) {
          s_2_St_6_Descarregado_1 = false;
        } else {
          s_2_St_6_Descarregado_1 = v_166_1;
        };
        v_413 = s_2_St_6_Descarregado_1;
        if (v_165) {
          v_166_2 = false;
        } else {
          v_166_2 = true;
        };
        if (c_1) {
          s_2_St_6_Descarregado_2 = false;
        } else {
          s_2_St_6_Descarregado_2 = v_166_2;
        };
        v_414 = s_2_St_6_Descarregado_2;
        if (v_165) {
          v_166_3 = false;
        } else {
          v_166_3 = false;
        };
        if (c_1) {
          s_2_St_6_Descarregado_3 = false;
        } else {
          s_2_St_6_Descarregado_3 = v_166_3;
        };
        v_415 = s_2_St_6_Descarregado_3;
      };
      v_422 = v_413;
      v_423 = v_414;
      v_424 = v_415;
      v_430 = v_428;
      if (ck_17_3_1_1) {
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
        v_429 = true;
        v_416 = true;
        v_417 = true;
        v_418 = true;
      } else {
        if (d) {
          v_186 = true;
        } else {
          v_186 = self->pnr;
        };
        if (c_1) {
          v_188 = true;
        } else {
          v_188 = v_186;
        };
        if (a_1) {
          v_190 = true;
        } else {
          v_190 = v_188;
        };
        if (b) {
          r_St_6_Erro = true;
        } else {
          r_St_6_Erro = v_190;
        };
        v_429 = r_St_6_Erro;
        if (d) {
          v_185_1 = true;
        } else {
          v_185_1 = true;
        };
        if (c_1) {
          v_187_1 = false;
        } else {
          v_187_1 = v_185_1;
        };
        if (a_1) {
          v_189_1 = false;
        } else {
          v_189_1 = v_187_1;
        };
        if (b) {
          s_2_St_6_Erro_1 = true;
        } else {
          s_2_St_6_Erro_1 = v_189_1;
        };
        v_416 = s_2_St_6_Erro_1;
        if (d) {
          v_185_2 = true;
        } else {
          v_185_2 = false;
        };
        if (c_1) {
          v_187_2 = false;
        } else {
          v_187_2 = v_185_2;
        };
        if (a_1) {
          v_189_2 = false;
        } else {
          v_189_2 = v_187_2;
        };
        if (b) {
          s_2_St_6_Erro_2 = true;
        } else {
          s_2_St_6_Erro_2 = v_189_2;
        };
        v_417 = s_2_St_6_Erro_2;
        if (d) {
          v_185_3 = false;
        } else {
          v_185_3 = false;
        };
        if (c_1) {
          v_187_3 = false;
        } else {
          v_187_3 = v_185_3;
        };
        if (a_1) {
          v_189_3 = true;
        } else {
          v_189_3 = v_187_3;
        };
        if (b) {
          s_2_St_6_Erro_3 = true;
        } else {
          s_2_St_6_Erro_3 = v_189_3;
        };
        v_418 = s_2_St_6_Erro_3;
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
      v_422 = v_416;
      v_423 = v_417;
      v_424 = v_418;
      v_430 = v_429;
    };
    s_2_1 = v_422;
    s_2_2 = v_423;
    s_2_3 = v_424;
    r = v_430;
  } else {
    ck_17_2_0 = ck_17_2;
    if (ck_17_2_0) {
      ck_17_3_0_1 = ck_17_3;
      v_425 = true;
      v_426 = true;
      v_427 = true;
      v_432 = true;
    } else {
      ck_17_3_0_0 = ck_17_3;
      if (ck_17_3_0_0) {
        v_174 = (e||a_1);
        v_175 = (v_174||d);
        if (v_175) {
          v_177 = true;
        } else {
          v_177 = self->pnr;
        };
        if (c_1) {
          v_179 = true;
        } else {
          v_179 = v_177;
        };
        if (b) {
          r_St_6_Limiar1 = true;
        } else {
          r_St_6_Limiar1 = v_179;
        };
        if (v_175) {
          v_176_1 = true;
        } else {
          v_176_1 = false;
        };
        if (c_1) {
          v_178_1 = false;
        } else {
          v_178_1 = v_176_1;
        };
        if (b) {
          s_2_St_6_Limiar1_1 = true;
        } else {
          s_2_St_6_Limiar1_1 = v_178_1;
        };
        if (v_175) {
          v_176_2 = false;
        } else {
          v_176_2 = false;
        };
        if (c_1) {
          v_178_2 = false;
        } else {
          v_178_2 = v_176_2;
        };
        if (b) {
          s_2_St_6_Limiar1_2 = true;
        } else {
          s_2_St_6_Limiar1_2 = v_178_2;
        };
        if (v_175) {
          v_176_3 = false;
        } else {
          v_176_3 = true;
        };
        if (c_1) {
          v_178_3 = false;
        } else {
          v_178_3 = v_176_3;
        };
        if (b) {
          s_2_St_6_Limiar1_3 = true;
        } else {
          s_2_St_6_Limiar1_3 = v_178_3;
        };
        v_431 = r_St_6_Limiar1;
        v_419 = s_2_St_6_Limiar1_1;
        v_420 = s_2_St_6_Limiar1_2;
        v_421 = s_2_St_6_Limiar1_3;
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
      } else {
        v_168 = (e||b);
        v_169 = (v_168||c_1);
        if (v_169) {
          v_171 = true;
        } else {
          v_171 = self->pnr;
        };
        if (d) {
          v_173 = true;
        } else {
          v_173 = v_171;
        };
        if (a_1) {
          r_St_6_Limiar2 = true;
        } else {
          r_St_6_Limiar2 = v_173;
        };
        v_431 = r_St_6_Limiar2;
        if (v_169) {
          v_170_1 = true;
        } else {
          v_170_1 = false;
        };
        if (d) {
          v_172_1 = true;
        } else {
          v_172_1 = v_170_1;
        };
        if (a_1) {
          s_2_St_6_Limiar2_1 = false;
        } else {
          s_2_St_6_Limiar2_1 = v_172_1;
        };
        v_419 = s_2_St_6_Limiar2_1;
        if (v_169) {
          v_170_2 = false;
        } else {
          v_170_2 = false;
        };
        if (d) {
          v_172_2 = true;
        } else {
          v_172_2 = v_170_2;
        };
        if (a_1) {
          s_2_St_6_Limiar2_2 = false;
        } else {
          s_2_St_6_Limiar2_2 = v_172_2;
        };
        v_420 = s_2_St_6_Limiar2_2;
        if (v_169) {
          v_170_3 = false;
        } else {
          v_170_3 = false;
        };
        if (d) {
          v_172_3 = false;
        } else {
          v_172_3 = v_170_3;
        };
        if (a_1) {
          s_2_St_6_Limiar2_3 = true;
        } else {
          s_2_St_6_Limiar2_3 = v_172_3;
        };
        v_421 = s_2_St_6_Limiar2_3;
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
      v_425 = v_419;
      v_426 = v_420;
      v_427 = v_421;
      v_432 = v_431;
    };
    s_2_1 = v_425;
    s_2_2 = v_426;
    s_2_3 = v_427;
    r = v_432;
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
        v_375 = estado_bat_St_6_Carregado_1;
        v_376 = estado_bat_St_6_Carregado_2;
        v_377 = estado_bat_St_6_Carregado_3;
        v_405 = nr_St_6_Carregado;
        v_390 = ns_St_6_Carregado_1;
        v_391 = ns_St_6_Carregado_2;
        v_392 = ns_St_6_Carregado_3;
      } else {
        estado_bat_St_6_Descarregado_1 = true;
        v_375 = estado_bat_St_6_Descarregado_1;
        estado_bat_St_6_Descarregado_2 = true;
        v_376 = estado_bat_St_6_Descarregado_2;
        estado_bat_St_6_Descarregado_3 = true;
        v_377 = estado_bat_St_6_Descarregado_3;
        nr_St_6_Descarregado = false;
        v_405 = nr_St_6_Descarregado;
        ns_St_6_Descarregado_1 = true;
        v_390 = ns_St_6_Descarregado_1;
        ns_St_6_Descarregado_2 = true;
        v_391 = ns_St_6_Descarregado_2;
        ns_St_6_Descarregado_3 = false;
        v_392 = ns_St_6_Descarregado_3;
      };
      v_384 = v_375;
      v_385 = v_376;
      v_386 = v_377;
      v_399 = v_390;
      v_400 = v_391;
      v_401 = v_392;
      v_407 = v_405;
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
        v_378 = true;
        v_379 = true;
        v_380 = true;
        v_406 = true;
        v_393 = true;
        v_394 = true;
        v_395 = true;
      } else {
        estado_bat_St_6_Erro_1 = false;
        v_378 = estado_bat_St_6_Erro_1;
        estado_bat_St_6_Erro_2 = false;
        v_379 = estado_bat_St_6_Erro_2;
        estado_bat_St_6_Erro_3 = false;
        v_380 = estado_bat_St_6_Erro_3;
        nr_St_6_Erro = false;
        v_406 = nr_St_6_Erro;
        ns_St_6_Erro_1 = true;
        v_393 = ns_St_6_Erro_1;
        ns_St_6_Erro_2 = false;
        v_394 = ns_St_6_Erro_2;
        ns_St_6_Erro_3 = false;
        v_395 = ns_St_6_Erro_3;
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
      v_384 = v_378;
      v_385 = v_379;
      v_386 = v_380;
      v_399 = v_393;
      v_400 = v_394;
      v_401 = v_395;
      v_407 = v_406;
    };
    estado_bat_1 = v_384;
    estado_bat_2 = v_385;
    estado_bat_3 = v_386;
    ns_1_2 = v_399;
    ns_2_2 = v_400;
    ns_3_4 = v_401;
    nr = v_407;
  } else {
    ck_18_2_0 = ck_18_2;
    if (ck_18_2_0) {
      ck_18_3_0_1 = ck_18_3;
      v_387 = true;
      v_388 = true;
      v_389 = true;
      v_402 = true;
      v_403 = true;
      v_404 = true;
      v_409 = true;
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
        v_381 = estado_bat_St_6_Limiar1_1;
        v_382 = estado_bat_St_6_Limiar1_2;
        v_383 = estado_bat_St_6_Limiar1_3;
        v_408 = nr_St_6_Limiar1;
        v_396 = ns_St_6_Limiar1_1;
        v_397 = ns_St_6_Limiar1_2;
        v_398 = ns_St_6_Limiar1_3;
      } else {
        estado_bat_St_6_Limiar2_1 = true;
        v_381 = estado_bat_St_6_Limiar2_1;
        estado_bat_St_6_Limiar2_2 = true;
        v_382 = estado_bat_St_6_Limiar2_2;
        estado_bat_St_6_Limiar2_3 = false;
        v_383 = estado_bat_St_6_Limiar2_3;
        nr_St_6_Limiar2 = false;
        v_408 = nr_St_6_Limiar2;
        ns_St_6_Limiar2_1 = false;
        v_396 = ns_St_6_Limiar2_1;
        ns_St_6_Limiar2_2 = false;
        v_397 = ns_St_6_Limiar2_2;
        ns_St_6_Limiar2_3 = false;
        v_398 = ns_St_6_Limiar2_3;
      };
      v_387 = v_381;
      v_388 = v_382;
      v_389 = v_383;
      v_402 = v_396;
      v_403 = v_397;
      v_404 = v_398;
      v_409 = v_408;
    };
    estado_bat_1 = v_387;
    estado_bat_2 = v_388;
    estado_bat_3 = v_389;
    ns_1_2 = v_402;
    ns_2_2 = v_403;
    ns_3_4 = v_404;
    nr = v_409;
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
        v_539 = erro_B25;
      } else {
        erro_B50 = false;
        v_539 = erro_B50;
      };
      v_541 = v_539;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_540 = true;
      } else {
        erro_B75 = false;
        v_540 = erro_B75;
      };
      v_541 = v_540;
    };
    _out->erro = v_541;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_543 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        erro_B100 = false;
        v_542 = erro_B100;
      } else {
        erro_BERR = true;
        v_542 = erro_BERR;
      };
      v_543 = v_542;
    };
    _out->erro = v_543;
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
    v_162 = !(s);
    if (v_162) {
      r_2_St_8_On = true;
    } else {
      r_2_St_8_On = self->pnr_2;
    };
    r_2 = r_2_St_8_On;
    if (v_162) {
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
        v_111 = !(_out->dia);
      } else {
        v_98 = !(_out->dia);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_86 = !(_out->dia);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_77 = !(_out->dia);
      } else {
        v_122 = !(_out->dia);
      };
    };
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      ck_11_3_1_1 = ck_11_3;
      if (ck_11_3_1_1) {
        if (ts_1) {
          v_157 = true;
        } else {
          v_157 = self->pnr_3;
        };
        if (off_atx) {
          r_3_St_9_Boot = true;
        } else {
          r_3_St_9_Boot = v_157;
        };
        v_481 = r_3_St_9_Boot;
        if (ts_1) {
          v_156_1 = true;
        } else {
          v_156_1 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_1 = true;
        } else {
          s_5_St_9_Boot_1 = v_156_1;
        };
        v_466 = s_5_St_9_Boot_1;
        if (ts_1) {
          v_156_2 = false;
        } else {
          v_156_2 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_2 = true;
        } else {
          s_5_St_9_Boot_2 = v_156_2;
        };
        v_467 = s_5_St_9_Boot_2;
        if (ts_1) {
          v_156_3 = false;
        } else {
          v_156_3 = true;
        };
        if (off_atx) {
          s_5_St_9_Boot_3 = false;
        } else {
          s_5_St_9_Boot_3 = v_156_3;
        };
        v_468 = s_5_St_9_Boot_3;
        if (v_156_1) {
          v_156_2_1 = v_156_2;
          if (v_156_2_1) {
            v_156_3_1_1 = v_156_3;
          } else {
            v_156_3_1_0 = v_156_3;
          };
        } else {
          v_156_2_0 = v_156_2;
          if (v_156_2_0) {
            v_156_3_0_1 = v_156_3;
          } else {
            v_156_3_0_0 = v_156_3;
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
        v_481 = r_3_St_9_Off;
        v_466 = s_5_St_9_Off_1;
        v_467 = s_5_St_9_Off_2;
        v_468 = s_5_St_9_Off_3;
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
      v_475 = v_466;
      v_476 = v_467;
      v_477 = v_468;
      v_483 = v_481;
    } else {
      ck_11_3_1_0 = ck_11_3;
      if (ck_11_3_1_0) {
        v_482 = true;
        v_469 = true;
        v_470 = true;
        v_471 = true;
      } else {
        if (r4) {
          v_153 = true;
        } else {
          v_153 = self->pnr_3;
        };
        if (r3) {
          v_155 = true;
        } else {
          v_155 = v_153;
        };
        if (a) {
          r_3_St_9_Rlevel1 = true;
        } else {
          r_3_St_9_Rlevel1 = v_155;
        };
        v_482 = r_3_St_9_Rlevel1;
        if (r4) {
          v_152_1 = false;
        } else {
          v_152_1 = true;
        };
        if (r3) {
          v_154_1 = false;
        } else {
          v_154_1 = v_152_1;
        };
        if (a) {
          s_5_St_9_Rlevel1_1 = true;
        } else {
          s_5_St_9_Rlevel1_1 = v_154_1;
        };
        v_469 = s_5_St_9_Rlevel1_1;
        if (r4) {
          v_152_2 = false;
        } else {
          v_152_2 = false;
        };
        if (r3) {
          v_154_2 = false;
        } else {
          v_154_2 = v_152_2;
        };
        if (a) {
          s_5_St_9_Rlevel1_2 = true;
        } else {
          s_5_St_9_Rlevel1_2 = v_154_2;
        };
        v_470 = s_5_St_9_Rlevel1_2;
        if (r4) {
          v_152_3 = false;
        } else {
          v_152_3 = false;
        };
        if (r3) {
          v_154_3 = true;
        } else {
          v_154_3 = v_152_3;
        };
        if (a) {
          s_5_St_9_Rlevel1_3 = false;
        } else {
          s_5_St_9_Rlevel1_3 = v_154_3;
        };
        v_471 = s_5_St_9_Rlevel1_3;
      };
      v_475 = v_469;
      v_476 = v_470;
      v_477 = v_471;
      v_483 = v_482;
      if (!(ck_11_3_1_0)) {
        if (v_152_1) {
          v_152_2_1 = v_152_2;
          if (v_152_2_1) {
            v_152_3_1_1 = v_152_3;
          } else {
            v_152_3_1_0 = v_152_3;
          };
        } else {
          v_152_2_0 = v_152_2;
          if (v_152_2_0) {
            v_152_3_0_1 = v_152_3;
          } else {
            v_152_3_0_0 = v_152_3;
          };
        };
        if (v_154_1) {
          v_154_2_1 = v_154_2;
          if (v_154_2_1) {
            v_154_3_1_1 = v_154_3;
          } else {
            v_154_3_1_0 = v_154_3;
          };
        } else {
          v_154_2_0 = v_154_2;
          if (v_154_2_0) {
            v_154_3_0_1 = v_154_3;
          } else {
            v_154_3_0_0 = v_154_3;
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
    s_5_1 = v_475;
    s_5_2 = v_476;
    s_5_3 = v_477;
    r_3 = v_483;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      ck_11_3_0_1 = ck_11_3;
      v_478 = true;
      v_479 = true;
      v_480 = true;
      v_485 = true;
    } else {
      ck_11_3_0_0 = ck_11_3;
      if (ck_11_3_0_0) {
        if (r4) {
          v_149 = true;
        } else {
          v_149 = self->pnr_3;
        };
        if (r1) {
          v_151 = true;
        } else {
          v_151 = v_149;
        };
        if (a) {
          r_3_St_9_Rlevel3 = true;
        } else {
          r_3_St_9_Rlevel3 = v_151;
        };
        if (r4) {
          v_148_1 = false;
        } else {
          v_148_1 = false;
        };
        if (r1) {
          v_150_1 = true;
        } else {
          v_150_1 = v_148_1;
        };
        if (a) {
          s_5_St_9_Rlevel3_1 = true;
        } else {
          s_5_St_9_Rlevel3_1 = v_150_1;
        };
        if (r4) {
          v_148_2 = false;
        } else {
          v_148_2 = false;
        };
        if (r1) {
          v_150_2 = false;
        } else {
          v_150_2 = v_148_2;
        };
        if (a) {
          s_5_St_9_Rlevel3_2 = true;
        } else {
          s_5_St_9_Rlevel3_2 = v_150_2;
        };
        if (r4) {
          v_148_3 = false;
        } else {
          v_148_3 = true;
        };
        if (r1) {
          v_150_3 = false;
        } else {
          v_150_3 = v_148_3;
        };
        if (a) {
          s_5_St_9_Rlevel3_3 = false;
        } else {
          s_5_St_9_Rlevel3_3 = v_150_3;
        };
        v_484 = r_3_St_9_Rlevel3;
        v_472 = s_5_St_9_Rlevel3_1;
        v_473 = s_5_St_9_Rlevel3_2;
        v_474 = s_5_St_9_Rlevel3_3;
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
      } else {
        if (r3) {
          v_145 = true;
        } else {
          v_145 = self->pnr_3;
        };
        if (r1) {
          v_147 = true;
        } else {
          v_147 = v_145;
        };
        if (a) {
          r_3_St_9_Rlevel4 = true;
        } else {
          r_3_St_9_Rlevel4 = v_147;
        };
        v_484 = r_3_St_9_Rlevel4;
        if (r3) {
          v_144_1 = false;
        } else {
          v_144_1 = false;
        };
        if (r1) {
          v_146_1 = true;
        } else {
          v_146_1 = v_144_1;
        };
        if (a) {
          s_5_St_9_Rlevel4_1 = true;
        } else {
          s_5_St_9_Rlevel4_1 = v_146_1;
        };
        v_472 = s_5_St_9_Rlevel4_1;
        if (r3) {
          v_144_2 = false;
        } else {
          v_144_2 = false;
        };
        if (r1) {
          v_146_2 = false;
        } else {
          v_146_2 = v_144_2;
        };
        if (a) {
          s_5_St_9_Rlevel4_2 = true;
        } else {
          s_5_St_9_Rlevel4_2 = v_146_2;
        };
        v_473 = s_5_St_9_Rlevel4_2;
        if (r3) {
          v_144_3 = true;
        } else {
          v_144_3 = false;
        };
        if (r1) {
          v_146_3 = false;
        } else {
          v_146_3 = v_144_3;
        };
        if (a) {
          s_5_St_9_Rlevel4_3 = false;
        } else {
          s_5_St_9_Rlevel4_3 = v_146_3;
        };
        v_474 = s_5_St_9_Rlevel4_3;
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
      };
      v_478 = v_472;
      v_479 = v_473;
      v_480 = v_474;
      v_485 = v_484;
    };
    s_5_1 = v_478;
    s_5_2 = v_479;
    s_5_3 = v_480;
    r_3 = v_485;
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
        v_438 = estado_2_St_9_Boot;
        atuador_1_St_9_Boot = true;
        v_433 = atuador_1_St_9_Boot;
        nr_3_St_9_Boot = false;
        v_458 = nr_3_St_9_Boot;
        ns_3_St_9_Boot_1 = true;
        v_443 = ns_3_St_9_Boot_1;
        ns_3_St_9_Boot_2 = true;
        v_444 = ns_3_St_9_Boot_2;
        ns_3_St_9_Boot_3 = true;
        v_445 = ns_3_St_9_Boot_3;
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
        v_438 = estado_2_St_9_Off;
        v_433 = atuador_1_St_9_Off;
        v_458 = nr_3_St_9_Off;
        v_443 = ns_3_St_9_Off_1;
        v_444 = ns_3_St_9_Off_2;
        v_445 = ns_3_St_9_Off_3;
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
      v_435 = v_433;
      v_440 = v_438;
      v_452 = v_443;
      v_453 = v_444;
      v_454 = v_445;
      v_460 = v_458;
    } else {
      ck_12_3_1_0 = ck_12_3;
      if (ck_12_3_1_0) {
        v_439 = 0;
        v_434 = true;
        v_459 = true;
        v_446 = true;
        v_447 = true;
        v_448 = true;
      } else {
        estado_2_St_9_Rlevel1 = 2;
        v_439 = estado_2_St_9_Rlevel1;
        atuador_1_St_9_Rlevel1 = true;
        v_434 = atuador_1_St_9_Rlevel1;
        nr_3_St_9_Rlevel1 = false;
        v_459 = nr_3_St_9_Rlevel1;
        ns_3_St_9_Rlevel1_1 = true;
        v_446 = ns_3_St_9_Rlevel1_1;
        ns_3_St_9_Rlevel1_2 = false;
        v_447 = ns_3_St_9_Rlevel1_2;
        ns_3_St_9_Rlevel1_3 = false;
        v_448 = ns_3_St_9_Rlevel1_3;
      };
      v_435 = v_434;
      v_440 = v_439;
      v_452 = v_446;
      v_453 = v_447;
      v_454 = v_448;
      v_460 = v_459;
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
    atuador_1 = v_435;
    estado_2 = v_440;
    ns_3_1 = v_452;
    ns_3_2 = v_453;
    ns_3_3 = v_454;
    nr_3 = v_460;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      ck_12_3_0_1 = ck_12_3;
      v_437 = true;
      v_442 = 0;
      v_455 = true;
      v_456 = true;
      v_457 = true;
      v_462 = true;
    } else {
      ck_12_3_0_0 = ck_12_3;
      if (ck_12_3_0_0) {
        estado_2_St_9_Rlevel3 = 3;
        atuador_1_St_9_Rlevel3 = true;
        nr_3_St_9_Rlevel3 = false;
        ns_3_St_9_Rlevel3_1 = false;
        ns_3_St_9_Rlevel3_2 = false;
        ns_3_St_9_Rlevel3_3 = true;
        v_441 = estado_2_St_9_Rlevel3;
        v_436 = atuador_1_St_9_Rlevel3;
        v_461 = nr_3_St_9_Rlevel3;
        v_449 = ns_3_St_9_Rlevel3_1;
        v_450 = ns_3_St_9_Rlevel3_2;
        v_451 = ns_3_St_9_Rlevel3_3;
      } else {
        estado_2_St_9_Rlevel4 = 4;
        v_441 = estado_2_St_9_Rlevel4;
        atuador_1_St_9_Rlevel4 = true;
        v_436 = atuador_1_St_9_Rlevel4;
        nr_3_St_9_Rlevel4 = false;
        v_461 = nr_3_St_9_Rlevel4;
        ns_3_St_9_Rlevel4_1 = false;
        v_449 = ns_3_St_9_Rlevel4_1;
        ns_3_St_9_Rlevel4_2 = false;
        v_450 = ns_3_St_9_Rlevel4_2;
        ns_3_St_9_Rlevel4_3 = false;
        v_451 = ns_3_St_9_Rlevel4_3;
      };
      v_437 = v_436;
      v_442 = v_441;
      v_455 = v_449;
      v_456 = v_450;
      v_457 = v_451;
      v_462 = v_461;
    };
    atuador_1 = v_437;
    estado_2 = v_442;
    ns_3_1 = v_455;
    ns_3_2 = v_456;
    ns_3_3 = v_457;
    nr_3 = v_462;
  };
  _out->serv_estado = estado_2;
  _out->serv_atuador = atuador_1;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_121 = !(_out->serv_atuador);
        v_116 = !(_out->serv_atuador);
      } else {
        v_109 = (_out->serv_estado<3);
        v_108 = (_out->serv_estado>0);
        v_110 = (v_108&&v_109);
        v_103 = !(_out->serv_atuador);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_96 = (_out->serv_estado<4);
        v_95 = (_out->serv_estado>0);
        v_97 = (v_95&&v_96);
        v_91 = !(_out->serv_atuador);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_85 = (_out->serv_estado>0);
        v_81 = (_out->serv_estado>0);
      } else {
        v_132 = !(_out->serv_atuador);
        v_127 = !(_out->serv_atuador);
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
          v_143 = true;
        } else {
          v_143 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Boot = true;
        } else {
          r_4_St_10_Boot = v_143;
        };
        v_534 = r_4_St_10_Boot;
        if (t) {
          v_142_1 = false;
        } else {
          v_142_1 = true;
        };
        if (c) {
          s_6_St_10_Boot_1 = true;
        } else {
          s_6_St_10_Boot_1 = v_142_1;
        };
        v_519 = s_6_St_10_Boot_1;
        if (t) {
          v_142_2 = false;
        } else {
          v_142_2 = true;
        };
        if (c) {
          s_6_St_10_Boot_2 = true;
        } else {
          s_6_St_10_Boot_2 = v_142_2;
        };
        v_520 = s_6_St_10_Boot_2;
        if (t) {
          v_142_3 = false;
        } else {
          v_142_3 = true;
        };
        if (c) {
          s_6_St_10_Boot_3 = false;
        } else {
          s_6_St_10_Boot_3 = v_142_3;
        };
        v_521 = s_6_St_10_Boot_3;
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
        v_534 = r_4_St_10_Off;
        v_519 = s_6_St_10_Off_1;
        v_520 = s_6_St_10_Off_2;
        v_521 = s_6_St_10_Off_3;
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
      v_528 = v_519;
      v_529 = v_520;
      v_530 = v_521;
      v_536 = v_534;
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_535 = true;
        v_522 = true;
        v_523 = true;
        v_524 = true;
      } else {
        if (t) {
          v_136 = true;
        } else {
          v_136 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Online = true;
        } else {
          r_4_St_10_Online = v_136;
        };
        v_535 = r_4_St_10_Online;
        if (t) {
          v_135_1 = false;
        } else {
          v_135_1 = true;
        };
        if (c) {
          s_6_St_10_Online_1 = true;
        } else {
          s_6_St_10_Online_1 = v_135_1;
        };
        v_522 = s_6_St_10_Online_1;
        if (t) {
          v_135_2 = false;
        } else {
          v_135_2 = false;
        };
        if (c) {
          s_6_St_10_Online_2 = true;
        } else {
          s_6_St_10_Online_2 = v_135_2;
        };
        v_523 = s_6_St_10_Online_2;
        if (t) {
          v_135_3 = false;
        } else {
          v_135_3 = false;
        };
        if (c) {
          s_6_St_10_Online_3 = false;
        } else {
          s_6_St_10_Online_3 = v_135_3;
        };
        v_524 = s_6_St_10_Online_3;
      };
      v_528 = v_522;
      v_529 = v_523;
      v_530 = v_524;
      v_536 = v_535;
      if (!(ck_9_3_1_0)) {
        if (v_135_1) {
          v_135_2_1 = v_135_2;
          if (v_135_2_1) {
            v_135_3_1_1 = v_135_3;
          } else {
            v_135_3_1_0 = v_135_3;
          };
        } else {
          v_135_2_0 = v_135_2;
          if (v_135_2_0) {
            v_135_3_0_1 = v_135_3;
          } else {
            v_135_3_0_0 = v_135_3;
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
    s_6_1 = v_528;
    s_6_2 = v_529;
    s_6_3 = v_530;
    r_4 = v_536;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      v_531 = true;
      v_532 = true;
      v_533 = true;
      v_538 = true;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        if (t) {
          v_134 = true;
        } else {
          v_134 = self->pnr_4;
        };
        if (c) {
          r_4_St_10_Sleep = true;
        } else {
          r_4_St_10_Sleep = v_134;
        };
        v_537 = r_4_St_10_Sleep;
        if (t) {
          v_133_1 = true;
        } else {
          v_133_1 = false;
        };
        if (c) {
          s_6_St_10_Sleep_1 = true;
        } else {
          s_6_St_10_Sleep_1 = v_133_1;
        };
        v_525 = s_6_St_10_Sleep_1;
        if (t) {
          v_133_2 = true;
        } else {
          v_133_2 = false;
        };
        if (c) {
          s_6_St_10_Sleep_2 = true;
        } else {
          s_6_St_10_Sleep_2 = v_133_2;
        };
        v_526 = s_6_St_10_Sleep_2;
        if (t) {
          v_133_3 = true;
        } else {
          v_133_3 = true;
        };
        if (c) {
          s_6_St_10_Sleep_3 = false;
        } else {
          s_6_St_10_Sleep_3 = v_133_3;
        };
        v_527 = s_6_St_10_Sleep_3;
        if (v_133_1) {
          v_133_2_1 = v_133_2;
          if (v_133_2_1) {
            v_133_3_1_1 = v_133_3;
          } else {
            v_133_3_1_0 = v_133_3;
          };
        } else {
          v_133_2_0 = v_133_2;
          if (v_133_2_0) {
            v_133_3_0_1 = v_133_3;
          } else {
            v_133_3_0_0 = v_133_3;
          };
        };
      } else {
        if (o) {
          v_139 = true;
          v_138_1 = true;
          v_138_2 = false;
          v_138_3 = false;
        } else {
          v_139 = self->pnr_4;
          v_138_1 = false;
          v_138_2 = false;
          v_138_3 = false;
        };
        v_137 = !(o);
        if (v_137) {
          v_141 = true;
        } else {
          v_141 = v_139;
        };
        if (c) {
          r_4_St_10_Teste = true;
        } else {
          r_4_St_10_Teste = v_141;
        };
        if (v_137) {
          v_140_1 = false;
        } else {
          v_140_1 = v_138_1;
        };
        if (c) {
          s_6_St_10_Teste_1 = true;
        } else {
          s_6_St_10_Teste_1 = v_140_1;
        };
        if (v_137) {
          v_140_2 = false;
        } else {
          v_140_2 = v_138_2;
        };
        if (c) {
          s_6_St_10_Teste_2 = true;
        } else {
          s_6_St_10_Teste_2 = v_140_2;
        };
        if (v_137) {
          v_140_3 = true;
        } else {
          v_140_3 = v_138_3;
        };
        if (c) {
          s_6_St_10_Teste_3 = false;
        } else {
          s_6_St_10_Teste_3 = v_140_3;
        };
        v_537 = r_4_St_10_Teste;
        v_525 = s_6_St_10_Teste_1;
        v_526 = s_6_St_10_Teste_2;
        v_527 = s_6_St_10_Teste_3;
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
      v_531 = v_525;
      v_532 = v_526;
      v_533 = v_527;
      v_538 = v_537;
    };
    s_6_1 = v_531;
    s_6_2 = v_532;
    s_6_3 = v_533;
    r_4 = v_538;
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
        v_491 = estado_1_St_10_Boot;
        atuador_St_10_Boot = true;
        v_486 = atuador_St_10_Boot;
        nr_4_St_10_Boot = false;
        v_511 = nr_4_St_10_Boot;
        ns_4_St_10_Boot_1 = true;
        v_496 = ns_4_St_10_Boot_1;
        ns_4_St_10_Boot_2 = true;
        v_497 = ns_4_St_10_Boot_2;
        ns_4_St_10_Boot_3 = true;
        v_498 = ns_4_St_10_Boot_3;
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
        v_491 = estado_1_St_10_Off;
        v_486 = atuador_St_10_Off;
        v_511 = nr_4_St_10_Off;
        v_496 = ns_4_St_10_Off_1;
        v_497 = ns_4_St_10_Off_2;
        v_498 = ns_4_St_10_Off_3;
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
      v_488 = v_486;
      v_493 = v_491;
      v_505 = v_496;
      v_506 = v_497;
      v_507 = v_498;
      v_513 = v_511;
    } else {
      ck_10_3_1_0 = ck_10_3;
      if (ck_10_3_1_0) {
        v_492 = 0;
        v_487 = true;
        v_512 = true;
        v_499 = true;
        v_500 = true;
        v_501 = true;
      } else {
        estado_1_St_10_Online = 4;
        v_492 = estado_1_St_10_Online;
        atuador_St_10_Online = true;
        v_487 = atuador_St_10_Online;
        nr_4_St_10_Online = false;
        v_512 = nr_4_St_10_Online;
        ns_4_St_10_Online_1 = true;
        v_499 = ns_4_St_10_Online_1;
        ns_4_St_10_Online_2 = false;
        v_500 = ns_4_St_10_Online_2;
        ns_4_St_10_Online_3 = false;
        v_501 = ns_4_St_10_Online_3;
      };
      v_488 = v_487;
      v_493 = v_492;
      v_505 = v_499;
      v_506 = v_500;
      v_507 = v_501;
      v_513 = v_512;
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
    atuador = v_488;
    estado_1 = v_493;
    ns_4_1 = v_505;
    ns_4_2 = v_506;
    ns_4_3 = v_507;
    nr_4 = v_513;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      ck_10_3_0_1 = ck_10_3;
      v_490 = true;
      v_495 = 0;
      v_508 = true;
      v_509 = true;
      v_510 = true;
      v_515 = true;
    } else {
      ck_10_3_0_0 = ck_10_3;
      if (ck_10_3_0_0) {
        estado_1_St_10_Sleep = 1;
        v_494 = estado_1_St_10_Sleep;
        atuador_St_10_Sleep = false;
        v_489 = atuador_St_10_Sleep;
        nr_4_St_10_Sleep = false;
        v_514 = nr_4_St_10_Sleep;
        ns_4_St_10_Sleep_1 = false;
        v_502 = ns_4_St_10_Sleep_1;
        ns_4_St_10_Sleep_2 = false;
        v_503 = ns_4_St_10_Sleep_2;
        ns_4_St_10_Sleep_3 = true;
        v_504 = ns_4_St_10_Sleep_3;
      } else {
        estado_1_St_10_Teste = 3;
        atuador_St_10_Teste = true;
        nr_4_St_10_Teste = false;
        ns_4_St_10_Teste_1 = false;
        ns_4_St_10_Teste_2 = false;
        ns_4_St_10_Teste_3 = false;
        v_494 = estado_1_St_10_Teste;
        v_489 = atuador_St_10_Teste;
        v_514 = nr_4_St_10_Teste;
        v_502 = ns_4_St_10_Teste_1;
        v_503 = ns_4_St_10_Teste_2;
        v_504 = ns_4_St_10_Teste_3;
      };
      v_490 = v_489;
      v_495 = v_494;
      v_508 = v_502;
      v_509 = v_503;
      v_510 = v_504;
      v_515 = v_514;
    };
    atuador = v_490;
    estado_1 = v_495;
    ns_4_1 = v_508;
    ns_4_2 = v_509;
    ns_4_3 = v_510;
    nr_4 = v_515;
  };
  _out->modem_estado = estado_1;
  _out->modem_atuador = atuador;
  if (ck_1) {
    if (ck_2_1) {
      if (ck_3_1_1) {
        v_119 = !(_out->modem_atuador);
        v_114 = !(_out->modem_atuador);
      } else {
        v_106 = (_out->modem_estado>0);
        v_101 = (_out->modem_estado>0);
      };
    } else {
      if (!(ck_3_1_0)) {
        v_93 = (_out->modem_estado>0);
        v_89 = (_out->modem_estado>0);
      };
    };
  } else {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        v_83 = (_out->modem_estado>0);
        v_79 = (_out->modem_estado>0);
      } else {
        v_130 = !(_out->modem_atuador);
        v_125 = !(_out->modem_atuador);
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
        v_117 = !(_out->pabx_atuador);
        v_118 = (_out->dia&&v_117);
        v_120 = (v_118&&v_119);
        r_dia_B25 = (v_120&&v_121);
        v_112 = !(_out->pabx_atuador);
        v_113 = (v_111&&v_112);
        v_115 = (v_113&&v_114);
        r_noite_B25 = (v_115&&v_116);
        v_544 = r_dia_B25;
        v_549 = r_noite_B25;
      } else {
        v_104 = !(_out->pabx_atuador);
        v_105 = (_out->dia&&v_104);
        v_107 = (v_105&&v_106);
        r_dia_B50 = (v_107&&v_110);
        v_544 = r_dia_B50;
        v_99 = !(_out->pabx_atuador);
        v_100 = (v_98&&v_99);
        v_102 = (v_100&&v_101);
        r_noite_B50 = (v_102&&v_103);
        v_549 = r_noite_B50;
      };
      v_546 = v_544;
      v_551 = v_549;
    } else {
      if (ck_3_1_0) {
        v_545 = true;
        v_550 = true;
      } else {
        v_92 = (_out->dia&&_out->pabx_atuador);
        v_94 = (v_92&&v_93);
        r_dia_B75 = (v_94&&v_97);
        v_545 = r_dia_B75;
        v_87 = !(_out->pabx_atuador);
        v_88 = (v_86&&v_87);
        v_90 = (v_88&&v_89);
        r_noite_B75 = (v_90&&v_91);
        v_550 = r_noite_B75;
      };
      v_546 = v_545;
      v_551 = v_550;
    };
    _out->r_dia = v_546;
    _out->r_noite = v_551;
  } else {
    if (ck_2_0) {
      v_548 = true;
      v_553 = true;
    } else {
      if (ck_3_0_0) {
        v_82 = (_out->dia&&_out->pabx_atuador);
        v_84 = (v_82&&v_83);
        r_dia_B100 = (v_84&&v_85);
        v_547 = r_dia_B100;
        v_78 = (v_77&&_out->pabx_atuador);
        v_80 = (v_78&&v_79);
        r_noite_B100 = (v_80&&v_81);
        v_552 = r_noite_B100;
      } else {
        v_128 = !(_out->pabx_atuador);
        v_129 = (_out->dia&&v_128);
        v_131 = (v_129&&v_130);
        r_dia_BERR = (v_131&&v_132);
        v_123 = !(_out->pabx_atuador);
        v_124 = (v_122&&v_123);
        v_126 = (v_124&&v_125);
        r_noite_BERR = (v_126&&v_127);
        v_547 = r_dia_BERR;
        v_552 = r_noite_BERR;
      };
      v_548 = v_547;
      v_553 = v_552;
    };
    _out->r_dia = v_548;
    _out->r_noite = v_553;
  };
  v_76 = (_out->r_dia||_out->r_noite);
  self->pnr = nr;
  self->v_410 = ns_1_2;
  self->v_411 = ns_2_2;
  self->v_412 = ns_3_4;
  self->pnr_1 = nr_1;
  self->ck_15_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_13_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->v_463 = ns_3_1;
  self->v_464 = ns_3_2;
  self->v_465 = ns_3_3;
  self->pnr_4 = nr_4;
  self->v_516 = ns_4_1;
  self->v_517 = ns_4_2;
  self->v_518 = ns_4_3;
  self->pnr_5 = nr_5;
  self->ck_7_1 = ns_5_1;;
}

