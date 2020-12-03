/*Escrever um programa em C que leia uma tecla e determine 
se ela é uma letra, um dígito ou um caractere especial.*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char ch; 
    
    printf("Digite um caracter: ");

     ch=getchar();

    if("%c\n", isalpha(ch));
    scanf("%c\n", &ch);
    printf("é letra\n");

    if("%c\n", isdigit(ch));
    scanf("%c\n", &ch);
    printf("é digito\n");

    if("%c\n", ispunct(ch));
    scanf("%c\n", &ch);
    printf("é caracter especial\n");

    return 0;

}














/*#include <stdio.h>
#include <math.h>

int main()
{

int numero, numero1, numero2;
char caractere;



printf("Digite um número: ");
    scanf("%d", &numero1);
printf("Digite outro número: ");
    scanf("%d", &numero2);

    printf("\n");
    printf("O menor numero eh: ");
  

if(numero1<numero2)
{
    printf("%d\n", numero1);
}

else(numero1>numero2);
{
    printf("%d\n", numero2);
}
   
    return 0;
}*/