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
