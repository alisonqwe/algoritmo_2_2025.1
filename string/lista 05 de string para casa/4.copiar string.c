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
    char variavel_a[100],variavel_b[100];

    printf("Digite a palavra para capiar para outra variavel \n");
    scanf("%99[^\n]", variavel_a);
    printf("Palavra digitada: %s \n", variavel_a);

    int tamanho = tamanho_palavra(variavel_a);
    

   int j=0;
    for (int i = 0; i < tamanho; i++)
    {

        variavel_b[j]=variavel_a[i];
        j++;    
       
    }
    variavel_b[j]='\0';
    printf("palavra digitada: %s \n", variavel_a);
    printf("Variavel B: %s \n", variavel_b);
    return 0;
}