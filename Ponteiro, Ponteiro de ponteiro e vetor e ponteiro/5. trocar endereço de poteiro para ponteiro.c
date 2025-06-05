#include<stdio.h>
#include<stdlib.h>



void trocar_endereço(int **A, int **B){

    int *temp;
    temp = *A;
    *A = *B;
    *B = temp;
    printf("%p\n",temp);
}


int main(){

int a =10, b=20;
int *ptrA= &a, *ptrB=&b;
int **pptrA =&ptrA, **pptrB=&ptrB;

printf("**pptrA = %p **pptrB = %p\n", (void**)pptrA, (void**)pptrB); 
trocar_endereço(pptrA,pptrB);
printf("**pptrA = %p **pptrB = %p\n", (void**)pptrA, (void**)pptrB); 




    return 0;
}