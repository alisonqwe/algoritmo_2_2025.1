#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char nome[50];
    int vida;
    int ataque;
    int defesea;

} Personagem;
int verificar_vencedor(Personagem *p1, Personagem *p2)
{
    if (p1->vida <= 0 || p2->vida <= 0)
    {
        return 1;
    }
    return 0;
}
void inicio_personagem(Personagem *p)
{

    printf("Digite o nome do personagem ");
    scanf(" %49[^\n]", p->nome);
    p->vida = rand() % 101 + 80;
    p->ataque = rand() % 31 + 10;
    p->defesea = rand() % 31 + 10;
}
void aparecer_dados(Personagem p)
{

    printf("Nome: %s | ", p.nome);
    printf("Vida: %d | ", p.vida);
    printf("Ataque: %d | ", p.ataque);
    printf("Defesa: %d \n", p.defesea);
}

void atacar(Personagem *atacante, Personagem *defensor)
{
    while (1)
    {
        if (verificar_vencedor(atacante, defensor) == 1)
        {
            if (atacante->vida <= 0 && defensor->vida > 0)
            {
                printf("%s foi derrotado!!!", atacante->nome);
                printf("%s é o VENCEDOR!!", defensor->nome);
                break;
            }
            else if (atacante->vida > 0 && defensor->vida <= 0)
            {
                printf("%s foi derrotado!!!", defensor->nome);
                printf("%s é o VENCEDOR!!", atacante->nome);
                break;
            }
            else if (atacante->vida <= 0 && defensor->vida <= 0)
            {
                printf("Os dois foram derrotados!!!");
                break;
            }
        }

        printf("%s ataca %s\n", atacante->nome, defensor->nome);
        (*defensor).vida -= (atacante->ataque - defensor->defesea);
        printf("%s ataca %s\n", defensor->nome, atacante->nome);
        (*atacante).vida -= (defensor->ataque - atacante->defesea);
        printf("Status após a rodada:\n");
        aparecer_dados(*atacante);
        aparecer_dados(*defensor);
        // i= verificar_vencedor(atacante,defensor);
        if (verificar_vencedor(atacante, defensor) == 1)
        {
            if (atacante->vida <= 0 && defensor->vida > 0)
            {
                printf("%s foi derrotado!!!", atacante->nome);
                printf("%s é o VENCEDOR!!", defensor->nome);
                break;
            }
            else if (atacante->vida > 0 && defensor->vida <= 0)
            {
                printf("%s foi derrotado!!!", defensor->nome);
                printf("%s é o VENCEDOR!!", atacante->nome);
                break;
            }
            else if (atacante->vida <= 0 && defensor->vida <= 0)
            {
                printf("Os dois foram derrotados!!!");
                break;
            }
        }
        printf("%s ataca %s\n", atacante->nome, defensor->nome);
        (*defensor).vida -= (atacante->ataque - defensor->defesea);
        printf("%s ataca %s\n", defensor->nome, atacante->nome);
        atacante->vida -= (defensor->ataque - atacante->defesea);
        printf("Status após a rodada:\n");
        aparecer_dados(*atacante);
        aparecer_dados(*defensor);
    }
}

int *maior_ataque(Personagem *p1, Personagem *p2)
{
    if (p1->ataque > p2->ataque)
    {
        return &p1->ataque;
    }
    return &p2->ataque;
}
void trocar_atributos(Personagem *p1, Personagem *p2)
{

    int auxi = 0;

    // trocando ataque
    auxi = p1->ataque;
    p1->ataque = p2->ataque;
    p2->ataque = auxi;
    // trocando defesa
    auxi = p1->defesea;
    p1->defesea = p2->defesea;
    p2->defesea = auxi;

    printf("Status após a troca de atributos:\n");
    aparecer_dados(*p1);
    aparecer_dados(*p2);
}

int main()
{
    srand(time(NULL));
    Personagem mago, guereiro;
    int *maior;
    inicio_personagem(&mago);
    inicio_personagem(&guereiro);
    aparecer_dados(mago);
    aparecer_dados(guereiro);

    atacar(&mago, &guereiro);
    atacar(&guereiro, &mago);

    *maior = *maior_ataque(&mago, &guereiro);

    return 0;
}