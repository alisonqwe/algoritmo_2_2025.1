#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                mat[i][j] = ((3 * i) * (3 * i)) - 1;
            }
            else if (i < j)
            {
                mat[i][j] = ((2 * i) + (7 * j)) - 2;
            }
            else if (i > j)
            {
                mat[i][j] = ((4 * i) * (4 * i) * (4 * i)) - ((5 * j) * (5 * j)) + 1;
            }

            {
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("[ %d ]", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}