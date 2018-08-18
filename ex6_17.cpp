//Quem Ganhou A Rifa? (junho/2010) Escreva um programa que simule o sorteio de uma rifa. Cada numero no intervalo [1,10] deve ser 
//associado a um nome. Os nomes e respectivos nu´meros devem ser exibidos na tela. Em seguida, o programa deve sortear aleatoriamente 
//um numero e apresentar o nome do respectivo vencedor na tela. Os 10 (dez) nomes podem ser digitados pelo usuario em tempo de execucao 
//ou inseridos diretamente no codigo fonte do programa. Considere cada nome com ate 10 caracteres. Exemplo de execucao:

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
