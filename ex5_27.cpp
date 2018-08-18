//Escrever um programa C que inicialize randomicamente os elementos de duas matriz quadradas A e B de ordem 5 de inteiros no
//intervalo [0,9]. Calcular e apresentar na saıda padrao a matriz soma C das matrizes geradas C = A + B.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 5
int main() {
	srand(time(0));
	int i;
	int j;
	int matA[SIZE][SIZE];
	int matB[SIZE][SIZE];
	int matC[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			matA[i][j] = rand()%10;
			printf("%2d ", matA[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			matB[i][j] = rand()%10;
			printf("%2d ", matB[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			matC[i][j] = matA[i][j] + matB[i][j];
			printf("%2d ", matC[i][j]);
		}
		
		printf("\n");
	}
}
