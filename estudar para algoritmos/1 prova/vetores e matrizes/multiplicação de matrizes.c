#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mata[2][3], matb[3][2], matc[2][2];

    printf("Preencha as matrizes para fazer a multilicação\n");
    printf("primeira matriz\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mata[i][j]);
        }
    }
    printf("\n");
    printf("segunda matriz\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matb[i][j]);
        }
    }
    printf("\n");
    printf("multiplicação das matrizes \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                matc[i][j] = 0;
                matc[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }
    printf("\n");
    // Imprime a primeira matriz
    printf("Matriz A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mata[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Imprime a segunda matriz
    printf("Matriz B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", matb[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Imprime a matriz resultante
    printf("Matriz Resultante (A x B):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", matc[i][j]);
        }
        printf("\n");
    }

    return 0;
}