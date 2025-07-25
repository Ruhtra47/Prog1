#include <stdio.h>

typedef struct
{
    int id;
    int size;
    int numeros[10][10];
} tCartela;

tCartela LeCartela();
void ImprimeCartela(tCartela cartela);

int main()
{
    tCartela cartela;
    cartela = LeCartela();

    ImprimeCartela(cartela);

    return 0;
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