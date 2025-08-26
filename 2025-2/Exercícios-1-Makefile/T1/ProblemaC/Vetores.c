#include <stdio.h>

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int calcularSoma(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

double calcularMedia(int arr[], int tamanho) {
    if (tamanho == 0) {
        return 0.0;
    }
    return (double)calcularSoma(arr, tamanho) / tamanho;
}
