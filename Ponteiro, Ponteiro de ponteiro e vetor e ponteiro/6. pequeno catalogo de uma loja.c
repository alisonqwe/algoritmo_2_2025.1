#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    float preco;
} Produto;

void aplicar_desconto(Produto *p, float *precentual)
{
    p++;

    (*p).preco = (*p).preco - ((*precentual / 100) * (*p).preco);
}

void preencher_produtos(Produto p[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("Didite o nome do produto %d :", i + 1);
        scanf(" %29[^\n]", p[i].nome);
        printf("Digite o prço do produto:");
        scanf("%f", &p[i].preco);
    }
}

void maior_preco(Produto *p, int *indice_mais_caro)
{
    *indice_mais_caro = 0;
    for (int i = 1; i < 5; i++)
    {
        if (p[i].preco > p[*indice_mais_caro].preco)
        {
            *indice_mais_caro = i;
        }
    }

    printf("Dados do produto mais caro:");
    printf("Nome : %s \n", p[*indice_mais_caro].nome);
    printf("Preço : %.2f \n", p[*indice_mais_caro].preco);
}
int main()
{
    int indice_maior=0;
    Produto produtos[5];
    float precentual = 0;
    preencher_produtos(produtos);
    printf("Digite o precentual de descontos para aplicar no produto:\n");
    scanf("%f", &precentual);
    aplicar_desconto(produtos, &precentual);
    maior_preco(produtos,&indice_maior);
    return 0;
}