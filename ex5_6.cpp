//Escrever um programa C para criar um vetor de inteiros de tamanho 18, inicializar cada elemento de forma que o conteudo do elemento seguinte seja igual ao conteu´do do elemento anterior adicionado de 2. O conteu´do do primeiro elemento do vetor deve ser fornecido pelo usuario em tempo de execucao. 
//Exibir o conteudo do vetor na saıda padrao.
#include <stdio.h>
int main() {
	int i;
	int j;
	int vet[18];
	
	scanf("%d", &j);
	
	for (i = 0; i < 18; i++) {
		vet[i] = j;
		j+=2;
	}
		
	printf("Conteudo do vetor:\n");
	
	for (i = 0; i < 18; i++)
		printf("%4d\n",vet[i]);
}
