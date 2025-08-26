/* main.c */
#include <stdio.h>
#include "utils.h"

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (eh_primo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
