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
#define n 5

#define AC_IN RPI_BPLUS_GPIO_J8_29
#define B_FULL RPI_BPLUS_GPIO_J8_31
#define B_V1 RPI_BPLUS_GPIO_J8_33
#define B_V2 RPI_BPLUS_GPIO_J8_35
#define B_LOW RPI_BPLUS_GPIO_J8_37

#define LED_ERRO RPI_BPLUS_GPIO_J8_11
#define ATUADOR_MODEM RPI_BPLUS_GPIO_J8_13
#define ATUADOR_PABX RPI_BPLUS_GPIO_J8_15
#define ATX_OUT RPI_BPLUS_GPIO_J8_03

Ups_controlador__contrato_mem mem;
Ups_controlador__contrato_out _res;

//declaracao previa dos metodos
void pc_action(void);
void cb_tm(int a);
void modem_action(int m);
void saida_gpio(void);
int http_post(int rl);

int glob_cnt=0;

int adm_off = 0;
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

int atx_count = 0;
int pc_estado_ant = 0;
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
	  //setando valores recebidos pelo webservice nas variavels globias
    if (strcmp(dict[i].key, "ts") == 0)
    {
	    printf("Recebido ts do webservice!\n");
	    ts = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swa") == 0)
    {

	    printf("Recebido swa do webservice!\n");
            swa = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr1") == 0)
    {

	    printf("Recebido swr1 do webservice!\n");
            swr1 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr3") == 0)
    {

	    printf("Recebido swr3 do webservice!\n");
            swr3 = atoi(dict[i].value);
    }
    else if (strcmp(dict[i].key, "swr4") == 0)
    {

	    printf("Recebido swr4 do webservice!\n");
            swr4 = atoi(dict[i].value);
    }
    else
    {
      printf("Not implemented %s\n", dict[i].key);
    }
  }
  
  //monta json da resposta com os estados atuais para requisicao feita ao webservice
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

  MHD_destroy_response (response);

  semaforo = 0;
  // fim da secao critica
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
      //setup curl timeout to 500ms
      curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, 500L);

      //adiciona os headers para json
      struct curl_slist *headers = NULL;
      headers = curl_slist_append(headers, "Accept: application/json");
      headers = curl_slist_append(headers, "Content-Type: application/json");
      headers = curl_slist_append(headers, "charsets: utf-8");
       
      /* Now specify the POST data */
      char buf[16];
      sprintf(buf, "{\"runlevel\":\"%d\"}", rl);

      curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
      curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, 16L);
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
 printf("Iniciando chipset...\n");

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
 bcm2835_gpio_fsel(ATX_OUT, BCM2835_GPIO_FSEL_OUTP);

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

    printf("Escrevendos nos gpio...\n");

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
        /* rele estado solido ativa em LOW */
    if ( _res.modem_atuador == 1)
    {
      bcm2835_gpio_write(ATUADOR_MODEM, LOW);
    } 
    else 
    {
      bcm2835_gpio_write(ATUADOR_MODEM, HIGH);
    }
	/* ATUADOR DO PABX */
        /* rele estado solido ativa em LOW */
    if ( _res.pabx_atuador == 1)
    {
      bcm2835_gpio_write(ATUADOR_PABX, LOW);
    } 
    else 
    {
      bcm2835_gpio_write(ATUADOR_PABX, HIGH);
    }

    /* ATX_OUT */
    if (atx_count > 0) 
    {
      printf("atx_count=%d\n", atx_count);
      --atx_count;
      printf("novo valor em atx_count... %d\n", atx_count);
      bcm2835_gpio_write(ATX_OUT, HIGH);
    } 
    else 
    {
      bcm2835_gpio_write(ATX_OUT, LOW);
    }
}

void cb_tm (int a) {
	//se o timer expirar enquanto o codigo estava em uma secao critica espera a conclusao do mesmo
	printf ("Timer expirou! esperando o semaforo...\n");
	while (semaforo) {}
	semaforo = 1;
        //secao critica
	printf("Gerando tm...!\n");
	tm = 1;
	ocupado = 0;
	//fim da secao critica
	semaforo = 0;
}

//testa conectividade com internet
int ping_call(void){
 int a = system("ping -c1 8.8.8.8 > /dev/null");
 if(a == -1)
     printf("call failed!\n");
 else if (WEXITSTATUS(a) == 127)
     printf("shell command not found!\n");
 else
     printf("system call return succesfull with %d\n",WEXITSTATUS(a));
 //codigo de termino de execucao do ping (zero = sucesso)
 return WEXITSTATUS(a);
}

