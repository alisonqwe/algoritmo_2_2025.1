#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Tabela de converção de temperatura de celsius para faherhaite, comesando de -20 ate 60  com incremnetos de +4 :\n");

    float faherhate[50], celsius[50];
    int j = 0;
    for (int i = -20; i <= 60; i += 4)
    {
        celsius[j] = i;
        faherhate[j] = ((i * 1.8) + 32);
        j++;
    }

    for (int i = 0; i < j; i++)
    {
        printf(" %.2f celsius = %.2f  faherhaite \n",celsius[i],faherhate[i]);
    }

    return 0;
}