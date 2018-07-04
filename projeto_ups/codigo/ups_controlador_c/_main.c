/* --- Generated the 4/7/2018 at 13:2 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Ups_controlador__contrato_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int ac;
  int cb;
  int l1b;
  int l2b;
  int vb;
  int td;
  int tm;
  int om;
  int ts;
  int swa;
  int swr1;
  int swr3;
  int swr4;
  Ups_controlador__contrato_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Ups_controlador__contrato_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("ac ? ");
    scanf("%d", &ac);;
    
    printf("cb ? ");
    scanf("%d", &cb);;
    
    printf("l1b ? ");
    scanf("%d", &l1b);;
    
    printf("l2b ? ");
    scanf("%d", &l2b);;
    
    printf("vb ? ");
    scanf("%d", &vb);;
    
    printf("td ? ");
    scanf("%d", &td);;
    
    printf("tm ? ");
    scanf("%d", &tm);;
    
    printf("om ? ");
    scanf("%d", &om);;
    
    printf("ts ? ");
    scanf("%d", &ts);;
    
    printf("swa ? ");
    scanf("%d", &swa);;
    
    printf("swr1 ? ");
    scanf("%d", &swr1);;
    
    printf("swr3 ? ");
    scanf("%d", &swr3);;
    
    printf("swr4 ? ");
    scanf("%d", &swr4);;
    Ups_controlador__contrato_step(ac, cb, l1b, l2b, vb, td, tm, om, ts, swa,
                                   swr1, swr3, swr4, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.erro);
    printf("=> ");
    printf("%d ", _res.led_erro);
    printf("=> ");
    printf("%d ", _res.dia);
    printf("=> ");
    printf("%d ", _res.r_dia);
    printf("=> ");
    printf("%d ", _res.r_noite);
    printf("=> ");
    printf("%d ", _res.pabx_atuador);
    printf("=> ");
    printf("%d ", _res.modem_atuador);
    printf("=> ");
    printf("%d ", _res.serv_atuador);
    printf("=> ");
    printf("%d ", _res.modem_estado);
    printf("=> ");
    printf("%d ", _res.serv_estado);
    printf("=> ");
    printf("%d ", _res.bat12v_3);
    printf("=> ");
    printf("%d ", _res.bat12v_2);
    printf("=> ");
    printf("%d ", _res.bat12v_1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

