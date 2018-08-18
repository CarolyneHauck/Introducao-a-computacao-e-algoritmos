//Dado um pais A, com 5 milhoes de habitantes e uma taxa de natalidade de 3% ao ano, e um pais B com 7 milhoes de habitantes e uma taxa de natalidade de 2% ao ano, fazer um programa C para calcular e exibir na tela o tempo necessario para que a populacao 
//do pais A ultrapasse a popula¸c˜ao do pais B.
#include <stdio.h>
int main(){
	float a = 5000000;
	float b = 7000000;
	int ano = 0;
	
	while( 1 ){
		a+=a*3./100;
		b+=b*2./100;
		ano++;
		if(a>b)
			break;
	}
	
	printf("%d", ano);
}
