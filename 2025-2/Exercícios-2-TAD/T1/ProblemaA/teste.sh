#!/bin/bash

for entrada in entradas/*.txt; do
    nome=$(basename "$entrada" .txt)
    echo -n "Teste $nome: "
    
    ./conjunto < "$entrada" > temp.txt
    
    if diff -q temp.txt "saidas/$nome.txt" > /dev/null; then
        echo "PASSOU"
    else
        echo "FALHOU"
        echo "Conteúdo da entrada:"
        cat "$entrada"
        echo "---"
    fi
done

rm -f temp.txt
