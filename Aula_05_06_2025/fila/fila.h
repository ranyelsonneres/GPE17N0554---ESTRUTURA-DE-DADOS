#ifndef FILA_H
#define FILA_H

typedef int TipoElemento;

typedef struct no {
    TipoElemento dado;
    struct no* prox;
} No;

typedef struct {
    No* inicio;  
    No* fim;     
    int tamanho;
} Fila;

// Operações
Fila* criarFila();
void enfileirar(Fila* f, TipoElemento valor);
TipoElemento desenfileirar(Fila* f);
int tamanhoFila(Fila* f);
void mostrarFila(Fila* f);
void esvaziarFila(Fila* f);

#endif
