#include <stdio.h>

typedef struct
{
    int id;
    int size;
    int numeros[10][10];
    int marcados[10][10];
} tCartela;

typedef struct
{
    int n_cartelas;
    tCartela cartelas[100];
} tPartida;

tCartela LeCartela();
void ImprimeCartela(tCartela cartela);
tCartela MarcaCartela(tCartela cartela, int pedra);
int VenceuCartela(tCartela cartela);
tCartela ResetaCartela(tCartela cartela);

tPartida LeCartelasPartida();
void ImprimeInvCartelasPartida(tPartida partida);
tPartida ResetaPartida(tPartida partida);
void JogaPartida(tPartida partida);

int main()
{
    tPartida partida;
    int qtdPartidas, i;
    partida = LeCartelasPartida();
    scanf("%d", &qtdPartidas);
    for (i = 0; i < qtdPartidas; i++)
    {
        if (i != 0)
            printf("\n");
        printf("PARTIDA %d\n", i + 1);
        partida = ResetaPartida(partida);
        JogaPartida(partida);
    }
    return 0;
}

void JogaPartida(tPartida partida)
{
    int pedra, i, tem_vencedor = 0;

    while ((scanf("%d", &pedra)) && pedra != -1)
    {
        for (i = 0; i < partida.n_cartelas; i++)
        {
            partida.cartelas[i] = MarcaCartela(partida.cartelas[i], pedra);
        }

        for (i = 0; i < partida.n_cartelas; i++)
        {
            if (VenceuCartela(partida.cartelas[i]))
            {
                tem_vencedor = 1;
                break;
            }
        }
        if (tem_vencedor)
            break;
    }
    scanf("%*[^\n]");

    if (tem_vencedor)
    {
        printf("COM VENCEDOR\n");
        for (i = 0; i < partida.n_cartelas; i++)
        {
            if (VenceuCartela(partida.cartelas[i]))
            {
                ImprimeCartela(partida.cartelas[i]);
            }
        }
    }
    else
    {
        printf("SEM VENCEDOR\n");
    }
}

tPartida ResetaPartida(tPartida partida)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < partida.n_cartelas; i++)
    {
        partida.cartelas[i] = ResetaCartela(partida.cartelas[i]);
    }

    return partida;
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

int VenceuCartela(tCartela cartela)
{
    int venceu = 1;
    int i = 0, j = 0;
    for (i = 0; i < cartela.size; i++)
    {
        for (j = 0; j < cartela.size; j++)
        {
            if (cartela.marcados[i][j] != 1)
                return 0;
        }
    }

    return 1;
}

tCartela ResetaCartela(tCartela cartela)
{
    int i = 0, j = 0;
    for (i = 0; i < cartela.size; i++)
    {
        for (j = 0; j < cartela.size; j++)
        {
            cartela.marcados[i][j] = 0;
        }
    }
    return cartela;
}

tCartela MarcaCartela(tCartela cartela, int pedra)
{
    int i = 0, j = 0;
    for (i = 0; i < cartela.size; i++)
    {
        for (j = 0; j < cartela.size; j++)
        {
            if (cartela.numeros[i][j] == pedra)
                cartela.marcados[i][j] = 1;
        }
    }
    return cartela;
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