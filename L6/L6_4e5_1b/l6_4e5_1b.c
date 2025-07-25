#include <stdio.h>

typedef struct
{
    int id_msg;
    int id_pct;
    int len_cont;
    char msg[10];
    int cod_err;
} tPacote;

int VerificaErro(tPacote pacote);
tPacote LePacote();
void ImprimePacote(tPacote pacote);

int main()
{
    int n;
    scanf("%d", &n);

    tPacote pacote;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        pacote = LePacote();
        if (TemErro(pacote))
            printf("FALHA!");
        else
            ImprimePacote(pacote);
        printf("\n");
    }
}

int TemErro(tPacote pacote)
{
    int cod_esperado = pacote.id_msg + pacote.id_pct + pacote.len_cont;
    int i = 0;

    for (i = 0; i < pacote.len_cont; i++)
        cod_esperado += (int)pacote.msg[i];

    if (cod_esperado == pacote.cod_err)
        return 0;
    return 1;
}

tPacote LePacote()
{
    tPacote pacote;

    scanf("%03d %03d %01d %9c %04d", &pacote.id_msg, &pacote.id_pct, &pacote.len_cont, pacote.msg, &pacote.cod_err);
    pacote.msg[pacote.len_cont] = '\0';

    return pacote;
}

void ImprimePacote(tPacote pacote)
{
    printf("PCT: %d,%d,%d,%s,%d", pacote.id_msg, pacote.id_pct, pacote.len_cont, pacote.msg, pacote.cod_err);
}