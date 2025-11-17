#include <stdio.h>
#include <string.h>
#include "trie.h"

#define MAX_PALAVRA 100

int main() {
    int n, m;
    char palavra[MAX_PALAVRA];
    
    Trie* trie = criar_trie();
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", palavra);
        inserir(trie, palavra);
    }
    
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%s", palavra);
        if (buscar(trie, palavra)) {
            printf("%s: EXISTE\n", palavra);
        } else {
            printf("%s: NAO EXISTE\n", palavra);
        }
    }
    
    liberar_trie(trie);
    
    return 0;
}
