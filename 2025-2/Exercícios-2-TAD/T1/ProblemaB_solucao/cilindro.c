#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

#define PI 3.14159265358979323846

Cilindro* criarCilindro(double raio, double altura){
    Cilindro * cil = (Cilindro*) malloc (sizeof(Cilindro));

    if(cil == NULL) return NULL;

    cil->raio = raio;
    cil->altura = altura;
    return cil;
}

double obterRaio(Cilindro* cil){
    if(cil == NULL) return 0.0;

    return cil->raio;
}

double obterAltura(Cilindro* cil){
    if(cil == NULL) return 0.0;

    return cil->altura;
}

double calcularArea(Cilindro* cil){
    if(cil == NULL) return 0.0;

    double area_l = 2 * PI * (cil->raio) * cil->altura;
    double area_c = PI * (cil->raio * cil->raio);
    return area_c + area_c + area_l;
}

double calcularVolume(Cilindro* cil){
    if(cil == NULL) return 0.0;

    double area_c = PI * (cil->raio * cil->raio);
    return cil->altura * area_c;
}


void destruirCilindro(Cilindro* cil){
    if (cil != NULL) {
        free(cil);
    }
}

