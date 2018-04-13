#include <stdio.h>
#include <math.h>
int main() {
	float h;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &h);
	
	printf("Digite seu sexo. (M)Masculino ou (F)Feminino: ");
	scanf(" %c", &sexo);
	
	if (sexo == 'M')
	{
		h = h * 72.7 - 58;
		printf("Seu peso ideal e: %.3f", h);
	}
	else if (sexo == 'F')
	{
		h = h * 62.1 - 44.7;
		printf("Seu peso ideal e: %.3f", h);
	}
	else
	{
		printf("Sexo invalido!");
	}
}
