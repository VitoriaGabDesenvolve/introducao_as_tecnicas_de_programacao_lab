#include <stdio.h>

int main() {
    int numero_1, numero_2, soma = 0;

    scanf("%i\n%i", &numero_1, &numero_2);

    // Garantindo que o número 1 sempre seja o maior
    if (numero_1 < numero_2){
        int temp = numero_1;
        numero_1 = numero_2;
        numero_2 = temp;
    }

    for(int i = numero_2 + 1; i < numero_1; i++){
        if (i%2 != 0){
            soma += i;
        }
    }

    printf("%i\n", soma);

    return 0;
}