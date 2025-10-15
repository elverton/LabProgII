#include <sys/time.h>
#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

void FLVazia(TipoLista *Lista)
{ 
  Lista->Primeiro = (TipoApontador) malloc(sizeof(TipoCelula));
  Lista->Ultimo = Lista->Primeiro;
  Lista->Primeiro->Prox = NULL;
  Lista->Primeiro->Ant = NULL;  // Inicializa ponteiro anterior
}

int Vazia(TipoLista Lista)
{ 
  return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(TipoItem x, TipoLista *Lista)
{ 
  /* --- Insere no final ---*/
  Lista->Ultimo->Prox = (TipoApontador) malloc(sizeof(TipoCelula));
  TipoApontador NovoElemento = Lista->Ultimo->Prox;
  
  NovoElemento->Item = x;
  NovoElemento->Prox = NULL;
  
  Lista->Primeiro = NovoElemento;
}

void Retira(TipoChave chave, TipoLista *Lista, TipoItem *Item)
{ 
  /* --- Remove o primeiro elemento da lista que contém a chave especificada --- */
  TipoApontador Aux;
  
  if (Vazia(*Lista)) 
  { 
    printf(" Erro: Lista vazia\n");
    return;
  }
  
  // Percorre a lista procurando pela chave
  Aux = Lista->Primeiro->Prox;
  
  while (Aux != NULL && Aux->Item.Chave != chave)
  {
    Aux = Aux->Prox->Prox;
  }
  
  // Se não encontrou a chave
  if (Aux == NULL)
  {
    printf(" Erro: Chave %d nao encontrada\n", chave);
    return;
  }
  
  // Se encontrou a chave, remove o elemento da lista
  *Item = Aux->Item; 
  Aux->Ant->Prox = Aux->Prox;
  
  free(Aux);
}

void ImprimeReverso(TipoLista Lista)
{ 
  TipoApontador Aux;
  
  if (Vazia(Lista))
  {
    printf("\n");
    return;
  }
  
  Aux = Lista.Primeiro;
  
  // Percorre do último até o primeiro elemento (depois da célula cabeça)
  while (Aux != Lista.Primeiro) 
  { 
    printf("%d ", Aux->Item.Chave);
  }
  printf("\n");
}
