#include <stdio.h>
#include "Produto.h"

int main() {
    Produto produto;
    int codigo, quantidadeInicial, quantidadeAdicionar, quantidadeRemover;
    char nome[50];
    double precoInicial, novoPreco;
    
    // Lendo dados de entrada
    scanf("%d", &codigo);
    getchar();
    scanf("%s", nome);
    scanf("%lf", &precoInicial);
    scanf("%d", &quantidadeInicial);
    
    // Inicializando o produto
    inicializarProduto(&produto, codigo, nome, precoInicial, quantidadeInicial);
    
    printf("=== PRODUTO CRIADO ===\n");
    exibirProduto(&produto);
    
    // Alterando o preço
    scanf("%lf", &novoPreco);
    alterarPreco(&produto, novoPreco);
    
    printf("=== APÓS ALTERAR PREÇO ===\n");
    exibirProduto(&produto);
    
    // Adicionando estoque
    scanf("%d", &quantidadeAdicionar);
    adicionarEstoque(&produto, quantidadeAdicionar);
    
    printf("=== APÓS ADICIONAR ESTOQUE ===\n");
    exibirProduto(&produto);
    
    // Removendo estoque
    scanf("%d", &quantidadeRemover);
    removerEstoque(&produto, quantidadeRemover);
    
    printf("=== APÓS REMOVER ESTOQUE ===\n");
    exibirProduto(&produto);
    
    return 0;
}
