#include <stdio.h>

void OrdenaCrescente(int vet[], int qtd);
void ImprimeDadosDoVetor(int vet[], int qtd);

int main()
{
    int n, i;
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    OrdenaCrescente(vet, n);
    ImprimeDadosDoVetor(vet, n);
}

void OrdenaCrescente(int vet[], int qtd)
{
    int done = 0;
    while (!done)
    {
        int i = 0;
        for (i = 1; i < qtd; i++)
        {
            if (vet[i] < vet[i - 1])
            {
                int tmp = vet[i];
                vet[i] = vet[i - 1];
                vet[i - 1] = tmp;
            }
        }

        done = 1;
        for (i = 1; i < qtd; i++)
        {
            if (vet[i] < vet[i - 1])
                done = 0;
        }
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd)
{
    printf("{");
    int i = 0;
    for (i = 0; i < qtd; i++)
    {
        if (i == qtd - 1)
        {
            printf("%d", vet[i]);
        }
        else
        {
            printf("%d, ", vet[i]);
        }
    }
    printf("}");
}