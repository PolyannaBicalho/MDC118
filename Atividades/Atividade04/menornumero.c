//Escrever um programa em C que leia dois números inteiros e determine qual é o menor.

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

int numero1, numero2;


printf("Digite um número: ");
    scanf("%d", &numero1);
printf("Digite outro número: ");
    scanf("%d", &numero2);

    printf("\n");
    printf("O menor numero é: ");
  

if(numero1<numero2)
{
    printf("%d\n", numero1);
}

if(numero1>numero2)
{
    printf("%d\n", numero2);
}

    return 0;
}