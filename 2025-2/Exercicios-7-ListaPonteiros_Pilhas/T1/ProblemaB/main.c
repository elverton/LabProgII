#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{ 
  TipoPilha pilha;
  TipoItem item;
  char operacao;
  int valor;
  
  FPVazia(&pilha);
  
  while(1)
  {
    scanf(" %c", &operacao);
    
    if(operacao == 'E' || operacao == 'e')
    {
      scanf("%d", &valor);
      item.Chave = valor;
      Empilha(item, &pilha);
    }
    else if(operacao == 'D' || operacao == 'd')
    {
      if(!Vazia(pilha))
      {
        Desempilha(&pilha, &item);
        printf("Elemento %d desempilhado\n", item.Chave);
      }
      else
      {
        printf("Pilha vazia!\n");
      }
    }
    else if(operacao == 'S' || operacao == 's')
    {
      break;
    }
  }
  
  return 0;
}
