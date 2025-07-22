#include <stdio.h>

int main()
{
    int n, i = 0, impossivel = 1;
    scanf("%d", &n);

    int alturas[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &alturas[i]);
    }

    int maior_dif = 0, dif = 0;

    for (i = 1; i < n; i++)
    {
        dif = alturas[i] - alturas[i - 1];
        dif = dif < 0 ? -dif : dif;

        maior_dif = dif > maior_dif ? dif : maior_dif;
    }

    for (i = 1; i < n; i++)
    {
        int dif = alturas[i] - alturas[i - 1];
        dif = dif < 0 ? -dif : dif;
        if (dif == maior_dif)
        {
            impossivel = 0;
            printf(" (%d %d)", i - 1, i);
        }
    }

    if (impossivel)
        printf("IMPOSSIVEL");
}