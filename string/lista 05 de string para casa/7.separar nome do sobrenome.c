#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int tamanho_palavra(char palavra[])
// {
//     int tamanho = 0;
//     for (int i = 0; palavra[i] != '\0'; i++)
//     {
//         tamanho++;
//     }
//     return tamanho;
// }

int main()
{
    char nome[100], sobrenome[100], nome_completo[100];
    int tamanho_nome = 0, comeco_sobrenome = 0, j = 0;
    printf("Digite o nome completo:\n");
    scanf(" %99[^\n]", nome_completo);

   
    for (int i = 0; nome_completo[i] != ' '; i++)
    {
        tamanho_nome++;
    }
    comeco_sobrenome = tamanho_nome + 1;
    for (int i = 0; i < tamanho_nome; i++)
    {
        nome[j] = nome_completo[i];
        j++;
    }
    nome[j] = '\0';
    j = 0;
    for (int i = comeco_sobrenome; nome_completo[i] != '\0'; i++)
    {
        sobrenome[j] = nome_completo[i];
        j++;
    }
    // sobrenome[j] = '\0';

    printf("Nome completo: %s \n", nome_completo);
    printf("Nome: %s \n", nome);
    printf("Sobrenome: %s \n", sobrenome);

    return 0;
}