#include <stdio.h>
#include <stdlib.h>

void tamanho_palavra(char *palavar, int *tamanho)
{

    while (*palavar != '\0')
    {
        (*tamanho)++;
        palavar++;
    }
}

void auxiliar_inverter_palavra(char *inicio, char *fim){
    while (inicio<fim)
    {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
    
}
void principal_iverter_palavra(char *palavra){

char *inicio,*fim,*atual;
int n=0;

tamanho_palavra(palavra,&n);    


inicio= palavra;
fim=palavra+n-1;

auxiliar_inverter_palavra(inicio,fim);

inicio= palavra;
atual=palavra;

for (int i = 0; i <= n; i++)
{
    if (*atual==' '||*atual=='\0')
    {
        fim = (atual-1);
        auxiliar_inverter_palavra(inicio,fim);
        inicio = atual+1;
    }
    atual++;
    
}


    
}

int main()
{

    char palavra[100];

    printf("Digite a palavra :");
    scanf(" %99[^\n]",palavra);

    printf("Entrada : \n '%s' \n",palavra);

    principal_iverter_palavra(palavra);
     printf("Saida : \n '%s' \n",palavra);

    return 0;
}