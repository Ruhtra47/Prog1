#include <stdio.h>

int main()
{
    int a, b, x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &x1, &y1, &x2, &y2, &x3, &y3);

    int res = 0;
    if (a * x1 + b == y1)
        res++;
    if (a * x2 + b == y2)
        res++;
    if (a * x3 + b == y3)
        res++;

    switch (res)
    {
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Todos");
        break;
    default:
        printf("Nenhum");
        break;
    }
}