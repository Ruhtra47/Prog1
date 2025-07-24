#include <stdio.h>

#define MAX 600

int w, h;
char matriz[MAX][MAX + 1];
char copia[MAX][MAX + 1];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int contarTerra()
{
    int cont = 0, i, j;
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++)
            if (matriz[i][j] == '0')
                cont++;
    return cont;
}

int isSafe(int i, int j)
{
    if ((i >= 0) && (i < h) && (j >= 0) && (j < w))
        return 1;
    return 0;
}

int main()
{
    int i, j, t, d;

    int horas;
    scanf("%d", &horas);
    scanf("%d %d", &w, &h);

    for (i = 0; i < h; i++)
        scanf("%s", matriz[i]);

    int inicio = contarTerra();

    for (t = 0; t < horas; t++)
    {
        for (i = 0; i < h; i++)
            for (j = 0; j <= w; j++)
                copia[i][j] = matriz[i][j];

        for (i = 0; i < h; i++)
        {
            for (j = 0; j < w; j++)
            {
                if (copia[i][j] == '1')
                {
                    for (d = 0; d < 4; d++)
                    {
                        int ni = i + dx[d];
                        int nj = j + dy[d];
                        if (isSafe(ni, nj) && copia[ni][nj] == '0')
                        {
                            matriz[ni][nj] = '1';
                        }
                    }
                }
            }
        }
    }

    int final = contarTerra();

    printf("%d %d\n", inicio, final);
    return 0;
}
