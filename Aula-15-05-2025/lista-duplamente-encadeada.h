#ifndef LISTA_DUPLAMENTE_ENCADEADA_H
#define LISTA_DUPLAMENTE_ENCADEADA_H

typedef int TipoElemento;

typedef struct no {
    TipoElemento dado;
    struct no* ant;
    struct no* prox;
} No;

typedef struct {
    No* inicio;
    No* fim;
    int tamanho;
} Lista;

// Operações básicas
Lista* criarLista();
void inserirInicio(Lista* l, TipoElemento elem);
void inserirFim(Lista* l, TipoElemento elem);
int removerElemento(Lista* l, TipoElemento elem);
void mostrarListaFrente(Lista* l);

#endif



