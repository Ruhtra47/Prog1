#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < 100)
        n1 = 9999999;
    else
        n1 = (n1 / 100) % 10;

    if (n2 < 100)
        n2 = 9999999;
    else
        n2 = (n2 / 100) % 10;

    if (n3 < 100)
        n3 = 9999999;
    else
        n3 = (n3 / 100) % 10;

    if (n1 <= n2 && n1 <= n3 && n1 != 9999999)
        printf("N1");
    else if (n2 <= n1 && n2 <= n3 && n2 != 9999999)
        printf("N2");
    else if (n3 <= n1 && n3 <= n1 && n3 != 9999999)
        printf("N3");
    else
        printf("Nenhum");
}