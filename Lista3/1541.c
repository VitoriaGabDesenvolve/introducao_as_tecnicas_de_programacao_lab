#include <stdio.h>
#include <math.h>

int main(){
    int A, B, C, medida_lado;

    while(1){

        scanf("%i", &A);

        if (A == 0){
            break;
        }

        scanf("%i %i", &B, &C);

        medida_lado = sqrt(A * B * 100 / C);

        printf("%i\n", medida_lado);
    };

    return 0;
}