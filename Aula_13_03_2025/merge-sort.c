#include <stdio.h>

//(merge)
void Merge(int A[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;  // tamanho do primeiro subarray
    int n2 = fim - meio;         // tamanho do segundo subarray

    int L[n1], R[n2]; // arrays temporários

    // leva os elementos para os arrays temporários
    for (int i = 0; i < n1; i++)
        L[i] = A[inicio + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    // mescla os arrays L e R de volta para A[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // copia os elementos restantes de L[], se houver
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    // copia os elementos restantes de R[], se houver
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

// mergesort
void MergeSort(int A[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;

        MergeSort(A, inicio, meio);   // ordena a primeira metade (chamada recursiva)
        MergeSort(A, meio + 1, fim);  // ordena a segunda metade (chamada recursiva)

        Merge(A, inicio, meio, fim);  // mescla as duas metades ordenadas
    }
}


void ImprimirArray(int A[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int A[] = {4,5,1,0,7,6,3,2};
    int tamanho = sizeof(A) / sizeof(A[0]);

    printf("Array original:\n");
    ImprimirArray(A, tamanho);

    MergeSort(A, 0, tamanho - 1);

    printf("Array ordenado:\n");
    ImprimirArray(A, tamanho);

    return 0;
}
