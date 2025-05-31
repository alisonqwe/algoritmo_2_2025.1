#include <stdio.h>
#include <stdlib.h>
// 1 hora== 3600 segundos
void converter_tempo(int tempo, int *horas, int *minutos, int *segundos)
{
    while (tempo > 0)
    {
        if (tempo > 3600)
        {
            // (*horas)++;
            *horas += 1;
            tempo -= 3600;
        }
        else if (tempo > 60)
        {
            (*minutos)++;
            tempo -= 60;
        }
        else
        {
            *segundos = tempo;
            tempo = 0;
        }
    }
}

int main()
{

    int tempo = 0, horas = 0, minutos = 0, segundos = 0;

    printf("Digite a quantidade dos segundos:\n");
    scanf("%d", &tempo);

    converter_tempo(tempo, &horas, &minutos, &segundos);
    printf("%d Horas, %d Minutos, %d Segundos.\n", horas, minutos, segundos);

    return 0;
}