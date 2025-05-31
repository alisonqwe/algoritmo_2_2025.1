#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    char marca[15];
    int ano_de_fabricacao;
    float preco;

} Carros;

void carros_precos_inferiores(Carros carros[], float preco)
{
    int cont = 0;
    for (int i = 0; i < 5; i++)
    {
        if (carros[i].preco < preco)
        {
            cont++;
            printf("-------------------------------------------------------\n");
            printf("Carro %d com o preço inferiro a %.2f:\n", cont, preco);

            printf("Marca:%s\n", carros[i].marca);
            printf("Ano de fabricação:%d\n", carros[i].ano_de_fabricacao);
            printf("Preço:%.2f\n", carros[i].preco);
        }
    }
}

int main()
{

    Carros carros[5];
    float valor = 0;

    printf("Preencha os dasdos dos carros : \n");

    for (int i = 0; i < 5; i++)
    {

        printf("Digite a marca do %d Carros:\n", i + 1);
        scanf(" %s14[^\n]", carros[i].marca);
        printf("Digite o ano de fabricação do carro '%s':\n", carros[i].marca);
        scanf(" %d", &carros[i].ano_de_fabricacao);
        printf("Digite o preço do carro '%s':\n", carros[i].marca);
        scanf(" %f", &carros[i].preco);
    }

    printf("Digite um preço para buscar todos os carros com preços inferiores:\n");
    scanf("%f", &valor);
    carros_precos_inferiores(carros,valor);

    return 0;
}