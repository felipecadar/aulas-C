# Ponterios:

- O ponteiro é uma variável que, em vez de guardar o dado, guarda o endereço de memória
- Ponteiros podem ter tipos diferentes, para e referir a diferentes variáveis. Ex `int`, `float`. Isso acontece porque os tipos requerem diferentes quantidades de bits.
- Dado uma variável comum acessamos o endereço com o operador `&`.
- Dado um endereço, acessavos o valor que ele aponta com o operador `*`.


```cpp
int main() {

    int a = 15;
    int *b;
    *b = 20;

    printf("Valor a: %p\n",a);
    printf("Endereco b: %p\n",(void*)&a);
    printf("\n");
    printf("Valor b: %p\n",*b);
    printf("Endereco b: %p\n",(void*)b);

    return 0;
}
```

# Passagem de parâmetros





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

    printf("Valor: %d\n",valor);
    printf("Endereco: %p\n",(void*)&valor);

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
