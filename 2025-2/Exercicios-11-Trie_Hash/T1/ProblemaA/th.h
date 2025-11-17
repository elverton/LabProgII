// th.h
#ifndef TH_H
#define TH_H

#define TAM_TABELA 10

typedef struct No {
    int valor;
    struct No* prox;
} No;

typedef struct {
    No** tabela;
    int tamanho;
} TabelaHash;

TabelaHash* criar_tabela(int tamanho);
void inserir(TabelaHash* th, int valor);
int buscar(TabelaHash* th, int valor);
void liberar_tabela(TabelaHash* th);

#endif
