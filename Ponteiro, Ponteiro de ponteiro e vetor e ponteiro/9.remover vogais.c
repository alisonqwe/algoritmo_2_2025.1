#include <stdio.h>
#include <stdlib.h>

int verificar_vogal(char caractere){


    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || 
        caractere == 'o' || caractere == 'u' || 
        caractere == 'A' || caractere == 'E' || caractere == 'I' || 
        caractere == 'O' || caractere == 'U')
    {
        return 1;
    }
    return 0;
}


void remover_vogais(char *entrada, char *saida){

      while (*(entrada)!='\0')
      {
        if (verificar_vogal(*entrada)==0)
        {
            *saida = *entrada;
            saida++;

        }
           entrada++;
        
        

        
      }
      
   *saida ='\0';


}

int main(){

char entrada[50],saida[50];


printf("Digite a string inicial:\n");
scanf(" %49[^\n]",entrada);
remover_vogais(entrada,saida);

printf("Entrada : %s \n",entrada);
printf("Saida : %s \n",saida);
























    return 0;
}