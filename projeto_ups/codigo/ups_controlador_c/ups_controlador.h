/* --- Generated the 8/8/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#ifndef UPS_CONTROLADOR_H
#define UPS_CONTROLADOR_H

#include "ups_controlador_types.h"
#include "contrato_controller.h"
typedef struct Ups_controlador__computador_mem {
  int v_335;
  int v_334;
  int v_333;
  int pnr;
} Ups_controlador__computador_mem;

typedef struct Ups_controlador__computador_out {
  int estado;
} Ups_controlador__computador_out;

void Ups_controlador__computador_reset(Ups_controlador__computador_mem* self);

void Ups_controlador__computador_step(int emerg_off, int c_atx, int off_atx,
                                      int ts, int cr1, int cr3, int cr4,
                                      int ba, int b1, int b3, int b4,
                                      int s_atx, int s1, int s3, int s4,
                                      Ups_controlador__computador_out* _out,
                                      Ups_controlador__computador_mem* self);

typedef struct Ups_controlador__bateria_mem {
  int v_400;
  int v_399;
  int v_398;
  int pnr;
} Ups_controlador__bateria_mem;

typedef struct Ups_controlador__bateria_out {
  int estado_bat_3;
  int estado_bat_2;
  int estado_bat_1;
} Ups_controlador__bateria_out;

void Ups_controlador__bateria_reset(Ups_controlador__bateria_mem* self);

void Ups_controlador__bateria_step(int ac, int cp, int l1, int l2, int v,
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
  int v_457;
  int v_456;
  int v_455;
  int pnr;
} Ups_controlador__modem_adsl_mem;

typedef struct Ups_controlador__modem_adsl_out {
  int atuador;
  int estado;
} Ups_controlador__modem_adsl_out;

void Ups_controlador__modem_adsl_reset(Ups_controlador__modem_adsl_mem* self);

void Ups_controlador__modem_adsl_step(int c, int t, int o,
                                      Ups_controlador__modem_adsl_out* _out,
                                      Ups_controlador__modem_adsl_mem* self);

typedef struct Ups_controlador__contrato_mem {
  int v_522;
  int v_521;
  int v_520;
  int ck_12_1;
  int v_574;
  int v_573;
  int v_572;
  int v_627;
  int v_626;
  int v_625;
  int ck_6_1;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Ups_controlador__contrato_mem;

typedef struct Ups_controlador__contrato_out {
  int erro;
  int dia;
  int r_dia;
  int r_noite;
  int pabx_atuador;
  int modem_atuador;
  int modem_estado;
  int serv_estado;
  int bat12v_3;
  int bat12v_2;
  int bat12v_1;
} Ups_controlador__contrato_out;

void Ups_controlador__contrato_reset(Ups_controlador__contrato_mem* self);

void Ups_controlador__contrato_step(int adm_off, int ac, int cb, int l1b,
                                    int l2b, int vb, int td, int tm, int om,
                                    int ts, int swa, int swr1, int swr3,
                                    int swr4,
                                    Ups_controlador__contrato_out* _out,
                                    Ups_controlador__contrato_mem* self);

#endif // UPS_CONTROLADOR_H
