#include <stdio.h>
#include <ctype.h>
int main() {
	char c;
	int soma;
	
	for(int i = 1; i<=10; i++) {
		printf("Informe um caracter: ");
		scanf("%c", &c);
		
		if(isalpha(c)){
			soma++;
		}
	}
	
	printf("Voce digitou %d caracteres do alfabeto.", soma);
}
