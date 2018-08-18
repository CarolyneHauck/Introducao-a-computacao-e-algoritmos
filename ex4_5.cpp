//Escrever uma programa C que exiba na tela todos os numeros inteiros compreendidos entre um limite inferior e um
//limite superior fornecidos pelo usu´ario em tempo de execu¸ca˜o.
#include <stdio.h>
int main() {
	int i;
	int s;
	
	printf("Informe um limite inferior: ");
	scanf("%d", &i);
	
	printf("Informe um limite superior: ");
	scanf("%d", &s);
	
	for(int j = i; j<=s; j++) {
		printf("%d\n", j);
	}
}
