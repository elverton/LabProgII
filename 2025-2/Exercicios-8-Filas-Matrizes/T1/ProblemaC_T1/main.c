#include <stdio.h>
#include "matriz.h"

int main() {
    int dimensao;
    int valor;
    
    scanf("%d", &dimensao);
    
    Matriz *m = criaMatriz(dimensao);
    
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j <= i; j++) {  
            scanf("%d", &valor);
            atualizaElemento(m, i, j, valor);
        }
    }
    
    imprimeMatriz(m);
    liberaMatriz(m);
    
    return 0;
}
