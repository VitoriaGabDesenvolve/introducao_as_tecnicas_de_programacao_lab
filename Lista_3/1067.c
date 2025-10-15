#include <stdio.h>

int main(){
  int x;

  scanf("%i\n", &x);

  for (int i = 1; i <= x; i++){
    if (i%2 != 0){
      printf("%i\n", i);
    }
  }

  return 0;
}