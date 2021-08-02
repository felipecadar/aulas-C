# Passagem de parâmetros


```cpp
int main() {

    int a = 15;

    

    printf("Valor: %p\n",a);
    printf("Endereco: %p\n",(void*)&a);

    return 0;
}
```




## Passagem por valor e por cópia

```cpp
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

    printf("[main] Antes de f1 valor = %d\n", valor);
    f1(valor);
    printf("[main] Depois de f1 valor = %d\n", valor);

    valor = 15;

    printf("[main] Antes de f2 valor = %d\n", valor);
    f2(&valor);
    printf("[main] Depois de f2 valor = %d\n", valor);


    return 0;
}
```
