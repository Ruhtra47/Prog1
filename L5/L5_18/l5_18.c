#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 0;
    for (k = 0; k < n; k++)
    {
        int l1, c1;
        scanf("%d %d", &c1, &l1);

        int mat1[l1][c1];

        int i = 0, j = 0;
        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }

        int l2, c2;
        scanf("%d %d", &c2, &l2);

        int mat2[l2][c2];

        for (i = 0; i < l2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        if (c1 != l2)
        {
            printf("IMPOSSIVEL");
            printf("\n\n");
            continue;
        }

        int res[l1][c2];

        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                int val = 0;
                int k = 0;
                for (k = 0; k < c1; k++)
                {
                    val += mat1[i][k] * mat2[k][j];
                }
                res[i][j] = val;
            }
        }

        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                if (j == c2 - 1)
                    printf("%d", res[i][j]);
                else
                    printf("%d ", res[i][j]);
            }
            printf("\n");
        }

        printf("\n");
    }
}