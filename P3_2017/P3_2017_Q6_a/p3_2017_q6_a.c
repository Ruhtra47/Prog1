#include <stdio.h>

int main()
{
    int l1, c1;
    int l2, c2;

    scanf("%d %d", &l1, &c1);

    char placa[l1][c1];

    int i, j;
    for (i = 0; i < l1; i++)
        scanf("%s", placa[i]);

    scanf("%d %d", &l2, &c2);

    char template[l2][c2];

    for (i = 0; i < l2; i++)
        scanf("%s", template[i]);

    for (i = 0; i <= l1 - l2; i++)
    {
        for (j = 0; j <= c1 - c2; j++)
        {
            int iguais = 1;

            int ti, tj;
            for (ti = 0; ti < l2; ti++)
            {
                for (tj = 0; tj < c2; tj++)
                {
                    if (placa[i + ti][j + tj] != template[ti][tj])
                    {
                        iguais = 0;
                        break;
                    }
                }
                if (!iguais)
                    break;
            }

            if (iguais)
                printf("%d,%d\n", j, i);
        }
    }

    return 0;
}