#include <stdio.h>

void insertionSort(int arr[], int n){

    for(int i=1;i<n;i++){
      int chave = arr[i];
      int j = i - 1;
      
      while (j >= 0 && arr[j]>chave){
        arr[j + 1] = arr[j];
        j--;
      }
      arr[j + 1] = chave;
    }

}

//impressao


int main (){
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;

    return 0;
}
