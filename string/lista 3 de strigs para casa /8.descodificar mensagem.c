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

int tamanho_palavra(char palavra[])
{
    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {

        cont++;
    }
    return cont;
}

void trocar_numero_proX(char palavra[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] >= '0' && palavra[i] <= '9')
        {
            palavra[i] = 'X';
        }
    }
}

void eliminar_sinais_de_pontuacao(char palavra[], int tamanho, char nova_palvra[])
{

    int novo_tamanho = 0, cont = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= '0' && palavra[i] <= '9') || (palavra[i] == ' '))
        {
            cont = 1;
        }
        if (cont == 1)
        {
            nova_palvra[novo_tamanho] = palavra[i];
            novo_tamanho++;
            cont = 0;
        }
    }
    nova_palvra[novo_tamanho] = '\0';
}

void inverter_palavra(char palavra[], int tamanho)
{
    char auxiliar;
    for (int i = 0; i < tamanho / 2; i++)
    {
        auxiliar = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = auxiliar;
    }
}

int verificar_palindromo_de3(char nova_palavra[], int novo_tamanho)
{
    int cont = 0;
    for (int i = 0; i < novo_tamanho - 2; i++)
    {
        if (nova_palavra[i] == nova_palavra[i + 2])
        {
            cont++;
        }
    }
    return cont;
}
int main()
{

    char palavra[100], nova_palavra[100];

    printf("Digite a palavar para decodificá-la: \n");

    scanf("%99[^\n]", palavra);

    int tamanho = tamanho_palavra(palavra);
    trocar_numero_proX(palavra, tamanho);
    inverter_palavra(palavra, tamanho);
    eliminar_sinais_de_pontuacao(palavra, tamanho, nova_palavra);
    int novo_tamanho = tamanho_palavra(nova_palavra);

    // printf("Palavra final = \n %s \n", palavra);
    printf("Palavra apos as transformações  = \n %s \n", nova_palavra);

    if (verificar_palindromo_de3(nova_palavra, novo_tamanho) == 0)
    {
        printf("A palavra final não possui nem uma seguencia palindrômica de tamanho 3 !!!\n");
    }
    else
    {
        printf("A palavra final possui %d seguencia(s) palindrômicas \n", verificar_palindromo_de3(nova_palavra, novo_tamanho));
    }

    return 0;
}