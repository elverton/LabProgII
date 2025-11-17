#include <stdio.h>
#include <stdlib.h>
#include "th.h"

int funcao_hash(int chave, int tamanho) {
    return abs(chave) % tamanho;
}

TabelaHash* criar_tabela(int tamanho) {
    TabelaHash* th = (TabelaHash*)malloc(sizeof(TabelaHash));
    th->tamanho = tamanho;
    th->tabela = (No**)calloc(tamanho, sizeof(No*));
    return th;
}

void inserir(TabelaHash* th, int valor) {
    int indice = funcao_hash(valor, th->tamanho);
    
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = th->tabela[indice];
    
    th->tabela[indice] = novo;
}

int buscar(TabelaHash* th, int valor) {
    // Implemente aqui a busca por um elemento na tabela Hash 
}

void liberar_tabela(TabelaHash* th) {
    for (int i = 0; i < th->tamanho; i++) {
        No* atual = th->tabela[i];
        while (atual != NULL) {
            No* temp = atual;
            atual = atual->prox;
            free(temp);
        }
    }
    free(th->tabela);
    free(th);
}

