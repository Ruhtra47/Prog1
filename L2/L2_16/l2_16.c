#include <stdio.h>

int main()
{
    int n, min = 32001, first_found = 0, first = -1, last = -1, index = 0;

    while (scanf("%d", &n) == 1)
    {
        min = n < min ? n : min;
    }

    getchar();

    while (scanf("%d", &n) == 1)
    {
        if (n == min)
        {
            if (!first_found)
            {
                first = index;
                last = index;
                first_found = 1;
            }
            else
            {
                last = index;
            }
        }
        index++;
    }

    if (first == -1)
    {
        first = index;
        last = index;
    }

    printf("%d %d %d", min, first, last);
}