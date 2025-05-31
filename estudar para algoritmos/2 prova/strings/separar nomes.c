#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separar_nomes(char palavra[], char nome[], char sobrenome[])
{
    int i = 0, j = 0;
    for (i = 0; palavra[i] != ' '; i++)
    {

        nome[i] = palavra[i];
    }
    nome[i++] = '\0';

    for (; palavra[i] != '\0'; i++)
    {

        sobrenome[j++] = palavra[i];
    }
    sobrenome[j++] = '\0';
}

int main()
{

    char palavra[100], nome[50], sobrenome[50];

    printf("Digite o nome e sobrenome:\n");
    scanf(" %99[^\n]", palavra);
    separar_nomes(palavra, nome, sobrenome);
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);

    return 0;
}