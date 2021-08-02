#include <stdio.h>
#include <stdlib.h>

// - salários até R$ 280,00 (incluindo) : aumento de 20%
// - salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
// - salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
// - salários de R$ 1500,00 em diante : aumento de 5% 

int main() {

    double base;
    printf("Salario: ");
    scanf("%lf", &base);

    double percent;
    if (base <= 280){
        // 20%
        percent = 0.2;
    }
    if (base > 280 && base <= 700){
        // 15%
        percent = 0.15;
    }
    if (base > 700 && base <= 1500){
        // 10%
        percent = 0.1;
    }
    if (base > 1500){
        // 5%
        percent = 0.5;
    }

    // - o salário antes do reajuste;
    // - o percentual de aumento aplicado;
    // - o valor do aumento;
    // - o novo salário, após o aumento.

    double raise;
    raise = percent * base;

    double new;
    new = raise + base;


    printf("Salário Original: %lf\n", base);
    printf("Percentual: %lf \% \n", percent*100);
    printf("Aumento: %lf\n", raise);
    printf("Novo Salário: %lf\n", new);


}