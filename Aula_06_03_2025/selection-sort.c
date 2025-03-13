#include <stdio.h>

void selectionSort(int vetor[], int n) {
    // Percorre todos os elementos do vetor
    for (int i = 0; i < n - 1; i++) {
        // Assume que o primeiro elemento não ordenado é o menor
        int minIndex = i;
        
        // Encontra o menor elemento na parte não ordenada
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        if (minIndex != i) {
            int temp = vetor[i];
            vetor[i] = vetor[minIndex];
            vetor[minIndex] = temp;
        }
    }
}

void imprimirVetor(int vetor[], int n) {
    // Função para imprimir o vetor
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    // Vetor a ser ordenado
    int vetor[5] = {5, 3, 8, 4, 2};
    int n = sizeof(vetor) / sizeof(vetor[0]);  // Tamanho do vetor

    printf("Vetor antes de ordenar: ");
    imprimirVetor(vetor, n);  // Imprime o vetor original

    // Chama a função de ordenação Selection Sort
    selectionSort(vetor, n);

    printf("Vetor após ordenar: ");
    imprimirVetor(vetor, n);  // Imprime o vetor ordenado

    return 0;
}


