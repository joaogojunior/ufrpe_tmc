/* --- Generated the 21/5/2018 at 10:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p2_joao_types.h"

P2_joao__st_12 P2_joao__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Off")==0)) {
    return P2_joao__St_12_Off;
  };
  if ((strcmp(s, "St_12_High")==0)) {
    return P2_joao__St_12_High;
  };
  if ((strcmp(s, "St_12_Frostprotection")==0)) {
    return P2_joao__St_12_Frostprotection;
  };
  if ((strcmp(s, "St_12_Eco")==0)) {
    return P2_joao__St_12_Eco;
  };
}

char* string_of_P2_joao__st_12(P2_joao__st_12 x, char* buf) {
  switch (x) {
    case P2_joao__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    case P2_joao__St_12_High:
      strcpy(buf, "St_12_High");
      break;
    case P2_joao__St_12_Frostprotection:
      strcpy(buf, "St_12_Frostprotection");
      break;
    case P2_joao__St_12_Eco:
      strcpy(buf, "St_12_Eco");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_11 P2_joao__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Open")==0)) {
    return P2_joao__St_11_Open;
  };
  if ((strcmp(s, "St_11_Closed")==0)) {
    return P2_joao__St_11_Closed;
  };
}

char* string_of_P2_joao__st_11(P2_joao__st_11 x, char* buf) {
  switch (x) {
    case P2_joao__St_11_Open:
      strcpy(buf, "St_11_Open");
      break;
    case P2_joao__St_11_Closed:
      strcpy(buf, "St_11_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_10 P2_joao__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Open")==0)) {
    return P2_joao__St_10_Open;
  };
  if ((strcmp(s, "St_10_Closed")==0)) {
    return P2_joao__St_10_Closed;
  };
}

char* string_of_P2_joao__st_10(P2_joao__st_10 x, char* buf) {
  switch (x) {
    case P2_joao__St_10_Open:
      strcpy(buf, "St_10_Open");
      break;
    case P2_joao__St_10_Closed:
      strcpy(buf, "St_10_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_9 P2_joao__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Ligado")==0)) {
    return P2_joao__St_9_Ligado;
  };
  if ((strcmp(s, "St_9_Desligado")==0)) {
    return P2_joao__St_9_Desligado;
  };
}

char* string_of_P2_joao__st_9(P2_joao__st_9 x, char* buf) {
  switch (x) {
    case P2_joao__St_9_Ligado:
      strcpy(buf, "St_9_Ligado");
      break;
    case P2_joao__St_9_Desligado:
      strcpy(buf, "St_9_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_8 P2_joao__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Ligado")==0)) {
    return P2_joao__St_8_Ligado;
  };
  if ((strcmp(s, "St_8_Desligado")==0)) {
    return P2_joao__St_8_Desligado;
  };
}

char* string_of_P2_joao__st_8(P2_joao__st_8 x, char* buf) {
  switch (x) {
    case P2_joao__St_8_Ligado:
      strcpy(buf, "St_8_Ligado");
      break;
    case P2_joao__St_8_Desligado:
      strcpy(buf, "St_8_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_7 P2_joao__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Ocupied")==0)) {
    return P2_joao__St_7_Ocupied;
  };
  if ((strcmp(s, "St_7_Empty")==0)) {
    return P2_joao__St_7_Empty;
  };
}

char* string_of_P2_joao__st_7(P2_joao__st_7 x, char* buf) {
  switch (x) {
    case P2_joao__St_7_Ocupied:
      strcpy(buf, "St_7_Ocupied");
      break;
    case P2_joao__St_7_Empty:
      strcpy(buf, "St_7_Empty");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_6 P2_joao__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Minimal_safety")==0)) {
    return P2_joao__St_6_Minimal_safety;
  };
  if ((strcmp(s, "St_6_Eco")==0)) {
    return P2_joao__St_6_Eco;
  };
  if ((strcmp(s, "St_6_Comfort")==0)) {
    return P2_joao__St_6_Comfort;
  };
}

char* string_of_P2_joao__st_6(P2_joao__st_6 x, char* buf) {
  switch (x) {
    case P2_joao__St_6_Minimal_safety:
      strcpy(buf, "St_6_Minimal_safety");
      break;
    case P2_joao__St_6_Eco:
      strcpy(buf, "St_6_Eco");
      break;
    case P2_joao__St_6_Comfort:
      strcpy(buf, "St_6_Comfort");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_5 P2_joao__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Ligado")==0)) {
    return P2_joao__St_5_Ligado;
  };
  if ((strcmp(s, "St_5_Desligado")==0)) {
    return P2_joao__St_5_Desligado;
  };
}

char* string_of_P2_joao__st_5(P2_joao__st_5 x, char* buf) {
  switch (x) {
    case P2_joao__St_5_Ligado:
      strcpy(buf, "St_5_Ligado");
      break;
    case P2_joao__St_5_Desligado:
      strcpy(buf, "St_5_Desligado");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_4 P2_joao__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Ocupied")==0)) {
    return P2_joao__St_4_Ocupied;
  };
  if ((strcmp(s, "St_4_Empty")==0)) {
    return P2_joao__St_4_Empty;
  };
}

char* string_of_P2_joao__st_4(P2_joao__st_4 x, char* buf) {
  switch (x) {
    case P2_joao__St_4_Ocupied:
      strcpy(buf, "St_4_Ocupied");
      break;
    case P2_joao__St_4_Empty:
      strcpy(buf, "St_4_Empty");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_3 P2_joao__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Open")==0)) {
    return P2_joao__St_3_Open;
  };
  if ((strcmp(s, "St_3_Closed")==0)) {
    return P2_joao__St_3_Closed;
  };
}

char* string_of_P2_joao__st_3(P2_joao__st_3 x, char* buf) {
  switch (x) {
    case P2_joao__St_3_Open:
      strcpy(buf, "St_3_Open");
      break;
    case P2_joao__St_3_Closed:
      strcpy(buf, "St_3_Closed");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_2 P2_joao__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Off")==0)) {
    return P2_joao__St_2_Off;
  };
  if ((strcmp(s, "St_2_High")==0)) {
    return P2_joao__St_2_High;
  };
  if ((strcmp(s, "St_2_Frostprotection")==0)) {
    return P2_joao__St_2_Frostprotection;
  };
  if ((strcmp(s, "St_2_Eco")==0)) {
    return P2_joao__St_2_Eco;
  };
}

char* string_of_P2_joao__st_2(P2_joao__st_2 x, char* buf) {
  switch (x) {
    case P2_joao__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    case P2_joao__St_2_High:
      strcpy(buf, "St_2_High");
      break;
    case P2_joao__St_2_Frostprotection:
      strcpy(buf, "St_2_Frostprotection");
      break;
    case P2_joao__St_2_Eco:
      strcpy(buf, "St_2_Eco");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_1 P2_joao__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Standby")==0)) {
    return P2_joao__St_1_Standby;
  };
  if ((strcmp(s, "St_1_Reheat")==0)) {
    return P2_joao__St_1_Reheat;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return P2_joao__St_1_Off;
  };
  if ((strcmp(s, "St_1_Maintain")==0)) {
    return P2_joao__St_1_Maintain;
  };
  if ((strcmp(s, "St_1_Heat")==0)) {
    return P2_joao__St_1_Heat;
  };
}

char* string_of_P2_joao__st_1(P2_joao__st_1 x, char* buf) {
  switch (x) {
    case P2_joao__St_1_Standby:
      strcpy(buf, "St_1_Standby");
      break;
    case P2_joao__St_1_Reheat:
      strcpy(buf, "St_1_Reheat");
      break;
    case P2_joao__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    case P2_joao__St_1_Maintain:
      strcpy(buf, "St_1_Maintain");
      break;
    case P2_joao__St_1_Heat:
      strcpy(buf, "St_1_Heat");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st P2_joao__st_of_string(char* s) {
  if ((strcmp(s, "St_Waterfill")==0)) {
    return P2_joao__St_Waterfill;
  };
  if ((strcmp(s, "St_Washing")==0)) {
    return P2_joao__St_Washing;
  };
  if ((strcmp(s, "St_Standby")==0)) {
    return P2_joao__St_Standby;
  };
  if ((strcmp(s, "St_Spin")==0)) {
    return P2_joao__St_Spin;
  };
  if ((strcmp(s, "St_Rinse")==0)) {
    return P2_joao__St_Rinse;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return P2_joao__St_Off;
  };
}

char* string_of_P2_joao__st(P2_joao__st x, char* buf) {
  switch (x) {
    case P2_joao__St_Waterfill:
      strcpy(buf, "St_Waterfill");
      break;
    case P2_joao__St_Washing:
      strcpy(buf, "St_Washing");
      break;
    case P2_joao__St_Standby:
      strcpy(buf, "St_Standby");
      break;
    case P2_joao__St_Spin:
      strcpy(buf, "St_Spin");
      break;
    case P2_joao__St_Rinse:
      strcpy(buf, "St_Rinse");
      break;
    case P2_joao__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

