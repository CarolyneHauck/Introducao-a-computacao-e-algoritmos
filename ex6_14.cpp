#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
int main() {
	srand(time(0));
	char str1[6];
	char str2[6] = "";
	int qtd = 0;
	int i;
	
	scanf("%5[^\n]", &str1);
	
	do {
		for(i = 0; i < 5; i++){
			str2[i] = rand()%26 + 65;
		}
	
		qtd++;
	} while(strcmp(str1,str2) != 0);
	
	printf("%s:", str2);
	printf(" %d", qtd);
}
