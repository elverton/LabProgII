#ifndef CONJUNTO_H
#define CONJUNTO_H

#define MAX_ELEMENTOS 50

typedef struct {
    int elementos[MAX_ELEMENTOS];
    int tamanho;
} Conjunto;

// Criação e inicialização
Conjunto* criarConjunto();

// Operações básicas
int inserir(Conjunto* conj, int elemento);
int remover(Conjunto* conj, int elemento);
int pertence(Conjunto* conj, int elemento);

// Operações de conjunto
Conjunto* uniao(Conjunto* conj1, Conjunto* conj2);
Conjunto* interseccao(Conjunto* conj1, Conjunto* conj2);
Conjunto* diferenca(Conjunto* conj1, Conjunto* conj2);

// Consultas
int tamanhoConjunto(Conjunto* conj);
int conjuntoVazio(Conjunto* conj);
int igualdade(Conjunto* conj1, Conjunto* conj2);
int menorValor(Conjunto* conj);
int maiorValor(Conjunto* conj);

// Impressão
void imprimirConjunto(Conjunto* conj);

// Liberação de memória
void destruirConjunto(Conjunto* conj);

#endif
