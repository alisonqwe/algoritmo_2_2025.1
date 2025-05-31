#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numerador;
    int denominador;
} Fracao;
void somar_fracoes(Fracao fracao[], Fracao *resultado)
{

    int i = 0;
    float resultado1 = 0;

    if (fracao[i].denominador == fracao[i + 1].denominador)
    {
        (*resultado).denominador = fracao[i].denominador;
        (*resultado).numerador = fracao[i].numerador + fracao[i + 1].numerador;
    }
    else
    {
        (*resultado).numerador = (fracao[i].numerador * fracao[i + 1].denominador) + (fracao[i].denominador * fracao[i + 1].numerador);
        (*resultado).denominador = fracao[i].denominador * fracao[i + 1].denominador;
    }

    resultado1 = (*resultado).numerador / (float)(*resultado).denominador;

    printf("O resultado da soma da fração %d/%d + %d/%d é = %d/%d ou %.2f \n", fracao[i].numerador, fracao[i].denominador, fracao[i + 1].numerador, fracao[i + 1].denominador, (*resultado).numerador, (*resultado).denominador, resultado1);
}

void simplificar_fracoes(Fracao *resultado)
{

    int j = 2;

    while (1)
    {
        if (j > (*resultado).denominador || j > (*resultado).numerador)
        {
            break;
        }
        else
        {

            if ((*resultado).denominador % j == 0 && (*resultado).numerador % j == 0)
            {
                (*resultado).denominador = (*resultado).denominador / j;
                (*resultado).numerador = (*resultado).numerador / j;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Fração simplificada:\n");

    printf("fração= %d/%d\n", (*resultado).numerador, (*resultado).denominador);
}
int main()
{

    Fracao fracao[2], resultado;

    printf("Digite as duas frações \n");

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o Numerador da %d fração: ", i + 1);
        scanf("%d", &fracao[i].numerador);
        printf("Digite o Denominador da %d fração: ", i + 1);
        scanf("%d", &fracao[i].denominador);
    }

    printf("Resultado da soma das frações:\n");
    somar_fracoes(fracao, &resultado);
    printf("\n");
    simplificar_fracoes(&resultado);

    return 0;
}