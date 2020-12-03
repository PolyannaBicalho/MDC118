/*Escrever um programa em C que imprima os meses de um ano definidos por uma enumeração.*/

#include <stdio.h>
#include <string.h>

// começa de 1
enum meses {janeiro=1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro}mes;
 
 int main(){
     int mes;
     int meses;

    printf("Informe o numero do mes: ");
        scanf("%d\n", &meses);

    for(mes=janeiro; mes<=dezembro ;mes++)

        printf("%d\n", mes);
    
               
    return 0;
 }