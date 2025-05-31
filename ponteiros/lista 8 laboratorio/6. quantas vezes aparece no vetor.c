#include <stdio.h>
#include <stdlib.h>

void prencher_vetor(float temperaturas[])
{
    printf("preencha o vetor com as 10 temperaturas \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }
}
void procurar_temperatura(float temperaturas[], float procurar, int *cont)
{

    for (int i = 0; i < 10; i++)
    {
        if (temperaturas[i] == procurar)
        {
            *cont += 1;
        }
    }
}

void exibir_vezes(float procurar, int *cont)
{
    if (*cont > 0)
    {
        printf("A temperatura %.2f aparece %d vezes no vetor de temperaturas", procurar, *cont);
    }
    else
    {
        printf("A temperatura %.2f não aparece no vetor de temperaturas", procurar);
    }
}
int main()
{

    float temperaturas[10];
    float procurar;
    int cont=0;
    prencher_vetor(temperaturas);
    printf("Digite a tamperatura para procurar no vetor :\n");
    scanf("%f", &procurar);
    procurar_temperatura(temperaturas, procurar, &cont);
    exibir_vezes(procurar, &cont);

    return 0;
}