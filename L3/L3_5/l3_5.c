#include <stdio.h>

#define true 1
#define false 0

int Propriedade(int num);

int Propriedade(int num)
{
    int ab, cd, ef;
    ab = num / 100;
    cd = num - (ab * 100);

    ef = ab + cd;

    if (ef * ef == num)
        return true;

    return false;
}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    for (i = n + 1; i < m; i++)
    {
        if (Propriedade(i))
            printf("%d\n", i);
    }
}