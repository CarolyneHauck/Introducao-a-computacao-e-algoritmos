//Escrever um programa C que inicialize randomicamente os elementos de uma matriz de ordem 5×10 de inteiros no intervalo [0,9]. 
//Exibir na saıda padrao a soma dos elementos da matriz gerada.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	int i;
	int j;
	int soma = 0;
	int mat[5][10];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < 5; i++, j++) {
		for (j = 0; j < 10; j++){
			mat[i][j] = rand()%10;
			soma += mat[i][j];
			printf("%d ", mat[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n%d", soma);
}
