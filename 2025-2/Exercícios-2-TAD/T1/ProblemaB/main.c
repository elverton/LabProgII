#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main() {
    double raio, altura;
    
    // Lê raio e altura
    scanf("%lf %lf", &raio, &altura);
    
    // Cria cilindro
    Cilindro* cil = criarCilindro(raio, altura);
    
    if (cil == NULL) {
        printf("Erro: valores inválidos\n");
        return 1;
    }
    
    // Calcula e imprime resultados
    printf("%.2f\n", obterRaio(cil));
    printf("%.2f\n", obterAltura(cil));
    printf("%.2f\n", calcularArea(cil));
    printf("%.2f\n", calcularVolume(cil));
    
    // Libera memória
    destruirCilindro(cil);
    
    return 0;
}
