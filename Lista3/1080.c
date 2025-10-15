#include <stdio.h> 

int main() {

    int numero, maior_numero = 0, posicao_maior_numero;

    for(int i = 1; i <= 100; i++) {
        scanf("%i", &numero);
        if (numero > maior_numero){
            maior_numero = numero;
            posicao_maior_numero = i;
        }
    }

    printf("%i\n", maior_numero);
    printf("%i\n", posicao_maior_numero);
    return 0;
}