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
