#include <stdio.h>
#include <string.h>
#include "Produto.h"

void inicializarProduto(Produto *p, int codigo, char *nome, double preco, int quantidade) {
    p->codigo = codigo;
    strcpy(p->nome, nome);
    p->preco = preco;
    p->quantidade = quantidade;
}

void alterarPreco(Produto *p, double novoPreco) {
    if (novoPreco >= 0) {
        p->preco = novoPreco;
    }
}

void adicionarEstoque(Produto *p, int quantidade) {
    if (quantidade > 0) {
        p->quantidade += quantidade;
    }
}

void removerEstoque(Produto *p, int quantidade) {
    if (quantidade > 0 && quantidade <= p->quantidade) {
        p->quantidade -= quantidade;
    }
}

void exibirProduto(Produto *p) {
    printf("Codigo: %d\n", p->codigo);
    printf("Nome: %s\n", p->nome);
    printf("Preco: %.2f\n", p->preco);
    printf("Quantidade: %d\n", p->quantidade);
}
