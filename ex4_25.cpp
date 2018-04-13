#include <stdio.h>
int main(){
	float a = 5000000;
	float b = 7000000;
	int ano = 0;
	
	while(a<=b){
		a+=a*3./100;
		b+=b*2./100;
		ano++;
	}
	
	printf("%d", ano);
}
