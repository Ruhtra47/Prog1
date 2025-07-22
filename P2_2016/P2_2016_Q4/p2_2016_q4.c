#include <stdio.h>

float FazOperacao(float num1, float num2, char op);
float ResolveExpressao();

float FazOperacao(float num1, float num2, char op)
{
    switch (op)
    {
    case '+':
        num1 += num2;
        break;
    case '-':
        num1 -= num2;
        break;
    case '*':
        num1 *= num2;
        break;
    case '/':
        num1 /= num2;
        break;

    default:
        break;
    }

    return num1;
}

float ResolveExpressao()
{
    float num1, num2;
    char op;

    scanf("%f", &num1);

    while (scanf("%f %c", &num2, &op) == 2)
    {
        num1 = FazOperacao(num1, num2, op);
    }

    return num1;
}

int main()
{
    char c = '\0';
    float atual = -1, max = -1;

    while (c != '.')
    {
        scanf("%c", &c);

        if (c == '(')
        {
            atual = ResolveExpressao();
            max = atual > max ? atual : max;

            printf("%.2f", atual);
        }
        else if (c != ')')
        {
            printf("%c", c);
        }
    }

    printf(" MAIOR:%.2f", max);
}