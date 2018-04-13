#include <stdio.h>
#include <ctype.h>
int main(){
	char c;
	int maiuscula=0;
	int minuscula=0;
	
	do{
		scanf(" %c", &c);
		
		if(!isalpha(c))
			break;
		
		if(islower(c))
			minuscula++;
		else
			maiuscula++;
	} while(1);
	
	printf("%d\n", maiuscula);
	printf("%d", minuscula);
}
