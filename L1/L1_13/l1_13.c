#include <stdio.h>

int main()
{
    int pessoas, itens;
    scanf("%d %d", &pessoas, &itens);

    int res = itens % pessoas;

    if (res == 0)
        res = pessoas;

    printf("RESP:%d", res);

    return 0;
}