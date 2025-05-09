#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c > 90)
        c -= 32;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vogal");
    else
        printf("Nao vogal");
}