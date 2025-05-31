#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union
{
    int quantidade;
    float preco;
} Produtos;

typedef struct
{
    // 1 para preço 2 para quantidade
    int tipo_produto;
    Produtos produto;
} RegistraProdutos;

int main()
{
    RegistraProdutos armazenar;
    Produtos receber;

    int opcao = 0;

    while (opcao != 3)
    {

        printf("Escolha uma opcao:\n");
        printf("1 - Registra preço\n");
        printf("2 - Registra quantidade\n");
        printf("3 - sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o preco do produto: ");
            scanf("%f", &receber.preco);
            armazenar.produto = receber;
            armazenar.tipo_produto = 1;

            break;
        case 2:
            printf("Digite a quantidade do produto: ");
            scanf("%d", &receber.quantidade);
            armazenar.produto = receber;
            armazenar.tipo_produto = 2;

            break;

        case 3:
            printf("Saindo...\n");
            break;
        default:

            printf("Opção invalida!!!");
            break;
        }
    }

    printf("Produto registrado:\n");
    if (armazenar.tipo_produto == 1)
    {
        printf("Preço: %.2f\n", armazenar.produto.preco);
    }
    else
    {
        printf("Quantidade: %d\n", armazenar.produto.quantidade);
    }

    return 0;
}