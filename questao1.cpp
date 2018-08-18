#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	int n;
	int a;
	int b;
	int c;
	int d;
	int i;
	int vet[100];
	
	scanf("%d%d%d", &n, &a, &b);
	
	for (i = 0; i < n; i++) {
		vet[i] = rand()%(b-a+1)+a;
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	scanf("%d%d", &c, &d);
	
	for (i = 0; i < n; i++) {
		if(vet[i] < c)
			vet[i] = c;
		else if (vet[i] > d)
			vet[i] = d;
		
		printf("%d ", vet[i]);
	}
}
