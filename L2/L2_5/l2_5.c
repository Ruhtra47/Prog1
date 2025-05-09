#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    float pi = 0;

    int k;
    for (k = 1; k <= n; k++) {
        pi += 6.0 / (float)(k * k);
    }

    printf("%.6f", sqrt(pi));
    return 0;
}