#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int cont=19,vet[20];

    printf("Prencha o vetor  : \n");
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o numero do vetor na posição %d :\n", i + 1);
        scanf("%d", &vet[i]);
    }

    
    for (int i = 0; i < 10; i++)
    {
        int aux = vet[i];
        vet[i] = vet[cont];
        vet[cont] = aux;
        cont--;
    }
    printf("Vetor final trocado :\n");
    for (int i = 0; i < 20; i++)
    {
        printf(" [%d] \n ", vet[i]);

    }

    return 0;
}