#include<stdio.h>
#include<string.h>
int main() {
	int i;
	int n;
	char str1[81]="";
	char str2[81]="";
	
	scanf(" %80[^\n]", &str1);
	
	n = strlen(str1);
	
	for(i=0;i<n;i++) {
		strncpy(str2, str1, i+1);
		printf("%s\n", str2);
	}
}
