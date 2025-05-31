#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char palavra[100],nova_palavra[100];
printf("Digite a palavra para tirar espaços em branco \n");
scanf("%99[^\n]",palavra);

printf("Palavra original: %s \n", palavra);

int i=0,j=0;

for ( i = 0; palavra[i] != '\0'; i++)
{
    if (palavra[i] != ' ')
    {
        nova_palavra[j] = palavra[i];
        j++;
    }
    
}
nova_palavra[j]= '\0';

printf("Palavra sem os espaços em branco: %s \n",nova_palavra);




    return 0;
}