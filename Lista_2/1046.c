#include <stdio.h>

int main(){
    int H_INICIAL, H_FINAL, TEMPO_TOTAL;

    scanf("%i %i\n", &H_INICIAL, &H_FINAL);

    TEMPO_TOTAL =  H_FINAL - H_INICIAL;

    if (TEMPO_TOTAL == 0) {
        TEMPO_TOTAL = 24;
    } else if (TEMPO_TOTAL < 0){
        TEMPO_TOTAL = (H_FINAL + 24) - H_INICIAL;
    }

    printf("O JOGO DUROU %i HORA(S)\n", TEMPO_TOTAL);

    return 0;
}