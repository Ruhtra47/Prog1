#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("NAO");
        return 0;
    }

    int v[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    int razao;
    int ref = v[1] - v[0];

    for (i = 1; i < n; i++)
    {
        razao = v[i] - v[i - 1];

        if (razao != ref)
        {
            printf("NAO");
            return 0;
        }
    }

    printf("RESP:%d", razao);
}