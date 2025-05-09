#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

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
        {
            printf("%d\n", i);

            int tem_multiplo = 0;

            int fator = 2;
            while (i * fator < m)
            {
                printf("%d ", i * fator);
                tem_multiplo = 1;
                fator++;
            }

            if (!tem_multiplo)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}