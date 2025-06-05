#include <stdio.h>
#include "fila.h"

int main() {
    Fila* f = criarFila();

    enfileirar(f, 5);
    enfileirar(f, 10);
    enfileirar(f, 20);
    enfileirar(f, 30);

    mostrarFila(f);  

    printf("Desenfileirado: %d\n", desenfileirar(f));
    printf("Desenfileirado: %d\n", desenfileirar(f));
    mostrarFila(f); 
     

    printf("Tamanho: %d\n", tamanhoFila(f));

    esvaziarFila(f);
    return 0;
}
