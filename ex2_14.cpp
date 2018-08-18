//Escreva um programa C que calcule e apresente na tela a media ponderada de duas notas fornecidas pelo usuario 
//em tempo de execucao. Considere peso 2 para a primeira prova e 3 para a segunda prova
#include <stdio.h>
int main() {
	float f;
	float f2;
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &f);
	
	printf("Informe a segunda nota do aluno: ");
	scanf("%f", &f2);
	
	f = ((f * 2) + (f2 * 3)) / 5;
	
	printf("A media ponderada e: %.1f", f);
}
