#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pause()
{
#ifdef _WIN32
    system("pause");
#else
    printf("Pressione Enter para continuar...");
    while (getchar() != '\n')
        ; // Limpa o buffer e espera Enter
#endif
}
int cerificar_cpf(char cpf_inicial[])
{

    for (int i = 0; cpf_inicial[i] != '\0'; i++)
    {
        if (cpf_inicial[i] < '0' || cpf_inicial[i] > '9')
        {
            return 0;
        }
    }
    return 1;
}

int verificar_tamanho(char cpf_inicial[])
{
    int tamanho = 0;

    for (int i = 0; cpf_inicial[i] != '\0'; i++)
    {
        tamanho++;
    }
    if (tamanho == 11)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    char cpf_inicial[12];
    while (1)
    {
        printf("Entrei no loop!\n");
        printf("Digite o cpf, somente digitos de 0 a 9 \n");
        // fgets(cpf_inicial, sizeof(cpf_inicial), stdin);
        // cpf_inicial[strcspn(cpf_inicial, "\n")] = '\0';
        scanf("%s12[^\n]", cpf_inicial);

        if ((cerificar_cpf(cpf_inicial) == 0) || verificar_tamanho(cpf_inicial) == 0)
        {
            printf("--------------------------------------------------------------\n");
            printf("ERRO!!!!\n");
            printf("CPF invalido,digite novamente contendo somente 11 digitos de 0 a 9 \n");
        }
        else
        {
            printf("--------------------------------------------------------------\n");
            printf("CPF valido\n");
            break;
            ;
        }
    }
    char cpf_final[15];
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        cpf_final[j++] = cpf_inicial[i];
        if ((i + 1) % 3 == 0 && i < 8)
        {
            cpf_final[j++] = '.';
        }
    }
    cpf_final[j++] = '-';
    for (int i = 9; i < 12; i++)
    {
        cpf_final[j++] = cpf_inicial[i];
       
    }
   printf("%d\n", j);
    printf("CPF formatado:\n %s\n", cpf_final);
   
    printf("--------------------------------------------------------------\n");
    pause();

    return 0;
}