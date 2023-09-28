/*Program.c*/

#include <stdio.h>
#include "src\Complexos.h"

// Funções para manipulação de interface via terminal

Comp GetCompInput();

int GetOperationType() {
    int result;

    printf("Qual tipo de operacao?\n  1 - Soma\n  2 - Subtracao\n  3 - Multiplicao\n  4 - Divisao\n\r");
    scanf("%d", &result);
    getchar();

    return (result < 1 || result > 4 )? -1 : result;
}

Comp OperationHandler(Comp a, Comp b, int *erro) {
    int type = GetOperationType();
    Comp out;

    if (type == -1) {
        printf("Operacao invalida!");
        *erro = 1;
        return out;
    }
    
    else{
        switch (type) {
            case 1:
                out = Sum(a, b);
                break;
            case 2:
                out = Sub(a, b);
                break;
            case 3:
                out = Mult(a, b);
                break;
            case 4:
                if(b.real != 0 & b.imaginario != 0) {
                    out = Div(a, b);
                }
                else {
                    *erro = 1;
                }
                break;
        }
        return out;
    }
}

// Main loop
int main() {
    Comp um  = {
        .real = 15,
        .imaginario = -10,
    };

    Comp dois  = {
        .real = -0,
        .imaginario = 2,
    };

    int erro = 0;
    Comp out = OperationHandler(um, dois, &erro);
    if (!erro) {
        PrintComplex(out);
    }
    return 0;
}