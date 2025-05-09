#include <stdio.h>

int main()
{
    char *meses[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

    int mes;
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12)
        printf("%s.", meses[mes - 1]);
    else
        printf("Invalido.");

    return 0;
}