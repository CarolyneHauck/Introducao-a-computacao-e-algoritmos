//Escrever uma programa C que exiba na tela em ordem crescente todos os numeros inteiros compreendidos entre um limite inferior e um
//limite superior fornecidos pelo usuario em tempo de execcao. Observe que o usuario pode digitar primeiro o limite superior.
#include <stdio.h>
int main() {
	int i;
	int s;
	
	printf("Informe um limite: ");
	scanf("%d", &i);
	
	printf("Informe um limite: ");
	scanf("%d", &s);
	
	if(s > i) {
		for(i; i<=s; i++) {
			printf("%d\n", i);
		}
	}
	else {
		for(s; s<=i; s++) {
			printf("%d\n", s);
		}
	}
}
