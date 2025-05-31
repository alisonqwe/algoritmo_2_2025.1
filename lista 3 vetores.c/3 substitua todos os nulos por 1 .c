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
        if (vet[i] <= 0)
        {
            vet[i]=1;
        }
    }
    printf("Vetor modificado :\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" [%d] ", vet[i]);

    }

    return 0;
}