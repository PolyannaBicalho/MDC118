#include <stdio.h>

/*Escrever um programa em C que associe um valor quantitativo a uma nota qualitativa 
conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom e 5 = Ótimo.*/

int main(){
    
     int nota = 1.0;


    if (nota =1)
    {
        printf("%s\n", "ruim");
    }

    if (nota =2)
    {     
       printf("%s\n", "insuficiente");
    }

    if (nota =3)
    {     
       printf("%s\n", "suficiente");
    }

    if (nota =4)
    {
        printf("%s\n", "bom");
    }

    if (nota =5)
    {
        printf("%s\n", "otimo");
    }
    
    return 0;
}