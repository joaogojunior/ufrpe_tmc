/* --- Generated the 10/6/2018 at 9:2 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#ifndef P3_JOAO_TYPES_H
#define P3_JOAO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "contrato_controller.h"
typedef enum {
  P3_joao__St_15_Off,
  P3_joao__St_15_High,
  P3_joao__St_15_Frostprotection,
  P3_joao__St_15_Eco
} P3_joao__st_15;

P3_joao__st_15 P3_joao__st_15_of_string(char* s);

char* string_of_P3_joao__st_15(P3_joao__st_15 x, char* buf);

typedef enum {
  P3_joao__St_14_Open,
  P3_joao__St_14_Closed
} P3_joao__st_14;

P3_joao__st_14 P3_joao__st_14_of_string(char* s);

char* string_of_P3_joao__st_14(P3_joao__st_14 x, char* buf);

typedef enum {
  P3_joao__St_13_Open,
  P3_joao__St_13_Closed
} P3_joao__st_13;

P3_joao__st_13 P3_joao__st_13_of_string(char* s);

char* string_of_P3_joao__st_13(P3_joao__st_13 x, char* buf);

typedef enum {
  P3_joao__St_12_Ligado,
  P3_joao__St_12_Desligado
} P3_joao__st_12;

P3_joao__st_12 P3_joao__st_12_of_string(char* s);

char* string_of_P3_joao__st_12(P3_joao__st_12 x, char* buf);

typedef enum {
  P3_joao__St_11_Ligado,
  P3_joao__St_11_Desligado
} P3_joao__st_11;

P3_joao__st_11 P3_joao__st_11_of_string(char* s);

char* string_of_P3_joao__st_11(P3_joao__st_11 x, char* buf);

typedef enum {
  P3_joao__St_10_Ocupied,
  P3_joao__St_10_Empty
} P3_joao__st_10;

P3_joao__st_10 P3_joao__st_10_of_string(char* s);

char* string_of_P3_joao__st_10(P3_joao__st_10 x, char* buf);

typedef enum {
  P3_joao__St_9_Waterfill,
  P3_joao__St_9_Washing,
  P3_joao__St_9_Standby,
  P3_joao__St_9_Spin,
  P3_joao__St_9_Rinse,
  P3_joao__St_9_Off
} P3_joao__st_9;

P3_joao__st_9 P3_joao__st_9_of_string(char* s);

char* string_of_P3_joao__st_9(P3_joao__st_9 x, char* buf);

typedef enum {
  P3_joao__St_8_Standby,
  P3_joao__St_8_Reheat,
  P3_joao__St_8_Off,
  P3_joao__St_8_Maintain,
  P3_joao__St_8_Heat
} P3_joao__st_8;

P3_joao__st_8 P3_joao__st_8_of_string(char* s);

char* string_of_P3_joao__st_8(P3_joao__st_8 x, char* buf);

typedef enum {
  P3_joao__St_7_Minimal_safety,
  P3_joao__St_7_Eco,
  P3_joao__St_7_Comfort
} P3_joao__st_7;

P3_joao__st_7 P3_joao__st_7_of_string(char* s);

char* string_of_P3_joao__st_7(P3_joao__st_7 x, char* buf);

typedef enum {
  P3_joao__St_6_Minimal_safety,
  P3_joao__St_6_Eco,
  P3_joao__St_6_Comfort
} P3_joao__st_6;

P3_joao__st_6 P3_joao__st_6_of_string(char* s);

char* string_of_P3_joao__st_6(P3_joao__st_6 x, char* buf);

typedef enum {
  P3_joao__St_5_Ligado,
  P3_joao__St_5_Desligado
} P3_joao__st_5;

P3_joao__st_5 P3_joao__st_5_of_string(char* s);

char* string_of_P3_joao__st_5(P3_joao__st_5 x, char* buf);

typedef enum {
  P3_joao__St_4_Ocupied,
  P3_joao__St_4_Empty
} P3_joao__st_4;

P3_joao__st_4 P3_joao__st_4_of_string(char* s);

char* string_of_P3_joao__st_4(P3_joao__st_4 x, char* buf);

typedef enum {
  P3_joao__St_3_Open,
  P3_joao__St_3_Closed
} P3_joao__st_3;

P3_joao__st_3 P3_joao__st_3_of_string(char* s);

char* string_of_P3_joao__st_3(P3_joao__st_3 x, char* buf);

typedef enum {
  P3_joao__St_2_Off,
  P3_joao__St_2_High,
  P3_joao__St_2_Frostprotection,
  P3_joao__St_2_Eco
} P3_joao__st_2;

P3_joao__st_2 P3_joao__st_2_of_string(char* s);

char* string_of_P3_joao__st_2(P3_joao__st_2 x, char* buf);

typedef enum {
  P3_joao__St_1_Standby,
  P3_joao__St_1_Reheat,
  P3_joao__St_1_Off,
  P3_joao__St_1_Maintain,
  P3_joao__St_1_Heat
} P3_joao__st_1;

P3_joao__st_1 P3_joao__st_1_of_string(char* s);

char* string_of_P3_joao__st_1(P3_joao__st_1 x, char* buf);

typedef enum {
  P3_joao__St_Waterfill,
  P3_joao__St_Washing,
  P3_joao__St_Standby,
  P3_joao__St_Spin,
  P3_joao__St_Rinse,
  P3_joao__St_Off
} P3_joao__st;

P3_joao__st P3_joao__st_of_string(char* s);

char* string_of_P3_joao__st(P3_joao__st x, char* buf);

typedef enum {
  P3_joao__MIN,
  P3_joao__ECO,
  P3_joao__COM
} P3_joao__pol_states;

P3_joao__pol_states P3_joao__pol_states_of_string(char* s);

char* string_of_P3_joao__pol_states(P3_joao__pol_states x, char* buf);

#endif // P3_JOAO_TYPES_H
