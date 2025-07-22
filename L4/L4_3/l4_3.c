#include <stdio.h>

#include "data.h"

int main()
{
    int n;
    scanf("%d", &n);

    tData data;

    int i = 0;
    for (i = 0; i < n; i++)
    {
        data = LeData();

        ImprimeData(data);
        printf(EhBissexto(data) ? ":Bisexto" : ":Normal");
        printf("\n");
    }
}
