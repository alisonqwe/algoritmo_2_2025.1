#include <stdio.h>
#include <stdlib.h>

int quantidade = 5;
typedef struct
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media_geral;

} Alunos;

int verificar_existe(Alunos alunos[], int matriula)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].matricula == matriula)
        {
            return i;
        }
    }
    return -1;
}

void cadastra_alunos(Alunos alunos[])
{
    int auxi = 0;
    for (int i = 0; i < quantidade; i++)
    {
        printf("\n-----------------------------------------------------------\n");
        printf("Digite a matricula do aluno %d:", i + 1);
        scanf("%d", &auxi);
        while (1)
        {
            if (verificar_existe(alunos, auxi) == -1)
            {
                alunos[i].matricula = auxi;
                break;
            }
            else
            {
                printf("Matricula ja existe no sistema!!!\n");
                printf("Digite novamente:");
                scanf("%d", &auxi);
            }
        }

        printf("Digite o nome do aluno:");
        scanf(" %49[^\n]", alunos[i].nome);
        printf("Digite a 1 nota do aluno %s :", alunos[i].nome);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2 nota do aluno %s :", alunos[i].nome);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a 3 nota do aluno %s :", alunos[i].nome);
        scanf("%f", &alunos[i].nota3);
        alunos[i].media_geral = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("\n-----------------------------------------------------------\n");
    }
}

int maior_media(Alunos alunos[])
{
    int j = 0;
    float maior = -1;
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].media_geral > maior)
        {
            maior = alunos[i].media_geral;
            j = i;
        }
    }
    return j;
}
int menor_media(Alunos alunos[])
{
    int j = 0;
    float menor = 11;
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].media_geral < menor)
        {
            menor = alunos[i].media_geral;
            j = i;
        }
    }
    return j;
}
int maior_1nota(Alunos alunos[])
{
    int j = 0;
    float maior = -1;
    for (int i = 0; i < quantidade; i++)
    {
        if (alunos[i].nota1 > maior)
        {
            maior = alunos[i].nota1;
            j = i;
        }
    }
    return j;
}

int main()
{

    Alunos alunos[quantidade];
    int opcao = 0, i = 0;
    cadastra_alunos(alunos);

    while (opcao != 4)
    {

        printf("\n----------------------MENU--------------------------\n");
        printf("1-maior nota da primeira prova\n");
        printf("2-maior media\n");
        printf("3-menor media\n");
        printf("4-sair");
        printf("\n----------------------------------------------------\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            i = maior_1nota(alunos);
            printf("O aluno com a primeira nota maior é o %s com a nota %.2f", alunos[i].nome, alunos[i].nota1);
            break;
        case 2:
            i = maior_media(alunos);
            printf("O aluno com a maior media é %s com a media  %.2f", alunos[i].nome, alunos[i].media_geral);
            break;
        case 3:
            i = menor_media(alunos);
            printf("O aluno com a menor media é %s com a media  %.2f", alunos[i].nome, alunos[i].media_geral);
            break;
        case 4:
            printf("Saindo...");
            break;
        default:
            printf("Opção invalida!!!");
            break;
        }
    }

    return 0;
}