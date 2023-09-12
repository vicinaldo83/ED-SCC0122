/*Exercico3.c*/
/*
? author: Higor Matos Pereira da Silva
? email: higor.silva83@usp.br
? github: vicinaldo83

Fiz no VSCode e compilei com o tdm-gcc

float media(float notas[], int n)
    notas[] = Array de notas de cada aluno
    n       = Numero de alunos

Calcula e retorna a médias dos valores passados

void ler_notas(float out[], int n)
    out[] = Array em que será salva a saída
    n     = Numero de alunos  

Faz um loop para que as notas possam ser passadas pelo terminal
e salvas no vetor.

? Inputs testados (Numero de alunos e notas, respectivamente)

3
5, 6, 7

10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10

5
5.6, 3, 3.14, 9.1, 7
*/

#include <stdio.h>


//* Funções
float media(float notas[], int n) {
    float sum;

    // Loop entre todas as notas
    int i;
    for (i = 0; i < n; i++)
    {
        // Soma todas as notas na var sum
        sum += notas[i];
    }
    
    // Tira e media e retorna
    return sum / n;
}

void ler_notas(float out[], int n)
{
    // Lê cada nota individual no terminal
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &out[i]);
    }

    // Imprime a media das notas
    printf("%d notas salvas com sucesso. Media das notas: %.2f", n, media(out, n));
    return;
}


//* Main Loop
int main() {
    int n;
    printf("Quantos alunos tem na sala:");
    scanf("%d", &n);
    
    float notas[n];
    ler_notas(notas, n);

    getchar();
    return 0;
}