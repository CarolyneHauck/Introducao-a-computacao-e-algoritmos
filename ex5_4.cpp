//Escrever um programa C para criar um vetor de inteiros de tamanho 15, inicializar cada elemento com numeros crescentes e sequenciais a partir de 10 e exibir o conteudo do vetor na saıda padrao.
#include <stdio.h>
int main() {
	int i;
	int j = 10;
	int vet[15];
	
	for (i = 0; i < 15; i++) {
		vet[i] = j;
		j++;
	}
		
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < 15; i++)
		printf("%4d\n",vet[i]);
}
