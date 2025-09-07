#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main() {
    int tamA, tamB;
    scanf("%d %d", &tamA, &tamB);
    
    Conjunto* conjA = criarConjunto();
    Conjunto* conjB = criarConjunto();
    
    // Lê elementos do conjunto A
    for (int i = 0; i < tamA; i++) {
        int elemento;
        scanf("%d", &elemento);
        inserir(conjA, elemento);
    }
    
    // Lê elementos do conjunto B
    for (int i = 0; i < tamB; i++) {
        int elemento;
        scanf("%d", &elemento);
        inserir(conjB, elemento);
    }
    
    // Calcula união e interseção
    Conjunto* uniaoAB = uniao(conjA, conjB);
    Conjunto* interseccaoAB = interseccao(conjA, conjB);
    
    // Imprime união
    imprimirConjunto(uniaoAB);
    printf("\n");
    
    // Imprime interseção
    imprimirConjunto(interseccaoAB);
    printf("\n");
    
    // Libera memória
    destruirConjunto(conjA);
    destruirConjunto(conjB);
    destruirConjunto(uniaoAB);
    destruirConjunto(interseccaoAB);
    
    return 0;
}
