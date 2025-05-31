#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
    float notas[20][10];
    float todas_as_notas[20]={0.0};
    float notas_da_turma=0.0;

    printf("preenchar as nostas de cada  aluno de acordo com aseguencia :\n");

    for (int aluno = 0; aluno < 20; aluno++)
    {
        printf("Digite a nota do aluno %d°:\n", aluno + 1);
        for (int nota = 0; nota < 10; nota++)
        {
           printf("Nota %d°:", nota + 1);
            scanf("%f", &notas[aluno][nota]);
            todas_as_notas[aluno]+=notas[aluno][nota];
            notas_da_turma+=notas[aluno][nota];
            if (notas[aluno][nota]>=7)
            {
                contador++;
            }
            
        }
    }
    printf("--------------------------------------------------------------:\n");
    float procetagem = (float)contador /200.0 * 100.0;
    float media[20];
    for (int aluno = 0; aluno < 20; aluno++){
        media[aluno]= (todas_as_notas[aluno] / 10);
    }

    float media_turma = notas_da_turma /200;
    printf("Meida da turma = % .2f \n",media_turma);
    printf("--------------------------------------------------------------:\n");
    printf("percentual de alunos acima de 7,0 = % .2f %%\n",procetagem);
    printf("--------------------------------------------------------------:\n");
    printf("Media de cada aluno : \n");
    for (int aluno = 0; aluno < 20; aluno++){
        printf(" Aluno %d° \n",aluno+1);
        printf(" = %.2f \n",media[aluno]);
        printf("--------------------------------------------------------------:\n");
    }
    return 0;
}