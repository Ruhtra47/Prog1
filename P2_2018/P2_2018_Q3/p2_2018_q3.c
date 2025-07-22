#include <stdio.h>

double LeNotasECalculaMediaAluno();
int ContaAlunosAprovadosTurma();

double LeNotasECalculaMediaAluno()
{
    int nota, min = 101, media = 0, numero_notas = 0;
    scanf("[");
    while (scanf("%d", &nota) == 1)
    {
        media += nota;
        min = nota < min ? nota : min;
        numero_notas++;
        printf("%d ", nota);
    }
    printf("%d\n", media);
    media -= min;
    media /= (double)(numero_notas - 1);

    return media;
}

int ContaAlunosAprovadosTurma()
{
    char nome_aluno, c;
    int numero_alunos, aprovados = 0;
    double media;
    scanf("%d", &numero_alunos);

    int i = 0;
    for (i = 1; i <= numero_alunos; i++)
    {
        scanf("%c", &nome_aluno);
        printf("%c ", nome_aluno);
        media = LeNotasECalculaMediaAluno();

        c = getchar();

        if (media >= 70)
        {
            printf("%c\n", nome_aluno);
            aprovados++;
        }
    }

    return aprovados;
}

int main()
{
    int n, min_aprovados = __INT_MAX__, max_aprovados = -1, aprovados = 0, index_max = 0, index_min = 0;
    scanf("%d", &n);

    int i = 1;
    for (i = 1; i <= n; i++)
    {
        printf("TURMA:%d\n", i);

        aprovados = ContaAlunosAprovadosTurma();
        if (aprovados < min_aprovados)
        {
            min_aprovados = aprovados;
            index_min = i;
        }
        if (aprovados > max_aprovados)
        {
            max_aprovados = aprovados;
            index_max = i;
        }
    }

    printf("MAIOR:TURMA %d MENOR:TURMA%d", index_max, index_min);
}