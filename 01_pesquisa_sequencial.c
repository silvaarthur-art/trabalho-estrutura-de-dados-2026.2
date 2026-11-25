/*
 * Exercício 01 - Pesquisa Sequencial
 *
 * Dado o vetor de 10 números abaixo, use a pesquisa sequencial para
 * encontrar o ÚLTIMO número par e mostre a posição em que ele está.
 *
 *     { 3, 8, 5, 12, 7, 9, 4, 11, 15, 21 }
 *
 * - Não altere os valores do vetor.
 * - A posição começa em 0.
 *
 * Saída esperada:
 *     O ultimo numero par esta na posicao X
 */

#include <stdio.h>

#define TAMANHO 10

int buscarUltimoPar(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        if (vetor[i] % 2 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numeros[TAMANHO] = { 3, 8, 5, 12, 7, 9, 4, 11, 15, 21 };

    int posicao = buscarUltimoPar(numeros, TAMANHO);

    printf("O ultimo numero par esta na posicao %d\n", posicao);

    return 0;
}