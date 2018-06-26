/* --- Generated the 25/6/2018 at 20:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#ifndef UPS_CONTROLADOR_H
#define UPS_CONTROLADOR_H

#include "ups_controlador_types.h"
#include "contrato_controller.h"
typedef struct Ups_controlador__computador_mem {
  int v_106;
  int v_105;
  int pnr;
} Ups_controlador__computador_mem;

typedef struct Ups_controlador__computador_out {
  int estado_pc_2;
  int estado_pc_1;
} Ups_controlador__computador_out;

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self);

void Ups_controlador__computador_step(int sw_atx, int c_atx, int rup,
                                      int rup_nc, int rdown, int rdown_nc,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self);

typedef struct Ups_controlador__bateria_mem {
  int v_150;
  int v_149;
  int v_148;
  int pnr;
} Ups_controlador__bateria_mem;

typedef struct Ups_controlador__bateria_out {
  int estado_bat_3;
  int estado_bat_2;
  int estado_bat_1;
} Ups_controlador__bateria_out;

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self);

void Ups_controlador__bateria_step(int cp, int l1, int l2, int v,
                                   Ups_controlador__bateria_out* _out,
                                   Ups_controlador__bateria_mem* self);

typedef struct Ups_controlador__atuador_sw_mem {
  int ck_1;
  int pnr;
} Ups_controlador__atuador_sw_mem;

typedef struct Ups_controlador__atuador_sw_out {
  int estado;
} Ups_controlador__atuador_sw_out;

void Ups_controlador__atuador_sw_reset(Ups_controlador__atuador_sw_mem* self);

void Ups_controlador__atuador_sw_step(int ca,
                                      Ups_controlador__atuador_sw_out* _out,
                                      Ups_controlador__atuador_sw_mem* self);

typedef struct Ups_controlador__periodo_dia_mem {
  int ck_1;
  int pnr;
} Ups_controlador__periodo_dia_mem;

typedef struct Ups_controlador__periodo_dia_out {
  int isday;
} Ups_controlador__periodo_dia_out;

void Ups_controlador__periodo_dia_reset(Ups_controlador__periodo_dia_mem* self);

void Ups_controlador__periodo_dia_step(int t,
                                       Ups_controlador__periodo_dia_out* _out,
                                       Ups_controlador__periodo_dia_mem* self);

typedef struct Ups_controlador__modem_adsl_mem {
  int v_198;
  int v_197;
  int v_196;
  int pnr;
} Ups_controlador__modem_adsl_mem;

typedef struct Ups_controlador__modem_adsl_out {
  int estado;
} Ups_controlador__modem_adsl_out;

void Ups_controlador__modem_adsl_reset(Ups_controlador__modem_adsl_mem* self);

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self);

typedef struct Ups_controlador__contrato_mem {
  int ck_16_1;
  int ck_14_1;
  int v_256;
  int v_255;
  int v_254;
  int ck_10_1;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Ups_controlador__contrato_mem;

typedef struct Ups_controlador__contrato_out {
  int erro;
  int relogio;
  int pb;
  int pm;
  int pabx;
  int modem_atuador;
  int bat12v_3;
  int bat12v_2;
  int bat12v_1;
} Ups_controlador__contrato_out;

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self);

void Ups_controlador__contrato_step(int cb, int l1b, int l2b, int vb, int td,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self);

#endif // UPS_CONTROLADOR_H
