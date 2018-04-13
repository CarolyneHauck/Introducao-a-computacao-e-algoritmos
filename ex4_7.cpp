#include <stdio.h>
int main() {
	int soma;
	int j;
	float med;
	
	for(int i = 1; i<=10; i++) {
		printf("Informe um inteiro: ");
		scanf("%d", &j);
		soma += j;
	}
	
	med = soma / 10.;
	printf("A media aritmetica e: %.2f", med);
}
