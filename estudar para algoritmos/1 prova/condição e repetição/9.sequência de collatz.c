#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Digite o numero inteiro para fazer a sequência de collatz do mesmo : \n");
    scanf("%d", &numero);

    printf("%d -->", numero);
    while (numero > 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
            printf("%d -->", numero);
        }
        else
        {
            numero = (numero * 3) + 1;
            printf("%d -->", numero);
        }
    }
    printf("\n");


    return 0;
}