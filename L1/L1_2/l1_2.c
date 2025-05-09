#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    float perimetro = 2 * a + 2 * b;

    printf("%.2f", perimetro);

    return 0;
}