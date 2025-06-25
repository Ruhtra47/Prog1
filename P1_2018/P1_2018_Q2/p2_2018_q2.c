#include <stdio.h>

int main()
{
    int troco1, troco2;
    scanf("%d %d", &troco1, &troco2);

    int res1 = 0, res2 = 0;

    while (troco1 > 0)
    {
        if (troco1 >= 5)
            troco1 -= 5;
        else
            troco1--;

        res1++;
    }

    while (troco2 > 0)
    {
        if (troco2 >= 5)
            troco2 -= 5;
        else
            troco2--;

        res2++;
    }

    if (res1 > res2)
        printf("QTD troco 1 eh maior!");
    else if (res2 > res1)
        printf("QTD troco 2 eh maior!");
    else
        printf("Iguais!");
}