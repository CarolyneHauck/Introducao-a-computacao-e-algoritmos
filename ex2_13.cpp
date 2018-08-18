//Escreva um programa C que solicite ao usuario a digitacao do seu ano de nascimento. 
//O programa deve calcular e apresentar na tela: (a) a idade do usuario e (b) em qual ano tera 65 anos.
#include <stdio.h>
int main() {
	int f;
	int f2;
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &f);
	
	f2 = 2015 - f;
	
	printf("Sua idade e: %d\n", f2);
	
	f2 = f + 65;
	
	printf("Voce tera 65 anos em: %d\n", f2);
}
