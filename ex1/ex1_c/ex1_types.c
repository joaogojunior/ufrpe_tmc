/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks ex1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex1_types.h"

Ex1__st_2 Ex1__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Wait")==0)) {
    return Ex1__St_2_Wait;
  };
  if ((strcmp(s, "St_2_Idle")==0)) {
    return Ex1__St_2_Idle;
  };
  if ((strcmp(s, "St_2_Active")==0)) {
    return Ex1__St_2_Active;
  };
}

char* string_of_Ex1__st_2(Ex1__st_2 x, char* buf) {
  switch (x) {
    case Ex1__St_2_Wait:
      strcpy(buf, "St_2_Wait");
      break;
    case Ex1__St_2_Idle:
      strcpy(buf, "St_2_Idle");
      break;
    case Ex1__St_2_Active:
      strcpy(buf, "St_2_Active");
      break;
    default:
      break;
  };
  return buf;
}

Ex1__st_1 Ex1__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Wait")==0)) {
    return Ex1__St_1_Wait;
  };
  if ((strcmp(s, "St_1_Idle")==0)) {
    return Ex1__St_1_Idle;
  };
  if ((strcmp(s, "St_1_Active")==0)) {
    return Ex1__St_1_Active;
  };
}

char* string_of_Ex1__st_1(Ex1__st_1 x, char* buf) {
  switch (x) {
    case Ex1__St_1_Wait:
      strcpy(buf, "St_1_Wait");
      break;
    case Ex1__St_1_Idle:
      strcpy(buf, "St_1_Idle");
      break;
    case Ex1__St_1_Active:
      strcpy(buf, "St_1_Active");
      break;
    default:
      break;
  };
  return buf;
}

Ex1__st Ex1__st_of_string(char* s) {
  if ((strcmp(s, "St_Wait")==0)) {
    return Ex1__St_Wait;
  };
  if ((strcmp(s, "St_Idle")==0)) {
    return Ex1__St_Idle;
  };
  if ((strcmp(s, "St_Active")==0)) {
    return Ex1__St_Active;
  };
}

char* string_of_Ex1__st(Ex1__st x, char* buf) {
  switch (x) {
    case Ex1__St_Wait:
      strcpy(buf, "St_Wait");
      break;
    case Ex1__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    case Ex1__St_Active:
      strcpy(buf, "St_Active");
      break;
    default:
      break;
  };
  return buf;
}

