#include <stdio.h>
#include <stdlib.h>

void gira(int v[], int size, int shift)
{
    int temp[size];
    int i;
    for (i = 0; i < size; i++)
    {
        temp[(i + shift) % size] = v[i];
    }

    for (i = 0; i < size; i++)
    {
        v[i] = temp[i];
    }
}

int main()
{
    int s;
    while (scanf("%d", &s) == 1)
    {
        int v[s];
        int i;
        for (i = 0; i < s; i++)
        {
            scanf("%d", &v[i]);
        }

        int shift;
        while (scanf("%d", &shift) == 1 && shift != -1)
        {
            gira(v, s, shift);
            for (i = 0; i < s; i++)
            {
                printf("%d", v[i]);
                if (i < s - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}