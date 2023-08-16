/*CalcularFator.c*/

#include <stdio.h>

float Fator(float n) {
    float out = 1;

    int i;
    for (i = 2; i < n+1; i++) {
        out = out * i;
    }

    return out;
}

int main() {
    float input;
    printf("Digite um numero: ");
    scanf("%f", &input);

    printf("Resultado da fatoracao: %0.f", Fator(input));

    return 0;
}