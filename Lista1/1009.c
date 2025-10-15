#include <stdio.h>

int main(){
    double salario, vendas, bonus, total;
    char nome[20];

    scanf("%s\n", &nome);
    scanf("%lf\n", &salario);
    scanf("%lf\n", &vendas);

    bonus = vendas * 15/100;
    total = salario + vendas * 15/100;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}