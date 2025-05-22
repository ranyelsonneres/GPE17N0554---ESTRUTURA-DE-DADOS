#include <stdio.h>
#include "lista-duplamente-encadeada.h"

int main() {
    Lista* l = criarLista();

    inserirFim(l, 10);
    inserirFim(l, 20);
    inserirInicio(l, 5);
    inserirFim(l, 30);

    printf("Frente: ");
    mostrarListaFrente(l); // 5 10 20 30

    printf("Trás: ");
    mostrarListaTras(l);   // 30 20 10 5

    TipoElemento valor;
    if (obterElementoPosicao(l, 2, &valor))
        printf("Elemento na posição 2: %d\n", valor);

    printf("Total de elementos: %d\n", contarElementos(l));

    removerElemento(l, 10);
    printf("Após remover 10: ");
    mostrarListaFrente(l); // 5 20 30

    esvaziarLista(l);
    printf("Lista após esvaziar: ");
    mostrarListaFrente(l); // (vazia)

    destruirLista(l);
    return 0;
}
