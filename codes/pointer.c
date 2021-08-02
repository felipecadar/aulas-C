#include <stdio.h>
#include <stdlib.h>

void f1(int x){
    x = 10;
    printf("[f1] x = %d\n", x);
    return;
}

void f2(int *x){
    *x = 10;
    printf("[f2] x = %d\n", *x);
    return;
}

int main() {

    int valor;
    
    valor = 15;

    printf("Valor: %d\n",valor);
    printf("Endereco: %p\n",(void*)&valor);

    printf("\n\n");

    printf("[main] Antes de f1 valor = %d\n", valor);
    f1(valor);
    printf("[main] Depois de f1 valor = %d\n", valor);

    valor = 15;

    printf("[main] Antes de f2 valor = %d\n", valor);
    f2(&valor);
    printf("[main] Depois de f2 valor = %d\n", valor);


    return 0;
}