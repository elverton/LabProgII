#include <stdio.h>
#include "Vetores.h"

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    
    printf("Array de numeros: ");
    imprimirArray(numeros, tamanho);

    int soma = calcularSoma(numeros, tamanho);
    printf("Soma dos elementos: %d\n", soma);

    double media = calcularMedia(numeros, tamanho);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}
