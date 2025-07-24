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
int ComparaString(char *str1, char *str2);

int main()
{
    int qtdCand, i = 0, j = 0;
    scanf("%d", &qtdCand);

    tCandidato candidatos[qtdCand];
    int printed[qtdCand];
    for (i = 0; i < qtdCand; i++)
        printed[i] = 0;

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    for (i = 0; i < qtdCand; i++)
    {
        if (printed[i])
            continue;

        for (j = 0; j < qtdCand; j++)
        {
            if (i == j)
                continue;

            if (ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome))
            {
                if (!printed[i])
                    ImprimeCandidato(candidatos[i]);
                ImprimeCandidato(candidatos[j]);

                printed[i] = 1;
                printed[j] = 1;
            }
        }
    }

    return 0;
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

int ComparaString(char *str1, char *str2)
{
    int index = 0;

    while (str1[index] == str2[index])
    {
        if (str1[index] == '\0' && str2[index] == '\0')
            return 1;

        index++;
    }

    return 0;
}