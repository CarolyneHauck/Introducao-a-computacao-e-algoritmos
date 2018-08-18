// Escrever um programa C que solicite ao usuario a digitacao em tempo de execucao de diversos numeros inteiros no intervalo [1,1000]. 
//O ﬂag e qualquer valor fora desse intervalo. Apresentar na tela o maior e o menor valor valido – ou seja, dentro do intervalo – 
//digitado pelo usuario.
#include <stdio.h>
int main(){
	int i;
	int min=1000;
	int max=1;
	
	scanf("%d", &i);
	
	while(i>=1 && i<=1000){
		
		if(i<min)
			min = i;
		
		if(i>max)
			max = i;
		
		scanf("%d", &i);
	}
	
	printf("%d\n", min);
	printf("%d", max);
}
