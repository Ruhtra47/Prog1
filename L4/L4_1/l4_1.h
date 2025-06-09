#pragma once

typedef struct {
    int codigo;
    float preco;
    int qtd_estoque;
} tProduto;

tProduto LeProduto(tProduto *produto);
int EhProduto1MaiorQ2(tProduto p1, tProduto p2);
int EhProduto1MenorQ2(tProduto p1, tProduto p2);
int TemProdutoEmEstoque(tProduto p);
void ImprimeProduto(tProduto p);