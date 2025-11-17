#ifndef TRIE_H
#define TRIE_H

#define TAMANHO_ALFABETO 26

typedef struct NoTrie {
    struct NoTrie* filhos[TAMANHO_ALFABETO];
    int fim_palavra;
} NoTrie;

typedef struct {
    NoTrie* raiz;
} Trie;

Trie* criar_trie();
void inserir(Trie* trie, const char* palavra);
int buscar(Trie* trie, const char* palavra);
void liberar_trie(Trie* trie);

#endif
