#include <stdio.h>

/*Declaração de variáveis globais, pos está fora
Mais de uma linha
*/

int numero=100;
char ch='A'; //-128 a 127
unsigned char var=10; //0 a 555
const int SEXO_MASCULINO=1; 

int main() {

        printf("%d", numero);
        printf("%c\n",ch);

        return 0;
}