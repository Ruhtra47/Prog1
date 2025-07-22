#include <stdio.h>

void bubbleSort(int vet[], int n)
{
    int done = 0;
    while (!done)
    {
        int i = 0;
        for (i = 1; i < n; i++)
        {
            if (vet[i] < vet[i - 1])
            {
                int tmp = vet[i];
                vet[i] = vet[i - 1];
                vet[i - 1] = tmp;
            }
        }

        done = 1;
        for (i = 1; i < n; i++)
        {
            if (vet[i] < vet[i - 1])
                done = 0;
        }
    }
}

int main()
{
    int na, nb, i;
    scanf("%d", &na);

    int a[na];

    for (i = 0; i < na; i++)
        scanf("%d", &a[i]);

    scanf("%d", &nb);

    int b[nb];

    for (i = 0; i < nb; i++)
        scanf("%d", &b[i]);

    bubbleSort(a, na);
    bubbleSort(b, nb);

    int indexa = 0, indexb = 0;

    while (indexa < na && indexb < nb)
    {
        if (a[indexa] <= b[indexb])
        {
            printf("A");
            indexa++;
        }
        else
        {
            printf("B");
            indexb++;
        }
    }

    for (i = indexa; i < na; i++)
        printf("A");

    for (i = indexb; i < nb; i++)
        printf("B");
}