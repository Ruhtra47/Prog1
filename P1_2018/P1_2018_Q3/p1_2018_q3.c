#include <stdio.h>

int main()
{
    char a1, b1, c1, a2, b2, c2;
    scanf("%c%c%c %c%c%c", &a1, &b1, &c1, &a2, &b2, &c2);

    if (!((a1 >= '0' && a1 <= '9') && (a2 >= '0' && a2 <= '9') && (b1 >= 'a' && b1 <= 'z') && (b2 >= 'a' && b2 <= 'z') && ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z')) && ((c2 >= 'a' && c2 <= 'z') || (c2 >= 'A' && c2 <= 'Z'))))
    {
        printf("Codigo invalido!\n");
        return 0;
    }

    if (a1 == a2)
        printf("I");
    else
        printf("D");

    if (b1 == b2)
        printf("I");
    else
        printf("D");

    if (c1 == c2)
        printf("I");
    else if (c1 + ' ' == c2 || c1 - ' ' == c2)
        printf("C");
    else
        printf("D");

    printf("\n");
}