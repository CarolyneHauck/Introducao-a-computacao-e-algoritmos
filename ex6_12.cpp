#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str1[81];
	char str2[81];
	int i;
	
	scanf(" %80[^\n]", &str1);
	scanf(" %80[^\n]", &str2);
	
	for(i = 0; str1[i] != '\0'; i++)
		str1[i] = toupper(str1[i]);
		
	for(i = 0; str2[i] != '\0'; i++)
		str2[i] = toupper(str2[i]);
		
	if(strstr(str1,str2)==NULL)
		printf("Diferentes");
	else
		printf("Iguais");
}
