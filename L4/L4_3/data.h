#pragma once

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

tData InicializaData(int dia, int mes, int ano);
tData LeData();
void ImprimeData(tData data);
int EhBissexto(tData data);
int QtdDiasNoMes(int mes, int ano);
tData AvancaDiaSeguinte(tData data);
int Igual(tData data1, tData data2);
int DataMenorQueOutra(tData data1, tData data2);