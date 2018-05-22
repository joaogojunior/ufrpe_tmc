/* --- Generated the 21/5/2018 at 10:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#ifndef P2_JOAO_H
#define P2_JOAO_H

#include "p2_joao_types.h"
#include "contrato_controller.h"
typedef struct P2_joao__washingmachine_mem {
  int v_136;
  int v_135;
  int v_134;
  int pnr;
} P2_joao__washingmachine_mem;

typedef struct P2_joao__washingmachine_out {
  int p;
  int i;
} P2_joao__washingmachine_out;

void P2_joao__washingmachine_reset(P2_joao__washingmachine_mem* self);

void P2_joao__washingmachine_step(int e, int s, int c,
                                  P2_joao__washingmachine_out* _out,
                                  P2_joao__washingmachine_mem* self);

typedef struct P2_joao__oven_mem {
  int v_193;
  int v_192;
  int v_191;
  int pnr;
} P2_joao__oven_mem;

typedef struct P2_joao__oven_out {
  int p;
  int i;
} P2_joao__oven_out;

void P2_joao__oven_reset(P2_joao__oven_mem* self);

void P2_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P2_joao__oven_out* _out, P2_joao__oven_mem* self);

typedef struct P2_joao__rad_mem {
  int v_225;
  int v_224;
  int pnr;
} P2_joao__rad_mem;

typedef struct P2_joao__rad_out {
  int p;
  int i;
} P2_joao__rad_out;

void P2_joao__rad_reset(P2_joao__rad_mem* self);

void P2_joao__rad_step(int up1, int down1, int up2, int down2, int c1,
                       int c2, P2_joao__rad_out* _out, P2_joao__rad_mem* self);

typedef struct P2_joao__door_mem {
  int ck_1;
  int pnr;
} P2_joao__door_mem;

typedef struct P2_joao__door_out {
  int door_open;
} P2_joao__door_out;

void P2_joao__door_reset(P2_joao__door_mem* self);

void P2_joao__door_step(int push, int c_door, P2_joao__door_out* _out,
                        P2_joao__door_mem* self);

typedef struct P2_joao__room_mem {
  int ck_1;
  int pnr;
} P2_joao__room_mem;

typedef struct P2_joao__room_out {
  int room_oc;
} P2_joao__room_out;

void P2_joao__room_reset(P2_joao__room_mem* self);

void P2_joao__room_step(int presence, P2_joao__room_out* _out,
                        P2_joao__room_mem* self);

typedef struct P2_joao__light_source_mem {
  int ck_1;
  int pnr;
} P2_joao__light_source_mem;

typedef struct P2_joao__light_source_out {
  int s;
} P2_joao__light_source_out;

void P2_joao__light_source_reset(P2_joao__light_source_mem* self);

void P2_joao__light_source_step(int botao, int c1, int c2,
                                P2_joao__light_source_out* _out,
                                P2_joao__light_source_mem* self);

typedef struct P2_joao__management_policy_mem {
  int v_245;
  int v_244;
  int pnr;
} P2_joao__management_policy_mem;

typedef struct P2_joao__management_policy_out {
  int eco;
  int comfort;
  int pl;
} P2_joao__management_policy_out;

void P2_joao__management_policy_reset(P2_joao__management_policy_mem* self);

void P2_joao__management_policy_step(int eco_input, int comfort_input,
                                     P2_joao__management_policy_out* _out,
                                     P2_joao__management_policy_mem* self);

typedef struct P2_joao__contrato_mem {
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int v_263;
  int v_262;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} P2_joao__contrato_mem;

typedef struct P2_joao__contrato_out {
  int porta;
  int janela;
  int lamp;
  int tv;
  int ocupado;
  int rad_pot;
  int rad_state;
} P2_joao__contrato_out;

void P2_joao__contrato_reset(P2_joao__contrato_mem* self);

void P2_joao__contrato_step(int cj, int cp, int pporta, int pjanela,
                            int rup1, int rdown1, int rup2, int rdown2,
                            int presenca, int bl, int bt,
                            P2_joao__contrato_out* _out,
                            P2_joao__contrato_mem* self);

#endif // P2_JOAO_H
