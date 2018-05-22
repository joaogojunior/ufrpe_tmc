/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p2_joao_types.h"

P2_joao__st_3 P2_joao__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Waterfill")==0)) {
    return P2_joao__St_3_Waterfill;
  };
  if ((strcmp(s, "St_3_Washing")==0)) {
    return P2_joao__St_3_Washing;
  };
  if ((strcmp(s, "St_3_Standby")==0)) {
    return P2_joao__St_3_Standby;
  };
  if ((strcmp(s, "St_3_Spin")==0)) {
    return P2_joao__St_3_Spin;
  };
  if ((strcmp(s, "St_3_Rinse")==0)) {
    return P2_joao__St_3_Rinse;
  };
  if ((strcmp(s, "St_3_Off")==0)) {
    return P2_joao__St_3_Off;
  };
}

char* string_of_P2_joao__st_3(P2_joao__st_3 x, char* buf) {
  switch (x) {
    case P2_joao__St_3_Waterfill:
      strcpy(buf, "St_3_Waterfill");
      break;
    case P2_joao__St_3_Washing:
      strcpy(buf, "St_3_Washing");
      break;
    case P2_joao__St_3_Standby:
      strcpy(buf, "St_3_Standby");
      break;
    case P2_joao__St_3_Spin:
      strcpy(buf, "St_3_Spin");
      break;
    case P2_joao__St_3_Rinse:
      strcpy(buf, "St_3_Rinse");
      break;
    case P2_joao__St_3_Off:
      strcpy(buf, "St_3_Off");
      break;
    default:
      break;
  };
  return buf;
}

P2_joao__st_2 P2_joao__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Standby")==0)) {
    return P2_joao__St_2_Standby;
  };
  if ((strcmp(s, "St_2_Reheat")==0)) {
    return P2_joao__St_2_Reheat;
  };
  if ((strcmp(s, "St_2_Off")==0)) {
    return P2_joao__St_2_Off;
  };
  if ((strcmp(s, "St_2_Maintain")==0)) {
    return P2_joao__St_2_Maintain;
  };
  if ((strcmp(s, "St_2_Heat")==0)) {
    return P2_joao__St_2_Heat;
  };
}

char* string_of_P2_joao__st_2(P2_joao__st_2 x, char* buf) {
  switch (x) {
    case P2_joao__St_2_Standby:
      strcpy(buf, "St_2_Standby");
      break;
    case P2_joao__St_2_Reheat:
      strcpy(buf, "St_2_Reheat");
      break;
    case P2_joao__St_2_Off:
      strcpy(buf, "St_2_Off");
      break;
    case P2_joao__St_2_Maintain:
      strcpy(buf, "St_2_Maintain");
      break;
    case P2_joao__St_2_Heat:
      strcpy(buf, "St_2_Heat");
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

