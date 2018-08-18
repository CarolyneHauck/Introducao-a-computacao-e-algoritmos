//Uma matriz e dita triangular superior quando somente os elementos acima e na diagonal principal sao diferentes de 0. 
//Escrever um programa C que gere e apresente na saıda padrao uma matriz triangular superior de ordem 8 cujo 
//conteudo sao numeros aleatorios no intervalo [1,99].

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 8
int main() {
	srand(time(0));
	int i;
	int j;
	int mat[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			if(i == j || i < j){
				mat[i][j] = rand()%100;
			}
			else{
				mat[i][j] = 0;
			}
			printf("%2d ", mat[i][j]);
		}
		
		printf("\n");
	}
}
