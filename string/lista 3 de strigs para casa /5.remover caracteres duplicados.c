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

int tamanho_palavra(char palavra[])
{
    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {

        cont++;
    }
    return cont;
}
int main()
{

    char palavra[100], nova_palavra[100];

    printf("Digite a palavar para verificar se a mesma esta pura: \n");

    scanf("%100[^\n]s", palavra);
    int tamanho = tamanho_palavra(palavra);
    int tamanho_unico = 0, existe = 0, verificar = 0;

    for (int i = 0; i < tamanho; i++)
    {

        for (int j = 0; j < tamanho_unico; j++)
        {
            if (palavra[i] == nova_palavra[j])
            {
                existe = 1;
                verificar = 1;
                break;
            }
        }
        if (existe == 0)
        {
            nova_palavra[tamanho_unico] = palavra[i];
            tamanho_unico++;
        }

        existe = 0;
    }
    if (verificar == 0)
    {
        printf("A palavra mágica está pura e sem duplicatas!\n");
    }
    else
    {
        printf("A palavra mágica não está pura!\n");
    }

    nova_palavra[tamanho_unico] = '\0';
    printf("palavra final =%s \n", nova_palavra);
    return 0;
}