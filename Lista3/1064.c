#include <stdio.h>

int main() {
    float valor_digitado, soma_positivos = 0.0;
    int qtd_positivos = 0;

    for( int i = 0; i < 6; i++){
        scanf("%f", &valor_digitado);

        if ( valor_digitado > 0){
            soma_positivos += valor_digitado;
            qtd_positivos++;
        }
    }

    float media = soma_positivos / qtd_positivos;

    printf("%i valores positivos\n", qtd_positivos);
    printf("%.1f\n", media);
    return 0;
    
}