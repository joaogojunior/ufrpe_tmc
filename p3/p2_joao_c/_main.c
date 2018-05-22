/* --- Generated the 21/5/2018 at 10:53 --- */
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
  int cj;
  int cp;
  int pporta;
  int pjanela;
  int rup1;
  int rdown1;
  int rup2;
  int rdown2;
  int presenca;
  int bl;
  int bt;
  P2_joao__contrato_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  P2_joao__contrato_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("cj ? ");
    scanf("%d", &cj);;
    
    printf("cp ? ");
    scanf("%d", &cp);;
    
    printf("pporta ? ");
    scanf("%d", &pporta);;
    
    printf("pjanela ? ");
    scanf("%d", &pjanela);;
    
    printf("rup1 ? ");
    scanf("%d", &rup1);;
    
    printf("rdown1 ? ");
    scanf("%d", &rdown1);;
    
    printf("rup2 ? ");
    scanf("%d", &rup2);;
    
    printf("rdown2 ? ");
    scanf("%d", &rdown2);;
    
    printf("presenca ? ");
    scanf("%d", &presenca);;
    
    printf("bl ? ");
    scanf("%d", &bl);;
    
    printf("bt ? ");
    scanf("%d", &bt);;
    P2_joao__contrato_step(cj, cp, pporta, pjanela, rup1, rdown1, rup2,
                           rdown2, presenca, bl, bt, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.porta);
    printf("=> ");
    printf("%d ", _res.janela);
    printf("=> ");
    printf("%d ", _res.lamp);
    printf("=> ");
    printf("%d ", _res.tv);
    printf("=> ");
    printf("%d ", _res.ocupado);
    printf("=> ");
    printf("%d ", _res.rad_pot);
    printf("=> ");
    printf("%d ", _res.rad_state);
    puts("");
    fflush(stdout);
  };
  return 0;
}

