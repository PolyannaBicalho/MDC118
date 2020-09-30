#include <stdio.h>

int main()
{
    /* sintaxe while */
    int contador = 0;
    while (contador < 10)
    {
        printf("%d, ", contador);
        contador++;
    }
    printf("\n");

    char opcao = getchar(); // ler uma tecla
    while (opcao != '0')
    {
        printf("%c", opcao);
        opcao = getchar();
    }

    /* while aninhado */
    int i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            printf("%d,%d ", i, j);
            j++;
        }
        i++;
    }


    return 0;
}