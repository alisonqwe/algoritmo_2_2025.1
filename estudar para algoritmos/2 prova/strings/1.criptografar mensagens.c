#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tamanho(int *tamanho, char palavra[])
{

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        (*tamanho)++;
    }
}

void deslocamento_demais3(char palavra[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            palavra[i] +=3;
        }
    }
}

int main()
{

    return 0;
}