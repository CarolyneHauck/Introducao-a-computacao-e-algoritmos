//Escrever um programa C que inicialize randomicamente os elementos de uma matriz quadrada de ordem 10 de 
//caracteres no intervalo [A,Z]. Exibir o conteu´do da matriz na sa´ıda padr˜ao.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i;
	int j;
	char mat[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			mat[i][j] = rand()%26+65;
			printf("%c ", mat[i][j]);
		}
		
		printf("\n");
	}
}
