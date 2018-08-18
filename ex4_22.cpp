//Escrever um programa C que solicite ao usuario a digitacao em tempo de execucao de diversos caracteres. 
//A entrada de dados deve terminar quando o usuario digitar um ponto. Exibir na tela o total de caracteres digitados.
#include <stdio.h>
int main(){
	char c;
	int soma = 0;
	
	scanf(" %c", &c);
	
	while(c!='.'){
		scanf(" %c", &c);
		soma++;
	}
	
	printf("%d", soma);
}
