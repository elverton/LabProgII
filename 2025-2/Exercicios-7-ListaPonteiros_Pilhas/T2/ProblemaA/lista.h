#ifndef LISTA_H
#define LISTA_H

#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>

typedef int TipoChave;

typedef struct {
  int Chave;
  /* outros componentes */
} TipoItem;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
  TipoItem Item;
  TipoApontador Prox;
  TipoApontador Ant;  // Ponteiro para o elemento anterior
} TipoCelula;

typedef struct {
  TipoApontador Primeiro, Ultimo;
} TipoLista;

/* ========================================================================= */

void FLVazia(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(TipoItem x, TipoLista *Lista);
void Retira(TipoChave chave, TipoLista *Lista, TipoItem *Item);
void RetiraUltimo(TipoLista *Lista, TipoItem *Item);
void Imprime(TipoLista Lista);
void ImprimeReverso(TipoLista Lista);  

#endif
