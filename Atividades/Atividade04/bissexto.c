/*Escrever um programa em C que leia um ano e verifique se ele é 
bissexto (é multiplo de 4 e não é multiplo de 100, ou é múltiplo de 400). */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguse");

int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);


if("%i\n", ano %4==0)

    printf("Esse ano é bissexto\n");

else
{
    printf("Esse ano não é bissexto\n");
}
    return 0;
}
