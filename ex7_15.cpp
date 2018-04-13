#include <stdio.h>
#include<string.h>
int qtdPalavras(char[]);
int main() {
	char str[81];
	int i;
	
	scanf(" %80[^\n]", &str);
	
	i = qtdPalavras(str);
	
	printf("%d", i);
}

int qtdPalavras(char str[]) {
	int i;
	int qtd = 1;
	
	for(i=0; str[i] != '\0'; i++) {
		if(str[i] == ' ')
			qtd++;
	}
	
	return qtd;
}
