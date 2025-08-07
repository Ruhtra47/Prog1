#include <stdio.h>

char lower(char c)
{
    if ((c >= 'A' && c <= 'Z'))
        return c + ' ';
    return c;
}

int main()
{
    int c;
    scanf("%d", &c);

    while (c--)
    {
        char fonte[400], alvo[400];
        scanf("%s %s", alvo, fonte);

        int fonte_pointer = 0, alvo_pointer = 0;

        while (fonte[fonte_pointer] && alvo[alvo_pointer])
        {
            fonte[fonte_pointer] = lower(fonte[fonte_pointer]);
            alvo[alvo_pointer] = lower(alvo[alvo_pointer]);

            if (fonte[fonte_pointer] == alvo[alvo_pointer])
            {
                fonte_pointer++;
                alvo_pointer++;
            }
            else
            {
                fonte_pointer++;
            }
        }

        if (!alvo[alvo_pointer])
        {
            printf("PODE!\n");
        }
        else
        {
            printf("NAO PODE!\n");
        }
    }
}