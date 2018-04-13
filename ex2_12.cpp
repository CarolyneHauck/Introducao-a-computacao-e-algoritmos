#include <stdio.h>
int main() {
	float f;
	float f2;
	printf("Informe o comprimento da base do triangulo: ");
	scanf("%f", &f);
	printf("Informe o comprimento da altura do triangulo: ");
	scanf("%f", &f2);
	
	f = f * f2 / 2;
	printf("A area do triangulo retangulo e: %.1f u.c.", f);
}
