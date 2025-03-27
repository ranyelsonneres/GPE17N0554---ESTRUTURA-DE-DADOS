#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (arr[meio] == valor)
            return meio; 

        if (valor < arr[meio])
            fim = meio - 1; 
        else
            inicio = meio + 1;
    }

    return -1; 
}

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int posicao = buscaBinaria(lista, tamanho, valor);

    if (posicao != -1)
        printf("Elemento encontrado na posição: %d\n", posicao);
    else
        printf("Elemento não encontrado\n");

    return 0;
}
