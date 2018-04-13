#include <stdio.h>
int main() {
	int i;
	int s;
	
	printf("Informe um limite: ");
	scanf("%d", &i);
	
	printf("Informe um limite: ");
	scanf("%d", &s);
	
	if(s > i) {
		for(i; i<=s; i++) {
			printf("%d\n", i);
		}
	}
	else {
		for(s; s<=i; s++) {
			printf("%d\n", s);
		}
	}
}
