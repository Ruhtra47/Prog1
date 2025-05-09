#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int contagem_divisores = 0;

    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            contagem_divisores++;
    }

    if (contagem_divisores <= 2)
        printf("Primo");
    else
        printf("Nao primo");

    return 0;
}