#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    if (n >= 1)
        scanf("%d", &n1);
    if (n >= 2)
        scanf("%d", &n2);
    if (n >= 3)
        scanf("%d", &n3);
    if (n >= 4)
        scanf("%d", &n4);
    if (n >= 5)
        scanf("%d", &n5);
    if (n >= 6)
        scanf("%d", &n6);
    if (n >= 7)
        scanf("%d", &n7);
    if (n >= 8)
        scanf("%d", &n8);
    if (n >= 9)
        scanf("%d", &n9);

    scanf(" %*c");

    char c;
    while (1)
    {
        scanf("%c", &c);

        if (c == '"')
            break;

        if (c == '%')
        {
            scanf("%c", &c);
            if (c - '0' > n || c - '0' < 1)
            {
                printf("ERRO");
            }
            else
            {
                switch (c)
                {
                case '1':
                    printf("%d", n1);
                    break;
                case '2':
                    printf("%d", n2);
                    break;
                case '3':
                    printf("%d", n3);
                    break;
                case '4':
                    printf("%d", n4);
                    break;
                case '5':
                    printf("%d", n5);
                    break;
                case '6':
                    printf("%d", n6);
                    break;
                case '7':
                    printf("%d", n7);
                    break;
                case '8':
                    printf("%d", n8);
                    break;
                case '9':
                    printf("%d", n9);
                    break;

                default:
                    break;
                }
            }
        }
        else
        {
            printf("%c", c);
        }
    }
}