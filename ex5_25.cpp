//Escrever um programa C que inicialize randomicamente os elementos de uma matriz quadrada de ordem 10 de inteiros no intervalo [0,999]. 
//Exibir na saıda padrao o ındice e o valor correspondente ao maior elemento da matriz.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i;
	int j;
	int maior = 0;
	int mat[SIZE][SIZE] {{}};
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			mat[i][j] = rand()%1000;
			if (mat[i][j] > maior){
				maior = mat[i][j];
			}
			printf("%3d ", mat[i][j]);
		}
		
		printf("\n");
	}
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			if (mat[i][j] == maior){
				printf("\nIndice [%d][%d]: [%d]", i, j, maior);
			}
		}
	}
}
