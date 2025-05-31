#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome_do_produto[50];
    int id;
    float preco;
    int quantidade_stoque;

} Produto;

void cadrastra_produto(Produto produtos[], int n)
{
    int verificar = 1;
    printf("\nCadrastas os %d produto(s) no sistemas :\n ", n);
    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome do %d produto:\n", i + 1);
        scanf(" %[^\n]", produtos[i].nome_do_produto);
        printf("Digite o ID do produto:\n");
        scanf("%d", &produtos[i].id);
        while (verificar == 1)
        {

            for (int j = 0; j < n; j++)
            {
                if ((produtos[i].id == produtos[j].id) && j != i)
                {
                    printf("ID do produto ja existenete, digite outro ID:\n");
                    scanf("%d", &produtos[i].id);
                }
                else
                {
                    verificar = 0;
                }
            }
        }
        printf("Digite o preço do produto %s:\n", produtos[i].nome_do_produto);
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade do produto que vai ser adicional no estoque:\n");
        scanf("%d", &produtos[i].quantidade_stoque);
    }
}

void buscar_produto_em_estoque(Produto produtos[], int n, int id_busca)
{
    printf("\nBuscando produto...\n");

    int buscar = 0;
    for (int i = 0; i < n; i++)
    {
        if (produtos[i].id == id_busca)
        {
            buscar = i;
            break;
        }
        else
        {
            buscar = 0;
        }

        if (buscar != 0)
        {
            break;
        }
    }
    if (buscar == 0)
    {
        printf("O produdo com o ID %d não está cadastrado!!!", id_busca);
    }
    else
    {
        printf("Produto encotrado no sistema:\n");
        printf("Nome do produto:%s\n", produtos[buscar].nome_do_produto);
        printf("ID do produto:%d\n", produtos[buscar].id);
        printf("Preço do produto:%.2f\n", produtos[buscar].preco);
        printf("Quantidade do produto em estoque:%d\n", produtos[buscar].quantidade_stoque);
    }
}

int main()
{

    int n = 0;
    int id_busca;

    printf("Digite a quantidade de produtos que você deseja cadatras: \n");
    scanf("%d", &n);

    Produto produtos[n];
    cadrastra_produto(produtos, n);

    printf("\nDigite um ID do produto para fazer a busca no sistema:\n");
    scanf("%d", &id_busca);
    buscar_produto_em_estoque(produtos, n, id_busca);

    return 0;
}