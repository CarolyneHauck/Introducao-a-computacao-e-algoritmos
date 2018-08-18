//Escreva um programa C que solicite ao usu´ario a digitac¸˜ao de N nu´meros inteiros em tempo de execu¸c˜ao, onde N ∈N ´e fornecido previamente pelo usu´ario na entrada padr˜ao. Para cada um dos N nu´meros informados, o programa deve exibir na sa´ıda padr˜ao se o valor digitado ´e par ou ´ımpar.
//Desconsidere a possibilidade de o usu´ario fornecer valores inv´alidos na entrada de dados. Chame o programa de questao1.c. A entrada e a sa´ıda devem seguir rigorosamente o exemplo de execu¸c˜ao abaixo.
//3 777 Impar 5351 Impar 28928 Par

#include <stdio.h>
#include <math.h>
int main (){
	int qtd;
	int num;
	int i;
	
	scanf("%d", &qtd);
	
	for(i = 1; i <= qtd; i++){
		scanf("%d", &num);
		num  = num % 2;
		
		if(num == 0){
			printf("Par\n");
		}
		else{
			printf("Impar\n");
		}
	}
}
