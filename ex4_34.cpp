#include <stdio.h>
#include <math.h>
int main(){
	int i;
	int qtd=0;
	float f;
	
	do{
		scanf("%d", &i);
		
		if(i < 0)
			break;
		
		f = sqrt(i);
		i = f;
		
		if(i==f)
			qtd++;
	} while(1);
	
	printf("%d\n", qtd);
}
