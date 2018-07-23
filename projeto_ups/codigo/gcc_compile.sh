gcc -c  -I contrato_controller_c -I /usr/local/lib/heptagon/c -pipe  -I ups_controlador_c ups_controlador_c/_main.c -o ups_controlador_c/_main.o
gcc -c  -I contrato_controller_c -I /usr/local/lib/heptagon/c -pipe  -I ups_controlador_c ups_controlador_c/ups_controlador.c -o ups_controlador_c/ups_controlador.o
gcc -c  -I contrato_controller_c -I /usr/local/lib/heptagon/c -pipe  -I ups_controlador_c contrato_controller_c/contrato_controller.c -o contrato_controller_c/contrato_controller.o
gcc  -o contrato_sim ups_controlador_c/_main.o ups_controlador_c/ups_controlador.o contrato_controller_c/contrato_controller.o
