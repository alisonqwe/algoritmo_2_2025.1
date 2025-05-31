#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comparar_strings(char string1[],char string2[]){
    int tamanho1=0,tamanho2=0;
    for (int i = 0; string1[i]!='\0'; i++)
    {
        tamanho1++;
    }
    for (int i = 0; string2[i]!='\0'; i++)
    {
        tamanho2++;
    }
    if (tamanho1!=tamanho2)
    {
        return 1;
    }else
    {
        for (int i = 0; i < tamanho1; i++)
        {
            if (string1[i]!=string2[i])
            {
                return 1;
            }
        }
    }
    
    return 0;
}

strcmp((char string1[],char string2[])==0);
   

int main(){

char string1[50],string2[50];
printf("Digite a primeira string:\n");
scanf("%49[^\n]",string1);
printf("Digite a segunda string:\n");
scanf("%49[^\n]",string2);
if (comparar_strings(string1,string2)==0)
{
    printf("As strings sao iguais\n");
}else
{
    printf("As strings sao diferentes\n");
}





    return 0;
}