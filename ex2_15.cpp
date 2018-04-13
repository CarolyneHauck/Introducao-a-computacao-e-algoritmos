#include <stdio.h>
int main() {
	float h;
	float m;
	float s;
	printf("Informe a hora atual no formato HHMMSS: ");
	scanf("%2f%2f%2f", &h, &m, &s);
	
	h = h * 60 * 60;
	m = m * 60;
	s = s + m + h;
	
	printf("A quantidade de segundos transcorridos e: %.0f", s);
}
