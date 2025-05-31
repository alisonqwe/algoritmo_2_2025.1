#include <stdio.h>

void contar_digitos(int n){



    int cont = 0;

    while (n > 0){
        n /= 10;
        cont++;
    }

    printf("O numero de digitos é: %d\n", cont);
}



int main(){

int n;


printf("Digite o numero inteiro :\n");
scanf("%d", &n);

contar_digitos(n);






















    return 0;
}