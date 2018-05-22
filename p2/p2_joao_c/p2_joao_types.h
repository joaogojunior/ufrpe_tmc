/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#ifndef P2_JOAO_TYPES_H
#define P2_JOAO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "contrato_controller.h"
typedef enum {
  P2_joao__St_3_Waterfill,
  P2_joao__St_3_Washing,
  P2_joao__St_3_Standby,
  P2_joao__St_3_Spin,
  P2_joao__St_3_Rinse,
  P2_joao__St_3_Off
} P2_joao__st_3;

P2_joao__st_3 P2_joao__st_3_of_string(char* s);

char* string_of_P2_joao__st_3(P2_joao__st_3 x, char* buf);

typedef enum {
  P2_joao__St_2_Standby,
  P2_joao__St_2_Reheat,
  P2_joao__St_2_Off,
  P2_joao__St_2_Maintain,
  P2_joao__St_2_Heat
} P2_joao__st_2;

P2_joao__st_2 P2_joao__st_2_of_string(char* s);

char* string_of_P2_joao__st_2(P2_joao__st_2 x, char* buf);

typedef enum {
  P2_joao__St_1_Standby,
  P2_joao__St_1_Reheat,
  P2_joao__St_1_Off,
  P2_joao__St_1_Maintain,
  P2_joao__St_1_Heat
} P2_joao__st_1;

P2_joao__st_1 P2_joao__st_1_of_string(char* s);

char* string_of_P2_joao__st_1(P2_joao__st_1 x, char* buf);

typedef enum {
  P2_joao__St_Waterfill,
  P2_joao__St_Washing,
  P2_joao__St_Standby,
  P2_joao__St_Spin,
  P2_joao__St_Rinse,
  P2_joao__St_Off
} P2_joao__st;

P2_joao__st P2_joao__st_of_string(char* s);

char* string_of_P2_joao__st(P2_joao__st x, char* buf);

#endif // P2_JOAO_TYPES_H
