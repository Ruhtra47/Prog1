#include <stdio.h>

#include "reta.h"
#include "ponto.h"

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    tReta reta;

    for (i = 0; i < n; i++)
    {
        reta = LeReta();

        int quadranteInicio = GetQuadrante(GetPontoInicio(reta));
        int quadranteFim = GetQuadrante(GetPontoFim(reta));
        if ((quadranteInicio == quadranteFim) && quadranteFim != 0 && quadranteInicio != 0)
            printf("MESMO\n");
        else
            printf("DIFERENTE\n");
    }
}