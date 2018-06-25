/* --- Generated the 9/5/2018 at 10:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twotasks ex1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Ex1__twotasks_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int r1;
  int e1;
  int r2;
  int e2;
  Ex1__twotasks_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Ex1__twotasks_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("r1 ? ");
    scanf("%d", &r1);;
    
    printf("e1 ? ");
    scanf("%d", &e1);;
    
    printf("r2 ? ");
    scanf("%d", &r2);;
    
    printf("e2 ? ");
    scanf("%d", &e2);;
    Ex1__twotasks_step(r1, e1, r2, e2, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.a1);
    printf("=> ");
    printf("%d ", _res.a2);
    puts("");
    fflush(stdout);
  };
  return 0;
}

