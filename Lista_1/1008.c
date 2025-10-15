#include <stdio.h>

int main(){
    int numero, horas = 0;
    float valor_p_hora, salario = 0.0;

    scanf("%i\n", &numero);
    scanf("%i\n", &horas);
    scanf("%f\n", &valor_p_hora);

    salario = horas * valor_p_hora;

    printf("NUMBER = %i\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}