#include <stdio.h>

#include "data.h"

int main()
{
    tData dataInicio, dataFim, data;

    dataInicio = LeData();
    dataFim = LeData();

    for (data = dataInicio; !Igual(data, dataFim); data = AvancaDiaSeguinte(data))
    {
        ImprimeData(data);
        printf("\n");
    }
}
