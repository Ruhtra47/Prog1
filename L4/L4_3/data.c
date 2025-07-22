#include "data.h"

tData InicializaData(int dia, int mes, int ano)
{
    tData data;
    int diasDoMes;

    data.ano = ano;

    if (mes > 12)
        mes = 12;
    else if (mes < 1)
        mes = 1;
    data.mes = mes;

    diasDoMes = QtdDiasNoMes(mes, ano);

    if (dia > diasDoMes)
        dia = diasDoMes;
    else if (dia < 1)
        dia = 1;
    data.dia = dia;

    return data;
}

tData LeData()
{
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    return InicializaData(dia, mes, ano);
}

void ImprimeData(tData data)
{
    printf("'%02d/%02d/%02d'", data.dia, data.mes, data.ano);
}

int EhBissextoAno(int ano)
{
    if (!(ano % 400))
        return 1;
    if (!(ano % 100))
        return 0;
    if (!(ano % 4))
        return 1;
    return 0;
}

int EhBissexto(tData data)
{
    return EhBissextoAno(data.ano);
}

int QtdDiasNoMes(int mes, int ano)
{
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        return 31;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;
    else if (mes == 2)
        if (EhBissextoAno(ano))
            return 29;
    return 28;
}

int QtdDiasNoMesData(tData data)
{
    return QtdDiasNoMes(data.mes, data.ano);
}

tData AvancaDiaSeguinte(tData data)
{
    if (data.dia < QtdDiasNoMesData(data))
        data.dia++;
    else
    {
        data.dia = 1;
        if (data.mes < 12)
            data.mes++;
        else
        {
            data.mes = 1;
            data.ano++;
        }
    }

    return data;
}

int Igual(tData data1, tData data2)
{
    return ((data1.dia == data2.dia) && (data1.mes == data2.mes) && (data1.ano == data2.ano));
}

int DataMenorQueOutra(tData data1, tData data2)
{
    if (data1.ano < data2.ano)
        return 1;
    if (data1.ano == data2.ano && data1.mes < data2.mes)
        return 1;
    if (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia)
        return 1;
    return 0;
}