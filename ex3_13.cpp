#include <stdio.h>
int main() {
	int i1;
	int i2;
	int i3;
	
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%d", &i1);
	
	printf("Digite o segundo lado do triangulo: ");
	scanf(" %d", &i2);
	
	printf("Digite o terceiro lado do triangulo: ");
	scanf(" %d", &i3);
	
	if((i1 >= i2 + i3) || (i2 >= i1 + i3) || (i3 >= i1 + i2))
		printf("Os valores nao correspondem aos lados de um triangulo!");
	else
		printf("Os valores formam um triangulo!");
}
