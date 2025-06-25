#include <stdio.h>

int main()
{
    char a, b, c, d;

    scanf("%c%c %c%c", &a, &b, &c, &d);

    if (a >= 'a' && a <= 'z')
        a -= ' ';
    if (b >= 'a' && b <= 'z')
        b -= ' ';
    if (c >= 'a' && c <= 'z')
        c -= ' ';
    if (d >= 'a' && d <= 'z')
        d -= ' ';

    if (!(a >= '0' && a <= '9') && !(a >= 'A' && a <= 'Z'))
    {
        printf("Invalido");
        return 0;
    }
    if (!(b >= '0' && b <= '9') && !(b >= 'A' && b <= 'Z'))
    {
        printf("Invalido");
        return 0;
    }
    if (!(c >= '0' && c <= '9') && !(c >= 'A' && c <= 'Z'))
    {
        printf("Invalido");
        return 0;
    }
    if (!(d >= '0' && d <= '9') && !(d >= 'A' && d <= 'Z'))
    {
        printf("Invalido");
        return 0;
    }

    if (a == c && b == d)
    {
        printf("IGUAIS");
    }
    else
    {
        printf("DIFERENTES");
    }
}