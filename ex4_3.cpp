//Escreva um programa C para exibir na tela em ordem crescente 10 numeros reais no intervalo [0,1].
#include <stdio.h>
int main() {
	for(float i=0; i<1.0; i += 0.1) {
		printf("%.1f\n", i);
	}
}
