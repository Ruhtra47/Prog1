#include <stdio.h>

int somadosdigitos(int n);
void parImpar(int n);
void valorPrimo(int n);

int somadosdigitos(int n)
{
    int soma = 0;
    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }

    return soma;
}

void parImpar(int n)
{
    if (n % 2 == 0)
        printf("Par");
    else
        printf("Impar");
}

void valorPrimo(int n)
{
    int count_div = 0;
    int i = 1;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count_div++;
    }

    if (count_div == 2)
        printf("Primo");
    else
        printf("Nao e primo");
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 10)
    {
        n = somadosdigitos(n);
        printf("%d ", n);

        parImpar(n);
        printf(" ");

        valorPrimo(n);

        printf("\n");
    }

    while (n > 9)
    {
        n = somadosdigitos(n);
        printf("%d ", n);

        parImpar(n);
        printf(" ");

        valorPrimo(n);

        printf("\n");
    }
}