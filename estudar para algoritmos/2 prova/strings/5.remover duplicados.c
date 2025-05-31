#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int verificar_duplicados(char caractere,char nova_palavra[],int *tamanho){
    for (int i = 0; i < *tamanho; i++)
    {
        if (caractere==nova_palavra[i])
        {
            return 1;
        }
        
    }
    return 0;
}
void tirar_duplicados(char palavra[],char nova_palavra[],int *novo_tamanho){


    for (int i = 0; palavra[i]!='\0'; i++)
    {
      if (verificar_duplicados(palavra[i],nova_palavra,&*novo_tamanho)==0)
      {
        nova_palavra[*novo_tamanho]=palavra[i];
        (*novo_tamanho)++;
      }    
    }
    printf("Palavra sem duplicados:\n %s\n",nova_palavra);
   
}




int main(){


char palavra[50],nova_palavra[50];
int novo_tamanho=0;






printf("Digite a palavra:\n");
scanf(" %49[^\n]",palavra);


tirar_duplicados(palavra,nova_palavra,&novo_tamanho);

















    return 0;
}








