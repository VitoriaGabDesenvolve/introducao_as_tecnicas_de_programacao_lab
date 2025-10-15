#include <stdio.h>

int main(){
    float N1, N2, N3, N4, NF, MEDIA;

    scanf("%f %f %f %f\n", &N1, &N2, &N3, &N4);

    MEDIA = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / 10;
    printf("Media: %.1f\n", MEDIA);

    if (MEDIA >= 7.0){
        printf("Aluno aprovado.\n");
    }
    if (5.0 <= MEDIA && MEDIA <= 6.0){
        printf("Aluno em exame.\n");
        scanf("%f\n", &NF);
        printf("Nota do exame: %.1f\n", NF);
        MEDIA = (MEDIA + NF) / 2;

        if (MEDIA >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", MEDIA);
        } 
        if (MEDIA < 5.0) {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", MEDIA);
        }
    } 
    if (MEDIA < 5.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}