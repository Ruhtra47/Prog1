#include <stdio.h>

int main()
{
    int x, n, i = 0, v;
    scanf("%d %d", &x, &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v);

        if (v == x)
        {
            printf("RESP:%d", i);
            return 0;
        }
    }

    printf("RESP:%d", n);
}