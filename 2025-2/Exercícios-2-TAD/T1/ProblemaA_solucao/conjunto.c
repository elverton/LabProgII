#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

Conjunto* criarConjunto() {
    Conjunto* conj = (Conjunto*)malloc(sizeof(Conjunto));
    if (conj != NULL) {
        conj->tamanho = 0;
    }
    return conj;
}

int inserir(Conjunto* conj, int elemento) {
    if (conj == NULL || conj->tamanho >= MAX_ELEMENTOS) {
        return 0;
    }
    
    // Verifica se elemento já existe
    if (pertence(conj, elemento)) {
        return 0;
    }
    
    conj->elementos[conj->tamanho] = elemento;
    conj->tamanho++;
    return 1;
}

int remover(Conjunto* conj, int elemento) {
    if (conj == NULL || conj->tamanho == 0) {
        return 0;
    }
    
    int i;
    for (i = 0; i < conj->tamanho; i++) {
        if (conj->elementos[i] == elemento) {
            // Move elementos para preencher lacuna
            for (int j = i; j < conj->tamanho - 1; j++) {
                conj->elementos[j] = conj->elementos[j + 1];
            }
            conj->tamanho--;
            return 1;
        }
    }
    return 0;
}

int pertence(Conjunto* conj, int elemento) {
    if (conj == NULL) {
        return 0;
    }
    
    for (int i = 0; i < conj->tamanho; i++) {
        if (conj->elementos[i] == elemento) {
            return 1;
        }
    }
    return 0;
}

Conjunto* uniao(Conjunto* conj1, Conjunto* conj2) {
    /* Você deve criar a lógica da união aqui.
     * Lembre-se de criar um novo conjunto que irá representar a união entre conj1 e conj2.
     * Você pode usar outras funções já definidas no TAD.
     * Lembre-se que um conjunto não tem elementos repetidos!
    */	
    if (conj1 == NULL || conj2 == NULL) {
        return NULL;
    }

    Conjunto* resultado = criarConjunto();
    if (resultado == NULL) {
        return NULL;
    }

    for(int i=0; i<conj1->tamanho; i++){
        inserir(resultado, conj1->elementos[i]);
    }
    for(int i=0; i<conj2->tamanho; i++){
        inserir(resultado, conj2->elementos[i]);
    }

    return resultado;

}

Conjunto* interseccao(Conjunto* conj1, Conjunto* conj2) {
    /* Você deve criar a lógica da interseção aqui.
     * Lembre-se de criar um novo conjunto que irá representar a interseção entre conj1 e conj2.
     * Você pode usar outras funções já definidas no TAD.
     * Lembre-se que um conjunto não tem elementos repetidos!
    */
    if (conj1 == NULL || conj2 == NULL) {
        return NULL;
    }

    Conjunto* resultado = criarConjunto();

    for(int i = 0; i < conj1->tamanho; ++i){
        if(pertence(conj2, conj1->elementos[i]))
            inserir(resultado, conj1->elementos[i]);
    } 
    return resultado;
}



Conjunto* diferenca(Conjunto* conj1, Conjunto* conj2) {
    if (conj1 == NULL || conj2 == NULL) {
        return NULL;
    }
    
    Conjunto* resultado = criarConjunto();
    if (resultado == NULL) {
        return NULL;
    }
    
    // Adiciona elementos que estão em conj1 mas não em conj2
    for (int i = 0; i < conj1->tamanho; i++) {
        if (!pertence(conj2, conj1->elementos[i])) {
            inserir(resultado, conj1->elementos[i]);
        }
    }
    
    return resultado;
}

int tamanhoConjunto(Conjunto* conj) {
    if (conj == NULL) {
        return -1;
    }
    return conj->tamanho;
}

int conjuntoVazio(Conjunto* conj) {
    if (conj == NULL) {
        return 1;
    }
    return conj->tamanho == 0;
}

int igualdade(Conjunto* conj1, Conjunto* conj2) {
    if (conj1 == NULL || conj2 == NULL) {
        return 0;
    }
    
    if (conj1->tamanho != conj2->tamanho) {
        return 0;
    }
    
    // Verifica se todos os elementos de conj1 estão em conj2
    for (int i = 0; i < conj1->tamanho; i++) {
        if (!pertence(conj2, conj1->elementos[i])) {
            return 0;
        }
    }
    
    return 1;
}

int menorValor(Conjunto* conj) {
    if (conj == NULL || conj->tamanho == 0) {
        return -1; // Indica erro ou conjunto vazio
    }
    
    int menor = conj->elementos[0];
    for (int i = 1; i < conj->tamanho; i++) {
        if (conj->elementos[i] < menor) {
            menor = conj->elementos[i];
        }
    }
    
    return menor;
}

int maiorValor(Conjunto* conj) {
    if (conj == NULL || conj->tamanho == 0) {
        return -1; // Indica erro ou conjunto vazio
    }
    
    int maior = conj->elementos[0];
    for (int i = 1; i < conj->tamanho; i++) {
        if (conj->elementos[i] > maior) {
            maior = conj->elementos[i];
        }
    }
    
    return maior;
}

void imprimirConjunto(Conjunto* conj) {
    if (conj == NULL || conjuntoVazio(conj)) {
        printf("-");
        return;
    }

    // Cria uma cópia dos elementos para ordenar
    int elementos[MAX_ELEMENTOS];
    for (int i = 0; i < conj->tamanho; i++) {
        elementos[i] = conj->elementos[i];
    }
    
    // Bubble sort
    for (int i = 0; i < conj->tamanho - 1; i++) {
        for (int j = 0; j < conj->tamanho - 1 - i; j++) {
            if (elementos[j] > elementos[j + 1]) {
                int temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;
            }
        }
    }

    // Imprime
    for (int i = 0; i < conj->tamanho; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", conj->elementos[i]);
    }
}

void destruirConjunto(Conjunto* conj) {
    if (conj != NULL) {
        free(conj);
    }
}


