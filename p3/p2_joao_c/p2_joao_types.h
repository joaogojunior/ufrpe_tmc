/* --- Generated the 21/5/2018 at 10:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#ifndef P2_JOAO_TYPES_H
#define P2_JOAO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "contrato_controller.h"
typedef enum {
  P2_joao__St_12_Off,
  P2_joao__St_12_High,
  P2_joao__St_12_Frostprotection,
  P2_joao__St_12_Eco
} P2_joao__st_12;

P2_joao__st_12 P2_joao__st_12_of_string(char* s);

char* string_of_P2_joao__st_12(P2_joao__st_12 x, char* buf);

typedef enum {
  P2_joao__St_11_Open,
  P2_joao__St_11_Closed
} P2_joao__st_11;

P2_joao__st_11 P2_joao__st_11_of_string(char* s);

char* string_of_P2_joao__st_11(P2_joao__st_11 x, char* buf);

typedef enum {
  P2_joao__St_10_Open,
  P2_joao__St_10_Closed
} P2_joao__st_10;

P2_joao__st_10 P2_joao__st_10_of_string(char* s);

char* string_of_P2_joao__st_10(P2_joao__st_10 x, char* buf);

typedef enum {
  P2_joao__St_9_Ligado,
  P2_joao__St_9_Desligado
} P2_joao__st_9;

P2_joao__st_9 P2_joao__st_9_of_string(char* s);

char* string_of_P2_joao__st_9(P2_joao__st_9 x, char* buf);

typedef enum {
  P2_joao__St_8_Ligado,
  P2_joao__St_8_Desligado
} P2_joao__st_8;

P2_joao__st_8 P2_joao__st_8_of_string(char* s);

char* string_of_P2_joao__st_8(P2_joao__st_8 x, char* buf);

typedef enum {
  P2_joao__St_7_Ocupied,
  P2_joao__St_7_Empty
} P2_joao__st_7;

P2_joao__st_7 P2_joao__st_7_of_string(char* s);

char* string_of_P2_joao__st_7(P2_joao__st_7 x, char* buf);

typedef enum {
  P2_joao__St_6_Minimal_safety,
  P2_joao__St_6_Eco,
  P2_joao__St_6_Comfort
} P2_joao__st_6;

P2_joao__st_6 P2_joao__st_6_of_string(char* s);

char* string_of_P2_joao__st_6(P2_joao__st_6 x, char* buf);

typedef enum {
  P2_joao__St_5_Ligado,
  P2_joao__St_5_Desligado
} P2_joao__st_5;

P2_joao__st_5 P2_joao__st_5_of_string(char* s);

char* string_of_P2_joao__st_5(P2_joao__st_5 x, char* buf);

typedef enum {
  P2_joao__St_4_Ocupied,
  P2_joao__St_4_Empty
} P2_joao__st_4;

P2_joao__st_4 P2_joao__st_4_of_string(char* s);

char* string_of_P2_joao__st_4(P2_joao__st_4 x, char* buf);

typedef enum {
  P2_joao__St_3_Open,
  P2_joao__St_3_Closed
} P2_joao__st_3;

P2_joao__st_3 P2_joao__st_3_of_string(char* s);

char* string_of_P2_joao__st_3(P2_joao__st_3 x, char* buf);

typedef enum {
  P2_joao__St_2_Off,
  P2_joao__St_2_High,
  P2_joao__St_2_Frostprotection,
  P2_joao__St_2_Eco
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
