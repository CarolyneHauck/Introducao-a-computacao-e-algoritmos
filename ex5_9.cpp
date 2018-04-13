#include <stdio.h>
#define SIZE 10
int main() {
	int i;
	int vet[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < SIZE; i++)
		printf("%4d %4d\n", vet[i], vet[i] * 2);
}
