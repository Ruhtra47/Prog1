#include <stdio.h>
#include <math.h>

#include "reta.h"

tReta InicializaReta(int xi, int yi, int xf, int yf)
{
    tReta r = {{xi, yi}, {xf, yf}};
    return r;
}

tReta LeReta()
{
    int xi, yi, xf, yf;
    scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
    tReta reta = InicializaReta(xi, yi, xf, yf);
    return reta;
}

void ImprimeReta(tPonto pi, tPonto pf)
{
    printf("[(%d,%d):(%d,%d)]", GetX(pi), GetY(pi), GetX(pf), GetY(pf));
}

tPonto GetPontoInicio(tReta r)
{
    return r.ponto_inicio;
}

tPonto GetPontoFim(tReta r)
{
    return r.ponto_fim;
}

tReta MoveReta(tReta r, int delta_x, int delta_y)
{
    r.ponto_inicio = MovePonto(r.ponto_inicio, delta_x, delta_y);
    r.ponto_fim = MovePonto(r.ponto_fim, delta_x, delta_y);
}

float GetTamanhoReta(tReta r)
{
    return DistPontos(r.ponto_inicio, r.ponto_fim);
}