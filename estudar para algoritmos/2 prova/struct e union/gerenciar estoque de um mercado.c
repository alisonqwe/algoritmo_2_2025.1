#include <stdio.h>
#include <stdlib.h>
int tamanho = 5;
typedef struct
{
    int codigo;
    char nome[16];
    float preço;
    int quantidade;

} Produto;

int verificar_existe(Produto produtos[], int id)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (produtos[i].codigo == id)
        {
            return i;
        }
    }
    return -1;
}

void cadastra_produtos(Produto produtos[])
{
    int auxi = 0;
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n----------------------------------------------\n");
        printf("Digite o codigo do produto %d:\n", i + 1);
        while (1)
        {
            scanf("%d", &auxi);
            if (verificar_existe(produtos, auxi) != -1)
            {
                printf("O codigo digitado já exite, digite outro novamente:\n");
            }
            else
            {
                produtos[i].codigo = auxi;
                break;
            }
        }

        printf("Digite o nome:");
        scanf(" %s[^\n]", produtos[i].nome);
        printf("Digite o preço:");
        scanf("%f", &produtos[i].preço);
        printf("Digite a quantidade:");
        scanf("%d", &produtos[i].quantidade);
        printf("\n----------------------------------------------\n");
    }
}

void processar_pedidos(Produto produtos[])
{
    int auxi = -1, quantidade = 0;
    printf("Digite '0' para sair !!\n");
    printf("Digite o codigo do produto:");
    scanf("%d", &auxi);
    while (auxi != 0)
    {

        if (verificar_existe(produtos, auxi) != -1)
        {

            int i = verificar_existe(produtos, auxi);
            printf("Digite a quantidade que deseja pedir do produto %s :", produtos[i].nome);
            scanf("%d", &quantidade);
            if (produtos[i].quantidade < quantidade)
            {
                printf("O produto '%s' não a quantidade suficiente que deseja!!!\n", produtos[i].nome);
            }
            else
            {
                printf("Seu pedido foi atendido com sucesso!!!\n");
                produtos[i].quantidade -= quantidade;
            }
        }else
        {
            printf("Codigo não encontrado!!!\n");
        }
        
        printf("Digite o codigo do produto:");
        scanf("%d", &auxi);
    }
}
int main()
{
    Produto produtos[tamanho];
    int opcao = 0;
    while (opcao != 3)
    {

        printf("\n----------------------MENU--------------------------\n");
        printf("1-cadastra produtos\n");
        printf("2-pocessar pedidos\n");
        printf("3-sair");
        printf("\n----------------------------------------------------\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastra_produtos(produtos);
            break;
        case 2:
            processar_pedidos(produtos);
            break;
        case 3:
            printf("Saindo...");
            break;
        default:
            printf("Opção invalida!!!");
            break;
        }
    }
    return 0;
}