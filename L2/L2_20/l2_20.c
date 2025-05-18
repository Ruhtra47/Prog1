#include <stdio.h>
#include <math.h>

float calc(int x, float a, float b, float c, float d)
{
    return (a * pow(x, 3) + b * pow(x, 2) + c * x + d);
}

int main()
{
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    int vale_found = 0, pico_found = 0;

    int i;
    float last, curr, next;
    for (i = e + 1; i <= f - 1; i++)
    {
        last = calc(i - 1, a, b, c, d);
        curr = calc(i, a, b, c, d);
        next = calc(i + 1, a, b, c, d);

        // printf("x: %d\n", i);
        // printf("last: %f\n", last);
        // printf("cur: %f\n", curr);
        // printf("next: %f\n", next);

        if (curr < last && curr < next)
        {
            printf("Vale em x=%d\n", i);
            vale_found = 1;
        }

        if (curr > last && curr > next)
        {
            printf("Pico em x=%d\n", i);
            pico_found = 1;
        }
        // printf("\n");
    }

    if (!pico_found)
        printf("Nao ha pico\n");

    if (!vale_found)
        printf("Nao ha vale\n");
}