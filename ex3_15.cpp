#include <stdio.h>
int main() {
	int i1;
	int i2;
	int i3;
	int i4;
	
	printf("Digite um numero no intervalo [1000, 9999]: ");
	scanf("%1d%1d%1d%1d", &i1, &i2, &i3, &i4);
	
	if((i1 == i4) && (i2 == i3))
		printf("O numero e palindromo!");
	else
		printf("O numero nao e palindromo!");
}
