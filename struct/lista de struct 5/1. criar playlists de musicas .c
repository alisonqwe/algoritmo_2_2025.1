#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100;
typedef struct
{
    char nome_da_musica[100];
    char nome_do_cantor[100];
} Musicas;
typedef struct
{
    char nome_da_playlist[100];
    Musicas musicas[100];
    int quant_musicas;
} Playlists;
int buscar_playlist(char playlist_buscar[], Playlists Playlists[], int cont_playlist)
{

    for (int i = 0; i < cont_playlist; i++)
    {
        if (strcmp(playlist_buscar, Playlists[i].nome_da_playlist) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    Playlists playlists[100];
    // Musicas musicas[100];

    int n, opcao = 0, cont_paylist = 0, numero_da_playlist;

    char playlist_buscar[100];

    printf("Quantas playlists deseja criar?\n");
    scanf("%d", &n);

    cont_paylist += n;

    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome da %d playlist:\n", i + 1);
        scanf(" %99[^\n]", playlists[i].nome_da_playlist);
    }
    while (opcao != 3)
    {

        printf("-------------------------menu---------------------------\n");
        printf("ESCOLHA UMA OPÇÃO :\n");
        printf("1- Adicionar música :\n");
        printf("2- Buscar Playlist :\n");
        printf("3- Sair :\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("-------------------------Adiconar música---------------------------\n");

            printf("Digite o nome da playlsite que voçê quer adicionar, para veriguar se ela existe no sistema!:\n");
            scanf(" %[^\n]", playlist_buscar);
            while (buscar_playlist(playlist_buscar, playlists, cont_paylist) == -1)
            {
                printf("Playlist não encontrada!!!\n certifique do nome da Playlist esta correto e digite novamente: \n ");
                scanf(" %s[^\n]", playlist_buscar);
            }
            numero_da_playlist = buscar_playlist(playlist_buscar, playlists, cont_paylist);
            printf("Nome da Playlist que vai ser adicionada a musica :%s\n", playlists[numero_da_playlist].nome_da_playlist);
            printf("Digite o nome da música:\n");
            scanf(" %99[^\n]", playlists[numero_da_playlist].musicas[playlists->quant_musicas].nome_da_musica);
            // playlists[numero_da_playlist].quant_musicas++;
            printf("Digite o nome do cantos:\n");
            scanf(" %99[^\n]", playlists[numero_da_playlist].musicas[playlists->quant_musicas].nome_do_cantor);
            playlists[numero_da_playlist].quant_musicas++;
            break;
        case 2:
            printf("-------------------------Buscar Playlist---------------------------\n");
            printf("Digite o nome da playlist:\n");
            scanf(" %[^\n]", playlist_buscar);
            if (buscar_playlist(playlist_buscar, playlists, cont_paylist) == -1)
            {
                printf("Playlist não encontrada!!!\n");
            }
            else
            {
                numero_da_playlist = buscar_playlist(playlist_buscar, playlists, cont_paylist);
                printf("Playlist encontrada com sucesso!!!\n");
                printf("Nome da Playlist: %s\n", playlists[numero_da_playlist].nome_da_playlist);
                printf("-------------------------Músicas---------------------------\n");
                for (int i = 0; i < playlists[numero_da_playlist].quant_musicas; i++)
                {
                    printf("%d. %s - %s \n",i+1, playlists[numero_da_playlist].musicas[i].nome_da_musica, playlists[numero_da_playlist].musicas[i].nome_do_cantor);
                    
                }
            }

            break;
        default:
        printf("OPÇÃO NÃO DEFINIDA, DIGITE UM OPÇÃO VALIDA !!!!!");
            break;
        }
    }
    return 0;
}