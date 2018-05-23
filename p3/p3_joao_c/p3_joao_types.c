/* --- Generated the 23/5/2018 at 5:25 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p3_joao_types.h"

P3_joao__st_15 P3_joao__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Minimal_safety")==0)) {
    return P3_joao__St_15_Minimal_safety;
  };
  if ((strcmp(s, "St_15_Eco")==0)) {
    return P3_joao__St_15_Eco;
  };
  if ((strcmp(s, "St_15_Comfort")==0)) {
    return P3_joao__St_15_Comfort;
  };
}

char* string_of_P3_joao__st_15(P3_joao__st_15 x, char* buf) {
  switch (x) {
    case P3_joao__St_15_Minimal_safety:
      strcpy(buf, "St_15_Minimal_safety");
      break;
    case P3_joao__St_15_Eco:
      strcpy(buf, "St_15_Eco");
      break;
    case P3_joao__St_15_Comfort:
      strcpy(buf, "St_15_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_14 P3_joao__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Off")==0)) {
    return P3_joao__St_14_Off;
  };
  if ((strcmp(s, "St_14_High")==0)) {
    return P3_joao__St_14_High;
  };
  if ((strcmp(s, "St_14_Frostprotection")==0)) {
    return P3_joao__St_14_Frostprotection;
  };
  if ((strcmp(s, "St_14_Eco")==0)) {
    return P3_joao__St_14_Eco;
  };
}

char* string_of_P3_joao__st_14(P3_joao__st_14 x, char* buf) {
  switch (x) {
    case P3_joao__St_14_Off:
      strcpy(buf, "St_14_Off");
      break;
    case P3_joao__St_14_High:
      strcpy(buf, "St_14_High");
      break;
    case P3_joao__St_14_Frostprotection:
      strcpy(buf, "St_14_Frostprotection");
      break;
    case P3_joao__St_14_Eco:
      strcpy(buf, "St_14_Eco");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_13 P3_joao__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Open")==0)) {
    return P3_joao__St_13_Open;
  };
  if ((strcmp(s, "St_13_Closed")==0)) {
    return P3_joao__St_13_Closed;
  };
}

char* string_of_P3_joao__st_13(P3_joao__st_13 x, char* buf) {
  switch (x) {
    case P3_joao__St_13_Open:
      strcpy(buf, "St_13_Open");
      break;
    case P3_joao__St_13_Closed:
      strcpy(buf, "St_13_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_12 P3_joao__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Open")==0)) {
    return P3_joao__St_12_Open;
  };
  if ((strcmp(s, "St_12_Closed")==0)) {
    return P3_joao__St_12_Closed;
  };
}

char* string_of_P3_joao__st_12(P3_joao__st_12 x, char* buf) {
  switch (x) {
    case P3_joao__St_12_Open:
      strcpy(buf, "St_12_Open");
      break;
    case P3_joao__St_12_Closed:
      strcpy(buf, "St_12_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_11 P3_joao__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Ligado")==0)) {
    return P3_joao__St_11_Ligado;
  };
  if ((strcmp(s, "St_11_Desligado")==0)) {
    return P3_joao__St_11_Desligado;
  };
}

char* string_of_P3_joao__st_11(P3_joao__st_11 x, char* buf) {
  switch (x) {
    case P3_joao__St_11_Ligado:
      strcpy(buf, "St_11_Ligado");
      break;
    case P3_joao__St_11_Desligado:
      strcpy(buf, "St_11_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_10 P3_joao__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Ligado")==0)) {
    return P3_joao__St_10_Ligado;
  };
  if ((strcmp(s, "St_10_Desligado")==0)) {
    return P3_joao__St_10_Desligado;
  };
}

char* string_of_P3_joao__st_10(P3_joao__st_10 x, char* buf) {
  switch (x) {
    case P3_joao__St_10_Ligado:
      strcpy(buf, "St_10_Ligado");
      break;
    case P3_joao__St_10_Desligado:
      strcpy(buf, "St_10_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_9 P3_joao__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Ocupied")==0)) {
    return P3_joao__St_9_Ocupied;
  };
  if ((strcmp(s, "St_9_Empty")==0)) {
    return P3_joao__St_9_Empty;
  };
}

char* string_of_P3_joao__st_9(P3_joao__st_9 x, char* buf) {
  switch (x) {
    case P3_joao__St_9_Ocupied:
      strcpy(buf, "St_9_Ocupied");
      break;
    case P3_joao__St_9_Empty:
      strcpy(buf, "St_9_Empty");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_8 P3_joao__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Waterfill")==0)) {
    return P3_joao__St_8_Waterfill;
  };
  if ((strcmp(s, "St_8_Washing")==0)) {
    return P3_joao__St_8_Washing;
  };
  if ((strcmp(s, "St_8_Standby")==0)) {
    return P3_joao__St_8_Standby;
  };
  if ((strcmp(s, "St_8_Spin")==0)) {
    return P3_joao__St_8_Spin;
  };
  if ((strcmp(s, "St_8_Rinse")==0)) {
    return P3_joao__St_8_Rinse;
  };
  if ((strcmp(s, "St_8_Off")==0)) {
    return P3_joao__St_8_Off;
  };
}

char* string_of_P3_joao__st_8(P3_joao__st_8 x, char* buf) {
  switch (x) {
    case P3_joao__St_8_Waterfill:
      strcpy(buf, "St_8_Waterfill");
      break;
    case P3_joao__St_8_Washing:
      strcpy(buf, "St_8_Washing");
      break;
    case P3_joao__St_8_Standby:
      strcpy(buf, "St_8_Standby");
      break;
    case P3_joao__St_8_Spin:
      strcpy(buf, "St_8_Spin");
      break;
    case P3_joao__St_8_Rinse:
      strcpy(buf, "St_8_Rinse");
      break;
    case P3_joao__St_8_Off:
      strcpy(buf, "St_8_Off");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_7 P3_joao__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Standby")==0)) {
    return P3_joao__St_7_Standby;
  };
  if ((strcmp(s, "St_7_Reheat")==0)) {
    return P3_joao__St_7_Reheat;
  };
  if ((strcmp(s, "St_7_Off")==0)) {
    return P3_joao__St_7_Off;
  };
  if ((strcmp(s, "St_7_Maintain")==0)) {
    return P3_joao__St_7_Maintain;
  };
  if ((strcmp(s, "St_7_Heat")==0)) {
    return P3_joao__St_7_Heat;
  };
}

char* string_of_P3_joao__st_7(P3_joao__st_7 x, char* buf) {
  switch (x) {
    case P3_joao__St_7_Standby:
      strcpy(buf, "St_7_Standby");
      break;
    case P3_joao__St_7_Reheat:
      strcpy(buf, "St_7_Reheat");
      break;
    case P3_joao__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    case P3_joao__St_7_Maintain:
      strcpy(buf, "St_7_Maintain");
      break;
    case P3_joao__St_7_Heat:
      strcpy(buf, "St_7_Heat");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_6 P3_joao__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Minimal_safety")==0)) {
    return P3_joao__St_6_Minimal_safety;
  };
  if ((strcmp(s, "St_6_Eco")==0)) {
    return P3_joao__St_6_Eco;
  };
  if ((strcmp(s, "St_6_Comfort")==0)) {
    return P3_joao__St_6_Comfort;
  };
}

char* string_of_P3_joao__st_6(P3_joao__st_6 x, char* buf) {
  switch (x) {
    case P3_joao__St_6_Minimal_safety:
      strcpy(buf, "St_6_Minimal_safety");
      break;
    case P3_joao__St_6_Eco:
      strcpy(buf, "St_6_Eco");
      break;
    case P3_joao__St_6_Comfort:
      strcpy(buf, "St_6_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_5 P3_joao__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Ligado")==0)) {
    return P3_joao__St_5_Ligado;
  };
  if ((strcmp(s, "St_5_Desligado")==0)) {
    return P3_joao__St_5_Desligado;
  };
}

char* string_of_P3_joao__st_5(P3_joao__st_5 x, char* buf) {
  switch (x) {
    case P3_joao__St_5_Ligado:
      strcpy(buf, "St_5_Ligado");
      break;
    case P3_joao__St_5_Desligado:
      strcpy(buf, "St_5_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_4 P3_joao__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Ocupied")==0)) {
    return P3_joao__St_4_Ocupied;
  };
  if ((strcmp(s, "St_4_Empty")==0)) {
    return P3_joao__St_4_Empty;
  };
}

char* string_of_P3_joao__st_4(P3_joao__st_4 x, char* buf) {
  switch (x) {
    case P3_joao__St_4_Ocupied:
      strcpy(buf, "St_4_Ocupied");
      break;
    case P3_joao__St_4_Empty:
      strcpy(buf, "St_4_Empty");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_3 P3_joao__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Open")==0)) {
    return P3_joao__St_3_Open;
  };
  if ((strcmp(s, "St_3_Closed")==0)) {
    return P3_joao__St_3_Closed;
  };
}

char* string_of_P3_joao__st_3(P3_joao__st_3 x, char* buf) {
  switch (x) {
    case P3_joao__St_3_Open:
      strcpy(buf, "St_3_Open");
      break;
    case P3_joao__St_3_Closed:
      strcpy(buf, "St_3_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_2 P3_joao__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Off")==0)) {
    return P3_joao__St_2_Off;
  };
  if ((strcmp(s, "St_2_High")==0)) {
    return P3_joao__St_2_High;
  };
  if ((strcmp(s, "St_2_Frostprotection")==0)) {
    return P3_joao__St_2_Frostprotection;
  };
  if ((strcmp(s, "St_2_Eco")==0)) {
    return P3_joao__St_2_Eco;
  };
}

char* string_of_P3_joao__st_2(P3_joao__st_2 x, char* buf) {
  switch (x) {
    case P3_joao__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    case P3_joao__St_2_High:
      strcpy(buf, "St_2_High");
      break;
    case P3_joao__St_2_Frostprotection:
      strcpy(buf, "St_2_Frostprotection");
      break;
    case P3_joao__St_2_Eco:
      strcpy(buf, "St_2_Eco");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st_1 P3_joao__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Standby")==0)) {
    return P3_joao__St_1_Standby;
  };
  if ((strcmp(s, "St_1_Reheat")==0)) {
    return P3_joao__St_1_Reheat;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return P3_joao__St_1_Off;
  };
  if ((strcmp(s, "St_1_Maintain")==0)) {
    return P3_joao__St_1_Maintain;
  };
  if ((strcmp(s, "St_1_Heat")==0)) {
    return P3_joao__St_1_Heat;
  };
}

char* string_of_P3_joao__st_1(P3_joao__st_1 x, char* buf) {
  switch (x) {
    case P3_joao__St_1_Standby:
      strcpy(buf, "St_1_Standby");
      break;
    case P3_joao__St_1_Reheat:
      strcpy(buf, "St_1_Reheat");
      break;
    case P3_joao__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    case P3_joao__St_1_Maintain:
      strcpy(buf, "St_1_Maintain");
      break;
    case P3_joao__St_1_Heat:
      strcpy(buf, "St_1_Heat");
      break;
    default:
      break;
  };
  return buf;
}

P3_joao__st P3_joao__st_of_string(char* s) {
  if ((strcmp(s, "St_Waterfill")==0)) {
    return P3_joao__St_Waterfill;
  };
  if ((strcmp(s, "St_Washing")==0)) {
    return P3_joao__St_Washing;
  };
  if ((strcmp(s, "St_Standby")==0)) {
    return P3_joao__St_Standby;
  };
  if ((strcmp(s, "St_Spin")==0)) {
    return P3_joao__St_Spin;
  };
  if ((strcmp(s, "St_Rinse")==0)) {
    return P3_joao__St_Rinse;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return P3_joao__St_Off;
  };
}

char* string_of_P3_joao__st(P3_joao__st x, char* buf) {
  switch (x) {
    case P3_joao__St_Waterfill:
      strcpy(buf, "St_Waterfill");
      break;
    case P3_joao__St_Washing:
      strcpy(buf, "St_Washing");
      break;
    case P3_joao__St_Standby:
      strcpy(buf, "St_Standby");
      break;
    case P3_joao__St_Spin:
      strcpy(buf, "St_Spin");
      break;
    case P3_joao__St_Rinse:
      strcpy(buf, "St_Rinse");
      break;
    case P3_joao__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

