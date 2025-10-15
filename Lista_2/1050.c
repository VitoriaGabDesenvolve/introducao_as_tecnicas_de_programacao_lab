#include <stdio.h>

typedef struct
{
    int ddd;
    char nome[50];
} Estados;

int main(){
    Estados lista[] = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    int DDD, tamanho, estado_cadastrado = 0;

    scanf("%i\n", &DDD);

    tamanho = sizeof(lista) / sizeof(lista[0]);

    for (int x = 0; x < tamanho; x++){
        if (lista[x].ddd == DDD){
            printf("%s\n", lista[x].nome);
            estado_cadastrado = 1;
            break;
        }
    }

    if (!estado_cadastrado){
        printf("DDD nao cadastrado\n");
    }

    return 0;
}