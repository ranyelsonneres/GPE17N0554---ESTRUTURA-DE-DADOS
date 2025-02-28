#include <stdio.h>

int main(){

    int vet1[5] = {1, 2, 3, 4, 5};
    int vet2[5] = {6, 7, 8, 9, 10};

    printf("Primeiro vetor: ");
    for (int i = 0; i<5; i++){
        printf("%d ", vet1[i]);
    }

    printf("\nSegundo vetor: ");
    for (int i = 0; i<5; i++){
        printf("%d ", vet2[i]);
    }

    printf("\nDepois");

    for (int i=0; i<5; i++){
        int temp = vet1[i];
        vet1[i] = vet2[i];
        vet2[i] = temp;
    }

    printf("\nPrimeiro vetor:");
    for(int i=0; i<5;i++){
        printf("%d ", vet1[i]);
    }

    printf("\nTroca: Segundo vetor: ");
    for (int i = 0; i<5; i++){
        printf("%d ", vet2[i]);
    }


    return 0;
}
