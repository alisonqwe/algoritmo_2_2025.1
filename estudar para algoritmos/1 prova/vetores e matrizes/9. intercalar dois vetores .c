#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0, k = 0;
    int tamanho1 = 0, tamanho2 = 0;
    printf("Digite o tamanho do primeiro vetor: \n");
    scanf("%d", &tamanho1);
    int vet1[tamanho1];
    printf("Preenchar o primeiro vetor \n");
    for (int i = 0; i < tamanho1; i++)
    {
        printf("Digite o elemnto do vetor %d°:", i + 1);
        scanf("%d", &vet1[i]);
    }

    printf("\nDigite o tamanho do segunndo vetor: \n");
    scanf("%d", &tamanho2);
    int vet2[tamanho2];
    printf("Preenchar o segundo vetor \n");
    for (int i = 0; i < tamanho2; i++)
    {
        printf("Digite o elemnto do vetor %d°:", i + 1);
        scanf("%d", &vet2[i]);
    }

    int vetintercalado[tamanho1 + tamanho2];

    while (i < tamanho1 && j < tamanho2)
    {
        vetintercalado[k++] = vet1[i++];
        vetintercalado[k++] = vet2[j++];
    }

    while (i < tamanho1)
    {
        vetintercalado[k++] = vet1[i++];
    }
    while (j < tamanho2)
    {
        vetintercalado[k++] = vet2[j++];
    }
    printf("\n Primeiro Vetor digitado : \n");
    for (int i = 0; i < tamanho1; i++)
    {
        printf("[ %d ]", vet1[i]);
    }
    printf("\n  Segundo Vetor digitado : \n");
    for (int i = 0; i < tamanho2; i++)
    {
        printf("[ %d ]", vet2[i]);
    }
    printf("\n  Vetores intercalados : \n");
    for (int i = 0; i < tamanho2 + tamanho1; i++)
    {
        printf("[ %d ]", vetintercalado[i]);
    }

    return 0;
}