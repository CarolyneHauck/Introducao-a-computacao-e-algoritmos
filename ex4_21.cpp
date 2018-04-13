#include <stdio.h>
int main(){
	int i = 1;
	int num;
	int soma = 0;
	
	while(i<=10){
		scanf("%d", &num);
		
		if(num > 0)
			soma += num;
			
		i++;
	}
	
	printf("%d", soma);
}
