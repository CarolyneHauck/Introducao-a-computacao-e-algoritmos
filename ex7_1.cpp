//Escreva uma funcao que apresente na saıda padrao uma frase informada pelo usuario na entrada padrao. A saıda deve ser centralizada na
//linha. Considere que a frase digitada deve ter, no maximo, 80 caracteres.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void centralizar(char[]);
int main() {
	char str1[81];
	
	scanf(" %80[^\n]", &str1);
	
	centralizar(str1);
}

void centralizar(char str[]) {
	int i;
	int linha;
	
	i = strlen(str);
	
	linha = (80 - i) / 2;
	
	for(i=0; i < linha; i++) {
		printf(" ");
	}
	
	printf("%s", str);
}
