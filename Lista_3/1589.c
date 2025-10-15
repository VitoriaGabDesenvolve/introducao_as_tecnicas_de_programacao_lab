#include <stdio.h>

int main(){
  int linhas_recebidas, raio_1, raio_2, raio_conduite;

  scanf("%i", &linhas_recebidas);

  for(int i = 0; i < linhas_recebidas; i++){
    scanf("%i %i", &raio_1, &raio_2);

    raio_conduite = raio_1 + raio_2;

    printf("%i\n", raio_conduite);
  }
}