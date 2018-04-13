#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	char nome[10][11] = { "Pedro", "Maria", "Carlos", "Ana", "Igor", "Geovane", "Mateus", "Brenner", "Moises", "Joao" };
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("[%2d] %s\n", i+1, nome[i]);
	}
	
	printf("\n");
	
	i = rand()%10;
	
	printf("Sorteio: %d\n", i+1);
	printf("Vencedor: %s", nome[i]);
}
