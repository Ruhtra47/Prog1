#include <stdio.h>

int main()
{
    float temp;
    char unidade;

    scanf("%f %c", &temp, &unidade);

    if (unidade == 'f' || unidade == 'F')
        printf("%.2f (C)", 5 * (temp - 32) / 9);
    else
        printf("%.2f (F)", (temp * 9 / 5) + 32);

    return 0;
}