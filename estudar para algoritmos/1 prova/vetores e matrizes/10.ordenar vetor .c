#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Digite o tamanho do vetor : \n");
    scanf("%d", &n);
    int vet[n];
    printf("Prenchar a o vetor pra logo apos ordenalo : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemnto do vetor %d°:", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\n Vetor digitado : \n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", vet[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                int auxiliar = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = auxiliar;
            }
        }
    }
    printf("\n Vetor ordenado: \n");
    for (int i = 0; i < n; i++)
    {
        printf("[ %d ]", vet[i]);
    }
    printf("\n");
    return 0;
}