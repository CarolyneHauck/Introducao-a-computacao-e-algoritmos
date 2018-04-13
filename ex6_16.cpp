#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	char sujeito[4][20] = { "Pedro", "Maria", "Carlos", "Ana" };
	char verbo[4][20] = { "gosta de", "nao gosta de", "adora", "detesta" };
	char predicado[4][20] = { "feijoada", "futebol", "samba", "feriado" };
	int i;
	
	i = rand()%4;
	
	printf("%s ", sujeito[i]);
	
	i = rand()%4;
	
	printf("%s ", verbo[i]);
	
	i = rand()%4;
	
	printf("%s.", predicado[i]);
}
