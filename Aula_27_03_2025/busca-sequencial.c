#include <stdio.h>


int buscaSequencial(int lista[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == valor) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int posicao = buscaSequencial(lista, tamanho, valor);

    if (posicao != -1) {
        printf("Elemento encontrado na posição: %d\n", posicao);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}

