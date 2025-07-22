#include <stdio.h>

int EhIgual(int a, int b);
int MaiorDigito(int num);

int EhIgual(int a, int b)
{
    return a == b;
}

int MaiorDigito(int num)
{
    int max = 0;

    while (num > 0)
    {
        max = num % 10 > max ? num % 10 : max;
        num /= 10;
    }

    return max;
}

int main()
{
    int num1, num2, res = 0;
    while (scanf("(%d,%d)", &num1, &num2) == 2)
    {
        if (MaiorDigito(num1) == MaiorDigito(num2))
            res++;
    }

    printf("COUNT:%d", res);
}