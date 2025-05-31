#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, numero = 0, vet[3];

    printf("Digite o numero de 3 digitos para verificar se ele é um numero Armstrong: \n");
    scanf("%d", &numero);
    int auxi = numero;
    while (numero > 0)
    {
        vet[a] = numero % 10;
        numero = numero / 10;
        a++;
    }
    int auxiliar = 1, numero_armstrong = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            auxiliar = auxiliar * vet[i];
        }
        numero_armstrong += auxiliar;
        auxiliar = 1;
    }

   // printf("%d \n", auxiliar);
   // printf("%d \n", numero_armstrong);
    if (auxi == numero_armstrong)
    {
        printf("O número %d é um número de Armostrong : \n", auxi);
    }
    else
    {

        printf("O número %d  NÃO é um número de Armostrong : \n", auxi);
    }

    return 0;
}