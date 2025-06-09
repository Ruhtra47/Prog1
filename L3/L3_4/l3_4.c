#include <stdio.h>

#define true 1
#define false 0

int EhPrimo(int num);
void ImprimeMultiplos(int num, int max);

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

void ImprimeMultiplos(int num, int max)
{
    int i = 2, tem_multiplo = false;
    while (i * num < max)
    {
        tem_multiplo = true;
        printf("%d ", i * num);
        i++;
    }

    if (!tem_multiplo)
        printf("*");

    printf("\n");
}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    for (i = n + 1; i < m; i++)
    {
        if (EhPrimo(i))
        {
            printf("%d\n", i);
            ImprimeMultiplos(i, m);
        }
    }
}