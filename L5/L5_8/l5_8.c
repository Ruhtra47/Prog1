#include <stdio.h>

void TrocaParEImpar(int vet[], int qtd);
void ImprimeDadosDoVetor(int vet[], int qtd);

int main()
{
    int n, i;
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    TrocaParEImpar(vet, n);
    ImprimeDadosDoVetor(vet, n);
}

void TrocaParEImpar(int vet[], int qtd)
{
    int i = 0;
    for (i = 1; i < qtd; i += 2)
    {
        vet[i] = vet[i] ^ vet[i - 1];
        vet[i - 1] = vet[i] ^ vet[i - 1];
        vet[i] = vet[i] ^ vet[i - 1];
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