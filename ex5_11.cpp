//Escrever um programa C para criar e exibir na saıda padrao um vetor de inteiros de tamanho 20 cujo conteudo seja numeros pseudoaleatorios
//no intervalo [0,99]. Exibir na saıda padrao o ındice correspondente ao elemento de menor valor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main() {
	srand(time(0));
	int i;
	int menor = 99;
	int indice = 0;
	int vet[SIZE];
	
	for (i = 0; i < SIZE; i++) {
		vet[i]=rand()%100;
		if (vet[i] < menor){
			menor = vet[i];
			indice = i;
			
		}
		printf("%d\n", vet[i]);
	}
	
	printf("\n");
	printf("Indice: %d %d", indice, menor);
}
