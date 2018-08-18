//Escrever um programa C para criar e exibir na saıda padrao um vetor A de inteiros de tamanho 40 cujo conteudo 
//corresponda a numeros randomicos no intervalo [0,99]. O programa deve gerar e exibir na saıda padrao um novo vetor 
//A excluindo todas as ocorrencias de numeros repetidos do vetor A. Por exemplo, se o vetor A come¸car por 45,56,45,3,... 
//o vetor B comecara por 45,56,3,...
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40
int main() {
	srand(time(0));
	int i;
	int j;
	int flag = 0;
	int vet[SIZE];
	int vetB[SIZE] = {};
	
	for (i = 0; i < SIZE; i++) {
		vet[i]=rand()%100;
	}
	
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++){
			if(vet[i] == vet[i+1]){
				flag = 1;
				break;
			}
		}
		
		if(flag == 0){
			vetB[i] = vet[i];
		}
		flag = 0;
	}
	
	for (i = 0; i < SIZE; i++){
		printf("Vetor A: %d\t Vetor B: %d\n", vet[i], vetB[i]);
	}
}
