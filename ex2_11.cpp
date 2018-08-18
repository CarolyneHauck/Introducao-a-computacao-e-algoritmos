//Escreva um programa C que solicite ao usuario o salario de um funcionario e que calcule e mostre na tela o novo salario, 
//sabendo-se que houve um reajuste de 12.5%.
#include <stdio.h>
int main() {
	float salario;
	float reajuste;
	
	printf("Informe o salario: ");
	scanf("%f", &salario);
	
	printf("Informe o reajuste: ");
	scanf("%f", &reajuste);
	
	salario = salario + (salario * reajuste / 100);
	printf("O salario reajustado e: R$%.2f", salario);
}
