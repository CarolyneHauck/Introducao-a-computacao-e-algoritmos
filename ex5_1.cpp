//Escrever um programa C para criar um vetor de float de tamanho 8 e inicializar cada elemento com um valor fornecido 
//pelo usuario em tempo de execucao. 
#include <stdio.h>
int main() {
	int i;
	float vet[8];
	
	for (i = 0; i < 8; i++)
		scanf("%f", &vet[i]);
	
	printf("\nConteudo do vetor:\n");
	
	for (i = 0; i < 8; i++)
		printf("%f\n",vet[i]);
}
