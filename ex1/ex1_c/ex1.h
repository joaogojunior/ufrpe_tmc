/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks ex1.ept --- */

#ifndef EX1_H
#define EX1_H

#include "ex1_types.h"
#include "twotasks_controller.h"
typedef struct Ex1__delayable_mem {
  int v_25;
  int v_24;
  int pnr;
} Ex1__delayable_mem;

typedef struct Ex1__delayable_out {
  int a;
} Ex1__delayable_out;

void Ex1__delayable_reset(Ex1__delayable_mem* self);

void Ex1__delayable_step(int r, int c, int e, Ex1__delayable_out* _out,
                         Ex1__delayable_mem* self);

typedef struct Ex1__twotasks_mem {
  int v_41;
  int v_40;
  int v_57;
  int v_56;
  int pnr_1;
  int pnr;
} Ex1__twotasks_mem;

typedef struct Ex1__twotasks_out {
  int a1;
  int a2;
} Ex1__twotasks_out;

void Ex1__twotasks_reset(Ex1__twotasks_mem* self);

void Ex1__twotasks_step(int r1, int e1, int r2, int e2,
                        Ex1__twotasks_out* _out, Ex1__twotasks_mem* self);

#endif // EX1_H
