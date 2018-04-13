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
