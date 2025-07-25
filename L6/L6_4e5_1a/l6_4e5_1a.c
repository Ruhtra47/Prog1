#include <stdio.h>

typedef struct
{
    int id_msg;
    int id_pct;
    int len_cont;
    char msg[10];
    int cod_err;
} tPacote;

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
        ImprimePacote(pacote);
        printf("\n");
    }
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