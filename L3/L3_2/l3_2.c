#include <stdio.h>

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Divisao(float num1, float num2);
float Multiplicacao(float num1, float num2);

float Soma(float num1, float num2)
{
    return num1 + num2;
}

float Subtracao(float num1, float num2)
{
    return num1 - num2;
}

float Divisao(float num1, float num2)
{
    return num1 / num2;
}

float Multiplicacao(float num1, float num2)
{
    return num1 * num2;
}

int main()
{
    float num1, num2;
    char op;
    scanf("%f", &num1);

    while (scanf("%f %c", &num2, &op) == 2)
    {
        // float result;
        // result = Soma(num1, num2);
        // printf("%.2f", result);
        // result = Subtracao(num1, num2);
        // printf(" %.2f", result);
        // result = Divisao(num1, num2);
        // printf(" %.2f", result);
        // result = Multiplicacao(num1, num2);
        // printf(" %.2f\n", result);

        switch (op)
        {
        case '+':
            num1 = Soma(num1, num2);
            break;
        case '-':
            num1 = Subtracao(num1, num2);
            break;
        case '*':
            num1 = Multiplicacao(num1, num2);
            break;
        case '/':
            num1 = Divisao(num1, num2);
            break;
        }
    }
    printf("%.2f", num1);
    return 0;
}