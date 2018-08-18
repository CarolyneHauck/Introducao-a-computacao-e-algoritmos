//Escrever um programa C que solicite ao usuario a digitacao em tempo de execucao de 10 numeros inteiros quaisquer.
//Calcule e exiba na tela a soma somente dos nu´meros positivos.
#include <stdio.h>
int main(){
	int i = 1;
	int num;
	int soma = 0;
	
	while(i<=10){
		scanf("%d", &num);
		
		if(num > 0)
			soma += num;
			
		i++;
	}
	
	printf("%d", soma);
}
