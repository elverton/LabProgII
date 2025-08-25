#include <stdio.h>
#include "ContaBancaria.h"

int main() {
    ContaBancaria minhaConta;
    int numero;
    double valor;
    char titular[50];

    // Testando a criação da conta
    scanf("%d", &numero);
    scanf("%s", titular);
    criarConta(&minhaConta, numero, titular);
    imprimirInfo(&minhaConta);

    // Testando o depósito
    scanf("%lf", &valor);
    depositar(&minhaConta, valor);
    printf("Saldo após depósito: %.2f\n", consultarSaldo(&minhaConta));

    // Testando o saque
    scanf("%lf", &valor);
    sacar(&minhaConta, valor);
    printf("Saldo após saque: %.2f\n", consultarSaldo(&minhaConta));

    imprimirInfo(&minhaConta);

    return 0;
}
