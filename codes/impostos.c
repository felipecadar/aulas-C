#include <stdio.h>
int main() {    

    int valor_por_hora;
    int horas_por_mes;

    printf("Valor por hora: ");
    scanf("%d", &valor_por_hora);
    printf("Horas por mês: ");
    scanf("%d", &horas_por_mes);

    int total = valor_por_hora * horas_por_mes;
    int IR = 0.11 * total;
    int INSS = 0.08 * total;
    int SIN = 0.05 * total;
    int liq = total - IR - INSS - SIN;

    printf("Salário Bruto: %d\n", total);
    printf("IR: %d\n", IR);
    printf("INSS: %d\n", INSS);
    printf("Sindicato: %d\n", SIN);
    printf("Salário Liquido: %d\n", liq);
}