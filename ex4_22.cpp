#include <stdio.h>
int main(){
	char c;
	int soma = 0;
	
	scanf(" %c", &c);
	
	while(c!='.'){
		scanf(" %c", &c);
		soma++;
	}
	
	printf("%d", soma);
}
