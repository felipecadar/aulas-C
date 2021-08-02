// Faça um programa que calcule o
// fatorial de um número inteiro 
// fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120

#include <stdio.h>

int main(){

    int n;
    
    do{
        printf("Insira um inteiro: ");
        scanf("%i", &n);
    }while(n < 0);

    int iter;
    int fat = 1;

    for(iter = n; iter >= 1; iter = iter - 1){
        fat = fat * iter;
    }

    printf("Fat de %i: %i\n", n, fat);

    return 0;
}