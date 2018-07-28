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

#define PORT 8082
#define n 14

#define LED_ERRO RPI_GPIO_P1_11

Ups_controlador__contrato_mem mem;
Ups_controlador__contrato_out _res;

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

  /* atualiza saidas do gpio apos passo do automato */
  saida_gpio();

  semaforo = 0;

  MHD_destroy_response (response);

  return ret;
}

int http_post(void)
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
      curl_easy_setopt(curl, CURLOPT_URL, "http://postit.example.com/moo.cgi");
      /* Now specify the POST data */ 
      curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=daniel&project=curl");
   
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

/* seta pino do led como output*/
bcm2835_gpio_fsel(LED_ERRO, BCM2835_GPIO_FSEL_OUTP);

return 0;
}


/* escreve saidas gpio */
int saida_gpio (void) {

	/* LED DE ERRO */
    if ( _res.erro == 1)
    {
      bcm2835_gpio_write(LED_ERRO, HIGH);
    } 
    else 
    {
      bcm2835_gpio_write(LED_ERRO, LOW);
    }

}

int main(int argc, char** argv) {
  

 if (inicia_bcm()) {
	 printf ("Erro no init do bcm2835!");
	 return 1;
 }

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

  /* aqui faz o polling de cada entrada*/

  while (semaforo) {}

  semaforo = 1;

  Ups_controlador__contrato_step(ac, cb, l1b, l2b, vb, td, tm, om, ts, swa,
		                                         swr1, swr3, swr4, &_res, &mem);

  /* aqui procesa as saidos e escreve no gpio ou faz post no webservice do pc*/

  /* metodo que atualiza as saidas gpio apos um passo do automato */
  saida_gpio();

  semaforo = 0;

  };

  MHD_stop_daemon (daemon);
  return 0;
}
