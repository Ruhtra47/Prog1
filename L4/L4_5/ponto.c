#include <stdio.h>
#include <math.h>

#include "ponto.h"

tPonto InicializaPonto(int x, int y)
{
    tPonto p = {x, y};
    return p;
}

tPonto LePonto()
{
    int x, y;
    scanf("%d %d", &x, &y);

    return InicializaPonto(x, y);
}

void ImprimePonto(tPonto p)
{
    printf("(%d,%d)", p.x, p.y);
}

tPonto SetX(tPonto p, int x)
{
    p.x = x;
    return p;
}

tPonto SetY(tPonto p, int y)
{
    p.y = y;
    return p;
}

int GetX(tPonto p)
{
    return p.x;
}

int GetY(tPonto p)
{
    return p.y;
}

tPonto MovePonto(tPonto p, int delta_x, int delta_y)
{
    SetX(p, GetX(p) + delta_x);
    SetY(p, GetY(p) + delta_y);
    return p;
}

double DistPontos(tPonto p1, tPonto p2)
{
    return sqrt(((GetX(p1) - GetX(p2)) * (GetX(p1) - GetX(p2))) + ((GetY(p1) - GetY(p2)) * (GetY(p1) - GetY(p2))));
}

int GetQuadrante(tPonto p)
{
    int x = GetX(p);
    int y = GetY(p);

    if (x == 0 || y == 0)
        return 0;

    if (x > 0)
    {
        if (y > 0)
            return 1;
        else if (y < 0)
            return 4;
    }
    else if (x < 0)
    {
        if (y > 0)
            return 2;
        else if (y < 0)
            return 3;
    }
}

tPonto GetSimetrico(tPonto p)
{
    p = SetX(p, -GetX(p));
    p = SetY(p, -GetY(p));
    return p;
}