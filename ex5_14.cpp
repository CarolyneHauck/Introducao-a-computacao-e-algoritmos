#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define SIZE 15
int main() {
	srand(time(0));
	int i;
	char vetA[SIZE];
	char vetB[SIZE];
	
	for (i = 0; i < SIZE; i++) {
		vetA[i]=toupper(rand()%26+65);
	}
	
	for (i = 0; i < SIZE; i++) {
		vetB[i]=tolower(vetA[i]);
	}
	
	for (i = 0; i < SIZE; i++) {
		printf("Vetor A: %c\t Vetor B: %c\n", vetA[i], vetB[i]);
	}
}
