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
