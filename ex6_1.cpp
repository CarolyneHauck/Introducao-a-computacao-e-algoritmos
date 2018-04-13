#include <stdio.h>
int main() {
	char frase[81];
	int i;
	
	scanf("%80[^\n]",&frase);
	
	for(i=0; frase[i] != '\0'; i++){
		if(frase[i] == ' '){
			frase[i] = '_';
		}
	}
		
	printf("Depois: %s", frase);
}
