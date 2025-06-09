#include <stdio.h>

#define true 1
#define false 0
#define CONVERT_MAIUSCULA 38
#define CONVERT_MINUSCULA 96
#define MINIMO_MINUSCULA 97
#define MAXIMO_MINUSCULA 122
#define MINIMO_MAIUSCULA 65
#define MAXIMO_MAIUSCULA 90

char c = '\0';
int soma = 0;

int CalculaValorPalavra();
int EhPrimo(int n);
int ProximoPrimo(int n);

int EhPrimo(int n)
{
    int count_div = 0;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count_div++;
    }

    if (count_div == 2)
        return true;
    return false;
}

int ProximoPrimo(int n)
{
    int i = n + 1;
    while (1)
    {
        if (EhPrimo(i))
            return i;
        i++;
    }
}

int CalculaValorPalavra()
{
    if (c >= MINIMO_MINUSCULA && c <= MAXIMO_MINUSCULA)
    {
        soma += c - CONVERT_MINUSCULA;
    }
    else
    {
        soma += c - CONVERT_MAIUSCULA;
    }
}

int main()
{
    while (scanf("%c", &c) == 1)
    {
        if (c == '\n')
        {
            if (EhPrimo(soma))
            {
                printf("E primo");
            }
            else
            {
                printf("Nao e primo %d", ProximoPrimo(soma));
            }
            printf("\n");
            soma = 0;
            continue;
        }
        CalculaValorPalavra();
    }
}