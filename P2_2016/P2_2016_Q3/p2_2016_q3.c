#include <stdio.h>

int EhProduto(char prd);
int AcabaramOsProdutos(char prd);
int QtdDoProdutoMaisComprado();

int EhProduto(char prd)
{
    return prd >= 'A' && prd <= 'Z';
}

int AcabaramOsProdutos(char prd)
{
    return prd == '0';
}

int QtdDoProdutoMaisComprado()
{
    char c, last = '\0';
    int cont_atual = 0, cont_max = 0;

    while (scanf("%c", &c) == 1)
    {
        if (AcabaramOsProdutos(c))
            break;

        if (EhProduto(c))
        {
            if (c == last)
            {
                cont_atual++;
            }
            else
            {
                cont_atual = 1;
                last = c;
            }

            if (cont_atual > cont_max)
            {
                cont_max = cont_atual;
            }
        }
    }
    return cont_max;
}

int main()
{
    int codigo_cliente, cliente_mais_guloso = 0, quantidade_mais_comprado = 0;

    while (scanf("%d", &codigo_cliente) == 1)
    {
        if (codigo_cliente == -1)
            break;

        int mais_comprado_pelo_cliente = QtdDoProdutoMaisComprado();
        if (mais_comprado_pelo_cliente > quantidade_mais_comprado)
        {
            quantidade_mais_comprado = mais_comprado_pelo_cliente;
            cliente_mais_guloso = codigo_cliente;
        }
    }

    printf("CLIENT:%d QTD:%d", cliente_mais_guloso, quantidade_mais_comprado);
}