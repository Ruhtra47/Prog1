#include <stdio.h>

int EhLetra(char c);
int EhVogal(char c);
int ReconheceSimbolo(char c);

int EhVogal(char c)
{
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return 1;
    return 0;
}

int EhLetra(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int ReconheceSimbolo(char c)
{
    if (c != '*')
        return 0;

    char meio = getchar();
    if (meio == '*')
        return -1;

    char fim = getchar();

    if (fim != '*')
    {
        while (fim != '*' && fim != '.' && fim != EOF)
            fim = getchar();
        return -1;
    }

    if (meio == '1')
        return 1;
    if (meio == '2')
        return 2;
    if (meio == '3')
        return 3;
    return -1;
}

int main()
{
    char c;
    int code, vogal = 0, consoante = 0;

    while (scanf("%c", &c) == 1)
    {
        if (!EhLetra(c) && c != '*')
            continue;

        printf("%c", c);

        code = ReconheceSimbolo(c);

        if (code == 0)
        {
            if (EhLetra(c))
            {
                if (EhVogal(c))
                    vogal++;
                else
                    consoante++;
            }
        }
        else if (code == 1)
        {
            printf("L:%d V:%d C:%d*", vogal + consoante, vogal, consoante);
            vogal = 0;
            consoante = 0;
        }
        else if (code == 2)
        {
            printf("V:%d*", vogal);
            vogal = 0;
        }
        else if (code == 3)
        {
            printf("C:%d*", consoante);
            consoante = 0;
        }
        else if (code == -1)
        {
            printf("ERRO*");
        }
    }
    printf(".");
}