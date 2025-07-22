#include <stdio.h>

int main()
{
    int n, i = 0, dentro = 0;
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int a, b;
    scanf("%d %d", &a, &b);

    for (i = 0; i < n; i++)
    {
        if (v[i] >= a && v[i] <= b)
            dentro++;
    }

    printf("%d %d", dentro, n - dentro);
}