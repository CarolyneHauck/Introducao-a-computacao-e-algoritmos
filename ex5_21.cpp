//Escrever um programa C que simule o lancamento de um dado 1000 vezes e que exiba na saıda padrao o numero de ocorrencias de cada face do dado.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
int main() {
	srand(time(0));
	int i;
	int vet[6] = {};
	
	for (i = 0; i < SIZE; i++) {
		vet[rand()%6]++;
	}
	
	for (i = 0; i < 6; i++) {
		printf("Lado: [%d] = %d \n", i+1, vet[i]);
	}
}
