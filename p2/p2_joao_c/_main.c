/* --- Generated the 14/5/2018 at 10:26 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p2_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

P2_joao__contrato_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int ews;
  int sws;
  int fo;
  int so;
  int tok;
  int cold;
  P2_joao__contrato_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  P2_joao__contrato_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("ews ? ");
    scanf("%d", &ews);;
    
    printf("sws ? ");
    scanf("%d", &sws);;
    
    printf("fo ? ");
    scanf("%d", &fo);;
    
    printf("so ? ");
    scanf("%d", &so);;
    
    printf("tok ? ");
    scanf("%d", &tok);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    P2_joao__contrato_step(ews, sws, fo, so, tok, cold, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.pws);
    printf("=> ");
    printf("%d ", _res.po);
    printf("=> ");
    printf("%d ", _res.iws);
    printf("=> ");
    printf("%d ", _res.io);
    puts("");
    fflush(stdout);
  };
  return 0;
}

