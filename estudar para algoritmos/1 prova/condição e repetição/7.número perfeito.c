#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont = 0, numero;
    printf("Digite o número para verificar se o mesmo é perfeito: \n");
    scanf("%d", &numero);

    for (int i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            cont = cont + i;
        }
    }

    if (cont == numero)
    {
        printf("O número %d é um numero perfeio!\n", numero);
    }
    else
    {
        printf("O número %d NÃO é um numero perfeio!\n", numero);
    }

    return 0;
}