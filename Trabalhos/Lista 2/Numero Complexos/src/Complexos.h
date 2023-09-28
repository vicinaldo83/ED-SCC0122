/*Complexos.c*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float imaginario;
} Comp;

// Criar número Complexo
Comp CreateCompinary(float real, float Comp);

// Operaçãoes
Comp Sum(Comp a, Comp b) {
    Comp result;
    
    result.real = a.real  + b.real;
    result.imaginario = a.imaginario + b.imaginario;

    return result;
};
Comp Sub(Comp a, Comp b) {
    Comp result;
    
    result.real = a.real  - b.real;
    result.imaginario = a.imaginario - b.imaginario;

    return result;
};
Comp Mult(Comp a, Comp b) {
    Comp result;
    
    result.real = a.real * b.real;
    result.imaginario = a.imaginario * b.imaginario;

    return result;
};
Comp Div(Comp a, Comp b) {
    Comp result;
    
    result.real = a.real / b.real;
    result.imaginario = a.imaginario / b.imaginario;

    return result;
};


// Pegar valores especificos
Comp Abs(Comp number) {
    //Note que esse metodo e um overload
    Comp result;

    result.real = fabs(number.real);
    result.imaginario = fabs(number.imaginario);

    return result;
};
float GetRealPart(Comp number) {
    return number.real;
};
float GetImagPart(Comp number) {
    return number.imaginario;
};
void PrintComplex(Comp number) {
    if(number.imaginario == 0){
        printf("%.2F", number.real);
    }
    else if (number.imaginario >= 0) {
        (number.imaginario == 1.0)?
        printf("%.2F + i", number.real):
        printf("%.2F + %.2f i", number.real, number.imaginario);
    }
    else {
        (number.imaginario == -1.0)?
        printf("%.2f - i", number.real) :
        printf("%.2f - %.2f i", number.real, fabs(number.imaginario));

        
    }
};