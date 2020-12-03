// Escrever um programa em C que leia 10 valores e imprima o maior e o menor valores lidos.

#include<stdio.h>
#include<stdlib.h>

int main()
{

int numero;
int valor1;
int valor2;
int i;

 printf("\nDigite um numero: ");
 scanf("%i", &numero);

 valor1=numero;
 valor2=numero;

 for(i=0; i<9; i++)
 {
 printf("\nDigite mais um numero: ");
 scanf("%i", &numero);

 if(numero>valor2)
 valor2=numero;
 
 if(numero<valor1)
 valor1=numero;
 }


 printf("\nO menor valor é: %d", valor1);
 printf("\nO maior valor é: %d", valor2);
 
 printf("\n");

 return 0;
}
