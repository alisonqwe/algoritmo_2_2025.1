#include <stdio.h>
#include<stdlib.h>


typedef struct {
   int denominador;
   int numerador;

} Fracao;


void prerchar_struct(Fracao *fracoes,int n){
    for (int i = 0; i < n; i++)
    {
    printf("Digite o numerador da fracao %d :",i+1);
    scanf("%d",&(*fracoes).numerador);
     printf("Digite o denominador da fracao %d :",i+1);
    scanf("%d",&(*fracoes).denominador);
    fracoes++;
    }
    
}

void simplificar_fracoes(Fracao *fracoes,int n){
    for (int i = 0; i < n; i++)
    {
       int j=2; 
       while (1)
       {
        if ((*fracoes).numerador % j ==0 && (*fracoes).denominador % j ==0)
        {
            (*fracoes).numerador = (*fracoes).numerador / j;
             (*fracoes).denominador = (*fracoes).denominador / j;
        }else
        {
            if (j> (*fracoes).numerador || j> (*fracoes).denominador)
            {
                break;
            }else
            {
                j++;
            }
            
            
        }
        
        
       }

       printf("Fracao %d simplificada: %d / %d \n",i+1,(*fracoes).numerador,(*fracoes).denominador);
       fracoes++;
       
        
    }
    

}
int main(){

    int n=0;
printf("Digite a quantidade de frações : ");
scanf("%d",&n);

Fracao fracoes[n];


prerchar_struct(fracoes,n);
simplificar_fracoes(fracoes,n);


















    return 0;
}