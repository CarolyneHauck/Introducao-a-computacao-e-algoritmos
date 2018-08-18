//Escreva um programa C que solicite ao usuario a digitacao de um numero real. O programa deve exibir na tela o valor inteiro mais proximo do numero real informado.
//Por exemplo, se o numero digitado for 3.8, o valor inteiro mais proximo e 4.
#include <stdio.h>
int main() {
	float f;
	
	printf("Informe um valor real: ");
	scanf("%f", &f);
	
	printf("O inteiro mais proximo e: %.0f", f);
}
