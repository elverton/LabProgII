#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

// Estrutura para encapsular os detalhes de uma conta bancária
typedef struct {
    int numero_da_conta;
    double saldo;
    char titular[50];
} ContaBancaria;

// Protótipos das funções
void criarConta(ContaBancaria* c, int numero, char *titular);
void depositar(ContaBancaria *c, double valor);
void sacar(ContaBancaria *c, double valor);
double consultarSaldo(ContaBancaria *c);
void imprimirInfo(ContaBancaria *c);

#endif // CONTABANCARIA_H
