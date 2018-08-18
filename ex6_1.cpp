//Escrever um programa C para substituir todos os espa¸cos em branco de uma frase digitada pelo usuario em tempo de execucao por _. 
//Exibir na saıda padrao a frase antes e depois de substituıdos os espacos.
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
