#include <stdio.h>

int main(){
  double salario, imposto = 0;

  scanf("%lf\n", &salario);

  // Se o salário for menor ou igual a 2000, é isento
  if ( salario <= 2000){
    printf("Isento\n");
    return 0;
  } // Se for maior, o salário é diminuido 2000 ( a isenção )
  else if ( salario > 2000.00){
    salario -= 2000.00; // Se o que sobrou é menor que 1000, calcula o imposto de 8% do que sobrou
    if ( salario <= 1000){
      imposto += salario * (8.0/100);
    } else if ( salario > 1000){ // se o salario que sobrou for maior que mil 
      imposto += 1000 * (8.0/100); // calcula 8% dos 1000
      salario -= 1000; // subtrai 1000 ( que já teve imposto)
      if (salario <= 1500){ // se o salario que sobrou for menor que 1500
        imposto += salario * (18.0 / 100); // soma o imposto de 18% do salario restante
      } else if ( salario > 1500){ // se o que sobrou for maior que 1500
        imposto += 1500 * (18.0 / 100); // calcula o imposto do 1500
        salario -= 1500; // subtrai o 1500 que já foi calculada o imposto
        imposto += salario * (28.0/100); // calcula o imposto de 28% do que restou
      }
    
    }
  }

  printf("R$ %.2lf\n", imposto);

  return 0;
}