#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        if (a >= 1 && a <= 5)
        {
            printf("Um homem");
            return 0;
        }
        else if (a >= 6 && a <= 10)
        {
            printf("Uma mulher");
            return 0;
        }
        else
        {
            printf("Invalido");
            return 0;
        }
    }
    else
    {
        if (a >= 1 && a <= 5)
        {
            if (b >= 1 && b <= 5)
            {
                printf("Par de homens");
                return 0;
            }

            if (b >= 6 && b <= 10)
            {
                printf("Um casal");
                return 0;
            }

            printf("Invaldo");
            return 0;
        }

        if (a >= 6 && a <= 10)
        {
            if (b >= 1 && b <= 5)
            {
                printf("Um casal");
                return 0;
            }

            if (b >= 6 && b <= 10)
            {
                printf("Par de mulheres");
                return 0;
            }

            printf("Invalido");
            return 0;
        }

        printf("Invalido");
        return 0;
    }
}