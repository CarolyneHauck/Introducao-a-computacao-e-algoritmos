//Segundo uma tabela medica, o peso ideal esta relacionado com a altura e o sexo. Fazer um programa C que receba, em tempo de execucao,
//a altura H e o sexo de uma pessoa e que calcule e imprima o seu peso ideal,
//utilizando as seguintes formulas: (a) para homens: 72.7×H −58 e (b) para mulheres 62.1×H −44.7.
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
