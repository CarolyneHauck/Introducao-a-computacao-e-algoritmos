#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10
int main() {
	srand(time(0));
	int i;
	int j;
	int num;
	int flag = 0;
	int mat[SIZE][SIZE];
	
	printf("Conteudo da matriz:\n");
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			mat[i][j] = rand()%100;
			printf("%2d ", mat[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n");
	scanf("%d", &num);
	
	for (i = 0, j= 0; i < SIZE; i++, j++) {
		for (j = 0; j < SIZE; j++){
			if(mat[i][j] == num){
				flag = 1;
				printf("\nEsta presente na matriz, posicao [%d][%d]", i, j);
			}
		}
	}
	
	if(flag == 0){
		printf("\nNenhum valor encontrado!");
	}
}
