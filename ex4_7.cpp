//Escreva um programa C que solicite ao usuario a digitacao de 10 numeros inteiros e positivos e que calcule e exiba na tela a 
//media aritmetica dos numeros fornecidos.
#include <stdio.h>
int main() {
	int soma;
	int j;
	float med;
	
	for(int i = 1; i<=10; i++) {
		printf("Informe um inteiro: ");
		scanf("%d", &j);
		soma += j;
	}
	
	med = soma / 10.;
	printf("A media aritmetica e: %.2f", med);
}
