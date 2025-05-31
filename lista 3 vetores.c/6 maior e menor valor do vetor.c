#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posi_maior, posi_menor, maior = 0, menor = 0, tamanho = 0;
    printf("Digite o tamnaho do vetor inteiro \n");
    scanf("%d ", &tamanho);
    int vet[tamanho];

    printf("Prencha o vetor : \n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero do vetor na posição %d :\n", i + 1);
        scanf("%d", &vet[i]);
    }
    maior = vet[1];
    menor = vet[1];
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            posi_maior = i;
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
            posi_menor = i;
        }
    }
    printf("Vetor modificado :\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" [%d] ", vet[i]);
    }
    printf(" O maior numero do vetor é = %d e esta na posição %d \n",maior,posi_maior);
    printf(" O menor numero do vetor é = %d e esta na posição %d \n",menor,posi_menor);

    return 0;
}