#include <stdio.h>

char lower(char c)
{
    if ((c >= 'A' && c <= 'Z'))
        return c + ' ';
    return c;
}

int isLetra(char c)
{
    c = lower(c);
    return (c >= 'a' && c <= 'z');
}

int isVogal(char c)
{
    c = lower(c);

    return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'));
}

int main()
{
    char s[10001];

    while (scanf("%s", s) == 1)
    {
        int i = 0;
        int vogais = 0, consoantes = 0;

        while (s[i])
        {
            if (isVogal(s[i]) && isLetra(s[i]))
                vogais++;
            else if (!isVogal(s[i]) && isLetra(s[i]))
                consoantes++;

            i++;
        }

        i = 0;

        if (vogais == consoantes)
        {
            printf("%s\n", s);
        }
        else if (vogais > consoantes)
        {
            while (s[i])
            {
                if (isVogal(s[i]))
                    printf("%c", s[i]);
                i++;
            }
            printf("\n");
        }
        else
        {
            while (s[i])
            {
                if (!isVogal(s[i]) && isLetra(s[i]))
                    printf("%c", s[i]);
                i++;
            }
            printf("\n");
        }
    }

    return 0;
}