#include <stdio.h>
#include "lista.h"

int main(int argc, char *argv[])
{
  TipoLista lista;
  TipoItem item;
  int numInsercoes;
  int chave, i;
  
  FLVazia(&lista);
  
  scanf("%d", &numInsercoes);
  for(i = 0; i < numInsercoes; i++)
  {
    scanf("%d", &chave);
    item.Chave = chave;
    InsereInicio(item, &lista);
  }
  
  Imprime(lista);
  
  return 0;
}
