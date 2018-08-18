//Escrever um programa C que gere e apresente na saıda padrao uma matriz quadrada de ordem 8 cujos elementos da diagonal 
//secundaria possuem numeros inteiros aleatorios no intervalo [1,9] e os demais elementos da matriz possuem valor zero.

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
	
	for (i = 0, j = 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			if(i+j == SIZE-1){
				mat[i][j] = 1;
			}
			else{
				mat[i][j] = 0;
			}
			printf("%2d ", mat[i][j]);
		}
		
		printf("\n");
	}
}
