#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

// Função para criar uma matriz
Matriz* criaMatriz(int linhas, int colunas) {
    Matriz *m = (Matriz*) malloc(sizeof(Matriz));
    
    m->num_linhas = linhas;
    m->num_colunas = colunas;
    
    // Aloca espaço para todos os elementos (linhas * colunas)
    m->matriz = (int*)calloc(linhas * colunas, sizeof(int));
    
    return m;
}

// Função para atualizar um elemento na posição (linha, coluna)
void atualizaElemento(Matriz *m, int linha, int coluna, int valor) {
	// Logica para atualizar o elemento da matriz. 
	// Lembre-se que a matriz está armazenada como um vetor de 
	// acordo com a figura do enunciado.
	// O endereço inicial da matriz é dado por m->matriz!
	
}

// Função para recuperar um elemento na posição (linha, coluna)
int recuperaElemento(Matriz *m, int linha, int coluna) {
	// Logica para atualizar o elemento da matriz. 
	// Lembre-se que a matriz está armazenada como um vetor de 
	// acordo com a figura do enunciado.
	// O endereço inicial da matriz é dado por m->matriz!
}

// Função para imprimir a matriz
void imprimeMatriz(Matriz *m) {
    
    for (int i = 0; i < m->num_linhas; i++) {
        for (int j = 0; j < m->num_colunas; j++) {
            printf("%d ", recuperaElemento(m,i,j));
        }
        printf("\n");
    }
}

// Função para liberar a memória da matriz
void liberaMatriz(Matriz *m) {
    if (m != NULL) {
        if (m->matriz != NULL) {
            free(m->matriz);
        }
        free(m);
    }
}
