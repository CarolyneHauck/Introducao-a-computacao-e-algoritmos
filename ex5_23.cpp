#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 8
int main() {
	srand(time(0));
	int i;
	int j;
	float mat[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			mat[i][j] = rand()%100/10.;
			printf("%.1f ", mat[i][j]);
		}
		
		printf("\n");
	}
}
