//Escreva uma funcao que calcule e retorne a media ponderada de 3 numeros inteiros fornecidos como argumentos de entrada. 
//Os pesos devem ser 1, 2 e 3 respectivamente para o primeiro, segundo e terceiro numeros.

#include <stdio.h>
float media(int, int, int);
int main() {
	int n1;
	int n2;
	int n3;
	float m;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	m = media(n1, n2, n3);
	printf("%.2f", m);
}

float media(int n1, int n2, int n3) {
	float media;
	
	media = (n1 + n2*2 + n3*3) / 6.;
	return media;
}
