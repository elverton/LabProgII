#include <stdio.h>
#include "lista.h"

int main(int argc, char *argv[])
{
  TipoLista lista;
  TipoItem item;
  int numInsercoes, elemento_i;
  int chave, i;
  
  FLVazia(&lista);
  
  scanf("%d", &numInsercoes);
  for(i = 0; i < numInsercoes; i++)
  {
    scanf("%d", &chave);
    item.Chave = chave;
    Insere(item, &lista);
  }
  scanf("%d", &elemento_i);
  ImprimeElemento(&lista, elemento_i);
  
  return 0;
}
