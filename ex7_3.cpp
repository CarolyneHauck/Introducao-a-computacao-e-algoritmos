#include <stdio.h>
float media(float, float, float);
int main() {
	float n1;
	float n2;
	float n3;
	float m;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	m = media(n1, n2, n3);
	printf("%.2f", m);
}

float media(float n1, float n2, float n3) {
	float media;
	
	media = (n1 + n2 + n3) / 3;
	return media;
}
