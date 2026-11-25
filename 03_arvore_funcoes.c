/*
 * Exercício 03 - Funções da Árvore Binária de Busca
 *
 * Implemente aqui as funções da árvore usadas em 03_arvore_binaria.c.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

No* inserir(No *raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }
    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else {
        raiz->direita = inserir(raiz->direita, valor);
    }
    return raiz;
}

void preOrdem(No *raiz) {
    if (raiz == NULL) return;
    printf("%d ", raiz->valor);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

void emOrdem(No *raiz) {
    if (raiz == NULL) return;
    emOrdem(raiz->esquerda);
    printf("%d ", raiz->valor);
    emOrdem(raiz->direita);
}

void posOrdem(No *raiz) {
    if (raiz == NULL) return;
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d ", raiz->valor);
}

void emNivel(No *raiz) {
    if (raiz == NULL) return;

    No *fila[100];
    int inicio = 0;
    int fim = 0;

    fila[fim++] = raiz;

    while (inicio < fim) {
        No *atual = fila[inicio++];
        printf("%d ", atual->valor);

        if (atual->esquerda != NULL) {
            fila[fim++] = atual->esquerda;
        }
        if (atual->direita != NULL) {
            fila[fim++] = atual->direita;
        }
    }
}