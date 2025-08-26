#include <stdio.h>

void imprimirVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int calcularSoma(int vet[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    return soma;
}

double calcularMedia(int vet[], int tamanho) {
    if (tamanho == 0) {
        return 0.0;
    }
    return (double)calcularSoma(vet, tamanho) / tamanho;
}
