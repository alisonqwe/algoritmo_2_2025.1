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
    int numeros[80], j = 0, n = 0;
    for (int i = 0; i < 5; i++)
    {

        printf("Digite 5 numeros no intervale de 65 a 122 : \n");
        scanf(" %d", &numeros[j]);
        while (numeros[j] < 65 || numeros[j] > 122)
        {
            printf("ERRO!!!\n O número deve estar no intervalo entre 65 e 122\n Digite o número novamente :");
            scanf("%d", &numeros[i]);
        }

        palavra[j] = (char)numeros[j];
        j++;
    }
    palavra[j] = '\0';
    printf("Palavra digitada: %s \n", palavra);

    printf("Agora digite a palavra para transforma em um numero:\n");
    scanf(" %99[^\n]", palavra);
    int tamanho = tamanho_palavra(palavra);

    for (int i = 0; i < tamanho; i++)
    {
        n = (int)palavra[i];
        printf("%d\n", n);
    }

    return 0;
}