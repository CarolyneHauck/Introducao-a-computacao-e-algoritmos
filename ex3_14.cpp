#include <stdio.h>
#include <math.h>
int main() {
	float a;
	float b;
	float c;
	float delta;
	float x;
	
	printf("Digite os coeficientes da equacao [ax2+bx+c=0]: ");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	if(delta > 0)
	{
		x = (-b + sqrt(delta)) / (2 * a);
		printf("Raiz 1: %.2f\n", x);
		
		x = (-b - sqrt(delta)) / (2 * a);
		printf("Raiz 2: %.2f", x);
	}
	else if (delta == 0)
	{
		x = (-b + sqrt(delta)) / (2 * a);
		printf("Raiz 1: %.2f", x);
	}
	else
	{
		printf("A equacao informada nao possui raizes!");
	}
}
