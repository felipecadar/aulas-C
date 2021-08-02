# Funçoes E Recursividade

- Tipo da função 
- Nome
- Argumentos
- Corpo
- Escopo
- Retorno

```cpp
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
```


```cpp
double fatorial(int n){
  double vfat;
  
  // Condição de parada
  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else{
    //Chamada recursiva
    vfat = n * fatorial(n - 1);
    return (vfat);
  }
}
```