#include <stdio.h>
#include <stdlib.h>

int verificapH(float pH);
int verificaGotaChuvaAcida(float pH);
float porcentagem(float total, float valor);
void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal);

int verificapH(float pH)
{
    if (pH == 7.00)
        return 0;
    if (pH < 7.00)
        return 1;
    return 2;
}

int verificaGotaChuvaAcida(float pH)
{
    if (pH < 5.7)
        return 1;
    return 0;
}

float porcentagem(float total, float valor)
{
    return (1 / total) * 100;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
    if (porcentagemGotasChuvaAcida >= 75.00)
    {
        printf("Chuva Acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else if (porcentagemGotasChuvaNormal >= 75.00)
    {
        printf("Chuva Normal %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else
    {
        printf("Chuva com indicios de chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
}

int main()
{
    int a, d, t;
    scanf("%d %d %d", &a, &d, &t);

    int gotas_totais = a * d * t;

    if (gotas_totais == 0)
    {
        printf("Nenhuma gota foi avaliada");
        return 0;
    }

    float gota;

    int gotas_acidas = 0, gotas_basicas = 0, gotas_neutras = 0;
    float most_acid = 15, most_basic = -1, most_neutro = 15, min_diff_neutro = 15;
    float porcentagem_acida = 0, porcentagem_normal = 0;

    int i = 0;
    for (i = 0; i < gotas_totais; i++)
    {
        scanf("%f", &gota);

        if (verificapH(gota) == 0)
            gotas_neutras++;
        else if (verificapH(gota) == 1)
            gotas_acidas++;
        else if (verificapH(gota) == 2)
            gotas_basicas++;

        most_acid = gota < most_acid ? gota : most_acid;
        most_basic = gota > most_basic ? gota : most_basic;
        float cur_diff = gota - 7.00;
        cur_diff = cur_diff < 0 ? -cur_diff : cur_diff;
        if (cur_diff < min_diff_neutro)
        {
            min_diff_neutro = cur_diff;
            most_neutro = gota;
        }

        if (verificaGotaChuvaAcida(gota))
        {
            porcentagem_acida += porcentagem(gotas_totais, gota);
        }
        else
        {
            porcentagem_normal += porcentagem(gotas_totais, gota);
        }
    }

    printf("%d %d %d %.2f %.2f %.2f\n", gotas_acidas, gotas_basicas, gotas_neutras, most_acid, most_basic, most_neutro);
    imprimeResultadosAnalise(porcentagem_acida, porcentagem_normal);
}