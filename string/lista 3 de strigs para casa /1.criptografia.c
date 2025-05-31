#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra[100];
    int tamanho = 0;

    printf("Digite a palavra para criptografar \n");
    scanf("%100[^\n]", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z'))
        {
            palavra[i] += 3;
        }
        tamanho++;
    }
    for (int i = 0; i < tamanho / 2; i++)
    {
        char auxiliar = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = auxiliar;
    }
    int metade = tamanho / 2;
    for (int i = metade; i < tamanho; i++)
    {
        palavra[i] -= 1;
    }

    printf(" Plavara criptografada é =: \n %s\n", palavra);

    return 0;
}






