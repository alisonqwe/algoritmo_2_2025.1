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
    char string1[100], string2[100];
    int tamanho1 = 0, tamanho2 = 0, verificar = 0;
    printf("Digite duas strings para vericar se elas são inguais ou não:\n");
    printf("Digite a primeira string:\n");
    scanf(" %99[^\n]", string1);
    tamanho1 = tamanho_palavra(string1);
    printf("Digite a segunda string:\n");
    scanf(" %99[^\n]", string2);
    tamanho2 = tamanho_palavra(string2);
    if (tamanho1 != tamanho2)
    {
        printf("As strings são diferentes!!!.\n");
        //    printf("%d: %d.\n",tamanho1,tamanho2);
        return 0;
    }
    // printf("%d: %d.\n",tamanho1,tamanho2);
    for (int i = 0; i < tamanho1; i++)
    {
        if (string1[i] != string2[i])
        {
            verificar = 1;
        }
    }
    if (verificar == 1)
    {
        printf("As strings são diferentes!!!.\n");
    }
    else
    {
        printf("As strings são iguais!!!.\n");
    }

    return 0;
}