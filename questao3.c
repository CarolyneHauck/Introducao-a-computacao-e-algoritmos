#include <stdio.h>
#include <math.h>
int main (){
	int num;
	int i;
	float som;
	
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++){
		som += pow(-1., i) * (4. / (2. * i + 1.));
	}
	
	printf("%f", som);
}
