#include <stdio.h>

int main()
{
    int option, key;
    scanf("%d %d ", &option, &key);

    if (option != 1 && option != 2)
    {
        printf("Operacao invalida.");
        return 0;
    }

    key %= 26;

    char c;
    while (1)
    {
        scanf("%c", &c);

        if (c == '.')
        {
            printf(".");
            break;
        }

        if (c < 97 || c > 122)
        {
            printf("%c", c);
            continue;
        }

        if (option == 1)
        {
            c = 'a' + (c - 'a' + key) % 26;
        }
        else if (option == 2)
        {
            c = 'a' + (c - 'a' - key + 26) % 26;
        }

        printf("%c", c);
    }
}