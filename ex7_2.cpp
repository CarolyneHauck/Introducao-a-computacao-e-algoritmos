//Escreva uma funcao que calcule e retorne a soma da sequencia 1,2,...,N, onde N ´e um numero inteiro fornecido como argumento de entrada.
#include <stdio.h>
int soma(int);
int main() {
	int i;
	int s;
	
	scanf("%d", &i);
	
	s = soma(i);
	printf("%d", s);
}

int soma(int i) {
	int j;
	int soma = 0;
	
	for(j=1; j <= i; j++) {
		soma += j;
	}
	
	return soma;
}
