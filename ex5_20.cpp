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
