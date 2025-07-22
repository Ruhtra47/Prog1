#include <stdio.h>

#include "ponto.h"
#include "reta.h"

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    tPonto ponto;
    tReta reta;

    for (i = 0; i < n; i++)
    {
        ponto = LePonto();
        reta = LeReta();

        if (DistPontos(ponto, reta.ponto_inicio) < DistPontos(ponto, reta.ponto_fim))
            printf("INICIO\n");
        else if (DistPontos(ponto, reta.ponto_inicio) > DistPontos(ponto, reta.ponto_fim))
            printf("FIM\n");
        else
            printf("EQUIDISTANTE\n");
    }
}