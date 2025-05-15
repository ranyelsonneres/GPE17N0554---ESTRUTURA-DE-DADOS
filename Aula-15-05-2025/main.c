#include <stdio.h>
#include "lista-duplamente-encadeada.h"

int main() {
    Lista* l = criarLista();

    inserirFim(l, 10);
    inserirFim(l, 20);
    inserirInicio(l, 5);
    inserirFim(l, 30);

    printf("Frente: ");
    mostrarListaFrente(l); 


    removerElemento(l, 10);
    printf("Após remover 10: ");
    mostrarListaFrente(l);
    return 0;
}
