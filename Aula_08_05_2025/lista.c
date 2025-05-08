#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criarLista() {
    Lista* l = (Lista*) malloc(sizeof(Lista));
    if (l != NULL)
        l->inicio = NULL;
    return l;
}

int inserirInicio(Lista* l, TipoElemento valor) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo == NULL) return 0;

    novo->dado = valor;
    novo->prox = l->inicio;
    l->inicio = novo;
    return 1;
}

int inserirFim(Lista* l, TipoElemento valor) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo == NULL) return 0;

    novo->dado = valor;
    novo->prox = NULL;

    if (l->inicio == NULL) {
        l->inicio = novo;
    } else {
        No* atual = l->inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo;
    }

    return 1;
}

int removerNaPosicao(Lista* l, int posicao) {
    if (posicao < 0 || l->inicio == NULL) return 0;

    No* atual = l->inicio;

    if (posicao == 0) {
        l->inicio = atual->prox;
        free(atual);
        return 1;
    }

    No* anterior = NULL;

    for (int i = 0; i < posicao && atual != NULL; i++) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) return 0;

    anterior->prox = atual->prox;
    free(atual);
    return 1;
}

int acessarElemento(Lista* l, int posicao, TipoElemento* valor) {
    if (posicao < 0 || l->inicio == NULL) return 0;

    No* atual = l->inicio;

    for (int i = 0; i < posicao && atual != NULL; i++) {
        atual = atual->prox;
    }

    if (atual == NULL) return 0;

    *valor = atual->dado;
    return 1;
}

void mostrarLista(Lista* l) {
    No* atual = l->inicio;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->prox;
    }
    printf("NULL\n");
}

void destruirLista(Lista* l) {
    No* atual = l->inicio;
    while (atual != NULL) {
        No* temp = atual->prox;
        free(atual);
        atual = temp;
    }
    free(l);
}
