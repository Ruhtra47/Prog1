#include <stdio.h>

int main()
{
    int n = 0, soma = 0, max = 0, count = 0;
    float media = 0.0;

    do {
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n > max)
            max = n;

        soma += n;

        count++;

        media = (float)soma / (float)count;
    
        printf("%d %.6f\n", max, media);

    } while (n != 0);

}