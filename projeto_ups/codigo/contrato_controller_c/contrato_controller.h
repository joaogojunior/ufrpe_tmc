/* --- Generated the 25/6/2018 at 20:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#ifndef CONTRATO_CONTROLLER_H
#define CONTRATO_CONTROLLER_H

#include "contrato_controller_types.h"
typedef struct Contrato_controller__contrato_controller_contrato_cm_out {
  int contrato_cm;
} Contrato_controller__contrato_controller_contrato_cm_out;

void Contrato_controller__contrato_controller_contrato_cm_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_256,
                                                               int contrato_v_255,
                                                               int contrato_v_254,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_1,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               int contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cm_out* _out);

typedef struct Contrato_controller__contrato_controller_contrato_cp_out {
  int contrato_cp;
} Contrato_controller__contrato_controller_contrato_cp_out;

void Contrato_controller__contrato_controller_contrato_cp_step(int contrato_cb,
                                                               int contrato_l1b,
                                                               int contrato_l2b,
                                                               int contrato_vb,
                                                               int contrato_td,
                                                               int contrato_ck_10_1,
                                                               int contrato_pnr_3,
                                                               int contrato_v_256,
                                                               int contrato_v_255,
                                                               int contrato_v_254,
                                                               int contrato_pnr_2,
                                                               int contrato_ck_14_1,
                                                               int contrato_pnr_1,
                                                               int contrato_ck_16_1,
                                                               int contrato_pnr,
                                                               int p_contrato_cm,
                                                               int p_contrato_cp,
                                                               Contrato_controller__contrato_controller_contrato_cp_out* _out);

typedef struct Contrato_controller__contrato_controller_out {
  int contrato_cm;
  int contrato_cp;
} Contrato_controller__contrato_controller_out;

void Contrato_controller__contrato_controller_step(int contrato_cb,
                                                   int contrato_l1b,
                                                   int contrato_l2b,
                                                   int contrato_vb,
                                                   int contrato_td,
                                                   int contrato_ck_10_1,
                                                   int contrato_pnr_3,
                                                   int contrato_v_256,
                                                   int contrato_v_255,
                                                   int contrato_v_254,
                                                   int contrato_pnr_2,
                                                   int contrato_ck_14_1,
                                                   int contrato_pnr_1,
                                                   int contrato_ck_16_1,
                                                   int contrato_pnr,
                                                   int p_contrato_cm,
                                                   int p_contrato_cp,
                                                   Contrato_controller__contrato_controller_out* _out);

#endif // CONTRATO_CONTROLLER_H
