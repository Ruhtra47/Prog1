#include <stdio.h>

#define MAXL 101
#define MAXC 101

int main()
{
    int max = -32768, max_x, max_y;
    int l, c;
    scanf("%d %d", &l, &c);

    int mat[MAXL][MAXC];

    int i;
    int j;
    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
                max_x = j;
                max_y = i;
            }
        }
    }

    printf("%d (%d, %d)", max, max_y, max_x);
}