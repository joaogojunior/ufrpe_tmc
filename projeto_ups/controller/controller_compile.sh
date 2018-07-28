TARGETDIR="ups_controlador"
CONTRACT="contrato"
HEPTAGON="/usr/local/lib/heptagon/c"
LIBMICROHTTPD="/usr/lib/arm-linux-gnueabihf/libmicrohttpd.so"
LIBBCM="/usr/local/lib/libbcm2835.a"
LIBCURL="/usr/lib/arm-linux-gnueabihf/libcurl.so"

#atualiza/cria controller_services.c dentro do codigo c gerado pelo heptagon
cp ../controller/controller_services.c $TARGETDIR"_c"

gcc -I $CONTRACT"_controller_c" -I $HEPTAGON -c -o $TARGETDIR"_c"/controller_services.o $TARGETDIR"_c"/controller_services.c
gcc -o $CONTRACT"_controller" $TARGETDIR"_c"/controller_services.o $TARGETDIR"_c"/$TARGETDIR".o" $LIBMICROHTTPD $LIBBCM $LIBCURL $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
