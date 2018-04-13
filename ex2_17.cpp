#include <stdio.h>
int main() {
	int i;
	int i2;
	int i3;
	printf("Informe um valor entre 100 e 999: ");
	scanf("%1d%1d%1d", &i, &i2, &i3);
	
	i = i + i2 + i3;
	
	printf("A soma dos algarismos e: %d", i);
}
