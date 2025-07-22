#include <stdio.h>

int main()
{
    int n, num, soma = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (num % 2 == i % 2)
        {
            soma += num;
        }
    }

    printf("SOMA:%d", soma);
}