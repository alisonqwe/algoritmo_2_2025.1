#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char titulo[51];
    char ISBN[14];
    int ano;
} Livros;

void remover(Livros *L, int *quantidade, int i)
{

    for (int j = i; j < *quantidade - 1; j++)
    {
        L[j] = L[j + 1];
    }
    (*quantidade)--;
}
int verificar_ISBN(Livros *L, char ISBN[], int indice)
{
    int i = 0;

    for (; i < indice; i++)
    {
        if (strcmp(L[i].ISBN, ISBN) == 0)
        {
            return i;
            break;
        }
    }

    return -1;
}

void cadastra_livros(Livros *L, int quantidade)
{
    char auxiliar[14];
    printf("Preencha o cadrastro de %d livros \n", quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n-------------------------------------------------------------------------------\n");
        printf("Digite o Titulo do Livro %d:", i + 1);
        scanf(" %51[^\n]", L[i].titulo);
        printf("Digite o ISBN:");
        scanf(" %14[^\n]", auxiliar);
        while (1)
        {
            if (verificar_ISBN(L, auxiliar, i) != -1)
            {
                printf("O codidgo ISBN digitado já existe, digite outro diferente :\n");
                scanf(" %14[^\n]", auxiliar);
            }
            else
            {
                strcpy(L[i].ISBN, auxiliar);
                break;
            }
        }
        printf("Digite o ano do livro:");
        scanf("%d", &L[i].ano);
        printf("\n-------------------------------------------------------------------------------\n");
    }
}

void livros_cadastrados(Livros *L, int quantidade)
{

    printf("Todos os livros cadrastrados no sistemas :\n");
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n-------------------------------------------------------------------------------\n");
        printf("Livro %d :\n", i + 1);
        printf(" Titulo do Livro: %s \n", L[i].titulo);
        printf(" ISBN: %s \n", L[i].ISBN);
        printf(" Ano do livro: %d \n", L[i].ano);
        printf("\n-------------------------------------------------------------------------------\n");
    }
}

void remover_livro_pelaISBN(Livros *L, int *quantidade)
{
    char auxiliar[14];
    printf("\n-------------------------------------------------------------------------------\n");
    printf("Digite o codigo ISBN do livro que você deseja remover :");
    scanf(" %14[^\n]", auxiliar);

    if (verificar_ISBN(L, auxiliar, *quantidade) != -1)
    {
        int i = verificar_ISBN(L, auxiliar, *quantidade);
        printf("Livro encontrado");
        printf(" Titulo do Livro: %s \n", L[i].titulo);
        printf(" ISBN: %s \n", L[i].ISBN);
        printf(" Ano do livro: %d \n", L[i].ano);

        remover(L, quantidade, i);
    }
    else
    {
        printf("livro não encontrado:\n");
    }

    printf("\n-------------------------------------------------------------------------------\n");
}

int main()
{
    int quantidade = 0;
    printf("Digite a quantidade de livros que você deseja cadrastra :");
    scanf("%d", &quantidade);
    Livros livros[quantidade];

    cadastra_livros(livros, quantidade);
    livros_cadastrados(livros, quantidade);
    remover_livro_pelaISBN(livros, &quantidade);
    livros_cadastrados(livros, quantidade);

    return 0;
}