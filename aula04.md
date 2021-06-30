# Estruturas de dados Repetitivas


- `for`
- `while`
- `do while`


## Soma de números positivos
```cpp
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
```

```cpp
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}
```

## Soma de números positivos com verificação
```cpp
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
```

## Fatorial
```cpp
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1; // repare que usamos unsigned long long
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
```
# Tabela de multiplicação
```cpp
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
```

## Fibonacci
```cpp
#include <stdio.h>
int main() {

    /*
    Seu código aqui
    */

    return 0;
}
```



## Maior divisor comum
```cpp
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
```

## Menor Múltiplo Comum
```cpp
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        max = max + 1;
    }
    return 0;
}
```

## Número de dígitos em um número
```cpp
#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
 
    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("Number of digits: %d", count);
}
```

