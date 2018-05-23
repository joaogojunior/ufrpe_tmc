/* --- Generated the 23/5/2018 at 5:25 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#ifndef P3_JOAO_H
#define P3_JOAO_H

#include "p3_joao_types.h"
#include "contrato_controller.h"
typedef struct P3_joao__washingmachine_mem {
  int v_166;
  int v_165;
  int v_164;
  int pnr;
} P3_joao__washingmachine_mem;

typedef struct P3_joao__washingmachine_out {
  int p;
  int i;
} P3_joao__washingmachine_out;

void P3_joao__washingmachine_reset(P3_joao__washingmachine_mem* self);

void P3_joao__washingmachine_step(int e, int s, int c,
                                  P3_joao__washingmachine_out* _out,
                                  P3_joao__washingmachine_mem* self);

typedef struct P3_joao__oven_mem {
  int v_223;
  int v_222;
  int v_221;
  int pnr;
} P3_joao__oven_mem;

typedef struct P3_joao__oven_out {
  int p;
  int i;
} P3_joao__oven_out;

void P3_joao__oven_reset(P3_joao__oven_mem* self);

void P3_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P3_joao__oven_out* _out, P3_joao__oven_mem* self);

typedef struct P3_joao__rad_mem {
  int v_255;
  int v_254;
  int pnr;
} P3_joao__rad_mem;

typedef struct P3_joao__rad_out {
  int p;
  int i;
} P3_joao__rad_out;

void P3_joao__rad_reset(P3_joao__rad_mem* self);

void P3_joao__rad_step(int up1, int down1, int up2, int down2, int c1,
                       int c2, P3_joao__rad_out* _out, P3_joao__rad_mem* self);

typedef struct P3_joao__door_mem {
  int ck_1;
  int pnr;
} P3_joao__door_mem;

typedef struct P3_joao__door_out {
  int door_open;
} P3_joao__door_out;

void P3_joao__door_reset(P3_joao__door_mem* self);

void P3_joao__door_step(int push, int c_door, P3_joao__door_out* _out,
                        P3_joao__door_mem* self);

typedef struct P3_joao__room_mem {
  int ck_1;
  int pnr;
} P3_joao__room_mem;

typedef struct P3_joao__room_out {
  int room_oc;
} P3_joao__room_out;

void P3_joao__room_reset(P3_joao__room_mem* self);

void P3_joao__room_step(int presence, P3_joao__room_out* _out,
                        P3_joao__room_mem* self);

typedef struct P3_joao__light_source_mem {
  int ck_1;
  int pnr;
} P3_joao__light_source_mem;

typedef struct P3_joao__light_source_out {
  int s;
} P3_joao__light_source_out;

void P3_joao__light_source_reset(P3_joao__light_source_mem* self);

void P3_joao__light_source_step(int botao, int c1, int c2,
                                P3_joao__light_source_out* _out,
                                P3_joao__light_source_mem* self);

typedef struct P3_joao__management_policy_mem {
  int v_275;
  int v_274;
  int pnr;
} P3_joao__management_policy_mem;

typedef struct P3_joao__management_policy_out {
  int eco;
  int comfort;
  int pl;
} P3_joao__management_policy_out;

void P3_joao__management_policy_reset(P3_joao__management_policy_mem* self);

void P3_joao__management_policy_step(int eco_input, int comfort_input,
                                     P3_joao__management_policy_out* _out,
                                     P3_joao__management_policy_mem* self);

typedef struct P3_joao__contrato_mem {
  int v_314;
  int v_313;
  int v_312;
  int v_373;
  int v_372;
  int v_371;
  int ck_19_1;
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
  int ck_11_1;
  int v_409;
  int v_408;
  int v_429;
  int v_428;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} P3_joao__contrato_mem;

typedef struct P3_joao__contrato_out {
  int eco;
  int comfort;
  int porta;
  int janela;
  int lamp;
  int tv;
  int ocupado;
  int plm;
  int pws;
  int iws;
  int po;
  int io;
  int rad_pot;
  int rad_state;
} P3_joao__contrato_out;

void P3_joao__contrato_reset(P3_joao__contrato_mem* self);

void P3_joao__contrato_step(int ecoi, int comfi, int ews, int sws, int fo,
                            int so, int tok, int cold, int pporta,
                            int pjanela, int rup1, int rdown1, int rup2,
                            int rdown2, int presenca, int bl, int bt,
                            P3_joao__contrato_out* _out,
                            P3_joao__contrato_mem* self);

#endif // P3_JOAO_H
