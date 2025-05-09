#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int fator1;
    for (fator1 = n; fator1 <= m; fator1++)
    {
        int fator2;
        for (fator2 = 1; fator2 <= 10; fator2++)
        {
            printf("%d x %d = %d\n", fator1, fator2, fator1 * fator2);
        }
    }

    return 0;
}