#include <stdio.h>
int main(){
	int i;
	int min=1000;
	int max=1;
	
	scanf("%d", &i);
	
	while(i>=1 && i<=1000){
		
		if(i<min)
			min = i;
		
		if(i>max)
			max = i;
		
		scanf("%d", &i);
	}
	
	printf("%d\n", min);
	printf("%d", max);
}
