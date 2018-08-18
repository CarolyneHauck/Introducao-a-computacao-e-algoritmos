//Escrever um programa C para criar um vetor de inteiros de tamanho 10 e inicializar cada elemento com um valor no intervalo [1,10] fornecido pelo usu´ario em tempo de execu¸c˜ao. Caso o usu´ario digite um nu´mero inteiro fora do intervalo, deve ser solicitado a digitar novamente. 
//Esse processo deve se repetir at´e que seja fornecido um valor v´alido.
#include <stdio.h>
int main() {
	int i;
	int j;
	int vet[10];
	
	for (i = 0; i < 10; i++) {
		do {
			printf("Digite um inteiro [%2d]: ", i);
			scanf("%d", &j);
		} while(j < 0 || j > 10);
		
		vet[i] = j;
	}
	
	printf("\nConteudo do vetor:\n");
	
	for (i = 0; i < 10; i++)
		printf("%d\n",vet[i]);
}
