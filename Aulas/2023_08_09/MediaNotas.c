/*MediaNotas.c*/

#include <stdio.h>

float media(float notas[], int n) {
    float sum;

    int i;
    for (i = 0; i < n; i++)
    {
        sum += notas[i];
    }
    
    return sum / n;
}

int main() {
    int n, i;
    printf("Quantos alunos tem na sala:");
    scanf("%d", &n);
    
    float notas[n];
    for (i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    printf("A media das notas foi: %.2f", media(notas, n));
    return 0;
}