#include <stdio.h>
#define peso_1 3.5
#define peso_2 7.5

int main() {
    float nota_1, nota_2, media = 0;

    scanf("%f\n", &nota_1);
    scanf("%f\n", &nota_2);

    media = ((nota_1 * peso_1) + (nota_2 * peso_2))/ (peso_1 + peso_2);

    printf("MEDIA = %.5f\n", media);

    return 0;
}