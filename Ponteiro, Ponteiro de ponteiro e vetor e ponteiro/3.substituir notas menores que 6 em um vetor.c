#include <stdio.h>
#include <stdlib.h>
void preencher_vetor(float notas[])
{
    printf("preenchar o vetor com as suas 5 notas \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a sua nota %d:", i + 1);
        scanf("%f", &notas[i]);
    }
}

void verificar_notas(float *notas)
{
  
    for (int i = 0; i < 5; i++)
    {
        if (*notas< 6)
        {
            *notas = 6;
        }
        notas++;
    }
}

void printar_vetor(float notas[])
{
    printf("Notas \n");
    for (int i = 0; i < 5; i++)
    {
        printf("[%.2f]", notas[i]);
    }
}

int main()
{

    float notas[5];

    preencher_vetor(notas);
    printar_vetor(notas);
    verificar_notas(notas);
    printar_vetor(notas);

    return 0;
}