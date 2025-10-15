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
    // Implemente a lógica do Empilha aqui!
} 

void Desempilha(TipoPilha *Pilha, TipoItem *Item)
{ 
    *Item = Pilha->Topo->Prox->Item; 
    TipoApontador Aux = Pilha->Topo->Prox->Prox;

    if(Pilha->Fundo == Pilha->Topo->Prox)
        Pilha->Fundo = Pilha->Topo;

    free(Pilha->Topo->Prox);
    Pilha->Tamanho -= 1;
    Pilha->Topo->Prox = Aux;    
} 

int Tamanho(TipoPilha Pilha)
{ 
    return (Pilha.Tamanho);
}
