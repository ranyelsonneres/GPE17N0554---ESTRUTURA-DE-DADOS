#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha() {
    Pilha* p = malloc(sizeof(Pilha));
    p->topo = NULL;
    p->tamanho = 0;
    return p;
}

void empilhar(Pilha* p, TipoElemento valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = p->topo;
    p->topo = novo;
    p->tamanho++;
}

TipoElemento desempilhar(Pilha* p) {
    if (p->topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    No* temp = p->topo;
    TipoElemento valor = temp->dado;
    p->topo = temp->prox;
    free(temp);
    p->tamanho--;
    return valor;
}

TipoElemento consultarTopo(Pilha* p) {
    if (p->topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    return p->topo->dado;
}

int estaVazia(Pilha* p) {
    if (p->topo == NULL) {
        return 1;  
    } else {
        return 0;  
    }
}


int tamanhoPilha(Pilha* p) {
    return p->tamanho;
}

void mostrarPilha(Pilha* p) {
    No* atual = p->topo;
    printf("Topo → ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("← Base\n");
}

void liberarPilha(Pilha* p) {
    while (!estaVazia(p)) {
        desempilhar(p);
    }
    free(p);
}
