#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50
int main() {
	srand(time(0));
	int i;
	int soma = 0;
	int vet[SIZE];
	
	for (i = 0; i < SIZE; i++) {
		vet[i]=rand()%10;
		soma += vet[i];
	}
	
	printf("Soma dos valores: %d", soma);
}
