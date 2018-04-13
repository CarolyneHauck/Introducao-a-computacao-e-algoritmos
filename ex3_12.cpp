#include <stdio.h>
int main() {
	int i;
	
	printf("Informe a idade do nadador: ");
	scanf("%d", &i);
	
	if (i >= 5 && i <= 7)
		printf("Categoria Infantil!");
	else if (i >= 8 && i <= 10)
		printf("Categoria Juvenil!");
	else if (i >= 11 && i <= 15)
		printf("Categoria Adolescente!");
	else if (i >= 16 && i <= 30)
		printf("Categoria Adulta!");
	else if (i > 30)
		printf("Categoria Senior!");
	else
		printf("Categoria invalida!");
}
