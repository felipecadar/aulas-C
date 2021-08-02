#include <stdio.h>
#include <math.h> // gcc prog.c -lm

// Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
// O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
// programa.

double dobro(double n){
    double n2 = n*2;
    return n2;
}

int main() {    

    double number1, number2, number3;
    scanf("%lf", &number1);
    scanf("%lf", &number2);
    scanf("%lf", &number3);

    double dobro1 = dobro(number1);
    double dobro2 = dobro(number2);
    double dobro3 = dobro(number3);

    printf("%lf %lf %lf\n", dobro1,dobro2, dobro3);

    return 0;
}