#pragma once

typedef struct
{
    int x;
    int y;
} tPonto;

tPonto InicializaPonto(int x, int y);
tPonto LePonto();
void ImprimePonto(tPonto p);
tPonto SetX(tPonto p, int x);
tPonto SetY(tPonto p, int y);
int GetX(tPonto p);
int GetY(tPonto p);
tPonto MovePonto(tPonto p, int delta_x, int delta_y);
double DistPontos(tPonto p1, tPonto p2);
int GetQuadrante(tPonto p);
tPonto GetSimetrico(tPonto p);