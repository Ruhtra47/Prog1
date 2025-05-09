#include <stdio.h>

int main()
{
    int n;

    int qtd_neg = 0, qtd_pos = 0, soma_neg = 0, soma_pos = 0;

    while (scanf("%d", &n) == 1)
    {
        if (n < 0)
        {
            qtd_neg++;
            soma_neg += n;
        }
        else if (n > 0)
        {
            qtd_pos++;
            soma_pos += n;
        }
    }

    printf("%d %d %d %d", qtd_neg, qtd_pos, soma_neg, soma_pos);
}