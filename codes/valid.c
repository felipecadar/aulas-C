// Faça um programa que peça uma nota
// , entre zero e dez. Mostre uma mensagem 
// caso o valor seja inválido e continue
//  pedindo até que o usuário informe um valor válido.

#include <stdio.h>

int main(){
    
    int nota;
    do{
        printf("Escreva uma nota de 0 a 10:");
        scanf("%i", &nota);

        if(nota < 0 || nota > 10){
            printf("Valor inválido, tente novamente.\n\n");
        }

    }while(nota < 0 || nota > 10);

    return 0;
}