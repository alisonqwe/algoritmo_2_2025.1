#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int cont = 0, numero, vet[8];

    printf("Digite um nemero qualquer para procurar o mesmo no vetor \n");
    scanf("%d", &numero);

    for (int i = 0; i < 8; i++)
    {
        int numero_aletaorio = (rand() % 10) + 1;
        vet[i] = numero_aletaorio;
    }
    for (int i = 0; i < 8; i++)
    {
        if (vet[i] == numero)
        {

            printf("Numero %d encontrado no vetor na posição %d \n", numero, i + 1);
            continue;
            cont++;
        }
    }
    if (cont == 0)
    {
        printf("Numero %d não encontrado no vetor  \n", numero);
    }

    return 0;
}