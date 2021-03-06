//Escreva uma funcao que receba como argumento de entrada um vetor de tamanho N, onde N tambem e passado como argumento de entrada.
//A funcao deve retornar a media aritmetica dos elementos do vetor. Escreva tambem uma funcao para inicializar e exibir na saıda
//padrao um vetor com valores aleatorios no intervalo [A,B], onde A e B sao numeros inteiros quaisquer e B ≥ A. 
//Escreva uma aplicacao para gerar um vetor de tamanho 100 e exibir na saıda padrao a media aritmetica do conteudo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicializa(int[], int, int, int);
float media(int[], int);
void exibir(int[], int);
int main() {
	int v[100];
	int n;
	float m;
	
	scanf("%d", &n);
	
	inicializa(v, n, 0, 99);
	exibir(v, n);
	m = media(v, n);
	printf("\n%.2f", m);
}

void inicializa(int v[], int n, int a, int b) {
	srand(time(0));
	int i;
	for(i = 0; i<n; i++) {
		v[i] = rand()%(b-a+1)+a;
	}
}

float media(int v[], int n) {
	int i;
	float media = 0;
	
	for(i = 0; i<n; i++) {
		media += v[i];
	}
	
	return media / n;
}

void exibir(int v[], int n) {
	int i;
	for(i = 0; i<n; i++) {
		printf("%5d\n", v[i]);
	}
}
