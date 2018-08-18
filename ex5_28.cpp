//Uma matriz identidade e uma matriz quadrada que possui todos os membros da diagonal principal iguais a 1. 
//Todos os demais elementos tem conteudo igual a 0. Escrever um programa C que gere e apresente na saıda padrao uma matriz identidade 
//de ordem 8.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 8
int main() {
	int i;
	int j;
	int mat[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			if(i == j){
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
