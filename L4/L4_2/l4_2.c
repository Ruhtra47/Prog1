#include <stdio.h>

#include "l4_2.h"

void LerData(tData *data)
{
    scanf("%d %d %d", &data->dia, &data->mes, &data->ano);

    if (data->mes > 12)
        data->mes = 12;

    if (data->mes == 1 || data->mes == 3 || data->mes == 5 || data->mes == 7 || data->mes == 8 || data->mes == 10 || data->mes == 12)
    {
        if (data->dia > 31)
        {
            data->dia = 31;
        }
    }
    else if (data->mes == 2)
    {
        if (data->dia > 28)
        {
            if ((data->ano % 4 == 0 && data->ano % 100 != 0) || (data->ano % 400 == 0))
            {
                data->dia = 29;
            }
            else
            {
                data->dia = 28;
            }
        }
    }
    else
    {
        if (data->dia > 30)
        {
            data->dia = 30;
        }
    }
    ValidaData(data);
}

void ImprimeData(tData *data)
{
    ValidaData(data);
    printf("'%02d/%02d/%04d'\n", data->dia, data->mes, data->ano);
}

void ValidaData(tData *data)
{
    if (data->mes == 1 || data->mes == 3 || data->mes == 5 || data->mes == 7 || data->mes == 8 || data->mes == 10 || data->mes == 12)
    {
        if (data->dia > 31)
        {
            data->mes += data->dia / 31;
            data->dia %= 31;
        }
    }
    else if (data->mes == 2)
    {
        if (data->dia > 28)
        {
            if ((data->ano % 4 == 0 && data->ano % 100 != 0) || (data->ano % 400 == 0))
            {
                data->mes += data->dia / 29;
                data->dia %= 29;
            }
            else
            {

                data->mes += data->dia / 28;
                data->dia %= 28;
            }
        }
    }
    else
    {
        if (data->dia > 30)
        {
            data->mes += data->dia / 30;
            data->dia %= 30;
        }
    }

    if (data->mes > 12)
    {
        data->mes = 1;
        data->ano++;
    }
}

int main()
{
    tData inicio, fim;
    LerData(&inicio);
    LerData(&fim);

    while (inicio.dia != fim.dia || inicio.mes != fim.mes || inicio.ano != fim.ano)
    {
        ImprimeData(&inicio);
        inicio.dia++;
    }
}