#include <stdio.h>

int in(int x, int b[], int n)
{
    int i = 0, res = 0;

    for (i = 0; i < n; i++)
    {
        if (x == b[i])
            return 1;
    }

    return 0;
}

int main()
{
    int n1, n2, i = 0, j = 0;
    scanf("%d", &n1);

    int a[n1];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    int b[n2];

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    int todos = 1, nenhum = 1, parcial = 1;

    for (i = 0; i < n1; i++)
    {
        if (in(a[i], b, n2))
        {
            parcial = 1;
            nenhum = 0;
        }
        else
        {
            todos = 0;
        }
    }

    if (todos)
        printf("TODOS");
    else if (nenhum)
        printf("NENHUM");
    else
        printf("PARCIAL");
}