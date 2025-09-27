#include <stdio.h>
#include "lista.h"

void FLVazia(TipoLista *Lista)
{
  Lista->Primeiro = INICIOARRANJO;
  Lista->Ultimo = Lista->Primeiro;
}

int Vazia(TipoLista Lista)
{
  return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(TipoItem x, TipoLista *Lista)
{
	// Implemente sua lógica aqui!
}

void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item)
{
  int Aux;
  if (Vazia(*Lista) || p >= Lista->Ultimo) return;
  *Item = Lista->Item[p - 1];
  Lista->Ultimo--;
  for (Aux = p; Aux < Lista->Ultimo; Aux++)
    Lista->Item[Aux - 1] = Lista->Item[Aux];
}

void RetiraUltimo(TipoLista *Lista, TipoItem *Item){
	// Implemente sua lógica aqui
}

void Imprime(TipoLista Lista)
{
  int Aux;
  for (Aux = Lista.Primeiro - 1; Aux <= (Lista.Ultimo - 2); Aux++)
    printf("%d ", Lista.Item[Aux].Chave);
  printf("\n");
}
