#include <stdio.h>
#include <stdlib.h>

void ordenar_palavar(char *palavar)
{
    char *ptrAtual, *ptr_Proximo;

    for (ptrAtual = palavar; *(ptrAtual +1) != '\0'; ptrAtual++)
    {
        for (ptr_Proximo = ptrAtual + 1; *ptr_Proximo != '\0'; ptr_Proximo++)
        {
            if (*ptrAtual > *ptr_Proximo)
            {
                char temp = *ptrAtual;
                *ptrAtual = *ptr_Proximo;
                *ptr_Proximo = temp;
            }
        }
    }
}

int main()
{

    char palavra[100];

    printf("Digite a palavra que deseja ordenar em ordem alfabetica do menor para o maior:");
    scanf("%99[^\n]", palavra);
    printf("Palavar original :\n %s \n", palavra);

    ordenar_palavar(palavra);

    printf("Palavar ordenada :\n %s \n", palavra);

    return 0;
}