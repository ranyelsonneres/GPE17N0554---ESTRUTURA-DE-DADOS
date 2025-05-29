#ifndef PILHA_H
#define PILHA_H

typedef int TipoElemento;

typedef struct no {
    TipoElemento dado;
    struct no* prox;
} No;

typedef struct {
    No* topo;
    int tamanho;
} Pilha;

// Operações do TAD a serem implementadas
Pilha* criarPilha();
void empilhar(Pilha* p, TipoElemento valor);
TipoElemento desempilhar(Pilha* p);
TipoElemento consultarTopo(Pilha* p);
int estaVazia(Pilha* p);
int tamanhoPilha(Pilha* p);
void mostrarPilha(Pilha* p);
void liberarPilha(Pilha* p);

#endif
