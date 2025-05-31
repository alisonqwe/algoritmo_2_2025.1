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

int verificar_palvras(char frase[])
{
    int cont = 0;
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
        {
            cont++;
        }
    }

    return cont;
}
int main()
{

    char frase[100];
    printf("Entrei no loop!\n");
    printf("Digite a frase para verificar a classificação da mesma: \n");

    scanf("%100[^\n]s", frase);
    int verificar = verificar_palvras(frase);

    printf("--------------------------------------------------------------\n");
    if (verificar>=26)
    {
        printf("A frase digitada é completa !!\n");
    }else if (verificar>=(26/2))
    {
        printf("A frase digitada é quase completa !!\n");
    }else
    {
        printf("A frase digitada foi mal elaborada !!\n");
    }
    
    
    

    printf("--------------------------------------------------------------\n");
    pause();

    return 0;
}