/* --- Generated the 25/6/2018 at 20:9 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#ifndef UPS_CONTROLADOR_TYPES_H
#define UPS_CONTROLADOR_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "contrato_controller.h"
typedef enum {
  Ups_controlador__St_8_Noite,
  Ups_controlador__St_8_Dia
} Ups_controlador__st_8;

Ups_controlador__st_8 Ups_controlador__st_8_of_string(char* s);

char* string_of_Ups_controlador__st_8(Ups_controlador__st_8 x, char* buf);

typedef enum {
  Ups_controlador__St_7_Limiar2,
  Ups_controlador__St_7_Limiar1,
  Ups_controlador__St_7_Erro,
  Ups_controlador__St_7_Descarregado,
  Ups_controlador__St_7_Carregado
} Ups_controlador__st_7;

Ups_controlador__st_7 Ups_controlador__st_7_of_string(char* s);

char* string_of_Ups_controlador__st_7(Ups_controlador__st_7 x, char* buf);

typedef enum {
  Ups_controlador__St_6_Lig,
  Ups_controlador__St_6_Des
} Ups_controlador__st_6;

Ups_controlador__st_6 Ups_controlador__st_6_of_string(char* s);

char* string_of_Ups_controlador__st_6(Ups_controlador__st_6 x, char* buf);

typedef enum {
  Ups_controlador__St_5_Lig,
  Ups_controlador__St_5_Des
} Ups_controlador__st_5;

Ups_controlador__st_5 Ups_controlador__st_5_of_string(char* s);

char* string_of_Ups_controlador__st_5(Ups_controlador__st_5 x, char* buf);

typedef enum {
  Ups_controlador__St_4_Wait,
  Ups_controlador__St_4_Teste,
  Ups_controlador__St_4_Sleep,
  Ups_controlador__St_4_Online,
  Ups_controlador__St_4_Off
} Ups_controlador__st_4;

Ups_controlador__st_4 Ups_controlador__st_4_of_string(char* s);

char* string_of_Ups_controlador__st_4(Ups_controlador__st_4 x, char* buf);

typedef enum {
  Ups_controlador__St_3_Noite,
  Ups_controlador__St_3_Dia
} Ups_controlador__st_3;

Ups_controlador__st_3 Ups_controlador__st_3_of_string(char* s);

char* string_of_Ups_controlador__st_3(Ups_controlador__st_3 x, char* buf);

typedef enum {
  Ups_controlador__St_2_Lig,
  Ups_controlador__St_2_Des
} Ups_controlador__st_2;

Ups_controlador__st_2 Ups_controlador__st_2_of_string(char* s);

char* string_of_Ups_controlador__st_2(Ups_controlador__st_2 x, char* buf);

typedef enum {
  Ups_controlador__St_1_Limiar2,
  Ups_controlador__St_1_Limiar1,
  Ups_controlador__St_1_Erro,
  Ups_controlador__St_1_Descarregado,
  Ups_controlador__St_1_Carregado
} Ups_controlador__st_1;

Ups_controlador__st_1 Ups_controlador__st_1_of_string(char* s);

char* string_of_Ups_controlador__st_1(Ups_controlador__st_1 x, char* buf);

typedef enum {
  Ups_controlador__St_Rl4,
  Ups_controlador__St_Rl3,
  Ups_controlador__St_Rl1,
  Ups_controlador__St_Off
} Ups_controlador__st;

Ups_controlador__st Ups_controlador__st_of_string(char* s);

char* string_of_Ups_controlador__st(Ups_controlador__st x, char* buf);

typedef enum {
  Ups_controlador__OFF,
  Ups_controlador__R1,
  Ups_controlador__R3,
  Ups_controlador__R4
} Ups_controlador__pc_states;

Ups_controlador__pc_states Ups_controlador__pc_states_of_string(char* s);

char* string_of_Ups_controlador__pc_states(Ups_controlador__pc_states x,
                                           char* buf);

typedef enum {
  Ups_controlador__BERR,
  Ups_controlador__B100,
  Ups_controlador__B75,
  Ups_controlador__B50,
  Ups_controlador__B25
} Ups_controlador__bat_states;

Ups_controlador__bat_states Ups_controlador__bat_states_of_string(char* s);

char* string_of_Ups_controlador__bat_states(Ups_controlador__bat_states x,
                                            char* buf);

#endif // UPS_CONTROLADOR_TYPES_H