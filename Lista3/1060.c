#include <stdio.h>

int main(){
  float valor;
  int qtd_positivos = 0;

  for (int x = 0; x < 6; x ++){
    scanf("%f\n", &valor);;
    if (valor > 0){
      qtd_positivos++;
    } else {
      continue;
    }
  }

  printf("%i valores positivos\n", qtd_positivos);

  return 0;
}