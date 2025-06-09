#include <stdio.h>

int EhPar(int x);
void PrintaPares(int N);
void PrintaImpares(int N);

int EhPar(int x)
{
    return !(x % 2);
}

void PrintaPares(int N)
{
    int i = 2, contagem = 0;
    for (contagem = 1; contagem <= N; contagem++)
    {
        printf("%d ", i);
        i += 2;
    }
}

void PrintaImpares(int N)
{
    int i = 1, contagem = 0;
    for (contagem = 1; contagem <= N; contagem++)
    {
        printf("%d ", i);
        i += 2;
    }
}

int main()
{
    int tipo, n;
    scanf("%d %d", &tipo, &n);

    if (tipo == 0)
        PrintaPares(n);
    else
        PrintaImpares(n);
}