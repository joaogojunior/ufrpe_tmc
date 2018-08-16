TARGETDIR="ups_controlador"
CONTRACT="contrato"
HEPTAGON="../heptagon/c"
SUFIXO="rebuilt"

gcc -c  -I $CONTRACT"_controller_c" -I $HEPTAGON -pipe  -I $TARGETDIR"_c" $TARGETDIR"_c"/_main.c -o $TARGETDIR"_c"/_main.o
gcc -c  -I $CONTRACT"_controller_c" -I $HEPTAGON -pipe  -I $TARGETDIR"_c" $TARGETDIR"_c"/$TARGETDIR".c" -o $TARGETDIR"_c"/$TARGETDIR".o"
gcc -c  -I $CONTRACT"_controller_c" -I $HEPTAGON -pipe  -I $TARGETDIR"_c" $CONTRACT"_controller_c"/$CONTRACT"_controller.c" -o $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
gcc  -o $CONTRACT"_sim_"$SUFIXO $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/$TARGETDIR".o" $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
