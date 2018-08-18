//Escrever um programa C que receba na entrada padao uma frase digitada pelo usuario e que apresente na saıda padrao a frase retirando-se todos os espacos em branco.
#include <stdio.h>
int main() {
	char fraseA[81];
	char fraseB[81]="";
	int i;
	int j = 0;
	
	scanf("%80[^\n]",&fraseA);
	
	for(i = 0; fraseA[i] != '\0'; i++){
		if(fraseA[i] != ' '){
			fraseB[j] = fraseA[i];
			j++;
		}
	}
		
	printf("Depois: %s", fraseB);
}
