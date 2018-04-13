#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicializaA(int[], int, int, int);
void inicializaB(int[], int[], int, int);
void exibir(int[], int);
int main() {
	int v1[100];
	int v2[100];
	int n;
	
	scanf("%d", &n);
	
	inicializaA(v1, n, 0, 99);
	inicializaB(v1, v2, n, 5);
	exibir(v1, n);
	printf("\n");
	exibir(v2, n);
}

void inicializaA(int v1[], int n, int a, int b) {
	srand(time(0));
	int i;
	for(i = 0; i<n; i++) {
		v1[i] = rand()%(b-a+1)+a;
	}
}

void inicializaB(int v1[], int v2[], int n, int x) {
	int i;
	for(i = 0; i<n; i++) {
		v2[i] = v1[i] * x;
	}
}

void exibir(int v[], int n) {
	int i;
	for(i = 0; i<n; i++) {
		printf("%5d\n", v[i]);
	}
}
