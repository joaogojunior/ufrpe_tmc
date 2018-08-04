/* --- Generated the 30/6/2016 at 13:35 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. mar. 17 14:0:21 CET 2016) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s global global2.ept --- */

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>

#include "_main.h"

#include <bcm2835.h>
#include <curl/curl.h>

#include <time.h>       
#include <signal.h>

#define PORT 8082
#define n 14

#define AC_IN RPI_BPLUS_GPIO_J8_29
#define B_FULL RPI_BPLUS_GPIO_J8_31
#define B_V1 RPI_BPLUS_GPIO_J8_33
#define B_V2 RPI_BPLUS_GPIO_J8_35
#define B_LOW RPI_BPLUS_GPIO_J8_37

#define LED_ERRO RPI_BPLUS_GPIO_J8_11
#define ATUADOR_MODEM RPI_BPLUS_GPIO_J8_13
#define ATUADOR_PABX RPI_BPLUS_GPIO_J8_15

Ups_controlador__contrato_mem mem;
Ups_controlador__contrato_out _res;

//declaracao previa dos metodos
void cb_tm(int a);
void modem_action(int m);
void saida_gpio(void);
int http_post(int rl);

int glob_cnt=0;

int ac = 0;
int cb = 0;
int l1b = 0;
int l2b = 0;
int vb = 0;
int td = 0;
int tm = 0;
int om = 0;
int ts = 0;
int swa = 0;
int swr1 = 0;
int swr3 = 0;
int swr4 = 0;

int semaforo = 0;
int ocupado = 0;

struct item
{
    const char *key;
    const char *value;
};

struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d \n", glob_cnt);
  glob_cnt = 0;
  
  int step_c;
  int step_max;

  while (semaforo) {}

  semaforo = 1;

  /* zerando variaveis dos eventos recebiveis pelo webservice */
  ts = 0;
  swa = 0;
  swr1 = 0;
  swr3 = 0;
  swr4 = 0;

  int i;
  for(i= 0; i < n; i++)
  {
   /* as entradas comenmtadas nao se darao pelo webservice */

   /* if (strcmp(dict[i].key, "ac") == 0)
    {
      ac = atoi(dict[i].value);
    } 
    else if (strcmp(dict[i].key, "cb") == 0)
    {
      cb = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "l1b") == 0)
    {
      l1b = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "l2b") == 0)
    {
      l2b = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "vb") == 0)
    {
      vb = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "td") == 0)
    {
      td = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "tm") == 0)
    {
      tm = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "om") == 0)
    {
      om = atoi(dict[i].value);
    }
    else */ if (strcmp(dict[i].key, "ts") == 0)
    {
      ts = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swa") == 0)
    {
      swa = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr1") == 0)
    {
      swr1 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr3") == 0)
    {
      swr3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr4") == 0)
    {
      swr4 = atoi(dict[i].value);
    }
    else
    {
      printf("Not implemented %s\n", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s\n",dict[i].key, dict[i].value);
  }  
  
  Ups_controlador__contrato_step(ac, cb, l1b, l2b, vb, td, tm, om, ts, swa,
		                                         swr1, swr3, swr4, &_res, &mem);
  
  char aux[1];
  
  strcat(json, "{");
  strcat(json, "\'erro\':");
  sprintf(aux, "%d", _res.erro);
  strcat(json, aux);
  
  strcat(json, ",\'dia\':");
  sprintf(aux, "%d", _res.dia);
  strcat(json, aux);
  
  strcat(json, ",\'r_dia\':");
  sprintf(aux, "%d", _res.r_dia);
  strcat(json, aux);
  
  strcat(json, ",\'r_noite\':");
  sprintf(aux, "%d", _res.r_noite);
  strcat(json, aux);

  strcat(json, ",\'pabx_atuador\':");
  sprintf(aux, "%d", _res.pabx_atuador);
  strcat(json, aux);
  
  strcat(json, ",\'modem_atuador\':");
  sprintf(aux, "%d", _res.modem_atuador);
  strcat(json, aux);

  strcat(json, ",\'modem_estado\':");
  sprintf(aux, "%d", _res.modem_estado);
  strcat(json, aux);

  strcat(json, ",\'serv_estado\':");
  sprintf(aux, "%d", _res.serv_estado);
  strcat(json, aux);
  
  strcat(json, ",\'bat12v_3\':");
  sprintf(aux, "%d", _res.bat12v_3);
  strcat(json, aux);
  
  strcat(json, ",\'bat12v_2\':");
  sprintf(aux, "%d", _res.bat12v_2);
  strcat(json, aux);
  
  strcat(json, ",\'bat12v_1\':");
  sprintf(aux, "%d", _res.bat12v_1);
  strcat(json, aux);
  
  strcat(json, "}");
  
  printf("%s\n",json);
  
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
				     MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);

  //aqui atualiza estado do modem
  modem_action(_res.modem_estado);

  /* aqui faz post no webservice do pc*/
  if  (http_post(_res.serv_estado)) {
	  printf("Erro na execucao do post com curl!\n");
  }
  
  /* atualiza saidas do gpio apos passo do automato */
  saida_gpio();

  semaforo = 0;

  MHD_destroy_response (response);

  return ret;
}

int http_post(int rl)
{
  CURL *curl;
  CURLcode res;
  int ret = 1;
     
  /* In windows, this will init the winsock stuff */ 
  curl_global_init(CURL_GLOBAL_ALL);
    
  /* get a curl handle */ 
  curl = curl_easy_init();
  if(curl) {
      /* First set the URL that is about to receive our POST. This URL can
       *        just as well be a https:// URL if that is what should receive the
       *               data. */ 
      curl_easy_setopt(curl, CURLOPT_URL, "http://nachos.ftp.sh:5060/runlevel");
      /* Now specify the POST data */
      char buf[20];
      sprintf(buf, "{\"runlevel\": \"%d\" }", rl);
      curl_easy_setopt(curl, CURLOPT_POSTFIELDS, buf);
   
      /* Perform the request, res will get the return code */ 
      res = curl_easy_perform(curl);
      /* Check for errors */ 
      if(res != CURLE_OK) 
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
			              curl_easy_strerror(res));
      else ret = 0;
		   
      /* always cleanup */ 
      curl_easy_cleanup(curl);
  }
  curl_global_cleanup();
  return ret;
}


/*setup do bcm2835*/
int inicia_bcm(void) {

 if (!bcm2835_init()) {
	 return 1;
 }

// seta pinos como input
bcm2835_gpio_fsel(AC_IN, BCM2835_GPIO_FSEL_INPT);
bcm2835_gpio_set_pud(AC_IN, BCM2835_GPIO_PUD_DOWN);
bcm2835_gpio_fsel(B_FULL, BCM2835_GPIO_FSEL_INPT);
bcm2835_gpio_set_pud(B_FULL, BCM2835_GPIO_PUD_DOWN);
bcm2835_gpio_fsel(B_V1, BCM2835_GPIO_FSEL_INPT);
bcm2835_gpio_set_pud(B_V1, BCM2835_GPIO_PUD_DOWN);
bcm2835_gpio_fsel(B_V2, BCM2835_GPIO_FSEL_INPT);
bcm2835_gpio_set_pud(B_V2, BCM2835_GPIO_PUD_DOWN);
bcm2835_gpio_fsel(B_LOW, BCM2835_GPIO_FSEL_INPT);
bcm2835_gpio_set_pud(B_LOW, BCM2835_GPIO_PUD_DOWN);

/* seta pinos como output*/
bcm2835_gpio_fsel(LED_ERRO, BCM2835_GPIO_FSEL_OUTP);
bcm2835_gpio_fsel(ATUADOR_MODEM, BCM2835_GPIO_FSEL_OUTP);
bcm2835_gpio_fsel(ATUADOR_PABX, BCM2835_GPIO_FSEL_OUTP);

return 0;
}

int hora_do_dia(void) {

 time_t rawtime = time(NULL);
 if (rawtime == -1) {
        return -1;
    }
	    
 struct tm *ptm = localtime(&rawtime);
	        
 if (ptm == NULL) {
        return -1;
 }

 int hora = ptm->tm_hour;
 return hora;
}

/* escreve saidas gpio */
void saida_gpio (void) {

	/* LED DE ERRO */
    if ( _res.erro == 1)
    {
      bcm2835_gpio_write(LED_ERRO, HIGH);
    } 
    else 
    {
      bcm2835_gpio_write(LED_ERRO, LOW);
    }
	/* ATUADOR DO MODEM */
    if ( _res.modem_atuador == 1)
    {
      bcm2835_gpio_write(ATUADOR_MODEM, HIGH);
    } 
    else 
    {
      bcm2835_gpio_write(ATUADOR_MODEM, LOW);
    }
	/* ATUADOR DO PABX */
    if ( _res.pabx_atuador == 1)
    {
      bcm2835_gpio_write(ATUADOR_PABX, HIGH);
    } 
    else 
    {
      bcm2835_gpio_write(ATUADOR_PABX, LOW);
    }
}

void cb_tm (int a) {
	tm = 1;
	ocupado = 0;
}

int ping_call(void){
 int a = system("ping -c1 8.8.8.8 > /dev/null");
 if(a == -1)
     printf("call failed!");
 else if (WEXITSTATUS(a) == 127)
     printf("shell command not found!");
 else
     printf("system call return succesfull with %d",WEXITSTATUS(a));
 return WEXITSTATUS(a);
}

//configura o timer que vai gerar o evento de transicao tm
void modem_action(int m){

        // reseta valor de algumas entradas assim que forem usadas para garantir que um evento apenas foi introduzido
        //tm
        if (tm == 1) {
	        tm = 0;
        }

	switch (m) {
	case 1: //sleep - espera 15min
		if (ocupado == 0) {
		ocupado = 1;
		alarm(900);
		}
		break;
	case 2: //boot - espera 90seg
		if (ocupado == 0) {
		ocupado = 1;
		alarm(90);
		}
		break;
	case 3: //test - ping dnsserver
		//nesse estado nao precisa de nenhum semaforo pois eh garantido que o automato so passa um passo nesse estado
		if (ping_call() == 0) {
			om = 1;
		} else {
			om = 0;
		}
		break;
	case 4: //online - espera 5min
		if (ocupado == 0) {
		ocupado = 1;
		alarm(300);
		}
		break;
	}
}

int main(int argc, char** argv) {
  
 //inicia bcm2835 logo no inicio do programa
if (inicia_bcm()) {
	 printf ("Erro no init do bcm2835!");
	 return 1;
 } 

  
  //configura callback do alarm
  signal(SIGALRM, cb_tm);

  struct MHD_Daemon *daemon;
  
  Ups_controlador__contrato_reset(&mem);
  
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  /* loop principal do pooling */
  while (1) {
 
  /* espera 1 seg */
  bcm2835_delay(1000);

 //secao critica
  while (semaforo) {}
  semaforo = 1;

  //aqui gera evento dia/noite
  td = 0;
  int hora = hora_do_dia();
  if (hora > 8 && _res.dia == 0) {
	  td = 1;
  } else if (hora > 20 && _res.dia == 1) {
	  td = 1;
  }

  /* aqui faz o polling de cada entrada*/
  //zera variaveis eventos de entrada do pooling
   ac = 0;
   cb = 0;
   l1b = 0;
   l2b = 0;
   vb = 0;

    //le sinais dos pinos 
    if (bcm2835_gpio_lev(AC_IN) == HIGH )
    {
      ac = 1;
    } 
    else if (bcm2835_gpio_lev(B_FULL) == HIGH)
    {
      cb = 1;
    }
    else if (bcm2835_gpio_lev(B_V1) == HIGH)
    {
      l1b = 1;
    }
    else if (bcm2835_gpio_lev(B_V2) == HIGH)
    {
      l2b = 1;
    }
    else if (bcm2835_gpio_lev(B_LOW) == HIGH)
    {
      vb = 1;
    }

  Ups_controlador__contrato_step(ac, cb, l1b, l2b, vb, td, tm, om, ts, swa,
		                                         swr1, swr3, swr4, &_res, &mem);

  //aqui atualiza estado do modem
  modem_action(_res.modem_estado);

  /* aqui faz post no webservice do pc*/
  if  (http_post(_res.serv_estado)) {
	  printf("Erro na execucao do post com curl!\n");
  }

  /* metodo que atualiza as saidas gpio apos um passo do automato */
  saida_gpio();

  semaforo = 0;
  //fim secao critica

  };

  MHD_stop_daemon (daemon);
  return 0;
}
