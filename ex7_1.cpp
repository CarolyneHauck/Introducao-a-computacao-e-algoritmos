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
