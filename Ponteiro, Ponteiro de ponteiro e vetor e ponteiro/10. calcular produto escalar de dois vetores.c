#include <stdio.h>
#include<stdlib.h>


void somar_produto_escalar(float *v1, float *v2, int n,float *produto_escalar){
    int i=0;
    while (i < n)
    {
       *produto_escalar += (*v1) * (*v2);
       v1++;
       v2++;
       i++;    
    }
    
}

void preencher_vetor(float *v, int n){
    int i=0;
    while (i<n)
    {
        printf("Digite o elemento %d do vetor:",i+1);
        scanf("%f",&*v);
        v++;
        i++;
    }
    
}

void printar_vetor( float *v, int n){
 int i=0;
    while (i<n)
    {
        printf("[%2.f]",*v);
        v++;
        i++;
    }

}


void verificar_produto_escalar(float *produto_escalar){

    float eps=0.001;

    if (*produto_escalar<eps && *produto_escalar > -eps)
    {
        printf("\nOs vetores sao ortogonais.\n");
    }else
    {
        printf("\nOs vetores não sao ortogonais.\n");
    }
    
    
}
int main(){

int n=0;
float produto_escalar=0;
printf("Digite o tamanho dos vetores que seja menor que 200:\n");
scanf("%d",&n);
float vet1[n],vet2[n];
printf("\nPrenechar o primeiro vetor :\n");
preencher_vetor(vet1,n);
printf("Vetor digitado :\n");
printar_vetor(vet1,n);

printf("\nPrenechar o segunto vetor :\n");
preencher_vetor(vet2,n);
printf("Vetor digitado :\n");
printar_vetor(vet2,n);

somar_produto_escalar(vet1,vet2,n,&produto_escalar);
verificar_produto_escalar(&produto_escalar);






























    return 0;
}