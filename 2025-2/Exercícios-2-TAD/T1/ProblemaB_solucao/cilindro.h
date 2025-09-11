#ifndef CILINDRO_H
#define CILINDRO_H

typedef struct {
    double raio;
    double altura;
} Cilindro;

// Criação
Cilindro* criarCilindro(double raio, double altura);

// Consultas
double obterRaio(Cilindro* cil);
double obterAltura(Cilindro* cil);

// Cálculos
double calcularArea(Cilindro* cil);
double calcularVolume(Cilindro* cil);

// Liberação de memória
void destruirCilindro(Cilindro* cil);

#endif
