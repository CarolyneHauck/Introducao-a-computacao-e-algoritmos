// Escrever um programa C para criar um vetor de inteiros de tamanho 10, inicializar cada elemento com numeros crescentes ımpares a 
//partir de 1 e exibir o conteudo do vetor na saıda padrao.
#include <stdio.h>
int main() {
	int i;
	int j = 1;
	int vet[10];
	
	for (i = 0; i < 10; i++) {
		while (j%2 == 0) {
			j++;
		}
		
		vet[i] = j;
		j++;
	}
		
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < 10; i++)
		printf("%4d\n",vet[i]);
}
