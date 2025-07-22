#include <stdio.h>

void InverteVetor(int *vet, int qtd);
void ImprimeDadosDoVetor(int vet[], int qtd);

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    InverteVetor(vet, n);
    ImprimeDadosDoVetor(vet, n);
}

void InverteVetor(int *vet, int qtd)
{
    int i;
    for (i = 0; i < qtd / 2; i++)
    {
        int tmp = vet[i];
        vet[i] = vet[qtd - i - 1];
        vet[qtd - i - 1] = tmp;
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