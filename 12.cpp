#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int ano, doiq, atual, tual;
	
	printf("Informe o seu ano de nascimento:");
	scanf("%d", &ano);
	printf("Informe o ano atual:");
	scanf("%d", &atual);
	
	tual = atual - ano;
	doiq = 2015 - ano;
	
	printf("%s %d", "A sua idade atual e:", tual);
	printf("%s %d", "A sua idade em 2015 e:", doiq);
	
	system("pause");
	return 0;
}
