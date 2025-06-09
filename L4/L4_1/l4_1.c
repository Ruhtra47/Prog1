#include <stdio.h>

#include "l4_1.h"

tProduto LeProduto(tProduto *produto)
{
    scanf("%d;%f;%d", &produto->codigo, &produto->preco, &produto->qtd_estoque);
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    return p1.preco > p2.preco;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
    return p1.preco < p2.preco;
}

int TemProdutoEmEstoque(tProduto p)
{
    return p.qtd_estoque;
}

void ImprimeProduto(tProduto p)
{
    printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtd_estoque);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int i = 0;
    tProduto cur_prod, last_prod;
    tProduto maior_produto = {-1, -1, -1};
    tProduto menor_produto = {99999, 99999, 99999};
    for (i = 0; i < n; i++)
    {
        LeProduto(&cur_prod);

        if (!TemProdutoEmEstoque(cur_prod))
        {
            printf("FALTA:");
            ImprimeProduto(cur_prod);
        }

        if (EhProduto1MaiorQ2(cur_prod, maior_produto))
        {
            maior_produto = cur_prod;
        }

        if (EhProduto1MenorQ2(cur_prod, menor_produto))
        {
            menor_produto = cur_prod;
        }
    }

    printf("MAIOR:");
    ImprimeProduto(maior_produto);

    printf("MENOR:");
    ImprimeProduto(menor_produto);
}