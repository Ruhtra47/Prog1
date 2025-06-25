#include <stdio.h>

int main()
{
    int prob_num = 0, prob_letra = 0;
    char c;
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%c", &c);
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        {
            prob_letra = 1;
        }
    }
    scanf("%c", &c);

    for (i = 0; i < 4; i++)
    {
        scanf("%c", &c);
        if (!(c >= '0' && c <= '9'))
        {
            prob_num = 1;
        }
    }

    if (prob_letra && prob_num)
        printf("Codigo invalido!Problema nas letras e nos numeros!");
    else if (prob_letra)
        printf("Codigo invalido!Problema nas letras!");
    else if (prob_num)
        printf("Codigo invalido!Problema nos numeros!");
    else
        printf("Codigo valido!");
}