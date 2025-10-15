#include <stdio.h>

int main(){
    int qtd_casos, qtd_cartas_1, qtd_cartas_2, resultado;

    scanf("%i", &qtd_casos);

    for(int i = 0; i < qtd_casos; i++){
        scanf("%i %i", &qtd_cartas_1, &qtd_cartas_2);

        while(qtd_cartas_2 != 0){
            int temp = qtd_cartas_2;
            qtd_cartas_2 = qtd_cartas_1 % qtd_cartas_2;
            qtd_cartas_1 = temp;
            resultado = temp;
        }

        printf("%i\n", resultado);

    }
    return 0;
}