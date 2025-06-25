#include <stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("SOMA:%d", a + b);
    else if (op == '-')
        printf("SUB:%d", a - b);
    else if (op == '*')
        printf("MULT:%d", a * b);
    else if (op == '/')
    {
        if (a % b)
            printf("DIV:%d, RESTO:%d", a / b, a % b);
        else
            printf("DIV:%d", a / b);
    }
}