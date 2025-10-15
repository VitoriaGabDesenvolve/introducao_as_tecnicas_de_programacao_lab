#include <stdio.h>

int main(){
    int codigo_pecas, numero_pecas;
    float valor_peca, valor_total = 0;

    for (int x = 0; x<2; x++){
        scanf("%i %i %f\n", &codigo_pecas, &numero_pecas, &valor_peca);

        valor_total += numero_pecas * valor_peca;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}