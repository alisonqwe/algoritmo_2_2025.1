#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra[100], palavra_final[100];
    int cont = 1, k = 0, tamanho = 0;

    printf("Digite a seguencia de caracter \n");
    scanf("%100[^\n]", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        tamanho++;
    }
    for (int i = 0; i < tamanho; i++)
    {
        cont = 1;

        while ((i < tamanho-1) && (palavra[i] == palavra[i+1]))
        {
            cont++;
            i++;
        }
        palavra_final[k++] = cont + '0';
        palavra_final[k++] = palavra[i];
    }
    palavra_final[k] = '\0';
    printf("Sequencia de caractere da palavra inicial é =: \n%s \n", palavra_final);

    return 0;
}