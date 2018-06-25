/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c twotasks_controller.ept --- */

#ifndef TWOTASKS_CONTROLLER_H
#define TWOTASKS_CONTROLLER_H

#include "twotasks_controller_types.h"
typedef struct Twotasks_controller__twotasks_controller_twotasks_c2_out {
  int twotasks_c2;
} Twotasks_controller__twotasks_controller_twotasks_c2_out;

void Twotasks_controller__twotasks_controller_twotasks_c2_step(int twotasks_r1,
                                                               int twotasks_e1,
                                                               int twotasks_r2,
                                                               int twotasks_e2,
                                                               int twotasks_v_57,
                                                               int twotasks_v_56,
                                                               int twotasks_pnr_1,
                                                               int twotasks_v_41,
                                                               int twotasks_v_40,
                                                               int twotasks_pnr,
                                                               int p_twotasks_c2,
                                                               int p_twotasks_c1,
                                                               int twotasks_c1,
                                                               Twotasks_controller__twotasks_controller_twotasks_c2_out* _out);

typedef struct Twotasks_controller__twotasks_controller_twotasks_c1_out {
  int twotasks_c1;
} Twotasks_controller__twotasks_controller_twotasks_c1_out;

void Twotasks_controller__twotasks_controller_twotasks_c1_step(int twotasks_r1,
                                                               int twotasks_e1,
                                                               int twotasks_r2,
                                                               int twotasks_e2,
                                                               int twotasks_v_57,
                                                               int twotasks_v_56,
                                                               int twotasks_pnr_1,
                                                               int twotasks_v_41,
                                                               int twotasks_v_40,
                                                               int twotasks_pnr,
                                                               int p_twotasks_c2,
                                                               int p_twotasks_c1,
                                                               Twotasks_controller__twotasks_controller_twotasks_c1_out* _out);

typedef struct Twotasks_controller__twotasks_controller_out {
  int twotasks_c2;
  int twotasks_c1;
} Twotasks_controller__twotasks_controller_out;

void Twotasks_controller__twotasks_controller_step(int twotasks_r1,
                                                   int twotasks_e1,
                                                   int twotasks_r2,
                                                   int twotasks_e2,
                                                   int twotasks_v_57,
                                                   int twotasks_v_56,
                                                   int twotasks_pnr_1,
                                                   int twotasks_v_41,
                                                   int twotasks_v_40,
                                                   int twotasks_pnr,
                                                   int p_twotasks_c2,
                                                   int p_twotasks_c1,
                                                   Twotasks_controller__twotasks_controller_out* _out);

#endif // TWOTASKS_CONTROLLER_H
