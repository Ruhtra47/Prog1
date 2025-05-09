#include <stdio.h>

int main()
{
    int opcao_s;
    scanf("%d", &opcao_s);

    if (opcao_s == 1)
    {
        double s1 = 0;

        int divisor = 1;
        int dividendo = 1;

        for (divisor = 1; divisor <= 50; divisor++)
        {
            s1 += (double)dividendo / (double)divisor;

            dividendo += 2;
        }

        printf("%.6f", s1);
    }
    else if (opcao_s == 2)
    {
        double s2 = 0;

        int divisor = 50;
        long long int dividendo = 2;

        for (divisor = 50; divisor > 0; divisor--)
        {
            s2 += (double)dividendo / (double)divisor;

            dividendo *= 2;
        }

        printf("%.6f", s2);
    }
    else if (opcao_s == 3)
    {
        float s3 = 0;

        int divisor = 1;
        int dividendo = 1;
        int razao = 3;

        for (dividendo = 1; dividendo <= 10; dividendo++)
        {
            s3 += (float)dividendo / (float)divisor;

            divisor += razao;
            razao += 2;
        }

        printf("%.6f", s3);
    }
}