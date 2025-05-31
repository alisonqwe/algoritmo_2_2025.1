#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor_inicial = 0.0;
    float aportes_mensais = 0.0;

    printf("Digite o valor inicial da sua poupança: \n");
    scanf("%f", &valor_inicial);

    for (int i = 0; i < 12; i++)
    {
        printf("Digite o valor das aportes mensais no mês %d: \n", i + 1);
        scanf("%f", &aportes_mensais);
        valor_inicial += aportes_mensais;
        valor_inicial += valor_inicial * 0.5;
    }
    printf("apos 12 meses o montante é = %.2f : \n",valor_inicial);
    return 0;
}