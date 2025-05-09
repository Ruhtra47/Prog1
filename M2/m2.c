#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);

    int inteiro = n / 1;
    float real = n - inteiro;

    printf("INTEIRO:%d,REAL:%.2f", inteiro, real);
}