#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha* p = criarPilha();

    empilhar(p, 10);
    empilhar(p, 20);
    empilhar(p, 30);

    mostrarPilha(p);
    printf("Topo: %d\n", consultarTopo(p));

    printf("Desempilhando: %d\n", desempilhar(p));
    mostrarPilha(p);

    printf("Tamanho: %d\n", tamanhoPilha(p));
    if (estaVazia(p)) {
        printf("Está vazia? Sim\n");
    } else {
        printf("Está vazia? Não\n");
    }


    liberarPilha(p);
    return 0;
}
