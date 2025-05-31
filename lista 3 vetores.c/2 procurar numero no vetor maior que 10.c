#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[10];

    printf("Prencha o vetor de 10 posições : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero do vetor na posição %d :\n", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] >= 10)
        {
            printf("Numero %d encontrado na posição %d \n", vet[i], i + 1);
        }
    }

    return 0;
}