#include <stdio.h>
int main(){
	float a = 5000000;
	float b = 7000000;
	int ano = 0;
	
	while( 1 ){
		a+=a*3./100;
		b+=b*2./100;
		ano++;
		if(a>b)
			break;
	}
	
	printf("%d", ano);
}
