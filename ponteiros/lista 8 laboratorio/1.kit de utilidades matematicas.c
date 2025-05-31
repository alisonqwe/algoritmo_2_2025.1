#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
} Numeros;

void max_valor(Numeros n, int *resultado)
{

    if (n.a > n.b)
    {
        *resultado = n.a;
    }
    else
    {
        *resultado = n.b;
    }
}

void min_valor(Numeros n, int *resultado)
{

    if (n.a < n.b)
    {
        *resultado = n.a;
    }
    else
    {
        *resultado = n.b;
    }
}

void *endereco_max_valor(Numeros *n)
{

    if (n->a > n->b)
    {

        return &n->a;
    }
    else
    {
        return &n->b;
    }
}
void *endereco_min_valor(Numeros *n)
{

    if (n->a < n->b)
    {

        return &n->a;
    }
    else
    {
        return &n->b;
    }
}

void aplicar_aumento_percentual(int *valor, float *percentual, float *resultado)
{

    *resultado = *valor + (*valor * (*percentual / 100));
}



void aplicar_desconto_percentual(int *valor, float *percentual, float *resultado)
{

    *resultado = *valor - (*valor * (*percentual / 100));
}



void somar_valor(Numeros n, int *soma)
{

    *soma = n.a + n.b;
}
int main()
{

    Numeros n;
    float percentual = 0;
    int resultado1 = 0;
    float resultado2 = 0;
    printf("Digite o valor de a :\n");
    scanf("%d", &n.a);
    printf("Digite o valor de b:\n");
    scanf("%d", &n.b);

    printf("Digite o percentual a ser aplicado:\n");
    scanf("%f", &percentual);
    max_valor(n, &resultado1);
    printf("Maior valor :%d \n", resultado1);
    min_valor(n, &resultado1);
    printf("Menor valor :%d \n", resultado1);
    printf("Endereço do maior valor: %p\n", endereco_max_valor(&n));
    printf("Endereço do menor valor: %p\n", endereco_min_valor(&n));

    printf("Aplicando aumento de %.2f em a:\n", percentual);
    aplicar_aumento_percentual(&n.a, &percentual, &resultado2);
    printf("Resultado:%.2f\n", resultado2);

    printf("Aplicando aumento de %.2f em b:\n", percentual);
    aplicar_aumento_percentual(&n.b, &percentual, &resultado2);
    printf("Resultado:%.2f\n", resultado2);

    printf("Aplicando desconto de %.2f em a:\n", percentual);
    aplicar_desconto_percentual(&n.a, &percentual, &resultado2);
    printf("Resultado:%.2f\n", resultado2);

    printf("Aplicando desconto de %.2f em b:\n", percentual);
    aplicar_desconto_percentual(&n.b, &percentual, &resultado2);
    printf("Resultado:%.2f\n", resultado2);

    return 0;
}