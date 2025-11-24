#include "hash.h"

int main(int argc, char *argv[])
{ 
  TipoDicionario Tabela;
  TipoPesos p;
  TipoItem Elemento;
  int n, m, i, j;
  
  Inicializa(Tabela);
  GeraPesos(p);
  
  /* Lê N strings para inserir na tabela */
  scanf("%d", &n);
  getchar(); /* Limpa o buffer */
  
  for (i = 0; i < n; i++) {
    LerPalavra(Elemento.Chave, N);
    Insere(Elemento, p, Tabela);
  }
  
  /* Lê M strings para pesquisar na tabela */
  scanf("%d", &m);
  getchar(); /* Limpa o buffer */
  
  for (j = 0; j < m; j++) {
    LerPalavra(Elemento.Chave, N);
    
    i = Pesquisa(Elemento.Chave, p, Tabela);
    if (i < M) {
      printf("sim\n");
    } else {
      printf("nao\n");
    }
  }
  
  return 0;
}
