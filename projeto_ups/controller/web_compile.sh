TARGETDIR="ups_controlador"
CONTRACT="contrato"

gcc -I $CONTRACT_controller_c -I /usr/local/lib/heptagon/c -c -o $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/_main.c
gcc -o $CONTRACT_sim $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/$TARGETDIR.o /usr/lib/x86_64-linux-gnu/libmicrohttpd.so $CONTRACT_controller_c/$CONTRACT_controller.o
