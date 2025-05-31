#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vet[20];

    printf("Digite o primeiro número do vetor  : \n");
    scanf("%f",& vet[0]);

    
    for (int i = 1; i < 19; i++)
    {
       vet[i]= (vet[i-1]/2);
    }
    printf("Vetor gerado :\n");
    for (int i = 0; i < 20; i++)
    {
        printf(" [%f] \n ", vet[i]);

    }

    return 0;
}