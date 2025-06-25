#include <stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch (op)
    {
    case '+':
        printf("RESP:%d", a + b);
        break;
    case '-':
        printf("RESP:%d", a - b);
        break;
    case '*':
        printf("RESP:%d", a * b);
        break;
    case '/':
        printf("RESP:%d", a / b);
        break;

    default:
        printf("Invalido");
        break;
    }
}