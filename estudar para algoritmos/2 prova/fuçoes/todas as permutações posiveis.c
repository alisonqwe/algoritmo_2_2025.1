#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int vet[], int tamanho)
{

    printf("Prenchar o vetor apenas com '0' e '1' !\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o elemento [%d] :\n", i + 1);
        scanf("%d", &vet[i]);
    }
}

void permutacao(int vet[], int pos, int tamanho)
{
    if (pos == tamanho)
    {

        for (int i = 0; i < tamanho; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("\n");
        return;
    }

    vet[pos] = 0;
    permutacao(vet, pos + 1, tamanho);
    vet[pos] = 1;
    permutacao(vet, pos + 1, tamanho);
}

int main()
{

    int n;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    int vet[n];

    preencher_vetor(vet, n);
    printf("As permutações possíveis são:\n");
    permutacao(vet, 0, n);

    return 0;
}