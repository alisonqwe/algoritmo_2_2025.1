#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    
    printf("Digite o tamanho do vetor inteiro \n");
    scanf("%d", &tamanho);

    int vet[tamanho];

    printf("Prencha o vetor :");

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero do vetor na posição %d :\n", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Histograma de acordo com vetor digitado :\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < vet[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}