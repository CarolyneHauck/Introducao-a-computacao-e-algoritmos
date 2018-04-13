#include <stdio.h>
int main() {
	float i;
	float i2;
	float i3;
	printf("Informe tres numeros reais: ");
	scanf("%f", &i);
	scanf("%f", &i2);
	scanf("%f", &i3);
	i = (i + i2 + i3) / 3;
	printf("A media aritmetica e: %f", i);
}
