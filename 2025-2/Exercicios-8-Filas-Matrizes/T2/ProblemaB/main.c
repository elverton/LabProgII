#include <stdio.h>
#include "matriz.h"

int main() {
    int linhas, colunas;
    int valor;
    
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    Matriz *m = criaMatriz(linhas, colunas);
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &valor);
            atualizaElemento(m, i, j, valor);
        }
    }
    
    imprimeMatriz(m);
    liberaMatriz(m);
    
    return 0;
}
