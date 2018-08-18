// Escrever um programa C que receba na entrada padrao uma frase digitada pelo usuario e que calcule e apresente na saıda padrao a quantidade de vogais.
#include <stdio.h>
#include <ctype.h>
int main() {
	char frase[81];
	int i;
	int qtd = 0;
	
	scanf("%80[^\n]",&frase);
	
	for(i=0; frase[i] != '\0'; i++){
		if(tolower(frase[i]) == 'a' ||
		   tolower(frase[i]) == 'e' ||
		   tolower(frase[i]) == 'i' ||
		   tolower(frase[i]) == 'o' ||
		   tolower(frase[i]) == 'u'){
			qtd++;
		}
	}
		
	printf("%d", qtd);
}
