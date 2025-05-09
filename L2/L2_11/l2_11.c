#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int i;
    for (i = n + 1; i < m; i++)
    {
        int ab = i / 100;
        int cd = i - (ab * 100);

        int ef = ab + cd;
        if (ef * ef == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}