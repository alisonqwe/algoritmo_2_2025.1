#include<stdio.h>
#include<stdlib.h>

int main(){

int tamanho=0;
printf("Digite o tamanho da arvore de natal \n");
scanf("%d",&tamanho);
 
for (int i = 0; i <= tamanho; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf(" * ");
    }
    printf("\n");
}





    return 0;

}