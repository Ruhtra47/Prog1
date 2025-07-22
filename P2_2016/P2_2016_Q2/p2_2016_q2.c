#include <stdio.h>

int EhPrimo(int num);
int MaiorDigitoPrimo(int num);

int EhPrimo(int num)
{
    int div = 0, i = 1;

    for (i = 1; i <= num; i++)
    {
        if (!(num % i))
            div++;
    }

    if (div == 2)
        return 1;
    return 0;
}

int MaiorDigitoPrimo(int num)
{
    int max = 0;

    while (num > 0)
    {
        if (num % 10 > max && EhPrimo(num % 10))
            max = num % 10;
        num /= 10;
    }
    return max;
}

int main()
{
    int n, res = 0;
    while (scanf("%d", &n) == 1)
    {
        res += MaiorDigitoPrimo(n);
    }
    printf("SOMA:%d", res);
}