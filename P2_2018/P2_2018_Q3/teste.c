#include <stdio.h>

double LeNotasECalculaMediaAluno()
{
    int nota, soma = 0, menor = 101, qtd = 0;
    char c;

    scanf(" [");

    while (1)
    {
        scanf("%d", &nota);
        soma += nota;
        if (nota < menor)
            menor = nota;
        qtd++;

        c = getchar();
        if (c == ']')
            break;
    }

    if (qtd == 1)
        return soma;
    return (soma - menor) / (double)(qtd - 1);
}

int ContaAlunosAprovadosTurma()
{
    int i, n, aprovados = 0;
    char c1, c2;
    double media;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %c%c", &c1, &c2);
        media = LeNotasECalculaMediaAluno();

        if (media >= 70.0)
        {
            printf("%c\n", c1);
            aprovados++;
        }
    }

    return aprovados;
}

int main()
{
    int n, i;
    int aprovados, maior = -1, menor = 101;
    int turmaMaior = -1, turmaMenor = -1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("TURMA:%d\n", i);
        aprovados = ContaAlunosAprovadosTurma();

        if (aprovados > maior)
        {
            maior = aprovados;
            turmaMaior = i;
        }
        if (aprovados < menor)
        {
            menor = aprovados;
            turmaMenor = i;
        }
    }

    printf("MAIOR:TURMA %d MENOR:TURMA %d\n", turmaMaior, turmaMenor);
    return 0;
}
