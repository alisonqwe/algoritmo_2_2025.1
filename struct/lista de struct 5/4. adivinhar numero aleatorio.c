#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{

    char nome[50];
    int tentaivas;

} Jogador;

int main()
{
    Jogador jogador;
    srand(time(NULL));
    int numero_aleatorio = rand() % 100 + 1;
    int numero_digitado = 0;

    printf("Qual o seu nome ?\n");
    scanf(" %49[^\n]", jogador.nome);

    while (numero_aleatorio != numero_digitado)
    {
        printf("%s, Tente adivinhar um numero aleatorio de (1 a 100):\n", jogador.nome);
        scanf("%d", &numero_digitado);
        jogador.tentaivas++;

        if (numero_aleatorio > numero_digitado)
        {
            printf("Seu palpite foi menor que o número sorteado! Tente novamente.\n");
        }
        if (numero_aleatorio < numero_digitado)

        {
            printf("Seu palpite foi maior que o número sorteado! Tente novamente.\n");
        }
    }
    printf("Parabéns, %s!  Você acertou o número em %d tentativas.\n", jogador.nome, jogador.tentaivas);

    return 0;
}