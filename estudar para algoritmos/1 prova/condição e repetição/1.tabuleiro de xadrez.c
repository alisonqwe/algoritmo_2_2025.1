#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Tabuleiro de XADREZ onde nas casas pretas contem o numero '1' \n e nas casas brancas o número '0' \n");

    int mat[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                mat[i][j] = 0;
            }
            else
            {
                mat[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}