#include <stdio.h>

int main()
{
    float x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float base = x2 - x1;
    float altura = y2 - y1;

    float perimetro = 2 * base + 2 * altura;

    printf("%.2f", perimetro);

    return 0;
}