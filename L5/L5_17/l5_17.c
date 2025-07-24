#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[500][501];
    int count = 0, i = 0, j = 0;
    char c = '\0';

    while (scanf("%s", &texto[count]) == 1)
    {
        count++;
    }

    printf(" ");

    for (i = count - 1; i >= 0; i--)
    {
        j = 0;
        c = texto[i][j];
        while (c != '\0')
        {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                printf("%c", c);
            }
            j++;
            c = texto[i][j];
        }
        printf(" ");
    }
}