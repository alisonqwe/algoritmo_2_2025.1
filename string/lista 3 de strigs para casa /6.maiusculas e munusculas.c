#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

int tamanho_palavra(char palavra_magica[])
{
    int cont = 0;
    for (int i = 0; palavra_magica[i] != '\0'; i++)
    {

        cont++;
    }
    return cont;
}

int verificar_palavra(char palavra_magica[], int i)
{

    if ((palavra_magica[i] >= 'A' && palavra_magica[i] <= 'Z') || (palavra_magica[i] >= 'a' && palavra_magica[i] <= 'z'))
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

    char palavra_magica[100];
    srand(time(NULL));

    printf("Digite a palavar magica: \n");

    scanf("%99[^\n]", palavra_magica);
    int tamanho = tamanho_palavra(palavra_magica);
    int numero = 0;

    for (int i = 0; i < tamanho; i++)
    {
        numero = rand();
        if (numero % 2 == 0)
        {
            if ((palavra_magica[i] >= 'A' && palavra_magica[i] <= 'Z') || (verificar_palavra(palavra_magica, i) == 0))
            {
                continue;
            }
            else

            {
                palavra_magica[i] = palavra_magica[i] - 32;
            }
        }
        else
        {
            if ((palavra_magica[i] >= 'a' && palavra_magica[i] <= 'z') || (verificar_palavra(palavra_magica, i) == 0))
            {
                continue;
            }
            else
            {
                palavra_magica[i] = palavra_magica[i] + 32;
            }
        }
    }

    printf("palavra final =%s \n", palavra_magica);
    return 0;
}