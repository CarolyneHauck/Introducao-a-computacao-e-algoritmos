#include<stdio.h>
#include<string.h>
int main() {
	int i;
	int n;
	char str1[4];
	char str2[4];
	
	scanf(" %3[^\n]", &str1);
	scanf(" %3[^\n]", &str2);
	scanf("%d", &n);
	
	char str3[n+1];
	
	for(i=0;i<n/6;i++) {
		strcpy(str3+i*6, str1);
		strcpy(str3+i*6+3, str2);
	}
	
	str3[n] = '\0';
	printf("%s", str3);
}
