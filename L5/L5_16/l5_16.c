#include <stdio.h>
#include <stdlib.h>

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
void TrocaPosicao(tCandidato *vet, int i);

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
    int done = 0, i = 0;

    while (!done)
    {
        for (i = 1; i < qtd; i++)
        {
            if (vet[i - 1].nota < vet[i].nota)
            {
                TrocaPosicao(vet, i);
            }
            else if (vet[i].nota == vet[i - 1].nota)
            {
                if (vet[i - 1].idade > vet[i].idade)
                {
                    TrocaPosicao(vet, i);
                }
                else if (vet[i - 1].idade == vet[i].idade)
                {
                    if (vet[i - 1].codigo > vet[i].codigo)
                    {
                        TrocaPosicao(vet, i);
                    }
                }
            }
        }

        done = 1;

        for (i = 1; i < qtd; i++)
        {
            if (vet[i - 1].nota < vet[i].nota)
            {
                done = 0;
            }
            else if (vet[i].nota == vet[i - 1].nota)
            {
                if (vet[i - 1].idade > vet[i].idade)
                {
                    done = 0;
                }
                else if (vet[i - 1].idade == vet[i].idade)
                {
                    if (vet[i - 1].codigo > vet[i].codigo)
                    {
                        done = 0;
                    }
                }
            }
        }
    }
}

void TrocaPosicao(tCandidato *vet, int i)
{
    tCandidato tmp = vet[i];
    vet[i] = vet[i - 1];
    vet[i - 1] = tmp;
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