#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	int n;
	int qtdI = 0;
	int qtdO = 0;
	int qtdIgual = 0;
	int i;
	int j;
	int mat[80][80];
	
	scanf("%d", &n);
	
	for (i = 0, j= 0; i < n; i++, j++) {
		for (j = 0; j < n; j++){
			mat[i][j] = rand()%2;
			printf("%d ", mat[i][j]);
			
			if(mat[i][j] == 0)
				qtdO++;
			else
				qtdI++;
		}
		
		if(qtdO == qtdI)
			qtdIgual++;
			
		qtdO = 0;
		qtdI = 0;
		printf("\n");
	}
	
	printf("%d", qtdIgual);
}
