#include <stdio.h>

int soma(int *a, int *b){
    return *a + *b;
};

int main(){

   
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("num1: ");
    scanf("%d", ptr1);

    printf("num2: ");
    scanf("%d", ptr2);

    int resultado = soma(ptr1, ptr2);

    printf("soma: %d\n", resultado);

    return 0;
}