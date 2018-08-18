//Escrever um programa C para criar um vetor de inteiros de tamanho 12, inicializar cada
//elemento com numeros decrescentes multiplos de 3 a partir de 90 e exibir o conteudo do vetor na saıda padrao.
#include <stdio.h>
int main() {
	int i;
	int j = 90;
	int vet[12];
	
	for (i = 0; i < 12; i++) {
		while (j%3 != 0) {
			j--;
		}
		
		vet[i] = j;
		j--;
	}
		
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < 12; i++)
		printf("%4d\n",vet[i]);
}
