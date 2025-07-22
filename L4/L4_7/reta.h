#pragma once

#include "ponto.h"

typedef struct
{
    tPonto ponto_inicio;
    tPonto ponto_fim;
} tReta;

tReta InicializaReta(int xi, int yi, int xf, int yf);
tReta LeReta();
void ImprimeReta(tPonto pi, tPonto pf);
tPonto GetPontoInicio(tReta r);
tPonto GetPontoFim(tReta r);
tReta MoveReta(tReta r, int delta_x, int delta_y);
float GetTamanhoReta(tReta r);