#include <stdio.h>

int main()
{
    /* sintaxe dowhile */
    int contador = 0;
    do
    {
        contador++;
        if (contador < 5)
            continue;
        printf("%d ", contador);
    } while (contador < 10);
    printf("\n");

    char opcao;
    do
    {
        opcao = getchar();
        printf("%c", opcao);
    } while (opcao != '0');

    /* dowhile aninhado */
    int i = 0;
    do
    {
        int j = 0;
        do
        {
            printf("%d,%d ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    printf("\n");

    /* dowhile infinito */
    do
    {
        printf("Ao infinito e alem!\n");
    } while (1);
    printf("\n");

    return 0;
}