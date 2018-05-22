/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#ifndef P2_JOAO_H
#define P2_JOAO_H

#include "p2_joao_types.h"
#include "contrato_controller.h"
typedef struct P2_joao__washingmachine_mem {
  int v_72;
  int v_71;
  int v_70;
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
  int v_129;
  int v_128;
  int v_127;
  int pnr;
} P2_joao__oven_mem;

typedef struct P2_joao__oven_out {
  int p;
  int i;
} P2_joao__oven_out;

void P2_joao__oven_reset(P2_joao__oven_mem* self);

void P2_joao__oven_step(int f, int s, int c, int tok, int cold,
                        P2_joao__oven_out* _out, P2_joao__oven_mem* self);

typedef struct P2_joao__contrato_mem {
  int v_182;
  int v_181;
  int v_180;
  int v_241;
  int v_240;
  int v_239;
  int pnr_1;
  int pnr;
} P2_joao__contrato_mem;

typedef struct P2_joao__contrato_out {
  int pws;
  int po;
  int iws;
  int io;
} P2_joao__contrato_out;

void P2_joao__contrato_reset(P2_joao__contrato_mem* self);

void P2_joao__contrato_step(int ews, int sws, int fo, int so, int tok,
                            int cold, P2_joao__contrato_out* _out,
                            P2_joao__contrato_mem* self);

#endif // P2_JOAO_H
