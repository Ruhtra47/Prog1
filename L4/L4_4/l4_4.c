#include <stdio.h>

#include "ponto.h"

int main()
{
    int n;
    scanf("%d", &n);

    tPonto ponto, simetrico;
    int quadrante, quadranteSimetrico;

    int i = 0;
    for (i = 0; i < n; i++)
    {
        ponto = LePonto();
        quadrante = GetQuadrante(ponto);

        simetrico = GetSimetrico(ponto);
        quadranteSimetrico = GetQuadrante(simetrico);

        ImprimePonto(ponto);
        printf(" %d ", quadrante);
        ImprimePonto(simetrico);
        printf(" %d\n", quadranteSimetrico);
    }
}