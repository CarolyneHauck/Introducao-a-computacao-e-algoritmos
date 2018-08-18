//Gosto Nao Se Discute (junho/2010) Seu objetivo nessa questao consiste em gerar e exibir uma frase aleatoria em uma unica linha na tela.
//A frase deve conter tres elementos: sujeito, verbo e predicado, nessa ordem. O sujeito deve ser escolhido randomicamente pelo
//programa entre 4 opcoes possıveis: Pedro, Maria, Carlos e Ana. Analogamente, o verbo deve ser escolhido aleatoriamente pelo programa 
//entre gosta de, nao gosta de, adora e detesta. Por ﬁm, o predicado deve ser escolhido randomicamente pelo programa entre feijoada, 
//futebol, samba e feriado. Exemplo de execucao:
//na detesta feriado.

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
