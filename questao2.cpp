#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	int n;
	int a;
	int b;
	float med = 0;
	int qtd = 0;
	int i;
	int vet[100];
	
	scanf("%d%d%d", &n, &a, &b);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		med += vet[i];
	}
	
	med = med/n;
	
	for (i = 0; i < n; i++) {
		if(vet[i] > med)
			qtd++;
	}
	
	printf("%.1f %d", med, qtd);
}
