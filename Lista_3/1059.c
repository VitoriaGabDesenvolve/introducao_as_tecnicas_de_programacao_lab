#include <stdio.h>

int main(){
  for (int x = 1; x <= 100; x++){
    if (x%2 == 0){
      printf("%i\n", x);
    }
  }

  return 0;
}