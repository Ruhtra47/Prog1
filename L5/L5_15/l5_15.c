#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);
void OrdenaCrescente(tCandidato *vet, int qtd);

int main()
{
    int qtdCand, i = 0, j;
    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }

    return 0;
}

void OrdenaCrescente(tCandidato *vet, int qtd)
{
    int done = 0;
    int i = 0;

    while (!done)
    {
        for (i = 1; i < qtd; i++)
        {
            int comp_nome = strcmp(vet[i].nome, vet[i - 1].nome);
            if (comp_nome < 0)
            {
                tCandidato tmp = vet[i];
                vet[i] = vet[i - 1];
                vet[i - 1] = tmp;
            }
            else if (comp_nome == 0)
            {
                if (strcmp(vet[i].sobrenome, vet[i - 1].sobrenome) < 0)
                {
                    tCandidato tmp = vet[i];
                    vet[i] = vet[i - 1];
                    vet[i - 1] = tmp;
                }
            }
        }

        done = 1;

        for (i = 1; i < qtd; i++)
        {
            int comp_nome = strcmp(vet[i].nome, vet[i - 1].nome);
            if (comp_nome == 0)
            {
                if (strcmp(vet[i].sobrenome, vet[i - 1].sobrenome) < 0)
                {
                    done = 0;
                }
            }
            else if (comp_nome < 0)
                done = 0;
        }
    }
}

tCandidato LeCandidato()
{
    tCandidato candidato;
    scanf("%*[^{]");
    scanf("%*[{ ]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,],", candidato.sobrenome);
    scanf("%*[ ]");
    scanf("%[^,],", candidato.nome);
    scanf("%d", &candidato.nota);
    scanf("%*[, ]");
    scanf("%d", &candidato.idade);
    scanf("%*[^\n]\n");
    return candidato;
}

void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
           candidato.codigo, candidato.nome,
           candidato.sobrenome, candidato.nota, candidato.idade);
}