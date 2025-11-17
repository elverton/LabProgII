#include <stdio.h>
#include "th.h"

int main() {
    int n, m, valor;
    
    TabelaHash* th = criar_tabela(TAM_TABELA);
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        inserir(th, valor);
    }
    
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &valor);
        if (buscar(th, valor)) {
            printf("%d: EXISTE\n", valor);
        } else {
            printf("%d: NAO EXISTE\n", valor);
        }
    }
    
    liberar_tabela(th);
    
    return 0;
}
