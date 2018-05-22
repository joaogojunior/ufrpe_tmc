/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c contrato_controller.ept --- */

#ifndef CONTRATO_CONTROLLER_H
#define CONTRATO_CONTROLLER_H

#include "contrato_controller_types.h"
typedef struct Contrato_controller__contrato_controller_contrato_co_out {
  int contrato_co;
} Contrato_controller__contrato_controller_contrato_co_out;

void Contrato_controller__contrato_controller_contrato_co_step(int contrato_ews,
                                                               int contrato_sws,
                                                               int contrato_fo,
                                                               int contrato_so,
                                                               int contrato_tok,
                                                               int contrato_cold,
                                                               int contrato_v_241,
                                                               int contrato_v_240,
                                                               int contrato_v_239,
                                                               int contrato_pnr_1,
                                                               int contrato_v_182,
                                                               int contrato_v_181,
                                                               int contrato_v_180,
                                                               int contrato_pnr,
                                                               int p_contrato_co,
                                                               int p_contrato_cws,
                                                               int contrato_cws,
                                                               Contrato_controller__contrato_controller_contrato_co_out* _out);

typedef struct Contrato_controller__contrato_controller_contrato_cws_out {
  int contrato_cws;
} Contrato_controller__contrato_controller_contrato_cws_out;

void Contrato_controller__contrato_controller_contrato_cws_step(int contrato_ews,
                                                                int contrato_sws,
                                                                int contrato_fo,
                                                                int contrato_so,
                                                                int contrato_tok,
                                                                int contrato_cold,
                                                                int contrato_v_241,
                                                                int contrato_v_240,
                                                                int contrato_v_239,
                                                                int contrato_pnr_1,
                                                                int contrato_v_182,
                                                                int contrato_v_181,
                                                                int contrato_v_180,
                                                                int contrato_pnr,
                                                                int p_contrato_co,
                                                                int p_contrato_cws,
                                                                Contrato_controller__contrato_controller_contrato_cws_out* _out);

typedef struct Contrato_controller__contrato_controller_out {
  int contrato_co;
  int contrato_cws;
} Contrato_controller__contrato_controller_out;

void Contrato_controller__contrato_controller_step(int contrato_ews,
                                                   int contrato_sws,
                                                   int contrato_fo,
                                                   int contrato_so,
                                                   int contrato_tok,
                                                   int contrato_cold,
                                                   int contrato_v_241,
                                                   int contrato_v_240,
                                                   int contrato_v_239,
                                                   int contrato_pnr_1,
                                                   int contrato_v_182,
                                                   int contrato_v_181,
                                                   int contrato_v_180,
                                                   int contrato_pnr,
                                                   int p_contrato_co,
                                                   int p_contrato_cws,
                                                   Contrato_controller__contrato_controller_out* _out);

#endif // CONTRATO_CONTROLLER_H
