//Capicua ou palındromo e deﬁnido como um numero que lido da direita para a esquerda ou da esquerda para a direita e identico. 
//Escreva um programa C que solicite ao usuario a digitacao de um numero inteiro e positivo no intervalo [1000,9999] 
//e que veriﬁque se o numero e palındromo.
#include <stdio.h>
int main() {
	int i1;
	int i2;
	int i3;
	int i4;
	
	printf("Digite um numero no intervalo [1000, 9999]: ");
	scanf("%1d%1d%1d%1d", &i1, &i2, &i3, &i4);
	
	if((i1 == i4) && (i2 == i3))
		printf("O numero e palindromo!");
	else
		printf("O numero nao e palindromo!");
}
