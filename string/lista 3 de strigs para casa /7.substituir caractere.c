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

void trocar_caractere(char palavra[], char caractere_substituir, char caractere_substituido, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] == caractere_substituir)
        {
            palavra[i] = caractere_substituido;
        }
    }
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

    char palavra[100], caractere_substituido, caractere_substituir;

    printf("Digite a palavar magica: \n");

    scanf(" %99[^\n]", palavra);
    int tamanho = tamanho_palavra(palavra);

    printf("palavra inicial =%s \n", palavra);
    printf("Digite o caractere que vai ser substituido do palavra: \n");

    scanf(" %c", &caractere_substituido);
    printf("Digite o caractere que vai substituir o caractere '%c': \n",caractere_substituido);

    scanf(" %c", &caractere_substituir);
    trocar_caractere(palavra, caractere_substituido, caractere_substituir, tamanho);
    printf("palavra final =%s \n", palavra);
    return 0;
}