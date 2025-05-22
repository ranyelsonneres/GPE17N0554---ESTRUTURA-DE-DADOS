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
void destruirLista(Lista* l);

void mostrarListaFrente(Lista* l);
void mostrarListaTras(Lista* l);
void esvaziarLista(Lista* l);

int contarElementos(Lista* l);
int obterPrimeiro(Lista* l, TipoElemento* saida);
int obterUltimo(Lista* l, TipoElemento* saida);
int obterElementoPosicao(Lista* l, int i, TipoElemento* saida);

#endif



