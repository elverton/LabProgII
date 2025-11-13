#!/bin/bash

ARQUIVO_ENTRADA="b.c"

if [ ! -f "$ARQUIVO_ENTRADA" ]; then
    echo "Erro: O arquivo de entrada deve-se chamar $ARQUIVO_ENTRADA"
    exit 1
fi

EXECUTAVEL="b.out"

gcc "$ARQUIVO_ENTRADA" -o "$EXECUTAVEL"

if [ $? -eq 1 ]; then 
    echo "Erro: Ocorreu um erro ao compilar o arquivo $ARQUIVO_ENTRADA"
    exit 1
fi

INPUT_DIR="input"
OUTPUT_DIR="output"

for i in {1..10}; do
    echo "TESTE $i"
    ./"$EXECUTAVEL" < "$INPUT_DIR"/$i > "b.tmp"
    diff "b.tmp" "$OUTPUT_DIR"/$i > /dev/null

    if [ $? -eq 0 ]; then
        echo -e "\nPASSOU"
    else
        echo -e "\nFALHOU\n"

        echo -e "Saida esperada:"
        cat "$OUTPUT_DIR"/$i

        echo -e "\nSaida obtida:"
        cat a.tmp
    fi

    echo "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="
done 

rm -rf "b.tmp"
rm -rf "b.out"
