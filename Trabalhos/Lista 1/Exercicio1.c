/*Exercicio1.c*/
/* 

? author: Higor Matos Pereira da Silva
? email: higor.silva83@usp.br
? github: vicinaldo83

Fiz no VSCode e compilei com o tdm-gcc

void concaternar(char in1[], char in2[], char mid, char out[])
    in1[] = primeira string de entrada
    in2[] = segunda string de entrada
    mid   = Caracter de separação
    out[] = Array em que será salva a saída

Funcao que permite receber duas cadeias de texto e um caracter de
concatenação para concatenar as duas entradas, retorna a o valor
concatenado

Enchi de getchar() pq tava dando problema na hora de pegar o caracter único


? Inputs testados (primeira, segunda entrada e separador, respectivamente)
Ola
Mundo
-

Macarronada
Italiana
 (Espaço em branco)

Aluno
08.21
:


Pineumontramicroscopio
Cilindrocavulcanocaniotico
_ 
*/


#include <stdio.h>
#include <stdlib.h>

//* Funcoes
void concaternar(char in1[], char in2[], char mid, char out[])
{
    int i, j;

    // Faz o loop para adicionar os valores do primeiro array
    for (i = 0; (out[i] = in1[i]) != '\0'; i++);

    // Adiciona o caracter de separação no último valor
    out[i++] = mid;

    // Faz o loop para adicionar os valores do segundo array
    for (j = 0; (out[i] = in2[j]) != '\0'; i++, j++);
    out[i] = '\0';

    return;
}

//* Main loop
int main(void)
{
    // input dos dados
    char input_1[40],
        input_2[40],
        split_char;

    printf("Digite a primeira entrada: ");
    scanf("%s", &input_1);
    getchar();

    printf("Digite a segunda entrada: ");
    scanf("%s", &input_2);
    getchar();

    printf("Digite o separador: ");
    scanf("%c", &split_char);
    getchar();

    // Array em que será salvo o resultado
    char out[81];
    concaternar(input_1, input_2, split_char, out);

    // Mostrar resultado
    printf("Resultado: %s \n", out);
    getchar();

    return 0;
}