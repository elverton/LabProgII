#ifndef MATRIZ_H
#define MATRIZ_H

// Definição da estrutura Matriz Triangular Inferior
typedef struct matriz {
    int *matriz;      // ponteiro para o vetor que armazena os elementos
    int dimensao;     // dimensão da matriz quadrada (n x n)
} Matriz;

// Protótipos das funções
Matriz* criaMatriz(int dimensao);
void atualizaElemento(Matriz *m, int linha, int coluna, int valor);
int recuperaElemento(Matriz *m, int linha, int coluna);
void imprimeMatriz(Matriz *m);
void liberaMatriz(Matriz *m);

#endif
