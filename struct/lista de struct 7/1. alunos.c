#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    char nome[50];
    char curso[50];
    float media_final;

} Aluno;

void cadrasta_aluno(Aluno alunos[], int n)
{
    printf("\nPreencha os dasdos dos alunos :\n");

    for (int i = 0; i < n; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Preencha o cadrasto do %d aluno :\n", i + 1);
        printf("Digita o nome do aluno:\n");
        scanf(" %49[^\n]", alunos[i].nome);
        printf("Digite o nome do curso:\n");
        scanf(" %49[^\n]", alunos[i].curso);
        printf("Digita a sua media final:\n");
        scanf(" %f", &alunos[i].media_final);
    }
}

void exibir_alunos_aprovados(Aluno alunos[], int n)
{
    printf("\nAluno(s) aprovado(s):\n");
    for (int i = 0; i < n; i++)
    {
        if (alunos[i].media_final >= 7)
        {
            printf("--------------------------------------------------\n");
            printf("Aluno %s,foi Aprovado :\n", alunos[i].nome);
            printf("No Curso :%s\n", alunos[i].curso);
            printf("Com Media final:%.2f\n", alunos[i].media_final);
        }
    }
}

void exibir_todos_os_alunos(Aluno alunos[], int n)
{
    printf("\nTodos os alunos no sistemas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("--------------------------------------------------\n");
        printf("Aluno:%d\n", i + 1);
        printf("Nome do aluno:%s\n", alunos[i].nome);
        printf("Nome do curso:%s\n", alunos[i].curso);
        printf("Media final:%.2f\n", alunos[i].media_final);
    }
}

int main()
{
    int n;

    printf("Digite a quantida de alunos que dejesa cadrasta :\n");
    scanf("%d", &n);
    Aluno alunos[n];

    cadrasta_aluno(alunos, n);
    exibir_todos_os_alunos(alunos, n);
    exibir_alunos_aprovados(alunos, n);

    return 0;
}