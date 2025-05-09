#include <stdio.h>

int main()
{
    char c;
    while (1)
    {
        scanf("%c", &c);

        if (c == '.' || c == '?' || c == '!')
        {
            printf("%c", c);
            break;
        }
        else if (c >= 97 && c <= 122)
        {
            printf("%c", c - 32);
        }
        else
        {
            printf("%c", c);
        }
    }
}