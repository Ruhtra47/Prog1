#include <stdio.h>

int verificaPrimo(int n);
int transformaPrimo(int n);
int verificaNegativo(int n);

int verificaPrimo(int n)
{
    if (verificaNegativo(n))
        n *= -1;

    int num_divisores = 0;

    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if (!(n % i))
            num_divisores++;
    }

    if (num_divisores == 2)
        return 1;
    
    return 0;
}

int transformaPrimo(int n)
{
    int original_n = n;
    if (!verificaNegativo(n))
    {
        while (!verificaPrimo(n))
        {
            n++;
            if (n > 32000)
            {
                return original_n;
            }
        }
    }
    else
    {
        while (!verificaPrimo(n))
        {
            n--;
            if (n < -32000)
            {
                return original_n;
            }
        }
    }
    return n;
}

int verificaNegativo(int n)
{
    return n < 0 ? 1 : 0;
}

int main()
{
    int l, c, n;
    scanf("%d %d", &l, &c);

    int i = 0, j = 0;
    for (i = 0; i < l; i++)
    {
        printf("\t");
        for (j = 0; j < c; j++)
        {
            scanf("%d", &n);

            if (!verificaPrimo(n))
                printf("%d ", transformaPrimo(n));
            else
                printf("%d ", n);
        }
        printf("\n");
    }
}