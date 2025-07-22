#include <stdio.h>

int main()
{
    int n, i = 0, crescente = 1, decrescente = 1, todos_iguais = 1;
    scanf("%d", &n);

    int notas[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (notas[i] > notas[i - 1])
            decrescente = 0;
        if (notas[i] < notas[i - 1])
            crescente = 0;
        if (notas[i] != notas[i - 1])
            todos_iguais = 0;
    }

    if (todos_iguais)
        printf("CRESCENTE&DECRESCENTE");
    else if (crescente)
        printf("CRESCENTE");
    else if (decrescente)
        printf("DECRESCENTE");
    else
        printf("DESORDENADO");
}