#include <stdio.h>

int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

int main()
{
    int res = 0;

    int h, w;
    scanf("%d %d", &w, &h);

    char mat[h][w];

    int i, j;
    for (i = 0; i < h; i++)
        scanf("%s", mat[i]);

    for (i = 1; i < h - 1; i++)
    {
        for (j = 1; j < w - 1; j++)
        {
            if (mat[i][j] == '1')
                continue;

            int d;
            for (d = 0; d < 8; d++)
            {
                if (mat[i + dy[d]][j + dx[d]] == '1')
                {
                    res++;
                    break;
                }
            }
        }
    }

    printf("%d\n", res);
}