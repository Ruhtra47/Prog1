#include <stdio.h>

int main()
{
    char texto[500][501];
    int palavras = 0;

    while (scanf("%*[^A-Za-z]") != EOF)
    {
        scanf("%[a-zA-Z]", texto[palavras]);
        palavras++;
    }

    int i = 0;
    for (i = palavras - 1; i >= 0; i--)
    {
        if (texto[i][0])
            printf(" %s", texto[i]);
    }
    printf(" ");
}