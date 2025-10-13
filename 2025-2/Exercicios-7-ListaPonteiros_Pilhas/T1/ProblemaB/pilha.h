#ifndef PILHA_H
#define PILHA_H

typedef int TipoChave;

typedef struct {
  int Chave;
  /* outros componentes */
} TipoItem;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
  TipoItem Item;
  TipoApontador Prox;
} TipoCelula;

typedef struct {
  TipoApontador Fundo, Topo;
  int Tamanho;
} TipoPilha;

/* Protótipos das funções */
void FPVazia(TipoPilha *Pilha);
int Vazia(TipoPilha Pilha);
void Empilha(TipoItem x, TipoPilha *Pilha);
void Desempilha(TipoPilha *Pilha, TipoItem *Item);
int Tamanho(TipoPilha Pilha);

#endif
