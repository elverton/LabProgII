#ifndef MATRIZ_H
#define MATRIZ_H

// Definição da estrutura Matriz
typedef struct matriz {
    int *matriz;      // ponteiro para o vetor que armazena os elementos
    int num_linhas;   // número de linhas
    int num_colunas;  // número de colunas
} Matriz;

// Protótipos das funções
Matriz* criaMatriz(int linhas, int colunas);
void atualizaElemento(Matriz *m, int linha, int coluna, int valor);
int recuperaElemento(Matriz *m, int linha, int coluna);
void imprimeMatriz(Matriz *m);
void liberaMatriz(Matriz *m);

#endif
