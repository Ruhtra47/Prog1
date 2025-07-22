#include <stdio.h>

#include "ponto.h"

int main()
{
    tPonto pontoAtual, ultimoPonto;
    int n, i = 0;

    scanf("%d", &n);

    ultimoPonto = LePonto();
    printf("-\n");

    for (i = 1; i < n; i++)
    {
        pontoAtual = LePonto();

        printf("%.2f\n", DistPontos(pontoAtual, ultimoPonto));

        ultimoPonto = pontoAtual;
    }
}