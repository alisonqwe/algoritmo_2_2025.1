#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remover_esapços(char palavra[], char nova_palavra[])
{
    int j = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] != ' ')
        {
            nova_palavra[j++] = palavra[i];
        }
    }
    nova_palavra[j++] = '\0';
}

int main()
{

    char palavra[50], nova_palavra[50];
    printf("Digite a palavra:\n");
    scanf(" %49[^\n]", palavra);
    remover_esapços(palavra, nova_palavra);
     printf("Palavra sem espacos:\n %s\n", nova_palavra);

    return 0;
}