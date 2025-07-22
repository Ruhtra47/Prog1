#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    int notas[n];

    int min_nota = 101, max_nota = -1, acima_media = 0, reprovados = 0;
    float media = 0.0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);

        min_nota = notas[i] < min_nota ? notas[i] : min_nota;
        max_nota = notas[i] > max_nota ? notas[i] : max_nota;
        media += notas[i];

        if (notas[i] < 70)
            reprovados++;
    }

    media /= (float)n;

    float desvio_padrao = 0;

    for (i = 0; i < n; i++)
    {
        desvio_padrao += pow(notas[i] - media, 2);

        if (notas[i] > media)
            acima_media++;
    }

    desvio_padrao *= 1 / (float)n;
    desvio_padrao = sqrt(desvio_padrao);

    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", min_nota, max_nota, media, desvio_padrao, acima_media, reprovados);
}