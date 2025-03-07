// Bublle sort, compara o elemento da esquerda com o elemento da direita, se for 'true' a operação, eles trocam de lugares.
// A ideia é flutuar o maior elemento para o fim. Esse processo acontece até que todos os elementos sejam ordenados.
// Fácil de implementar e de entender, funciona bem para pequenos conjuntos de dados.

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vetor[],int num){
	int i, j, temp;
 for (i = 0; i < num; i++){
 	for (j = 0; j < num - i - 1; j++){
 		if (vetor[j] > vetor[j+1]){
 			temp = vetor[j];
 			vetor[j] = vetor[j+1];
 			vetor[j+1] = temp;
		 }		 
	 }	 
  }
}



int main(){
	int i, num, vetor[100];
	
	printf("Quantos numeros vc ira digitar ?");
	scanf("%d", &num);
	
	for (i=0; i < num; i++){
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
	}
	
	bubbleSort(vetor, num);
	
	for (i=0; i < num; i++){
		printf("%d\n", vetor[i]);
	}
	return 0;
}
