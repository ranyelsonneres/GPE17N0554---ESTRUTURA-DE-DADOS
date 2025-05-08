#include <stdio.h>
#include "lista.h"

int main() {
    Lista* l = criarLista();

    inserirFim(l, 10);
    inserirFim(l, 20);
    inserirFim(l, 30);
    inserirInicio(l, 5);

    mostrarLista(l); 

    TipoElemento valor;
    if (acessarElemento(l, 2, &valor)) {
        printf("Elemento na posição 2: %d\n", valor); 
    }

    removerNaPosicao(l, 1); 
    mostrarLista(l);         

    destruirLista(l);
    return 0;
}
