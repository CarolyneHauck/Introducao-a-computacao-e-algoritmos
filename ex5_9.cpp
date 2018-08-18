//Escrever um programa C para criar um vetor de inteiros de tamanho 10 e inicializar cada elemento com valores inteiros no intervalo [0,9]
//(na declaracao) e exibir o conteudo do array na saıda padrao. Em seguida, multiplicar por 2 o conteudo de cada elemento e 
//exibir novamente o vetor na saıda padrao.
#include <stdio.h>
#define SIZE 10
int main() {
	int i;
	int vet[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < SIZE; i++)
		printf("%4d %4d\n", vet[i], vet[i] * 2);
}
