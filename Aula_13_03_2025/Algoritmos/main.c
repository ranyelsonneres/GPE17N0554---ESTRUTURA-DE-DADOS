#include <stdio.h>
#define TAM 25

void bubbleSort(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = vetor[i];
            vetor[i] = vetor[minIndex];
            vetor[minIndex] = temp;
        }
    }
}

void insertionSort(int vetor[], int n) {
    for (int i = 1; i < n; i++) {
        int val = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > val) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = val;
    }
}

void merge(int vetor[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    int l[n1], r[n2];

    for (int i = 0; i < n1; i++) {
        l[i] = vetor[inicio + i];
    }

    for (int j = 0; j < n2; j++) {
        r[j] = vetor[meio + 1 + j];
    }

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            vetor[k] = l[i];
            i++;
        } else {
            vetor[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetor[k] = l[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetor[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(int vetor[], int i, int f) {
    if (i < f) {
        int meio = (i + f) / 2;
        mergeSort(vetor, i, meio);
        mergeSort(vetor, meio + 1, f);
        merge(vetor, i, meio, f);
    }
}

void printArray(int vetor[], int n) {
    printf("Vetor = {");
    for (int i = 0; i < n; i++) {
        printf("%d", vetor[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    int vetor1[TAM] = {14, 25, 10, 20, 21, 1, 2, 3, 4, 5, 9, 6, 12, 11, 17, 19, 22, 24, 23, 15, 7, 8, 16, 18, 13};

    // bubbleSort(vetor1, TAM);     
    // selectionSort(vetor1, TAM);
    // insertionSort(vetor1, TAM);   
    mergeSort(vetor1, 0, TAM - 1);

    printArray(vetor1, TAM);

    return 0;
}
