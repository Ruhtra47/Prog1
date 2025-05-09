#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 97 && c <= 122)
        printf("%c(%d)", c - 32, (int)c - 32);
    else if (c >= 65 && c <= 90)
        printf("A letra deve ser minuscula!");
    else
        printf("Nao e letra!");

    return 0;
}