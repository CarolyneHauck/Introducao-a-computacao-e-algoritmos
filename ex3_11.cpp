#include <stdio.h>
int main() {
	int i;
	
	printf("Informe o codigo de origem do produto: ");
	scanf("%d", &i);
	
	if (i == 1)
		printf("Procedencia Sul!");
	else if (i == 2)
		printf("Procedencia Norte!");
	else if (i == 3)
		printf("Procedencia Leste!");
	else if (i == 4)
		printf("Procedencia Oeste!");
	else if (i == 5 || i == 6)
		printf("Procedencia Nordeste!");
	else if (i == 7 || i == 8 || i == 9)
		printf("Procedencia Sudeste!");
	else if (i >= 10 && i <= 20)
		printf("Procedencia Centro-Oeste!");
	else if (i >= 21 && i <= 30)
		printf("Procedencia Noroeste!");
	else
		printf("Codigo de origem invalido!");
}
