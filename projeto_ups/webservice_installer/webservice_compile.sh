TARGETDIR="ups_controlador"
CONTRACT="contrato"
HEPTAGON="../heptagon/c"

FILES=`whereis libmicrohttpd|cut -f2- -d" "`
LIBMICROHTTPD=""
for file in $FILES; do
 if ! [ "_`echo $file|grep .so`" = "_" ]; then
  LIBMICROHTTPD=`echo $file`
 fi
done
echo "LIBMICROHTTPD -> $LIBMICROHTTPD"

#atualiza/cria webservices.c dentro do codigo c gerado pelo heptagon
cp ../webservice_installer/webservice.c $TARGETDIR"_c" &> /dev/null
if [ $? -gt 0 ]; then
 echo "webservice.c nao encontrado... verifique se ja foi gerado com o comando instalar.sh!"
 exit 1
fi

gcc -I $CONTRACT"_controller_c" -I $HEPTAGON -c -o $TARGETDIR"_c"/webservice.o $TARGETDIR"_c"/webservice.c
gcc -o $CONTRACT"_webservice" $TARGETDIR"_c"/webservice.o $TARGETDIR"_c"/$TARGETDIR".o" $LIBMICROHTTPD $CONTRACT"_controller_c"/$CONTRACT"_controller.o"
