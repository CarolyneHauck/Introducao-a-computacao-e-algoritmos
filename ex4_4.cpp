//Escrever uma programa C para exibir na tela uma tabela com a temperatura em graus Celsius e a temperatura equivalente em Fahrenheit, para valores entre 15 e 35 graus Celsius. 
//Formula de conversao: TF = 9TC/5 + 32
#include <stdio.h>
int main() {
	float f;
	
	for(int i=15; i<=35; i++) {
		f = (9. * i / 5.) + 32.;
		printf("Celsius:%.1d\tFahrenheit:%.1f\n", i, f);
	}
}
