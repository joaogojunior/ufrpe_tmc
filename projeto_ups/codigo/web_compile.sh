TARGETDIR="ups_controlador"
CONTRACT="contrato"

gcc -I $CONTRACT"_controller_c" -I /usr/local/lib/heptagon/c -c -o $TARGETDIR"_c"/web_service.o $TARGETDIR"_c"/web_service.c
gcc -o $CONTRACT"_webservice" $TARGETDIR"_c"/web_service.o $TARGETDIR"_c"/$TARGETDIR".o" /usr/lib/arm-linux-gnueabihf/libmicrohttpd.so $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
