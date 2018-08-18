//Escrever um programa C que solicite ao usu´ario a digitacao em tempo de execucao de diversos caracteres. A entrada de dados deve 
//terminar quando o usuario digitar qualquer caractere que nao for uma letra. Exibir na tela o total de letras maiusculas e o total de 
//letras minusculas digitadas.

#include <stdio.h>
#include <ctype.h>
int main(){
	char c;
	int maiuscula=0;
	int minuscula=0;
	
	do{
		scanf(" %c", &c);
		
		if(!isalpha(c))
			break;
		
		if(islower(c))
			minuscula++;
		else
			maiuscula++;
	} while(1);
	
	printf("%d\n", maiuscula);
	printf("%d", minuscula);
}
