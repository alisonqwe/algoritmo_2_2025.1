#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int quantidade = 0;
typedef struct
{

    char modelo[51];
    char placa[11];
    int ano;

} Veiculo;

void cadrastra_veiculos(Veiculo veiculos[])
{
    int n;
    printf("Digite a quantidade de veiculos que deseja cadrastra no sistema:\n");
    scanf("%d", &n);
    printf("Cadrastro de %d veiculos:\n", n);
    int verificar = 1;
    for (int i = quantidade; i < quantidade + n; i++)
    {
        verificar = 1;
        printf("Digite o modelo do Veiculo %d :", i + 1);
        scanf(" %51[^\n]", veiculos[i].modelo);
        printf("Digite a Placa do veiculo:\n");
        scanf(" %11[^\n]", veiculos[i].placa);
        while (verificar == 1)
        {
            for (int j = 0; j <= i; j++)
            {
                if ((strcmp(veiculos[i].placa, veiculos[j].placa) == 0) && j != i)
                {
                    printf("ERRO!!!\nJá existe um carro com essa placa, digite outra placa diferente:\n");
                    scanf(" %11[^\n]", veiculos[i].placa);
                }
                else
                {
                    verificar = 0;
                }
            }
        }

        printf("Digite o ano do veiculo:");
        scanf(" %d", &veiculos[i].ano);
    }
    quantidade = quantidade + n;
}

void todos_os_veiculos_cadrastrados(Veiculo veiculos[])
{

    printf("Todos os veiculos cadrastrados:\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n----------------------------------------------------\n");
        printf("%d Veiculo no sistema:\n", i + 1);
        printf("Modelo:%s\n", veiculos[i].modelo);
        printf("Placa:%s\n", veiculos[i].placa);
        printf("Ano:%d\n", veiculos[i].ano);
    }
}

void remover_veiculo(Veiculo veiculos[])
{
    char placa_remover[11];
    printf("Digite a placa do veiculo que deseja remover:\n");
    scanf(" %11[^\n]", placa_remover);

    for (int i = 0; i < quantidade; i++)
    {
        if (strcmp(placa_remover, veiculos[i].placa) == 0)
        {
            for (int j = i; j < quantidade - 1; j++)
            {

                Veiculo auxiliar;
                auxiliar = veiculos[j];
                veiculos[j] = veiculos[j + 1];
                veiculos[j + 1] = auxiliar;
            }
            quantidade = quantidade - 1;
            break;
        }
        else
        {
            printf("Placa do veiculo não encontrada\nCertifique se a mesma está certa e tente novamente:\n");
        }
    }
}
int main()
{
    Veiculo veiculos[100];
    int opcao = 0;
    while (opcao != 4)
    {
        printf("\n----------MENU----------\n");
        printf("1-Cadrastra veiculo(s)\n");
        printf("2-Mostra veiculos cadrastrados\n");
        printf("3-Remover veiculo(s)\n");
        printf("4-Sair(s)\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadrastra_veiculos(veiculos);
            break;

        case 2:
            todos_os_veiculos_cadrastrados(veiculos);
            break;
        case 3:
            remover_veiculo(veiculos);
            break;
        case 4:

            printf("Saindo...\n");

        default:
            printf("ERRO!!!, opção invalida, tente novamente!\n");
            break;
        }
    }

    return 0;
}