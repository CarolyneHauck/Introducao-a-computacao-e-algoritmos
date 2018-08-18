//Escrever um programa C que solicite ao usuario a digitacao de diversos numeros inteiros e positivos. 
//O programa deve veriﬁcar cada um dos numeros fornecidos e um quadrado perfeito. O ﬂag e um numero nao-positivo. 
//Um numero e dito quadrado perfeito quando a raiz quadrada e um numero inteiro.
#include <stdio.h>
#include <math.h>
int main(){
	int i;
	int qtd=0;
	float f;
	
	do{
		scanf("%d", &i);
		
		if(i < 0)
			break;
		
		f = sqrt(i);
		i = f;
		
		if(i==f)
			qtd++;
	} while(1);
	
	printf("%d\n", qtd);
}
