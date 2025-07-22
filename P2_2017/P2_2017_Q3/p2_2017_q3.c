#include <stdio.h>

int QtdDebitoPlaca(int presc);
int MaiorDebitoCidade();

int QtdDebitoPlaca(int presc)
{
    int valor, ano, debito = 0;
    while (scanf("(%d:%d)", &valor, &ano) == 2)
    {
        if (ano <= presc)
            debito += valor;
    }

    return debito;
}

int MaiorDebitoCidade()
{
    int presc, debito_atual, debito_maximo = 0;
    char maior_debito_c1, maior_debito_c2, maior_debito_c3;
    scanf("%d", &presc);
    scanf("%*c");

    char c_placa1, c_placa2, c_placa3;
    while (1)
    {
        scanf("%c%c%c", &c_placa1, &c_placa2, &c_placa3);

        if (c_placa1 == 'F' && c_placa2 == 'I' && c_placa3 == 'M')
            break;

        debito_atual = QtdDebitoPlaca(presc);
        if (debito_atual > debito_maximo)
        {
            debito_maximo = debito_atual;

            maior_debito_c1 = c_placa1;
            maior_debito_c2 = c_placa2;
            maior_debito_c3 = c_placa3;
        }
        scanf("%*c");
    }

    if (!debito_maximo)
    {
        printf("SEM DEBITO!\n");
    }
    else
    {
        printf("PLACA:%c%c%c DEBITO:%d\n", maior_debito_c1, maior_debito_c2, maior_debito_c3, debito_maximo);
    }

    return debito_maximo;
}

int main()
{
    int n, soma = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        soma += MaiorDebitoCidade();
    }

    printf("SOMA:%d\n", soma);
}