#include <stdio.h>

int main(){
  int numero, qtd_pares = 0;

  for(int x = 0; x < 5; x++){
    scanf("%i\n", &numero);

    if(numero%2 == 0){
      qtd_pares++;
    }
  }

  printf("%i valores pares\n", qtd_pares);
  return 0;
}