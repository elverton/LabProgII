#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void FPVazia(TipoPilha *Pilha)
{ 
  Pilha->Topo = (TipoApontador) malloc(sizeof(TipoCelula));
  Pilha->Fundo = Pilha->Topo;
  Pilha->Topo->Prox = NULL;
  Pilha->Tamanho = 0;
} 

int Vazia(TipoPilha Pilha)
{ 
  return (Pilha.Topo == Pilha.Fundo);
} 

void Empilha(TipoItem x, TipoPilha *Pilha)
{ 
  TipoApontador Aux;
  Aux = (TipoApontador) malloc(sizeof(TipoCelula));
  Pilha->Topo->Item = x;
  Aux->Prox = Pilha->Topo;
  Pilha->Topo = Aux;
  Pilha->Tamanho++;
} 

void Desempilha(TipoPilha *Pilha, TipoItem *Item)
{ 
	// Implemente a lógica do Desempilha aqui!
} 

int Tamanho(TipoPilha Pilha)
{ 
  return (Pilha.Tamanho);
}
