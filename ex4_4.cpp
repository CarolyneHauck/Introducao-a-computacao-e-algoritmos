#include <stdio.h>
int main() {
	float f;
	
	for(int i=15; i<=35; i++) {
		f = (9. * i / 5.) + 32.;
		printf("Celsius:%.1d\tFahrenheit:%.1f\n", i, f);
	}
}
