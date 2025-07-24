#include <stdio.h>
#include <stdlib.h>

void ConcatenaString(char *str1, char *str2, char *strOut);

int main()
{
    char nome[1000];
    char sobrenome[1000];
    char nomeCompleto[2000];

    while (scanf("%s", &sobrenome) == 1 && scanf("%s", &nome) == 1)
    {
        ConcatenaString(nome, sobrenome, nomeCompleto);
        printf("%s\n", nomeCompleto);
    }

    return 0;
}

void ConcatenaString(char *str1, char *str2, char *strOut)
{
    int index_out = 0, index_in = 0;

    while (str1[index_in] != '\0')
    {
        strOut[index_out] = str1[index_in];

        index_out++;
        index_in++;
    }

    index_in = 0;

    while (str2[index_in] != '\0')
    {
        strOut[index_out] = str2[index_in];

        index_out++;
        index_in++;
    }

    strOut[index_out] = '\0';
}