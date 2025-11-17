#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "trie.h"

NoTrie* criar_no() {
    NoTrie* no = (NoTrie*)malloc(sizeof(NoTrie));
    no->fim_palavra = 0;
    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
        no->filhos[i] = NULL;
    }
    return no;
}

Trie* criar_trie() {
    Trie* trie = (Trie*)malloc(sizeof(Trie));
    trie->raiz = criar_no();
    return trie;
}

void inserir(Trie* trie, const char* palavra) {
    NoTrie* atual = trie->raiz;
    int tamanho = strlen(palavra);
    
    for (int i = 0; i < tamanho; i++) {
        int indice = tolower(palavra[i]) - 'a';
        
        if (indice < 0 || indice >= TAMANHO_ALFABETO) {
            continue;
        }
        
        if (atual->filhos[indice] == NULL) {
            atual->filhos[indice] = criar_no();
        }
        
        atual = atual->filhos[indice];
    }
    
    atual->fim_palavra = 1;
}

int buscar(Trie* trie, const char* palavra) {
    // Implemente aqui a lógica de buscar uma palavra
}

void liberar_no(NoTrie* no) {
    if (no == NULL) {
        return;
    }
    
    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
        liberar_no(no->filhos[i]);
    }
    
    free(no);
}

void liberar_trie(Trie* trie) {
    liberar_no(trie->raiz);
    free(trie);
}
