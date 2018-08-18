//Escreva um programa C para exibir na tela em ordem decrescente todos os numeros ´ımpares no intervalo [1,50].
#include <stdio.h>
int main() {
	for(int i=49; i>=1; i -= 2) {
		printf("%d\n", i);
	}
}
