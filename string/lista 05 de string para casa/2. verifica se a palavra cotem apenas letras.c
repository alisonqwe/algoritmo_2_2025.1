#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[100];
    printf("Digite a palavra para verificar se existe algum outro tipo de caractere \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = 0;
    printf("Palavra digitada : %s \n", palavra);

    int i = 0;
    int contador = 0;

    for (i = 0; palavra[i] != '\0'; i++)
    {
        char caractere = palavra[i];
        if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))
        {
            continue;
        }
        else
        {
            contador = 1;
            break;
        }
    }
    if (contador == 0)
    {
        printf("A palavra :( %s ), contem apenas palvras \n", palavra);
    }
    else
    {
        printf("A palavra :( %s ), contem pelos menos um outros tipo de caractere \n", palavra);
    }

    return 0;
}