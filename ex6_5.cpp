#include <stdio.h>
int main() {
	char fraseA[81];
	char fraseB[81]="";
	int i;
	int j = 0;
	
	scanf("%80[^\n]",&fraseA);
	
	for(i = 0; fraseA[i] != '\0'; i++){
		if(fraseA[i] != ' '){
			fraseB[j] = fraseA[i];
			j++;
		}
	}
		
	printf("Depois: %s", fraseB);
}
