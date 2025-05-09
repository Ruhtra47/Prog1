#include <stdio.h>
#include <math.h>

#define pi 3.141592

int main()
{
    float r;
    scanf("%f", &r);

    float area = pi * r * r;

    float novo_raio = sqrt(area / (2 * pi));

    printf("%.2f %.2f", area, novo_raio);

    return 0;
}