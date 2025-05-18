#include <stdio.h>

int main()
{
    int parenteses = 0; // Contar parenteses
    char c = '\0';

    printf("RESP:");
    while (scanf("%c", &c) == 1)
    {
        if (c == '(')
        {
            parenteses++;
            if (parenteses == 1)
                continue;
        }

        if (c == '.' && !parenteses)
            break;

        if (c == ')')
            parenteses--;

        if (parenteses)
            printf("%c", c);
    }
}