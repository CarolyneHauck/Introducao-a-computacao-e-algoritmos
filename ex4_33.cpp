#include <stdio.h>
int main(){
	int i;
	int min=1000;
	int max=1;
	
	do{
		scanf("%d", &i);
		
		if(i<1 || i>1000)
			continue;
		
		if(i<min)
			min = i;
		
		if(i>max)
			max = i;
	} while(i>=1 && i<=1000);
	
	printf("%d\n", min);
	printf("%d", max);
}
