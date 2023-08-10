/*AreaQuadrado.c*/

//Calculo da area de um quadrado
#include <stdio.h>

int main(void) {

    float l;
    
    printf("Qual o tamanho do lado do quadrado? ");
    scanf("%f", &l);

    printf("A area do quadrado e: %.2f", l * l);
    return 0;
}