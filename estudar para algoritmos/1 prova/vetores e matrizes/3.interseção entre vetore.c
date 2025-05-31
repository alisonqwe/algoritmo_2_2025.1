#include<stdio.h>
#include<stdlib.h>

int main(){
int a[10]={0,1,2,3,4,5,6,7,8,9};
int b[10]={1,3,5,7,9,11,13,15,17,19};

printf("Elemtos da intercecção entre os dois vetores \n");
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (a[i]==b[j])
        {
            printf(" [%d] ",a[i]);
            break;
        }
        
    }
    
}
printf("\n");







    return 0;
}