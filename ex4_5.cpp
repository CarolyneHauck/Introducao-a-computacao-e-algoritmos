#include <stdio.h>
int main() {
	int i;
	int s;
	
	printf("Informe um limite inferior: ");
	scanf("%d", &i);
	
	printf("Informe um limite superior: ");
	scanf("%d", &s);
	
	for(int j = i; j<=s; j++) {
		printf("%d\n", j);
	}
}
