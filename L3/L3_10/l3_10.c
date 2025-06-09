#include <stdio.h>

char Codifica(char letra, int n);
char Decodifica(char letra, int n);
int EhLetra(char c);
int EhLetraMaiuscula(char c);
int EhLetraMinuscula(char c);

int EhLetra(char c)
{
    if (EhLetraMaiuscula(c) || EhLetraMinuscula(c))
        return 1;
    return 0;
}

int EhLetraMaiuscula(char c)
{
    if (c >= 65 && c <= 90)
        return 1;
    return 0;
}

int EhLetraMinuscula(char c)
{
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}

char Codifica(char letra, int n)
{
    if (EhLetraMaiuscula(letra))
    {
        n *= 2;
        letra = 'A' + (letra - 'A' + n) % 26;
    }
    else
    {
        letra = 'a' + (letra - 'a' + n) % 26;
    }
    return letra;
}

char Decodifica (char letra, int n)
{
    if (EhLetraMaiuscula(letra))
    {
        n *= 2;
        letra = 'A' + (letra - 'A' - n + 26) % 26;
    }
    else
    {
        letra = 'a' + (letra - 'a' - n + 26) % 26;
    }
    return letra;
}

int main()
{
    int option, key;
    scanf("%d %d ", &option, &key);

    if (option != 1 && option != 2)
    {
        printf("Operacao invalida.");
        return 0;
    }

    key %= 26;

    char c;
    while (1)
    {
        scanf("%c", &c);

        if (c == '.')
        {
            printf(".");
            break;
        }

        if (!EhLetra(c))
        {
            printf("%c", c);
            continue;
        }

        if (option == 1)
        {
            c = Codifica(c, key);
        }
        else if (option == 2)
        {
            c = Decodifica(c, key);
        }

        printf("%c", c);
    }
}