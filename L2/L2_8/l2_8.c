#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("RESP:");

    int i;
    for (i = n + 1; i < m; i++)
    {
        int contagem_divisores = 0;

        int j;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                contagem_divisores++;
        }

        if (contagem_divisores <= 2)
            printf("%d ", i);
    }

    return 0;
}