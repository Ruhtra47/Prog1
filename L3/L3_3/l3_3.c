#include <stdio.h>

#define true 1
#define false 0

int EhPrimo(int num);

int EhPrimo(int num)
{
    int num_divisores = 0;

    int i;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            num_divisores++;
    }

    if (num_divisores == 2)
        return true;

    return false;
}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    for (i = n + 1; i < m; i++)
    {
        if (EhPrimo(i))
            printf("%d ", i);
    }
}