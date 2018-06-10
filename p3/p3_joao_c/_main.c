/* --- Generated the 10/6/2018 at 9:2 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato p3_joao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

P3_joao__contrato_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int eco_input;
  int comfort_input;
  int end_wash;
  int start_wash;
  int finish_oven;
  int start_oven;
  int tok;
  int cold;
  int push_porta;
  int push_janela;
  int rad_up1;
  int rad_down1;
  int rad_up2;
  int rad_down2;
  int presenca;
  int botao_lamp;
  int botao_tv;
  P3_joao__contrato_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  P3_joao__contrato_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("eco_input ? ");
    scanf("%d", &eco_input);;
    
    printf("comfort_input ? ");
    scanf("%d", &comfort_input);;
    
    printf("end_wash ? ");
    scanf("%d", &end_wash);;
    
    printf("start_wash ? ");
    scanf("%d", &start_wash);;
    
    printf("finish_oven ? ");
    scanf("%d", &finish_oven);;
    
    printf("start_oven ? ");
    scanf("%d", &start_oven);;
    
    printf("tok ? ");
    scanf("%d", &tok);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    
    printf("push_porta ? ");
    scanf("%d", &push_porta);;
    
    printf("push_janela ? ");
    scanf("%d", &push_janela);;
    
    printf("rad_up1 ? ");
    scanf("%d", &rad_up1);;
    
    printf("rad_down1 ? ");
    scanf("%d", &rad_down1);;
    
    printf("rad_up2 ? ");
    scanf("%d", &rad_up2);;
    
    printf("rad_down2 ? ");
    scanf("%d", &rad_down2);;
    
    printf("presenca ? ");
    scanf("%d", &presenca);;
    
    printf("botao_lamp ? ");
    scanf("%d", &botao_lamp);;
    
    printf("botao_tv ? ");
    scanf("%d", &botao_tv);;
    P3_joao__contrato_step(eco_input, comfort_input, end_wash, start_wash,
                           finish_oven, start_oven, tok, cold, push_porta,
                           push_janela, rad_up1, rad_down1, rad_up2,
                           rad_down2, presenca, botao_lamp, botao_tv, &_res,
                           &mem);
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
    printf("%d ", _res.p_wash);
    printf("=> ");
    printf("%d ", _res.iws);
    printf("=> ");
    printf("%d ", _res.p_oven);
    printf("=> ");
    printf("%d ", _res.io);
    printf("=> ");
    printf("%d ", _res.rad_pot);
    printf("=> ");
    printf("%d ", _res.rad_state);
    puts("");
    fflush(stdout);
  };
  return 0;
}

