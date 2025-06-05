#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criarFila() {
    Fila* f = malloc(sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void enfileirar(Fila* f, TipoElemento valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;
    if (f->fim != NULL) {
        f->fim->prox = novo;
    } else {
        f->inicio = novo;
    }
    f->fim = novo;
    f->tamanho++;
}

TipoElemento desenfileirar(Fila* f) {
    if (f->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;  
    }
    No* temp = f->inicio;
    TipoElemento valor = temp->dado;
    f->inicio = temp->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }
    free(temp);
    f->tamanho--;
    return valor;
}

int tamanhoFila(Fila* f) {
    return f->tamanho;
}

void mostrarFila(Fila* f) {
    No* atual = f->inicio;
    printf("Início → ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("← Fim\n");
}

void esvaziarFila(Fila* f) {
    while (f->inicio != NULL) {
        desenfileirar(f);
    }
    free(f);
}
