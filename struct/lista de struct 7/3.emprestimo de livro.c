#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    char titulo[100];
    int codigo;
    // 1 para disponível, 0 para emprestado
    int disponivel;

} Livro;


void pausar() {
    printf("Pressione Enter para continuar...\n");
    while (getchar() != '\n');
}
void cadastar_livro(Livro livros[], int n, int *quantidade)
{

    printf("Cadastra %d Livros no sistema:\n", n);

    for (int i = *quantidade; i < *quantidade + n; i++)
    {
        int verificar = 1;
        printf("Digite o Titulo do %d livro:\n", i + 1);
        scanf(" %[^\n]", livros[i].titulo);
        printf("Digite o codigo unico para o livro:\n");
        scanf("%d", &livros[i].codigo);
        while (verificar == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if ((livros[i].codigo == livros[j].codigo) && i != j)
                {
                    printf("O codigo %d ja existe no sistema, digite outro codigo diferenet :\n", livros[i].codigo);
                    scanf("%d", &livros[i].codigo);
                }
                else
                {
                    verificar = 0;
                }
            }
        }

        livros[i].disponivel = 1;
    }
    *quantidade += n;
}

void consultar_livros(Livro livros[], int quantidade)
{
    int consutar = 0, sair = 0;
    ;
    int id_busca = 0;
    while (sair == 0)
    {

        if (sair == 1)
        {
            break;
        }
        printf("Digite o codigo do livre para verificar se o mesmo exite no sistema:\n");
        scanf("%d", &id_busca);

        for (int i = 0; i <= quantidade; i++)
        {
            consutar = 0;

            if (livros[i].codigo == id_busca)
            {
                consutar = i;
                break;
            }
            else
            {
                consutar = -1;
            }
        }
        if (consutar != -1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("Livro Encontrado!!!\n");
            printf("Titulo:%s\n", livros[consutar].titulo);
            printf("Codigo do livro:%d\n", livros[consutar].codigo);
            if (livros[consutar].disponivel == 1)
            {
                printf("Status do livro:'DISPONIVEL!!!'\n");
            }
            else
            {
                printf("Status do livro:'EMPRESTADO!!!'\n");
            }
        }
        else
        {
            printf("Livro não encontrado!!!\n");
        }
        printf("Digite '1' para sair, e '0' para continuir no buscando livros(s):\n");
        scanf("%d", &sair);
    }
}

void emprestar_livro(Livro livros[], int quantidade)
{
    int sair = 0;

    int consutar = 0;
    int id_busca = 0;
    while (sair == 0)
    {
        if (sair == 1)
        {
            break;
        }

        printf("Digite o codigo do livre para verificar se o mesmo exite no sistema,\n para logo em seguida fazer o emprestimo:\n");
        scanf("%d", &id_busca);

        for (int i = 0; i < quantidade; i++)
        {

            if (livros[i].codigo == id_busca)
            {
                consutar = i;
                break;
            }
            else
            {
                consutar = -1;
            }
        }
        if (consutar != -1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("Livro Encontrado!!!\n");
            printf("Titulo:%s\n", livros[consutar].titulo);
            printf("Codigo do livro:%d\n", livros[consutar].codigo);
            if (livros[consutar].disponivel == 1)
            {
                printf("Status do livro:'DISPONIVEL!!!'\n");
                printf("Precione entre para comfimar o emprestimo do livro:\n");
                printf("Pressione Enter para continuar...\n");
                pausar();
                getchar(); // Aguarda o usuário pressionar Enter
                printf("Confirmando...\n");
                livros[consutar].disponivel = 0;
            }
            else
            {
                printf("Status do livro:'EMPRESTADO!!!'\n");
                printf("Infezlimente o livre ja foi emprestado!!!\n Tende fazer outro!!!\n");
            }
        }
        else
        {
            printf("Livro não encontrado!!!\n Verifique se o codigo do livro está correto!!!\n");
        }
        printf("Digite '1' para sair, e '0' para continuir no emprestimo de livro:\n");
        scanf("%d", &sair);
    }
}

int main()
{

    int n = 0;
    int opcao, sair = 0, quantidade = 0;
    Livro livros[50];
    while (sair == 0)
    {
        printf("-----------------LIVROS-----------------\n");
        printf("Escolha uma opção:\n");
        printf("1-Cadrastra livro(s):\n");
        printf("2-Consultar livro(s):\n");
        printf("3-Emprestar livro(s):\n");
        printf("4-Sair:\n");
        scanf("%d", &opcao);
        if (opcao == 4)
        {
            sair = 1;
            break;
        }

        switch (opcao)
        {
        case 1:
            printf("Digite a quantidade de livros que deseja cadrastra no sistema:\n");
            scanf("%d", &n);

            cadastar_livro(livros, n, &quantidade);

            break;
        case 2:
            consultar_livros(livros, quantidade);

            break;
        case 3:
            emprestar_livro(livros, quantidade);
            break;

        default:
            printf("Opção incorreta!!!, tente novamente!!!\n");
            break;
        }
    }

    return 0;
}