//configura o timer que vai gerar o evento de transicao tm
void modem_action(int m){

        // reseta valor de tm e om assim que for usada para garantir que um evento apenas foi introduzido
	tm = 0;
	om = 0;

	switch (m) {
	case 1: //sleep - espera 15min
		if (ocupado == 0) {
		ocupado = 1;
		printf("programou timer para 15min\n");
		alarm(900);
		}
		break;
	case 2: //boot - espera 90seg
		if (ocupado == 0) {
		ocupado = 1;
		printf("programou timer para 90seg\n");
		alarm(90);
		}
		break;
	case 3: //test - ping dnsserver
		//nesse estado nao precisa de nenhum semaforo pois eh garantido que o automato so passa um passo nesse estado
		if (ping_call() == 0) {
			//se o ping foi bem sucedido esta conectado
			printf("modem conectado!\n");
			om = 1;
		} else {
			//se o ping foi mau sucedido esta offline
			printf("modem offline!\n");
			om = 0;
		}
		break;
	case 4: //online - espera 5min
		if (ocupado == 0) {
		ocupado = 1;
		printf("programou o timer para 5min\n");
		alarm(300);
		}
		break;
	}
}

void pc_action(void){

  // reseta eventos provenientes do webservice para garantir q foram gerado apenas uma vez
	  swr4 = 0;
	  swr3 = 0;
	  swr1 = 0;
          swa = 0;
          ts = 0;

  //gera sinal de desligamento do pc
  if (atx_count == 0 && pc_estado_ant == 1 && _res.serv_estado == 0) {
	  // gera chamda de desligamento do pc forcado
	  printf("atx_count agora eh 7\n");
	  atx_count = 7;
  } else if ( atx_count == 0 && pc_estado_ant != 0 && _res.serv_estado == 0 ) {
	  // nos outros casos desliga normalmente
	  printf("atx_count agora eh 1\n");
	  atx_count = 1;
  } else if ( atx_count == 0 && pc_estado_ant == 0 && _res.serv_estado != 0 ) {
	  // gera sinal para ligar o pc
          printf("atx_count agora eh 1\n");
	  atx_count = 1;
  } else if (pc_estado_ant == 1 && _res.serv_estado == 2) {
	  // pc recem iniciado muda p runlevel4 (comportamento da planta)
          //executa um passo no controlador
	  printf("Boot do pc em rl4...\n");
          Ups_controlador__contrato_step(0, ac, cb, l1b, l2b, vb, 0, 0, 0, 0, 0,
		                                         0, 0, 1, &_res, &mem);
  }

}

void leitura_gpio(void){
  
  printf("Faz pooling dos pinos de entrada...\n");

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
      printf("Detectado sinal ac!\n");
      ac = 1;
    } 
    if (bcm2835_gpio_lev(B_FULL) == HIGH)
    {
      printf("Detectado sinal cb!\n");
      cb = 1;
    }
    if (bcm2835_gpio_lev(B_V1) == HIGH)
    { 
      printf("Detectado sinal l1b!\n");
      l1b = 1;
    }
    if (bcm2835_gpio_lev(B_V2) == HIGH)
    {
      printf("Detectado sinal l2b!\n");
      l2b = 1;
    }
    if (bcm2835_gpio_lev(B_LOW) == HIGH)
    {
      printf("Detectado sinal vb!\n");
      vb = 1;
    }
}

void gera_td(void){
  //aqui gera evento dia/noite
  td = 0;
  int hora = hora_do_dia();
  if (hora > 8 && hora <= 20 && _res.dia == 0) {
	  printf("Gerando td...\n");
	  td = 1;
  } else if (hora > 20 && hora <= 8 && _res.dia == 1) {
	  printf("Gerando td...\n");
	  td = 1;
  }
}

void debug_output(void){
    printf("saidas:\n");
    printf("erro => ");
    printf("%d ", _res.erro);
    printf("dia => ");
    printf("%d ", _res.dia);
    printf("pabx => ");
    printf("%d ", _res.pabx_atuador);
    printf("modem => ");
    printf("%d ", _res.modem_atuador);
    printf("modem_estado => ");
    printf("%d ", _res.modem_estado);
    printf("serv_estado => ");
    printf("%d ", _res.serv_estado);
    printf("bat12v_3 => ");
    printf("%d ", _res.bat12v_3);
    printf("bat12v_2 => ");
    printf("%d ", _res.bat12v_2);
    printf("bat12v_1 => ");
    printf("%d ", _res.bat12v_1);
    puts("");
    fflush(stdout);
}


