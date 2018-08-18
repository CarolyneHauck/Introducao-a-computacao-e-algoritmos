#include <stdio.h>
int main (){
	float x;
	float y;
	
	scanf("%f%f", &x, &y);
	
	if(y <= 4 && y >= -5){
		if(x > 2 && x <= 3){
			printf("UZBEQUISTAO");
		}
		else if(x >= 1 && x < 2){
			printf("TURCOMENISTAO");
		}
		else if(x == 2){
			printf("ONU");
		}
		else{
			printf("POCO INEXISTENTE");
		}
	}
	else{
		printf("POCO INEXISTENTE");
	}
}
