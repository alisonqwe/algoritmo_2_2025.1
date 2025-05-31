#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 0, y = 0;
    int contador = 1;
    printf("Digite o tamanho da seguencia de 1 ate y:\n");
    scanf("%d", &y);
    printf("Digite o tamanho da linha que vale a x:\n");
    scanf("%d", &x);

    for (int i = 0; i < y; i++)
    {

        printf(" %d ", contador);
        if (contador % x == 0)
        {
            printf("\n");
        }

        contador++;
    }

    return 0;
}