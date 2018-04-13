#include <stdio.h>
int main() {
	int i;
	int j = 10;
	int vet[15];
	
	for (i = 0; i < 15; i++) {
		vet[i] = j;
		j++;
	}
		
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < 15; i++)
		printf("%4d\n",vet[i]);
}
