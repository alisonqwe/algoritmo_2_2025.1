#include <stdio.h>
#include <string.h>

int verificar(char letras[], char caractere)
{
    for (int i = 0; letras[i] != '\0'; i++)
    {
        if (letras[i] == caractere)
        {
            return 1;
        }
    }
    return 0;
}

void seguencia_repetcao(char palavra[], char letras[], int seguencia[])
{
int tamanho = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (verificar(letras, palavra[i]) == 0)
        {
            letras[tamanho] = palavra[i];
            seguencia[tamanho] = 0;
            for (int k = 0; palavra[k] != '\0'; k++)
            {
                if (palavra[i] == palavra[k])
                {
                    seguencia[tamanho]++;
                }
            }
            tamanho++;

        }
    }
    char palavra_final[(tamanho * 2) + 1];
    int j = 0;
    for (int i = 0; i < tamanho; i++)
    {
        palavra_final[j++] = (char)(seguencia[i]+'0');
        palavra_final[j++] = letras[i];
    }
    palavra_final[j++] = '\0';
    printf("%s\n", palavra_final);
}

int main()
{

    char palavra[50], letras[50];
    int seguencia[50];
    printf("Digite a palavra:\n");
    scanf(" %49[^\n]", palavra);
    seguencia_repetcao(palavra, letras, seguencia);
while (bre)
{
    /* code */
}

    return 0;
}