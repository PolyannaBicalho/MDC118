#include <stdio.h>

/*Escrever um programa em C que calcule o fatorial de um número inteiro.*/


int main() {
    
int fat;
int n=5;


for(fat=1;n>1;n=n-1)
fat=fat*n;

printf("\nFatorial: %d", fat);

printf("\n");

return 0;
}