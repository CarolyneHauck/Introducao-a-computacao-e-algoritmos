#include <stdio.h>
int main() {
	int i;
	int j;
	int vet[10];
	
	for (i = 0; i < 10; i++) {
		do {
			printf("Digite um inteiro [%2d]: ", i);
			scanf("%d", &j);
		} while(j < 0 || j > 10);
		
		vet[i] = j;
	}
	
	printf("\nConteudo do vetor:\n");
	
	for (i = 0; i < 10; i++)
		printf("%d\n",vet[i]);
}
