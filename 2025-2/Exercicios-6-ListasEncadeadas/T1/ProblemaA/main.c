#include <stdio.h>
#include "lista.h"

int main(int argc, char *argv[])
{
  TipoLista lista;
  TipoItem item;
  int numInsercoes, numRemocoes;
  int chave, i;
  
  FLVazia(&lista);
  
  scanf("%d", &numInsercoes);
  for(i = 0; i < numInsercoes; i++)
  {
    scanf("%d", &chave);
    item.Chave = chave;
    Insere(item, &lista);
  }
  
  scanf("%d", &numRemocoes);
  for(i = 0; i < numRemocoes; i++)
  {
    RetiraUltimo(&lista, &item);
  }
  
  Imprime(lista);
  
  return 0;
}