int main(int argc, char** argv) {
  
 //inicia bcm2835 logo no inicio do programa
  if (inicia_bcm()) {
	 printf ("Erro no init do bcm2835!\n");
	 return 1;
  }  
  
  //configura callback do alarm
  signal(SIGALRM, cb_tm);

  struct MHD_Daemon *daemon;
  
  //reset do controlador
  Ups_controlador__contrato_reset(&mem);

  //setup da planta e checagens iniciais...
  
  //sincroniza hora atual com automato do tempo do controlador
  int hora = hora_do_dia();
  printf("hora -> %d\n",hora);

  //se for noite da um passo no controlador com evento de transicao do automado do dia para
  // que ele passe para noite
  if (hora > 8 && hora <= 20) {
	  printf ("Não há necessidade de atulizar o automato do tempo no momento...\n");
  }
   else
  {
	  printf("Sincronizando controlador para noite...\n");
          Ups_controlador__contrato_step(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
		                                         0, 0, 0, &_res, &mem);
	  debug_output();
  }

  //le uma vez os gpio inpus
  leitura_gpio();
  //verifica se ha ac ou se ha pelo menos o bit bateria low
  if (ac == 0 && vb == 0){
	  //gera erro e sai
	  printf("Erro! Não é possivel iniciar controlador sem os sensores de bateria e de ac :-(\nVerifique a conexão e tente novamente!\n");
	  exit(1);
  }

  //sincroniza pc ja ligado na planta com automato do pc
  //simula ac para ligar a panta inteira e envia ts para pc ir para rl1 envia tm para modem ir para teste
 
  printf("Insere sinal ac...\n");
  Ups_controlador__contrato_step(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		                                         0, 0, 0, &_res, &mem);
 
 
  printf("Insere sinal tm e ts...\n");
  Ups_controlador__contrato_step(0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0,
		                                         0, 0, 0, &_res, &mem);
  debug_output();
  printf("Insere sinal ac, om e swr4...\n");
  //envia rl4 para fazer o pc ir para rl4 e om para modem ir para online
  Ups_controlador__contrato_step(0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0,
		                                         0, 0, 1, &_res, &mem);
  debug_output();

  //zera todas as chave/valor para todas as posicoes de dict
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  //inicia daemon do webservice
  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  /* loop principal do pooling */
  while (1) {
 
  /* espera 1 seg */
  bcm2835_delay(10000);

 //secao critica
  while (semaforo) {}
  semaforo = 1;

  //aqui gera evento dia/noite
  gera_td();

  //faz pooling das entradas de bateria e ac
  leitura_gpio();

  //guarda estado anterior do pc
  pc_estado_ant = _res.serv_estado;

  printf("Entradas: adm_off=%d, ac=%d, cb=%d, l1b=%d, l2b=%d, vb=%d, td=%d, tm=%d, om=%d, ts=%d, swa=%d, swr1=%d, swr3=%d, swr4=%d\n", adm_off, ac, cb, l1b, l2b, vb, td, tm, om, ts, swa, swr1, swr3, swr4 );

  //executa um passo no controlador
  Ups_controlador__contrato_step(adm_off, ac, cb, l1b, l2b, vb, td, tm, om, ts, swa,
		                                         swr1, swr3, swr4, &_res, &mem);

  debug_output();

  /* checa se o estado do pc mudou e faz post no webservice do pc com o novo estado*/
  if ( pc_estado_ant != _res.serv_estado ) {
    printf("Enviando post para o pc com novo runlevel %d!\n", _res.serv_estado); 
    int r;
    if ( _res.serv_estado == 2 ) { 
	    r = 1;
    }
    else {
	    r = _res.serv_estado;
    }
    if  (http_post(r)) {
  	  printf("Erro na execucao do post com curl!\n");
    }
  }

  //aqui reseta eventos do webservice e gera sinal de desligamento do pc se necessario
  pc_action();

  //aqui atualiza estado do modem para os temporizadores e o teste de conexao
  modem_action(_res.modem_estado);

  /* metodo que atualiza as saidas gpio apos um passo do automato */
  saida_gpio();

  semaforo = 0;
  //fim secao critica
  };

  MHD_stop_daemon (daemon);
  return 0;
}
