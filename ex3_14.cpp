//Escrever um programa C que solicite ao usuario a digita¸cao dos coeﬁcientes de uma equacao do segundo grau 
//(ax2 +bx+c = 0) e que calcule e retorne as raızes reais da equacao. 
//Observe que uma equacao do 2o grau pode ter duas, uma ou nenhuma raiz real, dependendo do valor de ∆, onde ∆ = b2 −4ac. 
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
