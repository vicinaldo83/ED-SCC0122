/*Exercicio1.c*/
/*
? author: Higor Matos Pereira da Silva
? email: higor.silva83@usp.br
? github: vicinaldo83


? Inputs testados (primeira, segunda entrada e separador, respectivamente)


Pineumontramicroscopio
Cilindrocavulcanocaniotico
_ 
*/


#include <stdio.h>
#include <stdlib.h>

//* Funcoes

short multiplicar(int a_m, int a_n, float A[a_m][a_n], int b_m, int b_n, float B[b_m][b_n], float out[a_m][b_n]) {
    if (a_n != b_m) {
        printf("Nao e possivel multiplicar as duas matrizes");
        return 0;
    }

    int m, n;
    for (m = 0; m < a_m; m++) {
        for (n = 0; n < b_n; n++){
            out = 
        }
    }
    
    printf("ha");
    return 1;
}

float sum(float arr[]) {
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum;

    // Loop entre todas as notas
    int i;
    for (i = 0; i < n; i++)
    {
        // Soma todas as notas na var sum
        sum += arr[i];
    }

    return sum;
}


//* Main loop
int main(void)
{
    // Matrizes
    float a[2][2] = {{2.5, 3}, {5, 4.0}},
        b[2][2] = {{2.5, 3}, {5, 4.0}},
        result[2][2];

    if(!multiplicar(2, 2, a, 2, 2, b, result)) {
        printf("Nao e possivel multiplicar as duas matrizes");
    }

    return 0;
}