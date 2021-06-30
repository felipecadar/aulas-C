#include <stdio.h>

int soma(int a, int b){
    int c = 0;

    c = a + b;

    return c;
}

int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = soma(number1, number2);      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}