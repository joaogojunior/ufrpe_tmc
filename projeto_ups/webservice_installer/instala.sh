#/bin/bash

TARGETDIR=$2
PORT_VAR=$1

if [ "_$PORT_VAR" = "_" ] || [ "_$TARGETDIR" = "_" ]; then
 echo "Especificar porta e targetdir! Ex $0 8082 ups_controlador"
 exit 1
fi

INPUT_VARS=`cat "$TARGETDIR"_c/_main.c | grep " int "| cut -f4 -d" "| sed 's/;$//'| xargs| cut -f3- -d" "`
echo "Variaveis de entrada encontradas: $INPUT_VARS"

N_VAR=`echo $INPUT_VARS|wc -w`
echo "N=$N_VAR"

MEM_VAR=`cat "$TARGETDIR"_c/_main.c | grep "mem mem;"`
echo "MEM_VAR=$MEM_VAR"

CTRL_VARS=""
for VAR in $INPUT_VARS; do
 CTRL_VARS=`echo "$CTRL_VARS int $VAR = 0;"`
done

echo "CTRL_VARS=$CTRL_VARS"

RES_VAR=`cat "$TARGETDIR"_c/_main.c | grep " _res;"`
echo "RES_VAR=$RES_VAR"

READ_VARS=""
for VAR in $INPUT_VARS; do
 READ_VARS=`echo "$READ_VARS if (strcmp(dict[i].key, \"$VAR\") == 0) { $VAR = atoi(dict[i].value); } else"`
done
echo "READ_VARS=$READ_VARS"

STEP_CALL="`cat "$TARGETDIR"_c/_main.c | grep "_step" | cut -f1 -d"("`("
for VAR in $INPUT_VARS; do
 STEP_CALL=`echo "$STEP_CALL $VAR,"`
done
STEP_CALL=`echo "$STEP_CALL \&_res, \&mem );"`
echo "STEP_CALL=$STEP_CALL"

OUTPUT_VARS=`cat "$TARGETDIR"_c/_main.c | grep ", _res."| cut -f2 -d"." | cut -f1 -d")"| xargs`
echo "OUTPUT_VARS=$OUTPUT_VARS"

c=0
JSON_VARS=""
for VAR in $OUTPUT_VARS; do
 c=`expr $c + 1`
 if [ $c -gt 1 ]; then
 JSON_VARS=`echo "$JSON_VARS strcat(json, \",\\\'$VAR\\\':\");"`
 else
 JSON_VARS=`echo "$JSON_VARS strcat(json, \"\\\'$VAR\\\':\");"`
 fi
 JSON_VARS=`echo "$JSON_VARS sprintf(aux, \"%d\", _res."$VAR"); strcat(json, aux); "`
done
echo "JSON_VARS=$JSON_VARS"

RESET_CALL=`cat "$TARGETDIR"_c/_main.c | grep "_reset(" | cut -f1 -d"("`

RESET_CALL=`echo "$RESET_CALL(\&mem);"`

echo "RESET_CALL=$RESET_CALL"

echo "Gerando o arquivo webservice.c..."
cat webservice_c.pre| sed "s/PORT_VAR/$PORT_VAR/" | sed "s/N_VAR/$N_VAR/" | sed "s/MEM_VAR/$MEM_VAR/" | sed "s/CTRL_VARS/$CTRL_VARS/" | sed "s/RES_VAR/$RES_VAR/" | sed "s/READ_VARS/$READ_VARS/" | sed "s/STEP_CALL/$STEP_CALL/" | sed "s/JSON_BLOCK/$JSON_VARS/" | sed "s/RES_CALL/$RESET_CALL/" > webservice.c

