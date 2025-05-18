#include <stdio.h>

int main()
{
    char c;
    int soma = 0;
    while (1)
    {
        scanf("%c", &c);
        if (c == '\n')
            break;

        soma += c - '0';
    }

    int cur_soma = 0;
    while (1)
    {
        if (soma == 0)
        {
            if (cur_soma < 10)
            {
                printf("RESP:%d", cur_soma);
                return 0;
            }
            soma = cur_soma;
            cur_soma = 0;
        }
        cur_soma += soma % 10;
        soma /= 10;
    }
}