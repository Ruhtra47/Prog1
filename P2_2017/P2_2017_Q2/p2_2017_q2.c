#include <stdio.h>

int EhIgual(int a, int b);
int InverteNumero(int num);

int EhIgual(int a, int b)
{
    return a == b;
}

int InverteNumero(int num)
{
    int original = num;
    int inverso = 0;

    while (num > 0)
    {
        inverso *= 10;
        inverso += num % 10;
        num /= 10;
    }

    return inverso;
}

int main()
{
    int n, res = 0;

    while (scanf("%d", &n) == 1)
    {
        if (EhIgual(InverteNumero(n), n))
            res++;
    }

    printf("COUNT:%d", res);
}