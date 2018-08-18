// Escrever um programa C que solicite ao usuario a digitacao de um numero inteiro no intervalo [100,999]. 
//Calcular a soma dos algarismos do numero digitado. Por exemplo, se o numero for 234, a soma deve ser 9.
#include <stdio.h>
int main() {
	int i;
	int i2;
	int i3;
	printf("Informe um valor entre 100 e 999: ");
	scanf("%1d%1d%1d", &i, &i2, &i3);
	
	i = i + i2 + i3;
	
	printf("A soma dos algarismos e: %d", i);
}
