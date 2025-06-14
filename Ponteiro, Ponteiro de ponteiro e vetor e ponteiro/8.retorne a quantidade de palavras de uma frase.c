#include <stdio.h>
#include <stdlib.h>

void contar_palavra(char *frase, int *quant_palvra)
{
    while (*frase != '\0')
    {
        if ((*frase != ' ' && *(frase - 1) == ' ')||*(frase + 1) == '\0')
        {
            (*quant_palvra)++;
        }
       
        frase++;
    }
}

int main()
{

    char frase[50];
    int numero_de_palvra = 0;

    printf("Digite a frase :\n");
    scanf(" %49[^\n]", frase);

    contar_palavra(frase, &numero_de_palvra);
    printf("Entrada : %s \n", frase);
    printf("Saida : %d \n", numero_de_palvra);

    return 0;
}