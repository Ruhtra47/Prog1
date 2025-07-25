#include <stdio.h>

typedef struct
{
    int id;
    int size;
    int numeros[10][10];
} tCartela;

typedef struct
{
    int n_cartelas;
    tCartela cartelas[100];
} tPartida;

tCartela LeCartela();
void ImprimeCartela(tCartela cartela);

tPartida LeCartelasPartida();
void ImprimeInvCartelasPartida(tPartida partida);

int main()
{
    tPartida partida;
    partida = LeCartelasPartida();
    ImprimeInvCartelasPartida(partida);
    return 0;
}

tPartida LeCartelasPartida()
{
    tPartida partida;

    scanf("%d", &partida.n_cartelas);

    int i = 0;
    for (i = 0; i < partida.n_cartelas; i++)
        partida.cartelas[i] = LeCartela();

    return partida;
}

void ImprimeInvCartelasPartida(tPartida partida)
{
    int i = 0;
    for (i = partida.n_cartelas - 1; i >= 0; i--)
    {
        ImprimeCartela(partida.cartelas[i]);
    }
}

tCartela LeCartela()
{
    tCartela cartela;
    scanf("%d %d", &cartela.id, &cartela.size);

    int i = 0, j = 0;
    for (i = 0; i < cartela.size; i++)
    {
        for (j = 0; j < cartela.size; j++)
        {
            scanf("%d", &cartela.numeros[j][i]);
        }
    }

    return cartela;
}

void ImprimeCartela(tCartela cartela)
{
    printf("ID:%d\n", cartela.id);

    int i = 0, j = 0;
    for (i = 0; i < cartela.size; i++)
    {
        for (j = 0; j < cartela.size; j++)
        {
            if (j == cartela.size - 1)
                printf("%03d", cartela.numeros[i][j]);
            else
                printf("%03d|", cartela.numeros[i][j]);
        }
        printf("\n");
    }
}