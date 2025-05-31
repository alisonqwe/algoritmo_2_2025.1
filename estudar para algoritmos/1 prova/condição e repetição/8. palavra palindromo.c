#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[100], auxiliar[100];

    printf("Digite uma palavra para ver se a mesmo é uma palíndromo: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = 0;

    int tamanho;
    tamanho = strlen(palavra);
    int j = 0;
    for (int i = tamanho - 1; i >= 0; i--)
    {
        auxiliar[j] = palavra[i];
        j++;
    }
    auxiliar[j] = '\0';
    int verificar = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (auxiliar[i] != palavra[i])
        {
            verificar = 1;
            break;
        }
    }

    if (verificar == 0)
    {
        printf("A palavra ' %s ' é uma palavra palíndromo!: \n", palavra);
    }
    else
    {

        printf("A palavra ' %s ' NÃO é uma palavra palíndromo!: \n", palavra);
    }

    return 0;
}