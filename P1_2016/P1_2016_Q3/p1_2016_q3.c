#include <stdio.h>

int main()
{
    char c1, c2, c3, c4;
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

    int invalido = 0;

    if (!(c1 >= 'A' && c1 <= 'Z'))
        invalido = 1;

    if (!(c2 >= '0' && c2 <= '9'))
        invalido = 1;

    if (!(c3 == 'A' || c3 == 'E' || c3 == 'I' || c3 == 'O' || c3 == 'U' || c3 == 'a' || c3 == 'e' || c3 == 'i' || c3 == 'o' || c3 == 'u'))
        invalido = 1;

    if (!((c4 >= 'a' && c4 <= 'z') && (c4 != 'a' && c4 != 'e' && c4 != 'i' && c4 != 'o' && c4 != 'u')))
        invalido = 1;

    if (invalido)
        printf("Invalido");
    else
        printf("%c%c%c%c", c1, c2, (c3 >= 'A' && c3 <= 'Z' ? c3 : c3 - ' '), c4 - ' ');
}