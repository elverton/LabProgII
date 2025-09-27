#ifndef LISTA_H
#define LISTA_H

#define INICIOARRANJO   1
#define MAXTAM          1000

typedef int TipoChave;
typedef int TipoApontador;

typedef struct {
  TipoChave Chave;
} TipoItem;

typedef struct {
  TipoItem Item[MAXTAM];
  TipoApontador Primeiro, Ultimo;
} TipoLista;

void FLVazia(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(TipoItem x, TipoLista *Lista); // Implementar
void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item);
void RetiraUltimo(TipoLista *Lista, TipoItem *Item); // Implementar
void Imprime(TipoLista Lista);

#endif
