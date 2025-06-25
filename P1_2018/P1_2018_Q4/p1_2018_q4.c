#include <stdio.h>

int main()
{
    int horas, minutos, add;
    scanf("%d:%d %d", &horas, &minutos, &add);

    int newMinutos = (minutos + add);
    int newHoras = horas + (newMinutos / 60);
    int newDias = newHoras / 24;
    newHoras %= 24;
    newMinutos %= 60;

    if (newDias > 0)
    {
        if (newDias == 1)
            printf("(%d dia)", newDias);
        else
            printf("(%d dias)", newDias);
    }

    if (newHoras > 0)
    {
        if (newHoras == 1)
            printf("(%d hora)", newHoras);
        else
            printf("(%d horas)", newHoras);
    }

    if (newMinutos > 0)
    {
        if (newMinutos == 1)
            printf("(%d minuto)", newMinutos);
        else
            printf("(%d minutos)", newMinutos);
    }

    printf("\n");
}