/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks ex1.ept --- */

#ifndef EX1_TYPES_H
#define EX1_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "twotasks_controller.h"
typedef enum {
  Ex1__St_2_Wait,
  Ex1__St_2_Idle,
  Ex1__St_2_Active
} Ex1__st_2;

Ex1__st_2 Ex1__st_2_of_string(char* s);

char* string_of_Ex1__st_2(Ex1__st_2 x, char* buf);

typedef enum {
  Ex1__St_1_Wait,
  Ex1__St_1_Idle,
  Ex1__St_1_Active
} Ex1__st_1;

Ex1__st_1 Ex1__st_1_of_string(char* s);

char* string_of_Ex1__st_1(Ex1__st_1 x, char* buf);

typedef enum {
  Ex1__St_Wait,
  Ex1__St_Idle,
  Ex1__St_Active
} Ex1__st;

Ex1__st Ex1__st_of_string(char* s);

char* string_of_Ex1__st(Ex1__st x, char* buf);

#endif // EX1_TYPES_H
