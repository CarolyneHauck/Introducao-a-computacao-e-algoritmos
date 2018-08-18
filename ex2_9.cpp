//Escreva um programa C que solicite ao usu´ario a entrada de 3 numeros inteiros quaisquer. 
//O programa deve calcular e apresentar na tela a soma dos numeros informados pelo usuario.
#include <stdio.h>
int main() {
	int i;
	int i2;
	int i3;
	printf("Informe tres numeros inteiros: ");
	scanf("%d", &i);
	scanf("%d", &i2);
	scanf("%d", &i3);
	i = (i + i2 + i3) / 3;
	printf("A media aritmetica e: %d", i);
}
