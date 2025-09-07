
#!/bin/bash

echo "Executando testes..."

for entrada in entradas/*.txt; do
    nome=$(basename "$entrada" .txt)
    echo -n "Teste $nome: "
    
    ./cilindro < "$entrada" > temp.txt
    
    if diff -q temp.txt "saidas/$nome.txt" > /dev/null; then
        echo "PASSOU"
    else
        echo "FALHOU"
        echo "Conteúdo da entrada:"
        cat "$entrada"
        echo "Saída obtida:"
        cat temp.txt
        echo "Saída esperada:"
        cat "saidas/$nome.txt"
        echo "---"
    fi
done

rm -f temp.txt
echo "Testes concluídos!"
