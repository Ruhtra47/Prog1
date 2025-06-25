#include <stdio.h>

int main()
{
    int soma1 = 0, soma2 = 0, mult1 = 10, mult2 = 11;
    int todos_iguais = 1;
    int last = -1;

    char c;
    int n;

    int i = 0;
    for (i = 0; i < 11; i++)
    {
        scanf("%c", &c);

        if (c == '.')
            continue;

        n = c - '0';

        soma1 += n * mult1;
        soma2 += n * mult2;

        mult1--;
        mult2--;

        if (i == 0)
            last = n;
        else
        {
            if (last != n)
            {
                todos_iguais = 0;
            }
        }
    }

    if (todos_iguais)
    {
        printf("CPF invalido: digitos iguais!");
        return 0;
    }

    int n10, n11;
    char cn10, cn11;
    scanf("-%c%c", &cn10, &cn11);
    n10 = cn10 - '0';
    n11 = cn11 - '0';

    int n10_correto = (soma1 % 11 < 2) ? 0 : 11 - (soma1 % 11);
    soma2 += n10_correto * 2;
    int n11_correto = (soma2 % 11 < 2) ? 0 : 11 - (soma2 % 11);

    if (n10 != n10_correto && n11 != n11_correto)
        printf("CPF invalido: dois digitos!");
    else if (n10 != n10_correto)
        printf("CPF invalido: primeiro digito!");
    else if (n11 != n11_correto)
        printf("CPF invalido: segundo digito!");
    else
        printf("CPF valido!");
}