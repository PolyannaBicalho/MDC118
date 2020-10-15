#include <stdio.h>

/*Escrever um programa em C que calcule o perímetro de uma circunferência (p = 2 x pi x raio,
considerendo pi = 3.1416).*/

int main() {

    double pi = 3.1416;
    int r = 1; 
    int p = (2*pi)*r;

    /* perimetro */
    p = (2*pi) * r;
    printf("%i\n", p);


    return 0;
}

