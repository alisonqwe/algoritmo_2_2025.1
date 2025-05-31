#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, vet[100], cont = 0;
    printf("Digite o numero :\n");
    scanf("%d", &numero);
    int i = 0;
    while (numero > 0)
    {
        vet[i++] = numero % 10;
        numero = numero / 10;
    }
    // Verifica se o número é palíndromo
    for (int j = 0; j < i / 2; j++)
    {
        if (vet[j] == vet[i - j - 1])
        {
            cont++;
        }
    }
    printf("%d\n",i);
    if (cont == i / 2)
    {
        printf("O número é um palíndromo\n");
    }
    else
    {
        printf("O número NÃO é um palíndromo\n");
    }

    return 0;
}
