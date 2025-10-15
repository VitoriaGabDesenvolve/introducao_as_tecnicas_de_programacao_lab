#include <stdio.h>

int main() {
    int max, med, min, a, b, c;

    scanf("%i %i %i\n", &a, &b, &c);

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

    printf("%i\n%i\n%i\n", min, med, max);

    printf("\n%i\n%i\n%i\n", a, b, c);

    return 0;
}