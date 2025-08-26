#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {
    int codigo;
    char nome[50];
    double preco;
    int quantidade;
} Produto;

// Função para inicializar um produto
void inicializarProduto(Produto *p, int codigo, char *nome, double preco, int quantidade);

// Função para alterar o preço do produto
void alterarPreco(Produto *p, double novoPreco);

// Função para adicionar quantidade ao estoque
void adicionarEstoque(Produto *p, int quantidade);

// Função para remover quantidade do estoque
void removerEstoque(Produto *p, int quantidade);

// Função para exibir informações do produto
void exibirProduto(Produto *p);

#endif
