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
