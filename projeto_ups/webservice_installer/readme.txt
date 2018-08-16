passos para gerar e compilar o webservice:
1 - executar: ./instala.sh 8082 ../codigo/ups_contoler (sem o _c no fim nesse mesmo diretorio assim gerando webservice.c)
2 - copiar o script webservice_compile.sh para o diretorio do codigo heptagon (onde ficam os *.ept): cp webservice_compile.sh ../codigo
3 - mudar para o diretorio heptagon: cd ../codigo
4 - compilar o projeto com o webservice gerado: ./webservice_compile.sh

o local da dependencia do libmicrohttpd.so √ encontrada automaticamente se n√o for encontrada automaticamente sete a variavel LIBMICROHTTPD manualmente ...

os arquivos de include do heptagon estao em ../heptagon/c e ja sao referenciados pelo script se estiverem em lugar diferente aalterar variavel HEPTAGON
