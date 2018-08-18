//Escreva um programa C que solicite ao usuario a digitacao de duas notas de um aluno (no intervalo [0,100]) e que calcule e
//apresente na tela a media aritmetica das notas e a mensagem segundo a regra:
//• media menor que 40 – Reprovado 
//• media entre 40 e 70 – Exame ﬁnal 
//• media maior que 70 – Aprovado

#include <stdio.h>
#include <math.h>
int main() {
	float n1;
	float n2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf(" %f", &n2);
	
	n1 = (n1 + n2) / 2;
	
	printf("Media das notas: %.1f\n", n1);
	
	if (n1 < 40)
		printf("Aluno reprovado!");
	else if (n1 > 70)
		printf("Aluno aprovado!");
	else
		printf("Aluno devera fazer o exame final!");
}
