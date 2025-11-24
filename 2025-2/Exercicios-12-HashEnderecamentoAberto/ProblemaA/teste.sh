
#!/bin/bash

echo "Executando testes..."

for entrada in entradas/*; do
    nome=$(basename "$entrada" .txt)
    echo -n "Teste $nome: "
    
    ./$1 < "$entrada" > temp.txt
    
    if diff -q temp.txt "saidas/$nome" > /dev/null; then
        echo "PASSOU"
    else
        echo "FALHOU"
        echo "--> Conteúdo da entrada:"
        cat "$entrada"
        echo "--> Saída obtida:"
        cat temp.txt
        echo "--> Saída esperada:"
        cat "saidas/$nome"
        echo "\n---\n"
    fi
done

rm -f temp.txt
echo "Testes concluídos!"
