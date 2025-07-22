#include <stdio.h>

int main()
{
    int n, seq = 0, i = 1, index = 1, min = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &seq);

        if (seq < min)
        {
            min = seq;
            index = i;
        }
    }

    if (n != 0)
    {
        printf("POS:%d", index);
    }
}