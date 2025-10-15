#include <stdio.h>

int main() {
    float max, med, min, a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c){
        max = a;
        if ( b <= c){
            min = b;
            med = c;
        } 
        else if ( c <= b){
            min = c;
            med = b;
        }
    }

    else if (b >= a && b >= c){
        max = b;
        if ( c <= a) {
            min = c;
            med = a;
        }
        else if ( c >= a){
            med = c;
            min = a;
        }
    }

    else if (c >= a && c >= b){
        max = c;
        if ( b <= a ) {
            min = b;
            med = a;
        }
        else if ( b >= a){
            med = b;
            min = a;
        }
    }

    a = max; 
    b = med; 
    c = min;

    if (a >= b + c){
      printf("NAO FORMA TRIANGULO\n");
      return 0;
    }
    if ( a * a == b * b + c * c) {
      printf("TRIANGULO RETANGULO\n");
    }
    if ( a * a > b * b + c * c) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if ( a * a < b * b + c * c) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if ( a == b && b == c){
      printf("TRIANGULO EQUILATERO\n");
    }
    if ( a == b && b != c || c == b && b != a || a == c && c != b ) {
      printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}