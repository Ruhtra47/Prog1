#include <stdio.h>

int main()
{
    int n, paridade, i = 1, input, res = 1;
    scanf("%d", &n);

    scanf("%d", &paridade);

    paridade = !(paridade % 2);

    for (i = 1; i < n; i++)
    {
        scanf("%d", &input);

        if (paridade && !(input % 2))
        {
            res++;
        }
        else if (!paridade && input % 2)
        {
            res++;
        }
    }

    printf("QTD %s:%d", paridade ? "PARES" : "IMPARES", res);
}