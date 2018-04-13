#include <stdio.h>
int main() {
	float f;
	float f2;
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &f);
	
	printf("Informe a segunda nota do aluno: ");
	scanf("%f", &f2);
	
	f = ((f * 2) + (f2 * 3)) / 5;
	
	printf("A media ponderada e: %.1f", f);
}
