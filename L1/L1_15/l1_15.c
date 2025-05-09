#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    int index;
    scanf("%d %d", &numero, &index);

    int valor_casa = numero / ((int)pow(10, index - 1)) % 10;

    if (valor_casa % 2 == 0)
        printf("PAR");
    else
        printf("IMPAR");

    return 0;
}