/*
 * Exercício 04 - Funções da Pilha
 *
 * Implemente aqui as funções da pilha usadas em 04_pilha.c.
 */

#define MAX 10

int pilha[MAX];
int topo = -1;

int estaVazia() {
    if (topo == -1) {
        return 1;
    }
    return 0;
}

int estaCheia() {
    if (topo == MAX - 1) {
        return 1;
    }
    return 0;
}

void empilhar(int valor) {
    if (!estaCheia()) {
        topo++;
        pilha[topo] = valor;
    }
}

int desempilhar() {
    if (!estaVazia()) {
        int valor = pilha[topo];
        topo--;
        return valor;
    }
    return -1;
}

int verTopo() {
    if (!estaVazia()) {
        return pilha[topo];
    }
    return -1;
}