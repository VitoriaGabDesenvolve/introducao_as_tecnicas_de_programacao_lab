#include <stdio.h>

int main(){
    int A, B, C, D, DIFERENCIA = 0;

    scanf("%i\n", &A);
    scanf("%i\n", &B);
    scanf("%i\n", &C);
    scanf("%i\n", &D);
    DIFERENCIA = A * B - C * D;

    printf("DIFERENCA = %i\n", DIFERENCIA);

    return 0;
}