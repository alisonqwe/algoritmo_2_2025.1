#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tamanho_palavra(char palavra[])
{
    int tamanho = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        tamanho++;
    }
    return tamanho;
}

int main()
{
    char palavra[100];

    printf("Digite a palavra para trocar os elementos tudo para maiúsculos \n");
    scanf("%99[^\n]", palavra);
    printf("Palavra digitada: %s \n", palavra);

    int tamanho = tamanho_palavra(palavra);
  

   
    for (int i = 0; i < tamanho; i++)
    {

        if (palavra[i] >= 'a' && palavra[i] <= 'z')
        {
            palavra[i] = palavra[i] - 32;
        }
       
    }

    printf("Palavra final com os caracteres todos maiusculos: %s \n", palavra);

    return 0;
}