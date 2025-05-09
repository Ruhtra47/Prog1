#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int soma = 0, max = -1, min = 2e9, par = 0, impar = 0, input;
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);

        soma += input;

        if (input >= max)
            max = input;

        if (input <= min)
            min = input;

        if (input % 2 == 0)
            par++;
        else
            impar++;
    }

    float media = ((float)soma / (float)n);

    printf("%d %d %d %d %.6f", max, min, par, impar, media);
}