//Escrever um programa C para criar e exibir na saıda padrao um vetor de inteiros de tamanho 50 cujo conteudo seja numeros 
//pseudoaleatorios no intervalo [0,9]. Exibir na saıda padrao a soma dos elementos do vetor.

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
