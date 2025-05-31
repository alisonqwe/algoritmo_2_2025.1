#include<stdio.h>
#include<stdlib.h>



void calcular_esfera(float raio, float *area, float *volume){

*area = 4 * 3.14 * (raio*raio);
*volume = (4/(float)3) * (3.14 * (raio*raio*raio));

}



int main(){


float raio=0,area=0,volume=0;


printf("Digite o raio:\n");
scanf("%f",&raio);
calcular_esfera(raio,&area,&volume);
printf("Área:%.2f\nVolume:%.2f\n",area,volume);













    return 0;
}