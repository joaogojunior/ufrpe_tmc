/* --- Generated the 8/8/2018 at 10:59 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s contrato ups_controlador.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ups_controlador_types.h"

Ups_controlador__st_9 Ups_controlador__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Lig")==0)) {
    return Ups_controlador__St_9_Lig;
  };
  if ((strcmp(s, "St_9_Des")==0)) {
    return Ups_controlador__St_9_Des;
  };
}

char* string_of_Ups_controlador__st_9(Ups_controlador__st_9 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_9_Lig:
      strcpy(buf, "St_9_Lig");
      break;
    case Ups_controlador__St_9_Des:
      strcpy(buf, "St_9_Des");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_8 Ups_controlador__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Teste")==0)) {
    return Ups_controlador__St_8_Teste;
  };
  if ((strcmp(s, "St_8_Sleep")==0)) {
    return Ups_controlador__St_8_Sleep;
  };
  if ((strcmp(s, "St_8_Online")==0)) {
    return Ups_controlador__St_8_Online;
  };
  if ((strcmp(s, "St_8_Off")==0)) {
    return Ups_controlador__St_8_Off;
  };
  if ((strcmp(s, "St_8_Boot")==0)) {
    return Ups_controlador__St_8_Boot;
  };
}

char* string_of_Ups_controlador__st_8(Ups_controlador__st_8 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_8_Teste:
      strcpy(buf, "St_8_Teste");
      break;
    case Ups_controlador__St_8_Sleep:
      strcpy(buf, "St_8_Sleep");
      break;
    case Ups_controlador__St_8_Online:
      strcpy(buf, "St_8_Online");
      break;
    case Ups_controlador__St_8_Off:
      strcpy(buf, "St_8_Off");
      break;
    case Ups_controlador__St_8_Boot:
      strcpy(buf, "St_8_Boot");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_7 Ups_controlador__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Rlevel4")==0)) {
    return Ups_controlador__St_7_Rlevel4;
  };
  if ((strcmp(s, "St_7_Rlevel3")==0)) {
    return Ups_controlador__St_7_Rlevel3;
  };
  if ((strcmp(s, "St_7_Rlevel1")==0)) {
    return Ups_controlador__St_7_Rlevel1;
  };
  if ((strcmp(s, "St_7_Off")==0)) {
    return Ups_controlador__St_7_Off;
  };
  if ((strcmp(s, "St_7_Boot")==0)) {
    return Ups_controlador__St_7_Boot;
  };
}

char* string_of_Ups_controlador__st_7(Ups_controlador__st_7 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_7_Rlevel4:
      strcpy(buf, "St_7_Rlevel4");
      break;
    case Ups_controlador__St_7_Rlevel3:
      strcpy(buf, "St_7_Rlevel3");
      break;
    case Ups_controlador__St_7_Rlevel1:
      strcpy(buf, "St_7_Rlevel1");
      break;
    case Ups_controlador__St_7_Off:
      strcpy(buf, "St_7_Off");
      break;
    case Ups_controlador__St_7_Boot:
      strcpy(buf, "St_7_Boot");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_6 Ups_controlador__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Noite")==0)) {
    return Ups_controlador__St_6_Noite;
  };
  if ((strcmp(s, "St_6_Dia")==0)) {
    return Ups_controlador__St_6_Dia;
  };
}

char* string_of_Ups_controlador__st_6(Ups_controlador__st_6 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_6_Noite:
      strcpy(buf, "St_6_Noite");
      break;
    case Ups_controlador__St_6_Dia:
      strcpy(buf, "St_6_Dia");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_5 Ups_controlador__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Limiar2")==0)) {
    return Ups_controlador__St_5_Limiar2;
  };
  if ((strcmp(s, "St_5_Limiar1")==0)) {
    return Ups_controlador__St_5_Limiar1;
  };
  if ((strcmp(s, "St_5_Erro")==0)) {
    return Ups_controlador__St_5_Erro;
  };
  if ((strcmp(s, "St_5_Cheio")==0)) {
    return Ups_controlador__St_5_Cheio;
  };
  if ((strcmp(s, "St_5_Carregando")==0)) {
    return Ups_controlador__St_5_Carregando;
  };
  if ((strcmp(s, "St_5_Baixo")==0)) {
    return Ups_controlador__St_5_Baixo;
  };
}

char* string_of_Ups_controlador__st_5(Ups_controlador__st_5 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_5_Limiar2:
      strcpy(buf, "St_5_Limiar2");
      break;
    case Ups_controlador__St_5_Limiar1:
      strcpy(buf, "St_5_Limiar1");
      break;
    case Ups_controlador__St_5_Erro:
      strcpy(buf, "St_5_Erro");
      break;
    case Ups_controlador__St_5_Cheio:
      strcpy(buf, "St_5_Cheio");
      break;
    case Ups_controlador__St_5_Carregando:
      strcpy(buf, "St_5_Carregando");
      break;
    case Ups_controlador__St_5_Baixo:
      strcpy(buf, "St_5_Baixo");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_4 Ups_controlador__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Teste")==0)) {
    return Ups_controlador__St_4_Teste;
  };
  if ((strcmp(s, "St_4_Sleep")==0)) {
    return Ups_controlador__St_4_Sleep;
  };
  if ((strcmp(s, "St_4_Online")==0)) {
    return Ups_controlador__St_4_Online;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return Ups_controlador__St_4_Off;
  };
  if ((strcmp(s, "St_4_Boot")==0)) {
    return Ups_controlador__St_4_Boot;
  };
}

char* string_of_Ups_controlador__st_4(Ups_controlador__st_4 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_4_Teste:
      strcpy(buf, "St_4_Teste");
      break;
    case Ups_controlador__St_4_Sleep:
      strcpy(buf, "St_4_Sleep");
      break;
    case Ups_controlador__St_4_Online:
      strcpy(buf, "St_4_Online");
      break;
    case Ups_controlador__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    case Ups_controlador__St_4_Boot:
      strcpy(buf, "St_4_Boot");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_3 Ups_controlador__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Noite")==0)) {
    return Ups_controlador__St_3_Noite;
  };
  if ((strcmp(s, "St_3_Dia")==0)) {
    return Ups_controlador__St_3_Dia;
  };
}

char* string_of_Ups_controlador__st_3(Ups_controlador__st_3 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_3_Noite:
      strcpy(buf, "St_3_Noite");
      break;
    case Ups_controlador__St_3_Dia:
      strcpy(buf, "St_3_Dia");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_2 Ups_controlador__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Lig")==0)) {
    return Ups_controlador__St_2_Lig;
  };
  if ((strcmp(s, "St_2_Des")==0)) {
    return Ups_controlador__St_2_Des;
  };
}

char* string_of_Ups_controlador__st_2(Ups_controlador__st_2 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_2_Lig:
      strcpy(buf, "St_2_Lig");
      break;
    case Ups_controlador__St_2_Des:
      strcpy(buf, "St_2_Des");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st_1 Ups_controlador__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Limiar2")==0)) {
    return Ups_controlador__St_1_Limiar2;
  };
  if ((strcmp(s, "St_1_Limiar1")==0)) {
    return Ups_controlador__St_1_Limiar1;
  };
  if ((strcmp(s, "St_1_Erro")==0)) {
    return Ups_controlador__St_1_Erro;
  };
  if ((strcmp(s, "St_1_Cheio")==0)) {
    return Ups_controlador__St_1_Cheio;
  };
  if ((strcmp(s, "St_1_Carregando")==0)) {
    return Ups_controlador__St_1_Carregando;
  };
  if ((strcmp(s, "St_1_Baixo")==0)) {
    return Ups_controlador__St_1_Baixo;
  };
}

char* string_of_Ups_controlador__st_1(Ups_controlador__st_1 x, char* buf) {
  switch (x) {
    case Ups_controlador__St_1_Limiar2:
      strcpy(buf, "St_1_Limiar2");
      break;
    case Ups_controlador__St_1_Limiar1:
      strcpy(buf, "St_1_Limiar1");
      break;
    case Ups_controlador__St_1_Erro:
      strcpy(buf, "St_1_Erro");
      break;
    case Ups_controlador__St_1_Cheio:
      strcpy(buf, "St_1_Cheio");
      break;
    case Ups_controlador__St_1_Carregando:
      strcpy(buf, "St_1_Carregando");
      break;
    case Ups_controlador__St_1_Baixo:
      strcpy(buf, "St_1_Baixo");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__st Ups_controlador__st_of_string(char* s) {
  if ((strcmp(s, "St_Rlevel4")==0)) {
    return Ups_controlador__St_Rlevel4;
  };
  if ((strcmp(s, "St_Rlevel3")==0)) {
    return Ups_controlador__St_Rlevel3;
  };
  if ((strcmp(s, "St_Rlevel1")==0)) {
    return Ups_controlador__St_Rlevel1;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return Ups_controlador__St_Off;
  };
  if ((strcmp(s, "St_Boot")==0)) {
    return Ups_controlador__St_Boot;
  };
}

char* string_of_Ups_controlador__st(Ups_controlador__st x, char* buf) {
  switch (x) {
    case Ups_controlador__St_Rlevel4:
      strcpy(buf, "St_Rlevel4");
      break;
    case Ups_controlador__St_Rlevel3:
      strcpy(buf, "St_Rlevel3");
      break;
    case Ups_controlador__St_Rlevel1:
      strcpy(buf, "St_Rlevel1");
      break;
    case Ups_controlador__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Ups_controlador__St_Boot:
      strcpy(buf, "St_Boot");
      break;
    default:
      break;
  };
  return buf;
}

Ups_controlador__bat_states Ups_controlador__bat_states_of_string(char* s) {
  if ((strcmp(s, "BERR")==0)) {
    return Ups_controlador__BERR;
  };
  if ((strcmp(s, "B100")==0)) {
    return Ups_controlador__B100;
  };
  if ((strcmp(s, "B75")==0)) {
    return Ups_controlador__B75;
  };
  if ((strcmp(s, "B50")==0)) {
    return Ups_controlador__B50;
  };
  if ((strcmp(s, "B25")==0)) {
    return Ups_controlador__B25;
  };
  if ((strcmp(s, "BCHR")==0)) {
    return Ups_controlador__BCHR;
  };
}

char* string_of_Ups_controlador__bat_states(Ups_controlador__bat_states x,
                                            char* buf) {
  switch (x) {
    case Ups_controlador__BERR:
      strcpy(buf, "BERR");
      break;
    case Ups_controlador__B100:
      strcpy(buf, "B100");
      break;
    case Ups_controlador__B75:
      strcpy(buf, "B75");
      break;
    case Ups_controlador__B50:
      strcpy(buf, "B50");
      break;
    case Ups_controlador__B25:
      strcpy(buf, "B25");
      break;
    case Ups_controlador__BCHR:
      strcpy(buf, "BCHR");
      break;
    default:
      break;
  };
  return buf;
}

